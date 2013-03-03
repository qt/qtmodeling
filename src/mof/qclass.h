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
#ifndef QTMOF_QCLASS_H
#define QTMOF_QCLASS_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QNamedElement;
class QProperty;
class QOperation;

class QClassPrivate;

class Q_MOF_EXPORT QClass : public QClassifier
{
    Q_OBJECT

    Q_PROPERTY(bool abstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(QList<QClassifier *> nestedClassifiers READ nestedClassifiers)
    Q_PROPERTY(QList<QOperation *> ownedOperations READ ownedOperations)
    Q_PROPERTY(QList<QProperty *> ownedAttributes READ ownedAttributes)
    Q_PROPERTY(QSet<QClass *> superClasses READ superClasses STORED false)

    Q_DISABLE_COPY(QClass)
    Q_DECLARE_PRIVATE(QClass)

public:
    Q_INVOKABLE explicit QClass(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QClass();

    // Attributes from QClass
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();

    // Association ends from QClass
    Q_INVOKABLE QList<QClassifier *> nestedClassifiers() const;
    Q_INVOKABLE void addNestedClassifier(QClassifier *nestedClassifier);
    Q_INVOKABLE void removeNestedClassifier(QClassifier *nestedClassifier);
    Q_INVOKABLE QList<QOperation *> ownedOperations() const;
    Q_INVOKABLE void addOwnedOperation(QOperation *ownedOperation);
    Q_INVOKABLE void removeOwnedOperation(QOperation *ownedOperation);
    Q_INVOKABLE QList<QProperty *> ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE QSet<QClass *> superClasses() const;
    Q_INVOKABLE void addSuperClass(QClass *superClass);
    Q_INVOKABLE void removeSuperClass(QClass *superClass);

    // Operations
    Q_INVOKABLE QSet<QNamedElement *> inherit(QSet<QNamedElement *> inhs) const;

    virtual void setPropertyData();

protected:
    explicit QClass(QClassPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QCLASS_H

