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
#ifndef QMOFSTRUCTURALFEATURE_H
#define QMOFSTRUCTURALFEATURE_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtMof/QMofFeature>
#include <QtMof/QMofTypedElement>
#include <QtMof/QMofMultiplicityElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofStructuralFeaturePrivate;

class Q_MOF_EXPORT QMofStructuralFeature : public QWrappedObject
{
    Q_OBJECT

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

    Q_PROPERTY(QMofType * type READ type WRITE setType)

    Q_PROPERTY(qint32 upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QMofValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QMofValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)

    Q_DISABLE_COPY(QMofStructuralFeature)
    Q_DECLARE_PRIVATE(QMofStructuralFeature)

public:
    Q_INVOKABLE explicit QMofStructuralFeature(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofStructuralFeature();

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

    // Association ends from aggregated QMofTypedElement
    Q_INVOKABLE QMofType *type() const;
    Q_INVOKABLE void setType(QMofType *type);

    // Attributes from aggregated QMofMultiplicityElement
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

    // Association ends from aggregated QMofMultiplicityElement
    Q_INVOKABLE QMofValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QMofValueSpecification *upperValue);
    Q_INVOKABLE QMofValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QMofValueSpecification *lowerValue);

    // Attributes from QMofStructuralFeature
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE void unsetReadOnly();

    virtual void setPropertyData();

protected:
    explicit QMofStructuralFeature(QMofStructuralFeaturePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QMofFeature *_wrappedMofFeature;
    QMofTypedElement *_wrappedMofTypedElement;
    QMofMultiplicityElement *_wrappedMofMultiplicityElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFSTRUCTURALFEATURE_H

