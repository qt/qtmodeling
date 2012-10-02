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
    Q_PROPERTY(QList<QComment *> * ownedComment READ ownedComment)
    Q_PROPERTY(const QList<QElement *> * ownedElement READ ownedElement)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QTemplateableElement
    Q_PROPERTY(QTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QList<QTemplateBinding *> * templateBinding READ templateBinding)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependency READ clientDependency)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QNamespace
    Q_PROPERTY(QList<QElementImport *> * elementImport READ elementImport)
    Q_PROPERTY(const QList<QPackageableElement *> * importedMember READ importedMember)
    Q_PROPERTY(const QList<QNamedElement *> * member READ member)
    Q_PROPERTY(const QList<QNamedElement *> * ownedMember READ ownedMember)
    Q_PROPERTY(QList<QConstraint *> * ownedRule READ ownedRule)
    Q_PROPERTY(QList<QPackageImport *> * packageImport READ packageImport)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QList<QRedefinableElement *> * redefinedElement READ redefinedElement)
    Q_PROPERTY(const QList<QClassifier *> * redefinitionContext READ redefinitionContext)

    // From QFeature
    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic)
    Q_PROPERTY(const QList<QClassifier *> * featuringClassifier READ featuringClassifier)

    // From QBehavioralFeature
    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency WRITE setConcurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(QList<QBehavior *> * method READ method)
    Q_PROPERTY(QList<QParameter *> * ownedParameter READ ownedParameter)
    Q_PROPERTY(QList<QParameterSet *> * ownedParameterSet READ ownedParameterSet)
    Q_PROPERTY(QList<QType *> * raisedException READ raisedException)

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
    Q_PROPERTY(QList<QParameter *> * ownedParameter READ ownedParameter)
    Q_PROPERTY(QList<QConstraint *> * postcondition READ postcondition)
    Q_PROPERTY(QList<QConstraint *> * precondition READ precondition)
    Q_PROPERTY(QList<QType *> * raisedException READ raisedException)
    Q_PROPERTY(QList<QOperation *> * redefinedOperation READ redefinedOperation)
    Q_PROPERTY(QOperationTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(const QType * type READ type)

public:
    explicit QOperation(QObject *parent = 0);
    virtual ~QOperation();

    // Attributes (except those derived && !derivedUnion)
    bool isQuery() const;
    void setQuery(bool isQuery);

    // Association-ends (except those derived && !derivedUnion)
    QConstraint *bodyCondition() const;
    void setBodyCondition(QConstraint *bodyCondition);
    QClass *class_() const;
    void setClass_(QClass *class_);
    QDataType *datatype() const;
    void setDatatype(QDataType *datatype);
    QInterface *interface() const;
    void setInterface(QInterface *interface);
    QList<QParameter *> *ownedParameter();
    QList<QConstraint *> *postcondition();
    QList<QConstraint *> *precondition();
    QList<QType *> *raisedException();
    QList<QOperation *> *redefinedOperation();
    QOperationTemplateParameter *templateParameter() const;
    void setTemplateParameter(QOperationTemplateParameter *templateParameter);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    bool isOrdered() const;
    bool isUnique() const;
    qint32 lower() const;
    const QList<QParameter *> *returnResult() const;
    const QType *type() const;
    qint32 upper() const;

private:
    Q_DISABLE_COPY(QOperation)
    Q_DECLARE_PRIVATE(QOperation)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QOperation *>)
Q_DECLARE_METATYPE(QList<QtUml::QOperation *> *)

QT_END_HEADER

#endif // QTUML_QOPERATION_H

