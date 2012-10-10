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
#ifndef QTUML_QOBJECTNODE_H
#define QTUML_QOBJECTNODE_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtUml/QActivityNode>
#include <QtUml/QTypedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QObjectNodePrivate;
class QState;
class QBehavior;
class QValueSpecification;

class Q_UML_EXPORT QObjectNode : public QActivityNode, public QTypedElement
{
    Q_DISABLE_COPY(QObjectNode)
    QTUML_DECLARE_PRIVATE(QObjectNode)

public:
    virtual ~QObjectNode();

    // Attributes
    bool isControlType() const;
    void setControlType(bool isControlType);
    QtUml::ObjectNodeOrderingKind ordering() const;
    void setOrdering(QtUml::ObjectNodeOrderingKind ordering);

    // Association-ends
    QValueSpecification *upperBound() const;
    void setUpperBound(const QValueSpecification *upperBound);
    QBehavior *selection() const;
    void setSelection(const QBehavior *selection);
    const QSet<QState *> *inState() const;
    void addInState(const QState *inState);
    void removeInState(const QState *inState);

protected:
    explicit QObjectNode();
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QOBJECTNODE_H

