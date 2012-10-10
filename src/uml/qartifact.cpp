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

void QArtifactPrivate::addOwnedOperation(const QOperation *ownedOperation)
{
    this->ownedOperations->append(const_cast<QOperation *>(ownedOperation));
    // Adjust subsetted property(ies)
    addFeature(ownedOperation);
    addOwnedMember(ownedOperation);
}

void QArtifactPrivate::removeOwnedOperation(const QOperation *ownedOperation)
{
    this->ownedOperations->removeAll(const_cast<QOperation *>(ownedOperation));
    // Adjust subsetted property(ies)
    removeFeature(ownedOperation);
    removeOwnedMember(ownedOperation);
}

void QArtifactPrivate::addOwnedAttribute(const QProperty *ownedAttribute)
{
    this->ownedAttributes->append(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    addOwnedMember(ownedAttribute);
    addAttribute(ownedAttribute);
}

void QArtifactPrivate::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    this->ownedAttributes->removeAll(const_cast<QProperty *>(ownedAttribute));
    // Adjust subsetted property(ies)
    removeOwnedMember(ownedAttribute);
    removeAttribute(ownedAttribute);
}

void QArtifactPrivate::addManifestation(const QManifestation *manifestation)
{
    this->manifestations->insert(const_cast<QManifestation *>(manifestation));
    // Adjust subsetted property(ies)
    addOwnedElement(manifestation);
    addClientDependency(manifestation);
}

void QArtifactPrivate::removeManifestation(const QManifestation *manifestation)
{
    this->manifestations->remove(const_cast<QManifestation *>(manifestation));
    // Adjust subsetted property(ies)
    removeOwnedElement(manifestation);
    removeClientDependency(manifestation);
}

void QArtifactPrivate::addNestedArtifact(const QArtifact *nestedArtifact)
{
    this->nestedArtifacts->insert(const_cast<QArtifact *>(nestedArtifact));
    // Adjust subsetted property(ies)
    addOwnedMember(nestedArtifact);
}

void QArtifactPrivate::removeNestedArtifact(const QArtifact *nestedArtifact)
{
    this->nestedArtifacts->remove(const_cast<QArtifact *>(nestedArtifact));
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
    Q_D(const QArtifact);
    return d->fileName;
}

void QArtifact::setFileName(QString fileName)
{
    Q_D(QArtifact);
    d->setFileName(fileName);
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QOperation *> *QArtifact::ownedOperations() const
{
    Q_D(const QArtifact);
    return d->ownedOperations;
}

void QArtifact::addOwnedOperation(const QOperation *ownedOperation)
{
    Q_D(QArtifact);
    d->addOwnedOperation(const_cast<QOperation *>(ownedOperation));
}

void QArtifact::removeOwnedOperation(const QOperation *ownedOperation)
{
    Q_D(QArtifact);
    d->removeOwnedOperation(const_cast<QOperation *>(ownedOperation));
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QProperty *> *QArtifact::ownedAttributes() const
{
    Q_D(const QArtifact);
    return d->ownedAttributes;
}

void QArtifact::addOwnedAttribute(const QProperty *ownedAttribute)
{
    Q_D(QArtifact);
    d->addOwnedAttribute(const_cast<QProperty *>(ownedAttribute));
}

void QArtifact::removeOwnedAttribute(const QProperty *ownedAttribute)
{
    Q_D(QArtifact);
    d->removeOwnedAttribute(const_cast<QProperty *>(ownedAttribute));
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
const QSet<QManifestation *> *QArtifact::manifestations() const
{
    Q_D(const QArtifact);
    return d->manifestations;
}

void QArtifact::addManifestation(const QManifestation *manifestation)
{
    Q_D(QArtifact);
    d->addManifestation(const_cast<QManifestation *>(manifestation));
}

void QArtifact::removeManifestation(const QManifestation *manifestation)
{
    Q_D(QArtifact);
    d->removeManifestation(const_cast<QManifestation *>(manifestation));
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
const QSet<QArtifact *> *QArtifact::nestedArtifacts() const
{
    Q_D(const QArtifact);
    return d->nestedArtifacts;
}

void QArtifact::addNestedArtifact(const QArtifact *nestedArtifact)
{
    Q_D(QArtifact);
    d->addNestedArtifact(const_cast<QArtifact *>(nestedArtifact));
}

void QArtifact::removeNestedArtifact(const QArtifact *nestedArtifact)
{
    Q_D(QArtifact);
    d->removeNestedArtifact(const_cast<QArtifact *>(nestedArtifact));
}

#include "moc_qartifact.cpp"

QT_END_NAMESPACE_QTUML

