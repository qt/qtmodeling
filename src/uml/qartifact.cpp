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

#include "qartifact.h"
#include "qartifact_p.h"
#include "qclassifier_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qclassifier_p.h"
#include "qelement_p.h"
#include "qnamedelement_p.h"
#include "qnamespace_p.h"

#include <QtUml/QManifestation>
#include <QtUml/QProperty>
#include <QtUml/QOperation>

QT_BEGIN_NAMESPACE_QTUML

QArtifactPrivate::QArtifactPrivate() :
    ownedOperations(new QList<QOperation *>),
    ownedAttributes(new QList<QProperty *>),
    manifestations(new QSet<QManifestation *>),
    nestedArtifacts(new QSet<QArtifact *>)
{
}

QArtifactPrivate::~QArtifactPrivate()
{
    delete ownedOperations;
    delete ownedAttributes;
    delete manifestations;
    delete nestedArtifacts;
}

/*!
    \class QArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */

QArtifact::QArtifact(QObject *parent)
    : QObject(parent), d_ptr(new QArtifactPrivate)
{
}

QArtifact::~QArtifact()
{
    delete d_ptr;
}

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QArtifact::fileName() const
{
    return d_ptr->fileName;
}

void QArtifact::setFileName(QString fileName)
{
    d_ptr->fileName = fileName;
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QOperation *> *QArtifact::ownedOperations() const
{
    return d_ptr->ownedOperations;
}

void QArtifact::addOwnedOperation(const QOperation *ownedOperation)
{
    d_ptr->ownedOperations->append(const_cast<QOperation *>(ownedOperation));
    // Adjust subsetted property(ies)
    QClassifier::d_ptr->features->insert(const_cast<QOperation *>(ownedOperation));
    QNamespace::d_ptr->ownedMembers->insert(const_cast<QOperation *>(ownedOperation));
}

void QArtifact::removeOwnedOperation(const QOperation *ownedOperation)
{
    d_ptr->ownedOperations->removeAll(const_cast<QOperation *>(ownedOperation));
    // Adjust subsetted property(ies)
    QClassifier::d_ptr->features->remove(const_cast<QOperation *>(ownedOperation));
    QNamespace::d_ptr->ownedMembers->remove(const_cast<QOperation *>(ownedOperation));
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QProperty *> *QArtifact::ownedAttributes() const
{
    return d_ptr->ownedAttributes;
}

void QArtifact::addOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->append(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->insert(const_cast<QProperty *>(ownedAttribute));
    QClassifier::d_ptr->attributes->insert(const_cast<QProperty *>(ownedAttribute));
}

void QArtifact::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    d_ptr->ownedAttributes->removeAll(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->remove(const_cast<QProperty *>(ownedAttribute));
    QClassifier::d_ptr->attributes->remove(const_cast<QProperty *>(ownedAttribute));
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
const QSet<QManifestation *> *QArtifact::manifestations() const
{
    return d_ptr->manifestations;
}

void QArtifact::addManifestation(const QManifestation *manifestation)
{
    d_ptr->manifestations->insert(const_cast<QManifestation *>(manifestation));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->insert(const_cast<QManifestation *>(manifestation));
    QNamedElement::d_ptr->clientDependencies->insert(const_cast<QManifestation *>(manifestation));
}

void QArtifact::removeManifestation(const QManifestation *manifestation)
{
    d_ptr->manifestations->remove(const_cast<QManifestation *>(manifestation));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->remove(const_cast<QManifestation *>(manifestation));
    QNamedElement::d_ptr->clientDependencies->remove(const_cast<QManifestation *>(manifestation));
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
const QSet<QArtifact *> *QArtifact::nestedArtifacts() const
{
    return d_ptr->nestedArtifacts;
}

void QArtifact::addNestedArtifact(const QArtifact *nestedArtifact)
{
    d_ptr->nestedArtifacts->insert(const_cast<QArtifact *>(nestedArtifact));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->insert(const_cast<QArtifact *>(nestedArtifact));
}

void QArtifact::removeNestedArtifact(const QArtifact *nestedArtifact)
{
    d_ptr->nestedArtifacts->remove(const_cast<QArtifact *>(nestedArtifact));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->remove(const_cast<QArtifact *>(nestedArtifact));
}

#include "moc_qartifact.cpp"

QT_END_NAMESPACE_QTUML

