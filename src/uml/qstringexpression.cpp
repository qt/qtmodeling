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

#include "qstringexpression.h"
#include "qstringexpression_p.h"


QT_BEGIN_NAMESPACE_QTUML

QStringExpressionPrivate::QStringExpressionPrivate() :
    owningExpression(0),
    subExpressions(new QSet<QStringExpression *>)
{
}

QStringExpressionPrivate::~QStringExpressionPrivate()
{
    delete subExpressions;
}

/*!
    \class QStringExpression

    \inmodule QtUml

    \brief An expression that specifies a string value that is derived by concatenating a set of sub string expressions, some of which might be template parameters.
 */

QStringExpression::QStringExpression(QObject *parent) :
    QObject(*new QStringExpressionPrivate, parent),
    _wrappedExpression(new QExpression(this)),
    _wrappedTemplateableElement(new QTemplateableElement(this))
{
}

QStringExpression::QStringExpression(QStringExpressionPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedExpression(new QExpression(this)),
    _wrappedTemplateableElement(new QTemplateableElement(this))
{
}

QStringExpression::~QStringExpression()
{
}

/*!
    The string expression of which this expression is a substring.
 */
QStringExpression *QStringExpression::owningExpression() const
{
    // This is a read-write association end

    Q_D(const QStringExpression);
    return d->owningExpression;
}

void QStringExpression::setOwningExpression(QStringExpression *owningExpression)
{
    // This is a read-write association end

    Q_D(QStringExpression);
    if (d->owningExpression != owningExpression) {
        // Adjust opposite property
        if (d->owningExpression)
            d->owningExpression->removeSubExpression(this);

        d->owningExpression = owningExpression;

        // Adjust subsetted property(ies)
        d->QElementPrivate::setOwner(dynamic_cast<QElement *>(owningExpression));

        // Adjust opposite property
        if (owningExpression)
            owningExpression->addSubExpression(this);
    }
}

/*!
    The StringExpressions that constitute this StringExpression.
 */
const QSet<QStringExpression *> *QStringExpression::subExpressions() const
{
    // This is a read-write association end

    Q_D(const QStringExpression);
    return d->subExpressions;
}

void QStringExpression::addSubExpression(QStringExpression *subExpression)
{
    // This is a read-write association end

    Q_D(QStringExpression);
    if (!d->subExpressions->contains(subExpression)) {
        d->subExpressions->insert(subExpression);

        // Adjust subsetted property(ies)
        d->QElementPrivate::addOwnedElement(dynamic_cast<QElement *>(subExpression));

        // Adjust opposite property
        subExpression->setOwningExpression(this);
    }
}

void QStringExpression::removeSubExpression(QStringExpression *subExpression)
{
    // This is a read-write association end

    Q_D(QStringExpression);
    if (d->subExpressions->contains(subExpression)) {
        d->subExpressions->remove(subExpression);

        // Adjust subsetted property(ies)
        d->QElementPrivate::removeOwnedElement(dynamic_cast<QElement *>(subExpression));

        // Adjust opposite property
        subExpression->setOwningExpression(0);
    }
}

/*!
    The query stringValue() returns the string that concatenates, in order, all the component string literals of all the subexpressions that are part of the StringExpression.
 */
QString QStringExpression::stringValue() const
{
    qWarning("QStringExpression::stringValue: operation to be implemented");
}

#include "moc_qstringexpression.cpp"

QT_END_NAMESPACE_QTUML

