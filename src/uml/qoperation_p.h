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
#ifndef QTUML_QOPERATION_P_H
#define QTUML_QOPERATION_P_H

#include <QtUml/QtUmlGlobal>

// Base class includes

#include "qtemplateableelement_p.h"

#include "qbehavioralfeature_p.h"

#include "qparameterableelement_p.h"

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QOperationTemplateParameter;
class QType;
class QRedefinableElement;
class QParameter;
class QInterface;
class QConstraint;
class QDataType;
class QClass;

class QOperationPrivate : public QTemplateableElementPrivate, public QBehavioralFeaturePrivate, public QParameterableElementPrivate
{
public:
    explicit QOperationPrivate();
    virtual ~QOperationPrivate();

    bool isQuery;
    QList<QParameter *> *ownedParameters;
    QConstraint *bodyCondition;
    QSet<QOperation *> *redefinedOperations;
    QSet<QConstraint *> *postconditions;
    QDataType *datatype;
    QOperationTemplateParameter *templateParameter;
    QInterface *interface;
    QSet<QConstraint *> *preconditions;
    QClass *class_;
    QSet<QType *> *raisedExceptions;

    // Internal functions for attributes
    void setQuery(bool isQuery);

    // Internal functions for association-ends
    void addOwnedParameter(QParameter *ownedParameter);
    void removeOwnedParameter(QParameter *ownedParameter);
    void setBodyCondition(QConstraint *bodyCondition);
    void addRedefinedOperation(QOperation *redefinedOperation);
    void removeRedefinedOperation(QOperation *redefinedOperation);
    void addPostcondition(QConstraint *postcondition);
    void removePostcondition(QConstraint *postcondition);
    void setDatatype(QDataType *datatype);
    void setTemplateParameter(QOperationTemplateParameter *templateParameter);
    void setInterface(QInterface *interface);
    void addPrecondition(QConstraint *precondition);
    void removePrecondition(QConstraint *precondition);
    void setClass_(QClass *class_);
    void addRaisedException(QType *raisedException);
    void removeRaisedException(QType *raisedException);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QOPERATION_P_H

