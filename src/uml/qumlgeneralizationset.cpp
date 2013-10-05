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
#include "qumlgeneralizationset.h"

#include "private/qumlgeneralizationsetobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
/*!
    \class QUmlGeneralizationSet

    \inmodule QtUml

    \brief A generalization set is a packageable element whose instances define collections of subsets of generalization relationships.
 */
QUmlGeneralizationSet::QUmlGeneralizationSet(bool createQObject) :
    _isCovering(false),
    _isDisjoint(false),
    _powertype(0)
{
    if (createQObject)
        _qObject = new QUmlGeneralizationSetObject(this);
    setPropertyData();
}

QUmlGeneralizationSet::~QUmlGeneralizationSet()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlGeneralizationSet::clone() const
{
    QUmlGeneralizationSet *c = new QUmlGeneralizationSet;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlGeneralization *element, generalization())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setCovering(isCovering());
    c->setDisjoint(isDisjoint());
    if (powertype())
        c->setPowertype(dynamic_cast<QUmlClassifier *>(powertype()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Designates the instances of Generalization which are members of a given GeneralizationSet.
 */
const QSet<QUmlGeneralization *> QUmlGeneralizationSet::generalization() const
{
    // This is a read-write association end

    return _generalization;
}

void QUmlGeneralizationSet::addGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    if (!_generalization.contains(generalization)) {
        _generalization.insert(generalization);
        if (generalization && generalization->asQObject() && this->asQObject())
            QObject::connect(generalization->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeGeneralization(QObject *)));

        // Adjust opposite properties
        if (generalization) {
            generalization->addGeneralizationSet(this);
        }
    }
}

void QUmlGeneralizationSet::removeGeneralization(QUmlGeneralization *generalization)
{
    // This is a read-write association end

    if (_generalization.contains(generalization)) {
        _generalization.remove(generalization);

        // Adjust opposite properties
        if (generalization) {
            generalization->removeGeneralizationSet(this);
        }
    }
}

/*!
    Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.
 */
bool QUmlGeneralizationSet::isCovering() const
{
    // This is a read-write property

    return _isCovering;
}

void QUmlGeneralizationSet::setCovering(bool isCovering)
{
    // This is a read-write property

    if (_isCovering != isCovering) {
        _isCovering = isCovering;
        _modifiedResettableProperties << QStringLiteral("isCovering");
    }
}

/*!
    Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.
 */
bool QUmlGeneralizationSet::isDisjoint() const
{
    // This is a read-write property

    return _isDisjoint;
}

void QUmlGeneralizationSet::setDisjoint(bool isDisjoint)
{
    // This is a read-write property

    if (_isDisjoint != isDisjoint) {
        _isDisjoint = isDisjoint;
        _modifiedResettableProperties << QStringLiteral("isDisjoint");
    }
}

/*!
    Designates the Classifier that is defined as the power type for the associated GeneralizationSet.
 */
QUmlClassifier *QUmlGeneralizationSet::powertype() const
{
    // This is a read-write association end

    return _powertype;
}

void QUmlGeneralizationSet::setPowertype(QUmlClassifier *powertype)
{
    // This is a read-write association end

    if (_powertype != powertype) {
        _powertype = powertype;
        if (powertype && powertype->asQObject() && this->asQObject())
            QObject::connect(powertype->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setPowertype()));
    }
}

void QUmlGeneralizationSet::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("generalization")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("generalization")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("generalization")][QtModeling::DocumentationRole] = QStringLiteral("Designates the instances of Generalization which are members of a given GeneralizationSet.");
    QModelingObject::propertyDataHash[QStringLiteral("generalization")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("generalization")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("generalization")][QtModeling::OppositeEndRole] = QStringLiteral("Generalization-generalizationSet");

    QModelingObject::propertyDataHash[QStringLiteral("isCovering")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("isCovering")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isCovering")][QtModeling::DocumentationRole] = QStringLiteral("Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet.");
    QModelingObject::propertyDataHash[QStringLiteral("isCovering")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isCovering")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isCovering")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("isDisjoint")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("isDisjoint")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("isDisjoint")][QtModeling::DocumentationRole] = QStringLiteral("Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager.");
    QModelingObject::propertyDataHash[QStringLiteral("isDisjoint")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isDisjoint")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("isDisjoint")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("powertype")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("powertype")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("powertype")][QtModeling::DocumentationRole] = QStringLiteral("Designates the Classifier that is defined as the power type for the associated GeneralizationSet.");
    QModelingObject::propertyDataHash[QStringLiteral("powertype")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("powertype")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("powertype")][QtModeling::OppositeEndRole] = QStringLiteral("Classifier-powertypeExtent");

}

