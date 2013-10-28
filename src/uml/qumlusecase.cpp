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
#include "qumlusecase.h"

#include "private/qumlusecaseobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtend>
#include <QtUml/QUmlExtensionPoint>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInclude>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
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

QT_BEGIN_NAMESPACE

/*!
    \class QUmlUseCase

    \inmodule QtUml

    \brief A use case is the specification of a set of actions performed by a system, which yields an observable result that is, typically, of value for one or more actors or other stakeholders of the system.
 */
QUmlUseCase::QUmlUseCase(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlUseCaseObject(this));
}

QModelingElement *QUmlUseCase::clone() const
{
    QUmlUseCase *c = new QUmlUseCase;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QUmlPackage *>(package()->clone()));
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
    foreach (QUmlGeneralizationSet *element, powertypeExtents())
        c->addPowertypeExtent(dynamic_cast<QUmlGeneralizationSet *>(element->clone()));
    foreach (QUmlClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    if (representation())
        c->setRepresentation(dynamic_cast<QUmlCollaborationUse *>(representation()->clone()));
    foreach (QUmlSubstitution *element, substitutions())
        c->addSubstitution(dynamic_cast<QUmlSubstitution *>(element->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlClassifierTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlUseCase *element, useCases())
        c->addUseCase(dynamic_cast<QUmlUseCase *>(element->clone()));
    if (classifierBehavior())
        c->setClassifierBehavior(dynamic_cast<QUmlBehavior *>(classifierBehavior()->clone()));
    foreach (QUmlInterfaceRealization *element, interfaceRealizations())
        c->addInterfaceRealization(dynamic_cast<QUmlInterfaceRealization *>(element->clone()));
    foreach (QUmlBehavior *element, ownedBehaviors())
        c->addOwnedBehavior(dynamic_cast<QUmlBehavior *>(element->clone()));
    foreach (QUmlExtend *element, extends())
        c->addExtend(dynamic_cast<QUmlExtend *>(element->clone()));
    foreach (QUmlExtensionPoint *element, extensionPoints())
        c->addExtensionPoint(dynamic_cast<QUmlExtensionPoint *>(element->clone()));
    foreach (QUmlInclude *element, includes())
        c->addInclude(dynamic_cast<QUmlInclude *>(element->clone()));
    foreach (QUmlClassifier *element, subjects())
        c->addSubject(dynamic_cast<QUmlClassifier *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Extend relationships owned by this use case.
 */
const QSet<QUmlExtend *> QUmlUseCase::extends() const
{
    // This is a read-write association end

    return _extends;
}

void QUmlUseCase::addExtend(QUmlExtend *extend)
{
    // This is a read-write association end

    if (!_extends.contains(extend)) {
        _extends.insert(extend);
        if (extend && extend->asQModelingObject() && this->asQModelingObject())
            QObject::connect(extend->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeExtend(QObject *)));
        extend->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(extend);

        // Adjust opposite properties
        if (extend) {
            extend->setExtension(this);
        }
    }
}

void QUmlUseCase::removeExtend(QUmlExtend *extend)
{
    // This is a read-write association end

    if (_extends.contains(extend)) {
        _extends.remove(extend);
        if (extend->asQModelingObject())
            extend->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(extend);

        // Adjust opposite properties
        if (extend) {
            extend->setExtension(0);
        }
    }
}

/*!
    References the ExtensionPoints owned by the use case.
 */
const QSet<QUmlExtensionPoint *> QUmlUseCase::extensionPoints() const
{
    // This is a read-write association end

    return _extensionPoints;
}

void QUmlUseCase::addExtensionPoint(QUmlExtensionPoint *extensionPoint)
{
    // This is a read-write association end

    if (!_extensionPoints.contains(extensionPoint)) {
        _extensionPoints.insert(extensionPoint);
        if (extensionPoint && extensionPoint->asQModelingObject() && this->asQModelingObject())
            QObject::connect(extensionPoint->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeExtensionPoint(QObject *)));
        extensionPoint->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(extensionPoint);

        // Adjust opposite properties
        if (extensionPoint) {
            extensionPoint->setUseCase(this);
        }
    }
}

void QUmlUseCase::removeExtensionPoint(QUmlExtensionPoint *extensionPoint)
{
    // This is a read-write association end

    if (_extensionPoints.contains(extensionPoint)) {
        _extensionPoints.remove(extensionPoint);
        if (extensionPoint->asQModelingObject())
            extensionPoint->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(extensionPoint);

        // Adjust opposite properties
        if (extensionPoint) {
            extensionPoint->setUseCase(0);
        }
    }
}

/*!
    References the Include relationships owned by this use case.
 */
const QSet<QUmlInclude *> QUmlUseCase::includes() const
{
    // This is a read-write association end

    return _includes;
}

void QUmlUseCase::addInclude(QUmlInclude *include)
{
    // This is a read-write association end

    if (!_includes.contains(include)) {
        _includes.insert(include);
        if (include && include->asQModelingObject() && this->asQModelingObject())
            QObject::connect(include->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInclude(QObject *)));
        include->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(include);

        // Adjust opposite properties
        if (include) {
            include->setIncludingCase(this);
        }
    }
}

void QUmlUseCase::removeInclude(QUmlInclude *include)
{
    // This is a read-write association end

    if (_includes.contains(include)) {
        _includes.remove(include);
        if (include->asQModelingObject())
            include->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(include);

        // Adjust opposite properties
        if (include) {
            include->setIncludingCase(0);
        }
    }
}

/*!
    References the subjects to which this use case applies. The subject or its parts realize all the use cases that apply to this subject. Use cases need not be attached to any specific subject, however. The subject may, but need not, own the use cases that apply to it.
 */
const QSet<QUmlClassifier *> QUmlUseCase::subjects() const
{
    // This is a read-write association end

    return _subjects;
}

void QUmlUseCase::addSubject(QUmlClassifier *subject)
{
    // This is a read-write association end

    if (!_subjects.contains(subject)) {
        _subjects.insert(subject);
        if (subject && subject->asQModelingObject() && this->asQModelingObject())
            QObject::connect(subject->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeSubject(QObject *)));

        // Adjust opposite properties
        if (subject) {
            subject->addUseCase(this);
        }
    }
}

void QUmlUseCase::removeSubject(QUmlClassifier *subject)
{
    // This is a read-write association end

    if (_subjects.contains(subject)) {
        _subjects.remove(subject);

        // Adjust opposite properties
        if (subject) {
            subject->removeUseCase(this);
        }
    }
}

// OPERATIONS

/*!
    The query allIncludedUseCases() returns the transitive closure of all use cases (directly or indirectly) included by this use case.
 */
QSet<QUmlUseCase *> QUmlUseCase::allIncludedUseCases() const
{
    qWarning("QUmlUseCase::allIncludedUseCases(): to be implemented (operation)");

    return QSet<QUmlUseCase *> ();
}

QT_END_NAMESPACE

