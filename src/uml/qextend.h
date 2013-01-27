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
#ifndef QTUML_QEXTEND_H
#define QTUML_QEXTEND_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QDirectedRelationship>
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QConstraint;
class QUseCase;
class QExtensionPoint;

class QExtendPrivate;

class Q_UML_EXPORT QExtend : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QUseCase * extendedCase READ extendedCase WRITE setExtendedCase)
    Q_PROPERTY(QUseCase * extension READ extension WRITE setExtension)
    Q_PROPERTY(QList<QExtensionPoint *> extensionLocations READ extensionLocations)
    Q_PROPERTY(QConstraint * condition READ condition WRITE setCondition)

    Q_DISABLE_COPY(QExtend)
    Q_DECLARE_PRIVATE(QExtend)

public:
    Q_INVOKABLE explicit QExtend(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QExtend();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QRelationship
    Q_INVOKABLE QSet<QElement *> relatedElements() const;

    // Association ends from aggregated QDirectedRelationship
    Q_INVOKABLE QSet<QElement *> sources() const;
    Q_INVOKABLE QSet<QElement *> targets() const;

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from QExtend
    Q_INVOKABLE QUseCase *extendedCase() const;
    Q_INVOKABLE void setExtendedCase(QUseCase *extendedCase);
    Q_INVOKABLE QUseCase *extension() const;
    Q_INVOKABLE void setExtension(QUseCase *extension);
    Q_INVOKABLE QList<QExtensionPoint *> extensionLocations() const;
    Q_INVOKABLE void addExtensionLocation(QExtensionPoint *extensionLocation);
    Q_INVOKABLE void removeExtensionLocation(QExtensionPoint *extensionLocation);
    Q_INVOKABLE QConstraint *condition() const;
    Q_INVOKABLE void setCondition(QConstraint *condition);

    virtual void setPropertyData();

protected:
    explicit QExtend(QExtendPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QDirectedRelationship *_wrappedDirectedRelationship;
    QNamedElement *_wrappedNamedElement;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QEXTEND_H

