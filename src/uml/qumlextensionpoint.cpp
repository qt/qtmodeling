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
#include "qumlextensionpoint.h"

#include "private/qumlextensionpointobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>
/*!
    \class QUmlExtensionPoint

    \inmodule QtUml

    \brief An extension point identifies a point in the behavior of a use case where that behavior can be extended by the behavior of some other (extending) use case, as specified by an extend relationship.
 */
QUmlExtensionPoint::QUmlExtensionPoint(bool createQObject) :
    _useCase(0)
{
    if (createQObject)
        _qObject = new QUmlExtensionPointObject(this);
    setPropertyData();
}

QUmlExtensionPoint::~QUmlExtensionPoint()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlExtensionPoint::clone() const
{
    QUmlExtensionPoint *c = new QUmlExtensionPoint;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    if (useCase())
        c->setUseCase(dynamic_cast<QUmlUseCase *>(useCase()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the use case that owns this extension point.
 */
QUmlUseCase *QUmlExtensionPoint::useCase() const
{
    // This is a read-write association end

    return _useCase;
}

void QUmlExtensionPoint::setUseCase(QUmlUseCase *useCase)
{
    // This is a read-write association end

    if (_useCase != useCase) {
        // Adjust subsetted properties

        _useCase = useCase;
        if (useCase->asQObject() && this->asQObject())
            QObject::connect(useCase->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setUseCase()));

        // Adjust subsetted properties
        setNamespace(useCase);
    }
}

void QUmlExtensionPoint::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("useCase")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("useCase")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("useCase")][QtModeling::DocumentationRole] = QStringLiteral("References the use case that owns this extension point.");
    QModelingObject::propertyDataHash[QStringLiteral("useCase")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("useCase")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("NamedElement-namespace");
    QModelingObject::propertyDataHash[QStringLiteral("useCase")][QtModeling::OppositeEndRole] = QStringLiteral("UseCase-extensionPoint");

}

