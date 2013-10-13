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
#ifndef QMOFOPERATIONOBJECT_H
#define QMOFOPERATIONOBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

#include <QtMof/QtMofNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofOperation;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofOperationObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofOperationObject)
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

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QObject *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QObject *> members READ members)
    Q_PROPERTY(QSet<QObject *> ownedMembers READ ownedMembers)
    Q_PROPERTY(QSet<QObject *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QObject *> packageImports READ packageImports)

    // Properties [BehavioralFeature]

    // Properties [Operation]
    Q_PROPERTY(QObject * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(QObject * class_ READ class_ WRITE setClass)
    Q_PROPERTY(QObject * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(bool isOrdered READ isOrdered RESET unsetOrdered STORED false)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery RESET unsetQuery)
    Q_PROPERTY(bool isUnique READ isUnique RESET unsetUnique STORED false)
    Q_PROPERTY(int lower READ lower RESET unsetLower STORED false)
    Q_PROPERTY(QList<QObject *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QSet<QObject *> postconditions READ postconditions)
    Q_PROPERTY(QSet<QObject *> preconditions READ preconditions)
    Q_PROPERTY(QSet<QObject *> raisedExceptions READ raisedExceptions)
    Q_PROPERTY(QSet<QObject *> redefinedOperations READ redefinedOperations)
    Q_PROPERTY(QObject * type READ type STORED false)
    Q_PROPERTY(int upper READ upper RESET unsetUpper STORED false)

public:
    Q_INVOKABLE explicit QMofOperationObject(QMofOperation *modelingElement);

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

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImports() const;
    Q_INVOKABLE const QSet<QObject *> importedMembers() const;
    Q_INVOKABLE const QSet<QObject *> members() const;
    Q_INVOKABLE const QSet<QObject *> ownedMembers() const;
    Q_INVOKABLE const QSet<QObject *> ownedRules() const;
    Q_INVOKABLE const QSet<QObject *> packageImports() const;

    // Owned attributes [BehavioralFeature]

    // Owned attributes [Operation]
    Q_INVOKABLE QObject *bodyCondition() const;
    Q_INVOKABLE QObject *class_() const;
    Q_INVOKABLE QObject *datatype() const;
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isQuery() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE const QList<QObject *> ownedParameters() const;
    Q_INVOKABLE const QSet<QObject *> postconditions() const;
    Q_INVOKABLE const QSet<QObject *> preconditions() const;
    Q_INVOKABLE const QSet<QObject *> raisedExceptions() const;
    Q_INVOKABLE const QSet<QObject *> redefinedOperations() const;
    Q_INVOKABLE QObject *type() const;
    Q_INVOKABLE int upper() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QObject *getMetaClass() const;
    Q_INVOKABLE QObject *container() const;
    Q_INVOKABLE bool isInstanceOfType(QObject *type, bool includesSubtypes) const;
    Q_INVOKABLE void delete_();

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QString separator() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QObject *> excludeCollisions(QObject *imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_INVOKABLE QSet<QObject *> importMembers(QObject *imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [BehavioralFeature]
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;

    // Operations [Operation]
    Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_INVOKABLE QSet<QObject *> returnResult() const;

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

    // Slots for owned attributes [Namespace]
    void addElementImport(QObject *elementImport);
    void removeElementImport(QObject *elementImport);
    void Q_DECL_HIDDEN addImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN removeImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN addMember(QObject *member);
    void Q_DECL_HIDDEN removeMember(QObject *member);
    void Q_DECL_HIDDEN addOwnedMember(QObject *ownedMember);
    void Q_DECL_HIDDEN removeOwnedMember(QObject *ownedMember);
    void addOwnedRule(QObject *ownedRule);
    void removeOwnedRule(QObject *ownedRule);
    void addPackageImport(QObject *packageImport);
    void removePackageImport(QObject *packageImport);

    // Slots for owned attributes [BehavioralFeature]

    // Slots for owned attributes [Operation]
    void setBodyCondition(QObject *bodyCondition = 0);
    void setClass(QObject *class_ = 0);
    void setDatatype(QObject *datatype = 0);
    void Q_DECL_HIDDEN setOrdered(bool isOrdered);
    void unsetOrdered();
    void setQuery(bool isQuery);
    void unsetQuery();
    void Q_DECL_HIDDEN setUnique(bool isUnique);
    void unsetUnique();
    void Q_DECL_HIDDEN setLower(int lower);
    void unsetLower();
    void addOwnedParameter(QObject *ownedParameter);
    void removeOwnedParameter(QObject *ownedParameter);
    void addPostcondition(QObject *postcondition);
    void removePostcondition(QObject *postcondition);
    void addPrecondition(QObject *precondition);
    void removePrecondition(QObject *precondition);
    void addRaisedException(QObject *raisedException);
    void removeRaisedException(QObject *raisedException);
    void addRedefinedOperation(QObject *redefinedOperation);
    void removeRedefinedOperation(QObject *redefinedOperation);
    void Q_DECL_HIDDEN setType(QObject *type = 0);
    void Q_DECL_HIDDEN setUpper(int upper);
    void unsetUpper();

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFOPERATIONOBJECT_H

