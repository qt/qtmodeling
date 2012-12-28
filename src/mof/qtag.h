/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QTMOF_QTAG_H
#define QTMOF_QTAG_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

class QTagPrivate;

class Q_MOF_EXPORT QTag : public QElement
{
    Q_OBJECT

    Q_PROPERTY(QSet<QElement *> elements READ elements)
    Q_PROPERTY(QString value READ value WRITE setValue)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QElement * tagOwner READ tagOwner WRITE setTagOwner)

    Q_DISABLE_COPY(QTag)
    Q_DECLARE_PRIVATE(QTag)

public:
    Q_INVOKABLE explicit QTag(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QTag();

    // Attributes from QTag
    Q_INVOKABLE const QSet<QElement *> &elements() const;
    Q_INVOKABLE void addElement(QElement *element);
    Q_INVOKABLE void removeElement(QElement *element);
    Q_INVOKABLE QString value() const;
    Q_INVOKABLE void setValue(QString value);
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QElement *tagOwner() const;
    Q_INVOKABLE void setTagOwner(QElement *tagOwner);

protected:
    explicit QTag(QTagPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QTAG_H

