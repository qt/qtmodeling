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

#include "qmanifestation.h"

QT_BEGIN_NAMESPACE_QTUML

class QManifestationPrivate
{
public:
    explicit QManifestationPrivate();
    virtual ~QManifestationPrivate();

    QPackageableElement *utilizedElement;
};

QManifestationPrivate::QManifestationPrivate()
{
}

QManifestationPrivate::~QManifestationPrivate()
{
}

/*!
    \class QManifestation

    \inmodule QtUml

    \brief A manifestation is the concrete physical rendering of one or more model elements by an artifact.
 */

QManifestation::QManifestation(QObject *parent)
    : QAbstraction(parent), d_ptr(new QManifestationPrivate)
{
}

QManifestation::~QManifestation()
{
    delete d_ptr;
}

/*!
    The model element that is utilized in the manifestation in an Artifact.
 */
QPackageableElement *QManifestation::utilizedElement() const
{
    return d_ptr->utilizedElement;
}

void QManifestation::setUtilizedElement(const QPackageableElement *utilizedElement)
{
    d_ptr->utilizedElement = const_cast<QPackageableElement *>(utilizedElement);
}

#include "moc_qmanifestation.cpp"

QT_END_NAMESPACE_QTUML

