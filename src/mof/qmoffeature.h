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
#ifndef QMOFFEATURE_H
#define QMOFFEATURE_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofRedefinableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofClassifier;

class QMofFeaturePrivate;

class Q_MOF_EXPORT QMofFeature : public QMofRedefinableElement
{
    Q_OBJECT

    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)
    Q_PROPERTY(QSet<QMofClassifier *> featuringClassifiers READ featuringClassifiers)

    Q_DISABLE_COPY(QMofFeature)
    Q_DECLARE_PRIVATE(QMofFeature)

public:
    Q_INVOKABLE explicit QMofFeature(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofFeature();

    // Attributes from QMofFeature
    Q_INVOKABLE bool isStatic() const;
    Q_INVOKABLE void setStatic(bool isStatic);
    Q_INVOKABLE void unsetStatic();

    // Association ends from QMofFeature
    Q_INVOKABLE QSet<QMofClassifier *> featuringClassifiers() const;

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QMofClassifierPrivate;

protected:
    explicit QMofFeature(QMofFeaturePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFFEATURE_H

