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
#ifndef QTUML_QTRANSITION_H
#define QTUML_QTRANSITION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QRedefinableElement>
#include <QtUml/QNamespace>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QTrigger;
class QVertex;
class QStateMachine;
class QClassifier;
class QRegion;
class QConstraint;
class QBehavior;

class QTransitionPrivate;

class Q_UML_EXPORT QTransition : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QtUml::TransitionKind kind READ kind WRITE setKind)
    Q_PROPERTY(QConstraint * guard READ guard WRITE setGuard)
    Q_PROPERTY(QVertex * target READ target WRITE setTarget)
    Q_PROPERTY(QBehavior * effect READ effect WRITE setEffect)
    Q_PROPERTY(QRegion * container READ container WRITE setContainer)
    Q_PROPERTY(QClassifier * redefinitionContext READ redefinitionContext STORED false)
    Q_PROPERTY(QTransition * redefinedTransition READ redefinedTransition WRITE setRedefinedTransition)
    Q_PROPERTY(QVertex * source READ source WRITE setSource)
    Q_PROPERTY(const QSet<QTrigger *> * triggers READ triggers)

    Q_DISABLE_COPY(QTransition)
    Q_DECLARE_PRIVATE(QTransition)

public:
    explicit QTransition(QObject *parent = 0);
    virtual ~QTransition();

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    QString name() const;
    void setName(QString name);
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);
    QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    QNamespace *namespace_() const;
    const QSet<QDependency *> *clientDependencies() const;
    void addClientDependency(QDependency *clientDependency);
    void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QRedefinableElement
    bool isLeaf() const;
    void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    const QSet<QRedefinableElement *> *redefinedElements() const;

    // Association ends from aggregated QNamespace
    const QSet<QPackageImport *> *packageImports() const;
    void addPackageImport(QPackageImport *packageImport);
    void removePackageImport(QPackageImport *packageImport);
    const QSet<QNamedElement *> *members() const;
    const QSet<QPackageableElement *> *importedMembers() const;
    const QSet<QElementImport *> *elementImports() const;
    void addElementImport(QElementImport *elementImport);
    void removeElementImport(QElementImport *elementImport);
    const QSet<QConstraint *> *ownedRules() const;
    void addOwnedRule(QConstraint *ownedRule);
    void removeOwnedRule(QConstraint *ownedRule);
    const QSet<QNamedElement *> *ownedMembers() const;

    // Attributes from QTransition
    QtUml::TransitionKind kind() const;
    void setKind(QtUml::TransitionKind kind);

    // Association ends from QTransition
    QConstraint *guard() const;
    void setGuard(QConstraint *guard);
    QVertex *target() const;
    void setTarget(QVertex *target);
    QBehavior *effect() const;
    void setEffect(QBehavior *effect);
    QRegion *container() const;
    void setContainer(QRegion *container);
    QClassifier *redefinitionContext() const;
    QTransition *redefinedTransition() const;
    void setRedefinedTransition(QTransition *redefinedTransition);
    QVertex *source() const;
    void setSource(QVertex *source);
    const QSet<QTrigger *> *triggers() const;
    void addTrigger(QTrigger *trigger);
    void removeTrigger(QTrigger *trigger);

    // Operations
    QStateMachine *containingStateMachine() const;
    bool isConsistentWith(const QRedefinableElement *redefinee) const;

protected:
    explicit QTransition(QTransitionPrivate &dd, QObject *parent = 0);

private:
    QRedefinableElement *_wrappedRedefinableElement;
    QNamespace *_wrappedNamespace;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QTransition) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QTransition) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QTransition) *> *)

QT_END_HEADER

#endif // QTUML_QTRANSITION_H

