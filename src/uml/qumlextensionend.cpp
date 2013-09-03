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
#include "qumlextensionend.h"

#include "private/qumlextensionendobject_p.h"

#include <QtUml/QUmlStereotype>

/*!
    \class QUmlExtensionEnd

    \inmodule QtUml

    \brief An extension end is used to tie an extension to a stereotype when extending a metaclass.The default multiplicity of an extension end is 0..1.
 */
QUmlExtensionEnd::QUmlExtensionEnd(bool createQObject) :
    QUmlProperty(false),
    _type(0)
{
    if (createQObject)
        _qObject = new QUmlExtensionEndObject(this);
}

QUmlExtensionEnd::~QUmlExtensionEnd()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    This redefinition changes the default multiplicity of association ends, since model elements are usually extended by 0 or 1 instance of the extension stereotype.
 */
int 
QUmlExtensionEnd::lower() const
{
    // This is a read-write derived property

    qWarning("UmlExtensionEnd::lower(): to be implemented (this is a derived property)");

    return int();
}

void QUmlExtensionEnd::setLower(int lower)
{
    // This is a read-write derived property

    qWarning("UmlExtensionEnd::lower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    References the type of the ExtensionEnd. Note that this association restricts the possible types of an ExtensionEnd to only be Stereotypes.
 */
QUmlStereotype *
QUmlExtensionEnd::type() const
{
    // This is a read-write association end

    return _type;
}

void QUmlExtensionEnd::setType(QUmlStereotype *type)
{
    // This is a read-write association end

    if (_type != type) {
        _type = type;
        if (type->asQObject() && this->asQObject())
            QObject::connect(type->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setType()));
    }
}

// OPERATIONS

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an Integer. This is a redefinition of the default lower bound, which normally, for MultiplicityElements, evaluates to 1 if empty.
 */
int QUmlExtensionEnd::lowerBound() const
{
    qWarning("UmlExtensionEnd::lowerBound(): to be implemented (operation)");

    return int ();
}

