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
#ifndef QTUML_QTEMPLATEPARAMETERSUBSTITUTION_H
#define QTUML_QTEMPLATEPARAMETERSUBSTITUTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QParameterableElement;
class QTemplateParameter;
class QTemplateBinding;

class QTemplateParameterSubstitutionPrivate;

class Q_UML_EXPORT QTemplateParameterSubstitution : public QElement
{
    Q_OBJECT

    // From QTemplateParameterSubstitution
    Q_PROPERTY(QParameterableElement * ownedActual READ ownedActual WRITE setOwnedActual)
    Q_PROPERTY(QTemplateParameter * formal READ formal WRITE setFormal)
    Q_PROPERTY(QParameterableElement * actual READ actual WRITE setActual)
    Q_PROPERTY(QTemplateBinding * templateBinding READ templateBinding WRITE setTemplateBinding)

    Q_DISABLE_COPY(QTemplateParameterSubstitution)
    Q_DECLARE_PRIVATE(QTemplateParameterSubstitution)

public:
    explicit QTemplateParameterSubstitution(QObject *parent = 0);
    virtual ~QTemplateParameterSubstitution();

    // Association ends from QTemplateParameterSubstitution
    QParameterableElement *ownedActual() const;
    void setOwnedActual(QParameterableElement *ownedActual);
    QTemplateParameter *formal() const;
    void setFormal(QTemplateParameter *formal);
    QParameterableElement *actual() const;
    void setActual(QParameterableElement *actual);
    QTemplateBinding *templateBinding() const;
    void setTemplateBinding(QTemplateBinding *templateBinding);

protected:
    explicit QTemplateParameterSubstitution(QTemplateParameterSubstitutionPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QTemplateParameterSubstitution) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QTemplateParameterSubstitution) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QTemplateParameterSubstitution) *> *)

QT_END_HEADER

#endif // QTUML_QTEMPLATEPARAMETERSUBSTITUTION_H

