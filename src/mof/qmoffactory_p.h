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
#ifndef QMOFFACTORY_P_H
#define QMOFFACTORY_P_H

// Base class includes
#include "private/qmofelement_p.h"

#include "QtMof/QMofFactory"

// Qt includes
#include "QtCore/QString"
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofLink;
class QMofArgument;
class QMofAssociation;
class QMofClass;
class QMofObject;
class QMofPackage;
class QMofDataType;
class QMofFactory;

class Q_MOF_EXPORT QMofFactoryPrivate : public QMofElementPrivate
{
    Q_DECLARE_PUBLIC(QMofFactory)

public:
    explicit QMofFactoryPrivate();
    virtual ~QMofFactoryPrivate();

    QMofPackage *package;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFFACTORY_P_H

