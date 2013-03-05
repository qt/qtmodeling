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
#ifndef QTUML_QEXPANSIONREGION_H
#define QTUML_QEXPANSIONREGION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QStructuredActivityNode>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QExpansionNode;

class QExpansionRegionPrivate;

class Q_UML_EXPORT QExpansionRegion : public QStructuredActivityNode
{
    Q_OBJECT

    Q_PROPERTY(QtUmlNS::ExpansionKind mode READ mode WRITE setMode RESET unsetMode)
    Q_PROPERTY(QSet<QtUml::QExpansionNode *> inputElements READ inputElements)
    Q_PROPERTY(QSet<QtUml::QExpansionNode *> outputElements READ outputElements)

    Q_DISABLE_COPY(QExpansionRegion)
    Q_DECLARE_PRIVATE(QExpansionRegion)

public:
    Q_INVOKABLE explicit QExpansionRegion(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QExpansionRegion();

    // Attributes from QExpansionRegion
    Q_INVOKABLE QtUmlNS::ExpansionKind mode() const;
    Q_INVOKABLE void setMode(QtUmlNS::ExpansionKind mode);
    Q_INVOKABLE void unsetMode();

    // Association ends from QExpansionRegion
    Q_INVOKABLE QSet<QExpansionNode *> inputElements() const;
    Q_INVOKABLE void addInputElement(QExpansionNode *inputElement);
    Q_INVOKABLE void removeInputElement(QExpansionNode *inputElement);
    Q_INVOKABLE QSet<QExpansionNode *> outputElements() const;
    Q_INVOKABLE void addOutputElement(QExpansionNode *outputElement);
    Q_INVOKABLE void removeOutputElement(QExpansionNode *outputElement);

    virtual void setPropertyData();

protected:
    explicit QExpansionRegion(QExpansionRegionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QEXPANSIONREGION_H

