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
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QRedefinableElement>
#include <QtUml/QNamespace>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QVertex;
class QTransition;
class QStateMachine;
class QClassifier;
class QState;

class QRegionPrivate;

class Q_UML_EXPORT QRegion : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QtUml::QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QtUml::QElement * owner READ owner)
    Q_PROPERTY(QSet<QtUml::QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUmlNS::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QtUml::QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QtUml::QDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QtUml::QRedefinableElement *> redefinedElements READ redefinedElements)

    Q_PROPERTY(QSet<QtUml::QPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QtUml::QNamedElement *> members READ members)
    Q_PROPERTY(QSet<QtUml::QPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QtUml::QElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QtUml::QConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QtUml::QNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QtUml::QRegion * extendedRegion READ extendedRegion WRITE setExtendedRegion)
    Q_PROPERTY(QSet<QtUml::QTransition *> transitions READ transitions)
    Q_PROPERTY(QtUml::QStateMachine * stateMachine READ stateMachine WRITE setStateMachine)
    Q_PROPERTY(QtUml::QState * state READ state WRITE setState)
    Q_PROPERTY(QtUml::QClassifier * redefinitionContext READ redefinitionContext STORED false)
    Q_PROPERTY(QSet<QtUml::QVertex *> subvertices READ subvertices)

    Q_DISABLE_COPY(QRegion)
    Q_DECLARE_PRIVATE(QRegion)

public:
    Q_INVOKABLE explicit QRegion(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QRegion();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUmlNS::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUmlNS::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE QSet<QRedefinableElement *> redefinedElements() const;

    // Association ends from aggregated QNamespace
    Q_INVOKABLE QSet<QPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE QSet<QNamedElement *> members() const;
    Q_INVOKABLE QSet<QPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE QSet<QConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE QSet<QNamedElement *> ownedMembers() const;

    // Association ends from QRegion
    Q_INVOKABLE QRegion *extendedRegion() const;
    Q_INVOKABLE void setExtendedRegion(QRegion *extendedRegion);
    Q_INVOKABLE QSet<QTransition *> transitions() const;
    Q_INVOKABLE void addTransition(QTransition *transition);
    Q_INVOKABLE void removeTransition(QTransition *transition);
    Q_INVOKABLE QStateMachine *stateMachine() const;
    Q_INVOKABLE void setStateMachine(QStateMachine *stateMachine);
    Q_INVOKABLE QState *state() const;
    Q_INVOKABLE void setState(QState *state);
    Q_INVOKABLE QClassifier *redefinitionContext() const;
    Q_INVOKABLE QSet<QVertex *> subvertices() const;
    Q_INVOKABLE void addSubvertex(QVertex *subvertex);
    Q_INVOKABLE void removeSubvertex(QVertex *subvertex);

    // Operations
    Q_INVOKABLE bool belongsToPSM() const;
    Q_INVOKABLE QStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(const QRegion *redefined) const;

    virtual void setPropertyData();

protected:
    explicit QRegion(QRegionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QRedefinableElement *_wrappedRedefinableElement;
    QNamespace *_wrappedNamespace;
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QREGION_H

