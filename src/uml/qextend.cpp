/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

#include "qextend.h"
#include "qextend_p.h"

#include <QtUml/QConstraint>
#include <QtUml/QUseCase>
#include <QtUml/QExtensionPoint>

QT_BEGIN_NAMESPACE_QTUML

QExtendPrivate::QExtendPrivate() :
    extendedCase(0),
    extension(0),
    extensionLocations(new QList<QExtensionPoint *>),
    condition(0)
{
}

QExtendPrivate::~QExtendPrivate()
{
    delete extensionLocations;
}

/*!
    \class QExtend

    \inmodule QtUml

    \brief A relationship from an extending use case to an extended use case that specifies how and when the behavior defined in the extending use case can be inserted into the behavior defined in the extended use case.
 */

QExtend::QExtend(QUmlObject *parent, QUmlObject *wrapper) :
    QUmlObject(*new QExtendPrivate, parent, wrapper),
    _wrappedDirectedRelationship(new QDirectedRelationship(this, this)),
    _wrappedNamedElement(new QNamedElement(this, this))
{
}

QExtend::QExtend(QExtendPrivate &dd, QUmlObject *parent, QUmlObject *wrapper) :
    QUmlObject(dd, parent, wrapper),
    _wrappedDirectedRelationship(new QDirectedRelationship(this, this)),
    _wrappedNamedElement(new QNamedElement(this, this))
{
}

QExtend::~QExtend()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QExtend::ownedElements() const
{
    return (qumlobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QExtend::owner() const
{
    return (qumlobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QExtend::ownedComments() const
{
    return (qumlobject_cast<const QElement *>(this))->ownedComments();
}

void QExtend::addOwnedComment(QComment *ownedComment)
{
    (qumlobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QExtend::removeOwnedComment(QComment *ownedComment)
{
    (qumlobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
const QSet<QElement *> *QExtend::relatedElements() const
{
    return (qumlobject_cast<const QRelationship *>(this))->relatedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
const QSet<QElement *> *QExtend::sources() const
{
    return (qumlobject_cast<const QDirectedRelationship *>(this))->sources();
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
const QSet<QElement *> *QExtend::targets() const
{
    return (qumlobject_cast<const QDirectedRelationship *>(this))->targets();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QExtend::name() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->name();
}

void QExtend::setName(QString name)
{
    (qumlobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QExtend::visibility() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->visibility();
}

void QExtend::setVisibility(QtUml::VisibilityKind visibility)
{
    (qumlobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QExtend::qualifiedName() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QExtend::nameExpression() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QExtend::setNameExpression(QStringExpression *nameExpression)
{
    (qumlobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QExtend::namespace_() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QExtend::clientDependencies() const
{
    return (qumlobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QExtend::addClientDependency(QDependency *clientDependency)
{
    (qumlobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QExtend::removeClientDependency(QDependency *clientDependency)
{
    (qumlobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExtend
// ---------------------------------------------------------------

/*!
    References the use case that is being extended.
 */
QUseCase *QExtend::extendedCase() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->extendedCase;
}

void QExtend::setExtendedCase(QUseCase *extendedCase)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->extendedCase != extendedCase) {
        // Adjust subsetted property(ies)
        (qumlobject_cast<QDirectedRelationshipPrivate *>(d))->removeTarget(qumlobject_cast<QElement *>(d->extendedCase));

        d->extendedCase = extendedCase;

        // Adjust subsetted property(ies)
        if (extendedCase) {
            (qumlobject_cast<QDirectedRelationshipPrivate *>(d))->addTarget(qumlobject_cast<QElement *>(extendedCase));
        }
    }
}

/*!
    References the use case that represents the extension and owns the extend relationship.
 */
QUseCase *QExtend::extension() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->extension;
}

void QExtend::setExtension(QUseCase *extension)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->extension != extension) {
        // Adjust opposite property
        if (d->extension)
            d->extension->removeExtend(this);

        // Adjust subsetted property(ies)
        (qumlobject_cast<QDirectedRelationshipPrivate *>(d))->removeSource(qumlobject_cast<QElement *>(d->extension));

        d->extension = extension;

        // Adjust subsetted property(ies)
        if (extension) {
            (qumlobject_cast<QDirectedRelationshipPrivate *>(d))->addSource(qumlobject_cast<QElement *>(extension));
        }
        (qumlobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qumlobject_cast<QNamespace *>(extension));

        // Adjust opposite property
        if (extension)
            extension->addExtend(this);
    }
}

/*!
    An ordered list of extension points belonging to the extended use case, specifying where the respective behavioral fragments of the extending use case are to be inserted. The first fragment in the extending use case is associated with the first extension point in the list, the second fragment with the second point, and so on. (Note that, in most practical cases, the extending use case has just a single behavior fragment, so that the list of extension points is trivial.)
 */
const QList<QExtensionPoint *> *QExtend::extensionLocations() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->extensionLocations;
}

void QExtend::addExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (!d->extensionLocations->contains(extensionLocation)) {
        d->extensionLocations->append(extensionLocation);
    }
}

void QExtend::removeExtensionLocation(QExtensionPoint *extensionLocation)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->extensionLocations->contains(extensionLocation)) {
        d->extensionLocations->removeAll(extensionLocation);
    }
}

/*!
    References the condition that must hold when the first extension point is reached for the extension to take place. If no constraint is associated with the extend relationship, the extension is unconditional.
 */
QConstraint *QExtend::condition() const
{
    // This is a read-write association end

    Q_D(const QExtend);
    return d->condition;
}

void QExtend::setCondition(QConstraint *condition)
{
    // This is a read-write association end

    Q_D(QExtend);
    if (d->condition != condition) {
        // Adjust subsetted property(ies)
        (qumlobject_cast<QElementPrivate *>(d))->removeOwnedElement(qumlobject_cast<QElement *>(d->condition));

        d->condition = condition;

        // Adjust subsetted property(ies)
        if (condition) {
            (qumlobject_cast<QElementPrivate *>(d))->addOwnedElement(qumlobject_cast<QElement *>(condition));
        }
    }
}

#include "moc_qextend.cpp"

QT_END_NAMESPACE_QTUML

