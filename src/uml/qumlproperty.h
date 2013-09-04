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

#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlDeploymentTarget>


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

class Q_UML_EXPORT QUmlProperty : public QUmlStructuralFeature, public QUmlConnectableElement, public QUmlDeploymentTarget
{
public:
    explicit QUmlProperty(bool createQObject = true);
    virtual ~QUmlProperty();

    QModelingObject *clone() const;

    // Owned attributes
    QtUml::AggregationKind aggregation() const;
    void setAggregation(QtUml::AggregationKind aggregation);
    QUmlAssociation *association() const;
    void setAssociation(QUmlAssociation *association);
    QUmlProperty *associationEnd() const;
    void setAssociationEnd(QUmlProperty *associationEnd);
    QUmlClass *class_() const;
    void setClass(QUmlClass *class_);
    QUmlDataType *datatype() const;
    void setDatatype(QUmlDataType *datatype);
    QString default_() const;
    void setDefault(QString default_);
    QUmlValueSpecification *defaultValue() const;
    void setDefaultValue(QUmlValueSpecification *defaultValue);
    QUmlInterface *interface_() const;
    void setInterface(QUmlInterface *interface_);
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
    QUmlProperty *opposite() const;
    void setOpposite(QUmlProperty *opposite);
    QUmlAssociation *owningAssociation() const;
    void setOwningAssociation(QUmlAssociation *owningAssociation);
    const QList<QUmlProperty *> qualifier() const;
    void addQualifier(QUmlProperty *qualifier);
    void removeQualifier(QUmlProperty *qualifier);
    const QSet<QUmlProperty *> redefinedProperty() const;
    void addRedefinedProperty(QUmlProperty *redefinedProperty);
    void removeRedefinedProperty(QUmlProperty *redefinedProperty);
    const QSet<QUmlProperty *> subsettedProperty() const;
    void addSubsettedProperty(QUmlProperty *subsettedProperty);
    void removeSubsettedProperty(QUmlProperty *subsettedProperty);

    // Operations
    bool isAttribute(QUmlProperty *p) const;
    bool isCompatibleWith(QUmlParameterableElement *p) const;
    bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    bool isNavigable() const;
    QSet<QUmlType *> subsettingContext() const;

protected:
    QtUml::AggregationKind _aggregation;
    QUmlAssociation *_association;
    QUmlProperty *_associationEnd;
    QUmlClass *_class_;
    QUmlDataType *_datatype;
    QUmlValueSpecification *_defaultValue;
    QUmlInterface *_interface_;
    bool _isDerived;
    bool _isDerivedUnion;
    bool _isID;
    bool _isReadOnly;
    QUmlAssociation *_owningAssociation;
    QList<QUmlProperty *> _qualifier;
    QSet<QUmlProperty *> _redefinedProperty;
    QSet<QUmlProperty *> _subsettedProperty;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlProperty) *)

QT_END_HEADER

#endif // QUMLPROPERTY_H

