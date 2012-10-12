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

void QArtifactPrivate::setFileName(QString fileName)
{
    this->fileName = fileName;
}

void QArtifactPrivate::addOwnedOperation(QOperation *ownedOperation)
{
    this->ownedOperations->append(ownedOperation);

    // Adjust subsetted property(ies)
    addFeature(ownedOperation);
    addOwnedMember(ownedOperation);
}

void QArtifactPrivate::removeOwnedOperation(QOperation *ownedOperation)
{
    this->ownedOperations->removeAll(ownedOperation);

    // Adjust subsetted property(ies)
    removeFeature(ownedOperation);
    removeOwnedMember(ownedOperation);
}

void QArtifactPrivate::addOwnedAttribute(QProperty *ownedAttribute)
{
    this->ownedAttributes->append(ownedAttribute);

    // Adjust subsetted property(ies)
    addOwnedMember(ownedAttribute);
    addAttribute(ownedAttribute);
}

void QArtifactPrivate::removeOwnedAttribute(QProperty *ownedAttribute)
{
    this->ownedAttributes->removeAll(ownedAttribute);

    // Adjust subsetted property(ies)
    removeOwnedMember(ownedAttribute);
    removeAttribute(ownedAttribute);
}

void QArtifactPrivate::addManifestation(QManifestation *manifestation)
{
    this->manifestations->insert(manifestation);

    // Adjust subsetted property(ies)
    addOwnedElement(manifestation);
    addClientDependency(manifestation);
}

void QArtifactPrivate::removeManifestation(QManifestation *manifestation)
{
    this->manifestations->remove(manifestation);

    // Adjust subsetted property(ies)
    removeOwnedElement(manifestation);
    removeClientDependency(manifestation);
}

void QArtifactPrivate::addNestedArtifact(QArtifact *nestedArtifact)
{
    this->nestedArtifacts->insert(nestedArtifact);

    // Adjust subsetted property(ies)
    addOwnedMember(nestedArtifact);
}

void QArtifactPrivate::removeNestedArtifact(QArtifact *nestedArtifact)
{
    this->nestedArtifacts->remove(nestedArtifact);

    // Adjust subsetted property(ies)
    removeOwnedMember(nestedArtifact);
}

/*!
    \class QArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */

QArtifact::QArtifact(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QArtifactPrivate;
}

QArtifact::QArtifact(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QArtifactPrivate;
}

QArtifact::~QArtifact()
{
}

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QArtifact::fileName() const
{
    QTUML_D(const QArtifact);
    return d->fileName;
}

void QArtifact::setFileName(QString fileName)
{
    QTUML_D(QArtifact);
    if (d->fileName != fileName) {
        d->setFileName(fileName);
    }
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QOperation *> *QArtifact::ownedOperations() const
{
    QTUML_D(const QArtifact);
    return d->ownedOperations;
}

void QArtifact::addOwnedOperation(QOperation *ownedOperation)
{
    QTUML_D(QArtifact);
    if (!d->ownedOperations->contains(ownedOperation)) {
        d->addOwnedOperation(ownedOperation);
    }
}

void QArtifact::removeOwnedOperation(QOperation *ownedOperation)
{
    QTUML_D(QArtifact);
    if (d->ownedOperations->contains(ownedOperation)) {
        d->removeOwnedOperation(ownedOperation);
    }
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QProperty *> *QArtifact::ownedAttributes() const
{
    QTUML_D(const QArtifact);
    return d->ownedAttributes;
}

void QArtifact::addOwnedAttribute(QProperty *ownedAttribute)
{
    QTUML_D(QArtifact);
    if (!d->ownedAttributes->contains(ownedAttribute)) {
        d->addOwnedAttribute(ownedAttribute);
    }
}

void QArtifact::removeOwnedAttribute(QProperty *ownedAttribute)
{
    QTUML_D(QArtifact);
    if (d->ownedAttributes->contains(ownedAttribute)) {
        d->removeOwnedAttribute(ownedAttribute);
    }
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
const QSet<QManifestation *> *QArtifact::manifestations() const
{
    QTUML_D(const QArtifact);
    return d->manifestations;
}

void QArtifact::addManifestation(QManifestation *manifestation)
{
    QTUML_D(QArtifact);
    if (!d->manifestations->contains(manifestation)) {
        d->addManifestation(manifestation);
    }
}

void QArtifact::removeManifestation(QManifestation *manifestation)
{
    QTUML_D(QArtifact);
    if (d->manifestations->contains(manifestation)) {
        d->removeManifestation(manifestation);
    }
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
const QSet<QArtifact *> *QArtifact::nestedArtifacts() const
{
    QTUML_D(const QArtifact);
    return d->nestedArtifacts;
}

void QArtifact::addNestedArtifact(QArtifact *nestedArtifact)
{
    QTUML_D(QArtifact);
    if (!d->nestedArtifacts->contains(nestedArtifact)) {
        d->addNestedArtifact(nestedArtifact);
    }
}

void QArtifact::removeNestedArtifact(QArtifact *nestedArtifact)
{
    QTUML_D(QArtifact);
    if (d->nestedArtifacts->contains(nestedArtifact)) {
        d->removeNestedArtifact(nestedArtifact);
    }
}

#include "moc_qartifact.cpp"

QT_END_NAMESPACE_QTUML

