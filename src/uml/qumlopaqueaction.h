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
#ifndef QUMLOPAQUEACTION_H
#define QUMLOPAQUEACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;
class QUmlOutputPin;

class QUmlOpaqueActionPrivate;

class Q_UML_EXPORT QUmlOpaqueAction : public QUmlAction
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QList<QString> bodies READ bodies)
    Q_PROPERTY(QList<QString> languages READ languages)
    Q_PROPERTY(QSet<QUmlInputPin *> inputValues READ inputValues)
    Q_PROPERTY(QSet<QUmlOutputPin *> outputValues READ outputValues)

    Q_DISABLE_COPY(QUmlOpaqueAction)
    Q_DECLARE_PRIVATE(QUmlOpaqueAction)

public:
    Q_INVOKABLE explicit QUmlOpaqueAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlOpaqueAction();

    // Attributes from QUmlOpaqueAction
    Q_INVOKABLE QList<QString> bodies() const;
    Q_INVOKABLE void addBody(QString body);
    Q_INVOKABLE void removeBody(QString body);
    Q_INVOKABLE QList<QString> languages() const;
    Q_INVOKABLE void addLanguage(QString language);
    Q_INVOKABLE void removeLanguage(QString language);

    // Association ends from QUmlOpaqueAction
    Q_INVOKABLE QSet<QUmlInputPin *> inputValues() const;
    Q_INVOKABLE void addInputValue(QUmlInputPin *inputValue);
    Q_INVOKABLE void removeInputValue(QUmlInputPin *inputValue);
    Q_INVOKABLE QSet<QUmlOutputPin *> outputValues() const;
    Q_INVOKABLE void addOutputValue(QUmlOutputPin *outputValue);
    Q_INVOKABLE void removeOutputValue(QUmlOutputPin *outputValue);

    virtual void setPropertyData();

protected:
    explicit QUmlOpaqueAction(QUmlOpaqueActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOPAQUEACTION_H

