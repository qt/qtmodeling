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
#ifndef QUMLDEPLOYMENT_H
#define QUMLDEPLOYMENT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umldeployment_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlDeployedArtifact;
class QUmlDeploymentSpecification;
class QUmlDeploymentTarget;

class Q_UML_EXPORT QUmlDeployment : public QObject, public UmlDeployment
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlDeploymentSpecification *> configuration READ configuration)
    Q_PROPERTY(QSet<QUmlDeployedArtifact *> deployedArtifact READ deployedArtifact)
    Q_PROPERTY(QUmlDeploymentTarget * location READ location)

public:
    Q_INVOKABLE explicit QUmlDeployment(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlDeploymentSpecification *> configuration() const;
    Q_INVOKABLE void addConfiguration(UmlDeploymentSpecification *configuration);
    Q_INVOKABLE void removeConfiguration(UmlDeploymentSpecification *configuration);
    Q_INVOKABLE const QSet<QUmlDeployedArtifact *> deployedArtifact() const;
    Q_INVOKABLE void addDeployedArtifact(UmlDeployedArtifact *deployedArtifact);
    Q_INVOKABLE void removeDeployedArtifact(UmlDeployedArtifact *deployedArtifact);
    Q_INVOKABLE QUmlDeploymentTarget *location() const;
    Q_INVOKABLE void setLocation(QUmlDeploymentTarget *location);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlDeployment *)
Q_DECLARE_METATYPE(QList<QUmlDeployment *> *)
Q_DECLARE_METATYPE(QSet<QUmlDeployment *> *)

QT_END_HEADER

#endif // QUMLDEPLOYMENT_H

