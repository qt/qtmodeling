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
#include "qumlartifact_p.h"

#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlArtifactPrivate::QUmlArtifactPrivate()
{
}

/*!
    \class QUmlArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */

QUmlArtifact::QUmlArtifact(bool create_d_ptr) :
    QUmlDeployedArtifact(false),
    QUmlClassifier(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlArtifactPrivate);
}

// OWNED ATTRIBUTES

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QUmlArtifact::fileName() const
{
    // This is a read-write property

    QM_D(const QUmlArtifact);
    return d->fileName;
}

void QUmlArtifact::setFileName(QString fileName)
{
    // This is a read-write property

    QM_D(QUmlArtifact);
    if (d->fileName != fileName) {
        d->fileName = fileName;
    }
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
QSet<QUmlManifestation *> QUmlArtifact::manifestation() const
{
    // This is a read-write association end

    QM_D(const QUmlArtifact);
    return d->manifestation;
}

void QUmlArtifact::addManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (!d->manifestation.contains(manifestation)) {
        d->manifestation.insert(manifestation);
    }
}

void QUmlArtifact::removeManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (d->manifestation.contains(manifestation)) {
        d->manifestation.remove(manifestation);
    }
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
QSet<QUmlArtifact *> QUmlArtifact::nestedArtifact() const
{
    // This is a read-write association end

    QM_D(const QUmlArtifact);
    return d->nestedArtifact;
}

void QUmlArtifact::addNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (!d->nestedArtifact.contains(nestedArtifact)) {
        d->nestedArtifact.insert(nestedArtifact);
    }
}

void QUmlArtifact::removeNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (d->nestedArtifact.contains(nestedArtifact)) {
        d->nestedArtifact.remove(nestedArtifact);
    }
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
QList<QUmlProperty *> QUmlArtifact::ownedAttribute() const
{
    // This is a read-write association end

    QM_D(const QUmlArtifact);
    return d->ownedAttribute;
}

void QUmlArtifact::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (!d->ownedAttribute.contains(ownedAttribute)) {
        d->ownedAttribute.append(ownedAttribute);
    }
}

void QUmlArtifact::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (d->ownedAttribute.contains(ownedAttribute)) {
        d->ownedAttribute.removeAll(ownedAttribute);
    }
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
QList<QUmlOperation *> QUmlArtifact::ownedOperation() const
{
    // This is a read-write association end

    QM_D(const QUmlArtifact);
    return d->ownedOperation;
}

void QUmlArtifact::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (!d->ownedOperation.contains(ownedOperation)) {
        d->ownedOperation.append(ownedOperation);
    }
}

void QUmlArtifact::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    QM_D(QUmlArtifact);
    if (d->ownedOperation.contains(ownedOperation)) {
        d->ownedOperation.removeAll(ownedOperation);
    }
}

QT_END_NAMESPACE

