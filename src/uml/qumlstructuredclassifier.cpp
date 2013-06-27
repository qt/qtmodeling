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
#include "qumlstructuredclassifier.h"
#include "qumlstructuredclassifier_p.h"

#include <QtUml/QUmlProperty>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConnectableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

#include <QtQml/QQmlContext>

QT_BEGIN_NAMESPACE

QUmlStructuredClassifierPrivate::QUmlStructuredClassifierPrivate()
{
}

QUmlStructuredClassifierPrivate::~QUmlStructuredClassifierPrivate()
{
}

void QUmlStructuredClassifierPrivate::addRole(QUmlConnectableElement *role)
{
    // This is a read-only derived-union association end

    if (!this->roles.contains(role)) {
        this->roles.insert(role);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(this))->addMember(qwrappedobject_cast<QUmlNamedElement *>(role));
    }
}

void QUmlStructuredClassifierPrivate::removeRole(QUmlConnectableElement *role)
{
    // This is a read-only derived-union association end

    if (this->roles.contains(role)) {
        this->roles.remove(role);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(this))->removeMember(qwrappedobject_cast<QUmlNamedElement *>(role));
    }
}

/*!
    \class QUmlStructuredClassifier

    \inmodule QtUml

    \brief A structured classifier is an abstract metaclass that represents any classifier whose behavior can be fully or partly described by the collaboration of owned or referenced instances.
 */

QUmlStructuredClassifier::QUmlStructuredClassifier(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(*new QUmlStructuredClassifierPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlStructuredClassifier::QUmlStructuredClassifier(QUmlStructuredClassifierPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlClassifier(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlStructuredClassifier::~QUmlStructuredClassifier()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStructuredClassifier
// ---------------------------------------------------------------

/*!
    References the roles that instances may play in this classifier.
 */
QSet<QUmlConnectableElement *> QUmlStructuredClassifier::roles() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlStructuredClassifier);
    return d->roles;
}

/*!
    References the properties owned by the classifier.
 */
QList<QUmlProperty *> QUmlStructuredClassifier::ownedAttributes() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredClassifier);
    return d->ownedAttributes;
}

void QUmlStructuredClassifier::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlStructuredClassifier);
    if (!d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.append(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlStructuredClassifierPrivate *>(d))->addRole(qwrappedobject_cast<QUmlConnectableElement *>(ownedAttribute));
    }
}

void QUmlStructuredClassifier::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    Q_D(QUmlStructuredClassifier);
    if (d->ownedAttributes.contains(ownedAttribute)) {
        d->ownedAttributes.removeAll(ownedAttribute);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeAttribute(qwrappedobject_cast<QUmlProperty *>(ownedAttribute));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedAttribute));
        (qwrappedobject_cast<QUmlStructuredClassifierPrivate *>(d))->removeRole(qwrappedobject_cast<QUmlConnectableElement *>(ownedAttribute));
    }
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.
 */
QSet<QUmlProperty *> QUmlStructuredClassifier::parts() const
{
    // This is a read-only derived association end

    Q_D(const QUmlStructuredClassifier);
    QSet<QUmlProperty *> parts_;
    foreach (QUmlProperty *property, d->ownedAttributes)
        if (property->isComposite())
            parts_.insert(property);
    return parts_;
}

/*!
    References the connectors owned by the classifier.
 */
QSet<QUmlConnector *> QUmlStructuredClassifier::ownedConnectors() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredClassifier);
    return d->ownedConnectors;
}

void QUmlStructuredClassifier::addOwnedConnector(QUmlConnector *ownedConnector)
{
    // This is a read-write association end

    Q_D(QUmlStructuredClassifier);
    if (!d->ownedConnectors.contains(ownedConnector)) {
        d->ownedConnectors.insert(ownedConnector);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->addFeature(qwrappedobject_cast<QUmlFeature *>(ownedConnector));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedConnector));
    }
}

void QUmlStructuredClassifier::removeOwnedConnector(QUmlConnector *ownedConnector)
{
    // This is a read-write association end

    Q_D(QUmlStructuredClassifier);
    if (d->ownedConnectors.contains(ownedConnector)) {
        d->ownedConnectors.remove(ownedConnector);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlClassifierPrivate *>(d))->removeFeature(qwrappedobject_cast<QUmlFeature *>(ownedConnector));
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedConnector));
    }
}

void QUmlStructuredClassifier::setQmlContextProperties(QQmlContext *qmlContext)
{
    QVariantList partList;
    foreach (QUmlProperty *part, parts())
        partList << qVariantFromValue(part);
    qmlContext->setContextProperty(QString::fromLatin1("parts"), partList);

    QUmlClassifier::setQmlContextProperties(qmlContext);
}

void QUmlStructuredClassifier::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("roles")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("roles")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("roles")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the roles that instances may play in this classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("roles")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("roles")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("roles")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties owned by the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::attributes QUmlNamespace::ownedMembers QUmlStructuredClassifier::roles");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedAttributes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("parts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("parts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("parts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("parts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("parts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("parts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedConnectors")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedConnectors")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedConnectors")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the connectors owned by the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedConnectors")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedConnectors")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlClassifier::features QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredClassifier")][QString::fromLatin1("ownedConnectors")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlClassifier::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstructuredclassifier.cpp"

