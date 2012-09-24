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
#ifndef CLASSES_KERNEL_QNAMEDELEMENT_H
#define CLASSES_KERNEL_QNAMEDELEMENT_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QEnumerations>

// Base class includes
#include <QtUml/QElement>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QNamedElementPrivate;

class QNamespace;

class Q_UML_EXPORT QNamedElement : public QElement
{
public:
    virtual ~QNamedElement();

    // Attributes (except those derived && !derivedUnion)
    QString name() const;
    void setName(QString name);
    QEnumerations::VisibilityKind visibility() const;
    void setVisibility(QEnumerations::VisibilityKind visibility);

    // Association-ends (except those derived && !derivedUnion)
    const QNamespace *namespace_() const;

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    QList<QNamespace *> *allNamespaces() const;
    bool isDistinguishableFrom(QNamedElement *n, QNamespace *ns) const;
    QString qualifiedName() const;
    QString separator() const;

protected:
    explicit QNamedElement();
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

QT_END_HEADER

#endif // CLASSES_KERNEL_QNAMEDELEMENT_H

