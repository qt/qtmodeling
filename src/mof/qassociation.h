/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QTMOF_QASSOCIATION_H
#define QTMOF_QASSOCIATION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtMof/QRelationship>
#include <QtMof/QClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QType;
class QProperty;

class QAssociationPrivate;

class Q_MOF_EXPORT QAssociation : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived)
    Q_PROPERTY(const QList<QType *> * endTypes READ endTypes STORED false)
    Q_PROPERTY(const QSet<QProperty *> * navigableOwnedEnds READ navigableOwnedEnds)
    Q_PROPERTY(const QList<QProperty *> * ownedEnds READ ownedEnds)
    Q_PROPERTY(const QList<QProperty *> * memberEnds READ memberEnds)

    Q_DISABLE_COPY(QAssociation)
    Q_DECLARE_PRIVATE(QAssociation)

public:
    Q_INVOKABLE explicit QAssociation(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QAssociation();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QRelationship
    Q_INVOKABLE const QSet<QElement *> *relatedElements() const;

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QNamespace *namespace_() const;

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);

    // Association ends from aggregated QType
    Q_INVOKABLE QPackage *package() const;
    Q_INVOKABLE void setPackage(QPackage *package);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE const QSet<QRedefinableElement *> *redefinedElements() const;
    Q_INVOKABLE const QSet<QClassifier *> *redefinitionContexts() const;

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

    // Attributes from aggregated QClassifier
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);

    // Association ends from aggregated QClassifier
    Q_INVOKABLE const QSet<QProperty *> *attributes() const;
    Q_INVOKABLE const QSet<QFeature *> *features() const;
    Q_INVOKABLE const QSet<QClassifier *> *generals() const;
    Q_INVOKABLE void addGeneral(QClassifier *general);
    Q_INVOKABLE void removeGeneral(QClassifier *general);
    Q_INVOKABLE const QSet<QClassifier *> *redefinedClassifiers() const;
    Q_INVOKABLE void addRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(QClassifier *redefinedClassifier);
    Q_INVOKABLE const QSet<QNamedElement *> *inheritedMembers() const;
    Q_INVOKABLE const QSet<QGeneralization *> *generalizations() const;
    Q_INVOKABLE void addGeneralization(QGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QGeneralization *generalization);

    // Attributes from QAssociation
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE void setDerived(bool isDerived);

    // Association ends from QAssociation
    Q_INVOKABLE const QList<QType *> *endTypes() const;
    Q_INVOKABLE const QSet<QProperty *> *navigableOwnedEnds() const;
    Q_INVOKABLE void addNavigableOwnedEnd(QProperty *navigableOwnedEnd);
    Q_INVOKABLE void removeNavigableOwnedEnd(QProperty *navigableOwnedEnd);
    Q_INVOKABLE const QList<QProperty *> *ownedEnds() const;
    Q_INVOKABLE void addOwnedEnd(QProperty *ownedEnd);
    Q_INVOKABLE void removeOwnedEnd(QProperty *ownedEnd);
    Q_INVOKABLE const QList<QProperty *> *memberEnds() const;
    Q_INVOKABLE void addMemberEnd(QProperty *memberEnd);
    Q_INVOKABLE void removeMemberEnd(QProperty *memberEnd);

protected:
    explicit QAssociation(QAssociationPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QRelationship *_wrappedRelationship;
    QClassifier *_wrappedClassifier;
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *)

QT_END_HEADER

#endif // QTMOF_QASSOCIATION_H

