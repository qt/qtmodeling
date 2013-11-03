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
#ifndef QMOFCLASSOBJECT_H
#define QMOFCLASSOBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

#include <QtMof/QtMofNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofClass;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofClassObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofClassObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [NamedElement]
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QObject * namespace_ READ namespace_ NOTIFY namespaceChanged)
    Q_PROPERTY(QString qualifiedName READ qualifiedName NOTIFY qualifiedNameChanged STORED false)

    // Properties [PackageableElement]
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility NOTIFY visibilityChanged RESET unsetVisibility)

    // Properties [Type]
    Q_PROPERTY(QObject * package READ package WRITE setPackage NOTIFY packageChanged)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf NOTIFY isLeafChanged RESET unsetLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElements READ redefinedElements NOTIFY redefinedElementsChanged)
    Q_PROPERTY(QSet<QObject *> redefinitionContexts READ redefinitionContexts NOTIFY redefinitionContextsChanged)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImports READ elementImports NOTIFY elementImportsChanged)
    Q_PROPERTY(QSet<QObject *> importedMembers READ importedMembers NOTIFY importedMembersChanged STORED false)
    Q_PROPERTY(QSet<QObject *> members READ members NOTIFY membersChanged)
    Q_PROPERTY(QSet<QObject *> ownedMembers READ ownedMembers NOTIFY ownedMembersChanged)
    Q_PROPERTY(QSet<QObject *> ownedRules READ ownedRules NOTIFY ownedRulesChanged)
    Q_PROPERTY(QSet<QObject *> packageImports READ packageImports NOTIFY packageImportsChanged)

    // Properties [Classifier]
    Q_PROPERTY(QSet<QObject *> attributes READ attributes NOTIFY attributesChanged)
    Q_PROPERTY(QSet<QObject *> features READ features NOTIFY featuresChanged)
    Q_PROPERTY(QSet<QObject *> generalizations READ generalizations NOTIFY generalizationsChanged)
    Q_PROPERTY(QSet<QObject *> inheritedMembers READ inheritedMembers NOTIFY inheritedMembersChanged STORED false)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization NOTIFY isFinalSpecializationChanged RESET unsetFinalSpecialization)
    Q_PROPERTY(QSet<QObject *> redefinedClassifiers READ redefinedClassifiers NOTIFY redefinedClassifiersChanged)

    // Properties [Class]
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract NOTIFY isAbstractChanged RESET unsetAbstract)
    Q_PROPERTY(QList<QObject *> nestedClassifiers READ nestedClassifiers NOTIFY nestedClassifiersChanged)
    Q_PROPERTY(QList<QObject *> ownedAttributes READ ownedAttributes NOTIFY ownedAttributesChanged)
    Q_PROPERTY(QList<QObject *> ownedOperations READ ownedOperations NOTIFY ownedOperationsChanged)
    Q_PROPERTY(QSet<QObject *> superClasses READ superClasses NOTIFY superClassesChanged STORED false)

public:
    Q_INVOKABLE explicit QMofClassObject(QMofClass *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;

    // Owned attributes [Type]
    Q_INVOKABLE QObject *package() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElements() const;
    Q_INVOKABLE const QSet<QObject *> redefinitionContexts() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImports() const;
    Q_INVOKABLE const QSet<QObject *> importedMembers() const;
    Q_INVOKABLE const QSet<QObject *> members() const;
    Q_INVOKABLE const QSet<QObject *> ownedMembers() const;
    Q_INVOKABLE const QSet<QObject *> ownedRules() const;
    Q_INVOKABLE const QSet<QObject *> packageImports() const;

    // Owned attributes [Classifier]
    Q_INVOKABLE const QSet<QObject *> attributes() const;
    Q_INVOKABLE const QSet<QObject *> features() const;
    Q_INVOKABLE const QSet<QObject *> generalizations() const;
    Q_INVOKABLE const QSet<QObject *> inheritedMembers() const;
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE const QSet<QObject *> redefinedClassifiers() const;

    // Owned attributes [Class]
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE const QList<QObject *> nestedClassifiers() const;
    Q_INVOKABLE const QList<QObject *> ownedAttributes() const;
    Q_INVOKABLE const QList<QObject *> ownedOperations() const;
    Q_INVOKABLE const QSet<QObject *> superClasses() const;

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

    // Operations [Type]
    Q_INVOKABLE bool isInstance(QObject *object) const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QObject *> excludeCollisions(QObject *imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_INVOKABLE QSet<QObject *> importMembers(QObject *imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [Classifier]
    Q_INVOKABLE QSet<QObject *> allFeatures() const;
    Q_INVOKABLE QSet<QObject *> allParents() const;
    Q_INVOKABLE bool conformsTo(QObject *other) const;
    Q_INVOKABLE bool hasVisibilityOf(QObject *n) const;
    Q_INVOKABLE QSet<QObject *> inheritableMembers(QObject *c) const;
    Q_INVOKABLE bool maySpecializeType(QObject *c) const;
    Q_INVOKABLE QSet<QObject *> parents() const;

    // Operations [Class]
    Q_INVOKABLE QSet<QObject *> inherit(QSet<QObject *> inhs) const;

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

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtMof::VisibilityKind visibility);
    void unsetVisibility();

    // Slots for owned attributes [Type]
    void setPackage(QObject *package = 0);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);
    void unsetLeaf();
    void Q_DECL_HIDDEN addRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN removeRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN addRedefinitionContext(QObject *redefinitionContext);
    void Q_DECL_HIDDEN removeRedefinitionContext(QObject *redefinitionContext);

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

    // Slots for owned attributes [Classifier]
    void Q_DECL_HIDDEN addAttribute(QObject *attribute);
    void Q_DECL_HIDDEN removeAttribute(QObject *attribute);
    void Q_DECL_HIDDEN addFeature(QObject *feature);
    void Q_DECL_HIDDEN removeFeature(QObject *feature);
    void addGeneralization(QObject *generalization);
    void removeGeneralization(QObject *generalization);
    void Q_DECL_HIDDEN addInheritedMember(QObject *inheritedMember);
    void Q_DECL_HIDDEN removeInheritedMember(QObject *inheritedMember);
    void setFinalSpecialization(bool isFinalSpecialization);
    void unsetFinalSpecialization();
    void addRedefinedClassifier(QObject *redefinedClassifier);
    void removeRedefinedClassifier(QObject *redefinedClassifier);

    // Slots for owned attributes [Class]
    void setAbstract(bool isAbstract);
    void unsetAbstract();
    void addNestedClassifier(QObject *nestedClassifier);
    void removeNestedClassifier(QObject *nestedClassifier);
    void addOwnedAttribute(QObject *ownedAttribute);
    void removeOwnedAttribute(QObject *ownedAttribute);
    void addOwnedOperation(QObject *ownedOperation);
    void removeOwnedOperation(QObject *ownedOperation);
    void addSuperClass(QObject *superClass);
    void removeSuperClass(QObject *superClass);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [NamedElement]
    void nameChanged(QString name);
    void namespaceChanged(QObject *namespace_);
    void qualifiedNameChanged(QString qualifiedName);

    // Signals for owned attributes [PackageableElement]
    void visibilityChanged(QtMof::VisibilityKind visibility);

    // Signals for owned attributes [Type]
    void packageChanged(QObject *package);

    // Signals for owned attributes [RedefinableElement]
    void isLeafChanged(bool isLeaf);
    void redefinedElementsChanged(QSet<QObject *> redefinedElements);
    void redefinitionContextsChanged(QSet<QObject *> redefinitionContexts);

    // Signals for owned attributes [Namespace]
    void elementImportsChanged(QSet<QObject *> elementImports);
    void importedMembersChanged(QSet<QObject *> importedMembers);
    void membersChanged(QSet<QObject *> members);
    void ownedMembersChanged(QSet<QObject *> ownedMembers);
    void ownedRulesChanged(QSet<QObject *> ownedRules);
    void packageImportsChanged(QSet<QObject *> packageImports);

    // Signals for owned attributes [Classifier]
    void attributesChanged(QSet<QObject *> attributes);
    void featuresChanged(QSet<QObject *> features);
    void generalizationsChanged(QSet<QObject *> generalizations);
    void inheritedMembersChanged(QSet<QObject *> inheritedMembers);
    void isFinalSpecializationChanged(bool isFinalSpecialization);
    void redefinedClassifiersChanged(QSet<QObject *> redefinedClassifiers);

    // Signals for owned attributes [Class]
    void isAbstractChanged(bool isAbstract);
    void nestedClassifiersChanged(QList<QObject *> nestedClassifiers);
    void ownedAttributesChanged(QList<QObject *> ownedAttributes);
    void ownedOperationsChanged(QList<QObject *> ownedOperations);
    void superClassesChanged(QSet<QObject *> superClasses);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFCLASSOBJECT_H

