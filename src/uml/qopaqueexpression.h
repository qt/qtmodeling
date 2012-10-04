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
#ifndef QTUML_QOPAQUEEXPRESSION_H
#define QTUML_QOPAQUEEXPRESSION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QValueSpecification>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QOpaqueExpressionPrivate;
class QBehavior;
class QParameter;

class Q_UML_EXPORT QOpaqueExpression : public QObject, public QValueSpecification
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QTypedElement
    Q_PROPERTY(QType * type READ type WRITE setType)

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QOpaqueExpression
    Q_PROPERTY(const QList<QString> * bodies READ bodies)
    Q_PROPERTY(const QList<QString> * languages READ languages)
    Q_PROPERTY(QBehavior * behavior READ behavior WRITE setBehavior)
    Q_PROPERTY(QParameter * result READ result)

public:
    explicit QOpaqueExpression(QObject *parent = 0);
    virtual ~QOpaqueExpression();

    // Attributes (except those derived && !derivedUnion)
    const QList<QString> *bodies() const;
    void addBody(QString body);
    void removeBody(QString body);
    const QList<QString> *languages() const;
    void addLanguage(QString language);
    void removeLanguage(QString language);

    // Association-ends (except those derived && !derivedUnion)
    QBehavior *behavior() const;
    void setBehavior(const QBehavior *behavior);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    bool isIntegral() const;
    bool isNonNegative() const;
    bool isPositive() const;
    QParameter *result() const;
    qint32 value() const;

private:
    Q_DISABLE_COPY(QOpaqueExpression)
    Q_DECLARE_PRIVATE(QOpaqueExpression)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QOpaqueExpression) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QOpaqueExpression) *> *)

QT_END_HEADER

#endif // QTUML_QOPAQUEEXPRESSION_H

