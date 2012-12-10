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
#ifndef QTUML_QCONNECTABLEELEMENT_H
#define QTUML_QCONNECTABLEELEMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtUml/QTypedElement>
#include <QtUml/QParameterableElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QConnectorEnd;
class QConnectableElementTemplateParameter;

class QConnectableElementPrivate;

class Q_UML_EXPORT QConnectableElement : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(const QList<QConnectorEnd *> * ends READ ends STORED false)
    Q_PROPERTY(QConnectableElementTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_DISABLE_COPY(QConnectableElement)
    Q_DECLARE_PRIVATE(QConnectableElement)

public:
    Q_INVOKABLE explicit QConnectableElement(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QConnectableElement();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE const QSet<QDependency *> *clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QTypedElement
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE void setType(QType *type);

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Association ends from QConnectableElement
    Q_INVOKABLE const QList<QConnectorEnd *> *ends() const;
    Q_INVOKABLE QConnectableElementTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QConnectableElementTemplateParameter *templateParameter);

    // Classes which access read-only opposite properties should be friend
    friend class QConnectorEnd;

protected:
    explicit QConnectableElement(QConnectableElementPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QTypedElement *_wrappedTypedElement;
    QParameterableElement *_wrappedParameterableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QConnectableElement) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QConnectableElement) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QConnectableElement) *> *)

QT_END_HEADER

#endif // QTUML_QCONNECTABLEELEMENT_H

