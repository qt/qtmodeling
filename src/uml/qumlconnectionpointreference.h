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
#ifndef QUMLCONNECTIONPOINTREFERENCE_H
#define QUMLCONNECTIONPOINTREFERENCE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlVertex>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlPseudostate;
class QUmlState;

class QUmlConnectionPointReferencePrivate;

class Q_UML_EXPORT QUmlConnectionPointReference : public QUmlVertex
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlPseudostate *> exits READ exits)
    Q_PROPERTY(QUmlState * state READ state WRITE setState)
    Q_PROPERTY(QSet<QUmlPseudostate *> entries READ entries)

    Q_DISABLE_COPY(QUmlConnectionPointReference)
    Q_DECLARE_PRIVATE(QUmlConnectionPointReference)

public:
    Q_INVOKABLE explicit QUmlConnectionPointReference(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlConnectionPointReference();

    // Association ends from QUmlConnectionPointReference
    Q_INVOKABLE QSet<QUmlPseudostate *> exits() const;
    Q_INVOKABLE void addExit(QUmlPseudostate *exit);
    Q_INVOKABLE void removeExit(QUmlPseudostate *exit);
    Q_INVOKABLE QUmlState *state() const;
    Q_INVOKABLE void setState(QUmlState *state);
    Q_INVOKABLE QSet<QUmlPseudostate *> entries() const;
    Q_INVOKABLE void addEntry(QUmlPseudostate *entry);
    Q_INVOKABLE void removeEntry(QUmlPseudostate *entry);

    virtual void setPropertyData();

protected:
    explicit QUmlConnectionPointReference(QUmlConnectionPointReferencePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCONNECTIONPOINTREFERENCE_H

