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
#ifndef QMOFPARAMETEROBJECT_H
#define QMOFPARAMETEROBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

#include <QtMof/QtMofNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofParameter;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofParameterObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofParameterObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements)
    Q_PROPERTY(QObject * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QObject * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility)

    // Properties [TypedElement]
    Q_PROPERTY(QObject * type READ type WRITE setType)

    // Properties [MultiplicityElement]
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(int lower READ lower WRITE setLower RESET unsetLower STORED false)
    Q_PROPERTY(QObject * lowerValue READ lowerValue WRITE setLowerValue)
    Q_PROPERTY(int upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(QObject * upperValue READ upperValue WRITE setUpperValue)

    // Properties [Parameter]
    Q_PROPERTY(QString default_ READ default_ STORED false)
    Q_PROPERTY(QObject * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(QtMof::ParameterDirectionKind direction READ direction WRITE setDirection RESET unsetDirection)
    Q_PROPERTY(QObject * operation READ operation WRITE setOperation)

public:
    Q_INVOKABLE explicit QMofParameterObject(QMofParameter *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;

    // Owned attributes [TypedElement]
    Q_INVOKABLE QObject *type() const;

    // Owned attributes [MultiplicityElement]
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE QObject *lowerValue() const;
    Q_INVOKABLE int upper() const;
    Q_INVOKABLE QObject *upperValue() const;

    // Owned attributes [Parameter]
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE QObject *defaultValue() const;
    Q_INVOKABLE QtMof::ParameterDirectionKind direction() const;
    Q_INVOKABLE QObject *operation() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;
    Q_INVOKABLE QObject *getMetaClass() const;
    Q_INVOKABLE QObject *container() const;
    Q_INVOKABLE bool isInstanceOfType(QObject *type, bool includesSubtypes) const;
    Q_INVOKABLE void delete_();

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [MultiplicityElement]
    Q_INVOKABLE bool includesCardinality(int C) const;
    Q_INVOKABLE bool includesMultiplicity(QObject *M) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE int lowerBound() const;
    Q_INVOKABLE int upperBound() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void setName(QString name);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);
    void setVisibility(QtMof::VisibilityKind visibility);

    // Slots for owned attributes [TypedElement]
    void setType(QObject *type = 0);

    // Slots for owned attributes [MultiplicityElement]
    void setOrdered(bool isOrdered);
    void unsetOrdered();
    void setUnique(bool isUnique);
    void unsetUnique();
    void setLower(int lower);
    void unsetLower();
    void setLowerValue(QObject *lowerValue = 0);
    void setUpper(int upper);
    void unsetUpper();
    void setUpperValue(QObject *upperValue = 0);

    // Slots for owned attributes [Parameter]
    void Q_DECL_HIDDEN setDefault(QString default_);
    void setDefaultValue(QObject *defaultValue = 0);
    void setDirection(QtMof::ParameterDirectionKind direction);
    void unsetDirection();
    void setOperation(QObject *operation = 0);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFPARAMETEROBJECT_H

