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
#ifndef QTUML_QREADISCLASSIFIEDOBJECTACTION_H
#define QTUML_QREADISCLASSIFIEDOBJECTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QReadIsClassifiedObjectActionPrivate;
class QClassifier;
class QInputPin;
class QOutputPin;

class Q_UML_EXPORT QReadIsClassifiedObjectAction : public QObject, public QAction
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

    // From QExecutableNode
    Q_PROPERTY(const QSet<QExceptionHandler *> * handlers READ handlers)

    // From QAction
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant)
    Q_PROPERTY(QClassifier * context READ context)
    Q_PROPERTY(const QList<QInputPin *> * inputs READ inputs)
    Q_PROPERTY(const QSet<QConstraint *> * localPostconditions READ localPostconditions)
    Q_PROPERTY(const QSet<QConstraint *> * localPreconditions READ localPreconditions)
    Q_PROPERTY(const QList<QOutputPin *> * outputs READ outputs)

    // From QReadIsClassifiedObjectAction
    Q_PROPERTY(bool isDirect READ isDirect WRITE setDirect)
    Q_PROPERTY(QClassifier * classifier READ classifier WRITE setClassifier)
    Q_PROPERTY(QInputPin * object READ object WRITE setObject)
    Q_PROPERTY(QOutputPin * result READ result WRITE setResult)

    Q_DISABLE_COPY(QReadIsClassifiedObjectAction)
    Q_DECLARE_PRIVATE(QReadIsClassifiedObjectAction)

public:
    explicit QReadIsClassifiedObjectAction(QObject *parent = 0);
    virtual ~QReadIsClassifiedObjectAction();

    // Attributes
    bool isDirect() const;
    void setDirect(bool isDirect);

    // Association-ends
    QClassifier *classifier() const;
    void setClassifier(const QClassifier *classifier);
    QInputPin *object() const;
    void setObject(const QInputPin *object);
    QOutputPin *result() const;
    void setResult(const QOutputPin *result);

private:
    QReadIsClassifiedObjectActionPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QReadIsClassifiedObjectAction) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QReadIsClassifiedObjectAction) *> *)

QT_END_HEADER

#endif // QTUML_QREADISCLASSIFIEDOBJECTACTION_H

