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
#ifndef QUMLOPERATION_H
#define QUMLOPERATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlTemplateableElement>
#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlParameterableElement>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlRedefinableElement;
class QUmlType;
class QUmlOperationTemplateParameter;
class QUmlOperation;
class QUmlParameter;
class QUmlInterface;
class QUmlConstraint;
class QUmlDataType;
class QUmlClass;

class QUmlOperationPrivate;

class Q_UML_EXPORT QUmlOperation : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QUmlTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QUmlTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QUmlPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QUmlNamedElement *> members READ members)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QUmlElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)
    Q_PROPERTY(QSet<QUmlClassifier *> featuringClassifiers READ featuringClassifiers)

    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency WRITE setConcurrency RESET unsetConcurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(QSet<QUmlParameterSet *> ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(QSet<QUmlBehavior *> methods READ methods)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    Q_PROPERTY(qint32 lower READ lower STORED false)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery RESET unsetQuery)
    Q_PROPERTY(bool isUnique READ isUnique STORED false)
    Q_PROPERTY(qint32 upper READ upper STORED false)
    Q_PROPERTY(bool isOrdered READ isOrdered STORED false)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameters READ ownedParameters)
    Q_PROPERTY(QUmlConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(QSet<QUmlOperation *> redefinedOperations READ redefinedOperations)
    Q_PROPERTY(QSet<QUmlConstraint *> postconditions READ postconditions)
    Q_PROPERTY(QUmlDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QUmlOperationTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QUmlInterface * interface_ READ interface_ WRITE setInterface_)
    Q_PROPERTY(QUmlType * type READ type STORED false)
    Q_PROPERTY(QSet<QUmlConstraint *> preconditions READ preconditions)
    Q_PROPERTY(QUmlClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QSet<QUmlType *> raisedExceptions READ raisedExceptions)

    Q_DISABLE_COPY(QUmlOperation)
    Q_DECLARE_PRIVATE(QUmlOperation)

public:
    Q_INVOKABLE explicit QUmlOperation(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlOperation();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Association ends from aggregated QUmlTemplateableElement
    Q_INVOKABLE QUmlTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QUmlTemplateBinding *> templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QUmlTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QUmlTemplateBinding *templateBinding);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlNamespace
    Q_INVOKABLE QSet<QUmlPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE QSet<QUmlNamedElement *> members() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QUmlElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE QSet<QUmlConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE QSet<QUmlNamedElement *> ownedMembers() const;

    // Attributes from aggregated QUmlRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QUmlRedefinableElement
    Q_INVOKABLE QSet<QUmlRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QUmlClassifier *> redefinitionContexts() const;

    // Attributes from aggregated QUmlFeature
    Q_INVOKABLE bool isStatic() const;
    Q_INVOKABLE void setStatic(bool isStatic);
    Q_INVOKABLE void unsetStatic();

    // Association ends from aggregated QUmlFeature
    Q_INVOKABLE QSet<QUmlClassifier *> featuringClassifiers() const;

    // Attributes from aggregated QUmlBehavioralFeature
    Q_INVOKABLE QtUml::CallConcurrencyKind concurrency() const;
    Q_INVOKABLE void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    Q_INVOKABLE void unsetConcurrency();
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();

    // Association ends from aggregated QUmlBehavioralFeature
    Q_INVOKABLE QSet<QUmlParameterSet *> ownedParameterSets() const;
    Q_INVOKABLE void addOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    Q_INVOKABLE QSet<QUmlBehavior *> methods() const;
    Q_INVOKABLE void addMethod(QUmlBehavior *method);
    Q_INVOKABLE void removeMethod(QUmlBehavior *method);

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);

    // Attributes from QUmlOperation
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE bool isQuery() const;
    Q_INVOKABLE void setQuery(bool isQuery);
    Q_INVOKABLE void unsetQuery();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE bool isOrdered() const;

    // Association ends from QUmlOperation
    Q_INVOKABLE QList<QUmlParameter *> ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QUmlParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QUmlParameter *ownedParameter);
    Q_INVOKABLE QUmlConstraint *bodyCondition() const;
    Q_INVOKABLE void setBodyCondition(QUmlConstraint *bodyCondition);
    Q_INVOKABLE QSet<QUmlOperation *> redefinedOperations() const;
    Q_INVOKABLE void addRedefinedOperation(QUmlOperation *redefinedOperation);
    Q_INVOKABLE void removeRedefinedOperation(QUmlOperation *redefinedOperation);
    Q_INVOKABLE QSet<QUmlConstraint *> postconditions() const;
    Q_INVOKABLE void addPostcondition(QUmlConstraint *postcondition);
    Q_INVOKABLE void removePostcondition(QUmlConstraint *postcondition);
    Q_INVOKABLE QUmlDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QUmlDataType *datatype);
    Q_INVOKABLE QUmlOperationTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlOperationTemplateParameter *templateParameter);
    Q_INVOKABLE QUmlInterface *interface_() const;
    Q_INVOKABLE void setInterface_(QUmlInterface *interface_);
    Q_INVOKABLE QUmlType *type() const;
    Q_INVOKABLE QSet<QUmlConstraint *> preconditions() const;
    Q_INVOKABLE void addPrecondition(QUmlConstraint *precondition);
    Q_INVOKABLE void removePrecondition(QUmlConstraint *precondition);
    Q_INVOKABLE QUmlClass *class_() const;
    Q_INVOKABLE void setClass_(QUmlClass *class_);
    Q_INVOKABLE QSet<QUmlType *> raisedExceptions() const;
    Q_INVOKABLE void addRaisedException(QUmlType *raisedException);
    Q_INVOKABLE void removeRaisedException(QUmlType *raisedException);

    // Operations
    Q_INVOKABLE bool isConsistentWith(const QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE QSet<QUmlParameter *> returnResult() const;

    virtual void setPropertyData();

protected:
    explicit QUmlOperation(QUmlOperationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlTemplateableElement *_wrappedUmlTemplateableElement;
    QUmlBehavioralFeature *_wrappedUmlBehavioralFeature;
    QUmlParameterableElement *_wrappedUmlParameterableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLOPERATION_H

