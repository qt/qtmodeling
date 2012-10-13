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
#ifndef QTUML_QCONNECTOR_H
#define QTUML_QCONNECTOR_H

#include <QtUml/QtUmlGlobal>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QFeature>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QBehavior;
class QConnectorEnd;
class QAssociation;

class Q_UML_EXPORT QConnector : public QObject, public QFeature
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QFeature
    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic)
    Q_PROPERTY(const QSet<QClassifier *> * featuringClassifiers READ featuringClassifiers)

    // From QConnector
    Q_PROPERTY(QtUml::ConnectorKind kind READ kind)
    Q_PROPERTY(const QSet<QConnector *> * redefinedConnectors READ redefinedConnectors)
    Q_PROPERTY(const QSet<QBehavior *> * contracts READ contracts)
    Q_PROPERTY(QAssociation * type READ type WRITE setType)
    Q_PROPERTY(const QList<QConnectorEnd *> * ends READ ends)

    Q_DISABLE_COPY(QConnector)

public:
    explicit QConnector(QObject *parent = 0);
    virtual ~QConnector();

    // Attributes
    QtUml::ConnectorKind kind() const;

    // Association-ends
    const QSet<QConnector *> *redefinedConnectors() const;
    void addRedefinedConnector(QConnector *redefinedConnector);
    void removeRedefinedConnector(QConnector *redefinedConnector);
    const QSet<QBehavior *> *contracts() const;
    void addContract(QBehavior *contract);
    void removeContract(QBehavior *contract);
    QAssociation *type() const;
    void setType(QAssociation *type);
    const QList<QConnectorEnd *> *ends() const;
    void addEnd(QConnectorEnd *end);
    void removeEnd(QConnectorEnd *end);

protected:
    explicit QConnector(bool createPimpl, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QConnector) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QConnector) *> *)

QT_END_HEADER

#endif // QTUML_QCONNECTOR_H

