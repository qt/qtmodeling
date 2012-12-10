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
#ifndef QTUML_QINTERFACEREALIZATION_H
#define QTUML_QINTERFACEREALIZATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QRealization>

#include <QtMof/QMofPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QInterface;
class QBehavioredClassifier;

class QInterfaceRealizationPrivate;

class Q_UML_EXPORT QInterfaceRealization : public QRealization
{
    Q_OBJECT

    Q_PROPERTY(QBehavioredClassifier * implementingClassifier READ implementingClassifier WRITE setImplementingClassifier)
    Q_PROPERTY(QInterface * contract READ contract WRITE setContract)

    Q_DISABLE_COPY(QInterfaceRealization)
    Q_DECLARE_PRIVATE(QInterfaceRealization)

public:
    Q_INVOKABLE explicit QInterfaceRealization(QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);
    virtual ~QInterfaceRealization();

    // Association ends from QInterfaceRealization
    Q_INVOKABLE QBehavioredClassifier *implementingClassifier() const;
    Q_INVOKABLE void setImplementingClassifier(QBehavioredClassifier *implementingClassifier);
    Q_INVOKABLE QInterface *contract() const;
    Q_INVOKABLE void setContract(QInterface *contract);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClient(QtMof::QMofPointer<QBehavioredClassifier> implementingClassifier);
    Q_INVOKABLE void removeClient(QtMof::QMofPointer<QBehavioredClassifier> implementingClassifier);
    Q_INVOKABLE void addSupplier(QtMof::QMofPointer<QInterface> contract);
    Q_INVOKABLE void removeSupplier(QtMof::QMofPointer<QInterface> contract);

protected:
    explicit QInterfaceRealization(QInterfaceRealizationPrivate &dd, QtMof::QMofObject *parent = 0, QtMof::QMofObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QInterfaceRealization) *> *)

QT_END_HEADER

#endif // QTUML_QINTERFACEREALIZATION_H

