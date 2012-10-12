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
#include <QtCore/QSet>

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
    Q_PROPERTY(const QSet<QComponentRealization *> * realizations READ realizations)
    Q_PROPERTY(const QSet<QInterface *> * required READ required)
    Q_PROPERTY(const QSet<QInterface *> * provided READ provided)
    Q_PROPERTY(const QSet<QPackageableElement *> * packagedElements READ packagedElements)

    Q_DISABLE_COPY(QComponent)

public:
    explicit QComponent(QObject *parent = 0);
    virtual ~QComponent();

    // Attributes
    bool isIndirectlyInstantiated() const;
    void setIndirectlyInstantiated(bool isIndirectlyInstantiated);

    // Association-ends
    const QSet<QComponentRealization *> *realizations() const;
    void addRealization(QComponentRealization *realization);
    void removeRealization(QComponentRealization *realization);
    const QSet<QInterface *> *required() const;
    const QSet<QInterface *> *provided() const;
    const QSet<QPackageableElement *> *packagedElements() const;
    void addPackagedElement(QPackageableElement *packagedElement);
    void removePackagedElement(QPackageableElement *packagedElement);

    // Operations
    const QSet<QInterface *> *realizedInterfaces(const QClassifier *classifier) const;
    const QSet<QInterface *> *usedInterfaces(const QClassifier *classifier) const;

protected:
    explicit QComponent(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QComponent) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QComponent) *> *)

QT_END_HEADER

#endif // QTUML_QCOMPONENT_H

