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
#ifndef QUMLACTIONEXECUTIONSPECIFICATIONOBJECT_H
#define QUMLACTIONEXECUTIONSPECIFICATIONOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActionExecutionSpecification;
class Q_UML_EXPORT QUmlActionExecutionSpecificationObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependencies)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QObject * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // Properties [InteractionFragment]
    Q_PROPERTY(QSet<QObject *> covered READ covered)
    Q_PROPERTY(QObject * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QObject * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)
    Q_PROPERTY(QSet<QObject *> generalOrdering READ generalOrderings)

    // Properties [ExecutionSpecification]
    Q_PROPERTY(QObject * finish READ finish WRITE setFinish)
    Q_PROPERTY(QObject * start READ start WRITE setStart)

    // Properties [ActionExecutionSpecification]
    Q_PROPERTY(QObject * action READ action WRITE setAction)

public:
    Q_INVOKABLE explicit QUmlActionExecutionSpecificationObject(QUmlActionExecutionSpecification *qModelingObject);
    virtual ~QUmlActionExecutionSpecificationObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependencies() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [InteractionFragment]
    Q_INVOKABLE const QSet<QObject *> covered() const;
    Q_INVOKABLE QObject *enclosingInteraction() const;
    Q_INVOKABLE QObject *enclosingOperand() const;
    Q_INVOKABLE const QSet<QObject *> generalOrderings() const;

    // Owned attributes [ExecutionSpecification]
    Q_INVOKABLE QObject *finish() const;
    Q_INVOKABLE QObject *start() const;

    // Owned attributes [ActionExecutionSpecification]
    Q_INVOKABLE QObject *action() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [InteractionFragment]
    void addCovered(QObject *covered);
    void removeCovered(QObject *covered);
    void setEnclosingInteraction(QObject *enclosingInteraction = 0);
    void setEnclosingOperand(QObject *enclosingOperand = 0);
    void addGeneralOrdering(QObject *generalOrdering);
    void removeGeneralOrdering(QObject *generalOrdering);

    // Slots for owned attributes [ExecutionSpecification]
    void setFinish(QObject *finish = 0);
    void setStart(QObject *start = 0);

    // Slots for owned attributes [ActionExecutionSpecification]
    void setAction(QObject *action = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTIONEXECUTIONSPECIFICATIONOBJECT_H

