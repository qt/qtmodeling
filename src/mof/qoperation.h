/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QTMOF_QOPERATION_H
#define QTMOF_QOPERATION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QBehavioralFeature>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QType;
class QRedefinableElement;
class QParameter;
class QClass;
class QConstraint;
class QDataType;

class QOperationPrivate;

class Q_MOF_EXPORT QOperation : public QBehavioralFeature
{
    Q_OBJECT

    Q_PROPERTY(qint32 lower READ lower STORED false)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery RESET unsetQuery)
    Q_PROPERTY(bool isUnique READ isUnique STORED false)
    Q_PROPERTY(qint32 upper READ upper STORED false)
    Q_PROPERTY(bool isOrdered READ isOrdered STORED false)
    Q_PROPERTY(QList<QParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(QSet<QOperation *> redefinedOperations READ redefinedOperations)
    Q_PROPERTY(QSet<QConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QType * type READ type STORED false)
    Q_PROPERTY(QSet<QConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QSet<QType *> raisedExceptions READ raisedExceptions)

    Q_DISABLE_COPY(QOperation)
    Q_DECLARE_PRIVATE(QOperation)

public:
    Q_INVOKABLE explicit QOperation(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QOperation();

    // Attributes from QOperation
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE bool isQuery() const;
    Q_INVOKABLE void setQuery(bool isQuery);
    Q_INVOKABLE void unsetQuery();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE bool isOrdered() const;

    // Association ends from QOperation
    Q_INVOKABLE QList<QParameter *> ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE QConstraint *bodyCondition() const;
    Q_INVOKABLE void setBodyCondition(QConstraint *bodyCondition);
    Q_INVOKABLE QSet<QOperation *> redefinedOperations() const;
    Q_INVOKABLE void addRedefinedOperation(QOperation *redefinedOperation);
    Q_INVOKABLE void removeRedefinedOperation(QOperation *redefinedOperation);
    Q_INVOKABLE QSet<QConstraint *> postconditions() const;
    Q_INVOKABLE void addPostcondition(QConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QConstraint *postcondition);
    Q_INVOKABLE QDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QDataType *datatype);
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE QSet<QConstraint *> preconditions() const;
    Q_INVOKABLE void addPrecondition(QConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QConstraint *precondition);
    Q_INVOKABLE QClass *class_() const;
    Q_INVOKABLE void setClass_(QClass *class_);
    Q_INVOKABLE QSet<QType *> raisedExceptions() const;
    Q_INVOKABLE void addRaisedException(QType *raisedException);
    Q_INVOKABLE void removeRaisedException(QType *raisedException);

    // Operations
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE QSet<QParameter *> returnResult() const;
    virtual void registerMetaTypes() const;

protected:
    explicit QOperation(QOperationPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QOPERATION_H

