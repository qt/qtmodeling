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
#ifndef QUMLREADLINKOBJECTENDQUALIFIERACTION_H
#define QUMLREADLINKOBJECTENDQUALIFIERACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;
class QUmlProperty;
class QUmlOutputPin;

class QUmlReadLinkObjectEndQualifierActionPrivate;

class Q_UML_EXPORT QUmlReadLinkObjectEndQualifierAction : public QUmlAction
{
    Q_OBJECT

    Q_PROPERTY(QUmlOutputPin * result READ result WRITE setResult)
    Q_PROPERTY(QUmlInputPin * object READ object WRITE setObject)
    Q_PROPERTY(QUmlProperty * qualifier READ qualifier WRITE setQualifier)

    Q_DISABLE_COPY(QUmlReadLinkObjectEndQualifierAction)
    Q_DECLARE_PRIVATE(QUmlReadLinkObjectEndQualifierAction)

public:
    Q_INVOKABLE explicit QUmlReadLinkObjectEndQualifierAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlReadLinkObjectEndQualifierAction();

    // Association ends from QUmlReadLinkObjectEndQualifierAction
    Q_INVOKABLE QUmlOutputPin *result() const;
    Q_INVOKABLE void setResult(QUmlOutputPin *result);
    Q_INVOKABLE QUmlInputPin *object() const;
    Q_INVOKABLE void setObject(QUmlInputPin *object);
    Q_INVOKABLE QUmlProperty *qualifier() const;
    Q_INVOKABLE void setQualifier(QUmlProperty *qualifier);

    virtual void setPropertyData();

protected:
    explicit QUmlReadLinkObjectEndQualifierAction(QUmlReadLinkObjectEndQualifierActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLREADLINKOBJECTENDQUALIFIERACTION_H

