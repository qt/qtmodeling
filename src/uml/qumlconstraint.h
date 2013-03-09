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
#ifndef QUMLCONSTRAINT_H
#define QUMLCONSTRAINT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlPackageableElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlElement;
class QUmlNamespace;
class QUmlValueSpecification;

class QUmlConstraintPrivate;

class Q_UML_EXPORT QUmlConstraint : public QUmlPackageableElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlNamespace * context READ context WRITE setContext)
    Q_PROPERTY(QUmlValueSpecification * specification READ specification WRITE setSpecification)
    Q_PROPERTY(QList<QUmlElement *> constrainedElements READ constrainedElements)

    Q_DISABLE_COPY(QUmlConstraint)
    Q_DECLARE_PRIVATE(QUmlConstraint)

public:
    Q_INVOKABLE explicit QUmlConstraint(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlConstraint();

    // Association ends from QUmlConstraint
    Q_INVOKABLE QUmlNamespace *context() const;
    Q_INVOKABLE void setContext(QUmlNamespace *context);
    Q_INVOKABLE QUmlValueSpecification *specification() const;
    Q_INVOKABLE void setSpecification(QUmlValueSpecification *specification);
    Q_INVOKABLE QList<QUmlElement *> constrainedElements() const;
    Q_INVOKABLE void addConstrainedElement(QUmlElement *constrainedElement);
    Q_INVOKABLE void removeConstrainedElement(QUmlElement *constrainedElement);

    virtual void setPropertyData();

protected:
    explicit QUmlConstraint(QUmlConstraintPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCONSTRAINT_H

