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
#include "qumltemplateparametersubstitutionobject_p.h"

#include <QtUml/QUmlTemplateParameterSubstitution>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlTemplateParameterSubstitutionObject::QUmlTemplateParameterSubstitutionObject(QUmlTemplateParameterSubstitution *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTemplateParameterSubstitutionObject::~QUmlTemplateParameterSubstitutionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTemplateParameterSubstitutionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTemplateParameterSubstitutionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTemplateParameterSubstitutionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateParameterSubstitution]

QObject *QUmlTemplateParameterSubstitutionObject::actual() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->actual()->asQObject();
}

QObject *QUmlTemplateParameterSubstitutionObject::formal() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->formal()->asQObject();
}

QObject *QUmlTemplateParameterSubstitutionObject::ownedActual() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->ownedActual()->asQObject();
}

QObject *QUmlTemplateParameterSubstitutionObject::templateBinding() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->templateBinding()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTemplateParameterSubstitutionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTemplateParameterSubstitutionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTemplateParameterSubstitutionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterSubstitutionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTemplateParameterSubstitutionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterSubstitutionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTemplateParameterSubstitutionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameterSubstitution]

void QUmlTemplateParameterSubstitutionObject::setActual(QObject *actual)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setActual(qmodelingobjectproperty_cast<QUmlParameterableElement *>(actual));
}

void QUmlTemplateParameterSubstitutionObject::setFormal(QObject *formal)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setFormal(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(formal));
}

void QUmlTemplateParameterSubstitutionObject::setOwnedActual(QObject *ownedActual)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setOwnedActual(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedActual));
}

void QUmlTemplateParameterSubstitutionObject::setTemplateBinding(QObject *templateBinding)
{
    qmodelingobjectproperty_cast<QUmlTemplateParameterSubstitution *>(this)->setTemplateBinding(qmodelingobjectproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

QT_END_NAMESPACE

