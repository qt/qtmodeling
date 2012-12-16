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
#ifndef QTUML_QOCCURRENCESPECIFICATION_H
#define QTUML_QOCCURRENCESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QInteractionFragment>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QLifeline;
class QGeneralOrdering;

class QOccurrenceSpecificationPrivate;

class Q_UML_EXPORT QOccurrenceSpecification : public QInteractionFragment
{
    Q_OBJECT

    Q_PROPERTY(QLifeline * covered READ covered WRITE setCovered)
    Q_PROPERTY(const QSet<QGeneralOrdering *> * toAfter READ toAfter)
    Q_PROPERTY(const QSet<QGeneralOrdering *> * toBefore READ toBefore)

    Q_DISABLE_COPY(QOccurrenceSpecification)
    Q_DECLARE_PRIVATE(QOccurrenceSpecification)

public:
    Q_INVOKABLE explicit QOccurrenceSpecification(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QOccurrenceSpecification();

    // Association ends from QOccurrenceSpecification
    Q_INVOKABLE QLifeline *covered() const;
    Q_INVOKABLE void setCovered(QLifeline *covered);
    Q_INVOKABLE const QSet<QGeneralOrdering *> *toAfter() const;
    Q_INVOKABLE void addToAfter(QGeneralOrdering *toAfter);
    Q_INVOKABLE void removeToAfter(QGeneralOrdering *toAfter);
    Q_INVOKABLE const QSet<QGeneralOrdering *> *toBefore() const;
    Q_INVOKABLE void addToBefore(QGeneralOrdering *toBefore);
    Q_INVOKABLE void removeToBefore(QGeneralOrdering *toBefore);
    virtual void registerMetaTypes() const;

protected:
    explicit QOccurrenceSpecification(QOccurrenceSpecificationPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QOccurrenceSpecification) *> *)

QT_END_HEADER

#endif // QTUML_QOCCURRENCESPECIFICATION_H

