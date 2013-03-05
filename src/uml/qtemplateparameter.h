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
#ifndef QTUML_QTEMPLATEPARAMETER_H
#define QTUML_QTEMPLATEPARAMETER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QParameterableElement;
class QTemplateSignature;

class QTemplateParameterPrivate;

class Q_UML_EXPORT QTemplateParameter : public QElement
{
    Q_OBJECT

    Q_PROPERTY(QtUml::QParameterableElement * default_ READ default_ WRITE setDefault_)
    Q_PROPERTY(QtUml::QParameterableElement * parameteredElement READ parameteredElement WRITE setParameteredElement)
    Q_PROPERTY(QtUml::QParameterableElement * ownedParameteredElement READ ownedParameteredElement WRITE setOwnedParameteredElement)
    Q_PROPERTY(QtUml::QParameterableElement * ownedDefault READ ownedDefault WRITE setOwnedDefault)
    Q_PROPERTY(QtUml::QTemplateSignature * signature READ signature WRITE setSignature)

    Q_DISABLE_COPY(QTemplateParameter)
    Q_DECLARE_PRIVATE(QTemplateParameter)

public:
    Q_INVOKABLE explicit QTemplateParameter(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QTemplateParameter();

    // Association ends from QTemplateParameter
    Q_INVOKABLE QParameterableElement *default_() const;
    Q_INVOKABLE void setDefault_(QParameterableElement *default_);
    Q_INVOKABLE QParameterableElement *parameteredElement() const;
    Q_INVOKABLE void setParameteredElement(QParameterableElement *parameteredElement);
    Q_INVOKABLE QParameterableElement *ownedParameteredElement() const;
    Q_INVOKABLE void setOwnedParameteredElement(QParameterableElement *ownedParameteredElement);
    Q_INVOKABLE QParameterableElement *ownedDefault() const;
    Q_INVOKABLE void setOwnedDefault(QParameterableElement *ownedDefault);
    Q_INVOKABLE QTemplateSignature *signature() const;
    Q_INVOKABLE void setSignature(QTemplateSignature *signature);

    virtual void setPropertyData();

protected:
    explicit QTemplateParameter(QTemplateParameterPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QTEMPLATEPARAMETER_H

