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

class QDeploymentSpecificationPrivate;
class QDeployment;

class Q_UML_EXPORT QDeploymentSpecification : public QArtifact
{
    Q_OBJECT

    // From QDeploymentSpecification
    Q_PROPERTY(QString deploymentLocation READ deploymentLocation WRITE setDeploymentLocation)
    Q_PROPERTY(QString executionLocation READ executionLocation WRITE setExecutionLocation)
    Q_PROPERTY(QDeployment * deployment READ deployment WRITE setDeployment)

    Q_DISABLE_COPY(QDeploymentSpecification)
    Q_DECLARE_PRIVATE(QDeploymentSpecification)

public:
    explicit QDeploymentSpecification(QObject *parent = 0);
    virtual ~QDeploymentSpecification();

    // Attributes
    QString deploymentLocation() const;
    void setDeploymentLocation(QString deploymentLocation);
    QString executionLocation() const;
    void setExecutionLocation(QString executionLocation);

    // Association-ends
    QDeployment *deployment() const;
    void setDeployment(const QDeployment *deployment);

private:
    QDeploymentSpecificationPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QDeploymentSpecification) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QDeploymentSpecification) *> *)

QT_END_HEADER

#endif // QTUML_QDEPLOYMENTSPECIFICATION_H

