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
#include "qumlgeneralizationset.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlGeneralization>

QT_BEGIN_NAMESPACE

QUmlGeneralizationSet::QUmlGeneralizationSet(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlGeneralization *> QUmlGeneralizationSet::generalization() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralization *> *>(&_generalization));
}

void QUmlGeneralizationSet::addGeneralization(UmlGeneralization *generalization)
{
    UmlGeneralizationSet::addGeneralization(generalization);
}

void QUmlGeneralizationSet::removeGeneralization(UmlGeneralization *generalization)
{
    UmlGeneralizationSet::removeGeneralization(generalization);
}

bool QUmlGeneralizationSet::isCovering() const
{
    return _isCovering;
}

void QUmlGeneralizationSet::setCovering(bool isCovering)
{
    UmlGeneralizationSet::setCovering(isCovering);
}

bool QUmlGeneralizationSet::isDisjoint() const
{
    return _isDisjoint;
}

void QUmlGeneralizationSet::setDisjoint(bool isDisjoint)
{
    UmlGeneralizationSet::setDisjoint(isDisjoint);
}

QUmlClassifier *QUmlGeneralizationSet::powertype() const
{
    return reinterpret_cast<QUmlClassifier *>(_powertype);
}

void QUmlGeneralizationSet::setPowertype(QUmlClassifier *powertype)
{
    UmlGeneralizationSet::setPowertype(powertype);
}

QT_END_NAMESPACE

