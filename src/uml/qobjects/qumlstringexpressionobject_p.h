/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLSTRINGEXPRESSIONOBJECT_H
#define QUMLSTRINGEXPRESSIONOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlStringExpression;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlStringExpressionObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlStringExpressionObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependencies READ clientDependencies NOTIFY clientDependenciesChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QObject * nameExpression READ nameExpression WRITE setNameExpression NOTIFY nameExpressionChanged)
    Q_PROPERTY(QObject * namespace_ READ namespace_ NOTIFY namespaceChanged)
    Q_PROPERTY(QString qualifiedName READ qualifiedName NOTIFY qualifiedNameChanged STORED false)

    // Properties [TypedElement]
    Q_PROPERTY(QObject * type READ type WRITE setType NOTIFY typeChanged)

    // Properties [ParameterableElement]
    Q_PROPERTY(QObject * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter NOTIFY owningTemplateParameterChanged)
    Q_PROPERTY(QObject * templateParameter READ templateParameter WRITE setTemplateParameter NOTIFY templateParameterChanged)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility NOTIFY visibilityChanged RESET unsetVisibility)

    // Properties [Expression]
    Q_PROPERTY(QList<QObject *> operands READ operands NOTIFY operandsChanged)
    Q_PROPERTY(QString symbol READ symbol WRITE setSymbol NOTIFY symbolChanged)

    // Properties [TemplateableElement]
    Q_PROPERTY(QObject * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature NOTIFY ownedTemplateSignatureChanged)
    Q_PROPERTY(QSet<QObject *> templateBindings READ templateBindings NOTIFY templateBindingsChanged)

    // Properties [StringExpression]
    Q_PROPERTY(QObject * owningExpression READ owningExpression WRITE setOwningExpression NOTIFY owningExpressionChanged)
    Q_PROPERTY(QSet<QObject *> subExpressions READ subExpressions NOTIFY subExpressionsChanged)

public:
    Q_INVOKABLE explicit QUmlStringExpressionObject(QUmlStringExpression *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependencies() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [TypedElement]
    Q_INVOKABLE QObject *type() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QObject *owningTemplateParameter() const;
    Q_INVOKABLE QObject *templateParameter() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Expression]
    Q_INVOKABLE const QList<QObject *> operands() const;
    Q_INVOKABLE QString symbol() const;

    // Owned attributes [TemplateableElement]
    Q_INVOKABLE QObject *ownedTemplateSignature() const;
    Q_INVOKABLE const QSet<QObject *> templateBindings() const;

    // Owned attributes [StringExpression]
    Q_INVOKABLE QObject *owningExpression() const;
    Q_INVOKABLE const QSet<QObject *> subExpressions() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [ValueSpecification]
    Q_INVOKABLE bool booleanValue() const;
    Q_INVOKABLE int integerValue() const;
    Q_INVOKABLE bool isCompatibleWith(QObject *p) const;
    Q_INVOKABLE bool isComputable() const;
    Q_INVOKABLE bool isNull() const;
    Q_INVOKABLE double realValue() const;
    Q_INVOKABLE int unlimitedValue() const;

    // Operations [TemplateableElement]
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE QSet<QObject *> parameterableElements() const;

    // Operations [StringExpression]
    Q_INVOKABLE QString stringValue() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);

    // Slots for owned attributes [TypedElement]
    void setType(QObject *type = 0);

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QObject *owningTemplateParameter = 0);
    void setTemplateParameter(QObject *templateParameter = 0);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);
    void unsetVisibility();

    // Slots for owned attributes [Expression]
    void addOperand(QObject *operand);
    void removeOperand(QObject *operand);
    void setSymbol(QString symbol);

    // Slots for owned attributes [TemplateableElement]
    void setOwnedTemplateSignature(QObject *ownedTemplateSignature = 0);
    void addTemplateBinding(QObject *templateBinding);
    void removeTemplateBinding(QObject *templateBinding);

    // Slots for owned attributes [StringExpression]
    void setOwningExpression(QObject *owningExpression = 0);
    void addSubExpression(QObject *subExpression);
    void removeSubExpression(QObject *subExpression);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [NamedElement]
    void clientDependenciesChanged(QSet<QObject *> clientDependencies);
    void nameChanged(QString name);
    void nameExpressionChanged(QObject *nameExpression);
    void namespaceChanged(QObject *namespace_);
    void qualifiedNameChanged(QString qualifiedName);

    // Signals for owned attributes [TypedElement]
    void typeChanged(QObject *type);

    // Signals for owned attributes [ParameterableElement]
    void owningTemplateParameterChanged(QObject *owningTemplateParameter);
    void templateParameterChanged(QObject *templateParameter);

    // Signals for owned attributes [PackageableElement]
    void visibilityChanged(QtUml::VisibilityKind visibility);

    // Signals for owned attributes [Expression]
    void operandsChanged(QList<QObject *> operands);
    void symbolChanged(QString symbol);

    // Signals for owned attributes [TemplateableElement]
    void ownedTemplateSignatureChanged(QObject *ownedTemplateSignature);
    void templateBindingsChanged(QSet<QObject *> templateBindings);

    // Signals for owned attributes [StringExpression]
    void owningExpressionChanged(QObject *owningExpression);
    void subExpressionsChanged(QSet<QObject *> subExpressions);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTRINGEXPRESSIONOBJECT_H

