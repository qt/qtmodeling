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

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtUml/QStructuredActivityNode>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QExpansionRegionPrivate;
class QExpansionNode;

class Q_UML_EXPORT QExpansionRegion : public QStructuredActivityNode
{
    Q_OBJECT

    // From QExpansionRegion
    Q_PROPERTY(QtUml::ExpansionKind mode READ mode WRITE setMode)
    Q_PROPERTY(const QSet<QExpansionNode *> * inputElements READ inputElements)
    Q_PROPERTY(const QSet<QExpansionNode *> * outputElements READ outputElements)

    Q_DISABLE_COPY(QExpansionRegion)

public:
    explicit QExpansionRegion(QObject *parent = 0);
    virtual ~QExpansionRegion();

    // Attributes
    QtUml::ExpansionKind mode() const;
    void setMode(QtUml::ExpansionKind mode);

    // Association-ends
    const QSet<QExpansionNode *> *inputElements() const;
    void addInputElement(const QExpansionNode *inputElement);
    void removeInputElement(const QExpansionNode *inputElement);
    const QSet<QExpansionNode *> *outputElements() const;
    void addOutputElement(const QExpansionNode *outputElement);
    void removeOutputElement(const QExpansionNode *outputElement);

protected:
    explicit QExpansionRegion(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QExpansionRegion) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QExpansionRegion) *> *)

QT_END_HEADER

#endif // QTUML_QEXPANSIONREGION_H

