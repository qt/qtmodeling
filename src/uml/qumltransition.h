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
#ifndef QUMLTRANSITION_H
#define QUMLTRANSITION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlNamespace>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlTrigger;
class QUmlVertex;
class QUmlStateMachine;
class QUmlClassifier;
class QUmlTransition;
class QUmlRegion;
class QUmlConstraint;
class QUmlBehavior;

class QUmlTransitionPrivate;

class Q_UML_EXPORT QUmlTransition : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)

    Q_PROPERTY(QSet<QUmlPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QUmlNamedElement *> members READ members)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QUmlElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QtUml::TransitionKind kind READ kind WRITE setKind RESET unsetKind)
    Q_PROPERTY(QUmlRegion * container READ container WRITE setContainer)
    Q_PROPERTY(QUmlClassifier * redefinitionContext READ redefinitionContext STORED false)
    Q_PROPERTY(QSet<QUmlTrigger *> triggers READ triggers)
    Q_PROPERTY(QUmlConstraint * guard READ guard WRITE setGuard)
    Q_PROPERTY(QUmlBehavior * effect READ effect WRITE setEffect)
    Q_PROPERTY(QUmlVertex * target READ target WRITE setTarget)
    Q_PROPERTY(QUmlTransition * redefinedTransition READ redefinedTransition WRITE setRedefinedTransition)
    Q_PROPERTY(QUmlVertex * source READ source WRITE setSource)

    Q_DISABLE_COPY(QUmlTransition)
    Q_DECLARE_PRIVATE(QUmlTransition)

public:
    Q_INVOKABLE explicit QUmlTransition(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlTransition();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Attributes from aggregated QUmlRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QUmlRedefinableElement
    Q_INVOKABLE QSet<QUmlRedefinableElement *> redefinedElements() const;

    // Association ends from aggregated QUmlNamespace
    Q_INVOKABLE QSet<QUmlPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE QSet<QUmlNamedElement *> members() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QUmlElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE QSet<QUmlConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE QSet<QUmlNamedElement *> ownedMembers() const;

    // Attributes from QUmlTransition
    Q_INVOKABLE QtUml::TransitionKind kind() const;
    Q_INVOKABLE void setKind(QtUml::TransitionKind kind);
    Q_INVOKABLE void unsetKind();

    // Association ends from QUmlTransition
    Q_INVOKABLE QUmlRegion *container() const;
    Q_INVOKABLE void setContainer(QUmlRegion *container);
    Q_INVOKABLE QUmlClassifier *redefinitionContext() const;
    Q_INVOKABLE QSet<QUmlTrigger *> triggers() const;
    Q_INVOKABLE void addTrigger(QUmlTrigger *trigger);
    Q_INVOKABLE void removeTrigger(QUmlTrigger *trigger);
    Q_INVOKABLE QUmlConstraint *guard() const;
    Q_INVOKABLE void setGuard(QUmlConstraint *guard);
    Q_INVOKABLE QUmlBehavior *effect() const;
    Q_INVOKABLE void setEffect(QUmlBehavior *effect);
    Q_INVOKABLE QUmlVertex *target() const;
    Q_INVOKABLE void setTarget(QUmlVertex *target);
    Q_INVOKABLE QUmlTransition *redefinedTransition() const;
    Q_INVOKABLE void setRedefinedTransition(QUmlTransition *redefinedTransition);
    Q_INVOKABLE QUmlVertex *source() const;
    Q_INVOKABLE void setSource(QUmlVertex *source);

    // Operations
    Q_INVOKABLE QUmlStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(const QUmlRedefinableElement *redefinee) const;

    virtual void setPropertyData();

protected:
    explicit QUmlTransition(QUmlTransitionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlRedefinableElement *_wrappedUmlRedefinableElement;
    QUmlNamespace *_wrappedUmlNamespace;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLTRANSITION_H

