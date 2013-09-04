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
#include "qumlbehavioredclassifier.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
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
/*!
    \class QUmlBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.
 */
QUmlBehavioredClassifier::QUmlBehavioredClassifier() :
    _classifierBehavior(0)
{
}

QUmlBehavioredClassifier::~QUmlBehavioredClassifier()
{
}

QModelingObject *QUmlBehavioredClassifier::clone() const
{
    QUmlBehavioredClassifier *c = new QUmlBehavioredClassifier;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImport())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRule())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImport())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QUmlPackage *>(package()->clone()));
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBinding())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUse())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalization())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCase())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlGeneralizationSet *element, powertypeExtent())
        c->addPowertypeExtent(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    foreach (QUmlClassifier *element, redefinedClassifier())
        c->addRedefinedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (representation())
        c->setRepresentation(dynamic_cast<QUmlCollaborationUse *>(representation()->clone()));
    foreach (QUmlSubstitution *element, substitution())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlClassifierTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlUseCase *element, useCase())
        c->addUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    if (classifierBehavior())
        c->setClassifierBehavior(dynamic_cast<QUmlBehavior *>(classifierBehavior()->clone()));
    foreach (QUmlInterfaceRealization *element, interfaceRealization())
        c->addInterfaceRealization(dynamic_cast<QUmlInterfaceRealization *>(element->clone()));
    foreach (QUmlBehavior *element, ownedBehavior())
        c->addOwnedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
QUmlBehavior *QUmlBehavioredClassifier::classifierBehavior() const
{
    // This is a read-write association end

    return _classifierBehavior;
}

void QUmlBehavioredClassifier::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    // This is a read-write association end

    if (_classifierBehavior != classifierBehavior) {
        // Adjust subsetted properties
        removeOwnedBehavior(_classifierBehavior);

        _classifierBehavior = classifierBehavior;
        if (classifierBehavior->asQObject() && this->asQObject())
            QObject::connect(classifierBehavior->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setClassifierBehavior()));

        // Adjust subsetted properties
        if (classifierBehavior) {
            addOwnedBehavior(classifierBehavior);
        }
    }
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
const QSet<QUmlInterfaceRealization *> QUmlBehavioredClassifier::interfaceRealization() const
{
    // This is a read-write association end

    return _interfaceRealization;
}

void QUmlBehavioredClassifier::addInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    if (!_interfaceRealization.contains(interfaceRealization)) {
        _interfaceRealization.insert(interfaceRealization);
        if (interfaceRealization->asQObject() && this->asQObject())
            QObject::connect(interfaceRealization->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInterfaceRealization(QObject *)));
        interfaceRealization->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(interfaceRealization);
        addClientDependency(interfaceRealization);

        // Adjust opposite properties
        if (interfaceRealization) {
            interfaceRealization->setImplementingClassifier(this);
        }
    }
}

void QUmlBehavioredClassifier::removeInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    if (_interfaceRealization.contains(interfaceRealization)) {
        _interfaceRealization.remove(interfaceRealization);
        if (interfaceRealization->asQObject())
            interfaceRealization->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(interfaceRealization);
        removeClientDependency(interfaceRealization);

        // Adjust opposite properties
        if (interfaceRealization) {
            interfaceRealization->setImplementingClassifier(0);
        }
    }
}

/*!
    References behavior specifications owned by a classifier.
 */
const QSet<QUmlBehavior *> QUmlBehavioredClassifier::ownedBehavior() const
{
    // This is a read-write association end

    return _ownedBehavior;
}

void QUmlBehavioredClassifier::addOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    if (!_ownedBehavior.contains(ownedBehavior)) {
        _ownedBehavior.insert(ownedBehavior);
        if (ownedBehavior->asQObject() && this->asQObject())
            QObject::connect(ownedBehavior->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedBehavior(QObject *)));
        ownedBehavior->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedBehavior);
    }
}

void QUmlBehavioredClassifier::removeOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    if (_ownedBehavior.contains(ownedBehavior)) {
        _ownedBehavior.remove(ownedBehavior);
        if (ownedBehavior->asQObject())
            ownedBehavior->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedBehavior);
    }
}

