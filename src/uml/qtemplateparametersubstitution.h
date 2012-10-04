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
#include <QtCore/QObject>
#include <QtUml/QElement>

QT_BEGIN_HEADER


QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QTemplateParameterSubstitutionPrivate;
class QParameterableElement;
class QTemplateParameter;
class QTemplateBinding;

class Q_UML_EXPORT QTemplateParameterSubstitution : public QObject, public QElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QTemplateParameterSubstitution
    Q_PROPERTY(QParameterableElement * actual READ actual WRITE setActual)
    Q_PROPERTY(QTemplateParameter * formal READ formal WRITE setFormal)
    Q_PROPERTY(QParameterableElement * ownedActual READ ownedActual WRITE setOwnedActual)
    Q_PROPERTY(QTemplateBinding * templateBinding READ templateBinding WRITE setTemplateBinding)

public:
    explicit QTemplateParameterSubstitution(QObject *parent = 0);
    virtual ~QTemplateParameterSubstitution();

    // Association-ends (except those derived && !derivedUnion)
    QParameterableElement *actual() const;
    void setActual(const QParameterableElement *actual);
    QTemplateParameter *formal() const;
    void setFormal(const QTemplateParameter *formal);
    QParameterableElement *ownedActual() const;
    void setOwnedActual(const QParameterableElement *ownedActual);
    QTemplateBinding *templateBinding() const;
    void setTemplateBinding(const QTemplateBinding *templateBinding);

private:
    Q_DISABLE_COPY(QTemplateParameterSubstitution)
    Q_DECLARE_PRIVATE(QTemplateParameterSubstitution)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QTemplateParameterSubstitution *>)
Q_DECLARE_METATYPE(QList<QtUml::QTemplateParameterSubstitution *> *)

QT_END_HEADER

#endif // QTUML_QTEMPLATEPARAMETERSUBSTITUTION_H

