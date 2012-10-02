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
#ifndef QTUML_QPACKAGEMERGE_H
#define QTUML_QPACKAGEMERGE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QDirectedRelationship>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QPackageMergePrivate;
class QPackage;

class Q_UML_EXPORT QPackageMerge : public QObject, public QDirectedRelationship
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QRelationship
    Q_PROPERTY(const QList<QElement *> * relatedElement READ relatedElement)

    // From QDirectedRelationship
    Q_PROPERTY(const QList<QElement *> * source READ source)
    Q_PROPERTY(const QList<QElement *> * target READ target)

    // From QPackageMerge
    Q_PROPERTY(QPackage * mergedPackage READ mergedPackage WRITE setMergedPackage)
    Q_PROPERTY(QPackage * receivingPackage READ receivingPackage WRITE setReceivingPackage)

public:
    explicit QPackageMerge(QObject *parent = 0);
    virtual ~QPackageMerge();

    // Association-ends (except those derived && !derivedUnion)
    QPackage *mergedPackage() const;
    void setMergedPackage(QPackage *mergedPackage);
    QPackage *receivingPackage() const;
    void setReceivingPackage(QPackage *receivingPackage);

private:
    Q_DISABLE_COPY(QPackageMerge)
    Q_DECLARE_PRIVATE(QPackageMerge)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QPackageMerge *>)
Q_DECLARE_METATYPE(QList<QtUml::QPackageMerge *> *)

QT_END_HEADER

#endif // QTUML_QPACKAGEMERGE_H

