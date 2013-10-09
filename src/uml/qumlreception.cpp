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
#include "qumlreception.h"

#include "private/qumlreceptionobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlSignal>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlType>

/*!
    \class QUmlReception

    \inmodule QtUml

    \brief A reception is a declaration stating that a classifier is prepared to react to the receipt of a signal. A reception designates a signal and specifies the expected behavioral response. The details of handling a signal are specified by the behavior associated with the reception or the classifier itself.
 */
QUmlReception::QUmlReception(bool createQObject) :
    _signal(0)
{
    if (createQObject)
        _qObject = new QUmlReceptionObject(this);
    setGroupProperties();
    setPropertyData();
}

QUmlReception::~QUmlReception()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlReception::clone() const
{
    QUmlReception *c = new QUmlReception;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    c->setConcurrency(concurrency());
    c->setAbstract(isAbstract());
    foreach (QUmlBehavior *element, methods())
        c->addMethod(dynamic_cast<QUmlBehavior *>(element->clone()));
    foreach (QUmlParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlParameter *>(element->clone()));
    foreach (QUmlParameterSet *element, ownedParameterSets())
        c->addOwnedParameterSet(dynamic_cast<QUmlParameterSet *>(element->clone()));
    foreach (QUmlType *element, raisedExceptions())
        c->addRaisedException(dynamic_cast<QUmlType *>(element->clone()));
    if (signal())
        c->setSignal(dynamic_cast<QUmlSignal *>(signal()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The signal that this reception handles.
 */
QUmlSignal *QUmlReception::signal() const
{
    // This is a read-write association end

    return _signal;
}

void QUmlReception::setSignal(QUmlSignal *signal)
{
    // This is a read-write association end

    if (_signal != signal) {
        _signal = signal;
        if (signal && signal->asQObject() && this->asQObject())
            QObject::connect(signal->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSignal()));
    }
}

void QUmlReception::setGroupProperties()
{
    const QMetaObject *metaObject = _qObject->metaObject();

    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    _groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    _groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    _groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));
    _groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("featuringClassifiers"))));
    _groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStatic"))));
    _groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("concurrency"))));
    _groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    _groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("methods"))));
    _groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    _groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameterSets"))));
    _groupProperties.insert(QStringLiteral("QUmlBehavioralFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("raisedExceptions"))));
    _groupProperties.insert(QStringLiteral("QUmlReception"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signal"))));
}

void QUmlReception::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlReception");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::DocumentationRole] = QStringLiteral("The signal that this reception handles.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlReception")][QStringLiteral("signal")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

