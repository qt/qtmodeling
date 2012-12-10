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
#ifndef QTMOF_QPARAMETER_H
#define QTMOF_QPARAMETER_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtMof/QTypedElement>
#include <QtMof/QMultiplicityElement>

// QtMof includes
#include <QtMof/QtMofEnumerations>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QValueSpecification;
class QOperation;

class QParameterPrivate;

class Q_MOF_EXPORT QParameter : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QString default_ READ default_ STORED false)
    Q_PROPERTY(QtMof::ParameterDirectionKind direction READ direction WRITE setDirection)
    Q_PROPERTY(QOperation * operation READ operation WRITE setOperation)
    Q_PROPERTY(QValueSpecification * defaultValue READ defaultValue WRITE setDefaultValue)

    Q_DISABLE_COPY(QParameter)
    Q_DECLARE_PRIVATE(QParameter)

public:
    Q_INVOKABLE explicit QParameter(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QParameter();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtMof::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtMof::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QNamespace *namespace_() const;

    // Association ends from aggregated QTypedElement
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE void setType(QType *type);

    // Attributes from aggregated QMultiplicityElement
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE void setUpper(qint32 upper);
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE void setUnique(bool isUnique);
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE void setOrdered(bool isOrdered);
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE void setLower(qint32 lower);

    // Association ends from aggregated QMultiplicityElement
    Q_INVOKABLE QValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QValueSpecification *upperValue);
    Q_INVOKABLE QValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QValueSpecification *lowerValue);

    // Attributes from QParameter
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE QtMof::ParameterDirectionKind direction() const;
    Q_INVOKABLE void setDirection(QtMof::ParameterDirectionKind direction);

    // Association ends from QParameter
    Q_INVOKABLE QOperation *operation() const;
    Q_INVOKABLE void setOperation(QOperation *operation);
    Q_INVOKABLE QValueSpecification *defaultValue() const;
    Q_INVOKABLE void setDefaultValue(QValueSpecification *defaultValue);

protected:
    explicit QParameter(QParameterPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QTypedElement *_wrappedTypedElement;
    QMultiplicityElement *_wrappedMultiplicityElement;
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QParameter) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QParameter) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QParameter) *> *)

QT_END_HEADER

#endif // QTMOF_QPARAMETER_H

