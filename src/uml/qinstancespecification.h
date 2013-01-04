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
#ifndef QTUML_QINSTANCESPECIFICATION_H
#define QTUML_QINSTANCESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtUml/QDeployedArtifact>
#include <QtUml/QPackageableElement>
#include <QtUml/QDeploymentTarget>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClassifier;
class QSlot;
class QValueSpecification;

class QInstanceSpecificationPrivate;

class Q_UML_EXPORT QInstanceSpecification : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QClassifier *> classifiers READ classifiers)
    Q_PROPERTY(QValueSpecification * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QSet<QSlot *> slots_ READ slots_)

    Q_DISABLE_COPY(QInstanceSpecification)
    Q_DECLARE_PRIVATE(QInstanceSpecification)

public:
    Q_INVOKABLE explicit QInstanceSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QInstanceSpecification();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);
    Q_INVOKABLE QTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QTemplateParameter *templateParameter);

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QDeploymentTarget
    Q_INVOKABLE QSet<QPackageableElement *> deployedElements() const;
    Q_INVOKABLE QSet<QDeployment *> deployments() const;
    Q_INVOKABLE void addDeployment(QDeployment *deployment);
    Q_INVOKABLE void removeDeployment(QDeployment *deployment);

    // Association ends from QInstanceSpecification
    Q_INVOKABLE QSet<QClassifier *> classifiers() const;
    Q_INVOKABLE void addClassifier(QClassifier *classifier);
    Q_INVOKABLE void removeClassifier(QClassifier *classifier);
    Q_INVOKABLE QValueSpecification *specification() const;
    Q_INVOKABLE void setSpecification(QValueSpecification *specification);
    Q_INVOKABLE QSet<QSlot *> slots_() const;
    Q_INVOKABLE void addSlot_(QSlot *slot_);
    Q_INVOKABLE void removeSlot_(QSlot *slot_);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

protected:
    explicit QInstanceSpecification(QInstanceSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QDeployedArtifact *_wrappedDeployedArtifact;
    QPackageableElement *_wrappedPackageableElement;
    QDeploymentTarget *_wrappedDeploymentTarget;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QINSTANCESPECIFICATION_H

