/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QTMOF_QCONSTRAINT_H
#define QTMOF_QCONSTRAINT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QPackageableElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtMof
{

QT_MODULE(QtMof)

// Forward decls for function parameters
class QElement;
class QNamespace;
class QValueSpecification;

class QConstraintPrivate;

class Q_MOF_EXPORT QConstraint : public QPackageableElement
{
    Q_OBJECT

    Q_PROPERTY(QtMof::QNamespace * context READ context WRITE setContext)
    Q_PROPERTY(QtMof::QValueSpecification * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QList<QtMof::QElement *> constrainedElements READ constrainedElements)

    Q_DISABLE_COPY(QConstraint)
    Q_DECLARE_PRIVATE(QConstraint)

public:
    Q_INVOKABLE explicit QConstraint(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QConstraint();

    // Association ends from QConstraint
    Q_INVOKABLE QNamespace *context() const;
    Q_INVOKABLE void setContext(QNamespace *context);
    Q_INVOKABLE QValueSpecification *specification() const;
    Q_INVOKABLE void setSpecification(QValueSpecification *specification);
    Q_INVOKABLE QList<QElement *> constrainedElements() const;
    Q_INVOKABLE void addConstrainedElement(QElement *constrainedElement);
    Q_INVOKABLE void removeConstrainedElement(QElement *constrainedElement);

    virtual void setPropertyData();

protected:
    explicit QConstraint(QConstraintPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTMOF_QCONSTRAINT_H

