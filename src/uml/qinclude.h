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
#ifndef QTUML_QINCLUDE_H
#define QTUML_QINCLUDE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QDirectedRelationship>
#include <QtUml/QNamedElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUseCase;

class QIncludePrivate;

class Q_UML_EXPORT QInclude : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QtUml::QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QtUml::QElement * owner READ owner)
    Q_PROPERTY(QSet<QtUml::QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QSet<QtUml::QElement *> relatedElements READ relatedElements)

    Q_PROPERTY(QSet<QtUml::QElement *> sources READ sources)
    Q_PROPERTY(QSet<QtUml::QElement *> targets READ targets)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUmlNS::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QtUml::QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QtUml::QDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QtUml::QUseCase * includingCase READ includingCase WRITE setIncludingCase)
    Q_PROPERTY(QtUml::QUseCase * addition READ addition WRITE setAddition)

    Q_DISABLE_COPY(QInclude)
    Q_DECLARE_PRIVATE(QInclude)

public:
    Q_INVOKABLE explicit QInclude(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QInclude();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QRelationship
    Q_INVOKABLE QSet<QElement *> relatedElements() const;

    // Association ends from aggregated QDirectedRelationship
    Q_INVOKABLE QSet<QElement *> sources() const;
    Q_INVOKABLE QSet<QElement *> targets() const;

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUmlNS::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUmlNS::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from QInclude
    Q_INVOKABLE QUseCase *includingCase() const;
    Q_INVOKABLE void setIncludingCase(QUseCase *includingCase);
    Q_INVOKABLE QUseCase *addition() const;
    Q_INVOKABLE void setAddition(QUseCase *addition);

    virtual void setPropertyData();

protected:
    explicit QInclude(QIncludePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QDirectedRelationship *_wrappedDirectedRelationship;
    QNamedElement *_wrappedNamedElement;
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QINCLUDE_H

