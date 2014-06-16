/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtSADuseProfile module of the Qt Toolkit.
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
#ifndef QSADUSEPROFILEPIDCONTROLLEROBJECT_H
#define QSADUSEPROFILEPIDCONTROLLEROBJECT_H

#include <QtSADuseProfile/QtSADuseProfileGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_NAMESPACE

QT_MODULE(QtSADuseProfile)

class QSADuseProfilePIDController;
class QModelingObjectPrivate;
class Q_SADUSEPROFILE_EXPORT QSADuseProfilePIDControllerObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QSADuseProfilePIDControllerObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Controller]
    Q_PROPERTY(QObject * base_Component READ base_Component WRITE setBase_Component NOTIFY base_ComponentChanged)

    // Properties [PIDController]
    Q_PROPERTY(double kp READ kp WRITE setKp NOTIFY kpChanged)
    Q_PROPERTY(double ki READ ki WRITE setKi NOTIFY kiChanged)
    Q_PROPERTY(double kd READ kd WRITE setKd NOTIFY kdChanged)

public:
    Q_INVOKABLE explicit QSADuseProfilePIDControllerObject(QSADuseProfilePIDController *modelingElement);

    // Owned attributes [Controller]
    Q_INVOKABLE QObject *base_Component() const;

    // Owned attributes [PIDController]
    Q_INVOKABLE double kp() const;
    Q_INVOKABLE double ki() const;
    Q_INVOKABLE double kd() const;

public Q_SLOTS:

    // Slots for owned attributes [Controller]
    void setBase_Component(QObject *base_Component = 0);

    // Slots for owned attributes [PIDController]
    void setKp(double kp);
    void setKi(double ki);
    void setKd(double kd);

Q_SIGNALS:

    // Signals for owned attributes [Controller]
    void base_ComponentChanged(QObject *base_Component);

    // Signals for owned attributes [PIDController]
    void kpChanged(double kp);
    void kiChanged(double ki);
    void kdChanged(double kd);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QSADUSEPROFILEPIDCONTROLLEROBJECT_H

