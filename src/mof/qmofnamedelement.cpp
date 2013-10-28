/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofnamedelement.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofNamespace>

QT_BEGIN_NAMESPACE

/*!
    \class QMofNamedElement

    \inmodule QtMof

    \brief A named element is an element in a model that may have a name.
 */
QMofNamedElement::QMofNamedElement() :
    _namespace_(0)
{
}

QModelingElement *QMofNamedElement::clone() const
{
    QMofNamedElement *c = new QMofNamedElement;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The name of the NamedElement.
 */
QString QMofNamedElement::name() const
{
    // This is a read-write property

    return _name;
}

void QMofNamedElement::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
        asQModelingObject()->setObjectName(name);
    }
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofNamedElement::namespace_() const
{
    // This is a read-only derived union association end

    return _namespace_;
}

void QMofNamedElement::setNamespace(QMofNamespace *namespace_)
{
    // This is a read-only derived union association end

    if (_namespace_ != namespace_) {
        // Adjust subsetted properties

        _namespace_ = namespace_;
        if (namespace_ && namespace_->asQModelingObject() && this->asQModelingObject())
            QObject::connect(namespace_->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setNamespace()));

        // Adjust subsetted properties
        setOwner(namespace_);
    }
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofNamedElement::qualifiedName() const
{
    // This is a read-only derived property

    if (_name.isEmpty()) return QString();
    QString qualifiedName_(_name);
    QList<QMofNamespace *> allNamespaces_ = allNamespaces();
    QString separator_ = separator();
    foreach (QMofNamespace *namespace_, allNamespaces_) {
        if (namespace_->name().isEmpty())
            return QString();
        qualifiedName_.prepend(separator_).prepend(namespace_->name());
    }
    return qualifiedName_;
}

void QMofNamedElement::setQualifiedName(QString qualifiedName)
{
    // This is a read-only derived property

    qWarning("QMofNamedElement::setQualifiedName(): to be implemented (this is a derived property)");
    Q_UNUSED(qualifiedName);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtMof::VisibilityKind QMofNamedElement::visibility() const
{
    // This is a read-write property

    return _visibility;
}

void QMofNamedElement::setVisibility(QtMof::VisibilityKind visibility)
{
    // This is a read-write property

    if (_visibility != visibility) {
        _visibility = visibility;
    }
}

// OPERATIONS

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QMofNamespace *> QMofNamedElement::allNamespaces() const
{
    if (!_namespace_) {
        return QList<QMofNamespace *>();
    }
    else {
        QList<QMofNamespace *> allNamespaces_;
        QMofNamespace *namespace_ = this->namespace_();
        while (namespace_) {
            allNamespaces_.append(namespace_);
            namespace_ = namespace_->namespace_();
        }
        return allNamespaces_;
    }
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QMofNamedElement::isDistinguishableFrom(QMofNamedElement *n, QMofNamespace *ns) const
{
    qWarning("QMofNamedElement::isDistinguishableFrom(): to be implemented (operation)");

    Q_UNUSED(n);
    Q_UNUSED(ns);
    return bool ();
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QMofNamedElement::separator() const
{
    return QStringLiteral("::");
}

QT_END_NAMESPACE

