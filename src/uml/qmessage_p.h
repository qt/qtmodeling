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
#ifndef QTUML_QMESSAGE_P_H
#define QTUML_QMESSAGE_P_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>
#include <QtUml/QtUmlEnumerations>

// Base class includes

#include "qnamedelement_p.h"

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QMessageEnd;
class QInteraction;
class QValueSpecification;
class QConnector;

class QMessagePrivate : public QNamedElementPrivate
{
public:
    explicit QMessagePrivate();
    virtual ~QMessagePrivate();

    QtUml::MessageSort messageSort;
    QNamedElement *signature;
    QList<QValueSpecification *> *arguments;
    QMessageEnd *receiveEvent;
    QInteraction *interaction;
    QMessageEnd *sendEvent;
    QConnector *connector;

    // Internal functions for attributes
    void setMessageSort(QtUml::MessageSort messageSort);

    // Internal functions for association-ends
    void setSignature(QNamedElement *signature);
    void addArgument(QValueSpecification *argument);
    void removeArgument(QValueSpecification *argument);
    void setReceiveEvent(QMessageEnd *receiveEvent);
    void setInteraction(QInteraction *interaction);
    void setSendEvent(QMessageEnd *sendEvent);
    void setConnector(QConnector *connector);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QMESSAGE_P_H

