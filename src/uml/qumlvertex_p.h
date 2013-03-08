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
#ifndef QUMLVERTEX_P_H
#define QUMLVERTEX_P_H

// Base class includes
#include "private/qumlnamedelement_p.h"

#include "QtUml/QUmlVertex"

// Qt includes
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlRegion;
class QUmlTransition;
class QUmlStateMachine;

class Q_UML_EXPORT QUmlVertexPrivate : public QUmlNamedElementPrivate
{
    Q_DECLARE_PUBLIC(QUmlVertex)

public:
    explicit QUmlVertexPrivate();
    virtual ~QUmlVertexPrivate();

    QUmlRegion *container;

    // Internal functions for read-only subsetted association ends
    void addIncoming(QUmlTransition *incoming);
    void removeIncoming(QUmlTransition *incoming);
    void addOutgoing(QUmlTransition *outgoing);
    void removeOutgoing(QUmlTransition *outgoing);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLVERTEX_P_H

