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
#ifndef QUMLPROPERTY_H
#define QUMLPROPERTY_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlproperty_p.h"
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlAssociation;
class QUmlClass;
class QUmlDataType;
class QUmlInterface;
class QUmlParameterableElement;
class QUmlRedefinableElement;
class QUmlType;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlProperty : public QObject, public UmlProperty
{
    Q_OBJECT
    Q_PROPERTY(QtUml::AggregationKind aggregation READ aggregation)
    Q_PROPERTY(QUmlAssociation * association READ association)
    Q_PROPERTY(QUmlProperty * associationEnd READ associationEnd)
    Q_PROPERTY(QUmlClass * class_ READ class_)
    Q_PROPERTY(QUmlDataType * datatype READ datatype)
    Q_PROPERTY(QString default_ READ default_)
    Q_PROPERTY(QUmlValueSpecification * defaultValue READ defaultValue)
    Q_PROPERTY(QUmlInterface * interface_ READ interface_)
    Q_PROPERTY(bool isComposite READ isComposite)
    Q_PROPERTY(bool isDerived READ isDerived)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion)
    Q_PROPERTY(bool isID READ isID)
    Q_PROPERTY(bool isReadOnly READ isReadOnly)
    Q_PROPERTY(QUmlProperty * opposite READ opposite)
    Q_PROPERTY(QUmlAssociation * owningAssociation READ owningAssociation)
    Q_PROPERTY(QList<QUmlProperty *> qualifier READ qualifier)
    Q_PROPERTY(QSet<QUmlProperty *> redefinedProperty READ redefinedProperty)
    Q_PROPERTY(QSet<QUmlProperty *> subsettedProperty READ subsettedProperty)

public:
    Q_INVOKABLE explicit QUmlProperty(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QtUml::AggregationKind aggregation() const;
    Q_INVOKABLE void setAggregation(QtUml::AggregationKind aggregation);
    Q_INVOKABLE QUmlAssociation *association() const;
    Q_INVOKABLE void setAssociation(QUmlAssociation *association);
    Q_INVOKABLE QUmlProperty *associationEnd() const;
    Q_INVOKABLE void setAssociationEnd(QUmlProperty *associationEnd);
    Q_INVOKABLE QUmlClass *class_() const;
    Q_INVOKABLE void setClass(QUmlClass *class_);
    Q_INVOKABLE QUmlDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QUmlDataType *datatype);
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE void setDefault(QString default_);
    Q_INVOKABLE QUmlValueSpecification *defaultValue() const;
    Q_INVOKABLE void setDefaultValue(QUmlValueSpecification *defaultValue);
    Q_INVOKABLE QUmlInterface *interface_() const;
    Q_INVOKABLE void setInterface(QUmlInterface *interface_);
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE void setComposite(bool isComposite);
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE void setDerived(bool isDerived);
    Q_INVOKABLE bool isDerivedUnion() const;
    Q_INVOKABLE void setDerivedUnion(bool isDerivedUnion);
    Q_INVOKABLE bool isID() const;
    Q_INVOKABLE void setID(bool isID);
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE QUmlProperty *opposite() const;
    Q_INVOKABLE void setOpposite(QUmlProperty *opposite);
    Q_INVOKABLE QUmlAssociation *owningAssociation() const;
    Q_INVOKABLE void setOwningAssociation(QUmlAssociation *owningAssociation);
    Q_INVOKABLE const QList<QUmlProperty *> qualifier() const;
    Q_INVOKABLE void addQualifier(UmlProperty *qualifier);
    Q_INVOKABLE void removeQualifier(UmlProperty *qualifier);
    Q_INVOKABLE const QSet<QUmlProperty *> redefinedProperty() const;
    Q_INVOKABLE void addRedefinedProperty(UmlProperty *redefinedProperty);
    Q_INVOKABLE void removeRedefinedProperty(UmlProperty *redefinedProperty);
    Q_INVOKABLE const QSet<QUmlProperty *> subsettedProperty() const;
    Q_INVOKABLE void addSubsettedProperty(UmlProperty *subsettedProperty);
    Q_INVOKABLE void removeSubsettedProperty(UmlProperty *subsettedProperty);

    // Operations
    Q_INVOKABLE bool isAttribute(QUmlProperty *p) const;
    Q_INVOKABLE bool isCompatibleWith(QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isNavigable() const;
    Q_INVOKABLE QSet<QUmlType *> subsettingContext() const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlProperty *)
Q_DECLARE_METATYPE(QList<QUmlProperty *> *)
Q_DECLARE_METATYPE(QSet<QUmlProperty *> *)

QT_END_HEADER

#endif // QUMLPROPERTY_H

