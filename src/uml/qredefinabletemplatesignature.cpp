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
#include "qredefinabletemplatesignature_p.h"
#include "qtemplatesignature_p.h"
#include "qredefinableelement_p.h"
#include "qredefinableelement_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QTemplateParameter>

QT_BEGIN_NAMESPACE_QTUML

QRedefinableTemplateSignaturePrivate::QRedefinableTemplateSignaturePrivate() :
    classifier(0),
    extendedSignatures(new QSet<QRedefinableTemplateSignature *>)
{
}

QRedefinableTemplateSignaturePrivate::~QRedefinableTemplateSignaturePrivate()
{
    delete extendedSignatures;
}

/*!
    \class QRedefinableTemplateSignature

    \inmodule QtUml

    \brief A redefinable template signature supports the addition of formal template parameters in a specialization of a template classifier.
 */

QRedefinableTemplateSignature::QRedefinableTemplateSignature(QObject *parent)
    : QTemplateSignature(parent), d_ptr(new QRedefinableTemplateSignaturePrivate)
{
}

QRedefinableTemplateSignature::~QRedefinableTemplateSignature()
{
    delete d_ptr;
}

/*!
    The formal template parameters of the extendedSignature.
 */
const QSet<QTemplateParameter *> *QRedefinableTemplateSignature::inheritedParameters() const
{
    qWarning("QRedefinableTemplateSignature::inheritedParameters: to be implemented (this is a derived associationend)");
}

/*!
    The classifier that owns this template signature.
 */
QClassifier *QRedefinableTemplateSignature::classifier() const
{
    return d_ptr->classifier;
}

void QRedefinableTemplateSignature::setClassifier(const QClassifier *classifier)
{
    d_ptr->classifier = const_cast<QClassifier *>(classifier);
}

/*!
    The template signature that is extended by this template signature.
 */
const QSet<QRedefinableTemplateSignature *> *QRedefinableTemplateSignature::extendedSignatures() const
{
    return d_ptr->extendedSignatures;
}

void QRedefinableTemplateSignature::addExtendedSignature(const QRedefinableTemplateSignature *extendedSignature)
{
    d_ptr->extendedSignatures->insert(const_cast<QRedefinableTemplateSignature *>(extendedSignature));
    // Adjust subsetted property(ies)
    QRedefinableElement::d_ptr->redefinedElements->insert(const_cast<QRedefinableTemplateSignature *>(extendedSignature));
}

void QRedefinableTemplateSignature::removeExtendedSignature(const QRedefinableTemplateSignature *extendedSignature)
{
    d_ptr->extendedSignatures->remove(const_cast<QRedefinableTemplateSignature *>(extendedSignature));
    // Adjust subsetted property(ies)
    QRedefinableElement::d_ptr->redefinedElements->remove(const_cast<QRedefinableTemplateSignature *>(extendedSignature));
}

/*!
    The query isConsistentWith() specifies, for any two RedefinableTemplateSignatures in a context in which redefinition is possible, whether redefinition would be logically consistent. A redefining template signature is always consistent with a redefined template signature, since redefinition only adds new formal parameters.
 */
bool QRedefinableTemplateSignature::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QRedefinableTemplateSignature::isConsistentWith: operation to be implemented");
}

#include "moc_qredefinabletemplatesignature.cpp"

QT_END_NAMESPACE_QTUML

