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
#include "qumlclassifiertemplateparameter.h"
#include "qumlclassifiertemplateparameter_p.h"

#include <QtUml/QUmlClassifier>

QT_BEGIN_NAMESPACE

QUmlClassifierTemplateParameterPrivate::QUmlClassifierTemplateParameterPrivate() :
    allowSubstitutable(true),
    parameteredElement(0)
{
}

/*!
    \class QUmlClassifierTemplateParameter

    \inmodule QtUml

    \brief A classifier template parameter exposes a classifier as a formal template parameter.
 */

QUmlClassifierTemplateParameter::QUmlClassifierTemplateParameter(bool create_d_ptr) :
    QUmlTemplateParameter(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlClassifierTemplateParameterPrivate);
}

// Owned attributes

/*!
    Constrains the required relationship between an actual parameter and the parameteredElement for this formal parameter.
 */
bool QUmlClassifierTemplateParameter::allowSubstitutable() const
{
    return bool();
}

void QUmlClassifierTemplateParameter::setAllowSubstitutable(bool allowSubstitutable)
{
    Q_UNUSED(allowSubstitutable);
}

/*!
    The classifiers that constrain the argument that can be used for the parameter. If the allowSubstitutable attribute is true, then any classifier that is compatible with this constraining classifier can be substituted; otherwise, it must be either this classifier or one of its subclasses. If this property is empty, there are no constraints on the classifier that can be used as an argument.
 */
QSet<QUmlClassifier *> QUmlClassifierTemplateParameter::constrainingClassifier() const
{
    return QSet<QUmlClassifier *>();
}

void QUmlClassifierTemplateParameter::addConstrainingClassifier(QSet<QUmlClassifier *> constrainingClassifier)
{
    Q_UNUSED(constrainingClassifier);
}

void QUmlClassifierTemplateParameter::removeConstrainingClassifier(QSet<QUmlClassifier *> constrainingClassifier)
{
    Q_UNUSED(constrainingClassifier);
}

/*!
    The parameterable classifier for this template parameter.
 */
QUmlClassifier *QUmlClassifierTemplateParameter::parameteredElement() const
{
    return 0;
}

void QUmlClassifierTemplateParameter::setParameteredElement(QUmlClassifier *parameteredElement)
{
    Q_UNUSED(parameteredElement);
}

QT_END_NAMESPACE

