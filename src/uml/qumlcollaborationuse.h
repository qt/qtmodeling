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
#ifndef QUMLCOLLABORATIONUSE_H
#define QUMLCOLLABORATIONUSE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlDependency;
class QUmlCollaboration;

class QUmlCollaborationUsePrivate;

class Q_UML_EXPORT QUmlCollaborationUse : public QUmlNamedElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlCollaboration * type READ type WRITE setType)
    Q_PROPERTY(QSet<QUmlDependency *> roleBindings READ roleBindings)

    Q_DISABLE_COPY(QUmlCollaborationUse)
    Q_DECLARE_PRIVATE(QUmlCollaborationUse)

public:
    Q_INVOKABLE explicit QUmlCollaborationUse(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlCollaborationUse();

    // Association ends from QUmlCollaborationUse
    Q_INVOKABLE QUmlCollaboration *type() const;
    Q_INVOKABLE void setType(QUmlCollaboration *type);
    Q_INVOKABLE QSet<QUmlDependency *> roleBindings() const;
    Q_INVOKABLE void addRoleBinding(QUmlDependency *roleBinding);
    Q_INVOKABLE void removeRoleBinding(QUmlDependency *roleBinding);

    virtual void setPropertyData();

protected:
    explicit QUmlCollaborationUse(QUmlCollaborationUsePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCOLLABORATIONUSE_H

