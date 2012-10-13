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
#ifndef QTUML_QCOMBINEDFRAGMENT_H
#define QTUML_QCOMBINEDFRAGMENT_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QInteractionFragment>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QGate;
class QInteractionOperand;

class Q_UML_EXPORT QCombinedFragment : public QObject, public QInteractionFragment
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QInteractionFragment
    Q_PROPERTY(const QSet<QGeneralOrdering *> * generalOrderings READ generalOrderings)
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(const QSet<QLifeline *> * covered READ covered)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)

    // From QCombinedFragment
    Q_PROPERTY(QtUml::InteractionOperatorKind interactionOperator READ interactionOperator WRITE setInteractionOperator)
    Q_PROPERTY(const QSet<QGate *> * cfragmentGates READ cfragmentGates)
    Q_PROPERTY(const QList<QInteractionOperand *> * operands READ operands)

    Q_DISABLE_COPY(QCombinedFragment)

public:
    explicit QCombinedFragment(QObject *parent = 0);
    virtual ~QCombinedFragment();

    // Attributes
    QtUml::InteractionOperatorKind interactionOperator() const;
    void setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator);

    // Association-ends
    const QSet<QGate *> *cfragmentGates() const;
    void addCfragmentGate(QGate *cfragmentGate);
    void removeCfragmentGate(QGate *cfragmentGate);
    const QList<QInteractionOperand *> *operands() const;
    void addOperand(QInteractionOperand *operand);
    void removeOperand(QInteractionOperand *operand);

protected:
    explicit QCombinedFragment(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QCombinedFragment) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QCombinedFragment) *> *)

QT_END_HEADER

#endif // QTUML_QCOMBINEDFRAGMENT_H

