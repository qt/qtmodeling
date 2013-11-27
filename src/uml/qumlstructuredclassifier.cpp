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

#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlStructuredClassifier

    \inmodule QtUml

    \brief A structured classifier is an abstract metaclass that represents any classifier whose behavior can be fully or partly described by the collaboration of owned or referenced instances.

    \b {QUmlStructuredClassifier is an abstract class.}
 */

/*!
    Creates a new QUmlStructuredClassifier.
*/
QUmlStructuredClassifier::QUmlStructuredClassifier()
{
}

/*!
    Destroys the QUmlStructuredClassifier.
 */
QUmlStructuredClassifier::~QUmlStructuredClassifier()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlStructuredClassifier.
*/
QModelingElement *QUmlStructuredClassifier::clone() const
{
    QUmlStructuredClassifier *c = new QUmlStructuredClassifier;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUses())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCases())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlConnector *element, ownedConnectors())
        c->addOwnedConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the properties owned by the classifier.

    \sa addOwnedAttribute(), removeOwnedAttribute()

    \b {Subsetted property(ies):} QUmlClassifier::attributes(), QUmlNamespace::ownedMembers(), QUmlStructuredClassifier::roles().
 */
const QList<QUmlProperty *> QUmlStructuredClassifier::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

/*!
    Adds \a ownedAttribute to ownedAttributes.

    \sa ownedAttributes(), removeOwnedAttribute()
 */
void QUmlStructuredClassifier::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.append(ownedAttribute);
        if (ownedAttribute && ownedAttribute->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedAttribute->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addAttribute(ownedAttribute);
        addOwnedMember(ownedAttribute);
        addRole(ownedAttribute);
    }
}

/*!
    Removes \a ownedAttribute from ownedAttributes.

    \sa ownedAttributes(), addOwnedAttribute()
 */
void QUmlStructuredClassifier::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.removeAll(ownedAttribute);
        if (ownedAttribute->asQModelingObject())
            ownedAttribute->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeAttribute(ownedAttribute);
        removeOwnedMember(ownedAttribute);
        removeRole(ownedAttribute);
    }
}

/*!
    References the connectors owned by the classifier.

    \sa addOwnedConnector(), removeOwnedConnector()

    \b {Subsetted property(ies):} QUmlClassifier::features(), QUmlNamespace::ownedMembers().
 */
const QSet<QUmlConnector *> QUmlStructuredClassifier::ownedConnectors() const
{
    // This is a read-write association end

    return _ownedConnectors;
}

/*!
    Adds \a ownedConnector to ownedConnectors.

    \sa ownedConnectors(), removeOwnedConnector()
 */
void QUmlStructuredClassifier::addOwnedConnector(QUmlConnector *ownedConnector)
{
    // This is a read-write association end

    if (!_ownedConnectors.contains(ownedConnector)) {
        _ownedConnectors.insert(ownedConnector);
        if (ownedConnector && ownedConnector->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedConnector->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedConnector(QObject *)));
        ownedConnector->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addFeature(ownedConnector);
        addOwnedMember(ownedConnector);
    }
}

/*!
    Removes \a ownedConnector from ownedConnectors.

    \sa ownedConnectors(), addOwnedConnector()
 */
void QUmlStructuredClassifier::removeOwnedConnector(QUmlConnector *ownedConnector)
{
    // This is a read-write association end

    if (_ownedConnectors.contains(ownedConnector)) {
        _ownedConnectors.remove(ownedConnector);
        if (ownedConnector->asQModelingObject())
            ownedConnector->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedConnector);
        removeOwnedMember(ownedConnector);
    }
}

/*!
    References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true.

    \b {This is a read-only derived property.}
 */
const QSet<QUmlProperty *> QUmlStructuredClassifier::parts() const
{
    // This is a read-only derived association end

    QSet<QUmlProperty *> parts_;

    foreach (QUmlProperty *property, _ownedAttributes)
        if (property->isComposite())
            parts_.insert(property);

    return parts_;
}

/*!
    Adds \a part to parts.

    \sa parts(), removePart()
 */
void QUmlStructuredClassifier::addPart(QUmlProperty *part)
{
    // This is a read-only derived association end

    qWarning("QUmlStructuredClassifier::addPart(): to be implemented (this is a derived association end)");
    Q_UNUSED(part);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Removes \a part from parts.

    \sa parts(), addPart()
 */
void QUmlStructuredClassifier::removePart(QUmlProperty *part)
{
    // This is a read-only derived association end

    qWarning("QUmlStructuredClassifier::removePart(): to be implemented (this is a derived association end)");
    Q_UNUSED(part);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the roles that instances may play in this classifier.

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlNamespace::members().
 */
const QSet<QUmlConnectableElement *> QUmlStructuredClassifier::roles() const
{
    // This is a read-only derived union association end

    return _roles;
}

/*!
    Adds \a role to roles.

    \sa roles(), removeRole()
 */
void QUmlStructuredClassifier::addRole(QUmlConnectableElement *role)
{
    // This is a read-only derived union association end

    if (!_roles.contains(role)) {
        _roles.insert(role);
        if (role && role->asQModelingObject() && this->asQModelingObject())
            QObject::connect(role->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRole(QObject *)));

        // Adjust subsetted properties
        addMember(role);
    }
}

/*!
    Removes \a role from roles.

    \sa roles(), addRole()
 */
void QUmlStructuredClassifier::removeRole(QUmlConnectableElement *role)
{
    // This is a read-only derived union association end

    if (_roles.contains(role)) {
        _roles.remove(role);

        // Adjust subsetted properties
        removeMember(role);
    }
}

QT_END_NAMESPACE

