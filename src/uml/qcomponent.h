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
#ifndef QTUML_QCOMPONENT_H
#define QTUML_QCOMPONENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QClass>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QComponentPrivate;
class QClassifier;
class QComponentRealization;
class QPackageableElement;
class QInterface;

class Q_UML_EXPORT QComponent : public QClass
{
    Q_OBJECT

    // From QComponent
    Q_PROPERTY(bool isIndirectlyInstantiated READ isIndirectlyInstantiated WRITE setIndirectlyInstantiated)
    Q_PROPERTY(QList<QPackageableElement *> * packagedElements READ packagedElements)
    Q_PROPERTY(const QList<QInterface *> * provided READ provided)
    Q_PROPERTY(QList<QComponentRealization *> * realizations READ realizations)
    Q_PROPERTY(const QList<QInterface *> * required READ required)

public:
    explicit QComponent(QObject *parent = 0);
    virtual ~QComponent();

    // Attributes (except those derived && !derivedUnion)
    bool isIndirectlyInstantiated() const;
    void setIndirectlyInstantiated(bool isIndirectlyInstantiated);

    // Association-ends (except those derived && !derivedUnion)
    QList<QPackageableElement *> *packagedElements();
    QList<QComponentRealization *> *realizations();

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QList<QInterface *> *provided() const;
    const QList<QInterface *> *realizedInterfaces(const QClassifier *classifier) const;
    const QList<QInterface *> *required() const;
    const QList<QInterface *> *usedInterfaces(const QClassifier *classifier) const;

private:
    Q_DISABLE_COPY(QComponent)
    Q_DECLARE_PRIVATE(QComponent)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QComponent *>)
Q_DECLARE_METATYPE(QList<QtUml::QComponent *> *)

QT_END_HEADER

#endif // QTUML_QCOMPONENT_H

