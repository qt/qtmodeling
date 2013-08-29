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
#ifndef QUMLOPERATION_H
#define QUMLOPERATION_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umloperation_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClass;
class QUmlConstraint;
class QUmlDataType;
class QUmlInterface;
class QUmlOperationTemplateParameter;
class QUmlParameter;
class QUmlRedefinableElement;
class QUmlType;

class Q_UML_EXPORT QUmlOperation : public QObject, public UmlOperation
{
    Q_OBJECT
    Q_PROPERTY(QUmlConstraint * bodyCondition READ bodyCondition)
    Q_PROPERTY(QUmlClass * class_ READ class_)
    Q_PROPERTY(QUmlDataType * datatype READ datatype)
    Q_PROPERTY(QUmlInterface * interface_ READ interface_)
    Q_PROPERTY(bool isOrdered READ isOrdered)
    Q_PROPERTY(bool isQuery READ isQuery)
    Q_PROPERTY(bool isUnique READ isUnique)
    Q_PROPERTY(int lower READ lower)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameter READ ownedParameter)
    Q_PROPERTY(QSet<QUmlConstraint *> postcondition READ postcondition)
    Q_PROPERTY(QSet<QUmlConstraint *> precondition READ precondition)
    Q_PROPERTY(QSet<QUmlType *> raisedException READ raisedException)
    Q_PROPERTY(QSet<QUmlOperation *> redefinedOperation READ redefinedOperation)
    Q_PROPERTY(QUmlOperationTemplateParameter * templateParameter READ templateParameter)
    Q_PROPERTY(QUmlType * type READ type)
    Q_PROPERTY(int upper READ upper)

public:
    Q_INVOKABLE explicit QUmlOperation(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlConstraint *bodyCondition() const;
    Q_INVOKABLE void setBodyCondition(QUmlConstraint *bodyCondition);
    Q_INVOKABLE QUmlClass *class_() const;
    Q_INVOKABLE void setClass(QUmlClass *class_);
    Q_INVOKABLE QUmlDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QUmlDataType *datatype);
    Q_INVOKABLE QUmlInterface *interface_() const;
    Q_INVOKABLE void setInterface(QUmlInterface *interface_);
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isQuery() const;
    Q_INVOKABLE void setQuery(bool isQuery);
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE const QList<QUmlParameter *> ownedParameter() const;
    Q_INVOKABLE void addOwnedParameter(UmlParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(UmlParameter *ownedParameter);
    Q_INVOKABLE const QSet<QUmlConstraint *> postcondition() const;
    Q_INVOKABLE void addPostcondition(UmlConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(UmlConstraint *postcondition);
    Q_INVOKABLE const QSet<QUmlConstraint *> precondition() const;
    Q_INVOKABLE void addPrecondition(UmlConstraint *precondition);
    Q_INVOKABLE void removePrecondition(UmlConstraint *precondition);
    Q_INVOKABLE const QSet<QUmlType *> raisedException() const;
    Q_INVOKABLE void addRaisedException(UmlType *raisedException);
    Q_INVOKABLE void removeRaisedException(UmlType *raisedException);
    Q_INVOKABLE const QSet<QUmlOperation *> redefinedOperation() const;
    Q_INVOKABLE void addRedefinedOperation(UmlOperation *redefinedOperation);
    Q_INVOKABLE void removeRedefinedOperation(UmlOperation *redefinedOperation);
    Q_INVOKABLE QUmlOperationTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlOperationTemplateParameter *templateParameter);
    Q_INVOKABLE QUmlType *type() const;
    Q_INVOKABLE int upper() const;

    // Operations
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE QSet<QUmlParameter *> returnResult() const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlOperation *)
Q_DECLARE_METATYPE(QList<QUmlOperation *> *)
Q_DECLARE_METATYPE(QSet<QUmlOperation *> *)

QT_END_HEADER

#endif // QUMLOPERATION_H

