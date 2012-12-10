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
#ifndef QTMOF_QNAMEDELEMENT_H
#define QTMOF_QNAMEDELEMENT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QElement>

// QtMof includes
#include <QtMof/QtMofEnumerations>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QNamespace;

class QNamedElementPrivate;

class Q_MOF_EXPORT QNamedElement : public QElement
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    Q_DISABLE_COPY(QNamedElement)
    Q_DECLARE_PRIVATE(QNamedElement)

public:
    Q_INVOKABLE explicit QNamedElement(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QNamedElement();

    // Attributes from QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from QNamedElement
    Q_INVOKABLE QNamespace *namespace_() const;

    // Operations
    Q_INVOKABLE const QList<QNamespace *> *allNamespaces() const;
    Q_INVOKABLE bool isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Classes which access read-only opposite properties should be friend
    friend class QNamespacePrivate;

protected:
    explicit QNamedElement(QNamedElementPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QNamedElement) *> *)

QT_END_HEADER

#endif // QTMOF_QNAMEDELEMENT_H

