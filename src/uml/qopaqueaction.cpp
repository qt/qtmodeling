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

#include "qopaqueaction.h"
#include "qopaqueaction_p.h"
#include "qaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>

QT_BEGIN_NAMESPACE_QTUML

QOpaqueActionPrivate::QOpaqueActionPrivate() :
    bodies(new QList<QString>),
    languages(new QList<QString>),
    inputValues(new QSet<QInputPin *>),
    outputValues(new QSet<QOutputPin *>)
{
}

QOpaqueActionPrivate::~QOpaqueActionPrivate()
{
    delete bodies;
    delete languages;
    delete inputValues;
    delete outputValues;
}

void QOpaqueActionPrivate::addBody(QString body)
{
    this->bodies->append(body);
}

void QOpaqueActionPrivate::removeBody(QString body)
{
    this->bodies->removeAll(body);
}

void QOpaqueActionPrivate::addLanguage(QString language)
{
    this->languages->append(language);
}

void QOpaqueActionPrivate::removeLanguage(QString language)
{
    this->languages->removeAll(language);
}
  
void QOpaqueActionPrivate::addInputValue(const QInputPin *inputValue) 
{   
    this->inputValues->insert(const_cast<QInputPin *>(inputValue)); 

    // Adjust subsetted property(ies)
    addInput(inputValue); 
}
 
void QOpaqueActionPrivate::removeInputValue(const QInputPin *inputValue) 
{    
    this->inputValues->remove(const_cast<QInputPin *>(inputValue)); 

    // Adjust subsetted property(ies)
    removeInput(inputValue);
}
  
void QOpaqueActionPrivate::addOutputValue(const QOutputPin *outputValue) 
{   
    this->outputValues->insert(const_cast<QOutputPin *>(outputValue)); 

    // Adjust subsetted property(ies)
    addOutput(outputValue); 
}
 
void QOpaqueActionPrivate::removeOutputValue(const QOutputPin *outputValue) 
{    
    this->outputValues->remove(const_cast<QOutputPin *>(outputValue)); 

    // Adjust subsetted property(ies)
    removeOutput(outputValue);
}

/*!
    \class QOpaqueAction

    \inmodule QtUml

    \brief An action with implementation-specific semantics.
 */

QOpaqueAction::QOpaqueAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QOpaqueActionPrivate;
}

QOpaqueAction::QOpaqueAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QOpaqueActionPrivate;
}

QOpaqueAction::~QOpaqueAction()
{
}

/*!
    Specifies the action in one or more languages.
 */
const QList<QString> *QOpaqueAction::bodies() const
{
    Q_D(const QOpaqueAction);
    return d->bodies;
}

void QOpaqueAction::addBody(QString body)
{
    Q_D(QOpaqueAction);
    d->addBody(body);
}

void QOpaqueAction::removeBody(QString body)
{
    Q_D(QOpaqueAction);
    d->removeBody(body);
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
const QList<QString> *QOpaqueAction::languages() const
{
    Q_D(const QOpaqueAction);
    return d->languages;
}

void QOpaqueAction::addLanguage(QString language)
{
    Q_D(QOpaqueAction);
    d->addLanguage(language);
}

void QOpaqueAction::removeLanguage(QString language)
{
    Q_D(QOpaqueAction);
    d->removeLanguage(language);
}

/*!
    Provides input to the action.
 */
const QSet<QInputPin *> *QOpaqueAction::inputValues() const
{
    Q_D(const QOpaqueAction);
    return d->inputValues;
}

void QOpaqueAction::addInputValue(const QInputPin *inputValue)
{
    Q_D(QOpaqueAction);
    d->addInputValue(const_cast<QInputPin *>(inputValue));
}

void QOpaqueAction::removeInputValue(const QInputPin *inputValue)
{
    Q_D(QOpaqueAction);
    d->removeInputValue(const_cast<QInputPin *>(inputValue));
}

/*!
    Takes output from the action.
 */
const QSet<QOutputPin *> *QOpaqueAction::outputValues() const
{
    Q_D(const QOpaqueAction);
    return d->outputValues;
}

void QOpaqueAction::addOutputValue(const QOutputPin *outputValue)
{
    Q_D(QOpaqueAction);
    d->addOutputValue(const_cast<QOutputPin *>(outputValue));
}

void QOpaqueAction::removeOutputValue(const QOutputPin *outputValue)
{
    Q_D(QOpaqueAction);
    d->removeOutputValue(const_cast<QOutputPin *>(outputValue));
}

#include "moc_qopaqueaction.cpp"

QT_END_NAMESPACE_QTUML

