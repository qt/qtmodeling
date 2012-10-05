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
#ifndef QTUML_QOUTPUTPIN_H
#define QTUML_QOUTPUTPIN_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QPin>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QOutputPinPrivate;

class Q_UML_EXPORT QOutputPin : public QObject, public QPin
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QMultiplicityElement
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower)
    Q_PROPERTY(qint32 upper READ upper WRITE setUpper)
    Q_PROPERTY(QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)
    Q_PROPERTY(QValueSpecification * upperValue READ upperValue WRITE setUpperValue)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QActivityNode
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(const QSet<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(const QSet<QInterruptibleActivityRegion *> * inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(const QSet<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(const QSet<QActivityEdge *> * incomings READ incomings)
    Q_PROPERTY(const QSet<QActivityEdge *> * outgoings READ outgoings)
    Q_PROPERTY(const QSet<QActivityNode *> * redefinedNodes READ redefinedNodes)

    // From QTypedElement
    Q_PROPERTY(QType * type READ type WRITE setType)

    // From QObjectNode
    Q_PROPERTY(bool isControlType READ isControlType WRITE setControlType)
    Q_PROPERTY(QtUml::ObjectNodeOrderingKind ordering READ ordering WRITE setOrdering)
    Q_PROPERTY(const QSet<QState *> * inState READ inState)
    Q_PROPERTY(QBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(QValueSpecification * upperBound READ upperBound WRITE setUpperBound)

    // From QPin
    Q_PROPERTY(bool isControl READ isControl WRITE setControl)

    Q_DISABLE_COPY(QOutputPin)
    Q_DECLARE_PRIVATE(QOutputPin)

public:
    explicit QOutputPin(QObject *parent = 0);
    virtual ~QOutputPin();

private:
    QOutputPinPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QOutputPin) *> *)

QT_END_HEADER

#endif // QTUML_QOUTPUTPIN_H

