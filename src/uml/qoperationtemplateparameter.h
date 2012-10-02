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
#ifndef QTUML_QOPERATIONTEMPLATEPARAMETER_H
#define QTUML_QOPERATIONTEMPLATEPARAMETER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QTemplateParameter>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QOperationTemplateParameterPrivate;
class QOperation;

class Q_UML_EXPORT QOperationTemplateParameter : public QTemplateParameter
{
    Q_OBJECT

    // From QOperationTemplateParameter
    Q_PROPERTY(QOperation * parameteredElement READ parameteredElement WRITE setParameteredElement)

public:
    explicit QOperationTemplateParameter(QObject *parent = 0);
    virtual ~QOperationTemplateParameter();

    // Association-ends (except those derived && !derivedUnion)
    QOperation *parameteredElement() const;
    void setParameteredElement(QOperation *parameteredElement);

private:
    Q_DISABLE_COPY(QOperationTemplateParameter)
    Q_DECLARE_PRIVATE(QOperationTemplateParameter)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QOperationTemplateParameter *>)
Q_DECLARE_METATYPE(QList<QtUml::QOperationTemplateParameter *> *)

QT_END_HEADER

#endif // QTUML_QOPERATIONTEMPLATEPARAMETER_H

