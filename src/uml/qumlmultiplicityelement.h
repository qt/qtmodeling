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
#ifndef QUMLMULTIPLICITYELEMENT_H
#define QUMLMULTIPLICITYELEMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlValueSpecification;
class QUmlMultiplicityElement;

class QUmlMultiplicityElementPrivate;

class Q_UML_EXPORT QUmlMultiplicityElement : public QUmlElement
{
    Q_OBJECT

    Q_PROPERTY(qint32 upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QUmlValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QUmlValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    Q_DISABLE_COPY(QUmlMultiplicityElement)
    Q_DECLARE_PRIVATE(QUmlMultiplicityElement)

public:
    Q_INVOKABLE explicit QUmlMultiplicityElement(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlMultiplicityElement();

    // Attributes from QUmlMultiplicityElement
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE void setUpper(qint32 upper);
    Q_INVOKABLE void unsetUpper();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE void setUnique(bool isUnique);
    Q_INVOKABLE void unsetUnique();
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE void setOrdered(bool isOrdered);
    Q_INVOKABLE void unsetOrdered();
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE void setLower(qint32 lower);

    // Association ends from QUmlMultiplicityElement
    Q_INVOKABLE QUmlValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QUmlValueSpecification *upperValue);
    Q_INVOKABLE QUmlValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QUmlValueSpecification *lowerValue);

    // Operations
    Q_INVOKABLE bool compatibleWith(const QUmlMultiplicityElement *other) const;
    Q_INVOKABLE bool includesCardinality(qint32 C) const;
    Q_INVOKABLE bool includesMultiplicity(const QUmlMultiplicityElement *M) const;
    Q_INVOKABLE bool is(qint32 lowerbound, qint32 upperbound) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE qint32 lowerBound() const;
    Q_INVOKABLE qint32 upperBound() const;

    virtual void setPropertyData();

protected:
    explicit QUmlMultiplicityElement(QUmlMultiplicityElementPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLMULTIPLICITYELEMENT_H

