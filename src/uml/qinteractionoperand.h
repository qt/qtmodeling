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
#ifndef QTUML_QINTERACTIONOPERAND_H
#define QTUML_QINTERACTIONOPERAND_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QInteractionFragment>
#include <QtUml/QNamespace>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QInteractionConstraint;

class QInteractionOperandPrivate;

class Q_UML_EXPORT QInteractionOperand : public QWrappedObject
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

    Q_PROPERTY(QSet<QtUml::QGeneralOrdering *> generalOrderings READ generalOrderings)
    Q_PROPERTY(QtUml::QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QSet<QtUml::QLifeline *> covered READ covered)
    Q_PROPERTY(QtUml::QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)

    Q_PROPERTY(QSet<QtUml::QPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QtUml::QNamedElement *> members READ members)
    Q_PROPERTY(QSet<QtUml::QPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QtUml::QElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QtUml::QConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QtUml::QNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QList<QtUml::QInteractionFragment *> fragments READ fragments)
    Q_PROPERTY(QtUml::QInteractionConstraint * guard READ guard WRITE setGuard)

    Q_DISABLE_COPY(QInteractionOperand)
    Q_DECLARE_PRIVATE(QInteractionOperand)

public:
    Q_INVOKABLE explicit QInteractionOperand(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QInteractionOperand();

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

    // Association ends from aggregated QInteractionFragment
    Q_INVOKABLE QSet<QGeneralOrdering *> generalOrderings() const;
    Q_INVOKABLE void addGeneralOrdering(QGeneralOrdering *generalOrdering);
    Q_INVOKABLE void removeGeneralOrdering(QGeneralOrdering *generalOrdering);
    Q_INVOKABLE QInteraction *enclosingInteraction() const;
    Q_INVOKABLE void setEnclosingInteraction(QInteraction *enclosingInteraction);
    Q_INVOKABLE QSet<QLifeline *> covered() const;
    Q_INVOKABLE void addCovered(QLifeline *covered);
    Q_INVOKABLE void removeCovered(QLifeline *covered);
    Q_INVOKABLE QInteractionOperand *enclosingOperand() const;
    Q_INVOKABLE void setEnclosingOperand(QInteractionOperand *enclosingOperand);

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

    // Association ends from QInteractionOperand
    Q_INVOKABLE QList<QInteractionFragment *> fragments() const;
    Q_INVOKABLE void addFragment(QInteractionFragment *fragment);
    Q_INVOKABLE void removeFragment(QInteractionFragment *fragment);
    Q_INVOKABLE QInteractionConstraint *guard() const;
    Q_INVOKABLE void setGuard(QInteractionConstraint *guard);

    virtual void setPropertyData();

protected:
    explicit QInteractionOperand(QInteractionOperandPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QInteractionFragment *_wrappedInteractionFragment;
    QNamespace *_wrappedNamespace;
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QINTERACTIONOPERAND_H

