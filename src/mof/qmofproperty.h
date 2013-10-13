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
#ifndef QMOFPROPERTY_H
#define QMOFPROPERTY_H

#include <QtMof/QtMofGlobal>

#include <QtMof/QMofStructuralFeature>

#include <QtMof/QtMofNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofAssociation;
class QMofClass;
class QMofDataType;
class QMofRedefinableElement;
class QMofType;
class QMofValueSpecification;

class Q_MOF_EXPORT QMofProperty : public QMofStructuralFeature
{
public:
    explicit QMofProperty(bool createQModelingObject = true);

    virtual QModelingElement *clone() const;

    // Owned attributes
    QtMof::AggregationKind aggregation() const;
    void setAggregation(QtMof::AggregationKind aggregation);
    QMofAssociation *association() const;
    void setAssociation(QMofAssociation *association);
    QMofClass *class_() const;
    void setClass(QMofClass *class_);
    QMofDataType *datatype() const;
    void setDatatype(QMofDataType *datatype);
    QString default_() const;
    void setDefault(QString default_);
    QMofValueSpecification *defaultValue() const;
    void setDefaultValue(QMofValueSpecification *defaultValue);
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
    QMofProperty *opposite() const;
    void setOpposite(QMofProperty *opposite);
    QMofAssociation *owningAssociation() const;
    void setOwningAssociation(QMofAssociation *owningAssociation);
    const QSet<QMofProperty *> redefinedProperties() const;
    void addRedefinedProperty(QMofProperty *redefinedProperty);
    void removeRedefinedProperty(QMofProperty *redefinedProperty);
    const QSet<QMofProperty *> subsettedProperties() const;
    void addSubsettedProperty(QMofProperty *subsettedProperty);
    void removeSubsettedProperty(QMofProperty *subsettedProperty);

    // Operations
    bool isAttribute(QMofProperty *p) const;
    bool isConsistentWith(QMofRedefinableElement *redefinee) const;
    bool isNavigable() const;
    QSet<QMofType *> subsettingContext() const;

protected:
    QtMof::AggregationKind _aggregation;
    QMofAssociation *_association;
    QMofClass *_class_;
    QMofDataType *_datatype;
    QMofValueSpecification *_defaultValue;
    bool _isDerived;
    bool _isDerivedUnion;
    bool _isID;
    bool _isReadOnly;
    QMofAssociation *_owningAssociation;
    QSet<QMofProperty *> _redefinedProperties;
    QSet<QMofProperty *> _subsettedProperties;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QMofProperty) *)

QT_END_HEADER

#endif // QMOFPROPERTY_H

