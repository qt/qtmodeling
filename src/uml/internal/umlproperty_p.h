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
#ifndef UMLPROPERTY_H
#define UMLPROPERTY_H

#include <QtUml/QtUmlGlobal>

#include "private/umlstructuralfeature_p.h"
#include "private/umlconnectableelement_p.h"
#include "private/umldeploymenttarget_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

#include <QtUml/QtUmlNamespace>

class UmlAssociation;
class UmlClass;
class UmlDataType;
class UmlInterface;
class UmlParameterableElement;
class UmlRedefinableElement;
class UmlType;
class UmlValueSpecification;

class Q_UML_EXPORT UmlProperty : public UmlStructuralFeature, public UmlConnectableElement, public UmlDeploymentTarget
{
public:
    Q_DECL_HIDDEN explicit UmlProperty();

    // Owned attributes
    QtUml::AggregationKind aggregation() const;
    void setAggregation(QtUml::AggregationKind aggregation);
    UmlAssociation *association() const;
    void setAssociation(UmlAssociation *association);
    UmlProperty *associationEnd() const;
    void setAssociationEnd(UmlProperty *associationEnd);
    UmlClass *class_() const;
    void setClass(UmlClass *class_);
    UmlDataType *datatype() const;
    void setDatatype(UmlDataType *datatype);
    QString default_() const;
    void setDefault(QString default_);
    UmlValueSpecification *defaultValue() const;
    void setDefaultValue(UmlValueSpecification *defaultValue);
    UmlInterface *interface_() const;
    void setInterface(UmlInterface *interface_);
    bool isComposite() const;
    void setComposite(bool isComposite);
    bool isDerived() const;
    void setDerived(bool isDerived);
    bool isDerivedUnion() const;
    void setDerivedUnion(bool isDerivedUnion);
    bool isID() const;
    void setID(bool isID);
    bool isReadOnly() const;
    void setReadOnly(bool isReadOnly);
    UmlProperty *opposite() const;
    void setOpposite(UmlProperty *opposite);
    UmlAssociation *owningAssociation() const;
    void setOwningAssociation(UmlAssociation *owningAssociation);
    const QList<UmlProperty *> qualifier() const;
    void addQualifier(UmlProperty *qualifier);
    void removeQualifier(UmlProperty *qualifier);
    const QSet<UmlProperty *> redefinedProperty() const;
    void addRedefinedProperty(UmlProperty *redefinedProperty);
    void removeRedefinedProperty(UmlProperty *redefinedProperty);
    const QSet<UmlProperty *> subsettedProperty() const;
    void addSubsettedProperty(UmlProperty *subsettedProperty);
    void removeSubsettedProperty(UmlProperty *subsettedProperty);

    // Operations
    bool isAttribute(UmlProperty *p) const;
    bool isCompatibleWith(UmlParameterableElement *p) const;
    bool isConsistentWith(UmlRedefinableElement *redefinee) const;
    bool isNavigable() const;
    QSet<UmlType *> subsettingContext() const;

protected:
    QtUml::AggregationKind _aggregation;
    UmlAssociation *_association;
    UmlProperty *_associationEnd;
    UmlClass *_class_;
    UmlDataType *_datatype;
    UmlValueSpecification *_defaultValue;
    UmlInterface *_interface_;
    bool _isDerived;
    bool _isDerivedUnion;
    bool _isID;
    bool _isReadOnly;
    UmlAssociation *_owningAssociation;
    QList<UmlProperty *> _qualifier;
    QSet<UmlProperty *> _redefinedProperty;
    QSet<UmlProperty *> _subsettedProperty;
};

#endif // UMLPROPERTY_H

