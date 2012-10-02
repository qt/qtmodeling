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

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QCombinedFragmentPrivate;
class QGate;
class QInteractionOperand;

class Q_UML_EXPORT QCombinedFragment : public QObject, public QInteractionFragment
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QList<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QInteractionFragment
    Q_PROPERTY(QList<QLifeline *> * covered READ covered)
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)
    Q_PROPERTY(QList<QGeneralOrdering *> * generalOrderings READ generalOrderings)

    // From QCombinedFragment
    Q_PROPERTY(QtUml::InteractionOperatorKind interactionOperator READ interactionOperator WRITE setInteractionOperator)
    Q_PROPERTY(QList<QGate *> * cfragmentGates READ cfragmentGates)
    Q_PROPERTY(QList<QInteractionOperand *> * operands READ operands)

public:
    explicit QCombinedFragment(QObject *parent = 0);
    virtual ~QCombinedFragment();

    // Attributes (except those derived && !derivedUnion)
    QtUml::InteractionOperatorKind interactionOperator() const;
    void setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator);

    // Association-ends (except those derived && !derivedUnion)
    QList<QGate *> *cfragmentGates();
    QList<QInteractionOperand *> *operands();

private:
    Q_DISABLE_COPY(QCombinedFragment)
    Q_DECLARE_PRIVATE(QCombinedFragment)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QCombinedFragment *>)
Q_DECLARE_METATYPE(QList<QtUml::QCombinedFragment *> *)

QT_END_HEADER

#endif // QTUML_QCOMBINEDFRAGMENT_H

