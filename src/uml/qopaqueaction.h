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
#ifndef QTUML_QOPAQUEACTION_H
#define QTUML_QOPAQUEACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QAction>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QOpaqueActionPrivate;
class QInputPin;
class QOutputPin;

class Q_UML_EXPORT QOpaqueAction : public QObject, public QAction
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependency READ clientDependency)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QList<QRedefinableElement *> * redefinedElement READ redefinedElement)
    Q_PROPERTY(const QList<QClassifier *> * redefinitionContext READ redefinitionContext)

    // From QActivityNode
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(const QList<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(QList<QInterruptibleActivityRegion *> * inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QList<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QList<QActivityEdge *> * incoming READ incoming)
    Q_PROPERTY(QList<QActivityEdge *> * outgoing READ outgoing)
    Q_PROPERTY(QList<QActivityNode *> * redefinedNode READ redefinedNode)

    // From QExecutableNode
    Q_PROPERTY(QList<QExceptionHandler *> * handler READ handler)

    // From QAction
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant)
    Q_PROPERTY(const QClassifier * context READ context)
    Q_PROPERTY(const QList<QInputPin *> * input READ input)
    Q_PROPERTY(QList<QConstraint *> * localPostcondition READ localPostcondition)
    Q_PROPERTY(QList<QConstraint *> * localPrecondition READ localPrecondition)
    Q_PROPERTY(const QList<QOutputPin *> * output READ output)

    // From QOpaqueAction
    Q_PROPERTY(QList<QString *> body READ body)
    Q_PROPERTY(QList<QString *> language READ language)
    Q_PROPERTY(QList<QInputPin *> * inputValue READ inputValue)
    Q_PROPERTY(QList<QOutputPin *> * outputValue READ outputValue)

public:
    explicit QOpaqueAction(QObject *parent = 0);
    virtual ~QOpaqueAction();

    // Attributes (except those derived && !derivedUnion)
    QList<QString *> body();
    QList<QString *> language();

    // Association-ends (except those derived && !derivedUnion)
    QList<QInputPin *> *inputValue();
    QList<QOutputPin *> *outputValue();

private:
    Q_DISABLE_COPY(QOpaqueAction)
    Q_DECLARE_PRIVATE(QOpaqueAction)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QOpaqueAction *>)
Q_DECLARE_METATYPE(QList<QtUml::QOpaqueAction *> *)

QT_END_HEADER

#endif // QTUML_QOPAQUEACTION_H

