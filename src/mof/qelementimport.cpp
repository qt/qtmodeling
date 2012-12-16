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

#include "qelementimport.h"
#include "qelementimport_p.h"

#include <QtMof/QPackageableElement>
#include <QtMof/QNamespace>

QT_BEGIN_NAMESPACE_QTMOF

QElementImportPrivate::QElementImportPrivate() :
    visibility(QtMof::VisibilityPublic),
    importedElement(0),
    importingNamespace(0)
{
}

QElementImportPrivate::~QElementImportPrivate()
{
}

/*!
    \class QElementImport

    \inmodule QtMof

    \brief An element import identifies an element in another package, and allows the element to be referenced using its name without a qualifier.
 */

QElementImport::QElementImport(QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(*new QElementImportPrivate, parent, wrapper)
{
}

QElementImport::QElementImport(QElementImportPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QDirectedRelationship(dd, parent, wrapper)
{
}

QElementImport::~QElementImport()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QElementImport
// ---------------------------------------------------------------

/*!
    Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used.
 */
QString QElementImport::alias() const
{
    // This is a read-write attribute

    Q_D(const QElementImport);
    return d->alias;
}

void QElementImport::setAlias(QString alias)
{
    // This is a read-write attribute

    Q_D(QElementImport);
    if (d->alias != alias) {
        d->alias = alias;
    }
}

/*!
    Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import.
 */
QtMof::VisibilityKind QElementImport::visibility() const
{
    // This is a read-write attribute

    Q_D(const QElementImport);
    return d->visibility;
}

void QElementImport::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write attribute

    Q_D(QElementImport);
    if (d->visibility != visibility) {
        d->visibility = visibility;
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QElementImport
// ---------------------------------------------------------------

/*!
    Specifies the PackageableElement whose name is to be added to a Namespace.
 */
QPackageableElement *QElementImport::importedElement() const
{
    // This is a read-write association end

    Q_D(const QElementImport);
    return d->importedElement;
}

void QElementImport::setImportedElement(QPackageableElement *importedElement)
{
    // This is a read-write association end

    Q_D(QElementImport);
    if (d->importedElement != importedElement) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qwrappedobject_cast<QElement *>(d->importedElement));

        d->importedElement = importedElement;

        // Adjust subsetted property(ies)
        if (importedElement) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qwrappedobject_cast<QElement *>(importedElement));
        }
    }
}

/*!
    Specifies the Namespace that imports a PackageableElement from another Package.
 */
QNamespace *QElementImport::importingNamespace() const
{
    // This is a read-write association end

    Q_D(const QElementImport);
    return d->importingNamespace;
}

void QElementImport::setImportingNamespace(QNamespace *importingNamespace)
{
    // This is a read-write association end

    Q_D(QElementImport);
    if (d->importingNamespace != importingNamespace) {
        // Adjust opposite property
        if (d->importingNamespace)
            d->importingNamespace->removeElementImport(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qwrappedobject_cast<QElement *>(d->importingNamespace));

        d->importingNamespace = importingNamespace;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(importingNamespace));
        if (importingNamespace) {
            (qwrappedobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qwrappedobject_cast<QElement *>(importingNamespace));
        }

        // Adjust opposite property
        if (importingNamespace)
            importingNamespace->addElementImport(this);
    }
}

/*!
    The query getName() returns the name under which the imported PackageableElement will be known in the importing namespace.
 */
QString QElementImport::getName() const
{
    qWarning("QElementImport::getName: operation to be implemented");

    return QString(); // change here to your derived return
}

void QElementImport::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QElementImport) *>("QT_PREPEND_NAMESPACE_QTMOF(QElementImport) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElementImport) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QElementImport) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QElementImport) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QElementImport) *> *");
    qRegisterMetaType<QElementImport *>("QElementImport *");
    qRegisterMetaType<const QSet<QElementImport *> *>("const QSet<QElementImport *> *");
    qRegisterMetaType<const QList<QElementImport *> *>("const QList<QElementImport *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *>("QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QPackageableElement) *> *");
    qRegisterMetaType<QPackageableElement *>("QPackageableElement *");
    qRegisterMetaType<const QSet<QPackageableElement *> *>("const QSet<QPackageableElement *> *");
    qRegisterMetaType<const QList<QPackageableElement *> *>("const QList<QPackageableElement *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *>("QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamespace) *> *");
    qRegisterMetaType<QNamespace *>("QNamespace *");
    qRegisterMetaType<const QSet<QNamespace *> *>("const QSet<QNamespace *> *");
    qRegisterMetaType<const QList<QNamespace *> *>("const QList<QNamespace *> *");


    QDirectedRelationship::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qelementimport.cpp"

QT_END_NAMESPACE_QTMOF

