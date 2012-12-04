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
#ifndef QTUML_QCOMPONENTREALIZATION_H
#define QTUML_QCOMPONENTREALIZATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QRealization>

// Qt includes
#include <QtCore/QSet>

#include <QtUml/QUmlPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QComponent;
class QClassifier;

class QComponentRealizationPrivate;

class Q_UML_EXPORT QComponentRealization : public QRealization
{
    Q_OBJECT

    Q_PROPERTY(QComponent * abstraction READ abstraction WRITE setAbstraction)
    Q_PROPERTY(const QSet<QClassifier *> * realizingClassifiers READ realizingClassifiers)

    Q_DISABLE_COPY(QComponentRealization)
    Q_DECLARE_PRIVATE(QComponentRealization)

public:
    Q_INVOKABLE explicit QComponentRealization(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QComponentRealization();

    // Association ends from QComponentRealization
    Q_INVOKABLE QComponent *abstraction() const;
    Q_INVOKABLE void setAbstraction(QComponent *abstraction);
    Q_INVOKABLE const QSet<QClassifier *> *realizingClassifiers() const;
    Q_INVOKABLE void addRealizingClassifier(QClassifier *realizingClassifier);
    Q_INVOKABLE void removeRealizingClassifier(QClassifier *realizingClassifier);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addSupplier(QUmlPointer<QComponent> abstraction);
    Q_INVOKABLE void removeSupplier(QUmlPointer<QComponent> abstraction);
    Q_INVOKABLE void addClient(QUmlPointer<QClassifier> realizingClassifier);
    Q_INVOKABLE void removeClient(QUmlPointer<QClassifier> realizingClassifier);

protected:
    explicit QComponentRealization(QComponentRealizationPrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QComponentRealization) *> *)

QT_END_HEADER

#endif // QTUML_QCOMPONENTREALIZATION_H

