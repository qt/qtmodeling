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
#ifndef QUMLENUMERATIONLITERAL_H
#define QUMLENUMERATIONLITERAL_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlenumerationliteral_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlComment;
class QUmlDependency;
class QUmlDeployment;
class QUmlElement;
class QUmlEnumeration;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlPackageableElement;
class QUmlParameterableElement;
class QUmlSlot;
class QUmlStringExpression;
class QUmlTemplateParameter;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlEnumerationLiteral : public QObject, public UmlEnumerationLiteral
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)

    // Properties [ParameterableElement]
    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter)
    Q_PROPERTY(QUmlTemplateParameter * templateParameter READ templateParameter)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [DeploymentTarget]
    Q_PROPERTY(QSet<QUmlPackageableElement *> deployedElement READ deployedElement)
    Q_PROPERTY(QSet<QUmlDeployment *> deployment READ deployment)

    // Properties [InstanceSpecification]
    Q_PROPERTY(QSet<QUmlSlot *> slot_ READ slot_)
    Q_PROPERTY(QUmlValueSpecification * specification READ specification)

    // Properties [EnumerationLiteral]
    Q_PROPERTY(QUmlEnumeration * classifier READ classifier)
    Q_PROPERTY(QUmlEnumeration * enumeration READ enumeration)

public:
    Q_INVOKABLE explicit QUmlEnumerationLiteral(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE QUmlTemplateParameter *templateParameter() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [DeploymentTarget]
    Q_INVOKABLE const QSet<QUmlPackageableElement *> deployedElement() const;
    Q_INVOKABLE const QSet<QUmlDeployment *> deployment() const;

    // Owned attributes [InstanceSpecification]
    Q_INVOKABLE const QSet<QUmlSlot *> slot_() const;
    Q_INVOKABLE QUmlValueSpecification *specification() const;

    // Owned attributes [EnumerationLiteral]
    Q_INVOKABLE QUmlEnumeration *classifier() const;
    Q_INVOKABLE QUmlEnumeration *enumeration() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [DeploymentTarget]
    void addDeployment(UmlDeployment *deployment);
    void removeDeployment(UmlDeployment *deployment);

    // Slots for owned attributes [InstanceSpecification]
    void addSlot(UmlSlot *slot_);
    void removeSlot(UmlSlot *slot_);
    void setSpecification(QUmlValueSpecification *specification);

    // Slots for owned attributes [EnumerationLiteral]
    void setEnumeration(QUmlEnumeration *enumeration);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlEnumerationLiteral *)
Q_DECLARE_METATYPE(QList<QUmlEnumerationLiteral *> *)
Q_DECLARE_METATYPE(QSet<QUmlEnumerationLiteral *> *)

QT_END_HEADER

#endif // QUMLENUMERATIONLITERAL_H

