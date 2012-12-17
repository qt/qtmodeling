/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qpackageableelement.h"
#include "qpackageableelement_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QPackageableElementPrivate::QPackageableElementPrivate() :
    visibility(QtMof::VisibilityPublic)
{
}

QPackageableElementPrivate::~QPackageableElementPrivate()
{
}

/*!
    \class QPackageableElement

    \inmodule QtMof

    \brief A packageable element indicates a named element that may be owned directly by a package.
 */

QPackageableElement::QPackageableElement(QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(*new QPackageableElementPrivate, parent, wrapper)
{
}

QPackageableElement::QPackageableElement(QPackageableElementPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QNamedElement(dd, parent, wrapper)
{
}

QPackageableElement::~QPackageableElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QPackageableElement::visibility() const
{
    // This is a read-write attribute

    Q_D(const QPackageableElement);
    return d->visibility;
}

void QPackageableElement::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QPackageableElement);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
}

void QPackageableElement::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
}

void QPackageableElement::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *>("QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *");
    qRegisterMetaType<QPackageableElement *>("QPackageableElement *");
    qRegisterMetaType<const QSet<QPackageableElement *> *>("const QSet<QPackageableElement *> *");
    qRegisterMetaType<const QList<QPackageableElement *> *>("const QList<QPackageableElement *> *");

    QNamedElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qpackageableelement.cpp"

QT_END_NAMESPACE_QTMOF

