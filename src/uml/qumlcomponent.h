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
#ifndef QUMLCOMPONENT_H
#define QUMLCOMPONENT_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlcomponent_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlComponentRealization;
class QUmlInterface;
class QUmlPackageableElement;

class Q_UML_EXPORT QUmlComponent : public QObject, public UmlComponent
{
    Q_OBJECT
    Q_PROPERTY(bool isIndirectlyInstantiated READ isIndirectlyInstantiated)
    Q_PROPERTY(QSet<QUmlPackageableElement *> packagedElement READ packagedElement)
    Q_PROPERTY(QSet<QUmlInterface *> provided READ provided)
    Q_PROPERTY(QSet<QUmlComponentRealization *> realization READ realization)
    Q_PROPERTY(QSet<QUmlInterface *> required READ required)

public:
    Q_INVOKABLE explicit QUmlComponent(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE bool isIndirectlyInstantiated() const;
    Q_INVOKABLE void setIndirectlyInstantiated(bool isIndirectlyInstantiated);
    Q_INVOKABLE const QSet<QUmlPackageableElement *> packagedElement() const;
    Q_INVOKABLE void addPackagedElement(UmlPackageableElement *packagedElement);
    Q_INVOKABLE void removePackagedElement(UmlPackageableElement *packagedElement);
    Q_INVOKABLE const QSet<QUmlInterface *> provided() const;
    Q_INVOKABLE const QSet<QUmlComponentRealization *> realization() const;
    Q_INVOKABLE void addRealization(UmlComponentRealization *realization);
    Q_INVOKABLE void removeRealization(UmlComponentRealization *realization);
    Q_INVOKABLE const QSet<QUmlInterface *> required() const;

    // Operations
    Q_INVOKABLE QSet<QUmlInterface *> realizedInterfaces(QUmlClassifier *classifier) const;
    Q_INVOKABLE QSet<QUmlInterface *> usedInterfaces(QUmlClassifier *classifier) const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlComponent *)
Q_DECLARE_METATYPE(QList<QUmlComponent *> *)
Q_DECLARE_METATYPE(QSet<QUmlComponent *> *)

QT_END_HEADER

#endif // QUMLCOMPONENT_H

