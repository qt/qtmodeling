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
#ifndef QUMLSTRUCTURALFEATURE_H
#define QUMLSTRUCTURALFEATURE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlTypedElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlFeature>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlStructuralFeaturePrivate;

class Q_UML_EXPORT QUmlStructuralFeature : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QUmlType * type READ type WRITE setType)

    Q_PROPERTY(qint32 upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QUmlValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QUmlValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)
    Q_PROPERTY(QSet<QUmlClassifier *> featuringClassifiers READ featuringClassifiers)

    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)

    Q_DISABLE_COPY(QUmlStructuralFeature)
    Q_DECLARE_PRIVATE(QUmlStructuralFeature)

public:
    Q_INVOKABLE explicit QUmlStructuralFeature(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlStructuralFeature();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

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

    // Association ends from aggregated QUmlTypedElement
    Q_INVOKABLE QUmlType *type() const;
    Q_INVOKABLE void setType(QUmlType *type);

    // Attributes from aggregated QUmlMultiplicityElement
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE void setUpper(qint32 upper);
    Q_INVOKABLE void unsetUpper();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE void setUnique(bool isUnique);
    Q_INVOKABLE void unsetUnique();
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE void setOrdered(bool isOrdered);
    Q_INVOKABLE void unsetOrdered();
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE void setLower(qint32 lower);

    // Association ends from aggregated QUmlMultiplicityElement
    Q_INVOKABLE QUmlValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QUmlValueSpecification *upperValue);
    Q_INVOKABLE QUmlValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QUmlValueSpecification *lowerValue);

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

    // Attributes from QUmlStructuralFeature
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE void unsetReadOnly();

    virtual void setPropertyData();

protected:
    explicit QUmlStructuralFeature(QUmlStructuralFeaturePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlTypedElement *_wrappedUmlTypedElement;
    QUmlMultiplicityElement *_wrappedUmlMultiplicityElement;
    QUmlFeature *_wrappedUmlFeature;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTRUCTURALFEATURE_H

