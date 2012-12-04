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
#ifndef QTUML_QLIFELINE_H
#define QTUML_QLIFELINE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QConnectableElement;
class QValueSpecification;
class QInteraction;
class QInteractionFragment;
class QPartDecomposition;

class QLifelinePrivate;

class Q_UML_EXPORT QLifeline : public QNamedElement
{
    Q_OBJECT

    Q_PROPERTY(QConnectableElement * represents READ represents WRITE setRepresents)
    Q_PROPERTY(QPartDecomposition * decomposedAs READ decomposedAs WRITE setDecomposedAs)
    Q_PROPERTY(const QSet<QInteractionFragment *> * coveredBy READ coveredBy)
    Q_PROPERTY(QInteraction * interaction READ interaction WRITE setInteraction)
    Q_PROPERTY(QValueSpecification * selector READ selector WRITE setSelector)

    Q_DISABLE_COPY(QLifeline)
    Q_DECLARE_PRIVATE(QLifeline)

public:
    Q_INVOKABLE explicit QLifeline(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QLifeline();

    // Association ends from QLifeline
    Q_INVOKABLE QConnectableElement *represents() const;
    Q_INVOKABLE void setRepresents(QConnectableElement *represents);
    Q_INVOKABLE QPartDecomposition *decomposedAs() const;
    Q_INVOKABLE void setDecomposedAs(QPartDecomposition *decomposedAs);
    Q_INVOKABLE const QSet<QInteractionFragment *> *coveredBy() const;
    Q_INVOKABLE void addCoveredBy(QInteractionFragment *coveredBy);
    Q_INVOKABLE void removeCoveredBy(QInteractionFragment *coveredBy);
    Q_INVOKABLE QInteraction *interaction() const;
    Q_INVOKABLE void setInteraction(QInteraction *interaction);
    Q_INVOKABLE QValueSpecification *selector() const;
    Q_INVOKABLE void setSelector(QValueSpecification *selector);

protected:
    explicit QLifeline(QLifelinePrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QLifeline) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QLifeline) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QLifeline) *> *)

QT_END_HEADER

#endif // QTUML_QLIFELINE_H

