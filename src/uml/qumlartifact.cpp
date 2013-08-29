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
#include "qumlartifact.h"

#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlArtifact::QUmlArtifact(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QString QUmlArtifact::fileName() const
{
    return _fileName;
}

void QUmlArtifact::setFileName(QString fileName)
{
    UmlArtifact::setFileName(fileName);
}

const QSet<QUmlManifestation *> QUmlArtifact::manifestation() const
{
    return *(reinterpret_cast<const QSet<QUmlManifestation *> *>(&_manifestation));
}

void QUmlArtifact::addManifestation(UmlManifestation *manifestation)
{
    UmlArtifact::addManifestation(manifestation);
}

void QUmlArtifact::removeManifestation(UmlManifestation *manifestation)
{
    UmlArtifact::removeManifestation(manifestation);
}

const QSet<QUmlArtifact *> QUmlArtifact::nestedArtifact() const
{
    return *(reinterpret_cast<const QSet<QUmlArtifact *> *>(&_nestedArtifact));
}

void QUmlArtifact::addNestedArtifact(UmlArtifact *nestedArtifact)
{
    UmlArtifact::addNestedArtifact(nestedArtifact);
}

void QUmlArtifact::removeNestedArtifact(UmlArtifact *nestedArtifact)
{
    UmlArtifact::removeNestedArtifact(nestedArtifact);
}

const QList<QUmlProperty *> QUmlArtifact::ownedAttribute() const
{
    return *(reinterpret_cast<const QList<QUmlProperty *> *>(&_ownedAttribute));
}

void QUmlArtifact::addOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlArtifact::addOwnedAttribute(ownedAttribute);
}

void QUmlArtifact::removeOwnedAttribute(UmlProperty *ownedAttribute)
{
    UmlArtifact::removeOwnedAttribute(ownedAttribute);
}

const QList<QUmlOperation *> QUmlArtifact::ownedOperation() const
{
    return *(reinterpret_cast<const QList<QUmlOperation *> *>(&_ownedOperation));
}

void QUmlArtifact::addOwnedOperation(UmlOperation *ownedOperation)
{
    UmlArtifact::addOwnedOperation(ownedOperation);
}

void QUmlArtifact::removeOwnedOperation(UmlOperation *ownedOperation)
{
    UmlArtifact::removeOwnedOperation(ownedOperation);
}

QT_END_NAMESPACE

