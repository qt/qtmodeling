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
#ifndef QTUML_QMULTIPLICITYELEMENT_H
#define QTUML_QMULTIPLICITYELEMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QValueSpecification;

class QMultiplicityElementPrivate;

class Q_UML_EXPORT QMultiplicityElement : public QElement
{
    Q_OBJECT

    Q_PROPERTY(qint32 upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QtUml::QValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QtUml::QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    Q_DISABLE_COPY(QMultiplicityElement)
    Q_DECLARE_PRIVATE(QMultiplicityElement)

public:
    Q_INVOKABLE explicit QMultiplicityElement(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMultiplicityElement();

    // Attributes from QMultiplicityElement
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

    // Association ends from QMultiplicityElement
    Q_INVOKABLE QValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QValueSpecification *upperValue);
    Q_INVOKABLE QValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QValueSpecification *lowerValue);

    // Operations
    Q_INVOKABLE bool compatibleWith(const QMultiplicityElement *other) const;
    Q_INVOKABLE bool includesCardinality(qint32 C) const;
    Q_INVOKABLE bool includesMultiplicity(const QMultiplicityElement *M) const;
    Q_INVOKABLE bool is(qint32 lowerbound, qint32 upperbound) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE qint32 lowerBound() const;
    Q_INVOKABLE qint32 upperBound() const;

    virtual void setPropertyData();

protected:
    explicit QMultiplicityElement(QMultiplicityElementPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QMULTIPLICITYELEMENT_H

