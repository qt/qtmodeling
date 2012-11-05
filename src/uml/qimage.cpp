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

#include "qimage.h"
#include "qimage_p.h"

QT_BEGIN_NAMESPACE_QTUML

QImagePrivate::QImagePrivate()
{
}

QImagePrivate::~QImagePrivate()
{
}

/*!
    \class QImage

    \inmodule QtUml

    \brief Physical definition of a graphical image.
 */

QImage::QImage(QObject *parent) :
    QElement(*new QImagePrivate, parent)
{
}

QImage::QImage(QImagePrivate &dd, QObject *parent) :
    QElement(dd, parent)
{
}

QImage::~QImage()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QImage
// ---------------------------------------------------------------

/*!
    This indicates the format of the content - which is how the string content should be interpreted. The following values are reserved: SVG, GIF, PNG, JPG, WMF, EMF, BMP. In addition the prefix 'MIME: ' is also reserved. This option can be used as an alternative to express the reserved values above, for example "SVG" could instead be expressed as "MIME: image/svg+xml".
 */
QString QImage::format() const
{
    // This is a read-write attribute

    Q_D(const QImage);
    return d->format;
}

void QImage::setFormat(QString format)
{
    // This is a read-write attribute

    Q_D(QImage);
    if (d->format != format) {
        d->format = format;
    }
}

/*!
    This contains a location that can be used by a tool to locate the image as an alternative to embedding it in the stereotype.
 */
QString QImage::location() const
{
    // This is a read-write attribute

    Q_D(const QImage);
    return d->location;
}

void QImage::setLocation(QString location)
{
    // This is a read-write attribute

    Q_D(QImage);
    if (d->location != location) {
        d->location = location;
    }
}

/*!
    This contains the serialization of the image according to the format. The value could represent a bitmap, image such as a GIF file, or drawing 'instructions' using a standard such as Scalable Vector Graphic (SVG) (which is XML based).
 */
QString QImage::content() const
{
    // This is a read-write attribute

    Q_D(const QImage);
    return d->content;
}

void QImage::setContent(QString content)
{
    // This is a read-write attribute

    Q_D(QImage);
    if (d->content != content) {
        d->content = content;
    }
}

#include "moc_qimage.cpp"

QT_END_NAMESPACE_QTUML

