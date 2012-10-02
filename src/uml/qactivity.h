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
    Q_PROPERTY(QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(QList<QParameterSet *> * ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QList<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(QList<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(QList<QBehavior *> * redefinedBehaviors READ redefinedBehaviors)
    Q_PROPERTY(QBehavioralFeature * specification READ specification WRITE setSpecification)

    // From QActivity
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly)
    Q_PROPERTY(bool isSingleExecution READ isSingleExecution WRITE setSingleExecution)
    Q_PROPERTY(QList<QActivityEdge *> * edges READ edges)
    Q_PROPERTY(QList<QActivityGroup *> * groups READ groups)
    Q_PROPERTY(QList<QActivityNode *> * nodes READ nodes)
    Q_PROPERTY(QList<QActivityPartition *> * partitions READ partitions)
    Q_PROPERTY(QList<QStructuredActivityNode *> * structuredNodes READ structuredNodes)
    Q_PROPERTY(QList<QVariable *> * variables READ variables)

public:
    explicit QActivity(QObject *parent = 0);
    virtual ~QActivity();

    // Attributes (except those derived && !derivedUnion)
    bool isReadOnly() const;
    void setReadOnly(bool isReadOnly);
    bool isSingleExecution() const;
    void setSingleExecution(bool isSingleExecution);

    // Association-ends (except those derived && !derivedUnion)
    QList<QActivityEdge *> *edges();
    QList<QActivityGroup *> *groups();
    QList<QActivityNode *> *nodes();
    QList<QActivityPartition *> *partitions();
    QList<QStructuredActivityNode *> *structuredNodes();
    QList<QVariable *> *variables();

private:
    Q_DISABLE_COPY(QActivity)
    Q_DECLARE_PRIVATE(QActivity)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QActivity *>)
Q_DECLARE_METATYPE(QList<QtUml::QActivity *> *)

QT_END_HEADER

#endif // QTUML_QACTIVITY_H

