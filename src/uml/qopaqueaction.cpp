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

#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QOpaqueActionPrivate::QOpaqueActionPrivate()
{
}

QOpaqueActionPrivate::~QOpaqueActionPrivate()
{
}

/*!
    \class QOpaqueAction

    \inmodule QtUml

    \brief An action with implementation-specific semantics.
 */

QOpaqueAction::QOpaqueAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QOpaqueActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QOpaqueAction::QOpaqueAction(QOpaqueActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QOpaqueAction::~QOpaqueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QOpaqueAction
// ---------------------------------------------------------------

/*!
    Specifies the action in one or more languages.
 */
QList<QString> QOpaqueAction::bodies() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueAction);
    return d->bodies;
}

void QOpaqueAction::addBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueAction);
    if (!d->bodies.contains(body)) {
        d->bodies.append(body);
    }
}

void QOpaqueAction::removeBody(QString body)
{
    // This is a read-write attribute

    Q_D(QOpaqueAction);
    if (d->bodies.contains(body)) {
        d->bodies.removeAll(body);
    }
}

/*!
    Languages the body strings use, in the same order as the body strings
 */
QList<QString> QOpaqueAction::languages() const
{
    // This is a read-write attribute

    Q_D(const QOpaqueAction);
    return d->languages;
}

void QOpaqueAction::addLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueAction);
    if (!d->languages.contains(language)) {
        d->languages.append(language);
    }
}

void QOpaqueAction::removeLanguage(QString language)
{
    // This is a read-write attribute

    Q_D(QOpaqueAction);
    if (d->languages.contains(language)) {
        d->languages.removeAll(language);
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QOpaqueAction
// ---------------------------------------------------------------

/*!
    Provides input to the action.
 */
QSet<QInputPin *> QOpaqueAction::inputValues() const
{
    // This is a read-write association end

    Q_D(const QOpaqueAction);
    return d->inputValues;
}

void QOpaqueAction::addInputValue(QInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QOpaqueAction);
    if (!d->inputValues.contains(inputValue)) {
        d->inputValues.insert(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(inputValue));
    }
}

void QOpaqueAction::removeInputValue(QInputPin *inputValue)
{
    // This is a read-write association end

    Q_D(QOpaqueAction);
    if (d->inputValues.contains(inputValue)) {
        d->inputValues.remove(inputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(inputValue));
    }
}

/*!
    Takes output from the action.
 */
QSet<QOutputPin *> QOpaqueAction::outputValues() const
{
    // This is a read-write association end

    Q_D(const QOpaqueAction);
    return d->outputValues;
}

void QOpaqueAction::addOutputValue(QOutputPin *outputValue)
{
    // This is a read-write association end

    Q_D(QOpaqueAction);
    if (!d->outputValues.contains(outputValue)) {
        d->outputValues.insert(outputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(outputValue));
    }
}

void QOpaqueAction::removeOutputValue(QOutputPin *outputValue)
{
    // This is a read-write association end

    Q_D(QOpaqueAction);
    if (d->outputValues.contains(outputValue)) {
        d->outputValues.remove(outputValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(outputValue));
    }
}

void QOpaqueAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the action in one or more languages.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("bodies")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Languages the body strings use, in the same order as the body strings");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("languages")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Provides input to the action.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("inputValues")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Takes output from the action.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOpaqueAction")][QString::fromLatin1("outputValues")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qopaqueaction.cpp"

