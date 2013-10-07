/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlpackagemerge.h"

#include "private/qumlpackagemergeobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlPackage>

/*!
    \class QUmlPackageMerge

    \inmodule QtUml

    \brief A package merge defines how the contents of one package are extended by the contents of another package.
 */
QUmlPackageMerge::QUmlPackageMerge(bool createQObject) :
    _mergedPackage(0),
    _receivingPackage(0)
{
    if (createQObject)
        _qObject = new QUmlPackageMergeObject(this);
    setPropertyData();
}

QUmlPackageMerge::~QUmlPackageMerge()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlPackageMerge::clone() const
{
    QUmlPackageMerge *c = new QUmlPackageMerge;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (mergedPackage())
        c->setMergedPackage(dynamic_cast<QUmlPackage *>(mergedPackage()->clone()));
    if (receivingPackage())
        c->setReceivingPackage(dynamic_cast<QUmlPackage *>(receivingPackage()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the Package that is to be merged with the receiving package of the PackageMerge.
 */
QUmlPackage *QUmlPackageMerge::mergedPackage() const
{
    // This is a read-write association end

    return _mergedPackage;
}

void QUmlPackageMerge::setMergedPackage(QUmlPackage *mergedPackage)
{
    // This is a read-write association end

    if (_mergedPackage != mergedPackage) {
        // Adjust subsetted properties
        removeTarget(_mergedPackage);

        _mergedPackage = mergedPackage;
        if (mergedPackage && mergedPackage->asQObject() && this->asQObject())
            QObject::connect(mergedPackage->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setMergedPackage()));

        // Adjust subsetted properties
        if (mergedPackage) {
            addTarget(mergedPackage);
        }
    }
}

/*!
    References the Package that is being extended with the contents of the merged package of the PackageMerge.
 */
QUmlPackage *QUmlPackageMerge::receivingPackage() const
{
    // This is a read-write association end

    return _receivingPackage;
}

void QUmlPackageMerge::setReceivingPackage(QUmlPackage *receivingPackage)
{
    // This is a read-write association end

    if (_receivingPackage != receivingPackage) {
        // Adjust subsetted properties
        removeSource(_receivingPackage);

        _receivingPackage = receivingPackage;
        if (receivingPackage && receivingPackage->asQObject() && this->asQObject())
            QObject::connect(receivingPackage->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setReceivingPackage()));

        // Adjust subsetted properties
        setOwner(receivingPackage);
        if (receivingPackage) {
            addSource(receivingPackage);
        }
    }
}

void QUmlPackageMerge::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlPackageMerge");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::DocumentationRole] = QStringLiteral("References the Package that is to be merged with the receiving package of the PackageMerge.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("mergedPackage")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlPackageMerge");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::DocumentationRole] = QStringLiteral("References the Package that is being extended with the contents of the merged package of the PackageMerge.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-owner DirectedRelationship-source");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlPackageMerge")][QStringLiteral("receivingPackage")][QtModeling::OppositeEndRole] = QStringLiteral("Package-packageMerge");

}

void QUmlPackageMerge::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("relatedElements")] = QStringLiteral("QUmlRelationship");
    _classForProperty[QStringLiteral("sources")] = QStringLiteral("QUmlDirectedRelationship");
    _classForProperty[QStringLiteral("targets")] = QStringLiteral("QUmlDirectedRelationship");
    _classForProperty[QStringLiteral("mergedPackage")] = QStringLiteral("QUmlPackageMerge");
    _classForProperty[QStringLiteral("receivingPackage")] = QStringLiteral("QUmlPackageMerge");
}

