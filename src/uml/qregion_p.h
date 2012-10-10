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
** rights. These rights are described in the Nokia  LGPL Exception
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
#ifndef QTUML_QREGION_P_H
#define QTUML_QREGION_P_H

#include <QtUml/QtUmlGlobal>

// Base class includes

#include "qredefinableelement_p.h"

#include "qnamespace_p.h"

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QVertex;
class QTransition;
class QStateMachine;
class QClassifier;
class QState;

class QRegionPrivate : public QRedefinableElementPrivate, public QNamespacePrivate
{
public:
    explicit QRegionPrivate();
    virtual ~QRegionPrivate();

    QRegion *extendedRegion;
    QSet<QTransition *> *transitions;
    QStateMachine *stateMachine;
    QState *state;
    QSet<QVertex *> *subvertices;

    // Internal functions for association-ends
    void setExtendedRegion(const QRegion *extendedRegion);
    void addTransition(const QTransition *transition);
    void removeTransition(const QTransition *transition);
    void setStateMachine(const QStateMachine *stateMachine);
    void setState(const QState *state);
    void addSubvertex(const QVertex *subvertex);
    void removeSubvertex(const QVertex *subvertex);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QREGION_P_H

