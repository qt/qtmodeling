/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QMOFCLASS_H
#define QMOFCLASS_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofNamedElement;
class QMofClass;
class QMofProperty;
class QMofOperation;

class QMofClassPrivate;

class Q_MOF_EXPORT QMofClass : public QMofClassifier
{
    Q_OBJECT

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(QList<QMofClassifier *> nestedClassifiers READ nestedClassifiers)
    Q_PROPERTY(QList<QMofOperation *> ownedOperations READ ownedOperations)
    Q_PROPERTY(QList<QMofProperty *> ownedAttributes READ ownedAttributes)
    Q_PROPERTY(QSet<QMofClass *> superClasses READ superClasses STORED false)

    Q_DISABLE_COPY(QMofClass)
    Q_DECLARE_PRIVATE(QMofClass)

public:
    Q_INVOKABLE explicit QMofClass(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofClass();

    // Attributes from QMofClass
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();

    // Association ends from QMofClass
    Q_INVOKABLE QList<QMofClassifier *> nestedClassifiers() const;
    Q_INVOKABLE void addNestedClassifier(QMofClassifier *nestedClassifier);
    Q_INVOKABLE void removeNestedClassifier(QMofClassifier *nestedClassifier);
    Q_INVOKABLE QList<QMofOperation *> ownedOperations() const;
    Q_INVOKABLE void addOwnedOperation(QMofOperation *ownedOperation);
    Q_INVOKABLE void removeOwnedOperation(QMofOperation *ownedOperation);
    Q_INVOKABLE QList<QMofProperty *> ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QMofProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QMofProperty *ownedAttribute);
    Q_INVOKABLE QSet<QMofClass *> superClasses() const;
    Q_INVOKABLE void addSuperClass(QMofClass *superClass);
    Q_INVOKABLE void removeSuperClass(QMofClass *superClass);

    // Operations
    Q_INVOKABLE QSet<QMofNamedElement *> inherit(QSet<QMofNamedElement *> inhs) const;

    virtual void setPropertyData();

protected:
    explicit QMofClass(QMofClassPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFCLASS_H

