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
#ifndef QTMOF_QCLASSIFIER_P_H
#define QTMOF_QCLASSIFIER_P_H

// Base class includes
#include "private/qwrappedobject_p.h"
#include "private/qtype_p.h"
#include "private/qredefinableelement_p.h"
#include "private/qnamespace_p.h"

#include "QtMof/QClassifier"

// Qt includes
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QGeneralization;
class QNamedElement;
class QClassifier;
class QProperty;
class QFeature;

class Q_MOF_EXPORT QClassifierPrivate : public QWrappedObjectPrivate
{
    Q_DECLARE_PUBLIC(QClassifier)

public:
    explicit QClassifierPrivate();
    virtual ~QClassifierPrivate();

    bool isAbstract;
    bool isFinalSpecialization;
    QSet<QProperty *> attributes;
    QSet<QFeature *> features;
    QSet<QClassifier *> redefinedClassifiers;
    QSet<QGeneralization *> generalizations;

    // Internal functions for read-only subsetted association ends
    void addAttribute(QProperty *attribute);
    void removeAttribute(QProperty *attribute);
    void addFeature(QFeature *feature);
    void removeFeature(QFeature *feature);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QCLASSIFIER_P_H

