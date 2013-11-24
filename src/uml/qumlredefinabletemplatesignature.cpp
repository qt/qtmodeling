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
#include "qumlredefinabletemplatesignature.h"

#include "private/qumlredefinabletemplatesignatureobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlRedefinableTemplateSignature

    \inmodule QtUml

    \brief A redefinable template signature supports the addition of formal template parameters in a specialization of a template classifier.
 */

/*!
    Creates a new QUmlRedefinableTemplateSignature. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlRedefinableTemplateSignature::QUmlRedefinableTemplateSignature(bool createQModelingObject) :
    QUmlTemplateSignature(false),
    _classifier(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlRedefinableTemplateSignatureObject(this));
}

/*!
    Returns a deep-copied clone of the QUmlRedefinableTemplateSignature.
*/
QModelingElement *QUmlRedefinableTemplateSignature::clone() const
{
    QUmlRedefinableTemplateSignature *c = new QUmlRedefinableTemplateSignature;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlTemplateParameter *element, ownedParameters())
        c->addOwnedParameter(dynamic_cast<QUmlTemplateParameter *>(element->clone()));
    foreach (QUmlTemplateParameter *element, parameters())
        c->addParameter(dynamic_cast<QUmlTemplateParameter *>(element->clone()));
    if (template_())
        c->setTemplate(dynamic_cast<QUmlTemplateableElement *>(template_()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (classifier())
        c->setClassifier(dynamic_cast<QUmlClassifier *>(classifier()->clone()));
    foreach (QUmlRedefinableTemplateSignature *element, extendedSignatures())
        c->addExtendedSignature(dynamic_cast<QUmlRedefinableTemplateSignature *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier that owns this template signature.

    \b {Subsetted property(ies):} QUmlRedefinableElement::redefinitionContexts().

    \b {Redefined property(ies):} QUmlTemplateSignature::template_().

    \b {Opposite property(ies):} QUmlClassifier::ownedTemplateSignature().
 */
QUmlClassifier *QUmlRedefinableTemplateSignature::classifier() const
{
    // This is a read-write association end

    return _classifier;
}

/*!
    Adjusts classifier to \a classifier.
 */
void QUmlRedefinableTemplateSignature::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    if (_classifier != classifier) {
        // Adjust subsetted properties
        removeRedefinitionContext(_classifier);

        _classifier = classifier;
        if (classifier && classifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(classifier->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setClassifier()));

        // Adjust subsetted properties
        if (classifier) {
            addRedefinitionContext(classifier);
        }

        // Adjust redefined properties
        QUmlTemplateSignature::setTemplate(classifier);
    }
}

/*!
    The template signature that is extended by this template signature.

    \sa addExtendedSignature(), removeExtendedSignature()

    \b {Subsetted property(ies):} QUmlRedefinableElement::redefinedElements().
 */
const QSet<QUmlRedefinableTemplateSignature *> QUmlRedefinableTemplateSignature::extendedSignatures() const
{
    // This is a read-write association end

    return _extendedSignatures;
}

/*!
    Adds \a extendedSignature to extendedSignatures.

    \sa extendedSignatures(), removeExtendedSignature()
 */
void QUmlRedefinableTemplateSignature::addExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    if (!_extendedSignatures.contains(extendedSignature)) {
        _extendedSignatures.insert(extendedSignature);
        if (extendedSignature && extendedSignature->asQModelingObject() && this->asQModelingObject())
            QObject::connect(extendedSignature->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeExtendedSignature(QObject *)));

        // Adjust subsetted properties
        addRedefinedElement(extendedSignature);
    }
}

/*!
    Removes \a extendedSignature from extendedSignatures.

    \sa extendedSignatures(), addExtendedSignature()
 */
void QUmlRedefinableTemplateSignature::removeExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature)
{
    // This is a read-write association end

    if (_extendedSignatures.contains(extendedSignature)) {
        _extendedSignatures.remove(extendedSignature);

        // Adjust subsetted properties
        removeRedefinedElement(extendedSignature);
    }
}

/*!
    The formal template parameters of the extendedSignature.

    \b {This is a read-only derived property.}

    \b {Subsetted property(ies):} QUmlTemplateSignature::parameters().
 */
const QSet<QUmlTemplateParameter *> QUmlRedefinableTemplateSignature::inheritedParameters() const
{
    // This is a read-only derived association end

    qWarning("QUmlRedefinableTemplateSignature::inheritedParameters(): to be implemented (this is a derived association end)");

    return QSet<QUmlTemplateParameter *>();
}

/*!
    Adds \a inheritedParameter to inheritedParameters.

    \sa inheritedParameters(), removeInheritedParameter()
 */
void QUmlRedefinableTemplateSignature::addInheritedParameter(QUmlTemplateParameter *inheritedParameter)
{
    // This is a read-only derived association end

    qWarning("QUmlRedefinableTemplateSignature::addInheritedParameter(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedParameter);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addParameter(inheritedParameter);
    }
}

/*!
    Removes \a inheritedParameter from inheritedParameters.

    \sa inheritedParameters(), addInheritedParameter()
 */
void QUmlRedefinableTemplateSignature::removeInheritedParameter(QUmlTemplateParameter *inheritedParameter)
{
    // This is a read-only derived association end

    qWarning("QUmlRedefinableTemplateSignature::removeInheritedParameter(): to be implemented (this is a derived association end)");
    Q_UNUSED(inheritedParameter);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeParameter(inheritedParameter);
    }
}

// OPERATIONS

/*!
    The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is always consistent with a redefined template signature, since redefinition only adds new formal parameters.
 */
bool QUmlRedefinableTemplateSignature::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlRedefinableTemplateSignature::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

QT_END_NAMESPACE

