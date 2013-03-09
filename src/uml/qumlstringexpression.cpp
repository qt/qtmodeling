/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qumlstringexpression.h"
#include "qumlstringexpression_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStringExpressionPrivate::QUmlStringExpressionPrivate() :
    owningExpression(0)
{
}

QUmlStringExpressionPrivate::~QUmlStringExpressionPrivate()
{
}

/*!
    \class QUmlStringExpression

    \inmodule QtUml

    \brief An expression that specifies a string value that is derived by concatenating a set of sub string expressions, some of which might be template parameters.
 */

QUmlStringExpression::QUmlStringExpression(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlStringExpressionPrivate, wrapper, parent),
    _wrappedUmlExpression(new QUmlExpression(this)),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this))
{
    setPropertyData();
}

QUmlStringExpression::QUmlStringExpression(QUmlStringExpressionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlExpression(new QUmlExpression(this)),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this))
{
    setPropertyData();
}

QUmlStringExpression::~QUmlStringExpression()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlStringExpression::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlStringExpression::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlStringExpression::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlStringExpression::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlStringExpression::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlStringExpression::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->ownedTemplateSignature();
}

void QUmlStringExpression::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlStringExpression::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlStringExpression::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlStringExpression::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStringExpression
// ---------------------------------------------------------------

/*!
    The string expression of which this expression is a substring.
 */
QUmlStringExpression *QUmlStringExpression::owningExpression() const
{
    // This is a read-write association end

    Q_D(const QUmlStringExpression);
    return d->owningExpression;
}

void QUmlStringExpression::setOwningExpression(QUmlStringExpression *owningExpression)
{
    // This is a read-write association end

    Q_D(QUmlStringExpression);
    if (d->owningExpression != owningExpression) {
        // Adjust opposite property
        if (d->owningExpression)
            d->owningExpression->removeSubExpression(this);

        d->owningExpression = owningExpression;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(owningExpression));

        // Adjust opposite property
        if (owningExpression)
            owningExpression->addSubExpression(this);
    }
}

/*!
    The StringExpressions that constitute this StringExpression.
 */
QSet<QUmlStringExpression *> QUmlStringExpression::subExpressions() const
{
    // This is a read-write association end

    Q_D(const QUmlStringExpression);
    return d->subExpressions;
}

void QUmlStringExpression::addSubExpression(QUmlStringExpression *subExpression)
{
    // This is a read-write association end

    Q_D(QUmlStringExpression);
    if (!d->subExpressions.contains(subExpression)) {
        d->subExpressions.insert(subExpression);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(subExpression));

        // Adjust opposite property
        subExpression->setOwningExpression(this);
    }
}

void QUmlStringExpression::removeSubExpression(QUmlStringExpression *subExpression)
{
    // This is a read-write association end

    Q_D(QUmlStringExpression);
    if (d->subExpressions.contains(subExpression)) {
        d->subExpressions.remove(subExpression);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(subExpression));

        // Adjust opposite property
        subExpression->setOwningExpression(0);
    }
}

/*!
    The query stringValue() returns the string that concatenates, in order, all the component string literals of all the subexpressions that are part of the StringExpression.
 */
QString QUmlStringExpression::stringValue() const
{
    qWarning("QUmlStringExpression::stringValue: operation to be implemented");

    return QString(); // change here to your derived return
}

void QUmlStringExpression::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("owningExpression")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("owningExpression")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("owningExpression")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The string expression of which this expression is a substring.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("owningExpression")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("owningExpression")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("owningExpression")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStringExpression::subExpression");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("subExpressions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("subExpressions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("subExpressions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The StringExpressions that constitute this StringExpression.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("subExpressions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("subExpressions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStringExpression")][QString::fromLatin1("subExpressions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStringExpression::owningExpression");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstringexpression.cpp"

