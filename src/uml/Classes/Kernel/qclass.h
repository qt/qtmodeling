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
#ifndef QTUML_CLASSES_KERNEL_QCLASS_H
#define QTUML_CLASSES_KERNEL_QCLASS_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QClassifier>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QClassPrivate;
class QProperty;
class QOperation;
class QNamedElement;

class Q_UML_EXPORT QClass : public QObject, public QClassifier
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QEnumerations::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QPackageableElement
    Q_PROPERTY(QEnumerations::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QType
    Q_PROPERTY(QPackage * package READ package WRITE setPackage)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QList<QRedefinableElement *> * redefinedElement READ redefinedElement)
    Q_PROPERTY(const QList<QClassifier *> * redefinitionContext READ redefinitionContext)

    // From QNamespace
    Q_PROPERTY(QList<QElementImport *> * elementImport READ elementImport)
    Q_PROPERTY(const QList<QPackageableElement *> * importedMember READ importedMember)
    Q_PROPERTY(const QList<QNamedElement *> * member READ member)
    Q_PROPERTY(const QList<QNamedElement *> * ownedMember READ ownedMember)
    Q_PROPERTY(QList<QConstraint *> * ownedRule READ ownedRule)
    Q_PROPERTY(QList<QPackageImport *> * packageImport READ packageImport)

    // From QClassifier
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization)
    Q_PROPERTY(const QList<QProperty *> * attribute READ attribute)
    Q_PROPERTY(const QList<QFeature *> * feature READ feature)
    Q_PROPERTY(const QList<QClassifier *> * general READ general)
    Q_PROPERTY(QList<QGeneralization *> * generalization READ generalization)
    Q_PROPERTY(const QList<QNamedElement *> * inheritedMember READ inheritedMember)
    Q_PROPERTY(QList<QClassifier *> * redefinedClassifier READ redefinedClassifier)

    // From QClass
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(QList<QClassifier *> * nestedClassifier READ nestedClassifier)
    Q_PROPERTY(QList<QProperty *> * ownedAttribute READ ownedAttribute)
    Q_PROPERTY(QList<QOperation *> * ownedOperation READ ownedOperation)
    Q_PROPERTY(const QList<QClass *> * superClass READ superClass)

public:
    explicit QClass(QObject *parent = 0);
    virtual ~QClass();

    // Attributes (except those derived && !derivedUnion)
    bool isAbstract() const;
    void setAbstract(bool isAbstract);

    // Association-ends (except those derived && !derivedUnion)
    QList<QClassifier *> *nestedClassifier();
    QList<QProperty *> *ownedAttribute();
    QList<QOperation *> *ownedOperation();

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QList<QNamedElement *> *inherit(const QList<QNamedElement *> *inhs) const;
    const QList<QClass *> *superClass() const;

private:
    Q_DISABLE_COPY(QClass)
    Q_DECLARE_PRIVATE(QClass)
};

QT_END_NAMESPACE_QTUML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QtUml::Classes::Kernel::QClass *>)
Q_DECLARE_METATYPE(QList<QtUml::Classes::Kernel::QClass *> *)

QT_END_HEADER

#endif // QTUML_CLASSES_KERNEL_QCLASS_H

