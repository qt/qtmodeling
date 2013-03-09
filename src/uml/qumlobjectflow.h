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
#ifndef QUMLOBJECTFLOW_H
#define QUMLOBJECTFLOW_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlActivityEdge>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlBehavior;

class QUmlObjectFlowPrivate;

class Q_UML_EXPORT QUmlObjectFlow : public QUmlActivityEdge
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isMultireceive READ isMultireceive WRITE setMultireceive RESET unsetMultireceive)
    Q_PROPERTY(bool isMulticast READ isMulticast WRITE setMulticast RESET unsetMulticast)
    Q_PROPERTY(QUmlBehavior * selection READ selection WRITE setSelection)
    Q_PROPERTY(QUmlBehavior * transformation READ transformation WRITE setTransformation)

    Q_DISABLE_COPY(QUmlObjectFlow)
    Q_DECLARE_PRIVATE(QUmlObjectFlow)

public:
    Q_INVOKABLE explicit QUmlObjectFlow(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlObjectFlow();

    // Attributes from QUmlObjectFlow
    Q_INVOKABLE bool isMultireceive() const;
    Q_INVOKABLE void setMultireceive(bool isMultireceive);
    Q_INVOKABLE void unsetMultireceive();
    Q_INVOKABLE bool isMulticast() const;
    Q_INVOKABLE void setMulticast(bool isMulticast);
    Q_INVOKABLE void unsetMulticast();

    // Association ends from QUmlObjectFlow
    Q_INVOKABLE QUmlBehavior *selection() const;
    Q_INVOKABLE void setSelection(QUmlBehavior *selection);
    Q_INVOKABLE QUmlBehavior *transformation() const;
    Q_INVOKABLE void setTransformation(QUmlBehavior *transformation);

    virtual void setPropertyData();

protected:
    explicit QUmlObjectFlow(QUmlObjectFlowPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOBJECTFLOW_H

