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

QT_BEGIN_HEADER


QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QDeploymentPrivate;
class QDeploymentSpecification;
class QDeployedArtifact;
class QDeploymentTarget;

class Q_UML_EXPORT QDeployment : public QDependency
{
    Q_OBJECT

    // From QDeployment
    Q_PROPERTY(const QSet<QDeploymentSpecification *> * configurations READ configurations)
    Q_PROPERTY(const QSet<QDeployedArtifact *> * deployedArtifacts READ deployedArtifacts)
    Q_PROPERTY(QDeploymentTarget * location READ location WRITE setLocation)

public:
    explicit QDeployment(QObject *parent = 0);
    virtual ~QDeployment();

    // Association-ends (except those derived && !derivedUnion)
    const QSet<QDeploymentSpecification *> *configurations() const;
    void addConfiguration(const QDeploymentSpecification *configuration);
    void removeConfiguration(const QDeploymentSpecification *configuration);
    const QSet<QDeployedArtifact *> *deployedArtifacts() const;
    void addDeployedArtifact(const QDeployedArtifact *deployedArtifact);
    void removeDeployedArtifact(const QDeployedArtifact *deployedArtifact);
    QDeploymentTarget *location() const;
    void setLocation(const QDeploymentTarget *location);

private:
    Q_DISABLE_COPY(QDeployment)
    Q_DECLARE_PRIVATE(QDeployment)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QDeployment *>)
Q_DECLARE_METATYPE(QList<QtUml::QDeployment *> *)

QT_END_HEADER

#endif // QTUML_QDEPLOYMENT_H

