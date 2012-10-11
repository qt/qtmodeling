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
#ifndef QTUML_QGENERALIZATIONSET_H
#define QTUML_QGENERALIZATIONSET_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QGeneralizationSetPrivate;
class QGeneralization;
class QClassifier;

class Q_UML_EXPORT QGeneralizationSet : public QObject, public QPackageableElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QGeneralizationSet
    Q_PROPERTY(bool isCovering READ isCovering WRITE setCovering)
    Q_PROPERTY(bool isDisjoint READ isDisjoint WRITE setDisjoint)
    Q_PROPERTY(QClassifier * powertype READ powertype WRITE setPowertype)
    Q_PROPERTY(const QSet<QGeneralization *> * generalizations READ generalizations)

    Q_DISABLE_COPY(QGeneralizationSet)
    QTUML_DECLARE_PRIVATE(QGeneralizationSet)

public:
    explicit QGeneralizationSet(QObject *parent = 0);
    virtual ~QGeneralizationSet();

    // Attributes
    bool isCovering() const;
    void setCovering(bool isCovering);
    bool isDisjoint() const;
    void setDisjoint(bool isDisjoint);

    // Association-ends
    QClassifier *powertype() const;
    void setPowertype(const QClassifier *powertype);
    const QSet<QGeneralization *> *generalizations() const;
    void addGeneralization(const QGeneralization *generalization);
    void removeGeneralization(const QGeneralization *generalization);

protected:
    explicit QGeneralizationSet(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QGeneralizationSet) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QGeneralizationSet) *> *)

QT_END_HEADER

#endif // QTUML_QGENERALIZATIONSET_H
