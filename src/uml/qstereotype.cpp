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

#include "qstereotype.h"
#include "qstereotype_p.h"
#include "qelement_p.h"

#include <QtUml/QImage>
#include <QtUml/QProfile>

QT_BEGIN_NAMESPACE_QTUML

QStereotypePrivate::QStereotypePrivate() :
    icons(new QSet<QImage *>)
{
}

QStereotypePrivate::~QStereotypePrivate()
{
    delete icons;
}

void QStereotypePrivate::addIcon(const QImage *icon)
{
    this->icons->insert(const_cast<QImage *>(icon));

    // Adjust subsetted property(ies)
    addOwnedElement(icon);
}

void QStereotypePrivate::removeIcon(const QImage *icon)
{
    this->icons->remove(const_cast<QImage *>(icon));

    // Adjust subsetted property(ies)
    removeOwnedElement(icon);
}

/*!
    \class QStereotype

    \inmodule QtUml

    \brief A stereotype defines how an existing metaclass may be extended, and enables the use of platform or domain specific terminology or notation in place of, or in addition to, the ones used for the extended metaclass.
 */

QStereotype::QStereotype(QObject *parent)
    : QClass(false, parent)
{
    d_umlptr = new QStereotypePrivate;
}

QStereotype::QStereotype(bool createPimpl, QObject *parent)
    : QClass(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QStereotypePrivate;
}

QStereotype::~QStereotype()
{
}

/*!
    Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.
 */
const QSet<QImage *> *QStereotype::icons() const
{
    QTUML_D(const QStereotype);
    return d->icons;
}

void QStereotype::addIcon(const QImage *icon)
{
    QTUML_D(QStereotype);
    d->addIcon(const_cast<QImage *>(icon));
}

void QStereotype::removeIcon(const QImage *icon)
{
    QTUML_D(QStereotype);
    d->removeIcon(const_cast<QImage *>(icon));
}

/*!
    The profile that directly or indirectly contains this stereotype.
 */
QProfile *QStereotype::profile() const
{
    qWarning("QStereotype::profile: to be implemented (this is a derived associationend)");
}

/*!
    The query containingProfile returns the closest profile directly or indirectly containing this stereotype.
 */
QProfile *QStereotype::containingProfile() const
{
    qWarning("QStereotype::containingProfile: operation to be implemented");
}

#include "moc_qstereotype.cpp"

QT_END_NAMESPACE_QTUML

