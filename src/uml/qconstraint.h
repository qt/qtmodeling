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
#ifndef QTUML_QCONSTRAINT_H
#define QTUML_QCONSTRAINT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QElement;
class QNamespace;
class QValueSpecification;

class QConstraintPrivate;

class Q_UML_EXPORT QConstraint : public QPackageableElement
{
    Q_OBJECT

    Q_PROPERTY(QNamespace * context READ context WRITE setContext)
    Q_PROPERTY(QValueSpecification * specification READ specification WRITE setSpecification)
    Q_PROPERTY(const QList<QElement *> * constrainedElements READ constrainedElements)

    Q_DISABLE_COPY(QConstraint)
    Q_DECLARE_PRIVATE(QConstraint)

public:
    Q_INVOKABLE explicit QConstraint(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QConstraint();

    // Association ends from QConstraint
    Q_INVOKABLE QNamespace *context() const;
    Q_INVOKABLE void setContext(QNamespace *context);
    Q_INVOKABLE QValueSpecification *specification() const;
    Q_INVOKABLE void setSpecification(QValueSpecification *specification);
    Q_INVOKABLE const QList<QElement *> *constrainedElements() const;
    Q_INVOKABLE void addConstrainedElement(QElement *constrainedElement);
    Q_INVOKABLE void removeConstrainedElement(QElement *constrainedElement);

protected:
    explicit QConstraint(QConstraintPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QConstraint) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QConstraint) *> *)

QT_END_HEADER

#endif // QTUML_QCONSTRAINT_H

