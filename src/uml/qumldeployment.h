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
#ifndef QUMLDEPLOYMENT_H
#define QUMLDEPLOYMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlDependency>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlDeploymentSpecification;
class QUmlDeployedArtifact;
class QUmlDeploymentTarget;

class QUmlDeploymentPrivate;

class Q_UML_EXPORT QUmlDeployment : public QUmlDependency
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlDeploymentTarget * location READ location WRITE setLocation)
    Q_PROPERTY(QSet<QUmlDeploymentSpecification *> configurations READ configurations)
    Q_PROPERTY(QSet<QUmlDeployedArtifact *> deployedArtifacts READ deployedArtifacts)

    Q_DISABLE_COPY(QUmlDeployment)
    Q_DECLARE_PRIVATE(QUmlDeployment)

public:
    Q_INVOKABLE explicit QUmlDeployment(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlDeployment();

    // Association ends from QUmlDeployment
    Q_INVOKABLE QUmlDeploymentTarget *location() const;
    Q_INVOKABLE void setLocation(QUmlDeploymentTarget *location);
    Q_INVOKABLE QSet<QUmlDeploymentSpecification *> configurations() const;
    Q_INVOKABLE void addConfiguration(QUmlDeploymentSpecification *configuration);
    Q_INVOKABLE void removeConfiguration(QUmlDeploymentSpecification *configuration);
    Q_INVOKABLE QSet<QUmlDeployedArtifact *> deployedArtifacts() const;
    Q_INVOKABLE void addDeployedArtifact(QUmlDeployedArtifact *deployedArtifact);
    Q_INVOKABLE void removeDeployedArtifact(QUmlDeployedArtifact *deployedArtifact);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClient(QWrappedObjectPointer<QUmlDeploymentTarget> location);
    Q_INVOKABLE void removeClient(QWrappedObjectPointer<QUmlDeploymentTarget> location);
    Q_INVOKABLE void addSupplier(QWrappedObjectPointer<QUmlDeployedArtifact> deployedArtifact);
    Q_INVOKABLE void removeSupplier(QWrappedObjectPointer<QUmlDeployedArtifact> deployedArtifact);

    virtual void setPropertyData();

protected:
    explicit QUmlDeployment(QUmlDeploymentPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLDEPLOYMENT_H

