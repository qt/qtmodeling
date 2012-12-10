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
#ifndef QTUML_QREGION_H
#define QTUML_QREGION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtMof/QMofObject>
#include <QtUml/QRedefinableElement>
#include <QtUml/QNamespace>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QVertex;
class QTransition;
class QStateMachine;
class QClassifier;
class QState;

class QRegionPrivate;

class Q_UML_EXPORT QRegion : public QtMof::QMofObject
{
    Q_OBJECT

    Q_PROPERTY(QRegion * extendedRegion READ extendedRegion WRITE setExtendedRegion)
    Q_PROPERTY(const QSet<QTransition *> * transitions READ transitions)
    Q_PROPERTY(QStateMachine * stateMachine READ stateMachine WRITE setStateMachine)
    Q_PROPERTY(QState * state READ state WRITE setState)
    Q_PROPERTY(QClassifier * redefinitionContext READ redefinitionContext STORED false)
    Q_PROPERTY(const QSet<QVertex *> * subvertices READ subvertices)

    Q_DISABLE_COPY(QRegion)
    Q_DECLARE_PRIVATE(QRegion)

public:
    Q_INVOKABLE explicit QRegion(QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);
    virtual ~QRegion();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE const QSet<QDependency *> *clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE const QSet<QRedefinableElement *> *redefinedElements() const;

    // Association ends from aggregated QNamespace
    Q_INVOKABLE const QSet<QPackageImport *> *packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE const QSet<QNamedElement *> *members() const;
    Q_INVOKABLE const QSet<QPackageableElement *> *importedMembers() const;
    Q_INVOKABLE const QSet<QElementImport *> *elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE const QSet<QConstraint *> *ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE const QSet<QNamedElement *> *ownedMembers() const;

    // Association ends from QRegion
    Q_INVOKABLE QRegion *extendedRegion() const;
    Q_INVOKABLE void setExtendedRegion(QRegion *extendedRegion);
    Q_INVOKABLE const QSet<QTransition *> *transitions() const;
    Q_INVOKABLE void addTransition(QTransition *transition);
    Q_INVOKABLE void removeTransition(QTransition *transition);
    Q_INVOKABLE QStateMachine *stateMachine() const;
    Q_INVOKABLE void setStateMachine(QStateMachine *stateMachine);
    Q_INVOKABLE QState *state() const;
    Q_INVOKABLE void setState(QState *state);
    Q_INVOKABLE QClassifier *redefinitionContext() const;
    Q_INVOKABLE const QSet<QVertex *> *subvertices() const;
    Q_INVOKABLE void addSubvertex(QVertex *subvertex);
    Q_INVOKABLE void removeSubvertex(QVertex *subvertex);

    // Operations
    Q_INVOKABLE bool belongsToPSM() const;
    Q_INVOKABLE QStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(const QRegion *redefined) const;

protected:
    explicit QRegion(QRegionPrivate &dd, QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);

private:
    QRedefinableElement *_wrappedRedefinableElement;
    QNamespace *_wrappedNamespace;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QRegion) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QRegion) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QRegion) *> *)

QT_END_HEADER

#endif // QTUML_QREGION_H

