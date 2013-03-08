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
#ifndef QUMLDESTROYOBJECTACTION_H
#define QUMLDESTROYOBJECTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;

class QUmlDestroyObjectActionPrivate;

class Q_UML_EXPORT QUmlDestroyObjectAction : public QUmlAction
{
    Q_OBJECT

    Q_PROPERTY(bool isDestroyLinks READ isDestroyLinks WRITE setDestroyLinks RESET unsetDestroyLinks)
    Q_PROPERTY(bool isDestroyOwnedObjects READ isDestroyOwnedObjects WRITE setDestroyOwnedObjects RESET unsetDestroyOwnedObjects)
    Q_PROPERTY(QUmlInputPin * target READ target WRITE setTarget)

    Q_DISABLE_COPY(QUmlDestroyObjectAction)
    Q_DECLARE_PRIVATE(QUmlDestroyObjectAction)

public:
    Q_INVOKABLE explicit QUmlDestroyObjectAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlDestroyObjectAction();

    // Attributes from QUmlDestroyObjectAction
    Q_INVOKABLE bool isDestroyLinks() const;
    Q_INVOKABLE void setDestroyLinks(bool isDestroyLinks);
    Q_INVOKABLE void unsetDestroyLinks();
    Q_INVOKABLE bool isDestroyOwnedObjects() const;
    Q_INVOKABLE void setDestroyOwnedObjects(bool isDestroyOwnedObjects);
    Q_INVOKABLE void unsetDestroyOwnedObjects();

    // Association ends from QUmlDestroyObjectAction
    Q_INVOKABLE QUmlInputPin *target() const;
    Q_INVOKABLE void setTarget(QUmlInputPin *target);

    virtual void setPropertyData();

protected:
    explicit QUmlDestroyObjectAction(QUmlDestroyObjectActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLDESTROYOBJECTACTION_H

