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
#include "qumlopaqueexpression.h"

#include "private/qumlopaqueexpressionobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>

/*!
    \class QUmlOpaqueExpression

    \inmodule QtUml

    \brief An opaque expression is an uninterpreted textual statement that denotes a (possibly empty) set of values when evaluated in a context.Provides a mechanism for precisely defining the behavior of an opaque expression. An opaque expression is defined by a behavior restricted to return one result.
 */
QUmlOpaqueExpression::QUmlOpaqueExpression(bool createQModelingObject) :
    _behavior(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlOpaqueExpressionObject(this));
}

QModelingElement *QUmlOpaqueExpression::clone() const
{
    QUmlOpaqueExpression *c = new QUmlOpaqueExpression;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    c->setVisibility(visibility());
    if (behavior())
        c->setBehavior(dynamic_cast<QUmlBehavior *>(behavior()->clone()));
    foreach (QString element, bodies())
        c->addBody(element);
    foreach (QString element, languages())
        c->addLanguage(element);
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the behavior of the opaque expression.
 */
QUmlBehavior *QUmlOpaqueExpression::behavior() const
{
    // This is a read-write association end

    return _behavior;
}

void QUmlOpaqueExpression::setBehavior(QUmlBehavior *behavior)
{
    // This is a read-write association end

    if (_behavior != behavior) {
        _behavior = behavior;
        if (behavior && behavior->asQModelingObject() && this->asQModelingObject())
            QObject::connect(behavior->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setBehavior()));
    }
}

/*!
    The text of the expression, possibly in multiple languages.
 */
const QList<QString> QUmlOpaqueExpression::bodies() const
{
    // This is a read-write property

    return _bodies;
}

void QUmlOpaqueExpression::addBody(QString body)
{
    // This is a read-write property

    if (!_bodies.contains(body)) {
        _bodies.append(body);
    }
}

void QUmlOpaqueExpression::removeBody(QString body)
{
    // This is a read-write property

    if (_bodies.contains(body)) {
        _bodies.removeAll(body);
    }
}

/*!
    Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order.
 */
const QList<QString> QUmlOpaqueExpression::languages() const
{
    // This is a read-write property

    return _languages;
}

void QUmlOpaqueExpression::addLanguage(QString language)
{
    // This is a read-write property

    if (!_languages.contains(language)) {
        _languages.append(language);
    }
}

void QUmlOpaqueExpression::removeLanguage(QString language)
{
    // This is a read-write property

    if (_languages.contains(language)) {
        _languages.removeAll(language);
    }
}

/*!
    Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior.
 */
QUmlParameter *QUmlOpaqueExpression::result() const
{
    // This is a read-only derived association end

    qWarning("QUmlOpaqueExpression::result(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlOpaqueExpression::setResult(QUmlParameter *result)
{
    // This is a read-only derived association end

    qWarning("QUmlOpaqueExpression::setResult(): to be implemented (this is a derived association end)");
    Q_UNUSED(result);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

/*!
    The query isIntegral() tells whether an expression is intended to produce an integer.
 */
bool QUmlOpaqueExpression::isIntegral() const
{
    qWarning("QUmlOpaqueExpression::isIntegral(): to be implemented (operation)");

    return bool ();
}

/*!
    The query isNonNegative() tells whether an integer expression has a non-negative value.
 */
bool QUmlOpaqueExpression::isNonNegative() const
{
    qWarning("QUmlOpaqueExpression::isNonNegative(): to be implemented (operation)");

    return bool ();
}

/*!
    The query isPositive() tells whether an integer expression has a positive value.
 */
bool QUmlOpaqueExpression::isPositive() const
{
    qWarning("QUmlOpaqueExpression::isPositive(): to be implemented (operation)");

    return bool ();
}

/*!
    The query value() gives an integer value for an expression intended to produce one.
 */
int QUmlOpaqueExpression::value() const
{
    qWarning("QUmlOpaqueExpression::value(): to be implemented (operation)");

    return int ();
}

