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
#ifndef QTUML_QOPERATION_H
#define QTUML_QOPERATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtUml/QTemplateableElement>
#include <QtUml/QBehavioralFeature>
#include <QtUml/QParameterableElement>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QRedefinableElement;
class QType;
class QOperationTemplateParameter;
class QParameter;
class QInterface;
class QConstraint;
class QDataType;
class QClass;

class QOperationPrivate;

class Q_UML_EXPORT QOperation : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(qint32 lower READ lower STORED false)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery RESET unsetQuery)
    Q_PROPERTY(bool isUnique READ isUnique STORED false)
    Q_PROPERTY(qint32 upper READ upper STORED false)
    Q_PROPERTY(bool isOrdered READ isOrdered STORED false)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(QConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(const QSet<QOperation *> * redefinedOperations READ redefinedOperations)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QOperationTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QInterface * interface READ interface WRITE setInterface)
    Q_PROPERTY(QType * type READ type STORED false)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(const QSet<QType *> * raisedExceptions READ raisedExceptions)

    Q_DISABLE_COPY(QOperation)
    Q_DECLARE_PRIVATE(QOperation)

public:
    Q_INVOKABLE explicit QOperation(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QOperation();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE QTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE const QSet<QTemplateBinding *> *templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QTemplateBinding *templateBinding);

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

    // Association ends from aggregated QNamespace
    Q_INVOKABLE const QSet<QPackageImport *> *packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE const QSet<QNamedElement *> *members() const;
    Q_INVOKABLE const QSet<QPackageableElement *> *importedMembers() const;
    Q_INVOKABLE const QSet<QElementImport *> *elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE const QSet<QConstraint *> *ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE const QSet<QNamedElement *> *ownedMembers() const;

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE const QSet<QRedefinableElement *> *redefinedElements() const;
    Q_INVOKABLE const QSet<QClassifier *> *redefinitionContexts() const;

    // Attributes from aggregated QFeature
    Q_INVOKABLE bool isStatic() const;
    Q_INVOKABLE void setStatic(bool isStatic);
    Q_INVOKABLE void unsetStatic();

    // Association ends from aggregated QFeature
    Q_INVOKABLE const QSet<QClassifier *> *featuringClassifiers() const;

    // Attributes from aggregated QBehavioralFeature
    Q_INVOKABLE QtUml::CallConcurrencyKind concurrency() const;
    Q_INVOKABLE void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    Q_INVOKABLE void unsetConcurrency();
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();

    // Association ends from aggregated QBehavioralFeature
    Q_INVOKABLE const QSet<QParameterSet *> *ownedParameterSets() const;
    Q_INVOKABLE void addOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE const QSet<QBehavior *> *methods() const;
    Q_INVOKABLE void addMethod(QBehavior *method);
    Q_INVOKABLE void removeMethod(QBehavior *method);

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Attributes from QOperation
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE bool isQuery() const;
    Q_INVOKABLE void setQuery(bool isQuery);
    Q_INVOKABLE void unsetQuery();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE bool isOrdered() const;

    // Association ends from QOperation
    Q_INVOKABLE const QList<QParameter *> *ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE QConstraint *bodyCondition() const;
    Q_INVOKABLE void setBodyCondition(QConstraint *bodyCondition);
    Q_INVOKABLE const QSet<QOperation *> *redefinedOperations() const;
    Q_INVOKABLE void addRedefinedOperation(QOperation *redefinedOperation);
    Q_INVOKABLE void removeRedefinedOperation(QOperation *redefinedOperation);
    Q_INVOKABLE const QSet<QConstraint *> *postconditions() const;
    Q_INVOKABLE void addPostcondition(QConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QConstraint *postcondition);
    Q_INVOKABLE QDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QDataType *datatype);
    Q_INVOKABLE QOperationTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QOperationTemplateParameter *templateParameter);
    Q_INVOKABLE QInterface *interface() const;
    Q_INVOKABLE void setInterface(QInterface *interface);
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE const QSet<QConstraint *> *preconditions() const;
    Q_INVOKABLE void addPrecondition(QConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QConstraint *precondition);
    Q_INVOKABLE QClass *class_() const;
    Q_INVOKABLE void setClass_(QClass *class_);
    Q_INVOKABLE const QSet<QType *> *raisedExceptions() const;
    Q_INVOKABLE void addRaisedException(QType *raisedException);
    Q_INVOKABLE void removeRaisedException(QType *raisedException);

    // Operations
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE const QSet<QParameter *> *returnResult() const;
    virtual void registerMetaTypes() const;

protected:
    explicit QOperation(QOperationPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QTemplateableElement *_wrappedTemplateableElement;
    QBehavioralFeature *_wrappedBehavioralFeature;
    QParameterableElement *_wrappedParameterableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QOperation) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *)

QT_END_HEADER

#endif // QTUML_QOPERATION_H

