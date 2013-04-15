/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLINTERVAL_H
#define QUMLINTERVAL_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlIntervalPrivate;

class Q_UML_EXPORT QUmlInterval : public QUmlValueSpecification
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlValueSpecification * min READ min WRITE setMin)
    Q_PROPERTY(QUmlValueSpecification * max READ max WRITE setMax)

    Q_DISABLE_COPY(QUmlInterval)
    Q_DECLARE_PRIVATE(QUmlInterval)

public:
    Q_INVOKABLE explicit QUmlInterval(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInterval();

    // Association ends from QUmlInterval
    Q_INVOKABLE QUmlValueSpecification *min() const;
    Q_INVOKABLE void setMin(QUmlValueSpecification *min);
    Q_INVOKABLE QUmlValueSpecification *max() const;
    Q_INVOKABLE void setMax(QUmlValueSpecification *max);

    virtual void setPropertyData();

protected:
    explicit QUmlInterval(QUmlIntervalPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERVAL_H

