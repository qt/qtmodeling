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
#ifndef QTUML_QBEHAVIOREXECUTIONSPECIFICATION_H
#define QTUML_QBEHAVIOREXECUTIONSPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QExecutionSpecification>

QT_BEGIN_HEADER


QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QBehaviorExecutionSpecificationPrivate;
class QBehavior;

class Q_UML_EXPORT QBehaviorExecutionSpecification : public QObject, public QExecutionSpecification
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

    // From QExecutionSpecification
    Q_PROPERTY(QOccurrenceSpecification * finish READ finish WRITE setFinish)
    Q_PROPERTY(QOccurrenceSpecification * start READ start WRITE setStart)

    // From QBehaviorExecutionSpecification
    Q_PROPERTY(QBehavior * behavior READ behavior WRITE setBehavior)

public:
    explicit QBehaviorExecutionSpecification(QObject *parent = 0);
    virtual ~QBehaviorExecutionSpecification();

    // Association-ends (except those derived && !derivedUnion)
    QBehavior *behavior() const;
    void setBehavior(const QBehavior *behavior);

private:
    Q_DISABLE_COPY(QBehaviorExecutionSpecification)
    Q_DECLARE_PRIVATE(QBehaviorExecutionSpecification)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QBehaviorExecutionSpecification *>)
Q_DECLARE_METATYPE(QList<QtUml::QBehaviorExecutionSpecification *> *)

QT_END_HEADER

#endif // QTUML_QBEHAVIOREXECUTIONSPECIFICATION_H

