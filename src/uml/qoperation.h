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

class QOperationPrivate;
class QOperationTemplateParameter;
class QType;
class QRedefinableElement;
class QParameter;
class QInterface;
class QConstraint;
class QDataType;
class QClass;

class Q_UML_EXPORT QOperation : public QObject, public QTemplateableElement, public QBehavioralFeature, public QParameterableElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QTemplateableElement
    Q_PROPERTY(QTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(const QSet<QTemplateBinding *> * templateBindings READ templateBindings)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QNamespace
    Q_PROPERTY(const QSet<QElementImport *> * elementImports READ elementImports)
    Q_PROPERTY(const QSet<QPackageableElement *> * importedMembers READ importedMembers)
    Q_PROPERTY(const QSet<QNamedElement *> * members READ members)
    Q_PROPERTY(const QSet<QNamedElement *> * ownedMembers READ ownedMembers)
    Q_PROPERTY(const QSet<QConstraint *> * ownedRules READ ownedRules)
    Q_PROPERTY(const QSet<QPackageImport *> * packageImports READ packageImports)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QFeature
    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic)
    Q_PROPERTY(const QSet<QClassifier *> * featuringClassifiers READ featuringClassifiers)

    // From QBehavioralFeature
    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency WRITE setConcurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(const QSet<QBehavior *> * methods READ methods)
    Q_PROPERTY(const QSet<QParameterSet *> * ownedParameterSets READ ownedParameterSets)

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    // From QOperation
    Q_PROPERTY(bool isOrdered READ isOrdered)
    Q_PROPERTY(bool isQuery READ isQuery WRITE setQuery)
    Q_PROPERTY(bool isUnique READ isUnique)
    Q_PROPERTY(qint32 lower READ lower)
    Q_PROPERTY(qint32 upper READ upper)
    Q_PROPERTY(QConstraint * bodyCondition READ bodyCondition WRITE setBodyCondition)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QInterface * interface READ interface WRITE setInterface)
    Q_PROPERTY(const QList<QParameter *> * ownedParameters READ ownedParameters)
    Q_PROPERTY(const QSet<QConstraint *> * postconditions READ postconditions)
    Q_PROPERTY(const QSet<QConstraint *> * preconditions READ preconditions)
    Q_PROPERTY(const QSet<QType *> * raisedExceptions READ raisedExceptions)
    Q_PROPERTY(const QSet<QOperation *> * redefinedOperations READ redefinedOperations)
    Q_PROPERTY(QOperationTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QType * type READ type)

    Q_DISABLE_COPY(QOperation)
    Q_DECLARE_PRIVATE(QOperation)

public:
    explicit QOperation(QObject *parent = 0);
    virtual ~QOperation();

    // Attributes
    bool isOrdered() const;
    bool isQuery() const;
    void setQuery(bool isQuery);
    bool isUnique() const;
    qint32 lower() const;
    qint32 upper() const;

    // Association-ends
    QConstraint *bodyCondition() const;
    void setBodyCondition(const QConstraint *bodyCondition);
    QClass *class_() const;
    void setClass_(const QClass *class_);
    QDataType *datatype() const;
    void setDatatype(const QDataType *datatype);
    QInterface *interface() const;
    void setInterface(const QInterface *interface);
    const QList<QParameter *> *ownedParameters() const;
    void addOwnedParameter(const QParameter *ownedParameter);
    void removeOwnedParameter(const QParameter *ownedParameter);
    const QSet<QConstraint *> *postconditions() const;
    void addPostcondition(const QConstraint *postcondition);
    void removePostcondition(const QConstraint *postcondition);
    const QSet<QConstraint *> *preconditions() const;
    void addPrecondition(const QConstraint *precondition);
    void removePrecondition(const QConstraint *precondition);
    const QSet<QType *> *raisedExceptions() const;
    void addRaisedException(const QType *raisedException);
    void removeRaisedException(const QType *raisedException);
    const QSet<QOperation *> *redefinedOperations() const;
    void addRedefinedOperation(const QOperation *redefinedOperation);
    void removeRedefinedOperation(const QOperation *redefinedOperation);
    QOperationTemplateParameter *templateParameter() const;
    void setTemplateParameter(const QOperationTemplateParameter *templateParameter);
    QType *type() const;

    // Operations
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    const QSet<QParameter *> *returnResult() const;

private:
    QOperationPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QOperation) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QOperation) *> *)

QT_END_HEADER

#endif // QTUML_QOPERATION_H

