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
#ifndef QTUML_QRECLASSIFYOBJECTACTION_H
#define QTUML_QRECLASSIFYOBJECTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QAction>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClassifier;
class QInputPin;

class QReclassifyObjectActionPrivate;

class Q_UML_EXPORT QReclassifyObjectAction : public QAction
{
    Q_OBJECT

    Q_PROPERTY(bool isReplaceAll READ isReplaceAll WRITE setReplaceAll)
    Q_PROPERTY(const QSet<QClassifier *> * oldClassifiers READ oldClassifiers)
    Q_PROPERTY(QInputPin * object READ object WRITE setObject)
    Q_PROPERTY(const QSet<QClassifier *> * newClassifiers READ newClassifiers)

    Q_DISABLE_COPY(QReclassifyObjectAction)
    Q_DECLARE_PRIVATE(QReclassifyObjectAction)

public:
    Q_INVOKABLE explicit QReclassifyObjectAction(QObject *parent = 0);
    virtual ~QReclassifyObjectAction();

    // Attributes from QReclassifyObjectAction
    Q_INVOKABLE bool isReplaceAll() const;
    Q_INVOKABLE void setReplaceAll(bool isReplaceAll);

    // Association ends from QReclassifyObjectAction
    Q_INVOKABLE const QSet<QClassifier *> *oldClassifiers() const;
    Q_INVOKABLE void addOldClassifier(QClassifier *oldClassifier);
    Q_INVOKABLE void removeOldClassifier(QClassifier *oldClassifier);
    Q_INVOKABLE QInputPin *object() const;
    Q_INVOKABLE void setObject(QInputPin *object);
    Q_INVOKABLE const QSet<QClassifier *> *newClassifiers() const;
    Q_INVOKABLE void addNewClassifier(QClassifier *newClassifier);
    Q_INVOKABLE void removeNewClassifier(QClassifier *newClassifier);

protected:
    explicit QReclassifyObjectAction(QReclassifyObjectActionPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QReclassifyObjectAction) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QReclassifyObjectAction) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QReclassifyObjectAction) *> *)

QT_END_HEADER

#endif // QTUML_QRECLASSIFYOBJECTACTION_H

