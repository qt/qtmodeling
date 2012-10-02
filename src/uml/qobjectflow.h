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
#ifndef QTUML_QOBJECTFLOW_H
#define QTUML_QOBJECTFLOW_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QActivityEdge>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QObjectFlowPrivate;
class QBehavior;

class Q_UML_EXPORT QObjectFlow : public QObject, public QActivityEdge
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

    // From QActivityEdge
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(QValueSpecification * guard READ guard WRITE setGuard)
    Q_PROPERTY(const QList<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(QList<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QInterruptibleActivityRegion * interrupts READ interrupts WRITE setInterrupts)
    Q_PROPERTY(QList<QActivityEdge *> * redefinedEdge READ redefinedEdge)
    Q_PROPERTY(QActivityNode * source READ source WRITE setSource)
    Q_PROPERTY(QActivityNode * target READ target WRITE setTarget)
    Q_PROPERTY(QValueSpecification * weight READ weight WRITE setWeight)

    // From QObjectFlow
    Q_PROPERTY(bool isMulticast READ isMulticast WRITE setMulticast)
    Q_PROPERTY(bool isMultireceive READ isMultireceive WRITE setMultireceive)
    Q_PROPERTY(QBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(QBehavior * transformation READ transformation WRITE setTransformation)

public:
    explicit QObjectFlow(QObject *parent = 0);
    virtual ~QObjectFlow();

    // Attributes (except those derived && !derivedUnion)
    bool isMulticast() const;
    void setMulticast(bool isMulticast);
    bool isMultireceive() const;
    void setMultireceive(bool isMultireceive);

    // Association-ends (except those derived && !derivedUnion)
    QBehavior *selection() const;
    void setSelection(QBehavior *selection);
    QBehavior *transformation() const;
    void setTransformation(QBehavior *transformation);

private:
    Q_DISABLE_COPY(QObjectFlow)
    Q_DECLARE_PRIVATE(QObjectFlow)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QObjectFlow *>)
Q_DECLARE_METATYPE(QList<QtUml::QObjectFlow *> *)

QT_END_HEADER

#endif // QTUML_QOBJECTFLOW_H

