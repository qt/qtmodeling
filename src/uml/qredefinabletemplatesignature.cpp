/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qredefinabletemplatesignature.h"
//#include "qredefinabletemplatesignature_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QRedefinableTemplateSignature

    \inmodule QtUml

    \brief A redefinable template signature supports the addition of formal template parameters in a specialization of a template classifier.
 */

QRedefinableTemplateSignature::QRedefinableTemplateSignature(QObject *parent)
    : QTemplateSignature(parent)
{
}

QRedefinableTemplateSignature::~QRedefinableTemplateSignature()
{
}

/*!
    The classifier that owns this template signature.
 */
QClassifier *QRedefinableTemplateSignature::classifier() const
{
}

void QRedefinableTemplateSignature::setClassifier(QClassifier *classifier)
{
}

/*!
    The template signature that is extended by this template signature.
 */
QList<QRedefinableTemplateSignature *> *QRedefinableTemplateSignature::extendedSignatures()
{
}

/*!
    Missing derivation for RedefinableTemplateSignature::/inheritedParameter : TemplateParameter
 */
const QList<QTemplateParameter *> *QRedefinableTemplateSignature::inheritedParameters() const
{
}

/*!
    The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is always consistent with a redefined template signature, since redefinition only adds new formal parameters.
 */
bool QRedefinableTemplateSignature::isConsistentWith(const QRedefinableElement *redefinee) const
{
}

#include "moc_qredefinabletemplatesignature.cpp"

QT_END_NAMESPACE_QTUML

