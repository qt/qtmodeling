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
#ifndef QUMLINSTANCESPECIFICATION_H
#define QUMLINSTANCESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlDeployedArtifact>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlDeploymentTarget>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlSlot;
class QUmlValueSpecification;

class QUmlInstanceSpecificationPrivate;

class Q_UML_EXPORT QUmlInstanceSpecification : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QUmlTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QSet<QUmlPackageableElement *> deployedElements READ deployedElements STORED false)
    Q_PROPERTY(QSet<QUmlDeployment *> deployments READ deployments)

    Q_PROPERTY(QSet<QUmlClassifier *> classifiers READ classifiers)
    Q_PROPERTY(QUmlValueSpecification * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QSet<QUmlSlot *> slots_ READ slots_)

    Q_DISABLE_COPY(QUmlInstanceSpecification)
    Q_DECLARE_PRIVATE(QUmlInstanceSpecification)

public:
    Q_INVOKABLE explicit QUmlInstanceSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInstanceSpecification();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    Q_INVOKABLE QUmlTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Attributes from aggregated QUmlPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QUmlDeploymentTarget
    Q_INVOKABLE QSet<QUmlPackageableElement *> deployedElements() const;
    Q_INVOKABLE QSet<QUmlDeployment *> deployments() const;
    Q_INVOKABLE void addDeployment(QUmlDeployment *deployment);
    Q_INVOKABLE void removeDeployment(QUmlDeployment *deployment);

    // Association ends from QUmlInstanceSpecification
    Q_INVOKABLE QSet<QUmlClassifier *> classifiers() const;
    Q_INVOKABLE void addClassifier(QUmlClassifier *classifier);
    Q_INVOKABLE void removeClassifier(QUmlClassifier *classifier);
    Q_INVOKABLE QUmlValueSpecification *specification() const;
    Q_INVOKABLE void setSpecification(QUmlValueSpecification *specification);
    Q_INVOKABLE QSet<QUmlSlot *> slots_() const;
    Q_INVOKABLE void addSlot_(QUmlSlot *slot_);
    Q_INVOKABLE void removeSlot_(QUmlSlot *slot_);

    virtual void setPropertyData();

protected:
    explicit QUmlInstanceSpecification(QUmlInstanceSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlDeployedArtifact *_wrappedUmlDeployedArtifact;
    QUmlPackageableElement *_wrappedUmlPackageableElement;
    QUmlDeploymentTarget *_wrappedUmlDeploymentTarget;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINSTANCESPECIFICATION_H

