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
#include "qumlinstancespecification.h"
#include "qumlinstancespecification_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlSlot>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlInstanceSpecificationPrivate::QUmlInstanceSpecificationPrivate() :
    specification(0)
{
}

/*!
    \class QUmlInstanceSpecification

    \inmodule QtUml

    \brief An instance specification has the capability of being a deployment target in a deployment relationship, in the case that it is an instance of a node. It is also has the capability of being a deployed artifact, if it is an instance of an artifact.An instance specification is a model element that represents an instance in a modeled system.
 */

QUmlInstanceSpecification::QUmlInstanceSpecification(bool create_d_ptr) :
    QUmlDeployedArtifact(false),
    QUmlPackageableElement(false),
    QUmlDeploymentTarget(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInstanceSpecificationPrivate);
}

// Owned attributes

/*!
    The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.
 */
QSet<QUmlClassifier *> QUmlInstanceSpecification::classifier() const
{
    return QSet<QUmlClassifier *>();
}

void QUmlInstanceSpecification::addClassifier(QSet<QUmlClassifier *> classifier)
{
    Q_UNUSED(classifier);
}

void QUmlInstanceSpecification::removeClassifier(QSet<QUmlClassifier *> classifier)
{
    Q_UNUSED(classifier);
}

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.
 */
QSet<QUmlSlot *> QUmlInstanceSpecification::slot_() const
{
    return QSet<QUmlSlot *>();
}

void QUmlInstanceSpecification::addSlot(QSet<QUmlSlot *> slot_)
{
    Q_UNUSED(slot_);
}

void QUmlInstanceSpecification::removeSlot(QSet<QUmlSlot *> slot_)
{
    Q_UNUSED(slot_);
}

/*!
    A specification of how to compute, derive, or construct the instance.
 */
QUmlValueSpecification *QUmlInstanceSpecification::specification() const
{
    return 0;
}

void QUmlInstanceSpecification::setSpecification(QUmlValueSpecification *specification)
{
    Q_UNUSED(specification);
}

QT_END_NAMESPACE

