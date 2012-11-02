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
#ifndef QTUML_QTEMPLATEBINDING_H
#define QTUML_QTEMPLATEBINDING_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QDirectedRelationship>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QTemplateableElement;
class QTemplateParameterSubstitution;
class QTemplateSignature;

class QTemplateBindingPrivate;

class Q_UML_EXPORT QTemplateBinding : public QDirectedRelationship
{
    Q_OBJECT

    // From QTemplateBinding
    Q_PROPERTY(QTemplateSignature * signature READ signature WRITE setSignature)
    Q_PROPERTY(QTemplateableElement * boundElement READ boundElement WRITE setBoundElement)
    Q_PROPERTY(const QSet<QTemplateParameterSubstitution *> * parameterSubstitutions READ parameterSubstitutions)

    Q_DISABLE_COPY(QTemplateBinding)
    Q_DECLARE_PRIVATE(QTemplateBinding)

public:
    explicit QTemplateBinding(QObject *parent = 0);
    virtual ~QTemplateBinding();

    // Association-ends
    QTemplateSignature *signature() const;
    void setSignature(QTemplateSignature *signature);
    QTemplateableElement *boundElement() const;
    void setBoundElement(QTemplateableElement *boundElement);
    const QSet<QTemplateParameterSubstitution *> *parameterSubstitutions() const;
    void addParameterSubstitution(QTemplateParameterSubstitution *parameterSubstitution);
    void removeParameterSubstitution(QTemplateParameterSubstitution *parameterSubstitution);

protected:
    explicit QTemplateBinding(QTemplateBindingPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QTemplateBinding) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QTemplateBinding) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QTemplateBinding) *> *)

QT_END_HEADER

#endif // QTUML_QTEMPLATEBINDING_H

