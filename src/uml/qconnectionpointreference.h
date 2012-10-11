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
#ifndef QTUML_QCONNECTIONPOINTREFERENCE_H
#define QTUML_QCONNECTIONPOINTREFERENCE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QVertex>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QConnectionPointReferencePrivate;
class QPseudostate;
class QState;

class Q_UML_EXPORT QConnectionPointReference : public QObject, public QVertex
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QVertex
    Q_PROPERTY(const QSet<QTransition *> * incomings READ incomings)
    Q_PROPERTY(QRegion * container READ container WRITE setContainer)
    Q_PROPERTY(const QSet<QTransition *> * outgoings READ outgoings)

    // From QConnectionPointReference
    Q_PROPERTY(const QSet<QPseudostate *> * exits READ exits)
    Q_PROPERTY(QState * state READ state WRITE setState)
    Q_PROPERTY(const QSet<QPseudostate *> * entries READ entries)

    Q_DISABLE_COPY(QConnectionPointReference)
    QTUML_DECLARE_PRIVATE(QConnectionPointReference)

public:
    explicit QConnectionPointReference(QObject *parent = 0);
    virtual ~QConnectionPointReference();

    // Association-ends
    const QSet<QPseudostate *> *exits() const;
    void addExit(const QPseudostate *exit);
    void removeExit(const QPseudostate *exit);
    QState *state() const;
    void setState(const QState *state);
    const QSet<QPseudostate *> *entries() const;
    void addEntry(const QPseudostate *entry);
    void removeEntry(const QPseudostate *entry);

protected:
    explicit QConnectionPointReference(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QConnectionPointReference) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QConnectionPointReference) *> *)

QT_END_HEADER

#endif // QTUML_QCONNECTIONPOINTREFERENCE_H
