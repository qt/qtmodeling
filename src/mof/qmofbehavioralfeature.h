/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#ifndef QMOFBEHAVIORALFEATURE_H
#define QMOFBEHAVIORALFEATURE_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtMof/QMofFeature>
#include <QtMof/QMofNamespace>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofParameter;
class QMofType;
class QMofNamedElement;

class QMofBehavioralFeaturePrivate;

class Q_MOF_EXPORT QMofBehavioralFeature : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QSet<QMofElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QMofElement * owner READ owner)
    Q_PROPERTY(QSet<QMofComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QMofNamespace * namespace_ READ namespace_)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QMofRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QMofClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)
    Q_PROPERTY(QSet<QMofClassifier *> featuringClassifiers READ featuringClassifiers)

    Q_PROPERTY(QSet<QMofPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QMofNamedElement *> members READ members)
    Q_PROPERTY(QSet<QMofPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QMofElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QMofConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QMofNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QSet<QMofType *> raisedExceptions READ raisedExceptions)
    Q_PROPERTY(QList<QMofParameter *> ownedParameters READ ownedParameters)

    Q_DISABLE_COPY(QMofBehavioralFeature)
    Q_DECLARE_PRIVATE(QMofBehavioralFeature)

public:
    Q_INVOKABLE explicit QMofBehavioralFeature(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofBehavioralFeature();

    // Association ends from aggregated QMofElement
    Q_INVOKABLE QSet<QMofElement *> ownedElements() const;
    Q_INVOKABLE QMofElement *owner() const;
    Q_INVOKABLE QSet<QMofComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QMofComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QMofComment *ownedComment);

    // Attributes from aggregated QMofNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QMofNamedElement
    Q_INVOKABLE QMofNamespace *namespace_() const;

    // Attributes from aggregated QMofRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QMofRedefinableElement
    Q_INVOKABLE QSet<QMofRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QMofClassifier *> redefinitionContexts() const;

    // Attributes from aggregated QMofFeature
    Q_INVOKABLE bool isStatic() const;
    Q_INVOKABLE void setStatic(bool isStatic);
    Q_INVOKABLE void unsetStatic();

    // Association ends from aggregated QMofFeature
    Q_INVOKABLE QSet<QMofClassifier *> featuringClassifiers() const;

    // Association ends from aggregated QMofNamespace
    Q_INVOKABLE QSet<QMofPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QMofPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QMofPackageImport *packageImport);
    Q_INVOKABLE QSet<QMofNamedElement *> members() const;
    Q_INVOKABLE QSet<QMofPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QMofElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QMofElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QMofElementImport *elementImport);
    Q_INVOKABLE QSet<QMofConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QMofConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QMofConstraint *ownedRule);
    Q_INVOKABLE QSet<QMofNamedElement *> ownedMembers() const;

    // Association ends from QMofBehavioralFeature
    Q_INVOKABLE QSet<QMofType *> raisedExceptions() const;
    Q_INVOKABLE void addRaisedException(QMofType *raisedException);
    Q_INVOKABLE void removeRaisedException(QMofType *raisedException);
    Q_INVOKABLE QList<QMofParameter *> ownedParameters() const;
    Q_INVOKABLE void addOwnedParameter(QMofParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(QMofParameter *ownedParameter);

    // Operations
    Q_INVOKABLE bool isDistinguishableFrom(const QMofNamedElement *n, const QMofNamespace *ns) const;

    virtual void setPropertyData();

protected:
    explicit QMofBehavioralFeature(QMofBehavioralFeaturePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QMofFeature *_wrappedMofFeature;
    QMofNamespace *_wrappedMofNamespace;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFBEHAVIORALFEATURE_H

