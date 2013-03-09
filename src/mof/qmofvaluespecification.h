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
#ifndef QMOFVALUESPECIFICATION_H
#define QMOFVALUESPECIFICATION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofTypedElement>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofValueSpecificationPrivate;

class Q_MOF_EXPORT QMofValueSpecification : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QSet<QMofElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QMofElement * owner READ owner)
    Q_PROPERTY(QSet<QMofComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QMofNamespace * namespace_ READ namespace_)

    Q_PROPERTY(QtMof::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QMofType * type READ type WRITE setType)

    Q_DISABLE_COPY(QMofValueSpecification)
    Q_DECLARE_PRIVATE(QMofValueSpecification)

public:
    Q_INVOKABLE explicit QMofValueSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofValueSpecification();

    // Association ends from aggregated QMofElement
    Q_INVOKABLE QSet<QMofElement *> ownedElements() const;
    Q_INVOKABLE QMofElement *owner() const;
    Q_INVOKABLE QSet<QMofComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QMofComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QMofComment *ownedComment);

    // Attributes from aggregated QMofNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QMofNamedElement
    Q_INVOKABLE QMofNamespace *namespace_() const;

    // Attributes from aggregated QMofPackageableElement
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QMofTypedElement
    Q_INVOKABLE QMofType *type() const;
    Q_INVOKABLE void setType(QMofType *type);

    // Operations
    Q_INVOKABLE bool booleanValue() const;
    Q_INVOKABLE qint32 integerValue() const;
    Q_INVOKABLE bool isComputable() const;
    Q_INVOKABLE bool isNull() const;
    Q_INVOKABLE qreal realValue();
    Q_INVOKABLE QString stringValue() const;
    Q_INVOKABLE qint32 unlimitedValue() const;

    virtual void setPropertyData();

protected:
    explicit QMofValueSpecification(QMofValueSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QMofPackageableElement *_wrappedMofPackageableElement;
    QMofTypedElement *_wrappedMofTypedElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFVALUESPECIFICATION_H

