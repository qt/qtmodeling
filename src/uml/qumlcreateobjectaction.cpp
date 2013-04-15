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
#include "qumlcreateobjectaction.h"
#include "qumlcreateobjectaction_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlCreateObjectActionPrivate::QUmlCreateObjectActionPrivate() :
    classifier(0),
    result(0)
{
}

QUmlCreateObjectActionPrivate::~QUmlCreateObjectActionPrivate()
{
}

/*!
    \class QUmlCreateObjectAction

    \inmodule QtUml

    \brief A create object action is an action that creates an object that conforms to a statically specified classifier and puts it on an output pin at runtime.
 */

QUmlCreateObjectAction::QUmlCreateObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlCreateObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlCreateObjectAction::QUmlCreateObjectAction(QUmlCreateObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlCreateObjectAction::~QUmlCreateObjectAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlCreateObjectAction
// ---------------------------------------------------------------

/*!
    Classifier to be instantiated.
 */
QUmlClassifier *QUmlCreateObjectAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QUmlCreateObjectAction);
    return d->classifier;
}

void QUmlCreateObjectAction::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QUmlCreateObjectAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

/*!
    Gives the output pin on which the result is put.
 */
QUmlOutputPin *QUmlCreateObjectAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlCreateObjectAction);
    return d->result;
}

void QUmlCreateObjectAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlCreateObjectAction);
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

void QUmlCreateObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Classifier to be instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcreateobjectaction.cpp"

