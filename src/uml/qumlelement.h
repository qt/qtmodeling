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
#ifndef QUMLELEMENT_H
#define QUMLELEMENT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>


QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlComment;

class Q_UML_EXPORT QUmlElement : public QModelingObject
{
public:
    virtual ~QUmlElement();

    Q_DECL_HIDDEN QModelingObject *clone() const;

    // Owned attributes
    const QSet<QUmlComment *> ownedComments() const;
    void addOwnedComment(QUmlComment *ownedComment);
    void removeOwnedComment(QUmlComment *ownedComment);
    const QSet<QUmlElement *> ownedElements() const;
    Q_DECL_HIDDEN void addOwnedElement(QUmlElement *ownedElement);
    Q_DECL_HIDDEN void removeOwnedElement(QUmlElement *ownedElement);
    QUmlElement *owner() const;
    Q_DECL_HIDDEN void setOwner(QUmlElement *owner);

    // Operations
    QSet<QUmlElement *> allOwnedElements() const;
    bool mustBeOwned() const;

protected:
    explicit QUmlElement();

    QSet<QUmlComment *> _ownedComments;
    QSet<QUmlElement *> _ownedElements;
    QUmlElement *_owner;

    virtual void setPropertyData();
    virtual void setClassForProperty();

private:
    void allOwnedElements(QSet<QUmlElement *> &allOwnedElements_) const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlElement) *)

QT_END_HEADER

#endif // QUMLELEMENT_H

