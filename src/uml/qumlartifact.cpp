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

#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlManifestation>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlArtifact

    \inmodule QtUml

    \brief An artifact is the source of a deployment to a node.An artifact is the specification of a physical piece of information that is used or produced by a software development process, or by deployment and operation of a system. Examples of artifacts include model files, source files, scripts, and binary executable files, a table in a database system, a development deliverable, or a word-processing document, a mail message.
 */

/*!
    Creates a new QUmlArtifact. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlArtifact::QUmlArtifact(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlArtifactObject(this));
}

/*!
    Destroys the QUmlArtifact.
 */
QUmlArtifact::~QUmlArtifact()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlArtifact.
*/
QModelingElement *QUmlArtifact::clone() const
{
    QUmlArtifact *c = new QUmlArtifact;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlTemplateBinding *element, templateBindings())
        c->addTemplateBinding(dynamic_cast<QUmlTemplateBinding *>(element->clone()));
    foreach (QUmlCollaborationUse *element, collaborationUses())
        c->addCollaborationUse(dynamic_cast<QUmlCollaborationUse *>(element->clone()));
    foreach (QUmlGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QUmlGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    if (ownedTemplateSignature())
        c->setOwnedTemplateSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature()->clone()));
    foreach (QUmlUseCase *element, ownedUseCases())
        c->addOwnedUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    c->setFileName(fileName());
    foreach (QUmlManifestation *element, manifestations())
        c->addManifestation(dynamic_cast<QUmlManifestation *>(element->clone()));
    foreach (QUmlArtifact *element, nestedArtifacts())
        c->addNestedArtifact(dynamic_cast<QUmlArtifact *>(element->clone()));
    foreach (QUmlProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QUmlProperty *>(element->clone()));
    foreach (QUmlOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QUmlOperation *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A concrete name that is used to refer to the Artifact in a physical context. Example: file system name, universal resource locator.
 */
QString QUmlArtifact::fileName() const
{
    // This is a read-write property

    return _fileName;
}

/*!
    Adjusts fileName to \a fileName.
 */
void QUmlArtifact::setFileName(QString fileName)
{
    // This is a read-write property

    if (_fileName != fileName) {
        _fileName = fileName;
    }
}

/*!
    The set of model elements that are manifested in the Artifact. That is, these model elements are utilized in the construction (or generation) of the artifact.

    \sa addManifestation(), removeManifestation()

    \b {Subsetted property(ies):} QUmlElement::ownedElements(), QUmlNamedElement::clientDependencies().
 */
const QSet<QUmlManifestation *> QUmlArtifact::manifestations() const
{
    // This is a read-write association end

    return _manifestations;
}

/*!
    Adds \a manifestation to manifestations.

    \sa manifestations(), removeManifestation()
 */
void QUmlArtifact::addManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    if (!_manifestations.contains(manifestation)) {
        _manifestations.insert(manifestation);
        if (manifestation && manifestation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(manifestation->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeManifestation(QObject *)));
        manifestation->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(manifestation);
        addClientDependency(manifestation);
    }
}

/*!
    Removes \a manifestation from manifestations.

    \sa manifestations(), addManifestation()
 */
void QUmlArtifact::removeManifestation(QUmlManifestation *manifestation)
{
    // This is a read-write association end

    if (_manifestations.contains(manifestation)) {
        _manifestations.remove(manifestation);
        if (manifestation->asQModelingObject())
            manifestation->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(manifestation);
        removeClientDependency(manifestation);
    }
}

/*!
    The Artifacts that are defined (nested) within the Artifact. The association is a specialization of the ownedMember association from Namespace to NamedElement.

    \sa addNestedArtifact(), removeNestedArtifact()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().
 */
const QSet<QUmlArtifact *> QUmlArtifact::nestedArtifacts() const
{
    // This is a read-write association end

    return _nestedArtifacts;
}

/*!
    Adds \a nestedArtifact to nestedArtifacts.

    \sa nestedArtifacts(), removeNestedArtifact()
 */
void QUmlArtifact::addNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    if (!_nestedArtifacts.contains(nestedArtifact)) {
        _nestedArtifacts.insert(nestedArtifact);
        if (nestedArtifact && nestedArtifact->asQModelingObject() && this->asQModelingObject())
            QObject::connect(nestedArtifact->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeNestedArtifact(QObject *)));
        nestedArtifact->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(nestedArtifact);
    }
}

/*!
    Removes \a nestedArtifact from nestedArtifacts.

    \sa nestedArtifacts(), addNestedArtifact()
 */
void QUmlArtifact::removeNestedArtifact(QUmlArtifact *nestedArtifact)
{
    // This is a read-write association end

    if (_nestedArtifacts.contains(nestedArtifact)) {
        _nestedArtifacts.remove(nestedArtifact);
        if (nestedArtifact->asQModelingObject())
            nestedArtifact->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(nestedArtifact);
    }
}

/*!
    The attributes or association ends defined for the Artifact. The association is a specialization of the ownedMember association.

    \sa addOwnedAttribute(), removeOwnedAttribute()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers(), QUmlClassifier::attributes().
 */
const QList<QUmlProperty *> QUmlArtifact::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

/*!
    Adds \a ownedAttribute to ownedAttributes.

    \sa ownedAttributes(), removeOwnedAttribute()
 */
void QUmlArtifact::addOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.append(ownedAttribute);
        if (ownedAttribute && ownedAttribute->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedAttribute->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedAttribute);
        addAttribute(ownedAttribute);
    }
}

/*!
    Removes \a ownedAttribute from ownedAttributes.

    \sa ownedAttributes(), addOwnedAttribute()
 */
void QUmlArtifact::removeOwnedAttribute(QUmlProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.removeAll(ownedAttribute);
        if (ownedAttribute->asQModelingObject())
            ownedAttribute->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedAttribute);
        removeAttribute(ownedAttribute);
    }
}

/*!
    The Operations defined for the Artifact. The association is a specialization of the ownedMember association.

    \sa addOwnedOperation(), removeOwnedOperation()

    \b {Subsetted property(ies):} QUmlClassifier::features(), QUmlNamespace::ownedMembers().
 */
const QList<QUmlOperation *> QUmlArtifact::ownedOperations() const
{
    // This is a read-write association end

    return _ownedOperations;
}

/*!
    Adds \a ownedOperation to ownedOperations.

    \sa ownedOperations(), removeOwnedOperation()
 */
void QUmlArtifact::addOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.append(ownedOperation);
        if (ownedOperation && ownedOperation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedOperation->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedOperation(QObject *)));
        ownedOperation->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);
    }
}

/*!
    Removes \a ownedOperation from ownedOperations.

    \sa ownedOperations(), addOwnedOperation()
 */
void QUmlArtifact::removeOwnedOperation(QUmlOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.removeAll(ownedOperation);
        if (ownedOperation->asQModelingObject())
            ownedOperation->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);
    }
}

QT_END_NAMESPACE

