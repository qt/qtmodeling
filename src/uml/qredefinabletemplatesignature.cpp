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

#include "qredefinabletemplatesignature.h"
#include "qredefinabletemplatesignature_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QTemplateParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QRedefinableTemplateSignaturePrivate::QRedefinableTemplateSignaturePrivate() :
    classifier(0)
{
}

QRedefinableTemplateSignaturePrivate::~QRedefinableTemplateSignaturePrivate()
{
}

/*!
    \class QRedefinableTemplateSignature

    \inmodule QtUml

    \brief A redefinable template signature supports the addition of formal template parameters in a specialization of a template classifier.
 */

QRedefinableTemplateSignature::QRedefinableTemplateSignature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QRedefinableTemplateSignaturePrivate, wrapper, parent),
    _wrappedTemplateSignature(new QTemplateSignature(this)),
    _wrappedRedefinableElement(new QRedefinableElement(this))
{
    setPropertyData();
}

QRedefinableTemplateSignature::QRedefinableTemplateSignature(QRedefinableTemplateSignaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedTemplateSignature(new QTemplateSignature(this)),
    _wrappedRedefinableElement(new QRedefinableElement(this))
{
    setPropertyData();
}

QRedefinableTemplateSignature::~QRedefinableTemplateSignature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QRedefinableTemplateSignature::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QRedefinableTemplateSignature::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QRedefinableTemplateSignature::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QRedefinableTemplateSignature::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QRedefinableTemplateSignature::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QRedefinableTemplateSignature::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QRedefinableTemplateSignature::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QRedefinableTemplateSignature::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QRedefinableTemplateSignature::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QRedefinableTemplateSignature::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QRedefinableTemplateSignature::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QRedefinableTemplateSignature::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QRedefinableTemplateSignature::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QRedefinableTemplateSignature::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QRedefinableTemplateSignature::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QRedefinableTemplateSignature::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QRedefinableTemplateSignature::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QRedefinableTemplateSignature::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QRedefinableTemplateSignature::unsetLeaf()
{
    setLeaf(false);
    Q_D(QRedefinableTemplateSignature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QRedefinableTemplateSignature::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QRedefinableTemplateSignature::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QRedefinableTemplateSignature
// ---------------------------------------------------------------

/*!
    The formal template parameters of the extendedSignature.
 */
QSet<QTemplateParameter *> QRedefinableTemplateSignature::inheritedParameters() const
{
    // This is a read-only derived association end

    qWarning("QRedefinableTemplateSignature::inheritedParameters: to be implemented (this is a derived associationend)");

    return QSet<QTemplateParameter *>(); // change here to your derived return
}

/*!
    The classifier that owns this template signature.
 */
QClassifier *QRedefinableTemplateSignature::classifier() const
{
    // This is a read-write association end

    Q_D(const QRedefinableTemplateSignature);
    return d->classifier;
}

void QRedefinableTemplateSignature::setClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QRedefinableTemplateSignature);
    if (d->classifier != classifier) {
        // Adjust opposite property

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->classifier));

        d->classifier = classifier;

        // Adjust subsetted property(ies)
        if (classifier) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(classifier));
        }

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QTemplateSignature *>(this))->setTemplate_(qwrappedobject_cast<QTemplateableElement *>(classifier));

        // Adjust opposite property
        classifier->setOwnedTemplateSignature(this);
    }
}

/*!
    The template signature that is extended by this template signature.
 */
QSet<QRedefinableTemplateSignature *> QRedefinableTemplateSignature::extendedSignatures() const
{
    // This is a read-write association end

    Q_D(const QRedefinableTemplateSignature);
    return d->extendedSignatures;
}

void QRedefinableTemplateSignature::addExtendedSignature(QRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    Q_D(QRedefinableTemplateSignature);
    if (!d->extendedSignatures.contains(extendedSignature)) {
        d->extendedSignatures.insert(extendedSignature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(extendedSignature));
    }
}

void QRedefinableTemplateSignature::removeExtendedSignature(QRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    Q_D(QRedefinableTemplateSignature);
    if (d->extendedSignatures.contains(extendedSignature)) {
        d->extendedSignatures.remove(extendedSignature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(extendedSignature));
    }
}

/*!
    The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is always consistent with a redefined template signature, since redefinition only adds new formal parameters.
 */
bool QRedefinableTemplateSignature::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QRedefinableTemplateSignature::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

void QRedefinableTemplateSignature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The formal template parameters of the extendedSignature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QTemplateSignature::parameters");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier that owns this template signature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QTemplateSignature::template");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClassifier::ownedTemplateSignature");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template signature that is extended by this template signature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qredefinabletemplatesignature.cpp"

QT_END_NAMESPACE_QTUML

