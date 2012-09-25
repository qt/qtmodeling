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
#ifndef CLASSES_KERNEL_QPROPERTY_H
#define CLASSES_KERNEL_QPROPERTY_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QEnumerations>

// Base class includes
#include <QtCore/QObject>
#include <QtCore/QObject>
#include <QtUml/QStructuralFeature>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QPropertyPrivate;

class QAssociation;
class QClass;
class QDataType;
class QValueSpecification;
class QRedefinableElement;
class QType;

class Q_UML_EXPORT QProperty : public QObject, public QStructuralFeature
{
    Q_OBJECT

    Q_PROPERTY(QEnumerations::AggregationKind aggregation READ aggregation WRITE setAggregation)
    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion WRITE setDerivedUnion)
    Q_PROPERTY(bool isID READ isID WRITE setID)
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly)
    Q_PROPERTY(QAssociation * association READ association WRITE setAssociation)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QValueSpecification * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(QAssociation * owningAssociation READ owningAssociation WRITE setOwningAssociation)
    Q_PROPERTY(QList<QProperty *> * redefinedProperty READ redefinedProperty)
    Q_PROPERTY(QList<QProperty *> * subsettedProperty READ subsettedProperty)

public:
    explicit QProperty(QObject *parent = 0);
    virtual ~QProperty();

    // Attributes (except those derived && !derivedUnion)
    QEnumerations::AggregationKind aggregation() const;
    void setAggregation(QEnumerations::AggregationKind aggregation);
    bool isDerived() const;
    void setDerived(bool isDerived);
    bool isDerivedUnion() const;
    void setDerivedUnion(bool isDerivedUnion);
    bool isID() const;
    void setID(bool isID);
    bool isReadOnly() const;
    void setReadOnly(bool isReadOnly);

    // Association-ends (except those derived && !derivedUnion)
    QAssociation *association() const;
    void setAssociation(QAssociation *association);
    QClass *class_() const;
    void setClass_(QClass *class_);
    QDataType *datatype() const;
    void setDatatype(QDataType *datatype);
    QValueSpecification *defaultValue() const;
    void setDefaultValue(QValueSpecification *defaultValue);
    QAssociation *owningAssociation() const;
    void setOwningAssociation(QAssociation *owningAssociation);
    QList<QProperty *> *redefinedProperty();
    QList<QProperty *> *subsettedProperty();

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    QString default_() const;
    bool isAttribute(const QProperty *p) const;
    bool isComposite() const;
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    bool isNavigable() const;
    const QProperty *opposite() const;
    const QList<QType *> *subsettingContext() const;

private:
    Q_DISABLE_COPY(QProperty)
    Q_DECLARE_PRIVATE(QProperty)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QProperty) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QProperty) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QPROPERTY_H

