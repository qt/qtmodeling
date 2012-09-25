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
#ifndef CLASSES_KERNEL_QINSTANCESPECIFICATION_H
#define CLASSES_KERNEL_QINSTANCESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QInstanceSpecificationPrivate;

class QClassifier;
class QSlot;
class QValueSpecification;

class Q_UML_EXPORT QInstanceSpecification : public QObject, public QPackageableElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QEnumerations::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QPackageableElement
    Q_PROPERTY(QEnumerations::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QInstanceSpecification
    Q_PROPERTY(QList<QClassifier *> * classifier READ classifier)
    Q_PROPERTY(QList<QSlot *> * slot READ slot)
    Q_PROPERTY(QValueSpecification * specification READ specification WRITE setSpecification)

public:
    explicit QInstanceSpecification(QObject *parent = 0);
    virtual ~QInstanceSpecification();

    // Association-ends (except those derived && !derivedUnion)
    QList<QClassifier *> *classifier();
    QList<QSlot *> *slot();
    QValueSpecification *specification() const;
    void setSpecification(QValueSpecification *specification);

private:
    Q_DISABLE_COPY(QInstanceSpecification)
    Q_DECLARE_PRIVATE(QInstanceSpecification)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QInstanceSpecification) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QInstanceSpecification) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QINSTANCESPECIFICATION_H

