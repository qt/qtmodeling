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
#include <QtCore/QObject>
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

class Q_UML_EXPORT QOperation : public QObject
{
    Q_OBJECT

    // From aggregated QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From aggregated QTemplateableElement
    Q_PROPERTY(QTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(const QSet<QTemplateBinding *> * templateBindings READ templateBindings)

    // From aggregated QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From aggregated QNamespace
    Q_PROPERTY(const QSet<QPackageImport *> * packageImports READ packageImports)
    Q_PROPERTY(const QSet<QNamedElement *> * members READ members)
    Q_PROPERTY(const QSet<QPackageableElement *> * importedMembers READ importedMembers)
    Q_PROPERTY(const QSet<QElementImport *> * elementImports READ elementImports)
    Q_PROPERTY(const QSet<QConstraint *> * ownedRules READ ownedRules)
    Q_PROPERTY(const QSet<QNamedElement *> * ownedMembers READ ownedMembers)

    // From aggregated QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From aggregated QFeature
    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic)
    Q_PROPERTY(const QSet<QClassifier *> * featuringClassifiers READ featuringClassifiers)

    // From aggregated QBehavioralFeature
    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency WRITE setConcurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(const QSet<QParameterSet *> * ownedParameterSets READ ownedParameterSets)
    Q_PROPERTY(const QSet<QBehavior *> * methods READ methods)

    // From aggregated QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    // From QOperation
    Q_PROPERTY(qint32 lower READ lower)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery)
    Q_PROPERTY(bool isUnique READ isUnique)
    Q_PROPERTY(qint32 upper READ upper)
    Q_PROPERTY(bool isOrdered READ isOrdered)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(QConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(const QSet<QOperation *> * redefinedOperations READ redefinedOperations)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QOperationTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QInterface * interface READ interface WRITE setInterface)
    Q_PROPERTY(QType * type READ type)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(const QSet<QType *> * raisedExceptions READ raisedExceptions)

    Q_DISABLE_COPY(QOperation)
    Q_DECLARE_PRIVATE(QOperation)

public:
    explicit QOperation(QObject *parent = 0);
    virtual ~QOperation();

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QTemplateableElement
    QTemplateSignature *ownedTemplateSignature() const;
    void setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature);
    const QSet<QTemplateBinding *> *templateBindings() const;
    void addTemplateBinding(QTemplateBinding *templateBinding);
    void removeTemplateBinding(QTemplateBinding *templateBinding);

    // Attributes from aggregated QNamedElement
    QString name() const;
    void setName(QString name);
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);
    QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    QNamespace *namespace_() const;
    const QSet<QDependency *> *clientDependencies() const;
    void addClientDependency(QDependency *clientDependency);
    void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QNamespace
    const QSet<QPackageImport *> *packageImports() const;
    void addPackageImport(QPackageImport *packageImport);
    void removePackageImport(QPackageImport *packageImport);
    const QSet<QNamedElement *> *members() const;
    const QSet<QPackageableElement *> *importedMembers() const;
    const QSet<QElementImport *> *elementImports() const;
    void addElementImport(QElementImport *elementImport);
    void removeElementImport(QElementImport *elementImport);
    const QSet<QConstraint *> *ownedRules() const;
    void addOwnedRule(QConstraint *ownedRule);
    void removeOwnedRule(QConstraint *ownedRule);
    const QSet<QNamedElement *> *ownedMembers() const;

    // Attributes from aggregated QRedefinableElement
    bool isLeaf() const;
    void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    const QSet<QRedefinableElement *> *redefinedElements() const;
    const QSet<QClassifier *> *redefinitionContexts() const;

    // Attributes from aggregated QFeature
    bool isStatic() const;
    void setStatic(bool isStatic);

    // Association ends from aggregated QFeature
    const QSet<QClassifier *> *featuringClassifiers() const;

    // Attributes from aggregated QBehavioralFeature
    QtUml::CallConcurrencyKind concurrency() const;
    void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    bool isAbstract() const;
    void setAbstract(bool isAbstract);

    // Association ends from aggregated QBehavioralFeature
    const QSet<QParameterSet *> *ownedParameterSets() const;
    void addOwnedParameterSet(QParameterSet *ownedParameterSet);
    void removeOwnedParameterSet(QParameterSet *ownedParameterSet);
    const QSet<QBehavior *> *methods() const;
    void addMethod(QBehavior *method);
    void removeMethod(QBehavior *method);

    // Association ends from aggregated QParameterableElement
    QTemplateParameter *owningTemplateParameter() const;
    void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Attributes from QOperation
    qint32 lower() const;
    bool isQuery() const;
    void setQuery(bool isQuery);
    bool isUnique() const;
    qint32 upper() const;
    bool isOrdered() const;

    // Association ends from QOperation
    const QList<QParameter *> *ownedParameters() const;
    void addOwnedParameter(QParameter *ownedParameter);
    void removeOwnedParameter(QParameter *ownedParameter);
    QConstraint *bodyCondition() const;
    void setBodyCondition(QConstraint *bodyCondition);
    const QSet<QOperation *> *redefinedOperations() const;
    void addRedefinedOperation(QOperation *redefinedOperation);
    void removeRedefinedOperation(QOperation *redefinedOperation);
    const QSet<QConstraint *> *postconditions() const;
    void addPostcondition(QConstraint *postcondition);
    void removePostcondition(QConstraint *postcondition);
    QDataType *datatype() const;
    void setDatatype(QDataType *datatype);
    QOperationTemplateParameter *templateParameter() const;
    void setTemplateParameter(QOperationTemplateParameter *templateParameter);
    QInterface *interface() const;
    void setInterface(QInterface *interface);
    QType *type() const;
    const QSet<QConstraint *> *preconditions() const;
    void addPrecondition(QConstraint *precondition);
    void removePrecondition(QConstraint *precondition);
    QClass *class_() const;
    void setClass_(QClass *class_);
    const QSet<QType *> *raisedExceptions() const;
    void addRaisedException(QType *raisedException);
    void removeRaisedException(QType *raisedException);

    // Operations
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    const QSet<QParameter *> *returnResult() const;

protected:
    explicit QOperation(QOperationPrivate &dd, QObject *parent = 0);

private:
    QTemplateableElement *_wrappedTemplateableElement;
    QBehavioralFeature *_wrappedBehavioralFeature;
    QParameterableElement *_wrappedParameterableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QOperation) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *)

QT_END_HEADER

#endif // QTUML_QOPERATION_H

