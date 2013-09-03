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
#ifndef QUMLOPERATIONOBJECT_H
#define QUMLOPERATIONOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlOperation;
class Q_UML_EXPORT QUmlOperationObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElement)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [TemplateableElement]
    Q_PROPERTY(QObject * ownedTemplateSignature READ ownedTemplateSignature)
    Q_PROPERTY(QSet<QObject *> templateBinding READ templateBinding)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QObject * nameExpression READ nameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QObject *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QObject *> member READ member)
    Q_PROPERTY(QSet<QObject *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QObject *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QObject *> packageImport READ packageImport)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElement READ redefinedElement)
    Q_PROPERTY(QSet<QObject *> redefinitionContext READ redefinitionContext)

    // Properties [Feature]
    Q_PROPERTY(QSet<QObject *> featuringClassifier READ featuringClassifier)
    Q_PROPERTY(bool isStatic READ isStatic)

    // Properties [BehavioralFeature]
    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract)
    Q_PROPERTY(QSet<QObject *> method READ method)
    Q_PROPERTY(QSet<QObject *> ownedParameterSet READ ownedParameterSet)

    // Properties [ParameterableElement]
    Q_PROPERTY(QObject * owningTemplateParameter READ owningTemplateParameter)

    // Properties [Operation]
    Q_PROPERTY(QObject * bodyCondition READ bodyCondition)
    Q_PROPERTY(QObject * class_ READ class_)
    Q_PROPERTY(QObject * datatype READ datatype)
    Q_PROPERTY(QObject * interface_ READ interface_)
    Q_PROPERTY(bool isOrdered READ isOrdered)
    Q_PROPERTY(bool isQuery READ isQuery)
    Q_PROPERTY(bool isUnique READ isUnique)
    Q_PROPERTY(int lower READ lower)
    Q_PROPERTY(QList<QObject *> ownedParameter READ ownedParameter)
    Q_PROPERTY(QSet<QObject *> postcondition READ postcondition)
    Q_PROPERTY(QSet<QObject *> precondition READ precondition)
    Q_PROPERTY(QSet<QObject *> raisedException READ raisedException)
    Q_PROPERTY(QSet<QObject *> redefinedOperation READ redefinedOperation)
    Q_PROPERTY(QObject * templateParameter READ templateParameter)
    Q_PROPERTY(QObject * type READ type)
    Q_PROPERTY(int upper READ upper)

public:
    Q_INVOKABLE explicit QUmlOperationObject(QUmlOperation *qModelingObject);
    virtual ~QUmlOperationObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComment() const;
    Q_INVOKABLE const QSet<QObject *> ownedElement() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [TemplateableElement]
    Q_INVOKABLE QObject *ownedTemplateSignature() const;
    Q_INVOKABLE const QSet<QObject *> templateBinding() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImport() const;
    Q_INVOKABLE const QSet<QObject *> importedMember() const;
    Q_INVOKABLE const QSet<QObject *> member() const;
    Q_INVOKABLE const QSet<QObject *> ownedMember() const;
    Q_INVOKABLE const QSet<QObject *> ownedRule() const;
    Q_INVOKABLE const QSet<QObject *> packageImport() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElement() const;
    Q_INVOKABLE const QSet<QObject *> redefinitionContext() const;

    // Owned attributes [Feature]
    Q_INVOKABLE const QSet<QObject *> featuringClassifier() const;
    Q_INVOKABLE bool isStatic() const;

    // Owned attributes [BehavioralFeature]
    Q_INVOKABLE QtUml::CallConcurrencyKind concurrency() const;
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE const QSet<QObject *> method() const;
    Q_INVOKABLE const QSet<QObject *> ownedParameterSet() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QObject *owningTemplateParameter() const;

    // Owned attributes [Operation]
    Q_INVOKABLE QObject *bodyCondition() const;
    Q_INVOKABLE QObject *class_() const;
    Q_INVOKABLE QObject *datatype() const;
    Q_INVOKABLE QObject *interface_() const;
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isQuery() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE const QList<QObject *> ownedParameter() const;
    Q_INVOKABLE const QSet<QObject *> postcondition() const;
    Q_INVOKABLE const QSet<QObject *> precondition() const;
    Q_INVOKABLE const QSet<QObject *> raisedException() const;
    Q_INVOKABLE const QSet<QObject *> redefinedOperation() const;
    Q_INVOKABLE QObject *templateParameter() const;
    Q_INVOKABLE QObject *type() const;
    Q_INVOKABLE int upper() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [TemplateableElement]
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE QSet<QObject *> parameterableElements() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QObject *> excludeCollisions(QSet<QObject *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_INVOKABLE QSet<QObject *> importMembers(QSet<QObject *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

    // Operations [BehavioralFeature]
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QObject *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

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

    // Slots for owned attributes [TemplateableElement]
    void setOwnedTemplateSignature(QObject *ownedTemplateSignature = 0);
    void addTemplateBinding(QObject *templateBinding);
    void removeTemplateBinding(QObject *templateBinding);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);
    void setVisibility(QtUml::VisibilityKind visibility);

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

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);
    void Q_DECL_HIDDEN addRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN removeRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN addRedefinitionContext(QObject *redefinitionContext);
    void Q_DECL_HIDDEN removeRedefinitionContext(QObject *redefinitionContext);

    // Slots for owned attributes [Feature]
    void Q_DECL_HIDDEN addFeaturingClassifier(QObject *featuringClassifier);
    void Q_DECL_HIDDEN removeFeaturingClassifier(QObject *featuringClassifier);
    void setStatic(bool isStatic);

    // Slots for owned attributes [BehavioralFeature]
    void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    void setAbstract(bool isAbstract);
    void addMethod(QObject *method);
    void removeMethod(QObject *method);
    void addOwnedParameterSet(QObject *ownedParameterSet);
    void removeOwnedParameterSet(QObject *ownedParameterSet);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QObject *owningTemplateParameter = 0);

    // Slots for owned attributes [Operation]
    void setBodyCondition(QObject *bodyCondition = 0);
    void setClass(QObject *class_ = 0);
    void setDatatype(QObject *datatype = 0);
    void setInterface(QObject *interface_ = 0);
    void Q_DECL_HIDDEN setOrdered(bool isOrdered);
    void setQuery(bool isQuery);
    void Q_DECL_HIDDEN setUnique(bool isUnique);
    void Q_DECL_HIDDEN setLower(int lower);
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
    void setTemplateParameter(QObject *templateParameter = 0);
    void Q_DECL_HIDDEN setType(QObject *type = 0);
    void Q_DECL_HIDDEN setUpper(int upper);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOPERATIONOBJECT_H

