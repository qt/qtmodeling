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
#ifndef QUMLVALUESPECIFICATION_H
#define QUMLVALUESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlTypedElement>
#include <QtUml/QUmlPackageableElement>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlParameterableElement;

class QUmlValueSpecificationPrivate;

class Q_UML_EXPORT QUmlValueSpecification : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QUmlType * type READ type WRITE setType)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QUmlTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_DISABLE_COPY(QUmlValueSpecification)
    Q_DECLARE_PRIVATE(QUmlValueSpecification)

public:
    Q_INVOKABLE explicit QUmlValueSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlValueSpecification();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlTypedElement
    Q_INVOKABLE QUmlType *type() const;
    Q_INVOKABLE void setType(QUmlType *type);

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    Q_INVOKABLE QUmlTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Attributes from aggregated QUmlPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Operations
    Q_INVOKABLE bool booleanValue() const;
    Q_INVOKABLE qint32 integerValue() const;
    Q_INVOKABLE bool isCompatibleWith(const QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isComputable() const;
    Q_INVOKABLE bool isNull() const;
    Q_INVOKABLE qreal realValue() const;
    Q_INVOKABLE QString stringValue() const;
    Q_INVOKABLE qint32 unlimitedValue() const;

    virtual void setPropertyData();

protected:
    explicit QUmlValueSpecification(QUmlValueSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlTypedElement *_wrappedUmlTypedElement;
    QUmlPackageableElement *_wrappedUmlPackageableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLVALUESPECIFICATION_H

