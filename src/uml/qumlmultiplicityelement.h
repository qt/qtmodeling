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
#ifndef QUMLMULTIPLICITYELEMENT_H
#define QUMLMULTIPLICITYELEMENT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlmultiplicityelement_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlComment;
class QUmlElement;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlMultiplicityElement : public QObject, public UmlMultiplicityElement
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [MultiplicityElement]
    Q_PROPERTY(bool isOrdered READ isOrdered)
    Q_PROPERTY(bool isUnique READ isUnique)
    Q_PROPERTY(int lower READ lower)
    Q_PROPERTY(QUmlValueSpecification * lowerValue READ lowerValue)
    Q_PROPERTY(int upper READ upper)
    Q_PROPERTY(QUmlValueSpecification * upperValue READ upperValue)

public:
    Q_DECL_HIDDEN explicit QUmlMultiplicityElement(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [MultiplicityElement]
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE QUmlValueSpecification *lowerValue() const;
    Q_INVOKABLE int upper() const;
    Q_INVOKABLE QUmlValueSpecification *upperValue() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [MultiplicityElement]
    Q_INVOKABLE bool compatibleWith(QUmlMultiplicityElement *other) const;
    Q_INVOKABLE bool includesCardinality(int C) const;
    Q_INVOKABLE bool includesMultiplicity(QUmlMultiplicityElement *M) const;
    Q_INVOKABLE bool is(int lowerbound, int upperbound) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE int lowerBound() const;
    Q_INVOKABLE int upperBound() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [MultiplicityElement]
    void setOrdered(bool isOrdered);
    void setUnique(bool isUnique);
    void setLower(int lower);
    void setLowerValue(QUmlValueSpecification *lowerValue);
    void setUpper(int upper);
    void setUpperValue(QUmlValueSpecification *upperValue);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlMultiplicityElement *)
Q_DECLARE_METATYPE(QList<QUmlMultiplicityElement *> *)
Q_DECLARE_METATYPE(QSet<QUmlMultiplicityElement *> *)

QT_END_HEADER

#endif // QUMLMULTIPLICITYELEMENT_H

