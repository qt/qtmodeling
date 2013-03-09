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
#ifndef QUMLSTRUCTURALFEATUREACTION_H
#define QUMLSTRUCTURALFEATUREACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;
class QUmlStructuralFeature;

class QUmlStructuralFeatureActionPrivate;

class Q_UML_EXPORT QUmlStructuralFeatureAction : public QUmlAction
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlInputPin * object READ object WRITE setObject)
    Q_PROPERTY(QUmlStructuralFeature * structuralFeature READ structuralFeature WRITE setStructuralFeature)

    Q_DISABLE_COPY(QUmlStructuralFeatureAction)
    Q_DECLARE_PRIVATE(QUmlStructuralFeatureAction)

public:
    Q_INVOKABLE explicit QUmlStructuralFeatureAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlStructuralFeatureAction();

    // Association ends from QUmlStructuralFeatureAction
    Q_INVOKABLE QUmlInputPin *object() const;
    Q_INVOKABLE void setObject(QUmlInputPin *object);
    Q_INVOKABLE QUmlStructuralFeature *structuralFeature() const;
    Q_INVOKABLE void setStructuralFeature(QUmlStructuralFeature *structuralFeature);

    virtual void setPropertyData();

protected:
    explicit QUmlStructuralFeatureAction(QUmlStructuralFeatureActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTRUCTURALFEATUREACTION_H

