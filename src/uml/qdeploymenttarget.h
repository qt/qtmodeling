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
#ifndef QTUML_QDEPLOYMENTTARGET_H
#define QTUML_QDEPLOYMENTTARGET_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QPackageableElement;
class QDeployment;

class QDeploymentTargetPrivate;

class Q_UML_EXPORT QDeploymentTarget : public QNamedElement
{
    Q_OBJECT

    // From QDeploymentTarget
    Q_PROPERTY(const QSet<QPackageableElement *> * deployedElements READ deployedElements)
    Q_PROPERTY(const QSet<QDeployment *> * deployments READ deployments)

    Q_DISABLE_COPY(QDeploymentTarget)
    Q_DECLARE_PRIVATE(QDeploymentTarget)

public:
    explicit QDeploymentTarget(QObject *parent = 0);
    virtual ~QDeploymentTarget();

    // Association ends from QDeploymentTarget
    const QSet<QPackageableElement *> *deployedElements() const;
    const QSet<QDeployment *> *deployments() const;
    void addDeployment(QDeployment *deployment);
    void removeDeployment(QDeployment *deployment);

    // Overriden methods for subsetted properties
    void addClientDependency(QDeployment *deployment);
    void removeClientDependency(QDeployment *deployment);

protected:
    explicit QDeploymentTarget(QDeploymentTargetPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QDeploymentTarget) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QDeploymentTarget) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QDeploymentTarget) *> *)

QT_END_HEADER

#endif // QTUML_QDEPLOYMENTTARGET_H

