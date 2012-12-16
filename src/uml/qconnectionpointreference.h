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
#include <QtUml/QVertex>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QPseudostate;
class QState;

class QConnectionPointReferencePrivate;

class Q_UML_EXPORT QConnectionPointReference : public QVertex
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QPseudostate *> * exits READ exits)
    Q_PROPERTY(QState * state READ state WRITE setState)
    Q_PROPERTY(const QSet<QPseudostate *> * entries READ entries)

    Q_DISABLE_COPY(QConnectionPointReference)
    Q_DECLARE_PRIVATE(QConnectionPointReference)

public:
    Q_INVOKABLE explicit QConnectionPointReference(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QConnectionPointReference();

    // Association ends from QConnectionPointReference
    Q_INVOKABLE const QSet<QPseudostate *> *exits() const;
    Q_INVOKABLE void addExit(QPseudostate *exit);
    Q_INVOKABLE void removeExit(QPseudostate *exit);
    Q_INVOKABLE QState *state() const;
    Q_INVOKABLE void setState(QState *state);
    Q_INVOKABLE const QSet<QPseudostate *> *entries() const;
    Q_INVOKABLE void addEntry(QPseudostate *entry);
    Q_INVOKABLE void removeEntry(QPseudostate *entry);
    virtual void registerMetaTypes() const;

protected:
    explicit QConnectionPointReference(QConnectionPointReferencePrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QConnectionPointReference) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QConnectionPointReference) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QConnectionPointReference) *> *)

QT_END_HEADER

#endif // QTUML_QCONNECTIONPOINTREFERENCE_H

