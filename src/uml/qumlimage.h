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
#ifndef QUMLIMAGE_H
#define QUMLIMAGE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlElement>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlImagePrivate;

class Q_UML_EXPORT QUmlImage : public QUmlElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QString format READ format WRITE setFormat)
    Q_PROPERTY(QString location READ location WRITE setLocation)
    Q_PROPERTY(QString content READ content WRITE setContent)

    Q_DISABLE_COPY(QUmlImage)
    Q_DECLARE_PRIVATE(QUmlImage)

public:
    Q_INVOKABLE explicit QUmlImage(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlImage();

    // Attributes from QUmlImage
    Q_INVOKABLE QString format() const;
    Q_INVOKABLE void setFormat(QString format);
    Q_INVOKABLE QString location() const;
    Q_INVOKABLE void setLocation(QString location);
    Q_INVOKABLE QString content() const;
    Q_INVOKABLE void setContent(QString content);

    virtual void setPropertyData();

protected:
    explicit QUmlImage(QUmlImagePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLIMAGE_H

