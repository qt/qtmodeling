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
#ifndef QTUML_QUSECASE_H
#define QTUML_QUSECASE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QBehavioredClassifier>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClassifier;
class QInclude;
class QExtend;
class QExtensionPoint;

class QUseCasePrivate;

class Q_UML_EXPORT QUseCase : public QBehavioredClassifier
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QExtensionPoint *> * extensionPoints READ extensionPoints)
    Q_PROPERTY(const QSet<QInclude *> * includes READ includes)
    Q_PROPERTY(const QSet<QClassifier *> * subjects READ subjects)
    Q_PROPERTY(const QSet<QExtend *> * extends READ extends)

    Q_DISABLE_COPY(QUseCase)
    Q_DECLARE_PRIVATE(QUseCase)

public:
    Q_INVOKABLE explicit QUseCase(QObject *parent = 0);
    virtual ~QUseCase();

    // Association ends from QUseCase
    Q_INVOKABLE const QSet<QExtensionPoint *> *extensionPoints() const;
    Q_INVOKABLE void addExtensionPoint(QExtensionPoint *extensionPoint);
    Q_INVOKABLE void removeExtensionPoint(QExtensionPoint *extensionPoint);
    Q_INVOKABLE const QSet<QInclude *> *includes() const;
    Q_INVOKABLE void addInclude(QInclude *include);
    Q_INVOKABLE void removeInclude(QInclude *include);
    Q_INVOKABLE const QSet<QClassifier *> *subjects() const;
    Q_INVOKABLE void addSubject(QClassifier *subject);
    Q_INVOKABLE void removeSubject(QClassifier *subject);
    Q_INVOKABLE const QSet<QExtend *> *extends() const;
    Q_INVOKABLE void addExtend(QExtend *extend);
    Q_INVOKABLE void removeExtend(QExtend *extend);

    // Operations
    Q_INVOKABLE const QSet<QUseCase *> *allIncludedUseCases() const;

protected:
    explicit QUseCase(QUseCasePrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QUseCase) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QUseCase) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QUseCase) *> *)

QT_END_HEADER

#endif // QTUML_QUSECASE_H

