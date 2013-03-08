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

#include "qumlredefinabletemplatesignature.h"
#include "qumlredefinabletemplatesignature_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlTemplateParameter>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlRedefinableTemplateSignaturePrivate::QUmlRedefinableTemplateSignaturePrivate() :
    classifier(0)
{
}

QUmlRedefinableTemplateSignaturePrivate::~QUmlRedefinableTemplateSignaturePrivate()
{
}

/*!
    \class QUmlRedefinableTemplateSignature

    \inmodule QtUml

    \brief A redefinable template signature supports the addition of formal template parameters in a specialization of a template classifier.
 */

QUmlRedefinableTemplateSignature::QUmlRedefinableTemplateSignature(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlRedefinableTemplateSignaturePrivate, wrapper, parent),
    _wrappedUmlTemplateSignature(new QUmlTemplateSignature(this)),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this))
{
    setPropertyData();
}

QUmlRedefinableTemplateSignature::QUmlRedefinableTemplateSignature(QUmlRedefinableTemplateSignaturePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlTemplateSignature(new QUmlTemplateSignature(this)),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this))
{
    setPropertyData();
}

QUmlRedefinableTemplateSignature::~QUmlRedefinableTemplateSignature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlRedefinableTemplateSignature::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlRedefinableTemplateSignature::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlRedefinableTemplateSignature::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlRedefinableTemplateSignature::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlRedefinableTemplateSignature::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlRedefinableTemplateSignature::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlRedefinableTemplateSignature::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlRedefinableTemplateSignature::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlRedefinableTemplateSignature::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlRedefinableTemplateSignature::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlRedefinableTemplateSignature::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlRedefinableTemplateSignature::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlRedefinableTemplateSignature::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlRedefinableTemplateSignature::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlRedefinableTemplateSignature::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlRedefinableTemplateSignature::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlRedefinableTemplateSignature::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlRedefinableTemplateSignature::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlRedefinableTemplateSignature::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlRedefinableTemplateSignature);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlRedefinableTemplateSignature::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlRedefinableTemplateSignature::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlRedefinableTemplateSignature
// ---------------------------------------------------------------

/*!
    The formal template parameters of the extendedSignature.
 */
QSet<QUmlTemplateParameter *> QUmlRedefinableTemplateSignature::inheritedParameters() const
{
    // This is a read-only derived association end

    qWarning("QUmlRedefinableTemplateSignature::inheritedParameters: to be implemented (this is a derived associationend)");

    return QSet<QUmlTemplateParameter *>(); // change here to your derived return
}

/*!
    The classifier that owns this template signature.
 */
QUmlClassifier *QUmlRedefinableTemplateSignature::classifier() const
{
    // This is a read-write association end

    Q_D(const QUmlRedefinableTemplateSignature);
    return d->classifier;
}

void QUmlRedefinableTemplateSignature::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QUmlRedefinableTemplateSignature);
    if (d->classifier != classifier) {
        // Adjust opposite property

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->classifier));

        d->classifier = classifier;

        // Adjust subsetted property(ies)
        if (classifier) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(classifier));
        }

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlTemplateSignature *>(this))->setTemplate_(qwrappedobject_cast<QUmlTemplateableElement *>(classifier));

        // Adjust opposite property
        classifier->setOwnedTemplateSignature(this);
    }
}

/*!
    The template signature that is extended by this template signature.
 */
QSet<QUmlRedefinableTemplateSignature *> QUmlRedefinableTemplateSignature::extendedSignatures() const
{
    // This is a read-write association end

    Q_D(const QUmlRedefinableTemplateSignature);
    return d->extendedSignatures;
}

void QUmlRedefinableTemplateSignature::addExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    Q_D(QUmlRedefinableTemplateSignature);
    if (!d->extendedSignatures.contains(extendedSignature)) {
        d->extendedSignatures.insert(extendedSignature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(extendedSignature));
    }
}

void QUmlRedefinableTemplateSignature::removeExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    Q_D(QUmlRedefinableTemplateSignature);
    if (d->extendedSignatures.contains(extendedSignature)) {
        d->extendedSignatures.remove(extendedSignature);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(extendedSignature));
    }
}

/*!
    The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is always consistent with a redefined template signature, since redefinition only adds new formal parameters.
 */
bool QUmlRedefinableTemplateSignature::isConsistentWith(const QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlRedefinableTemplateSignature::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

void QUmlRedefinableTemplateSignature::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The formal template parameters of the extendedSignature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlTemplateSignature::parameters");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("inheritedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier that owns this template signature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlTemplateSignature::template");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClassifier::ownedTemplateSignature");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template signature that is extended by this template signature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRedefinableTemplateSignature")][QString::fromLatin1("extendedSignatures")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlredefinabletemplatesignature.cpp"

