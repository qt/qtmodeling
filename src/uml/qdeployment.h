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
#ifndef QTUML_QDEPLOYMENT_H
#define QTUML_QDEPLOYMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QDependency>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>
using QtWrappedObjects::QWrappedObjectPointer;

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QDeploymentSpecification;
class QDeployedArtifact;
class QDeploymentTarget;

class QDeploymentPrivate;

class Q_UML_EXPORT QDeployment : public QDependency
{
    Q_OBJECT

    Q_PROPERTY(QDeploymentTarget * location READ location WRITE setLocation)
    Q_PROPERTY(QSet<QDeploymentSpecification *> configurations READ configurations)
    Q_PROPERTY(QSet<QDeployedArtifact *> deployedArtifacts READ deployedArtifacts)

    Q_DISABLE_COPY(QDeployment)
    Q_DECLARE_PRIVATE(QDeployment)

public:
    Q_INVOKABLE explicit QDeployment(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QDeployment();

    // Association ends from QDeployment
    Q_INVOKABLE QDeploymentTarget *location() const;
    Q_INVOKABLE void setLocation(QDeploymentTarget *location);
    Q_INVOKABLE const QSet<QDeploymentSpecification *> &configurations() const;
    Q_INVOKABLE void addConfiguration(QDeploymentSpecification *configuration);
    Q_INVOKABLE void removeConfiguration(QDeploymentSpecification *configuration);
    Q_INVOKABLE const QSet<QDeployedArtifact *> &deployedArtifacts() const;
    Q_INVOKABLE void addDeployedArtifact(QDeployedArtifact *deployedArtifact);
    Q_INVOKABLE void removeDeployedArtifact(QDeployedArtifact *deployedArtifact);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClient(QWrappedObjectPointer<QDeploymentTarget> location);
    Q_INVOKABLE void removeClient(QWrappedObjectPointer<QDeploymentTarget> location);
    Q_INVOKABLE void addSupplier(QWrappedObjectPointer<QDeployedArtifact> deployedArtifact);
    Q_INVOKABLE void removeSupplier(QWrappedObjectPointer<QDeployedArtifact> deployedArtifact);

protected:
    explicit QDeployment(QDeploymentPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QDEPLOYMENT_H

