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
#include "qumllifeline.h"

#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlPartDecomposition>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlLifeline::QUmlLifeline(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlInteractionFragment *> QUmlLifeline::coveredBy() const
{
    return *(reinterpret_cast<const QSet<QUmlInteractionFragment *> *>(&_coveredBy));
}

void QUmlLifeline::addCoveredBy(UmlInteractionFragment *coveredBy)
{
    UmlLifeline::addCoveredBy(coveredBy);
}

void QUmlLifeline::removeCoveredBy(UmlInteractionFragment *coveredBy)
{
    UmlLifeline::removeCoveredBy(coveredBy);
}

QUmlPartDecomposition *QUmlLifeline::decomposedAs() const
{
    return reinterpret_cast<QUmlPartDecomposition *>(_decomposedAs);
}

void QUmlLifeline::setDecomposedAs(QUmlPartDecomposition *decomposedAs)
{
    UmlLifeline::setDecomposedAs(decomposedAs);
}

QUmlInteraction *QUmlLifeline::interaction() const
{
    return reinterpret_cast<QUmlInteraction *>(_interaction);
}

void QUmlLifeline::setInteraction(QUmlInteraction *interaction)
{
    UmlLifeline::setInteraction(interaction);
}

QUmlConnectableElement *QUmlLifeline::represents() const
{
    return reinterpret_cast<QUmlConnectableElement *>(_represents);
}

void QUmlLifeline::setRepresents(QUmlConnectableElement *represents)
{
    UmlLifeline::setRepresents(represents);
}

QUmlValueSpecification *QUmlLifeline::selector() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_selector);
}

void QUmlLifeline::setSelector(QUmlValueSpecification *selector)
{
    UmlLifeline::setSelector(selector);
}

QT_END_NAMESPACE

