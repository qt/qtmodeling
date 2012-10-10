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
#include <QtCore/QObject>
#include <QtUml/QDirectedRelationship>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QGeneralizationPrivate;
class QClassifier;
class QGeneralizationSet;

class Q_UML_EXPORT QGeneralization : public QObject, public QDirectedRelationship
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QRelationship
    Q_PROPERTY(const QSet<QElement *> * relatedElements READ relatedElements)

    // From QDirectedRelationship
    Q_PROPERTY(const QSet<QElement *> * sources READ sources)
    Q_PROPERTY(const QSet<QElement *> * targets READ targets)

    // From QGeneralization
    Q_PROPERTY(bool isSubstitutable READ isSubstitutable WRITE setSubstitutable)
    Q_PROPERTY(QClassifier * specific READ specific WRITE setSpecific)
    Q_PROPERTY(const QSet<QGeneralizationSet *> * generalizationSets READ generalizationSets)
    Q_PROPERTY(QClassifier * general READ general WRITE setGeneral)

    Q_DISABLE_COPY(QGeneralization)
    QTUML_DECLARE_PRIVATE(QGeneralization)

public:
    explicit QGeneralization(QObject *parent = 0);
    virtual ~QGeneralization();

    // Attributes
    bool isSubstitutable() const;
    void setSubstitutable(bool isSubstitutable);

    // Association-ends
    QClassifier *specific() const;
    void setSpecific(const QClassifier *specific);
    const QSet<QGeneralizationSet *> *generalizationSets() const;
    void addGeneralizationSet(const QGeneralizationSet *generalizationSet);
    void removeGeneralizationSet(const QGeneralizationSet *generalizationSet);
    QClassifier *general() const;
    void setGeneral(const QClassifier *general);

protected:
    explicit QGeneralization(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QGeneralization) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QGeneralization) *> *)

QT_END_HEADER

#endif // QTUML_QGENERALIZATION_H

