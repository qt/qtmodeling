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
#ifndef QUMLOCCURRENCESPECIFICATION_H
#define QUMLOCCURRENCESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlInteractionFragment>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlLifeline;
class QUmlGeneralOrdering;

class QUmlOccurrenceSpecificationPrivate;

class Q_UML_EXPORT QUmlOccurrenceSpecification : public QUmlInteractionFragment
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlLifeline * covered READ covered WRITE setCovered)
    Q_PROPERTY(QSet<QUmlGeneralOrdering *> toAfter READ toAfter)
    Q_PROPERTY(QSet<QUmlGeneralOrdering *> toBefore READ toBefore)

    Q_DISABLE_COPY(QUmlOccurrenceSpecification)
    Q_DECLARE_PRIVATE(QUmlOccurrenceSpecification)

public:
    Q_INVOKABLE explicit QUmlOccurrenceSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlOccurrenceSpecification();

    // Association ends from QUmlOccurrenceSpecification
    Q_INVOKABLE QUmlLifeline *covered() const;
    Q_INVOKABLE void setCovered(QUmlLifeline *covered);
    Q_INVOKABLE QSet<QUmlGeneralOrdering *> toAfter() const;
    Q_INVOKABLE void addToAfter(QUmlGeneralOrdering *toAfter);
    Q_INVOKABLE void removeToAfter(QUmlGeneralOrdering *toAfter);
    Q_INVOKABLE QSet<QUmlGeneralOrdering *> toBefore() const;
    Q_INVOKABLE void addToBefore(QUmlGeneralOrdering *toBefore);
    Q_INVOKABLE void removeToBefore(QUmlGeneralOrdering *toBefore);

    virtual void setPropertyData();

protected:
    explicit QUmlOccurrenceSpecification(QUmlOccurrenceSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOCCURRENCESPECIFICATION_H

