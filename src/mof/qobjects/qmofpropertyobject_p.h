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
#ifndef QMOFPROPERTYOBJECT_H
#define QMOFPROPERTYOBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

#include <QtMof/QtMofNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofProperty;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofPropertyObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofPropertyObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QObject *> redefinitionContexts READ redefinitionContexts)

    // Properties [Feature]
    Q_PROPERTY(QSet<QObject *> featuringClassifiers READ featuringClassifiers)
    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)

    // Properties [TypedElement]
    Q_PROPERTY(QObject * type READ type WRITE setType)

    // Properties [MultiplicityElement]
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(int lower READ lower WRITE setLower RESET unsetLower STORED false)
    Q_PROPERTY(QObject * lowerValue READ lowerValue WRITE setLowerValue)
    Q_PROPERTY(int upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(QObject * upperValue READ upperValue WRITE setUpperValue)

    // Properties [StructuralFeature]

    // Properties [Property]
    Q_PROPERTY(QtMof::AggregationKind aggregation READ aggregation WRITE setAggregation RESET unsetAggregation)
    Q_PROPERTY(QObject * association READ association WRITE setAssociation)
    Q_PROPERTY(QObject * class_ READ class_ WRITE setClass)
    Q_PROPERTY(QObject * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QString default_ READ default_ WRITE setDefault STORED false)
    Q_PROPERTY(QObject * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(bool isComposite READ isComposite WRITE setComposite STORED false)
    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived RESET unsetDerived)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion WRITE setDerivedUnion RESET unsetDerivedUnion)
    Q_PROPERTY(bool isID READ isID WRITE setID RESET unsetID)
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)
    Q_PROPERTY(QObject * opposite READ opposite WRITE setOpposite STORED false)
    Q_PROPERTY(QObject * owningAssociation READ owningAssociation WRITE setOwningAssociation)
    Q_PROPERTY(QSet<QObject *> redefinedProperties READ redefinedProperties)
    Q_PROPERTY(QSet<QObject *> subsettedProperties READ subsettedProperties)

public:
    Q_INVOKABLE explicit QMofPropertyObject(QMofProperty *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElements() const;
    Q_INVOKABLE const QSet<QObject *> redefinitionContexts() const;

    // Owned attributes [Feature]
    Q_INVOKABLE const QSet<QObject *> featuringClassifiers() const;
    Q_INVOKABLE bool isStatic() const;

    // Owned attributes [TypedElement]
    Q_INVOKABLE QObject *type() const;

    // Owned attributes [MultiplicityElement]
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE QObject *lowerValue() const;
    Q_INVOKABLE int upper() const;
    Q_INVOKABLE QObject *upperValue() const;

    // Owned attributes [StructuralFeature]

    // Owned attributes [Property]
    Q_INVOKABLE QtMof::AggregationKind aggregation() const;
    Q_INVOKABLE QObject *association() const;
    Q_INVOKABLE QObject *class_() const;
    Q_INVOKABLE QObject *datatype() const;
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE QObject *defaultValue() const;
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE bool isDerivedUnion() const;
    Q_INVOKABLE bool isID() const;
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE QObject *opposite() const;
    Q_INVOKABLE QObject *owningAssociation() const;
    Q_INVOKABLE const QSet<QObject *> redefinedProperties() const;
    Q_INVOKABLE const QSet<QObject *> subsettedProperties() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QObject *getMetaClass() const;
    Q_INVOKABLE QObject *container() const;
    Q_INVOKABLE bool isInstanceOfType(QObject *type, bool includesSubtypes) const;
    Q_INVOKABLE void delete_();

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

    // Operations [MultiplicityElement]
    Q_INVOKABLE bool includesCardinality(int C) const;
    Q_INVOKABLE bool includesMultiplicity(QObject *M) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE int lowerBound() const;
    Q_INVOKABLE int upperBound() const;

    // Operations [Property]
    Q_INVOKABLE bool isAttribute(QObject *p) const;
    Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_INVOKABLE bool isNavigable() const;
    Q_INVOKABLE QSet<QObject *> subsettingContext() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void setName(QString name);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);
    void setVisibility(QtMof::VisibilityKind visibility);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);
    void unsetLeaf();
    void Q_DECL_HIDDEN addRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN removeRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN addRedefinitionContext(QObject *redefinitionContext);
    void Q_DECL_HIDDEN removeRedefinitionContext(QObject *redefinitionContext);

    // Slots for owned attributes [Feature]
    void Q_DECL_HIDDEN addFeaturingClassifier(QObject *featuringClassifier);
    void Q_DECL_HIDDEN removeFeaturingClassifier(QObject *featuringClassifier);
    void setStatic(bool isStatic);
    void unsetStatic();

    // Slots for owned attributes [TypedElement]
    void setType(QObject *type = 0);

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

    // Slots for owned attributes [StructuralFeature]

    // Slots for owned attributes [Property]
    void setAggregation(QtMof::AggregationKind aggregation);
    void unsetAggregation();
    void setAssociation(QObject *association = 0);
    void setClass(QObject *class_ = 0);
    void setDatatype(QObject *datatype = 0);
    void setDefault(QString default_);
    void setDefaultValue(QObject *defaultValue = 0);
    void setComposite(bool isComposite);
    void setDerived(bool isDerived);
    void unsetDerived();
    void setDerivedUnion(bool isDerivedUnion);
    void unsetDerivedUnion();
    void setID(bool isID);
    void unsetID();
    void setReadOnly(bool isReadOnly);
    void unsetReadOnly();
    void setOpposite(QObject *opposite = 0);
    void setOwningAssociation(QObject *owningAssociation = 0);
    void addRedefinedProperty(QObject *redefinedProperty);
    void removeRedefinedProperty(QObject *redefinedProperty);
    void addSubsettedProperty(QObject *subsettedProperty);
    void removeSubsettedProperty(QObject *subsettedProperty);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFPROPERTYOBJECT_H

