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
#ifndef QTMOF_QSTRUCTURALFEATURE_H
#define QTMOF_QSTRUCTURALFEATURE_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtMof/QFeature>
#include <QtMof/QTypedElement>
#include <QtMof/QMultiplicityElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtMof
{

QT_MODULE(QtMof)

class QStructuralFeaturePrivate;

class Q_MOF_EXPORT QStructuralFeature : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QtMof::QElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QtMof::QElement * owner READ owner)
    Q_PROPERTY(QSet<QtMof::QComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtMofNS::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtMof::QNamespace * namespace_ READ namespace_)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QtMof::QRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QtMof::QClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)
    Q_PROPERTY(QSet<QtMof::QClassifier *> featuringClassifiers READ featuringClassifiers)

    Q_PROPERTY(QtMof::QType * type READ type WRITE setType)

    Q_PROPERTY(qint32 upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QtMof::QValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QtMof::QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)

    Q_DISABLE_COPY(QStructuralFeature)
    Q_DECLARE_PRIVATE(QStructuralFeature)

public:
    Q_INVOKABLE explicit QStructuralFeature(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QStructuralFeature();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtMofNS::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMofNS::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QNamespace *namespace_() const;

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

    // Association ends from aggregated QTypedElement
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE void setType(QType *type);

    // Attributes from aggregated QMultiplicityElement
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

    // Association ends from aggregated QMultiplicityElement
    Q_INVOKABLE QValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QValueSpecification *upperValue);
    Q_INVOKABLE QValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QValueSpecification *lowerValue);

    // Attributes from QStructuralFeature
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE void unsetReadOnly();

    virtual void setPropertyData();

protected:
    explicit QStructuralFeature(QStructuralFeaturePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QFeature *_wrappedFeature;
    QTypedElement *_wrappedTypedElement;
    QMultiplicityElement *_wrappedMultiplicityElement;
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTMOF_QSTRUCTURALFEATURE_H

