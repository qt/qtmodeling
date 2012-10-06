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
#ifndef QTUML_QELEMENT_H
#define QTUML_QELEMENT_H

#include <QtUml/QtUmlGlobal>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QElementPrivate;
class QComment;

class Q_UML_EXPORT QElement
{
    Q_DISABLE_COPY(QElement)
    Q_DECLARE_PRIVATE(QElement)

public:
    virtual ~QElement();

    // Association-ends
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(const QComment *ownedComment);
    void removeOwnedComment(const QComment *ownedComment);
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;

    // Operations
    const QSet<QElement *> *allOwnedElements() const;
    bool mustBeOwned() const;

protected:
    // Synchronization functions for read-only subsetted properties
    void addOwnedElement(const QElement *ownedElement);
    void removeOwnedElement(const QElement *ownedElement);

protected:
    explicit QElement();

private:
    QElementPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QELEMENT_H

