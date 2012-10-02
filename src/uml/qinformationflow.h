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
#ifndef QTUML_QINFORMATIONFLOW_H
#define QTUML_QINFORMATIONFLOW_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QDirectedRelationship>
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QInformationFlowPrivate;
class QConnector;
class QMessage;
class QActivityEdge;
class QNamedElement;
class QClassifier;
class QRelationship;

class Q_UML_EXPORT QInformationFlow : public QObject, public QDirectedRelationship, public QPackageableElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QList<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QRelationship
    Q_PROPERTY(const QList<QElement *> * relatedElements READ relatedElements)

    // From QDirectedRelationship
    Q_PROPERTY(const QList<QElement *> * sources READ sources)
    Q_PROPERTY(const QList<QElement *> * targets READ targets)

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QInformationFlow
    Q_PROPERTY(QList<QClassifier *> * conveyed READ conveyed)
    Q_PROPERTY(QList<QNamedElement *> * informationSources READ informationSources)
    Q_PROPERTY(QList<QNamedElement *> * informationTargets READ informationTargets)
    Q_PROPERTY(QList<QRelationship *> * realizations READ realizations)
    Q_PROPERTY(QList<QActivityEdge *> * realizingActivityEdges READ realizingActivityEdges)
    Q_PROPERTY(QList<QConnector *> * realizingConnectors READ realizingConnectors)
    Q_PROPERTY(QList<QMessage *> * realizingMessages READ realizingMessages)

public:
    explicit QInformationFlow(QObject *parent = 0);
    virtual ~QInformationFlow();

    // Association-ends (except those derived && !derivedUnion)
    QList<QClassifier *> *conveyed();
    QList<QNamedElement *> *informationSources();
    QList<QNamedElement *> *informationTargets();
    QList<QRelationship *> *realizations();
    QList<QActivityEdge *> *realizingActivityEdges();
    QList<QConnector *> *realizingConnectors();
    QList<QMessage *> *realizingMessages();

private:
    Q_DISABLE_COPY(QInformationFlow)
    Q_DECLARE_PRIVATE(QInformationFlow)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QInformationFlow *>)
Q_DECLARE_METATYPE(QList<QtUml::QInformationFlow *> *)

QT_END_HEADER

#endif // QTUML_QINFORMATIONFLOW_H

