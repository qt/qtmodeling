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
#ifndef QUMLPROTOCOLCONFORMANCE_H
#define QUMLPROTOCOLCONFORMANCE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlDirectedRelationship>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlProtocolStateMachine;

class QUmlProtocolConformancePrivate;

class Q_UML_EXPORT QUmlProtocolConformance : public QUmlDirectedRelationship
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlProtocolStateMachine * specificMachine READ specificMachine WRITE setSpecificMachine)
    Q_PROPERTY(QUmlProtocolStateMachine * generalMachine READ generalMachine WRITE setGeneralMachine)

    Q_DISABLE_COPY(QUmlProtocolConformance)
    Q_DECLARE_PRIVATE(QUmlProtocolConformance)

public:
    Q_INVOKABLE explicit QUmlProtocolConformance(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlProtocolConformance();

    // Association ends from QUmlProtocolConformance
    Q_INVOKABLE QUmlProtocolStateMachine *specificMachine() const;
    Q_INVOKABLE void setSpecificMachine(QUmlProtocolStateMachine *specificMachine);
    Q_INVOKABLE QUmlProtocolStateMachine *generalMachine() const;
    Q_INVOKABLE void setGeneralMachine(QUmlProtocolStateMachine *generalMachine);

    virtual void setPropertyData();

protected:
    explicit QUmlProtocolConformance(QUmlProtocolConformancePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPROTOCOLCONFORMANCE_H

