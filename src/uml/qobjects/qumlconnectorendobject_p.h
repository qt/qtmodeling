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
#ifndef QUMLCONNECTORENDOBJECT_H
#define QUMLCONNECTORENDOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlConnectorEnd;
class Q_UML_EXPORT QUmlConnectorEndObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [MultiplicityElement]
    Q_PROPERTY(bool isOrdered READ isOrdered RESET unsetOrdered)
    Q_PROPERTY(bool isUnique READ isUnique RESET unsetUnique)
    Q_PROPERTY(int lower READ lower RESET unsetLower STORED false)
    Q_PROPERTY(QObject * lowerValue READ lowerValue)
    Q_PROPERTY(int upper READ upper RESET unsetUpper STORED false)
    Q_PROPERTY(QObject * upperValue READ upperValue)

    // Properties [ConnectorEnd]
    Q_PROPERTY(QObject * definingEnd READ definingEnd STORED false)
    Q_PROPERTY(QObject * partWithPort READ partWithPort)
    Q_PROPERTY(QObject * role READ role)

public:
    Q_INVOKABLE explicit QUmlConnectorEndObject(QUmlConnectorEnd *qModelingObject);
    virtual ~QUmlConnectorEndObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [MultiplicityElement]
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE QObject *lowerValue() const;
    Q_INVOKABLE int upper() const;
    Q_INVOKABLE QObject *upperValue() const;

    // Owned attributes [ConnectorEnd]
    Q_INVOKABLE QObject *definingEnd() const;
    Q_INVOKABLE QObject *partWithPort() const;
    Q_INVOKABLE QObject *role() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [MultiplicityElement]
    Q_INVOKABLE bool compatibleWith(QObject *other) const;
    Q_INVOKABLE bool includesCardinality(int C) const;
    Q_INVOKABLE bool includesMultiplicity(QObject *M) const;
    Q_INVOKABLE bool is(int lowerbound, int upperbound) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE int lowerBound() const;
//    Q_INVOKABLE int upperBound() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [MultiplicityElement]
    void setOrdered(bool isOrdered);
    void unsetOrdered();
    void setUnique(bool isUnique);
    void unsetUnique();
    void setLower(int lower);
    void unsetLower();
    void setLowerValue(QObject *lowerValue = 0);
    void setUpper(int upper);
    void unsetUpper();
    void setUpperValue(QObject *upperValue = 0);

    // Slots for owned attributes [ConnectorEnd]
    void Q_DECL_HIDDEN setDefiningEnd(QObject *definingEnd = 0);
    void setPartWithPort(QObject *partWithPort = 0);
    void setRole(QObject *role = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCONNECTORENDOBJECT_H

