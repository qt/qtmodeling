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
#include "qumllifeline.h"

#include "private/qumllifelineobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPartDecomposition>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlLifeline

    \inmodule QtUml

    \brief A lifeline represents an individual participant in the interaction. While parts and structural features may have multiplicity greater than 1, lifelines represent only one interacting entity.
 */
QUmlLifeline::QUmlLifeline(bool createQObject) :
    _decomposedAs(0),
    _interaction(0),
    _represents(0),
    _selector(0)
{
    if (createQObject)
        _qObject = new QUmlLifelineObject(this);
    setPropertyData();
}

QUmlLifeline::~QUmlLifeline()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlLifeline::clone() const
{
    QUmlLifeline *c = new QUmlLifeline;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlInteractionFragment *element, coveredBy())
        c->addCoveredBy(dynamic_cast<QUmlInteractionFragment *>(element->clone()));
    if (decomposedAs())
        c->setDecomposedAs(dynamic_cast<QUmlPartDecomposition *>(decomposedAs()->clone()));
    if (interaction())
        c->setInteraction(dynamic_cast<QUmlInteraction *>(interaction()->clone()));
    if (represents())
        c->setRepresents(dynamic_cast<QUmlConnectableElement *>(represents()->clone()));
    if (selector())
        c->setSelector(dynamic_cast<QUmlValueSpecification *>(selector()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the InteractionFragments in which this Lifeline takes part.
 */
const QSet<QUmlInteractionFragment *> QUmlLifeline::coveredBy() const
{
    // This is a read-write association end

    return _coveredBy;
}

void QUmlLifeline::addCoveredBy(QUmlInteractionFragment *coveredBy)
{
    // This is a read-write association end

    if (!_coveredBy.contains(coveredBy)) {
        _coveredBy.insert(coveredBy);
        if (coveredBy && coveredBy->asQObject() && this->asQObject())
            QObject::connect(coveredBy->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeCoveredBy(QObject *)));

        // Adjust opposite properties
        if (coveredBy) {
            coveredBy->addCovered(this);
        }
    }
}

void QUmlLifeline::removeCoveredBy(QUmlInteractionFragment *coveredBy)
{
    // This is a read-write association end

    if (_coveredBy.contains(coveredBy)) {
        _coveredBy.remove(coveredBy);

        // Adjust opposite properties
        if (coveredBy) {
            coveredBy->removeCovered(this);
        }
    }
}

/*!
    References the Interaction that represents the decomposition.
 */
QUmlPartDecomposition *QUmlLifeline::decomposedAs() const
{
    // This is a read-write association end

    return _decomposedAs;
}

void QUmlLifeline::setDecomposedAs(QUmlPartDecomposition *decomposedAs)
{
    // This is a read-write association end

    if (_decomposedAs != decomposedAs) {
        _decomposedAs = decomposedAs;
        if (decomposedAs && decomposedAs->asQObject() && this->asQObject())
            QObject::connect(decomposedAs->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setDecomposedAs()));
    }
}

/*!
    References the Interaction enclosing this Lifeline.
 */
QUmlInteraction *QUmlLifeline::interaction() const
{
    // This is a read-write association end

    return _interaction;
}

void QUmlLifeline::setInteraction(QUmlInteraction *interaction)
{
    // This is a read-write association end

    if (_interaction != interaction) {
        // Adjust subsetted properties

        _interaction = interaction;
        if (interaction && interaction->asQObject() && this->asQObject())
            QObject::connect(interaction->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setInteraction()));

        // Adjust subsetted properties
        setNamespace(interaction);
    }
}

/*!
    References the ConnectableElement within the classifier that contains the enclosing interaction.
 */
QUmlConnectableElement *QUmlLifeline::represents() const
{
    // This is a read-write association end

    return _represents;
}

void QUmlLifeline::setRepresents(QUmlConnectableElement *represents)
{
    // This is a read-write association end

    if (_represents != represents) {
        _represents = represents;
        if (represents && represents->asQObject() && this->asQObject())
            QObject::connect(represents->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setRepresents()));
    }
}

/*!
    If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.
 */
QUmlValueSpecification *QUmlLifeline::selector() const
{
    // This is a read-write association end

    return _selector;
}

void QUmlLifeline::setSelector(QUmlValueSpecification *selector)
{
    // This is a read-write association end

    if (_selector != selector) {
        // Adjust subsetted properties
        removeOwnedElement(_selector);

        _selector = selector;
        if (selector && selector->asQObject() && this->asQObject())
            QObject::connect(selector->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSelector()));
        selector->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (selector) {
            addOwnedElement(selector);
        }
    }
}

void QUmlLifeline::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLifeline");
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::DocumentationRole] = QStringLiteral("References the InteractionFragments in which this Lifeline takes part.");
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("coveredBy")][QtModeling::OppositeEndRole] = QStringLiteral("InteractionFragment-covered");

    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLifeline");
    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::DocumentationRole] = QStringLiteral("References the Interaction that represents the decomposition.");
    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("decomposedAs")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLifeline");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::DocumentationRole] = QStringLiteral("References the Interaction enclosing this Lifeline.");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("interaction")][QtModeling::OppositeEndRole] = QStringLiteral("Interaction-lifeline");

    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLifeline");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::DocumentationRole] = QStringLiteral("References the ConnectableElement within the classifier that contains the enclosing interaction.");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("represents")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLifeline");
    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::DocumentationRole] = QStringLiteral("If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set.");
    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("selector")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

