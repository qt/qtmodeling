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

// Owned attributes

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QUmlArtifact::fileName() const
{
    return QString();
}

void QUmlArtifact::setFileName(QString fileName)
{
    Q_UNUSED(fileName);
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
QSet<QUmlManifestation *> QUmlArtifact::manifestation() const
{
    return QSet<QUmlManifestation *>();
}

void QUmlArtifact::addManifestation(QSet<QUmlManifestation *> manifestation)
{
    Q_UNUSED(manifestation);
}

void QUmlArtifact::removeManifestation(QSet<QUmlManifestation *> manifestation)
{
    Q_UNUSED(manifestation);
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
QSet<QUmlArtifact *> QUmlArtifact::nestedArtifact() const
{
    return QSet<QUmlArtifact *>();
}

void QUmlArtifact::addNestedArtifact(QSet<QUmlArtifact *> nestedArtifact)
{
    Q_UNUSED(nestedArtifact);
}

void QUmlArtifact::removeNestedArtifact(QSet<QUmlArtifact *> nestedArtifact)
{
    Q_UNUSED(nestedArtifact);
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
QList<QUmlProperty *> QUmlArtifact::ownedAttribute() const
{
    return QList<QUmlProperty *>();
}

void QUmlArtifact::addOwnedAttribute(QList<QUmlProperty *> ownedAttribute)
{
    Q_UNUSED(ownedAttribute);
}

void QUmlArtifact::removeOwnedAttribute(QList<QUmlProperty *> ownedAttribute)
{
    Q_UNUSED(ownedAttribute);
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
QList<QUmlOperation *> QUmlArtifact::ownedOperation() const
{
    return QList<QUmlOperation *>();
}

void QUmlArtifact::addOwnedOperation(QList<QUmlOperation *> ownedOperation)
{
    Q_UNUSED(ownedOperation);
}

void QUmlArtifact::removeOwnedOperation(QList<QUmlOperation *> ownedOperation)
{
    Q_UNUSED(ownedOperation);
}

QT_END_NAMESPACE

