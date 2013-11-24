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

QT_BEGIN_NAMESPACE

/*!
    \class QUmlBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.

    \b {QUmlBehavioredClassifier is an abstract class.}
 */

/*!
    Creates a new QUmlBehavioredClassifier.
*/
QUmlBehavioredClassifier::QUmlBehavioredClassifier() :
    _classifierBehavior(0)
{
}

/*!
    Returns a deep-copied clone of the QUmlBehavioredClassifier.
*/
QModelingElement *QUmlBehavioredClassifier::clone() const
{
    QUmlBehavioredClassifier *c = new QUmlBehavioredClassifier;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QUmlPackage *>(package()->clone()));
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
    foreach (QUmlGeneralizationSet *element, powertypeExtents())
        c->addPowertypeExtent(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    foreach (QUmlClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (representation())
        c->setRepresentation(dynamic_cast<QUmlCollaborationUse *>(representation()->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlClassifierTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlUseCase *element, useCases())
        c->addUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    if (classifierBehavior())
        c->setClassifierBehavior(dynamic_cast<QUmlBehavior *>(classifierBehavior()->clone()));
    foreach (QUmlInterfaceRealization *element, interfaceRealizations())
        c->addInterfaceRealization(dynamic_cast<QUmlInterfaceRealization *>(element->clone()));
    foreach (QUmlBehavior *element, ownedBehaviors())
        c->addOwnedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A behavior specification that specifies the behavior of the classifier itself.

    \b {Subsetted property(ies):} QUmlBehavioredClassifier::ownedBehaviors().
 */
QUmlBehavior *QUmlBehavioredClassifier::classifierBehavior() const
{
    // This is a read-write association end

    return _classifierBehavior;
}

/*!
    Adjusts classifierBehavior to \a classifierBehavior.
 */
void QUmlBehavioredClassifier::setClassifierBehavior(QUmlBehavior *classifierBehavior)
{
    // This is a read-write association end

    if (_classifierBehavior != classifierBehavior) {
        // Adjust subsetted properties
        removeOwnedBehavior(_classifierBehavior);

        _classifierBehavior = classifierBehavior;
        if (classifierBehavior && classifierBehavior->asQModelingObject() && this->asQModelingObject())
            QObject::connect(classifierBehavior->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setClassifierBehavior()));

        // Adjust subsetted properties
        if (classifierBehavior) {
            addOwnedBehavior(classifierBehavior);
        }
    }
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.

    \sa addInterfaceRealization(), removeInterfaceRealization()

    \b {Subsetted property(ies):} QUmlElement::ownedElements(), QUmlNamedElement::clientDependencies().

    \b {Opposite property(ies):} QUmlInterfaceRealization::implementingClassifier().
 */
const QSet<QUmlInterfaceRealization *> QUmlBehavioredClassifier::interfaceRealizations() const
{
    // This is a read-write association end

    return _interfaceRealizations;
}

/*!
    Adds \a interfaceRealization to interfaceRealizations.

    \sa interfaceRealizations(), removeInterfaceRealization()
 */
void QUmlBehavioredClassifier::addInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    if (!_interfaceRealizations.contains(interfaceRealization)) {
        _interfaceRealizations.insert(interfaceRealization);
        if (interfaceRealization && interfaceRealization->asQModelingObject() && this->asQModelingObject())
            QObject::connect(interfaceRealization->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInterfaceRealization(QObject *)));
        interfaceRealization->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(interfaceRealization);
        addClientDependency(interfaceRealization);

        // Adjust opposite properties
        if (interfaceRealization) {
            interfaceRealization->setImplementingClassifier(this);
        }
    }
}

/*!
    Removes \a interfaceRealization from interfaceRealizations.

    \sa interfaceRealizations(), addInterfaceRealization()
 */
void QUmlBehavioredClassifier::removeInterfaceRealization(QUmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    if (_interfaceRealizations.contains(interfaceRealization)) {
        _interfaceRealizations.remove(interfaceRealization);
        if (interfaceRealization->asQModelingObject())
            interfaceRealization->asQModelingObject()->setParent(0);

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

    \sa addOwnedBehavior(), removeOwnedBehavior()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().
 */
const QSet<QUmlBehavior *> QUmlBehavioredClassifier::ownedBehaviors() const
{
    // This is a read-write association end

    return _ownedBehaviors;
}

/*!
    Adds \a ownedBehavior to ownedBehaviors.

    \sa ownedBehaviors(), removeOwnedBehavior()
 */
void QUmlBehavioredClassifier::addOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    if (!_ownedBehaviors.contains(ownedBehavior)) {
        _ownedBehaviors.insert(ownedBehavior);
        if (ownedBehavior && ownedBehavior->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedBehavior->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedBehavior(QObject *)));
        ownedBehavior->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedBehavior);
    }
}

/*!
    Removes \a ownedBehavior from ownedBehaviors.

    \sa ownedBehaviors(), addOwnedBehavior()
 */
void QUmlBehavioredClassifier::removeOwnedBehavior(QUmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    if (_ownedBehaviors.contains(ownedBehavior)) {
        _ownedBehaviors.remove(ownedBehavior);
        if (ownedBehavior->asQModelingObject())
            ownedBehavior->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedBehavior);
    }
}

QT_END_NAMESPACE

