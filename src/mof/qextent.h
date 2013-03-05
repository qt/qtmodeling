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
#ifndef QTMOF_QEXTENT_H
#define QTMOF_QEXTENT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofObject>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtMof
{

QT_MODULE(QtMof)

// Forward decls for function parameters
class QLink;
class QAssociation;
class QClass;
class QReflectiveSequence;
class QElement;

class QExtentPrivate;

class Q_MOF_EXPORT QExtent : public QMofObject
{
    Q_OBJECT

    Q_DISABLE_COPY(QExtent)
    Q_DECLARE_PRIVATE(QExtent)

public:
    Q_INVOKABLE explicit QExtent(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QExtent();

    // Operations
    Q_INVOKABLE bool useContainment() const;
    Q_INVOKABLE QReflectiveSequence *elements() const;
    Q_INVOKABLE QSet<QElement *> elementsOfType(const QClass *type, bool includesSubtypes) const;
    Q_INVOKABLE QSet<QLink *> linksOfType(const QAssociation *type) const;
    Q_INVOKABLE QSet<QElement *> linkedElements(const QAssociation *association, const QElement *endElement, bool end1ToEnd2Direction) const;
    Q_INVOKABLE bool linkExists(const QAssociation *association, const QElement *firstElement, const QElement *secondElement) const;

    virtual void setPropertyData();

protected:
    explicit QExtent(QExtentPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTMOF_QEXTENT_H

