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
#include "qumlextension.h"

#include "private/qumlextensionobject_p.h"

#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
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
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlExtension

    \inmodule QtUml

    \brief An extension is used to indicate that the properties of a metaclass are extended through a stereotype, and gives the ability to flexibly add (and later remove) stereotypes to classes.
 */

/*!
    Creates a new QUmlExtension. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlExtension::QUmlExtension(bool createQModelingObject) :
    QUmlAssociation(false),
    _ownedEnd(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlExtensionObject(this));
}

/*!
    Destroys the QUmlExtension.
 */
QUmlExtension::~QUmlExtension()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlExtension.
*/
QModelingElement *QUmlExtension::clone() const
{
    QUmlExtension *c = new QUmlExtension;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
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
    c->setDerived(isDerived());
    if (ownedEnd())
        c->setOwnedEnd(dynamic_cast<QUmlExtensionEnd *>(ownedEnd()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Indicates whether an instance of the extending stereotype must be created when an instance of the extended class is created. The attribute value is derived from the value of the lower property of the ExtensionEnd referenced by Extension::ownedEnd; a lower value of 1 means that isRequired is true, but otherwise it is false. Since the default value of ExtensionEnd::lower is 0, the default value of isRequired is false.

    \b {This is a read-only derived property.}
 */
bool QUmlExtension::isRequired() const
{
    // This is a read-only derived property

    qWarning("QUmlExtension::isRequired(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isRequired to \a isRequired.
 */
void QUmlExtension::setRequired(bool isRequired)
{
    // This is a read-only derived property

    qWarning("QUmlExtension::setRequired(): to be implemented (this is a derived property)");
    Q_UNUSED(isRequired);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the Class that is extended through an Extension. The property is derived from the type of the memberEnd that is not the ownedEnd.

    \b {This is a read-only derived property.}

    \b {Opposite property(ies):} QUmlClass::extensions().
 */
QUmlClass *QUmlExtension::metaclass() const
{
    // This is a read-only derived association end

    qWarning("QUmlExtension::metaclass(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts metaclass to \a metaclass.
 */
void QUmlExtension::setMetaclass(QUmlClass *metaclass)
{
    // This is a read-only derived association end

    qWarning("QUmlExtension::setMetaclass(): to be implemented (this is a derived association end)");
    Q_UNUSED(metaclass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the end of the extension that is typed by a Stereotype.

    \b {Redefined property(ies):} QUmlAssociation::ownedEnds().
 */
QUmlExtensionEnd *QUmlExtension::ownedEnd() const
{
    // This is a read-write association end

    return _ownedEnd;
}

/*!
    Adjusts ownedEnd to \a ownedEnd.
 */
void QUmlExtension::setOwnedEnd(QUmlExtensionEnd *ownedEnd)
{
    // This is a read-write association end

    if (_ownedEnd != ownedEnd) {
        // Adjust redefined properties        QUmlAssociation::removeOwnedEnd(_ownedEnd);

        _ownedEnd = ownedEnd;
        if (ownedEnd && ownedEnd->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedEnd->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setOwnedEnd()));
        ownedEnd->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust redefined properties
        if (ownedEnd) {
            QUmlAssociation::addOwnedEnd(ownedEnd);
        }
    }
}

// OPERATIONS

/*!
    The query metaclassEnd() returns the Property that is typed by a metaclass (as opposed to a stereotype).
 */
QUmlProperty *QUmlExtension::metaclassEnd() const
{
    qWarning("QUmlExtension::metaclassEnd(): to be implemented (operation)");

    return 0;
}

QT_END_NAMESPACE

