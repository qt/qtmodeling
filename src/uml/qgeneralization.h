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
#ifndef QTUML_QGENERALIZATION_H
#define QTUML_QGENERALIZATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QDirectedRelationship>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClassifier;
class QGeneralizationSet;

class QGeneralizationPrivate;

class Q_UML_EXPORT QGeneralization : public QDirectedRelationship
{
    Q_OBJECT

    Q_PROPERTY(bool isSubstitutable READ isSubstitutable WRITE setSubstitutable RESET unsetSubstitutable)
    Q_PROPERTY(QClassifier * specific READ specific WRITE setSpecific)
    Q_PROPERTY(QSet<QGeneralizationSet *> generalizationSets READ generalizationSets)
    Q_PROPERTY(QClassifier * general READ general WRITE setGeneral)

    Q_DISABLE_COPY(QGeneralization)
    Q_DECLARE_PRIVATE(QGeneralization)

public:
    Q_INVOKABLE explicit QGeneralization(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QGeneralization();

    // Attributes from QGeneralization
    Q_INVOKABLE bool isSubstitutable() const;
    Q_INVOKABLE void setSubstitutable(bool isSubstitutable);
    Q_INVOKABLE void unsetSubstitutable();

    // Association ends from QGeneralization
    Q_INVOKABLE QClassifier *specific() const;
    Q_INVOKABLE void setSpecific(QClassifier *specific);
    Q_INVOKABLE QSet<QGeneralizationSet *> generalizationSets() const;
    Q_INVOKABLE void addGeneralizationSet(QGeneralizationSet *generalizationSet);
    Q_INVOKABLE void removeGeneralizationSet(QGeneralizationSet *generalizationSet);
    Q_INVOKABLE QClassifier *general() const;
    Q_INVOKABLE void setGeneral(QClassifier *general);

    virtual void setPropertyData();

protected:
    explicit QGeneralization(QGeneralizationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QGENERALIZATION_H

