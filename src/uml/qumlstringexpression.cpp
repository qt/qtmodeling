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
#include "qumlstringexpression.h"

#include "private/qumlstringexpressionobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlStringExpression

    \inmodule QtUml

    \brief An expression that specifies a string value that is derived by concatenating a set of sub string expressions, some of which might be template parameters.
 */
QUmlStringExpression::QUmlStringExpression(bool createQModelingObject) :
    QUmlExpression(false),
    _owningExpression(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlStringExpressionObject(this));
}

QModelingElement *QUmlStringExpression::clone() const
{
    QUmlStringExpression *c = new QUmlStringExpression;
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
    foreach (QUmlValueSpecification *element, operands())
        c->addOperand(dynamic_cast<QUmlValueSpecification *>(element->clone()));
    c->setSymbol(symbol());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    if (owningExpression())
        c->setOwningExpression(dynamic_cast<QUmlStringExpression *>(owningExpression()->clone()));
    foreach (QUmlStringExpression *element, subExpressions())
        c->addSubExpression(dynamic_cast<QUmlStringExpression *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The string expression of which this expression is a substring.
 */
QUmlStringExpression *QUmlStringExpression::owningExpression() const
{
    // This is a read-write association end

    return _owningExpression;
}

void QUmlStringExpression::setOwningExpression(QUmlStringExpression *owningExpression)
{
    // This is a read-write association end

    if (_owningExpression != owningExpression) {
        // Adjust subsetted properties

        _owningExpression = owningExpression;
        if (owningExpression && owningExpression->asQModelingObject() && this->asQModelingObject())
            QObject::connect(owningExpression->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwningExpression()));

        // Adjust subsetted properties
        setOwner(owningExpression);
    }
}

/*!
    The StringExpressions that constitute this StringExpression.
 */
const QSet<QUmlStringExpression *> QUmlStringExpression::subExpressions() const
{
    // This is a read-write association end

    return _subExpressions;
}

void QUmlStringExpression::addSubExpression(QUmlStringExpression *subExpression)
{
    // This is a read-write association end

    if (!_subExpressions.contains(subExpression)) {
        _subExpressions.insert(subExpression);
        if (subExpression && subExpression->asQModelingObject() && this->asQModelingObject())
            QObject::connect(subExpression->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSubExpression(QObject *)));
        subExpression->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(subExpression);
    }
}

void QUmlStringExpression::removeSubExpression(QUmlStringExpression *subExpression)
{
    // This is a read-write association end

    if (_subExpressions.contains(subExpression)) {
        _subExpressions.remove(subExpression);
        if (subExpression->asQModelingObject())
            subExpression->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(subExpression);
    }
}

// OPERATIONS

/*!
    The query stringValue() returns the string that concatenates, in order, all the component string literals of all the subexpressions that are part of the StringExpression.
 */
QString QUmlStringExpression::stringValue() const
{
    qWarning("QUmlStringExpression::stringValue(): to be implemented (operation)");

    return QString ();
}

