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
#include "qumlreadextentaction.h"
#include "qumlreadextentaction_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlReadExtentActionPrivate::QUmlReadExtentActionPrivate() :
    classifier(0),
    result(0)
{
}

QUmlReadExtentActionPrivate::~QUmlReadExtentActionPrivate()
{
}

/*!
    \class QUmlReadExtentAction

    \inmodule QtUml

    \brief A read extent action is an action that retrieves the current instances of a classifier.
 */

QUmlReadExtentAction::QUmlReadExtentAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlReadExtentActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlReadExtentAction::QUmlReadExtentAction(QUmlReadExtentActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlReadExtentAction::~QUmlReadExtentAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlReadExtentAction
// ---------------------------------------------------------------

/*!
    The classifier whose instances are to be retrieved.
 */
QUmlClassifier *QUmlReadExtentAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QUmlReadExtentAction);
    return d->classifier;
}

void QUmlReadExtentAction::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QUmlReadExtentAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

/*!
    The runtime instances of the classifier.
 */
QUmlOutputPin *QUmlReadExtentAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlReadExtentAction);
    return d->result;
}

void QUmlReadExtentAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlReadExtentAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
        }
    }
}

void QUmlReadExtentAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier whose instances are to be retrieved.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The runtime instances of the classifier.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadExtentAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlreadextentaction.cpp"

