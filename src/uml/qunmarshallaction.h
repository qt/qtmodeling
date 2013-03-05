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
#ifndef QTUML_QUNMARSHALLACTION_H
#define QTUML_QUNMARSHALLACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QAction>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QInputPin;
class QOutputPin;
class QClassifier;

class QUnmarshallActionPrivate;

class Q_UML_EXPORT QUnmarshallAction : public QAction
{
    Q_OBJECT

    Q_PROPERTY(QtUml::QInputPin * object READ object WRITE setObject)
    Q_PROPERTY(QSet<QtUml::QOutputPin *> results READ results)
    Q_PROPERTY(QtUml::QClassifier * unmarshallType READ unmarshallType WRITE setUnmarshallType)

    Q_DISABLE_COPY(QUnmarshallAction)
    Q_DECLARE_PRIVATE(QUnmarshallAction)

public:
    Q_INVOKABLE explicit QUnmarshallAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUnmarshallAction();

    // Association ends from QUnmarshallAction
    Q_INVOKABLE QInputPin *object() const;
    Q_INVOKABLE void setObject(QInputPin *object);
    Q_INVOKABLE QSet<QOutputPin *> results() const;
    Q_INVOKABLE void addResult(QOutputPin *result);
    Q_INVOKABLE void removeResult(QOutputPin *result);
    Q_INVOKABLE QClassifier *unmarshallType() const;
    Q_INVOKABLE void setUnmarshallType(QClassifier *unmarshallType);

    virtual void setPropertyData();

protected:
    explicit QUnmarshallAction(QUnmarshallActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QUNMARSHALLACTION_H

