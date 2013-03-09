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
#ifndef QUMLDEPLOYMENTSPECIFICATION_H
#define QUMLDEPLOYMENTSPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlArtifact>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlDeployment;

class QUmlDeploymentSpecificationPrivate;

class Q_UML_EXPORT QUmlDeploymentSpecification : public QUmlArtifact
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QString deploymentLocation READ deploymentLocation WRITE setDeploymentLocation)
    Q_PROPERTY(QString executionLocation READ executionLocation WRITE setExecutionLocation)
    Q_PROPERTY(QUmlDeployment * deployment READ deployment WRITE setDeployment)

    Q_DISABLE_COPY(QUmlDeploymentSpecification)
    Q_DECLARE_PRIVATE(QUmlDeploymentSpecification)

public:
    Q_INVOKABLE explicit QUmlDeploymentSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlDeploymentSpecification();

    // Attributes from QUmlDeploymentSpecification
    Q_INVOKABLE QString deploymentLocation() const;
    Q_INVOKABLE void setDeploymentLocation(QString deploymentLocation);
    Q_INVOKABLE QString executionLocation() const;
    Q_INVOKABLE void setExecutionLocation(QString executionLocation);

    // Association ends from QUmlDeploymentSpecification
    Q_INVOKABLE QUmlDeployment *deployment() const;
    Q_INVOKABLE void setDeployment(QUmlDeployment *deployment);

    virtual void setPropertyData();

protected:
    explicit QUmlDeploymentSpecification(QUmlDeploymentSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLDEPLOYMENTSPECIFICATION_H

