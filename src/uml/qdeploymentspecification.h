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
#ifndef QTUML_QDEPLOYMENTSPECIFICATION_H
#define QTUML_QDEPLOYMENTSPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QArtifact>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QDeployment;

class QDeploymentSpecificationPrivate;

class Q_UML_EXPORT QDeploymentSpecification : public QArtifact
{
    Q_OBJECT

    Q_PROPERTY(QString deploymentLocation READ deploymentLocation WRITE setDeploymentLocation)
    Q_PROPERTY(QString executionLocation READ executionLocation WRITE setExecutionLocation)
    Q_PROPERTY(QDeployment * deployment READ deployment WRITE setDeployment)

    Q_DISABLE_COPY(QDeploymentSpecification)
    Q_DECLARE_PRIVATE(QDeploymentSpecification)

public:
    Q_INVOKABLE explicit QDeploymentSpecification(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QDeploymentSpecification();

    // Attributes from QDeploymentSpecification
    Q_INVOKABLE QString deploymentLocation() const;
    Q_INVOKABLE void setDeploymentLocation(QString deploymentLocation);
    Q_INVOKABLE QString executionLocation() const;
    Q_INVOKABLE void setExecutionLocation(QString executionLocation);

    // Association ends from QDeploymentSpecification
    Q_INVOKABLE QDeployment *deployment() const;
    Q_INVOKABLE void setDeployment(QDeployment *deployment);
    virtual void registerMetaTypes() const;

protected:
    explicit QDeploymentSpecification(QDeploymentSpecificationPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QDEPLOYMENTSPECIFICATION_H

