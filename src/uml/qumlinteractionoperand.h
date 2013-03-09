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
#ifndef QUMLINTERACTIONOPERAND_H
#define QUMLINTERACTIONOPERAND_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlNamespace>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInteractionConstraint;

class QUmlInteractionOperandPrivate;

class Q_UML_EXPORT QUmlInteractionOperand : public QWrappedObject
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

    Q_PROPERTY(QSet<QUmlGeneralOrdering *> generalOrderings READ generalOrderings)
    Q_PROPERTY(QUmlInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QSet<QUmlLifeline *> covered READ covered)
    Q_PROPERTY(QUmlInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)

    Q_PROPERTY(QSet<QUmlPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QUmlNamedElement *> members READ members)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QUmlElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QList<QUmlInteractionFragment *> fragments READ fragments)
    Q_PROPERTY(QUmlInteractionConstraint * guard READ guard WRITE setGuard)

    Q_DISABLE_COPY(QUmlInteractionOperand)
    Q_DECLARE_PRIVATE(QUmlInteractionOperand)

public:
    Q_INVOKABLE explicit QUmlInteractionOperand(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInteractionOperand();

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

    // Association ends from aggregated QUmlInteractionFragment
    Q_INVOKABLE QSet<QUmlGeneralOrdering *> generalOrderings() const;
    Q_INVOKABLE void addGeneralOrdering(QUmlGeneralOrdering *generalOrdering);
    Q_INVOKABLE void removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering);
    Q_INVOKABLE QUmlInteraction *enclosingInteraction() const;
    Q_INVOKABLE void setEnclosingInteraction(QUmlInteraction *enclosingInteraction);
    Q_INVOKABLE QSet<QUmlLifeline *> covered() const;
    Q_INVOKABLE void addCovered(QUmlLifeline *covered);
    Q_INVOKABLE void removeCovered(QUmlLifeline *covered);
    Q_INVOKABLE QUmlInteractionOperand *enclosingOperand() const;
    Q_INVOKABLE void setEnclosingOperand(QUmlInteractionOperand *enclosingOperand);

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

    // Association ends from QUmlInteractionOperand
    Q_INVOKABLE QList<QUmlInteractionFragment *> fragments() const;
    Q_INVOKABLE void addFragment(QUmlInteractionFragment *fragment);
    Q_INVOKABLE void removeFragment(QUmlInteractionFragment *fragment);
    Q_INVOKABLE QUmlInteractionConstraint *guard() const;
    Q_INVOKABLE void setGuard(QUmlInteractionConstraint *guard);

    virtual void setPropertyData();

protected:
    explicit QUmlInteractionOperand(QUmlInteractionOperandPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlInteractionFragment *_wrappedUmlInteractionFragment;
    QUmlNamespace *_wrappedUmlNamespace;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERACTIONOPERAND_H

