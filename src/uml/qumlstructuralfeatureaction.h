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
#ifndef QUMLSTRUCTURALFEATUREACTION_H
#define QUMLSTRUCTURALFEATUREACTION_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlstructuralfeatureaction_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlInputPin;
class QUmlStructuralFeature;

class Q_UML_EXPORT QUmlStructuralFeatureAction : public QObject, public UmlStructuralFeatureAction
{
    Q_OBJECT
    Q_PROPERTY(QUmlInputPin * object READ object)
    Q_PROPERTY(QUmlStructuralFeature * structuralFeature READ structuralFeature)

public:
    Q_DECL_HIDDEN explicit QUmlStructuralFeatureAction(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlInputPin *object() const;
    Q_INVOKABLE void setObject(QUmlInputPin *object);
    Q_INVOKABLE QUmlStructuralFeature *structuralFeature() const;
    Q_INVOKABLE void setStructuralFeature(QUmlStructuralFeature *structuralFeature);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlStructuralFeatureAction *)
Q_DECLARE_METATYPE(QList<QUmlStructuralFeatureAction *> *)
Q_DECLARE_METATYPE(QSet<QUmlStructuralFeatureAction *> *)

QT_END_HEADER

#endif // QUMLSTRUCTURALFEATUREACTION_H

