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
#include "qumlvariable.h"

#include "private/qumlvariableobject_p.h"

#include <QtUml/QUmlAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlVariable

    \inmodule QtUml

    \brief A variable is considered a connectable element.Variables are elements for passing data between actions indirectly. A local variable stores values shared by the actions within a structured activity group but not accessible outside it. The output of an action may be written to a variable and read for the input to a subsequent action, which is effectively an indirect data flow path. Because there is no predefined relationship between actions that read and write variables, these actions must be sequenced by control flows to prevent race conditions that may occur between actions that read or write the same variable.
 */
QUmlVariable::QUmlVariable(bool createQObject) :
    _activityScope(0),
    _scope(0)
{
    if (createQObject)
        _qObject = new QUmlVariableObject(this);
    setClassForProperty();
    setPropertyData();
}

QUmlVariable::~QUmlVariable()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlVariable::clone() const
{
    QUmlVariable *c = new QUmlVariable;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QUmlValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QUmlValueSpecification *>(upperValue()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlConnectableElementTemplateParameter *>(templateParameter()->clone()));
    if (activityScope())
        c->setActivityScope(dynamic_cast<QUmlActivity *>(activityScope()->clone()));
    if (scope())
        c->setScope(dynamic_cast<QUmlStructuredActivityNode *>(scope()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    An activity that owns the variable.
 */
QUmlActivity *QUmlVariable::activityScope() const
{
    // This is a read-write association end

    return _activityScope;
}

void QUmlVariable::setActivityScope(QUmlActivity *activityScope)
{
    // This is a read-write association end

    if (_activityScope != activityScope) {
        // Adjust subsetted properties

        _activityScope = activityScope;
        if (activityScope && activityScope->asQObject() && this->asQObject())
            QObject::connect(activityScope->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setActivityScope()));

        // Adjust subsetted properties
        setNamespace(activityScope);
    }
}

/*!
    A structured activity node that owns the variable.
 */
QUmlStructuredActivityNode *QUmlVariable::scope() const
{
    // This is a read-write association end

    return _scope;
}

void QUmlVariable::setScope(QUmlStructuredActivityNode *scope)
{
    // This is a read-write association end

    if (_scope != scope) {
        // Adjust subsetted properties

        _scope = scope;
        if (scope && scope->asQObject() && this->asQObject())
            QObject::connect(scope->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setScope()));

        // Adjust subsetted properties
        setNamespace(scope);
    }
}

// OPERATIONS

/*!
    The isAccessibleBy() operation is not defined in standard UML. Implementations should define it to specify which actions can access a variable.
 */
bool QUmlVariable::isAccessibleBy(QUmlAction *a) const
{
    qWarning("UmlVariable::isAccessibleBy(): to be implemented (operation)");

    Q_UNUSED(a);
    return bool ();
}

void QUmlVariable::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("isOrdered")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("isUnique")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("lower")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("lowerValue")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("upper")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("upperValue")] = QStringLiteral("QUmlMultiplicityElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("type")] = QStringLiteral("QUmlTypedElement");
    _classForProperty[QStringLiteral("owningTemplateParameter")] = QStringLiteral("QUmlParameterableElement");
    _classForProperty[QStringLiteral("ends")] = QStringLiteral("QUmlConnectableElement");
    _classForProperty[QStringLiteral("templateParameter")] = QStringLiteral("QUmlConnectableElement");
    _classForProperty[QStringLiteral("activityScope")] = QStringLiteral("QUmlVariable");
    _classForProperty[QStringLiteral("scope")] = QStringLiteral("QUmlVariable");
}

void QUmlVariable::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlVariable");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::DocumentationRole] = QStringLiteral("An activity that owns the variable.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("activityScope")][QtModeling::OppositeEndRole] = QStringLiteral("Activity-variable");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlVariable");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::DocumentationRole] = QStringLiteral("A structured activity node that owns the variable.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlVariable")][QStringLiteral("scope")][QtModeling::OppositeEndRole] = QStringLiteral("StructuredActivityNode-variable");

}

