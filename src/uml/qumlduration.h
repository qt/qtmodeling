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
#ifndef QUMLDURATION_H
#define QUMLDURATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlValueSpecification>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlObservation;

class QUmlDurationPrivate;

class Q_UML_EXPORT QUmlDuration : public QUmlValueSpecification
{
    Q_OBJECT

    Q_PROPERTY(QUmlValueSpecification * expr READ expr WRITE setExpr)
    Q_PROPERTY(QSet<QUmlObservation *> observations READ observations)

    Q_DISABLE_COPY(QUmlDuration)
    Q_DECLARE_PRIVATE(QUmlDuration)

public:
    Q_INVOKABLE explicit QUmlDuration(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlDuration();

    // Association ends from QUmlDuration
    Q_INVOKABLE QUmlValueSpecification *expr() const;
    Q_INVOKABLE void setExpr(QUmlValueSpecification *expr);
    Q_INVOKABLE QSet<QUmlObservation *> observations() const;
    Q_INVOKABLE void addObservation(QUmlObservation *observation);
    Q_INVOKABLE void removeObservation(QUmlObservation *observation);

    virtual void setPropertyData();

protected:
    explicit QUmlDuration(QUmlDurationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLDURATION_H

