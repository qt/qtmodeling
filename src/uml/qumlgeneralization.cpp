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
#include "qumlgeneralization.h"

#include "private/qumlgeneralizationobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralizationSet>

/*!
    \class QUmlGeneralization

    \inmodule QtUml

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.A generalization relates a specific classifier to a more general classifier, and is owned by the specific classifier.
 */
QUmlGeneralization::QUmlGeneralization(bool createQObject) :
    _general(0),
    _isSubstitutable(true),
    _specific(0)
{
    if (createQObject)
        _qObject = new QUmlGeneralizationObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlGeneralization::~QUmlGeneralization()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlGeneralization::clone() const
{
    QUmlGeneralization *c = new QUmlGeneralization;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (general())
        c->setGeneral(dynamic_cast<QUmlClassifier *>(general()->clone()));
    foreach (QUmlGeneralizationSet *element, generalizationSets())
        c->addGeneralizationSet(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    c->setSubstitutable(isSubstitutable());
    if (specific())
        c->setSpecific(dynamic_cast<QUmlClassifier *>(specific()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the general classifier in the Generalization relationship.
 */
QUmlClassifier *QUmlGeneralization::general() const
{
    // This is a read-write association end

    return _general;
}

void QUmlGeneralization::setGeneral(QUmlClassifier *general)
{
    // This is a read-write association end

    if (_general != general) {
        // Adjust subsetted properties
        removeTarget(_general);

        _general = general;
        if (general && general->asQObject() && this->asQObject())
            QObject::connect(general->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setGeneral()));

        // Adjust subsetted properties
        if (general) {
            addTarget(general);
        }
    }
}

/*!
    Designates a set in which instances of Generalization is considered members.
 */
const QSet<QUmlGeneralizationSet *> QUmlGeneralization::generalizationSets() const
{
    // This is a read-write association end

    return _generalizationSets;
}

void QUmlGeneralization::addGeneralizationSet(QUmlGeneralizationSet *generalizationSet)
{
    // This is a read-write association end

    if (!_generalizationSets.contains(generalizationSet)) {
        _generalizationSets.insert(generalizationSet);
        if (generalizationSet && generalizationSet->asQObject() && this->asQObject())
            QObject::connect(generalizationSet->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeGeneralizationSet(QObject *)));

        // Adjust opposite properties
        if (generalizationSet) {
            generalizationSet->addGeneralization(this);
        }
    }
}

void QUmlGeneralization::removeGeneralizationSet(QUmlGeneralizationSet *generalizationSet)
{
    // This is a read-write association end

    if (_generalizationSets.contains(generalizationSet)) {
        _generalizationSets.remove(generalizationSet);

        // Adjust opposite properties
        if (generalizationSet) {
            generalizationSet->removeGeneralization(this);
        }
    }
}

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QUmlGeneralization::isSubstitutable() const
{
    // This is a read-write property

    return _isSubstitutable;
}

void QUmlGeneralization::setSubstitutable(bool isSubstitutable)
{
    // This is a read-write property

    if (_isSubstitutable != isSubstitutable) {
        _isSubstitutable = isSubstitutable;
        _modifiedResettableProperties << QStringLiteral("isSubstitutable");
    }
}

/*!
    References the specializing classifier in the Generalization relationship.
 */
QUmlClassifier *QUmlGeneralization::specific() const
{
    // This is a read-write association end

    return _specific;
}

void QUmlGeneralization::setSpecific(QUmlClassifier *specific)
{
    // This is a read-write association end

    if (_specific != specific) {
        // Adjust subsetted properties
        removeSource(_specific);

        _specific = specific;
        if (specific && specific->asQObject() && this->asQObject())
            QObject::connect(specific->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSpecific()));

        // Adjust subsetted properties
        setOwner(specific);
        if (specific) {
            addSource(specific);
        }
    }
}

void QUmlGeneralization::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    _groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));
    _groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("general"))));
    _groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizationSets"))));
    _groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSubstitutable"))));
    _groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specific"))));
}

void QUmlGeneralization::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlGeneralization");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::DocumentationRole] = QStringLiteral("References the general classifier in the Generalization relationship.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("general")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlGeneralization");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::DocumentationRole] = QStringLiteral("Designates a set in which instances of Generalization is considered members.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("generalizationSets")][QtModeling::OppositeEndRole] = QStringLiteral("GeneralizationSet-generalization");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlGeneralization");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::DocumentationRole] = QStringLiteral("Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("isSubstitutable")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlGeneralization");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::DocumentationRole] = QStringLiteral("References the specializing classifier in the Generalization relationship.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner DirectedRelationship-source");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlGeneralization")][QStringLiteral("specific")][QtModeling::OppositeEndRole] = QStringLiteral("Classifier-generalization");

}

