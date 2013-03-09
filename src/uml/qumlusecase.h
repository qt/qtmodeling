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
#ifndef QUMLUSECASE_H
#define QUMLUSECASE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlBehavioredClassifier>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlUseCase;
class QUmlInclude;
class QUmlExtend;
class QUmlExtensionPoint;

class QUmlUseCasePrivate;

class Q_UML_EXPORT QUmlUseCase : public QUmlBehavioredClassifier
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlExtensionPoint *> extensionPoints READ extensionPoints)
    Q_PROPERTY(QSet<QUmlInclude *> includes READ includes)
    Q_PROPERTY(QSet<QUmlClassifier *> subjects READ subjects)
    Q_PROPERTY(QSet<QUmlExtend *> extends READ extends)

    Q_DISABLE_COPY(QUmlUseCase)
    Q_DECLARE_PRIVATE(QUmlUseCase)

public:
    Q_INVOKABLE explicit QUmlUseCase(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlUseCase();

    // Association ends from QUmlUseCase
    Q_INVOKABLE QSet<QUmlExtensionPoint *> extensionPoints() const;
    Q_INVOKABLE void addExtensionPoint(QUmlExtensionPoint *extensionPoint);
    Q_INVOKABLE void removeExtensionPoint(QUmlExtensionPoint *extensionPoint);
    Q_INVOKABLE QSet<QUmlInclude *> includes() const;
    Q_INVOKABLE void addInclude(QUmlInclude *include);
    Q_INVOKABLE void removeInclude(QUmlInclude *include);
    Q_INVOKABLE QSet<QUmlClassifier *> subjects() const;
    Q_INVOKABLE void addSubject(QUmlClassifier *subject);
    Q_INVOKABLE void removeSubject(QUmlClassifier *subject);
    Q_INVOKABLE QSet<QUmlExtend *> extends() const;
    Q_INVOKABLE void addExtend(QUmlExtend *extend);
    Q_INVOKABLE void removeExtend(QUmlExtend *extend);

    // Operations
    Q_INVOKABLE QSet<QUmlUseCase *> allIncludedUseCases() const;

    virtual void setPropertyData();

protected:
    explicit QUmlUseCase(QUmlUseCasePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLUSECASE_H

