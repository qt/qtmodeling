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
#ifndef QTMOF_QPROPERTY_H
#define QTMOF_QPROPERTY_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QStructuralFeature>

// QtMof includes
#include <QtMof/QtMofNamespace>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QRedefinableElement;
class QType;
class QValueSpecification;
class QClass;
class QAssociation;
class QDataType;

class QPropertyPrivate;

class Q_MOF_EXPORT QProperty : public QStructuralFeature
{
    Q_OBJECT

    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived RESET unsetDerived)
    Q_PROPERTY(QString default_ READ default_ WRITE setDefault_ STORED false)
    Q_PROPERTY(bool isComposite READ isComposite WRITE setComposite STORED false)
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)
    Q_PROPERTY(bool isID READ isID WRITE setID RESET unsetID)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion WRITE setDerivedUnion RESET unsetDerivedUnion)
    Q_PROPERTY(QtMof::AggregationKind aggregation READ aggregation WRITE setAggregation RESET unsetAggregation)
    Q_PROPERTY(QSet<QProperty *> subsettedProperties READ subsettedProperties)
    Q_PROPERTY(QAssociation * owningAssociation READ owningAssociation WRITE setOwningAssociation)
    Q_PROPERTY(QValueSpecification * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QProperty * opposite READ opposite WRITE setOpposite STORED false)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QSet<QProperty *> redefinedProperties READ redefinedProperties)
    Q_PROPERTY(QAssociation * association READ association WRITE setAssociation)

    Q_DISABLE_COPY(QProperty)
    Q_DECLARE_PRIVATE(QProperty)

public:
    Q_INVOKABLE explicit QProperty(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QProperty();

    // Attributes from QProperty
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE void setDerived(bool isDerived);
    Q_INVOKABLE void unsetDerived();
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE void setDefault_(QString default_);
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE void setComposite(bool isComposite);
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE void unsetReadOnly();
    Q_INVOKABLE bool isID() const;
    Q_INVOKABLE void setID(bool isID);
    Q_INVOKABLE void unsetID();
    Q_INVOKABLE bool isDerivedUnion() const;
    Q_INVOKABLE void setDerivedUnion(bool isDerivedUnion);
    Q_INVOKABLE void unsetDerivedUnion();
    Q_INVOKABLE QtMof::AggregationKind aggregation() const;
    Q_INVOKABLE void setAggregation(QtMof::AggregationKind aggregation);
    Q_INVOKABLE void unsetAggregation();

    // Association ends from QProperty
    Q_INVOKABLE QSet<QProperty *> subsettedProperties() const;
    Q_INVOKABLE void addSubsettedProperty(QProperty *subsettedProperty);
    Q_INVOKABLE void removeSubsettedProperty(QProperty *subsettedProperty);
    Q_INVOKABLE QAssociation *owningAssociation() const;
    Q_INVOKABLE void setOwningAssociation(QAssociation *owningAssociation);
    Q_INVOKABLE QValueSpecification *defaultValue() const;
    Q_INVOKABLE void setDefaultValue(QValueSpecification *defaultValue);
    Q_INVOKABLE QClass *class_() const;
    Q_INVOKABLE void setClass_(QClass *class_);
    Q_INVOKABLE QProperty *opposite() const;
    Q_INVOKABLE void setOpposite(QProperty *opposite);
    Q_INVOKABLE QDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QDataType *datatype);
    Q_INVOKABLE QSet<QProperty *> redefinedProperties() const;
    Q_INVOKABLE void addRedefinedProperty(QProperty *redefinedProperty);
    Q_INVOKABLE void removeRedefinedProperty(QProperty *redefinedProperty);
    Q_INVOKABLE QAssociation *association() const;
    Q_INVOKABLE void setAssociation(QAssociation *association);

    // Operations
    Q_INVOKABLE bool isAttribute(const QProperty *p) const;
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isNavigable() const;
    Q_INVOKABLE QSet<QType *> subsettingContext() const;

    virtual void setPropertyData();

protected:
    explicit QProperty(QPropertyPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QPROPERTY_H

