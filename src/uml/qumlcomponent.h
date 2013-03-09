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
#ifndef QUMLCOMPONENT_H
#define QUMLCOMPONENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlClass>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlComponentRealization;
class QUmlPackageableElement;
class QUmlInterface;

class QUmlComponentPrivate;

class Q_UML_EXPORT QUmlComponent : public QUmlClass
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isIndirectlyInstantiated READ isIndirectlyInstantiated WRITE setIndirectlyInstantiated RESET unsetIndirectlyInstantiated)
    Q_PROPERTY(QSet<QUmlComponentRealization *> realizations READ realizations)
    Q_PROPERTY(QSet<QUmlInterface *> required READ required STORED false)
    Q_PROPERTY(QSet<QUmlInterface *> provided READ provided STORED false)
    Q_PROPERTY(QSet<QUmlPackageableElement *> packagedElements READ packagedElements)

    Q_DISABLE_COPY(QUmlComponent)
    Q_DECLARE_PRIVATE(QUmlComponent)

public:
    Q_INVOKABLE explicit QUmlComponent(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlComponent();

    // Attributes from QUmlComponent
    Q_INVOKABLE bool isIndirectlyInstantiated() const;
    Q_INVOKABLE void setIndirectlyInstantiated(bool isIndirectlyInstantiated);
    Q_INVOKABLE void unsetIndirectlyInstantiated();

    // Association ends from QUmlComponent
    Q_INVOKABLE QSet<QUmlComponentRealization *> realizations() const;
    Q_INVOKABLE void addRealization(QUmlComponentRealization *realization);
    Q_INVOKABLE void removeRealization(QUmlComponentRealization *realization);
    Q_INVOKABLE QSet<QUmlInterface *> required() const;
    Q_INVOKABLE QSet<QUmlInterface *> provided() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> packagedElements() const;
    Q_INVOKABLE void addPackagedElement(QUmlPackageableElement *packagedElement);
    Q_INVOKABLE void removePackagedElement(QUmlPackageableElement *packagedElement);

    // Operations
    Q_INVOKABLE QSet<QUmlInterface *> realizedInterfaces(const QUmlClassifier *classifier) const;
    Q_INVOKABLE QSet<QUmlInterface *> usedInterfaces(const QUmlClassifier *classifier) const;

    virtual void setPropertyData();

protected:
    explicit QUmlComponent(QUmlComponentPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCOMPONENT_H

