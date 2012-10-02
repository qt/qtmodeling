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
#ifndef QTUML_QACTIVITY_H
#define QTUML_QACTIVITY_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QBehavior>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QActivityPrivate;
class QStructuredActivityNode;
class QVariable;
class QActivityPartition;
class QActivityGroup;
class QActivityEdge;
class QActivityNode;

class Q_UML_EXPORT QActivity : public QBehavior
{
    Q_OBJECT

    // From QBehavior
    Q_PROPERTY(bool isReentrant READ isReentrant WRITE setReentrant)
    Q_PROPERTY(const QBehavioredClassifier * context READ context)
    Q_PROPERTY(QList<QParameter *> * ownedParameter READ ownedParameter)
    Q_PROPERTY(QList<QParameterSet *> * ownedParameterSet READ ownedParameterSet)
    Q_PROPERTY(QList<QConstraint *> * postcondition READ postcondition)
    Q_PROPERTY(QList<QConstraint *> * precondition READ precondition)
    Q_PROPERTY(QList<QBehavior *> * redefinedBehavior READ redefinedBehavior)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)

    // From QActivity
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly)
    Q_PROPERTY(bool isSingleExecution READ isSingleExecution WRITE setSingleExecution)
    Q_PROPERTY(QList<QActivityEdge *> * edge READ edge)
    Q_PROPERTY(QList<QActivityGroup *> * group READ group)
    Q_PROPERTY(QList<QActivityNode *> * node READ node)
    Q_PROPERTY(QList<QActivityPartition *> * partition READ partition)
    Q_PROPERTY(QList<QStructuredActivityNode *> * structuredNode READ structuredNode)
    Q_PROPERTY(QList<QVariable *> * variable READ variable)

public:
    explicit QActivity(QObject *parent = 0);
    virtual ~QActivity();

    // Attributes (except those derived && !derivedUnion)
    bool isReadOnly() const;
    void setReadOnly(bool isReadOnly);
    bool isSingleExecution() const;
    void setSingleExecution(bool isSingleExecution);

    // Association-ends (except those derived && !derivedUnion)
    QList<QActivityEdge *> *edge();
    QList<QActivityGroup *> *group();
    QList<QActivityNode *> *node();
    QList<QActivityPartition *> *partition();
    QList<QStructuredActivityNode *> *structuredNode();
    QList<QVariable *> *variable();

private:
    Q_DISABLE_COPY(QActivity)
    Q_DECLARE_PRIVATE(QActivity)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QActivity *>)
Q_DECLARE_METATYPE(QList<QtUml::QActivity *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITY_H

