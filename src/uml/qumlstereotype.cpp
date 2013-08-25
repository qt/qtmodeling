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
#include "qumlstereotype.h"
#include "qumlstereotype_p.h"

#include <QtUml/QUmlImage>
#include <QtUml/QUmlProfile>

QT_BEGIN_NAMESPACE

QUmlStereotypePrivate::QUmlStereotypePrivate() :
    profile(0)
{
}

/*!
    \class QUmlStereotype

    \inmodule QtUml

    \brief A stereotype defines how an existing metaclass may be extended, and enables the use of platform or domain specific terminology or notation in place of, or in addition to, the ones used for the extended metaclass.
 */

QUmlStereotype::QUmlStereotype(bool create_d_ptr) :
    QUmlClass(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStereotypePrivate);
}

// Owned attributes

/*!
    Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.
 */
QSet<QUmlImage *> QUmlStereotype::icon() const
{
    return QSet<QUmlImage *>();
}

void QUmlStereotype::addIcon(QSet<QUmlImage *> icon)
{
    Q_UNUSED(icon);
}

void QUmlStereotype::removeIcon(QSet<QUmlImage *> icon)
{
    Q_UNUSED(icon);
}

/*!
    The profile that directly or indirectly contains this stereotype.
 */
QUmlProfile *QUmlStereotype::profile() const
{
    return 0;
}

// Operations

/*!
    The query containingProfile returns the closest profile directly or indirectly containing this stereotype.
 */
QUmlProfile *QUmlStereotype::containingProfile() const
{
    return 0;
}

QT_END_NAMESPACE

