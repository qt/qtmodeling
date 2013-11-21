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
#ifndef IPROJECTCONTROLLER_H
#define IPROJECTCONTROLLER_H

#include <QtCore/QObject>

#include <QtCore/QString>

class QWidget;

class QModelingObject;
class QMetaModelPlugin;

namespace DuSE
{

class IProjectController : public QObject
{
    Q_OBJECT

public:
    virtual ~IProjectController();

    virtual bool initialize() = 0;

    virtual QStringList errorStrings() const = 0;
    virtual QString currentModelFileName() const = 0;
    virtual QList<QModelingObject *> currentModelObjects() const = 0;

public Q_SLOTS:
    virtual bool openModel(const QString &fileName) = 0;
    virtual bool saveModel() = 0;
    virtual bool saveModelAs(const QString &fileName) = 0;
    virtual bool createModel(const QString &modelFileName, QMetaModelPlugin *metamodelPlugin, const QString &topLevelType) = 0;

Q_SIGNALS:
    void modelOpened(QList<QModelingObject *> model);

protected:
    IProjectController();
};

}

#endif // IPROJECTCONTROLLER_H

