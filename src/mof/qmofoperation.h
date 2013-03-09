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
#ifndef QMOFOPERATION_H
#define QMOFOPERATION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofBehavioralFeature>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofOperation;
class QMofType;
class QMofRedefinableElement;
class QMofParameter;
class QMofClass;
class QMofConstraint;
class QMofDataType;

class QMofOperationPrivate;

class Q_MOF_EXPORT QMofOperation : public QMofBehavioralFeature
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(qint32 lower READ lower STORED false)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery RESET unsetQuery)
    Q_PROPERTY(bool isUnique READ isUnique STORED false)
    Q_PROPERTY(qint32 upper READ upper STORED false)
    Q_PROPERTY(bool isOrdered READ isOrdered STORED false)
    Q_PROPERTY(QList<QMofParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QMofConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(QSet<QMofOperation *> redefinedOperations READ redefinedOperations)
    Q_PROPERTY(QSet<QMofConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QMofDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QMofType * type READ type STORED false)
    Q_PROPERTY(QSet<QMofConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QMofClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QSet<QMofType *> raisedExceptions READ raisedExceptions)

    Q_DISABLE_COPY(QMofOperation)
    Q_DECLARE_PRIVATE(QMofOperation)

public:
    Q_INVOKABLE explicit QMofOperation(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofOperation();

    // Attributes from QMofOperation
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE bool isQuery() const;
    Q_INVOKABLE void setQuery(bool isQuery);
    Q_INVOKABLE void unsetQuery();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE bool isOrdered() const;

    // Association ends from QMofOperation
    Q_INVOKABLE QList<QMofParameter *> ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QMofParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QMofParameter *ownedParameter);
    Q_INVOKABLE QMofConstraint *bodyCondition() const;
    Q_INVOKABLE void setBodyCondition(QMofConstraint *bodyCondition);
    Q_INVOKABLE QSet<QMofOperation *> redefinedOperations() const;
    Q_INVOKABLE void addRedefinedOperation(QMofOperation *redefinedOperation);
    Q_INVOKABLE void removeRedefinedOperation(QMofOperation *redefinedOperation);
    Q_INVOKABLE QSet<QMofConstraint *> postconditions() const;
    Q_INVOKABLE void addPostcondition(QMofConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QMofConstraint *postcondition);
    Q_INVOKABLE QMofDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QMofDataType *datatype);
    Q_INVOKABLE QMofType *type() const;
    Q_INVOKABLE QSet<QMofConstraint *> preconditions() const;
    Q_INVOKABLE void addPrecondition(QMofConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QMofConstraint *precondition);
    Q_INVOKABLE QMofClass *class_() const;
    Q_INVOKABLE void setClass_(QMofClass *class_);
    Q_INVOKABLE QSet<QMofType *> raisedExceptions() const;
    Q_INVOKABLE void addRaisedException(QMofType *raisedException);
    Q_INVOKABLE void removeRaisedException(QMofType *raisedException);

    // Operations
    Q_INVOKABLE bool isConsistentWith(const QMofRedefinableElement *redefinee) const;
    Q_INVOKABLE QSet<QMofParameter *> returnResult() const;

    virtual void setPropertyData();

protected:
    explicit QMofOperation(QMofOperationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFOPERATION_H

