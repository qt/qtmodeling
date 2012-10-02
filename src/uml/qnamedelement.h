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
#ifndef QTUML_QNAMEDELEMENT_H
#define QTUML_QNAMEDELEMENT_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtUml/QElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QNamedElementPrivate;
class QPackage;
class QNamespace;
class QDependency;
class QStringExpression;

class Q_UML_EXPORT QNamedElement : public virtual QElement
{
public:
    virtual ~QNamedElement();

    // Attributes (except those derived && !derivedUnion)
    QString name() const;
    void setName(QString name);
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);

    // Association-ends (except those derived && !derivedUnion)
    QList<QDependency *> *clientDependencies();
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    const QNamespace *namespace_() const;

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QList<QNamespace *> *allNamespaces() const;
    const QList<QPackage *> *allOwningPackages() const;
    bool isDistinguishableFrom(const QNamedElement *n, const QNamespace *ns) const;
    QString qualifiedName() const;
    QString separator() const;

protected:
    explicit QNamedElement();
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QNAMEDELEMENT_H

