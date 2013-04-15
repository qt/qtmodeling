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
#ifndef QMOFLINK_H
#define QMOFLINK_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofElement;
class QMofAssociation;
class QMofLink;

class QMofLinkPrivate;

class Q_MOF_EXPORT QMofLink : public QMofObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QMofAssociation * association READ association WRITE setAssociation)
    Q_PROPERTY(QMofElement * secondElement READ secondElement WRITE setSecondElement)
    Q_PROPERTY(QMofElement * firstElement READ firstElement WRITE setFirstElement)

    Q_DISABLE_COPY(QMofLink)
    Q_DECLARE_PRIVATE(QMofLink)

public:
    Q_INVOKABLE explicit QMofLink(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofLink();

    // Attributes from QMofLink
    Q_INVOKABLE QMofAssociation *association() const;
    Q_INVOKABLE void setAssociation(QMofAssociation *association);
    Q_INVOKABLE QMofElement *secondElement() const;
    Q_INVOKABLE void setSecondElement(QMofElement *secondElement);
    Q_INVOKABLE QMofElement *firstElement() const;
    Q_INVOKABLE void setFirstElement(QMofElement *firstElement);

    // Operations
    Q_INVOKABLE bool equals(const QMofLink *otherLink) const;
    Q_INVOKABLE void delete_();

    virtual void setPropertyData();

protected:
    explicit QMofLink(QMofLinkPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFLINK_H

