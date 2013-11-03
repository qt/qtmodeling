/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QMOFPACKAGEMERGEOBJECT_H
#define QMOFPACKAGEMERGEOBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofPackageMerge;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofPackageMergeObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofPackageMergeObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [Relationship]
    Q_PROPERTY(QSet<QObject *> relatedElements READ relatedElements NOTIFY relatedElementsChanged)

    // Properties [DirectedRelationship]
    Q_PROPERTY(QSet<QObject *> sources READ sources NOTIFY sourcesChanged)
    Q_PROPERTY(QSet<QObject *> targets READ targets NOTIFY targetsChanged)

    // Properties [PackageMerge]
    Q_PROPERTY(QObject * mergedPackage READ mergedPackage WRITE setMergedPackage NOTIFY mergedPackageChanged)
    Q_PROPERTY(QObject * receivingPackage READ receivingPackage WRITE setReceivingPackage NOTIFY receivingPackageChanged)

public:
    Q_INVOKABLE explicit QMofPackageMergeObject(QMofPackageMerge *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [Relationship]
    Q_INVOKABLE const QSet<QObject *> relatedElements() const;

    // Owned attributes [DirectedRelationship]
    Q_INVOKABLE const QSet<QObject *> sources() const;
    Q_INVOKABLE const QSet<QObject *> targets() const;

    // Owned attributes [PackageMerge]
    Q_INVOKABLE QObject *mergedPackage() const;
    Q_INVOKABLE QObject *receivingPackage() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QObject *getMetaClass() const;
    Q_INVOKABLE QObject *container() const;
    Q_INVOKABLE bool isInstanceOfType(QObject *type, bool includesSubtypes) const;
    Q_INVOKABLE void delete_();

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [Relationship]
    void Q_DECL_HIDDEN addRelatedElement(QObject *relatedElement);
    void Q_DECL_HIDDEN removeRelatedElement(QObject *relatedElement);

    // Slots for owned attributes [DirectedRelationship]
    void Q_DECL_HIDDEN addSource(QObject *source);
    void Q_DECL_HIDDEN removeSource(QObject *source);
    void Q_DECL_HIDDEN addTarget(QObject *target);
    void Q_DECL_HIDDEN removeTarget(QObject *target);

    // Slots for owned attributes [PackageMerge]
    void setMergedPackage(QObject *mergedPackage = 0);
    void setReceivingPackage(QObject *receivingPackage = 0);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [Relationship]
    void relatedElementsChanged(QSet<QObject *> relatedElements);

    // Signals for owned attributes [DirectedRelationship]
    void sourcesChanged(QSet<QObject *> sources);
    void targetsChanged(QSet<QObject *> targets);

    // Signals for owned attributes [PackageMerge]
    void mergedPackageChanged(QObject *mergedPackage);
    void receivingPackageChanged(QObject *receivingPackage);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFPACKAGEMERGEOBJECT_H

