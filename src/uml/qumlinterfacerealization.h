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
#ifndef QUMLINTERFACEREALIZATION_H
#define QUMLINTERFACEREALIZATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlRealization>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInterface;
class QUmlBehavioredClassifier;

class QUmlInterfaceRealizationPrivate;

class Q_UML_EXPORT QUmlInterfaceRealization : public QUmlRealization
{
    Q_OBJECT

    Q_PROPERTY(QUmlBehavioredClassifier * implementingClassifier READ implementingClassifier WRITE setImplementingClassifier)
    Q_PROPERTY(QUmlInterface * contract READ contract WRITE setContract)

    Q_DISABLE_COPY(QUmlInterfaceRealization)
    Q_DECLARE_PRIVATE(QUmlInterfaceRealization)

public:
    Q_INVOKABLE explicit QUmlInterfaceRealization(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInterfaceRealization();

    // Association ends from QUmlInterfaceRealization
    Q_INVOKABLE QUmlBehavioredClassifier *implementingClassifier() const;
    Q_INVOKABLE void setImplementingClassifier(QUmlBehavioredClassifier *implementingClassifier);
    Q_INVOKABLE QUmlInterface *contract() const;
    Q_INVOKABLE void setContract(QUmlInterface *contract);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClient(QWrappedObjectPointer<QUmlBehavioredClassifier> implementingClassifier);
    Q_INVOKABLE void removeClient(QWrappedObjectPointer<QUmlBehavioredClassifier> implementingClassifier);
    Q_INVOKABLE void addSupplier(QWrappedObjectPointer<QUmlInterface> contract);
    Q_INVOKABLE void removeSupplier(QWrappedObjectPointer<QUmlInterface> contract);

    virtual void setPropertyData();

protected:
    explicit QUmlInterfaceRealization(QUmlInterfaceRealizationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERFACEREALIZATION_H

