/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qmoftype.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofObject>
#include <QtMof/QMofPackage>

QT_BEGIN_NAMESPACE

/*!
    \class QMofType

    \inmodule QtMof

    \brief A type constrains the values represented by a typed element.
 */
QMofType::QMofType() :
    _package(0)
{
}

QModelingElement *QMofType::clone() const
{
    QMofType *c = new QMofType;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QMofPackage *>(package()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the owning package of this classifier, if any.
 */
QMofPackage *QMofType::package() const
{
    // This is a read-write association end

    return _package;
}

void QMofType::setPackage(QMofPackage *package)
{
    // This is a read-write association end

    if (_package != package) {
        _package = package;
        if (package && package->asQModelingObject() && this->asQModelingObject())
            QObject::connect(package->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setPackage()));
    }
}

// OPERATIONS

/*!
    The query conformsTo() gives true for a type that conforms to another. By default, two types do not conform to each other. This query is intended to be redefined for specific conformance situations.
 */
bool QMofType::conformsTo(QMofType *other) const
{
    qWarning("QMofType::conformsTo(): to be implemented (operation)");

    Q_UNUSED(other);
    return bool ();
}

bool QMofType::isInstance(QMofObject *object) const
{
    qWarning("QMofType::isInstance(): to be implemented (operation)");

    Q_UNUSED(object);
    return bool ();
}

QT_END_NAMESPACE

