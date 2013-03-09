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
#ifndef QUMLEXTEND_H
#define QUMLEXTEND_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlDirectedRelationship>
#include <QtUml/QUmlNamedElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlConstraint;
class QUmlUseCase;
class QUmlExtensionPoint;

class QUmlExtendPrivate;

class Q_UML_EXPORT QUmlExtend : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QSet<QUmlElement *> relatedElements READ relatedElements)

    Q_PROPERTY(QSet<QUmlElement *> sources READ sources)
    Q_PROPERTY(QSet<QUmlElement *> targets READ targets)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QUmlUseCase * extendedCase READ extendedCase WRITE setExtendedCase)
    Q_PROPERTY(QUmlUseCase * extension READ extension WRITE setExtension)
    Q_PROPERTY(QList<QUmlExtensionPoint *> extensionLocations READ extensionLocations)
    Q_PROPERTY(QUmlConstraint * condition READ condition WRITE setCondition)

    Q_DISABLE_COPY(QUmlExtend)
    Q_DECLARE_PRIVATE(QUmlExtend)

public:
    Q_INVOKABLE explicit QUmlExtend(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlExtend();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Association ends from aggregated QUmlRelationship
    Q_INVOKABLE QSet<QUmlElement *> relatedElements() const;

    // Association ends from aggregated QUmlDirectedRelationship
    Q_INVOKABLE QSet<QUmlElement *> sources() const;
    Q_INVOKABLE QSet<QUmlElement *> targets() const;

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from QUmlExtend
    Q_INVOKABLE QUmlUseCase *extendedCase() const;
    Q_INVOKABLE void setExtendedCase(QUmlUseCase *extendedCase);
    Q_INVOKABLE QUmlUseCase *extension() const;
    Q_INVOKABLE void setExtension(QUmlUseCase *extension);
    Q_INVOKABLE QList<QUmlExtensionPoint *> extensionLocations() const;
    Q_INVOKABLE void addExtensionLocation(QUmlExtensionPoint *extensionLocation);
    Q_INVOKABLE void removeExtensionLocation(QUmlExtensionPoint *extensionLocation);
    Q_INVOKABLE QUmlConstraint *condition() const;
    Q_INVOKABLE void setCondition(QUmlConstraint *condition);

    virtual void setPropertyData();

protected:
    explicit QUmlExtend(QUmlExtendPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlDirectedRelationship *_wrappedUmlDirectedRelationship;
    QUmlNamedElement *_wrappedUmlNamedElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLEXTEND_H

