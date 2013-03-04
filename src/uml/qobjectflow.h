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
#ifndef QTUML_QOBJECTFLOW_H
#define QTUML_QOBJECTFLOW_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QActivityEdge>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QBehavior;

class QObjectFlowPrivate;

class Q_UML_EXPORT QObjectFlow : public QActivityEdge
{
    Q_OBJECT

    Q_PROPERTY(bool isMultireceive READ isMultireceive WRITE setMultireceive RESET unsetMultireceive)
    Q_PROPERTY(bool isMulticast READ isMulticast WRITE setMulticast RESET unsetMulticast)
    Q_PROPERTY(QBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(QBehavior * transformation READ transformation WRITE setTransformation)

    Q_DISABLE_COPY(QObjectFlow)
    Q_DECLARE_PRIVATE(QObjectFlow)

public:
    Q_INVOKABLE explicit QObjectFlow(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QObjectFlow();

    // Attributes from QObjectFlow
    Q_INVOKABLE bool isMultireceive() const;
    Q_INVOKABLE void setMultireceive(bool isMultireceive);
    Q_INVOKABLE void unsetMultireceive();
    Q_INVOKABLE bool isMulticast() const;
    Q_INVOKABLE void setMulticast(bool isMulticast);
    Q_INVOKABLE void unsetMulticast();

    // Association ends from QObjectFlow
    Q_INVOKABLE QBehavior *selection() const;
    Q_INVOKABLE void setSelection(QBehavior *selection);
    Q_INVOKABLE QBehavior *transformation() const;
    Q_INVOKABLE void setTransformation(QBehavior *transformation);

    virtual void setPropertyData();

protected:
    explicit QObjectFlow(QObjectFlowPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QOBJECTFLOW_H

