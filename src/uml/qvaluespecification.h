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
#ifndef QTUML_QVALUESPECIFICATION_H
#define QTUML_QVALUESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QTypedElement>
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QParameterableElement;

class QValueSpecificationPrivate;

class Q_UML_EXPORT QValueSpecification : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QtUml::QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QtUml::QElement * owner READ owner)
    Q_PROPERTY(QSet<QtUml::QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtUml::QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QtUml::QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QtUml::QDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QtUml::QType * type READ type WRITE setType)

    Q_PROPERTY(QtUml::QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QtUml::QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(QtUmlNS::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_DISABLE_COPY(QValueSpecification)
    Q_DECLARE_PRIVATE(QValueSpecification)

public:
    Q_INVOKABLE explicit QValueSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QValueSpecification();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QTypedElement
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE void setType(QType *type);

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);
    Q_INVOKABLE QTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QTemplateParameter *templateParameter);

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtUmlNS::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUmlNS::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Operations
    Q_INVOKABLE bool booleanValue() const;
    Q_INVOKABLE qint32 integerValue() const;
    Q_INVOKABLE bool isCompatibleWith(const QParameterableElement *p) const;
    Q_INVOKABLE bool isComputable() const;
    Q_INVOKABLE bool isNull() const;
    Q_INVOKABLE qreal realValue() const;
    Q_INVOKABLE QString stringValue() const;
    Q_INVOKABLE qint32 unlimitedValue() const;

    virtual void setPropertyData();

protected:
    explicit QValueSpecification(QValueSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QTypedElement *_wrappedTypedElement;
    QPackageableElement *_wrappedPackageableElement;
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QVALUESPECIFICATION_H

