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

#include "qconstraint.h"
#include "qconstraint_p.h"
#include "qnamedelement_p.h"
#include "qelement_p.h"

#include <QtUml/QElement>
#include <QtUml/QNamespace>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QConstraintPrivate::QConstraintPrivate() :
    context(0),
    specification(0),
    constrainedElements(new QList<QElement *>)
{
}

QConstraintPrivate::~QConstraintPrivate()
{
    delete constrainedElements;
}
  
void QConstraintPrivate::setContext(const QNamespace *context) 
{  
    this->context = const_cast<QNamespace *>(context);   
}
  
void QConstraintPrivate::setSpecification(const QValueSpecification *specification) 
{  
    this->specification = const_cast<QValueSpecification *>(specification);   
}
  
void QConstraintPrivate::addConstrainedElement(const QElement *constrainedElement) 
{   
    this->constrainedElements->append(const_cast<QElement *>(constrainedElement));  
}
 
void QConstraintPrivate::removeConstrainedElement(const QElement *constrainedElement) 
{    
    this->constrainedElements->removeAll(const_cast<QElement *>(constrainedElement)); 
}

/*!
    \class QConstraint

    \inmodule QtUml

    \brief A constraint is a condition or restriction expressed in natural language text or in a machine readable language for the purpose of declaring some of the semantics of an element.
 */

QConstraint::QConstraint(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QConstraintPrivate;
}

QConstraint::QConstraint(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QConstraintPrivate;
}

QConstraint::~QConstraint()
{
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QConstraint::context() const
{
    Q_D(const QConstraint);
    return d->context;
}

void QConstraint::setContext(const QNamespace *context)
{
    Q_D(QConstraint);
    d->setContext(const_cast<QNamespace *>(context));
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QValueSpecification *QConstraint::specification() const
{
    Q_D(const QConstraint);
    return d->specification;
}

void QConstraint::setSpecification(const QValueSpecification *specification)
{
    Q_D(QConstraint);
    d->setSpecification(const_cast<QValueSpecification *>(specification));
}

/*!
    The ordered set of Elements referenced by this Constraint.
 */
const QList<QElement *> *QConstraint::constrainedElements() const
{
    Q_D(const QConstraint);
    return d->constrainedElements;
}

void QConstraint::addConstrainedElement(const QElement *constrainedElement)
{
    Q_D(QConstraint);
    d->addConstrainedElement(const_cast<QElement *>(constrainedElement));
}

void QConstraint::removeConstrainedElement(const QElement *constrainedElement)
{
    Q_D(QConstraint);
    d->removeConstrainedElement(const_cast<QElement *>(constrainedElement));
}

#include "moc_qconstraint.cpp"

QT_END_NAMESPACE_QTUML

