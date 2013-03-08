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
#ifndef QUMLCOMPONENT_P_H
#define QUMLCOMPONENT_P_H

// Base class includes
#include "private/qumlclass_p.h"

#include "QtUml/QUmlComponent"

// Qt includes
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlComponentRealization;
class QUmlPackageableElement;
class QUmlInterface;
class QUmlComponent;

class Q_UML_EXPORT QUmlComponentPrivate : public QUmlClassPrivate
{
    Q_DECLARE_PUBLIC(QUmlComponent)

public:
    explicit QUmlComponentPrivate();
    virtual ~QUmlComponentPrivate();

    bool isIndirectlyInstantiated;
    QSet<QUmlComponentRealization *> realizations;
    QSet<QUmlPackageableElement *> packagedElements;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCOMPONENT_P_H

