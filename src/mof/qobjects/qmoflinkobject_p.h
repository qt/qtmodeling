/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QMOFLINKOBJECT_H
#define QMOFLINKOBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofLink;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofLinkObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofLinkObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Link]
    Q_PROPERTY(QObject * firstElement READ firstElement WRITE setFirstElement NOTIFY firstElementChanged)
    Q_PROPERTY(QObject * secondElement READ secondElement WRITE setSecondElement NOTIFY secondElementChanged)
    Q_PROPERTY(QObject * association READ association WRITE setAssociation NOTIFY associationChanged)

public:
    Q_INVOKABLE explicit QMofLinkObject(QMofLink *modelingElement);

    // Owned attributes [Link]
    Q_INVOKABLE QObject *firstElement() const;
    Q_INVOKABLE QObject *secondElement() const;
    Q_INVOKABLE QObject *association() const;

    // Operations [Link]
    Q_INVOKABLE bool equals(QObject *otherLink) const;
    Q_INVOKABLE void delete_();

public Q_SLOTS:

    // Slots for owned attributes [Link]
    void setFirstElement(QObject *firstElement = 0);
    void setSecondElement(QObject *secondElement = 0);
    void setAssociation(QObject *association = 0);

Q_SIGNALS:

    // Signals for owned attributes [Link]
    void firstElementChanged(QObject *firstElement);
    void secondElementChanged(QObject *secondElement);
    void associationChanged(QObject *association);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QMOFLINKOBJECT_H

