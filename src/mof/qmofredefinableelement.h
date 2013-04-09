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
#ifndef QMOFREDEFINABLEELEMENT_H
#define QMOFREDEFINABLEELEMENT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofRedefinableElement;
class QMofClassifier;

class QMofRedefinableElementPrivate;

class Q_MOF_EXPORT QMofRedefinableElement : public QMofNamedElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QMofRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QMofClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_DISABLE_COPY(QMofRedefinableElement)
    Q_DECLARE_PRIVATE(QMofRedefinableElement)

public:
    Q_INVOKABLE explicit QMofRedefinableElement(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofRedefinableElement();

    // Attributes from QMofRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from QMofRedefinableElement
    Q_INVOKABLE QSet<QMofRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QMofClassifier *> redefinitionContexts() const;

    // Operations
    Q_INVOKABLE bool isConsistentWith(const QMofRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(const QMofRedefinableElement *redefined) const;

    virtual void setPropertyData();

protected:
    explicit QMofRedefinableElement(QMofRedefinableElementPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFREDEFINABLEELEMENT_H
