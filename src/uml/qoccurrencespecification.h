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
#ifndef QTUML_QOCCURRENCESPECIFICATION_H
#define QTUML_QOCCURRENCESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QInteractionFragment>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QOccurrenceSpecificationPrivate;
class QLifeline;
class QGeneralOrdering;

class Q_UML_EXPORT QOccurrenceSpecification : public QObject, public QInteractionFragment
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

    // From QInteractionFragment
    Q_PROPERTY(QInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)
    Q_PROPERTY(QList<QGeneralOrdering *> * generalOrdering READ generalOrdering)

    // From QOccurrenceSpecification
    Q_PROPERTY(QLifeline * covered READ covered WRITE setCovered)
    Q_PROPERTY(QList<QGeneralOrdering *> * toAfter READ toAfter)
    Q_PROPERTY(QList<QGeneralOrdering *> * toBefore READ toBefore)

public:
    explicit QOccurrenceSpecification(QObject *parent = 0);
    virtual ~QOccurrenceSpecification();

    // Association-ends (except those derived && !derivedUnion)
    QLifeline *covered() const;
    void setCovered(QLifeline *covered);
    QList<QGeneralOrdering *> *toAfter();
    QList<QGeneralOrdering *> *toBefore();

private:
    Q_DISABLE_COPY(QOccurrenceSpecification)
    Q_DECLARE_PRIVATE(QOccurrenceSpecification)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QOccurrenceSpecification *>)
Q_DECLARE_METATYPE(QList<QtUml::QOccurrenceSpecification *> *)

QT_END_HEADER

#endif // QTUML_QOCCURRENCESPECIFICATION_H

