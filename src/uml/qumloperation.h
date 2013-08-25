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

#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlParameterableElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClass;
class QUmlConstraint;
class QUmlDataType;
class QUmlInterface;
class QUmlOperationTemplateParameter;
class QUmlRedefinableElement;
class QUmlType;

class QUmlOperationPrivate;
class Q_UML_EXPORT QUmlOperation : public QUmlTemplateableElement, public QUmlBehavioralFeature, public QUmlParameterableElement
{
public:
    QUmlOperation(bool create_d_ptr = true);

    // Owned attributes
    QUmlConstraint *bodyCondition() const;
    void setBodyCondition(QUmlConstraint *bodyCondition);
    QUmlClass *class_() const;
    void setClass(QUmlClass *class_);
    QUmlDataType *datatype() const;
    void setDatatype(QUmlDataType *datatype);
    QUmlInterface *interface_() const;
    void setInterface(QUmlInterface *interface_);
    bool isOrdered() const;
    bool isQuery() const;
    void setQuery(bool isQuery);
    bool isUnique() const;
    int lower() const;
    QList<QUmlParameter *> ownedParameter() const;
    void addOwnedParameter(QList<QUmlParameter *> ownedParameter);
    void removeOwnedParameter(QList<QUmlParameter *> ownedParameter);
    QSet<QUmlConstraint *> postcondition() const;
    void addPostcondition(QSet<QUmlConstraint *> postcondition);
    void removePostcondition(QSet<QUmlConstraint *> postcondition);
    QSet<QUmlConstraint *> precondition() const;
    void addPrecondition(QSet<QUmlConstraint *> precondition);
    void removePrecondition(QSet<QUmlConstraint *> precondition);
    QSet<QUmlType *> raisedException() const;
    void addRaisedException(QSet<QUmlType *> raisedException);
    void removeRaisedException(QSet<QUmlType *> raisedException);
    QSet<QUmlOperation *> redefinedOperation() const;
    void addRedefinedOperation(QSet<QUmlOperation *> redefinedOperation);
    void removeRedefinedOperation(QSet<QUmlOperation *> redefinedOperation);
    QUmlOperationTemplateParameter *templateParameter() const;
    void setTemplateParameter(QUmlOperationTemplateParameter *templateParameter);
    QUmlType *type() const;
    int upper() const;

    // Operations
    bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    QSet<QUmlParameter *> returnResult() const;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOPERATION_H

