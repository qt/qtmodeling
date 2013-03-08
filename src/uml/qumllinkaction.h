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
#ifndef QUMLLINKACTION_H
#define QUMLLINKACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlLinkEndData;
class QUmlInputPin;
class QUmlAssociation;

class QUmlLinkActionPrivate;

class Q_UML_EXPORT QUmlLinkAction : public QUmlAction
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlInputPin *> inputValues READ inputValues)
    Q_PROPERTY(QSet<QUmlLinkEndData *> endData READ endData)

    Q_DISABLE_COPY(QUmlLinkAction)
    Q_DECLARE_PRIVATE(QUmlLinkAction)

public:
    Q_INVOKABLE explicit QUmlLinkAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlLinkAction();

    // Association ends from QUmlLinkAction
    Q_INVOKABLE QSet<QUmlInputPin *> inputValues() const;
    Q_INVOKABLE void addInputValue(QUmlInputPin *inputValue);
    Q_INVOKABLE void removeInputValue(QUmlInputPin *inputValue);
    Q_INVOKABLE QSet<QUmlLinkEndData *> endData() const;
    Q_INVOKABLE void addEndData(QUmlLinkEndData *endData);
    Q_INVOKABLE void removeEndData(QUmlLinkEndData *endData);

    // Operations
    Q_INVOKABLE QUmlAssociation *association() const;

    virtual void setPropertyData();

protected:
    explicit QUmlLinkAction(QUmlLinkActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLLINKACTION_H

