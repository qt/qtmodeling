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
    void setLower(qint32 lower);
    void setQuery(bool isQuery);
    void setUnique(bool isUnique);
    void setUpper(qint32 upper);
    void setOrdered(bool isOrdered);

    // Internal functions for association-ends
    void addOwnedParameter(const QParameter *ownedParameter);
    void removeOwnedParameter(const QParameter *ownedParameter);
    void setBodyCondition(const QConstraint *bodyCondition);
    void addRedefinedOperation(const QOperation *redefinedOperation);
    void removeRedefinedOperation(const QOperation *redefinedOperation);
    void addPostcondition(const QConstraint *postcondition);
    void removePostcondition(const QConstraint *postcondition);
    void setDatatype(const QDataType *datatype);
    void setTemplateParameter(const QOperationTemplateParameter *templateParameter);
    void setInterface(const QInterface *interface);
    void setType(const QType *type);
    void addPrecondition(const QConstraint *precondition);
    void removePrecondition(const QConstraint *precondition);
    void setClass_(const QClass *class_);
    void addRaisedException(const QType *raisedException);
    void removeRaisedException(const QType *raisedException);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QOPERATION_P_H

