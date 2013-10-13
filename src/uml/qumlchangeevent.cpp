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
#include "qumlchangeevent.h"

#include "private/qumlchangeeventobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

/*!
    \class QUmlChangeEvent

    \inmodule QtUml

    \brief A change event models a change in the system configuration that makes a condition true.
 */
QUmlChangeEvent::QUmlChangeEvent(bool createQModelingObject) :
    _changeExpression(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlChangeEventObject(this));
}

QModelingElement *QUmlChangeEvent::clone() const
{
    QUmlChangeEvent *c = new QUmlChangeEvent;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (changeExpression())
        c->setChangeExpression(dynamic_cast<QUmlValueSpecification *>(changeExpression()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A Boolean-valued expression that will result in a change event whenever its value changes from false to true.
 */
QUmlValueSpecification *QUmlChangeEvent::changeExpression() const
{
    // This is a read-write association end

    return _changeExpression;
}

void QUmlChangeEvent::setChangeExpression(QUmlValueSpecification *changeExpression)
{
    // This is a read-write association end

    if (_changeExpression != changeExpression) {
        // Adjust subsetted properties
        removeOwnedElement(_changeExpression);

        _changeExpression = changeExpression;
        if (changeExpression && changeExpression->asQModelingObject() && this->asQModelingObject())
            QObject::connect(changeExpression->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setChangeExpression()));
        changeExpression->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (changeExpression) {
            addOwnedElement(changeExpression);
        }
    }
}

