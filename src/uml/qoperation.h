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

    Q_PROPERTY(QSet<QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(QSet<QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QNamedElement *> members READ members)
    Q_PROPERTY(QSet<QPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)
    Q_PROPERTY(QSet<QClassifier *> featuringClassifiers READ featuringClassifiers)

    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency WRITE setConcurrency RESET unsetConcurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(QSet<QParameterSet *> ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QSet<QBehavior *> methods READ methods)

    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    Q_PROPERTY(qint32 lower READ lower STORED false)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery RESET unsetQuery)
    Q_PROPERTY(bool isUnique READ isUnique STORED false)
    Q_PROPERTY(qint32 upper READ upper STORED false)
    Q_PROPERTY(bool isOrdered READ isOrdered STORED false)
    Q_PROPERTY(QList<QParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(QSet<QOperation *> redefinedOperations READ redefinedOperations)
    Q_PROPERTY(QSet<QConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QOperationTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QInterface * interface_ READ interface_ WRITE setInterface_)
    Q_PROPERTY(QType * type READ type STORED false)
    Q_PROPERTY(QSet<QConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QSet<QType *> raisedExceptions READ raisedExceptions)

    Q_DISABLE_COPY(QOperation)
    Q_DECLARE_PRIVATE(QOperation)

public:
    Q_INVOKABLE explicit QOperation(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QOperation();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QTemplateableElement
    Q_INVOKABLE QTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QTemplateBinding *> templateBindings() const;
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
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QNamespace
    Q_INVOKABLE QSet<QPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QPackageImport *packageImport);
    Q_INVOKABLE QSet<QNamedElement *> members() const;
    Q_INVOKABLE QSet<QPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QElementImport *elementImport);
    Q_INVOKABLE QSet<QConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QConstraint *ownedRule);
    Q_INVOKABLE QSet<QNamedElement *> ownedMembers() const;

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE QSet<QRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QClassifier *> redefinitionContexts() const;

    // Attributes from aggregated QFeature
    Q_INVOKABLE bool isStatic() const;
    Q_INVOKABLE void setStatic(bool isStatic);
    Q_INVOKABLE void unsetStatic();

    // Association ends from aggregated QFeature
    Q_INVOKABLE QSet<QClassifier *> featuringClassifiers() const;

    // Attributes from aggregated QBehavioralFeature
    Q_INVOKABLE QtUml::CallConcurrencyKind concurrency() const;
    Q_INVOKABLE void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    Q_INVOKABLE void unsetConcurrency();
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();

    // Association ends from aggregated QBehavioralFeature
    Q_INVOKABLE QSet<QParameterSet *> ownedParameterSets() const;
    Q_INVOKABLE void addOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(QParameterSet *ownedParameterSet);
    Q_INVOKABLE QSet<QBehavior *> methods() const;
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
    Q_INVOKABLE QList<QParameter *> ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QParameter *ownedParameter);
    Q_INVOKABLE QConstraint *bodyCondition() const;
    Q_INVOKABLE void setBodyCondition(QConstraint *bodyCondition);
    Q_INVOKABLE QSet<QOperation *> redefinedOperations() const;
    Q_INVOKABLE void addRedefinedOperation(QOperation *redefinedOperation);
    Q_INVOKABLE void removeRedefinedOperation(QOperation *redefinedOperation);
    Q_INVOKABLE QSet<QConstraint *> postconditions() const;
    Q_INVOKABLE void addPostcondition(QConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QConstraint *postcondition);
    Q_INVOKABLE QDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QDataType *datatype);
    Q_INVOKABLE QOperationTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QOperationTemplateParameter *templateParameter);
    Q_INVOKABLE QInterface *interface_() const;
    Q_INVOKABLE void setInterface_(QInterface *interface_);
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE QSet<QConstraint *> preconditions() const;
    Q_INVOKABLE void addPrecondition(QConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QConstraint *precondition);
    Q_INVOKABLE QClass *class_() const;
    Q_INVOKABLE void setClass_(QClass *class_);
    Q_INVOKABLE QSet<QType *> raisedExceptions() const;
    Q_INVOKABLE void addRaisedException(QType *raisedException);
    Q_INVOKABLE void removeRaisedException(QType *raisedException);

    // Operations
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE QSet<QParameter *> returnResult() const;

    virtual void setPropertyData();

protected:
    explicit QOperation(QOperationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QTemplateableElement *_wrappedTemplateableElement;
    QBehavioralFeature *_wrappedBehavioralFeature;
    QParameterableElement *_wrappedParameterableElement;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QOPERATION_H

