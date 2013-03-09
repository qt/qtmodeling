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
#ifndef QUMLPROTOCOLTRANSITION_H
#define QUMLPROTOCOLTRANSITION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlTransition>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlConstraint;
class QUmlOperation;

class QUmlProtocolTransitionPrivate;

class Q_UML_EXPORT QUmlProtocolTransition : public QUmlTransition
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlConstraint * postCondition READ postCondition WRITE setPostCondition)
    Q_PROPERTY(QSet<QUmlOperation *> referred READ referred STORED false)
    Q_PROPERTY(QUmlConstraint * preCondition READ preCondition WRITE setPreCondition)

    Q_DISABLE_COPY(QUmlProtocolTransition)
    Q_DECLARE_PRIVATE(QUmlProtocolTransition)

public:
    Q_INVOKABLE explicit QUmlProtocolTransition(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlProtocolTransition();

    // Association ends from QUmlProtocolTransition
    Q_INVOKABLE QUmlConstraint *postCondition() const;
    Q_INVOKABLE void setPostCondition(QUmlConstraint *postCondition);
    Q_INVOKABLE QSet<QUmlOperation *> referred() const;
    Q_INVOKABLE QUmlConstraint *preCondition() const;
    Q_INVOKABLE void setPreCondition(QUmlConstraint *preCondition);

    virtual void setPropertyData();

protected:
    explicit QUmlProtocolTransition(QUmlProtocolTransitionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPROTOCOLTRANSITION_H

