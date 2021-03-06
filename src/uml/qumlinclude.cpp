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
#include "qumlinclude.h"

#include "private/qumlincludeobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlInclude

    \inmodule QtUml

    \brief An include relationship defines that a use case contains the behavior defined in another use case.
 */

/*!
    Creates a new QUmlInclude. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlInclude::QUmlInclude(bool createQModelingObject) :
    _addition(0),
    _includingCase(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlIncludeObject(this));
}

/*!
    Destroys the QUmlInclude.
 */
QUmlInclude::~QUmlInclude()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlInclude.
*/
QModelingElement *QUmlInclude::clone() const
{
    QUmlInclude *c = new QUmlInclude;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the use case that is to be included.

    \b {Subsetted property(ies):} QUmlDirectedRelationship::targets().
 */
QUmlUseCase *QUmlInclude::addition() const
{
    // This is a read-write association end

    return _addition;
}

/*!
    Adjusts addition to \a addition.
 */
void QUmlInclude::setAddition(QUmlUseCase *addition)
{
    // This is a read-write association end

    if (_addition != addition) {
        // Adjust subsetted properties
        removeTarget(_addition);

        _addition = addition;
        if (addition && addition->asQModelingObject() && this->asQModelingObject())
            QObject::connect(addition->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setAddition()));

        // Adjust subsetted properties
        if (addition) {
            addTarget(addition);
        }
    }
}

/*!
    References the use case which will include the addition and owns the include relationship.

    \b {Subsetted property(ies):} QUmlDirectedRelationship::sources(), QUmlNamedElement::namespace_().

    \b {Opposite property(ies):} QUmlUseCase::includes().
 */
QUmlUseCase *QUmlInclude::includingCase() const
{
    // This is a read-write association end

    return _includingCase;
}

/*!
    Adjusts includingCase to \a includingCase.
 */
void QUmlInclude::setIncludingCase(QUmlUseCase *includingCase)
{
    // This is a read-write association end

    if (_includingCase != includingCase) {
        // Adjust subsetted properties
        removeSource(_includingCase);

        _includingCase = includingCase;
        if (includingCase && includingCase->asQModelingObject() && this->asQModelingObject())
            QObject::connect(includingCase->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setIncludingCase()));

        // Adjust subsetted properties
        if (includingCase) {
            addSource(includingCase);
        }
        setNamespace(includingCase);
    }
}

QT_END_NAMESPACE

