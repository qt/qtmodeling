/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#ifndef QUMLRECLASSIFYOBJECTACTION_H
#define QUMLRECLASSIFYOBJECTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlInputPin;

class QUmlReclassifyObjectActionPrivate;

class Q_UML_EXPORT QUmlReclassifyObjectAction : public QUmlAction
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isReplaceAll READ isReplaceAll WRITE setReplaceAll RESET unsetReplaceAll)
    Q_PROPERTY(QSet<QUmlClassifier *> oldClassifiers READ oldClassifiers)
    Q_PROPERTY(QUmlInputPin * object READ object WRITE setObject)
    Q_PROPERTY(QSet<QUmlClassifier *> newClassifiers READ newClassifiers)

    Q_DISABLE_COPY(QUmlReclassifyObjectAction)
    Q_DECLARE_PRIVATE(QUmlReclassifyObjectAction)

public:
    Q_INVOKABLE explicit QUmlReclassifyObjectAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlReclassifyObjectAction();

    // Attributes from QUmlReclassifyObjectAction
    Q_INVOKABLE bool isReplaceAll() const;
    Q_INVOKABLE void setReplaceAll(bool isReplaceAll);
    Q_INVOKABLE void unsetReplaceAll();

    // Association ends from QUmlReclassifyObjectAction
    Q_INVOKABLE QSet<QUmlClassifier *> oldClassifiers() const;
    Q_INVOKABLE void addOldClassifier(QUmlClassifier *oldClassifier);
    Q_INVOKABLE void removeOldClassifier(QUmlClassifier *oldClassifier);
    Q_INVOKABLE QUmlInputPin *object() const;
    Q_INVOKABLE void setObject(QUmlInputPin *object);
    Q_INVOKABLE QSet<QUmlClassifier *> newClassifiers() const;
    Q_INVOKABLE void addNewClassifier(QUmlClassifier *newClassifier);
    Q_INVOKABLE void removeNewClassifier(QUmlClassifier *newClassifier);

    virtual void setPropertyData();

protected:
    explicit QUmlReclassifyObjectAction(QUmlReclassifyObjectActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLRECLASSIFYOBJECTACTION_H

