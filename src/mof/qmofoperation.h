/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QMOFOPERATION_H
#define QMOFOPERATION_H

#include <QtMof/QtMofGlobal>

#include <QtMof/QMofBehavioralFeature>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofClass;
class QMofConstraint;
class QMofDataType;
class QMofParameter;
class QMofRedefinableElement;
class QMofType;

class Q_MOF_EXPORT QMofOperation : public QMofBehavioralFeature
{
public:
    explicit QMofOperation(bool createQModelingObject = true);

    virtual QModelingElement *clone() const;

    // Owned attributes
    QMofConstraint *bodyCondition() const;
    void setBodyCondition(QMofConstraint *bodyCondition);
    QMofClass *class_() const;
    void setClass(QMofClass *class_);
    QMofDataType *datatype() const;
    void setDatatype(QMofDataType *datatype);
    bool isOrdered() const;
    Q_DECL_HIDDEN void setOrdered(bool isOrdered);
    bool isQuery() const;
    void setQuery(bool isQuery);
    bool isUnique() const;
    Q_DECL_HIDDEN void setUnique(bool isUnique);
    int lower() const;
    Q_DECL_HIDDEN void setLower(int lower);
    const QList<QMofParameter *> ownedParameters() const;
    void addOwnedParameter(QMofParameter *ownedParameter);
    void removeOwnedParameter(QMofParameter *ownedParameter);
    const QSet<QMofConstraint *> postconditions() const;
    void addPostcondition(QMofConstraint *postcondition);
    void removePostcondition(QMofConstraint *postcondition);
    const QSet<QMofConstraint *> preconditions() const;
    void addPrecondition(QMofConstraint *precondition);
    void removePrecondition(QMofConstraint *precondition);
    const QSet<QMofType *> raisedExceptions() const;
    void addRaisedException(QMofType *raisedException);
    void removeRaisedException(QMofType *raisedException);
    const QSet<QMofOperation *> redefinedOperations() const;
    void addRedefinedOperation(QMofOperation *redefinedOperation);
    void removeRedefinedOperation(QMofOperation *redefinedOperation);
    QMofType *type() const;
    Q_DECL_HIDDEN void setType(QMofType *type);
    QString upper() const;
    Q_DECL_HIDDEN void setUpper(QString upper);

    // Operations
    bool isConsistentWith(QMofRedefinableElement *redefinee) const;
    QSet<QMofParameter *> returnResult() const;

protected:
    QMofConstraint *_bodyCondition;
    QMofClass *_class_;
    QMofDataType *_datatype;
    bool _isQuery;
    QList<QMofParameter *> _ownedParameters;
    QSet<QMofConstraint *> _postconditions;
    QSet<QMofConstraint *> _preconditions;
    QSet<QMofType *> _raisedExceptions;
    QSet<QMofOperation *> _redefinedOperations;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QMofOperation) *)

QT_END_HEADER

#endif // QMOFOPERATION_H

