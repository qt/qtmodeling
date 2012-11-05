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
#ifndef QTUML_QCLASS_P_H
#define QTUML_QCLASS_P_H

#include "private/qtumlglobal_p.h"

// Base class includes
#include "private/qobject_p.h"
#include "private/qencapsulatedclassifier_p.h"
#include "private/qbehavioredclassifier_p.h"

#include "QtUml/QClass"

// Qt includes
#include "QtCore/QList"
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClass;
class QReception;
class QNamedElement;
class QOperation;
class QClassifier;
class QExtension;
class QProperty;

class Q_UML_EXPORT QClassPrivate : public QObjectPrivate
{
    Q_DECLARE_PUBLIC(QClass)

public:
    explicit QClassPrivate();
    virtual ~QClassPrivate();

    bool isAbstract;
    bool isActive;
    QList<QClassifier *> *nestedClassifiers;
    QSet<QReception *> *ownedReceptions;
    QList<QOperation *> *ownedOperations;
    QList<QProperty *> *ownedAttributes;

    // Internal functions for read-only subsetted association ends
    void addExtension(QExtension *extension);
    void removeExtension(QExtension *extension);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QCLASS_P_H
