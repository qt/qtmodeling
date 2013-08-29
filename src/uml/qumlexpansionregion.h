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
#ifndef QUMLEXPANSIONREGION_H
#define QUMLEXPANSIONREGION_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlexpansionregion_p.h"
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlExpansionNode;

class Q_UML_EXPORT QUmlExpansionRegion : public QObject, public UmlExpansionRegion
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlExpansionNode *> inputElement READ inputElement)
    Q_PROPERTY(QtUml::ExpansionKind mode READ mode)
    Q_PROPERTY(QSet<QUmlExpansionNode *> outputElement READ outputElement)

public:
    Q_INVOKABLE explicit QUmlExpansionRegion(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlExpansionNode *> inputElement() const;
    Q_INVOKABLE void addInputElement(UmlExpansionNode *inputElement);
    Q_INVOKABLE void removeInputElement(UmlExpansionNode *inputElement);
    Q_INVOKABLE QtUml::ExpansionKind mode() const;
    Q_INVOKABLE void setMode(QtUml::ExpansionKind mode);
    Q_INVOKABLE const QSet<QUmlExpansionNode *> outputElement() const;
    Q_INVOKABLE void addOutputElement(UmlExpansionNode *outputElement);
    Q_INVOKABLE void removeOutputElement(UmlExpansionNode *outputElement);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlExpansionRegion *)
Q_DECLARE_METATYPE(QList<QUmlExpansionRegion *> *)
Q_DECLARE_METATYPE(QSet<QUmlExpansionRegion *> *)

QT_END_HEADER

#endif // QUMLEXPANSIONREGION_H

