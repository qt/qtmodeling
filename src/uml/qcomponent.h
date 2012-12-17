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

// Forward decls for function parameters
class QClassifier;
class QComponentRealization;
class QPackageableElement;
class QInterface;

class QComponentPrivate;

class Q_UML_EXPORT QComponent : public QClass
{
    Q_OBJECT

    Q_PROPERTY(bool isIndirectlyInstantiated READ isIndirectlyInstantiated WRITE setIndirectlyInstantiated RESET unsetIndirectlyInstantiated)
    Q_PROPERTY(const QSet<QComponentRealization *> * realizations READ realizations)
    Q_PROPERTY(const QSet<QInterface *> * required READ required STORED false)
    Q_PROPERTY(const QSet<QInterface *> * provided READ provided STORED false)
    Q_PROPERTY(const QSet<QPackageableElement *> * packagedElements READ packagedElements)

    Q_DISABLE_COPY(QComponent)
    Q_DECLARE_PRIVATE(QComponent)

public:
    Q_INVOKABLE explicit QComponent(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QComponent();

    // Attributes from QComponent
    Q_INVOKABLE bool isIndirectlyInstantiated() const;
    Q_INVOKABLE void setIndirectlyInstantiated(bool isIndirectlyInstantiated);
    Q_INVOKABLE void unsetIndirectlyInstantiated();

    // Association ends from QComponent
    Q_INVOKABLE const QSet<QComponentRealization *> *realizations() const;
    Q_INVOKABLE void addRealization(QComponentRealization *realization);
    Q_INVOKABLE void removeRealization(QComponentRealization *realization);
    Q_INVOKABLE const QSet<QInterface *> *required() const;
    Q_INVOKABLE const QSet<QInterface *> *provided() const;
    Q_INVOKABLE const QSet<QPackageableElement *> *packagedElements() const;
    Q_INVOKABLE void addPackagedElement(QPackageableElement *packagedElement);
    Q_INVOKABLE void removePackagedElement(QPackageableElement *packagedElement);

    // Operations
    Q_INVOKABLE const QSet<QInterface *> *realizedInterfaces(const QClassifier *classifier) const;
    Q_INVOKABLE const QSet<QInterface *> *usedInterfaces(const QClassifier *classifier) const;
    virtual void registerMetaTypes() const;

protected:
    explicit QComponent(QComponentPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QComponent) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QComponent) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QComponent) *> *)

QT_END_HEADER

#endif // QTUML_QCOMPONENT_H

