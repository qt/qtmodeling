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
#ifndef QTUML_QMESSAGEOCCURRENCESPECIFICATION_H
#define QTUML_QMESSAGEOCCURRENCESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;
#include <QtUml/QOccurrenceSpecification>
#include <QtUml/QMessageEnd>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QMessageOccurrenceSpecificationPrivate;

class Q_UML_EXPORT QMessageOccurrenceSpecification : public QWrappedObject
{
    Q_OBJECT

    Q_DISABLE_COPY(QMessageOccurrenceSpecification)
    Q_DECLARE_PRIVATE(QMessageOccurrenceSpecification)

public:
    Q_INVOKABLE explicit QMessageOccurrenceSpecification(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QMessageOccurrenceSpecification();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE const QSet<QDependency *> *clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QMessageEnd
    Q_INVOKABLE QMessage *message() const;
    Q_INVOKABLE void setMessage(QMessage *message);
    virtual void registerMetaTypes() const;

protected:
    explicit QMessageOccurrenceSpecification(QMessageOccurrenceSpecificationPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);

private:
    QOccurrenceSpecification *_wrappedOccurrenceSpecification;
    QMessageEnd *_wrappedMessageEnd;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QMessageOccurrenceSpecification) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QMessageOccurrenceSpecification) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QMessageOccurrenceSpecification) *> *)

QT_END_HEADER

#endif // QTUML_QMESSAGEOCCURRENCESPECIFICATION_H

