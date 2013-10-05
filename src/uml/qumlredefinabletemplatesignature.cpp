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
#include "qumlredefinabletemplatesignature.h"

#include "private/qumlredefinabletemplatesignatureobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>
/*!
    \class QUmlRedefinableTemplateSignature

    \inmodule QtUml

    \brief A redefinable template signature supports the addition of formal template parameters in a specialization of a template classifier.
 */
QUmlRedefinableTemplateSignature::QUmlRedefinableTemplateSignature(bool createQObject) :
    QUmlTemplateSignature(false),
    _classifier(0)
{
    if (createQObject)
        _qObject = new QUmlRedefinableTemplateSignatureObject(this);
    setPropertyData();
}

QUmlRedefinableTemplateSignature::~QUmlRedefinableTemplateSignature()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlRedefinableTemplateSignature::clone() const
{
    QUmlRedefinableTemplateSignature *c = new QUmlRedefinableTemplateSignature;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlTemplateParameter *element, ownedParameter())
        c->addOwnedParameter(dynamic_cast<QUmlTemplateParameter *>(element->clone()));
    foreach (QUmlTemplateParameter *element, parameter())
        c->addParameter(dynamic_cast<QUmlTemplateParameter *>(element->clone()));
    if (template_())
        c->setTemplate(dynamic_cast<QUmlTemplateableElement *>(template_()->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (classifier())
        c->setClassifier(dynamic_cast<QUmlClassifier *>(classifier()->clone()));
    foreach (QUmlRedefinableTemplateSignature *element, extendedSignature())
        c->addExtendedSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier that owns this template signature.
 */
QUmlClassifier *QUmlRedefinableTemplateSignature::classifier() const
{
    // This is a read-write association end

    return _classifier;
}

void QUmlRedefinableTemplateSignature::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    if (_classifier != classifier) {
        // Adjust subsetted properties
        removeRedefinitionContext(_classifier);

        _classifier = classifier;
        if (classifier && classifier->asQObject() && this->asQObject())
            QObject::connect(classifier->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setClassifier()));

        // Adjust subsetted properties
        if (classifier) {
            addRedefinitionContext(classifier);
        }
    }
}

/*!
    The template signature that is extended by this template signature.
 */
const QSet<QUmlRedefinableTemplateSignature *> QUmlRedefinableTemplateSignature::extendedSignature() const
{
    // This is a read-write association end

    return _extendedSignature;
}

void QUmlRedefinableTemplateSignature::addExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    if (!_extendedSignature.contains(extendedSignature)) {
        _extendedSignature.insert(extendedSignature);
        if (extendedSignature && extendedSignature->asQObject() && this->asQObject())
            QObject::connect(extendedSignature->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeExtendedSignature(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(extendedSignature);
    }
}

void QUmlRedefinableTemplateSignature::removeExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    if (_extendedSignature.contains(extendedSignature)) {
        _extendedSignature.remove(extendedSignature);

        // Adjust subsetted properties
        removeRedefinedElement(extendedSignature);
    }
}

/*!
    The formal template parameters of the extendedSignature.
 */
const QSet<QUmlTemplateParameter *> QUmlRedefinableTemplateSignature::inheritedParameter() const
{
    // This is a read-only derived association end

    qWarning("UmlRedefinableTemplateSignature::inheritedParameter(): to be implemented (this is a derived association end)");

    return QSet<QUmlTemplateParameter *>();
}

void QUmlRedefinableTemplateSignature::addInheritedParameter(QUmlTemplateParameter *inheritedParameter)
{
    // This is a read-only derived association end

    qWarning("UmlRedefinableTemplateSignature::inheritedParameter(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedParameter);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addParameter(inheritedParameter);
    }
}

void QUmlRedefinableTemplateSignature::removeInheritedParameter(QUmlTemplateParameter *inheritedParameter)
{
    // This is a read-only derived association end

    qWarning("UmlRedefinableTemplateSignature::inheritedParameter(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedParameter);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeParameter(inheritedParameter);
    }
}

// OPERATIONS

/*!
    The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is always consistent with a redefined template signature, since redefinition only adds new formal parameters.
 */
bool QUmlRedefinableTemplateSignature::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("UmlRedefinableTemplateSignature::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

void QUmlRedefinableTemplateSignature::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::DocumentationRole] = QStringLiteral("The classifier that owns this template signature.");
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("TemplateSignature-template");
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("RedefinableElement-redefinitionContext");
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::OppositeEndRole] = QStringLiteral("Classifier-ownedTemplateSignature");

    QModelingObject::propertyDataHash[QStringLiteral("extendedSignature")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("extendedSignature")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("extendedSignature")][QtModeling::DocumentationRole] = QStringLiteral("The template signature that is extended by this template signature.");
    QModelingObject::propertyDataHash[QStringLiteral("extendedSignature")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("extendedSignature")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("RedefinableElement-redefinedElement");
    QModelingObject::propertyDataHash[QStringLiteral("extendedSignature")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("inheritedParameter")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("inheritedParameter")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("inheritedParameter")][QtModeling::DocumentationRole] = QStringLiteral("The formal template parameters of the extendedSignature.");
    QModelingObject::propertyDataHash[QStringLiteral("inheritedParameter")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("inheritedParameter")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("TemplateSignature-parameter");
    QModelingObject::propertyDataHash[QStringLiteral("inheritedParameter")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

