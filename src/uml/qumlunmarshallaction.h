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
#ifndef QUMLUNMARSHALLACTION_H
#define QUMLUNMARSHALLACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;
class QUmlOutputPin;
class QUmlClassifier;

class QUmlUnmarshallActionPrivate;

class Q_UML_EXPORT QUmlUnmarshallAction : public QUmlAction
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlInputPin * object READ object WRITE setObject)
    Q_PROPERTY(QSet<QUmlOutputPin *> results READ results)
    Q_PROPERTY(QUmlClassifier * unmarshallType READ unmarshallType WRITE setUnmarshallType)

    Q_DISABLE_COPY(QUmlUnmarshallAction)
    Q_DECLARE_PRIVATE(QUmlUnmarshallAction)

public:
    Q_INVOKABLE explicit QUmlUnmarshallAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlUnmarshallAction();

    // Association ends from QUmlUnmarshallAction
    Q_INVOKABLE QUmlInputPin *object() const;
    Q_INVOKABLE void setObject(QUmlInputPin *object);
    Q_INVOKABLE QSet<QUmlOutputPin *> results() const;
    Q_INVOKABLE void addResult(QUmlOutputPin *result);
    Q_INVOKABLE void removeResult(QUmlOutputPin *result);
    Q_INVOKABLE QUmlClassifier *unmarshallType() const;
    Q_INVOKABLE void setUnmarshallType(QUmlClassifier *unmarshallType);

    virtual void setPropertyData();

protected:
    explicit QUmlUnmarshallAction(QUmlUnmarshallActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLUNMARSHALLACTION_H

