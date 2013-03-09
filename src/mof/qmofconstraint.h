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
#ifndef QMOFCONSTRAINT_H
#define QMOFCONSTRAINT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofPackageableElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofElement;
class QMofNamespace;
class QMofValueSpecification;

class QMofConstraintPrivate;

class Q_MOF_EXPORT QMofConstraint : public QMofPackageableElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QMofNamespace * context READ context WRITE setContext)
    Q_PROPERTY(QMofValueSpecification * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QList<QMofElement *> constrainedElements READ constrainedElements)

    Q_DISABLE_COPY(QMofConstraint)
    Q_DECLARE_PRIVATE(QMofConstraint)

public:
    Q_INVOKABLE explicit QMofConstraint(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofConstraint();

    // Association ends from QMofConstraint
    Q_INVOKABLE QMofNamespace *context() const;
    Q_INVOKABLE void setContext(QMofNamespace *context);
    Q_INVOKABLE QMofValueSpecification *specification() const;
    Q_INVOKABLE void setSpecification(QMofValueSpecification *specification);
    Q_INVOKABLE QList<QMofElement *> constrainedElements() const;
    Q_INVOKABLE void addConstrainedElement(QMofElement *constrainedElement);
    Q_INVOKABLE void removeConstrainedElement(QMofElement *constrainedElement);

    virtual void setPropertyData();

protected:
    explicit QMofConstraint(QMofConstraintPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFCONSTRAINT_H

