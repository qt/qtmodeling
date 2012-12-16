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
#ifndef QTMOF_QLINK_H
#define QTMOF_QLINK_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QElement;
class QAssociation;

class QLinkPrivate;

class Q_MOF_EXPORT QLink : public QMofObject
{
    Q_OBJECT

    Q_PROPERTY(QAssociation * association READ association WRITE setAssociation)
    Q_PROPERTY(QElement * secondElement READ secondElement WRITE setSecondElement)
    Q_PROPERTY(QElement * firstElement READ firstElement WRITE setFirstElement)

    Q_DISABLE_COPY(QLink)
    Q_DECLARE_PRIVATE(QLink)

public:
    Q_INVOKABLE explicit QLink(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QLink();

    // Attributes from QLink
    Q_INVOKABLE QAssociation *association() const;
    Q_INVOKABLE void setAssociation(QAssociation *association);
    Q_INVOKABLE QElement *secondElement() const;
    Q_INVOKABLE void setSecondElement(QElement *secondElement);
    Q_INVOKABLE QElement *firstElement() const;
    Q_INVOKABLE void setFirstElement(QElement *firstElement);

    // Operations
    Q_INVOKABLE bool equals(const QLink *otherLink) const;
    Q_INVOKABLE void delete_();
    virtual void registerMetaTypes() const;

protected:
    explicit QLink(QLinkPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QLink) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *)

QT_END_HEADER

#endif // QTMOF_QLINK_H

