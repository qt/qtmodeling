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
#ifndef CLASSES_KERNEL_QGENERALIZATION_H
#define CLASSES_KERNEL_QGENERALIZATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QDirectedRelationship>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QGeneralizationPrivate;

class QClassifier;

class Q_UML_EXPORT QGeneralization : public QObject, public QDirectedRelationship
{
    Q_OBJECT

    Q_PROPERTY(bool isSubstitutable READ isSubstitutable WRITE setIsSubstitutable)
    Q_PROPERTY(QClassifier * general READ general WRITE setGeneral)
    Q_PROPERTY(QClassifier * specific READ specific WRITE setSpecific)

public:
    explicit QGeneralization();
    virtual ~QGeneralization();

    // Attributes (except those derived && !derivedUnion)
    bool isSubstitutable() const;
    void setIsSubstitutable(bool isSubstitutable);

    // Association-ends (except those derived && !derivedUnion)
    QClassifier *general() const;
    void setGeneral(QClassifier *general);
    QClassifier *specific() const;
    void setSpecific(QClassifier *specific);

private:
    Q_DISABLE_COPY(QGeneralization)
    Q_DECLARE_PRIVATE(QGeneralization)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QGeneralization) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QGeneralization) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QGENERALIZATION_H

