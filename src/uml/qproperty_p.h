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
#ifndef QTUML_QPROPERTY_P_H
#define QTUML_QPROPERTY_P_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes

#include "qstructuralfeature_p.h"

#include "qconnectableelement_p.h"

#include "qdeploymenttarget_p.h"

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QRedefinableElement;
class QParameterableElement;
class QType;
class QInterface;
class QValueSpecification;
class QAssociation;
class QDataType;
class QClass;

class QPropertyPrivate : public QStructuralFeaturePrivate, public QConnectableElementPrivate, public QDeploymentTargetPrivate
{
public:
    explicit QPropertyPrivate();
    virtual ~QPropertyPrivate();

    bool isDerived;
    bool isReadOnly;
    bool isID;
    bool isDerivedUnion;
    QtUml::AggregationKind aggregation;
    QSet<QProperty *> *subsettedProperties;
    QAssociation *owningAssociation;
    QList<QProperty *> *qualifiers;
    QValueSpecification *defaultValue;
    QClass *class_;
    QProperty *associationEnd;
    QDataType *datatype;
    QSet<QProperty *> *redefinedProperties;
    QAssociation *association;
    QInterface *interface;

    // Internal functions for attributes
    void setDerived(bool isDerived);
    void setReadOnly(bool isReadOnly);
    void setID(bool isID);
    void setDerivedUnion(bool isDerivedUnion);
    void setAggregation(QtUml::AggregationKind aggregation);

    // Internal functions for association-ends
    void addSubsettedProperty(QProperty *subsettedProperty);
    void removeSubsettedProperty(QProperty *subsettedProperty);
    void setOwningAssociation(QAssociation *owningAssociation);
    void addQualifier(QProperty *qualifier);
    void removeQualifier(QProperty *qualifier);
    void setDefaultValue(QValueSpecification *defaultValue);
    void setClass_(QClass *class_);
    void setAssociationEnd(QProperty *associationEnd);
    void setDatatype(QDataType *datatype);
    void addRedefinedProperty(QProperty *redefinedProperty);
    void removeRedefinedProperty(QProperty *redefinedProperty);
    void setAssociation(QAssociation *association);
    void setInterface(QInterface *interface);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QPROPERTY_P_H

