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
#ifndef CLASSES_KERNEL_QOPERATION_H
#define CLASSES_KERNEL_QOPERATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtCore/QObject>
#include <QtUml/QBehavioralFeature>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QOperationPrivate;

class QConstraint;
class QClass;
class QDataType;
class QParameter;
class QType;
class QRedefinableElement;

class Q_UML_EXPORT QOperation : public QObject, public QBehavioralFeature
{
    Q_OBJECT

    Q_PROPERTY(bool isQuery READ isQuery WRITE setIsQuery)
    Q_PROPERTY(QConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QList<QParameter *> * ownedParameter READ ownedParameter)
    Q_PROPERTY(QList<QConstraint *> * postcondition READ postcondition)
    Q_PROPERTY(QList<QConstraint *> * precondition READ precondition)
    Q_PROPERTY(QList<QType *> * raisedException READ raisedException)
    Q_PROPERTY(QList<QOperation *> * redefinedOperation READ redefinedOperation)

public:
    explicit QOperation();
    virtual ~QOperation();

    // Attributes (except those derived && !derivedUnion)
    bool isQuery() const;
    void setIsQuery(bool isQuery);

    // Association-ends (except those derived && !derivedUnion)
    QConstraint *bodyCondition() const;
    void setBodyCondition(QConstraint *bodyCondition);
    QClass *class_() const;
    void setClass_(QClass *class_);
    QDataType *datatype() const;
    void setDatatype(QDataType *datatype);
    QList<QParameter *> *ownedParameter() const;
    QList<QConstraint *> *postcondition() const;
    QList<QConstraint *> *precondition() const;
    QList<QType *> *raisedException() const;
    QList<QOperation *> *redefinedOperation() const;

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    bool isConsistentWith(QRedefinableElement *redefinee) const;
    bool isOrdered() const;
    bool isUnique() const;
    qint32 lower() const;
    QList<QParameter *> *returnResult() const;
    QType *type() const;
    qint32 upper() const;

private:
    Q_DISABLE_COPY(QOperation)
    Q_DECLARE_PRIVATE(QOperation)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QOperation) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QOperation) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QOPERATION_H

