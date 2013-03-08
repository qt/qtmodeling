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
#ifndef QUMLPROFILEAPPLICATION_H
#define QUMLPROFILEAPPLICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlDirectedRelationship>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlProfile;
class QUmlPackage;

class QUmlProfileApplicationPrivate;

class Q_UML_EXPORT QUmlProfileApplication : public QUmlDirectedRelationship
{
    Q_OBJECT

    Q_PROPERTY(bool isStrict READ isStrict WRITE setStrict RESET unsetStrict)
    Q_PROPERTY(QUmlPackage * applyingPackage READ applyingPackage WRITE setApplyingPackage)
    Q_PROPERTY(QUmlProfile * appliedProfile READ appliedProfile WRITE setAppliedProfile)

    Q_DISABLE_COPY(QUmlProfileApplication)
    Q_DECLARE_PRIVATE(QUmlProfileApplication)

public:
    Q_INVOKABLE explicit QUmlProfileApplication(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlProfileApplication();

    // Attributes from QUmlProfileApplication
    Q_INVOKABLE bool isStrict() const;
    Q_INVOKABLE void setStrict(bool isStrict);
    Q_INVOKABLE void unsetStrict();

    // Association ends from QUmlProfileApplication
    Q_INVOKABLE QUmlPackage *applyingPackage() const;
    Q_INVOKABLE void setApplyingPackage(QUmlPackage *applyingPackage);
    Q_INVOKABLE QUmlProfile *appliedProfile() const;
    Q_INVOKABLE void setAppliedProfile(QUmlProfile *appliedProfile);

    virtual void setPropertyData();

protected:
    explicit QUmlProfileApplication(QUmlProfileApplicationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPROFILEAPPLICATION_H

