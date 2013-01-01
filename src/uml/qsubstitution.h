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
#ifndef QTUML_QSUBSTITUTION_H
#define QTUML_QSUBSTITUTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QRealization>

#include <QtWrappedObjects/QWrappedObjectPointer>
using QtWrappedObjects::QWrappedObjectPointer;

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClassifier;

class QSubstitutionPrivate;

class Q_UML_EXPORT QSubstitution : public QRealization
{
    Q_OBJECT

    Q_PROPERTY(QClassifier * contract READ contract WRITE setContract)
    Q_PROPERTY(QClassifier * substitutingClassifier READ substitutingClassifier WRITE setSubstitutingClassifier)

    Q_DISABLE_COPY(QSubstitution)
    Q_DECLARE_PRIVATE(QSubstitution)

public:
    Q_INVOKABLE explicit QSubstitution(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QSubstitution();

    // Association ends from QSubstitution
    Q_INVOKABLE QClassifier *contract() const;
    Q_INVOKABLE void setContract(QClassifier *contract);
    Q_INVOKABLE QClassifier *substitutingClassifier() const;
    Q_INVOKABLE void setSubstitutingClassifier(QClassifier *substitutingClassifier);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addSupplier(QWrappedObjectPointer<QClassifier> contract);
    Q_INVOKABLE void removeSupplier(QWrappedObjectPointer<QClassifier> contract);
    Q_INVOKABLE void addClient(QWrappedObjectPointer<QClassifier> substitutingClassifier);
    Q_INVOKABLE void removeClient(QWrappedObjectPointer<QClassifier> substitutingClassifier);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

protected:
    explicit QSubstitution(QSubstitutionPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QSUBSTITUTION_H

