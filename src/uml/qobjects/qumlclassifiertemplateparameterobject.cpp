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
#include "qumlclassifiertemplateparameterobject_p.h"

#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateSignature>

QT_BEGIN_NAMESPACE

QUmlClassifierTemplateParameterObject::QUmlClassifierTemplateParameterObject(QUmlClassifierTemplateParameter *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlClassifierTemplateParameterObject::~QUmlClassifierTemplateParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlClassifierTemplateParameterObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClassifierTemplateParameterObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClassifierTemplateParameterObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [TemplateParameter]

QObject *QUmlClassifierTemplateParameterObject::default_() const
{
    if (!qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->default_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->default_()->asQObject();
}

QObject *QUmlClassifierTemplateParameterObject::ownedDefault() const
{
    if (!qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedDefault())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedDefault()->asQObject();
}

QObject *QUmlClassifierTemplateParameterObject::ownedParameteredElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedParameteredElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->ownedParameteredElement()->asQObject();
}

QObject *QUmlClassifierTemplateParameterObject::signature() const
{
    if (!qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->signature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->signature()->asQObject();
}

// OWNED ATTRIBUTES [ClassifierTemplateParameter]

bool QUmlClassifierTemplateParameterObject::allowSubstitutable() const
{
    return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->allowSubstitutable();
}

const QSet<QObject *> QUmlClassifierTemplateParameterObject::constrainingClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->constrainingClassifier())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClassifierTemplateParameterObject::parameteredElement() const
{
    if (!qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->parameteredElement())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->parameteredElement()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlClassifierTemplateParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClassifierTemplateParameterObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClassifierTemplateParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClassifierTemplateParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClassifierTemplateParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClassifierTemplateParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClassifierTemplateParameterObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateParameter]

void QUmlClassifierTemplateParameterObject::setDefault(QObject *default_)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->setDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(default_));
}

void QUmlClassifierTemplateParameterObject::setOwnedDefault(QObject *ownedDefault)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->setOwnedDefault(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedDefault));
}

void QUmlClassifierTemplateParameterObject::setOwnedParameteredElement(QObject *ownedParameteredElement)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->setOwnedParameteredElement(qmodelingobjectproperty_cast<QUmlParameterableElement *>(ownedParameteredElement));
}

void QUmlClassifierTemplateParameterObject::setSignature(QObject *signature)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->setSignature(qmodelingobjectproperty_cast<QUmlTemplateSignature *>(signature));
}

// SLOTS FOR OWNED ATTRIBUTES [ClassifierTemplateParameter]

void QUmlClassifierTemplateParameterObject::setAllowSubstitutable(bool allowSubstitutable)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->setAllowSubstitutable(allowSubstitutable);
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->modifiedResettableProperties() << QStringLiteral("allowSubstitutable");
}

void QUmlClassifierTemplateParameterObject::unsetAllowSubstitutable()
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("allowSubstitutable"));
}

void QUmlClassifierTemplateParameterObject::addConstrainingClassifier(QObject *constrainingClassifier)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->addConstrainingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(constrainingClassifier));
}

void QUmlClassifierTemplateParameterObject::removeConstrainingClassifier(QObject *constrainingClassifier)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->removeConstrainingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(constrainingClassifier));
}

void QUmlClassifierTemplateParameterObject::setParameteredElement(QObject *parameteredElement)
{
    qmodelingobjectproperty_cast<QUmlClassifierTemplateParameter *>(this)->setParameteredElement(qmodelingobjectproperty_cast<QUmlClassifier *>(parameteredElement));
}

QT_END_NAMESPACE

