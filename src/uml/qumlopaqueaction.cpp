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
#include "qumlopaqueaction.h"
#include "qumlopaqueaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlOpaqueActionPrivate::QUmlOpaqueActionPrivate()
{
}

QUmlOpaqueActionPrivate::~QUmlOpaqueActionPrivate()
{
}

/*!
    \class QUmlOpaqueAction

    \inmodule QtUml

    \brief An action with implementation-specific semantics.
 */

QUmlOpaqueAction::QUmlOpaqueAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlOpaqueActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlOpaqueAction::QUmlOpaqueAction(QUmlOpaqueActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlOpaqueAction::~QUmlOpaqueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlOpaqueAction
// ---------------------------------------------------------------

/*!
    Specifies the action in one or more languages.
 */
QList<QString> QUmlOpaqueAction::bodies() const
{
    // This is a read-write attribute

    Q_D(const QUmlOpaqueAction);
    return d->bodies;
}

void QUmlOpaqueAction::addBody(QString body)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueAction);
    if (!d->bodies.contains(body)) {
        d->bodies.append(body);
    }
}

void QUmlOpaqueAction::removeBody(QString body)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueAction);
    if (d->bodies.contains(body)) {
        d->bodies.removeAll(body);
    }
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
QList<QString> QUmlOpaqueAction::languages() const
{
    // This is a read-write attribute

    Q_D(const QUmlOpaqueAction);
    return d->languages;
}

void QUmlOpaqueAction::addLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueAction);
    if (!d->languages.contains(language)) {
        d->languages.append(language);
    }
}

void QUmlOpaqueAction::removeLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QUmlOpaqueAction);
    if (d->languages.contains(language)) {
        d->languages.removeAll(language);
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlOpaqueAction
// ---------------------------------------------------------------

/*!
    Provides input to the action.
 */
QSet<QUmlInputPin *> QUmlOpaqueAction::inputValues() const
{
    // This is a read-write association end

    Q_D(const QUmlOpaqueAction);
    return d->inputValues;
}

void QUmlOpaqueAction::addInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QUmlOpaqueAction);
    if (!d->inputValues.contains(inputValue)) {
        d->inputValues.insert(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(inputValue));
    }
}

void QUmlOpaqueAction::removeInputValue(QUmlInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QUmlOpaqueAction);
    if (d->inputValues.contains(inputValue)) {
        d->inputValues.remove(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(inputValue));
    }
}

/*!
    Takes output from the action.
 */
QSet<QUmlOutputPin *> QUmlOpaqueAction::outputValues() const
{
    // This is a read-write association end

    Q_D(const QUmlOpaqueAction);
    return d->outputValues;
}

void QUmlOpaqueAction::addOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    Q_D(QUmlOpaqueAction);
    if (!d->outputValues.contains(outputValue)) {
        d->outputValues.insert(outputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(outputValue));
    }
}

void QUmlOpaqueAction::removeOutputValue(QUmlOutputPin *outputValue)
{
    // This is a read-write association end

    Q_D(QUmlOpaqueAction);
    if (d->outputValues.contains(outputValue)) {
        d->outputValues.remove(outputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(outputValue));
    }
}

void QUmlOpaqueAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the action in one or more languages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Languages the body strings use, in the same order as the body strings");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Provides input to the action.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Takes output from the action.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlopaqueaction.cpp"

