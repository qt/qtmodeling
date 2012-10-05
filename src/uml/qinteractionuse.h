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
#ifndef QTUML_QINTERACTIONUSE_H
#define QTUML_QINTERACTIONUSE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QInteractionFragment>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QInteractionUsePrivate;
class QProperty;
class QInteraction;
class QGate;
class QValueSpecification;

class Q_UML_EXPORT QInteractionUse : public QObject, public QInteractionFragment
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QInteractionFragment
    Q_PROPERTY(const QSet<QLifeline *> * covered READ covered)
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)
    Q_PROPERTY(const QSet<QGeneralOrdering *> * generalOrderings READ generalOrderings)

    // From QInteractionUse
    Q_PROPERTY(const QSet<QGate *> * actualGates READ actualGates)
    Q_PROPERTY(const QList<QValueSpecification *> * arguments READ arguments)
    Q_PROPERTY(QInteraction * refersTo READ refersTo WRITE setRefersTo)
    Q_PROPERTY(QValueSpecification * returnValue READ returnValue WRITE setReturnValue)
    Q_PROPERTY(QProperty * returnValueRecipient READ returnValueRecipient WRITE setReturnValueRecipient)

    Q_DISABLE_COPY(QInteractionUse)
    Q_DECLARE_PRIVATE(QInteractionUse)

public:
    explicit QInteractionUse(QObject *parent = 0);
    virtual ~QInteractionUse();

    // Association-ends
    const QSet<QGate *> *actualGates() const;
    void addActualGate(const QGate *actualGate);
    void removeActualGate(const QGate *actualGate);
    const QList<QValueSpecification *> *arguments() const;
    void addArgument(const QValueSpecification *argument);
    void removeArgument(const QValueSpecification *argument);
    QInteraction *refersTo() const;
    void setRefersTo(const QInteraction *refersTo);
    QValueSpecification *returnValue() const;
    void setReturnValue(const QValueSpecification *returnValue);
    QProperty *returnValueRecipient() const;
    void setReturnValueRecipient(const QProperty *returnValueRecipient);

private:
    QInteractionUsePrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QInteractionUse) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QInteractionUse) *> *)

QT_END_HEADER

#endif // QTUML_QINTERACTIONUSE_H

