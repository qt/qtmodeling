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
#ifndef QUMLGENERALIZATIONSETOBJECT_H
#define QUMLGENERALIZATIONSETOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlGeneralizationSet;
class Q_UML_EXPORT QUmlGeneralizationSetObject : public QObject
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComment READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElement READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [ParameterableElement]
    Q_PROPERTY(QObject * owningTemplateParameter READ owningTemplateParameter)
    Q_PROPERTY(QObject * templateParameter READ templateParameter)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependency READ clientDependencies)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QObject * nameExpression READ nameExpression)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility RESET unsetVisibility)

    // Properties [GeneralizationSet]
    Q_PROPERTY(QSet<QObject *> generalization READ generalizations)
    Q_PROPERTY(bool isCovering READ isCovering RESET unsetCovering)
    Q_PROPERTY(bool isDisjoint READ isDisjoint RESET unsetDisjoint)
    Q_PROPERTY(QObject * powertype READ powertype)

public:
    Q_INVOKABLE explicit QUmlGeneralizationSetObject(QUmlGeneralizationSet *qModelingObject);
    virtual ~QUmlGeneralizationSetObject();

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QObject *owningTemplateParameter() const;
    Q_INVOKABLE QObject *templateParameter() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependencies() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [GeneralizationSet]
    Q_INVOKABLE const QSet<QObject *> generalizations() const;
    Q_INVOKABLE bool isCovering() const;
    Q_INVOKABLE bool isDisjoint() const;
    Q_INVOKABLE QObject *powertype() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QObject *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QObject *owningTemplateParameter = 0);
    void setTemplateParameter(QObject *templateParameter = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);
    void unsetVisibility();

    // Slots for owned attributes [GeneralizationSet]
    void addGeneralization(QObject *generalization);
    void removeGeneralization(QObject *generalization);
    void setCovering(bool isCovering);
    void unsetCovering();
    void setDisjoint(bool isDisjoint);
    void unsetDisjoint();
    void setPowertype(QObject *powertype = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLGENERALIZATIONSETOBJECT_H

