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
#ifndef QUMLSTATEINVARIANT_H
#define QUMLSTATEINVARIANT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlInteractionFragment>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlLifeline;
class QUmlConstraint;

class QUmlStateInvariantPrivate;

class Q_UML_EXPORT QUmlStateInvariant : public QUmlInteractionFragment
{
    Q_OBJECT

    Q_PROPERTY(QUmlConstraint * invariant READ invariant WRITE setInvariant)
    Q_PROPERTY(QUmlLifeline * covered READ covered WRITE setCovered)

    Q_DISABLE_COPY(QUmlStateInvariant)
    Q_DECLARE_PRIVATE(QUmlStateInvariant)

public:
    Q_INVOKABLE explicit QUmlStateInvariant(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlStateInvariant();

    // Association ends from QUmlStateInvariant
    Q_INVOKABLE QUmlConstraint *invariant() const;
    Q_INVOKABLE void setInvariant(QUmlConstraint *invariant);
    Q_INVOKABLE QUmlLifeline *covered() const;
    Q_INVOKABLE void setCovered(QUmlLifeline *covered);

    virtual void setPropertyData();

protected:
    explicit QUmlStateInvariant(QUmlStateInvariantPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTATEINVARIANT_H

