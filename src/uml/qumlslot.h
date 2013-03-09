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
#ifndef QUMLSLOT_H
#define QUMLSLOT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlStructuralFeature;
class QUmlInstanceSpecification;
class QUmlValueSpecification;

class QUmlSlotPrivate;

class Q_UML_EXPORT QUmlSlot : public QUmlElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QList<QUmlValueSpecification *> values READ values)
    Q_PROPERTY(QUmlStructuralFeature * definingFeature READ definingFeature WRITE setDefiningFeature)
    Q_PROPERTY(QUmlInstanceSpecification * owningInstance READ owningInstance WRITE setOwningInstance)

    Q_DISABLE_COPY(QUmlSlot)
    Q_DECLARE_PRIVATE(QUmlSlot)

public:
    Q_INVOKABLE explicit QUmlSlot(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlSlot();

    // Association ends from QUmlSlot
    Q_INVOKABLE QList<QUmlValueSpecification *> values() const;
    Q_INVOKABLE void addValue(QUmlValueSpecification *value);
    Q_INVOKABLE void removeValue(QUmlValueSpecification *value);
    Q_INVOKABLE QUmlStructuralFeature *definingFeature() const;
    Q_INVOKABLE void setDefiningFeature(QUmlStructuralFeature *definingFeature);
    Q_INVOKABLE QUmlInstanceSpecification *owningInstance() const;
    Q_INVOKABLE void setOwningInstance(QUmlInstanceSpecification *owningInstance);

    virtual void setPropertyData();

protected:
    explicit QUmlSlot(QUmlSlotPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSLOT_H

