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
#ifndef QUMLPARAMETERABLEELEMENT_H
#define QUMLPARAMETERABLEELEMENT_H

#include <QtUml/QtUmlGlobal>

#include <QtUml/QUmlElement>


QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlTemplateParameter;

class Q_UML_EXPORT QUmlParameterableElement : public virtual QUmlElement
{
public:
    virtual ~QUmlParameterableElement();

    Q_DECL_HIDDEN QModelingObject *clone() const;

    // Owned attributes
    QUmlTemplateParameter *owningTemplateParameter() const;
    void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    QUmlTemplateParameter *templateParameter() const;
    void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Operations
    bool isCompatibleWith(QUmlParameterableElement *p) const;
    bool isTemplateParameter() const;

protected:
    explicit QUmlParameterableElement();

    QUmlTemplateParameter *_owningTemplateParameter;
    QUmlTemplateParameter *_templateParameter;

    virtual void setPropertyData();
    virtual void setClassForProperty();
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlParameterableElement) *)

QT_END_HEADER

#endif // QUMLPARAMETERABLEELEMENT_H

