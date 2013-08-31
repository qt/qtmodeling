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
#ifndef QUMLVARIABLE_H
#define QUMLVARIABLE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlvariable_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlAction;
class QUmlActivity;
class QUmlComment;
class QUmlConnectableElementTemplateParameter;
class QUmlConnectorEnd;
class QUmlDependency;
class QUmlElement;
class QUmlMultiplicityElement;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlParameterableElement;
class QUmlStringExpression;
class QUmlStructuredActivityNode;
class QUmlTemplateParameter;
class QUmlType;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlVariable : public QObject, public UmlVariable
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [MultiplicityElement]
    Q_PROPERTY(bool isOrdered READ isOrdered)
    Q_PROPERTY(bool isUnique READ isUnique)
    Q_PROPERTY(int lower READ lower)
    Q_PROPERTY(QUmlValueSpecification * lowerValue READ lowerValue)
    Q_PROPERTY(int upper READ upper)
    Q_PROPERTY(QUmlValueSpecification * upperValue READ upperValue)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [TypedElement]
    Q_PROPERTY(QUmlType * type READ type)

    // Properties [ParameterableElement]
    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter)

    // Properties [ConnectableElement]
    Q_PROPERTY(QList<QUmlConnectorEnd *> end READ end)
    Q_PROPERTY(QUmlConnectableElementTemplateParameter * templateParameter READ templateParameter)

    // Properties [Variable]
    Q_PROPERTY(QUmlActivity * activityScope READ activityScope)
    Q_PROPERTY(QUmlStructuredActivityNode * scope READ scope)

public:
    Q_INVOKABLE explicit QUmlVariable(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [MultiplicityElement]
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE QUmlValueSpecification *lowerValue() const;
    Q_INVOKABLE int upper() const;
    Q_INVOKABLE QUmlValueSpecification *upperValue() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [TypedElement]
    Q_INVOKABLE QUmlType *type() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;

    // Owned attributes [ConnectableElement]
    Q_INVOKABLE const QList<QUmlConnectorEnd *> end() const;
    Q_INVOKABLE QUmlConnectableElementTemplateParameter *templateParameter() const;

    // Owned attributes [Variable]
    Q_INVOKABLE QUmlActivity *activityScope() const;
    Q_INVOKABLE QUmlStructuredActivityNode *scope() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [MultiplicityElement]
    Q_INVOKABLE bool compatibleWith(QUmlMultiplicityElement *other) const;
    Q_INVOKABLE bool includesCardinality(int C) const;
    Q_INVOKABLE bool includesMultiplicity(QUmlMultiplicityElement *M) const;
    Q_INVOKABLE bool is(int lowerbound, int upperbound) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE int lowerBound() const;
    Q_INVOKABLE int upperBound() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [Variable]
    Q_INVOKABLE bool isAccessibleBy(QUmlAction *a) const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [MultiplicityElement]
    void setOrdered(bool isOrdered);
    void setUnique(bool isUnique);
    void setLower(int lower);
    void setLowerValue(QUmlValueSpecification *lowerValue);
    void setUpper(int upper);
    void setUpperValue(QUmlValueSpecification *upperValue);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [TypedElement]
    void setType(QUmlType *type);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);

    // Slots for owned attributes [ConnectableElement]
    void setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter);

    // Slots for owned attributes [Variable]
    void setActivityScope(QUmlActivity *activityScope);
    void setScope(QUmlStructuredActivityNode *scope);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlVariable *)
Q_DECLARE_METATYPE(QList<QUmlVariable *> *)
Q_DECLARE_METATYPE(QSet<QUmlVariable *> *)

QT_END_HEADER

#endif // QUMLVARIABLE_H

