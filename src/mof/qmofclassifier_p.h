/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QMOFCLASSIFIER_P_H
#define QMOFCLASSIFIER_P_H

// Base class includes
#include "private/qwrappedobject_p.h"
#include "private/qmoftype_p.h"
#include "private/qmofredefinableelement_p.h"
#include "private/qmofnamespace_p.h"

#include "QtMof/QMofClassifier"

// Qt includes
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofGeneralization;
class QMofNamedElement;
class QMofClassifier;
class QMofProperty;
class QMofFeature;

class Q_MOF_EXPORT QMofClassifierPrivate : public QWrappedObjectPrivate
{
    Q_DECLARE_PUBLIC(QMofClassifier)

public:
    explicit QMofClassifierPrivate();
    virtual ~QMofClassifierPrivate();

    bool isAbstract;
    bool isFinalSpecialization;
    QSet<QMofProperty *> attributes;
    QSet<QMofFeature *> features;
    QSet<QMofClassifier *> redefinedClassifiers;
    QSet<QMofGeneralization *> generalizations;

    // Internal functions for read-only subsetted association ends
    void addAttribute(QMofProperty *attribute);
    void removeAttribute(QMofProperty *attribute);
    void addFeature(QMofFeature *feature);
    void removeFeature(QMofFeature *feature);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFCLASSIFIER_P_H
