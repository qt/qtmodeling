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

    // From QObjectFlow
    Q_PROPERTY(bool isMultireceive READ isMultireceive WRITE setMultireceive)
    Q_PROPERTY(bool isMulticast READ isMulticast WRITE setMulticast)
    Q_PROPERTY(QBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(QBehavior * transformation READ transformation WRITE setTransformation)

    Q_DISABLE_COPY(QObjectFlow)
    Q_DECLARE_PRIVATE(QObjectFlow)

public:
    explicit QObjectFlow(QObject *parent = 0);
    virtual ~QObjectFlow();

    // Attributes from QObjectFlow
    bool isMultireceive() const;
    void setMultireceive(bool isMultireceive);
    bool isMulticast() const;
    void setMulticast(bool isMulticast);

    // Association ends from QObjectFlow
    QBehavior *selection() const;
    void setSelection(QBehavior *selection);
    QBehavior *transformation() const;
    void setTransformation(QBehavior *transformation);

protected:
    explicit QObjectFlow(QObjectFlowPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QObjectFlow) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QObjectFlow) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QObjectFlow) *> *)

QT_END_HEADER

#endif // QTUML_QOBJECTFLOW_H

