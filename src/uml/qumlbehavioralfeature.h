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
#ifndef QUMLBEHAVIORALFEATURE_H
#define QUMLBEHAVIORALFEATURE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlbehavioralfeature_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlClassifier;
class QUmlComment;
class QUmlConstraint;
class QUmlDependency;
class QUmlElement;
class QUmlElementImport;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlPackageableElement;
class QUmlPackageImport;
class QUmlParameter;
class QUmlParameterSet;
class QUmlRedefinableElement;
class QUmlStringExpression;
class QUmlType;

class Q_UML_EXPORT QUmlBehavioralFeature : public QObject, public UmlBehavioralFeature
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QUmlElementImport *> elementImport READ elementImport)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMember READ importedMember)
    Q_PROPERTY(QSet<QUmlNamedElement *> member READ member)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMember READ ownedMember)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRule READ ownedRule)
    Q_PROPERTY(QSet<QUmlPackageImport *> packageImport READ packageImport)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElement READ redefinedElement)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContext READ redefinitionContext)

    // Properties [Feature]
    Q_PROPERTY(QSet<QUmlClassifier *> featuringClassifier READ featuringClassifier)
    Q_PROPERTY(bool isStatic READ isStatic)

    // Properties [BehavioralFeature]
    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract)
    Q_PROPERTY(QSet<QUmlBehavior *> method READ method)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameter READ ownedParameter)
    Q_PROPERTY(QSet<QUmlParameterSet *> ownedParameterSet READ ownedParameterSet)
    Q_PROPERTY(QSet<QUmlType *> raisedException READ raisedException)

public:
    Q_DECL_HIDDEN explicit QUmlBehavioralFeature(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QUmlElementImport *> elementImport() const;
    Q_INVOKABLE const QSet<QUmlPackageableElement *> importedMember() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> member() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> ownedMember() const;
    Q_INVOKABLE const QSet<QUmlConstraint *> ownedRule() const;
    Q_INVOKABLE const QSet<QUmlPackageImport *> packageImport() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QUmlRedefinableElement *> redefinedElement() const;
    Q_INVOKABLE const QSet<QUmlClassifier *> redefinitionContext() const;

    // Owned attributes [Feature]
    Q_INVOKABLE const QSet<QUmlClassifier *> featuringClassifier() const;
    Q_INVOKABLE bool isStatic() const;

    // Owned attributes [BehavioralFeature]
    Q_INVOKABLE QtUml::CallConcurrencyKind concurrency() const;
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE const QSet<QUmlBehavior *> method() const;
    Q_INVOKABLE const QList<QUmlParameter *> ownedParameter() const;
    Q_INVOKABLE const QSet<QUmlParameterSet *> ownedParameterSet() const;
    Q_INVOKABLE const QSet<QUmlType *> raisedException() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_INVOKABLE QSet<QUmlPackageableElement *> excludeCollisions(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE QSet<QString> getNamesOfMember(QUmlNamedElement *element) const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importMembers(QSet<QUmlPackageableElement *> imps) const;
    Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(QUmlRedefinableElement *redefined) const;

    // Operations [BehavioralFeature]
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [Namespace]
    void addElementImport(UmlElementImport *elementImport);
    void removeElementImport(UmlElementImport *elementImport);
    void addOwnedRule(UmlConstraint *ownedRule);
    void removeOwnedRule(UmlConstraint *ownedRule);
    void addPackageImport(UmlPackageImport *packageImport);
    void removePackageImport(UmlPackageImport *packageImport);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);

    // Slots for owned attributes [Feature]
    void setStatic(bool isStatic);

    // Slots for owned attributes [BehavioralFeature]
    void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    void setAbstract(bool isAbstract);
    void addMethod(UmlBehavior *method);
    void removeMethod(UmlBehavior *method);
    void addOwnedParameter(UmlParameter *ownedParameter);
    void removeOwnedParameter(UmlParameter *ownedParameter);
    void addOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    void removeOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    void addRaisedException(UmlType *raisedException);
    void removeRaisedException(UmlType *raisedException);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlBehavioralFeature *)
Q_DECLARE_METATYPE(QList<QUmlBehavioralFeature *> *)
Q_DECLARE_METATYPE(QSet<QUmlBehavioralFeature *> *)

QT_END_HEADER

#endif // QUMLBEHAVIORALFEATURE_H

