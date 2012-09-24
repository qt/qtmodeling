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
#ifndef CLASSES_KERNEL_QCLASSIFIER_H
#define CLASSES_KERNEL_QCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QType>
#include <QtUml/QRedefinableElement>
#include <QtUml/QNamespace>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QClassifierPrivate;

class QProperty;
class QFeature;
class QGeneralization;
class QNamedElement;

class Q_UML_EXPORT QClassifier : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setIsAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setIsFinalSpecialization)
    Q_PROPERTY(const QList<QProperty *> * attribute READ attribute)
    Q_PROPERTY(const QList<QFeature *> * feature READ feature)
    Q_PROPERTY(QList<QGeneralization *> * generalization READ generalization)
    Q_PROPERTY(QList<QClassifier *> * redefinedClassifier READ redefinedClassifier)

public:
    explicit QClassifier(QObject *parent = 0);
    virtual ~QClassifier();

    // Attributes (except those derived && !derivedUnion)
    bool isAbstract() const;
    void setIsAbstract(bool isAbstract);
    bool isFinalSpecialization() const;
    void setIsFinalSpecialization(bool isFinalSpecialization);

    // Association-ends (except those derived && !derivedUnion)
    const QList<QProperty *> *attribute() const;
    const QList<QFeature *> *feature() const;
    QList<QGeneralization *> *generalization() const;
    QList<QClassifier *> *redefinedClassifier() const;

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    QList<QFeature *> *allFeatures() const;
    QList<QClassifier *> *allParents() const;
    bool conformsTo(QClassifier *other) const;
    QList<QClassifier *> *general() const;
    bool hasVisibilityOf(QNamedElement *n) const;
    QList<QNamedElement *> *inherit(QList<QNamedElement *> *inhs) const;
    QList<QNamedElement *> *inheritableMembers(QClassifier *c) const;
    QList<QNamedElement *> *inheritedMember() const;
    bool maySpecializeType(QClassifier *c) const;
    QList<QClassifier *> *parents() const;

private:
    Q_DISABLE_COPY(QClassifier)
    Q_DECLARE_PRIVATE(QClassifier)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QClassifier) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QClassifier) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QCLASSIFIER_H

