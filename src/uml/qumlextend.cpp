/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlextend.h"

#include "private/qumlextendobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExtensionPoint>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>

/*!
    \class QUmlExtend

    \inmodule QtUml

    \brief A relationship from an extending use case to an extended use case that specifies how and when the behavior defined in the extending use case can be inserted into the behavior defined in the extended use case.
 */
QUmlExtend::QUmlExtend(bool createQModelingObject) :
    _condition(0),
    _extendedCase(0),
    _extension(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlExtendObject(this));
}

QModelingElement *QUmlExtend::clone() const
{
    QUmlExtend *c = new QUmlExtend;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (condition())
        c->setCondition(dynamic_cast<QUmlConstraint *>(condition()->clone()));
    if (extendedCase())
        c->setExtendedCase(dynamic_cast<QUmlUseCase *>(extendedCase()->clone()));
    if (extension())
        c->setExtension(dynamic_cast<QUmlUseCase *>(extension()->clone()));
    foreach (QUmlExtensionPoint *element, extensionLocations())
        c->addExtensionLocation(dynamic_cast<QUmlExtensionPoint *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.
 */
QUmlConstraint *QUmlExtend::condition() const
{
    // This is a read-write association end

    return _condition;
}

void QUmlExtend::setCondition(QUmlConstraint *condition)
{
    // This is a read-write association end

    if (_condition != condition) {
        // Adjust subsetted properties
        removeOwnedElement(_condition);

        _condition = condition;
        if (condition && condition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(condition->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setCondition()));
        condition->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (condition) {
            addOwnedElement(condition);
        }
    }
}

/*!
    References the use case that is being extended.
 */
QUmlUseCase *QUmlExtend::extendedCase() const
{
    // This is a read-write association end

    return _extendedCase;
}

void QUmlExtend::setExtendedCase(QUmlUseCase *extendedCase)
{
    // This is a read-write association end

    if (_extendedCase != extendedCase) {
        // Adjust subsetted properties
        removeTarget(_extendedCase);

        _extendedCase = extendedCase;
        if (extendedCase && extendedCase->asQModelingObject() && this->asQModelingObject())
            QObject::connect(extendedCase->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setExtendedCase()));

        // Adjust subsetted properties
        if (extendedCase) {
            addTarget(extendedCase);
        }
    }
}

/*!
    References the use case that represents the extension and owns the extend relationship.
 */
QUmlUseCase *QUmlExtend::extension() const
{
    // This is a read-write association end

    return _extension;
}

void QUmlExtend::setExtension(QUmlUseCase *extension)
{
    // This is a read-write association end

    if (_extension != extension) {
        // Adjust subsetted properties
        removeSource(_extension);

        _extension = extension;
        if (extension && extension->asQModelingObject() && this->asQModelingObject())
            QObject::connect(extension->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setExtension()));

        // Adjust subsetted properties
        if (extension) {
            addSource(extension);
        }
        setNamespace(extension);
    }
}

/*!
    An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)
 */
const QList<QUmlExtensionPoint *> QUmlExtend::extensionLocations() const
{
    // This is a read-write association end

    return _extensionLocations;
}

void QUmlExtend::addExtensionLocation(QUmlExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    if (!_extensionLocations.contains(extensionLocation)) {
        _extensionLocations.append(extensionLocation);
        if (extensionLocation && extensionLocation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(extensionLocation->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeExtensionLocation(QObject *)));
    }
}

void QUmlExtend::removeExtensionLocation(QUmlExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    if (_extensionLocations.contains(extensionLocation)) {
        _extensionLocations.removeAll(extensionLocation);
    }
}

