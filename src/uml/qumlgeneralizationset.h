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
#ifndef QUMLGENERALIZATIONSET_H
#define QUMLGENERALIZATIONSET_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlPackageableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlGeneralization;
class QUmlClassifier;

class QUmlGeneralizationSetPrivate;

class Q_UML_EXPORT QUmlGeneralizationSet : public QUmlPackageableElement
{
    Q_OBJECT

    Q_PROPERTY(bool isCovering READ isCovering WRITE setCovering RESET unsetCovering)
    Q_PROPERTY(bool isDisjoint READ isDisjoint WRITE setDisjoint RESET unsetDisjoint)
    Q_PROPERTY(QUmlClassifier * powertype READ powertype WRITE setPowertype)
    Q_PROPERTY(QSet<QUmlGeneralization *> generalizations READ generalizations)

    Q_DISABLE_COPY(QUmlGeneralizationSet)
    Q_DECLARE_PRIVATE(QUmlGeneralizationSet)

public:
    Q_INVOKABLE explicit QUmlGeneralizationSet(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlGeneralizationSet();

    // Attributes from QUmlGeneralizationSet
    Q_INVOKABLE bool isCovering() const;
    Q_INVOKABLE void setCovering(bool isCovering);
    Q_INVOKABLE void unsetCovering();
    Q_INVOKABLE bool isDisjoint() const;
    Q_INVOKABLE void setDisjoint(bool isDisjoint);
    Q_INVOKABLE void unsetDisjoint();

    // Association ends from QUmlGeneralizationSet
    Q_INVOKABLE QUmlClassifier *powertype() const;
    Q_INVOKABLE void setPowertype(QUmlClassifier *powertype);
    Q_INVOKABLE QSet<QUmlGeneralization *> generalizations() const;
    Q_INVOKABLE void addGeneralization(QUmlGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QUmlGeneralization *generalization);

    virtual void setPropertyData();

protected:
    explicit QUmlGeneralizationSet(QUmlGeneralizationSetPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLGENERALIZATIONSET_H

