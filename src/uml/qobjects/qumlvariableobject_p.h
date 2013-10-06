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
#ifndef QUMLVARIABLEOBJECT_H
#define QUMLVARIABLEOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlVariable;
class Q_UML_EXPORT QUmlVariableObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [MultiplicityElement]
    Q_PROPERTY(bool isOrdered READ isOrdered RESET unsetOrdered)
    Q_PROPERTY(bool isUnique READ isUnique RESET unsetUnique)
    Q_PROPERTY(int lower READ lower RESET unsetLower STORED false)
    Q_PROPERTY(QObject * lowerValue READ lowerValue)
    Q_PROPERTY(int upper READ upper RESET unsetUpper STORED false)
    Q_PROPERTY(QObject * upperValue READ upperValue)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependencies)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QObject * nameExpression READ nameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [TypedElement]
    Q_PROPERTY(QObject * type READ type)

    // Properties [ParameterableElement]
    Q_PROPERTY(QObject * owningTemplateParameter READ owningTemplateParameter)

    // Properties [ConnectableElement]
    Q_PROPERTY(QList<QObject *> end READ ends STORED false)
    Q_PROPERTY(QObject * templateParameter READ templateParameter)

    // Properties [Variable]
    Q_PROPERTY(QObject * activityScope READ activityScope)
    Q_PROPERTY(QObject * scope READ scope)

public:
    Q_INVOKABLE explicit QUmlVariableObject(QUmlVariable *qModelingObject);
    virtual ~QUmlVariableObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [MultiplicityElement]
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE QObject *lowerValue() const;
    Q_INVOKABLE int upper() const;
    Q_INVOKABLE QObject *upperValue() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependencies() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [TypedElement]
    Q_INVOKABLE QObject *type() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QObject *owningTemplateParameter() const;

    // Owned attributes [ConnectableElement]
    Q_INVOKABLE const QList<QObject *> ends() const;
    Q_INVOKABLE QObject *templateParameter() const;

    // Owned attributes [Variable]
    Q_INVOKABLE QObject *activityScope() const;
    Q_INVOKABLE QObject *scope() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [MultiplicityElement]
    Q_INVOKABLE bool compatibleWith(QObject *other) const;
    Q_INVOKABLE bool includesCardinality(int C) const;
    Q_INVOKABLE bool includesMultiplicity(QObject *M) const;
    Q_INVOKABLE bool is(int lowerbound, int upperbound) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE int lowerBound() const;
//    Q_INVOKABLE int upperBound() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QObject *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [Variable]
    Q_INVOKABLE bool isAccessibleBy(QObject *a) const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [MultiplicityElement]
    void setOrdered(bool isOrdered);
    void unsetOrdered();
    void setUnique(bool isUnique);
    void unsetUnique();
    void setLower(int lower);
    void unsetLower();
    void setLowerValue(QObject *lowerValue = 0);
    void setUpper(int upper);
    void unsetUpper();
    void setUpperValue(QObject *upperValue = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [TypedElement]
    void setType(QObject *type = 0);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QObject *owningTemplateParameter = 0);

    // Slots for owned attributes [ConnectableElement]
    void Q_DECL_HIDDEN addEnd(QObject *end);
    void Q_DECL_HIDDEN removeEnd(QObject *end);
    void setTemplateParameter(QObject *templateParameter = 0);

    // Slots for owned attributes [Variable]
    void setActivityScope(QObject *activityScope = 0);
    void setScope(QObject *scope = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLVARIABLEOBJECT_H

