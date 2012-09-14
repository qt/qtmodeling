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
** rights. These rights are described in the Nokia Qt LGPL Exception
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
#ifndef QTUMLGLOBAL_H
#define QTUMLGLOBAL_H

#include <QtCore/qglobal.h>

QT_BEGIN_HEADER

#ifndef QT_STATIC
#    if defined(QT_BUILD_UML_LIB)
#        define Q_UML_EXPORT Q_DECL_EXPORT
#    else
#        define Q_UML_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_UML_EXPORT
#endif

// QtUml macros

#if defined(QT_NAMESPACE)
#    define QT_NAMESPACE_UML QT_NAMESPACE::QtUml
#else
#    define QT_NAMESPACE_UML QtUml
#endif

#define QT_BEGIN_NAMESPACE_UML QT_BEGIN_NAMESPACE namespace QtUml {
#define QT_END_NAMESPACE_UML QT_END_NAMESPACE }
#define QT_USE_NAMESPACE_UML using namespace QT_NAMESPACE_UML;
#define QT_PREPEND_NAMESPACE_UML(name) ::QT_NAMESPACE_UML::name

// QtUml::Classes macros

#define QT_NAMESPACE_UML_CLASSES QT_NAMESPACE_UML::Classes
#define QT_BEGIN_NAMESPACE_UML_CLASSES QT_BEGIN_NAMESPACE_UML namespace Classes {
#define QT_END_NAMESPACE_UML_CLASSES QT_END_NAMESPACE_UML }
#define QT_USE_NAMESPACE_UML_CLASSES using namespace QT_NAMESPACE_UML_CLASSES;
#define QT_PREPEND_NAMESPACE_UML_CLASSES(name) ::QT_NAMESPACE_UML_CLASSES::name

// QtUml::Classes::Kernel macros

#define QT_NAMESPACE_UML_CLASSES_KERNEL QT_NAMESPACE_UML_CLASSES::Kernel
#define QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL QT_BEGIN_NAMESPACE_UML_CLASSES namespace Kernel {
#define QT_END_NAMESPACE_UML_CLASSES_KERNEL QT_END_NAMESPACE_UML_CLASSES }
#define QT_USE_NAMESPACE_UML_CLASSES_KERNEL using namespace QT_NAMESPACE_UML_CLASSES_KERNEL;
#define QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(name) ::QT_NAMESPACE_UML_CLASSES_KERNEL::name

QT_END_HEADER

#endif // QTUMLGLOBAL_H

