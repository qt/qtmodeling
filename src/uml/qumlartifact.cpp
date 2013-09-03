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

#include "private/qumlartifactobject_p.h"

#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlProperty>

/*!
    \class QUmlArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */
QUmlArtifact::QUmlArtifact(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlArtifactObject(this);
}

QUmlArtifact::~QUmlArtifact()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString 
QUmlArtifact::fileName() const
{
    // This is a read-write property

    return _fileName;
}

void QUmlArtifact::setFileName(QString fileName)
{
    // This is a read-write property

    if (_fileName != fileName) {
        _fileName = fileName;
    }
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.
 */
const QSet<QUmlManifestation *> 
QUmlArtifact::manifestation() const
{
    // This is a read-write association end

    return _manifestation;
}

void QUmlArtifact::addManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    if (!_manifestation.contains(manifestation)) {
        _manifestation.insert(manifestation);
        if (manifestation->asQObject() && this->asQObject())
            QObject::connect(manifestation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeManifestation(QObject *)));
        manifestation->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(manifestation);
        addClientDependency(manifestation);
    }
}

void QUmlArtifact::removeManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    if (_manifestation.contains(manifestation)) {
        _manifestation.remove(manifestation);
        if (manifestation->asQObject())
            manifestation->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(manifestation);
        removeClientDependency(manifestation);
    }
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.
 */
const QSet<QUmlArtifact *> 
QUmlArtifact::nestedArtifact() const
{
    // This is a read-write association end

    return _nestedArtifact;
}

void QUmlArtifact::addNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    if (!_nestedArtifact.contains(nestedArtifact)) {
        _nestedArtifact.insert(nestedArtifact);
        if (nestedArtifact->asQObject() && this->asQObject())
            QObject::connect(nestedArtifact->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeNestedArtifact(QObject *)));
        nestedArtifact->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(nestedArtifact);
    }
}

void QUmlArtifact::removeNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    if (_nestedArtifact.contains(nestedArtifact)) {
        _nestedArtifact.remove(nestedArtifact);
        if (nestedArtifact->asQObject())
            nestedArtifact->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(nestedArtifact);
    }
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QUmlProperty *> 
QUmlArtifact::ownedAttribute() const
{
    // This is a read-write association end

    return _ownedAttribute;
}

void QUmlArtifact::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttribute.contains(ownedAttribute)) {
        _ownedAttribute.append(ownedAttribute);
        if (ownedAttribute->asQObject() && this->asQObject())
            QObject::connect(ownedAttribute->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedAttribute);
        addAttribute(ownedAttribute);
    }
}

void QUmlArtifact::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttribute.contains(ownedAttribute)) {
        _ownedAttribute.removeAll(ownedAttribute);
        if (ownedAttribute->asQObject())
            ownedAttribute->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedAttribute);
        removeAttribute(ownedAttribute);
    }
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.
 */
const QList<QUmlOperation *> 
QUmlArtifact::ownedOperation() const
{
    // This is a read-write association end

    return _ownedOperation;
}

void QUmlArtifact::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperation.contains(ownedOperation)) {
        _ownedOperation.append(ownedOperation);
        if (ownedOperation->asQObject() && this->asQObject())
            QObject::connect(ownedOperation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedOperation(QObject *)));
        ownedOperation->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);
    }
}

void QUmlArtifact::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperation.contains(ownedOperation)) {
        _ownedOperation.removeAll(ownedOperation);
        if (ownedOperation->asQObject())
            ownedOperation->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);
    }
}

