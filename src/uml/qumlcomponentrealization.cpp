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
#include "qumlcomponentrealization.h"

#include "private/qumlcomponentrealizationobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlComponent>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlComponentRealization

    \inmodule QtUml

    \brief The realization concept is specialized to (optionally) define the classifiers that realize the contract offered by a component in terms of its provided and required interfaces. The component forms an abstraction from these various classifiers.
 */

/*!
    Creates a new QUmlComponentRealization. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlComponentRealization::QUmlComponentRealization(bool createQModelingObject) :
    QUmlRealization(false),
    _abstraction(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlComponentRealizationObject(this));
}

/*!
    Destroys the QUmlComponentRealization.
 */
QUmlComponentRealization::~QUmlComponentRealization()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlComponentRealization.
*/
QModelingElement *QUmlComponentRealization::clone() const
{
    QUmlComponentRealization *c = new QUmlComponentRealization;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (mapping())
        c->setMapping(dynamic_cast<QUmlOpaqueExpression *>(mapping()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.

    \b {Subsetted property(ies):} QUmlDependency::suppliers(), QUmlElement::owner().

    \b {Opposite property(ies):} QUmlComponent::realizations().
 */
QUmlComponent *QUmlComponentRealization::abstraction() const
{
    // This is a read-write association end

    return _abstraction;
}

/*!
    Adjusts abstraction to \a abstraction.
 */
void QUmlComponentRealization::setAbstraction(QUmlComponent *abstraction)
{
    // This is a read-write association end

    if (_abstraction != abstraction) {
        // Adjust subsetted properties
        removeSupplier(_abstraction);

        _abstraction = abstraction;
        if (abstraction && abstraction->asQModelingObject() && this->asQModelingObject())
            QObject::connect(abstraction->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setAbstraction()));

        // Adjust subsetted properties
        if (abstraction) {
            addSupplier(abstraction);
        }
        setOwner(abstraction);
    }
}

/*!
    The classifiers that are involved in the implementation of the Component that owns this Realization.

    \sa addRealizingClassifier(), removeRealizingClassifier()

    \b {Subsetted property(ies):} QUmlDependency::clients().
 */
const QSet<QUmlClassifier *> QUmlComponentRealization::realizingClassifiers() const
{
    // This is a read-write association end

    return _realizingClassifiers;
}

/*!
    Adds \a realizingClassifier to realizingClassifiers.

    \sa realizingClassifiers(), removeRealizingClassifier()
 */
void QUmlComponentRealization::addRealizingClassifier(QUmlClassifier *realizingClassifier)
{
    // This is a read-write association end

    if (!_realizingClassifiers.contains(realizingClassifier)) {
        _realizingClassifiers.insert(realizingClassifier);
        if (realizingClassifier && realizingClassifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(realizingClassifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRealizingClassifier(QObject *)));

        // Adjust subsetted properties
        addClient(realizingClassifier);
    }
}

/*!
    Removes \a realizingClassifier from realizingClassifiers.

    \sa realizingClassifiers(), addRealizingClassifier()
 */
void QUmlComponentRealization::removeRealizingClassifier(QUmlClassifier *realizingClassifier)
{
    // This is a read-write association end

    if (_realizingClassifiers.contains(realizingClassifier)) {
        _realizingClassifiers.remove(realizingClassifier);

        // Adjust subsetted properties
        removeClient(realizingClassifier);
    }
}

QT_END_NAMESPACE

