/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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
** rights. These rights are described in the Nokia Qt LGPL Exception
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

#include "qredefinableelement.h"
#include "qredefinableelement_p.h"

#include <QtMof/QClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTMOF

QRedefinableElementPrivate::QRedefinableElementPrivate() :
    isLeaf(false)
{
}

QRedefinableElementPrivate::~QRedefinableElementPrivate()
{
}

void QRedefinableElementPrivate::addRedefinedElement(QRedefinableElement *redefinedElement)
{
    // This is a read-only derived-union association end

    if (!this->redefinedElements.contains(redefinedElement)) {
        this->redefinedElements.insert(redefinedElement);
    }
}

void QRedefinableElementPrivate::removeRedefinedElement(QRedefinableElement *redefinedElement)
{
    // This is a read-only derived-union association end

    if (this->redefinedElements.contains(redefinedElement)) {
        this->redefinedElements.remove(redefinedElement);
    }
}

void QRedefinableElementPrivate::addRedefinitionContext(QClassifier *redefinitionContext)
{
    // This is a read-only derived-union association end

    if (!this->redefinitionContexts.contains(redefinitionContext)) {
        this->redefinitionContexts.insert(redefinitionContext);
    }
}

void QRedefinableElementPrivate::removeRedefinitionContext(QClassifier *redefinitionContext)
{
    // This is a read-only derived-union association end

    if (this->redefinitionContexts.contains(redefinitionContext)) {
        this->redefinitionContexts.remove(redefinitionContext);
    }
}

/*!
    \class QRedefinableElement

    \inmodule QtMof

    \brief A redefinable element is an element that, when defined in the context of a classifier, can be redefined more specifically or differently in the context of another classifier that specializes (directly or indirectly) the context classifier.
 */

QRedefinableElement::QRedefinableElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(*new QRedefinableElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QRedefinableElement::QRedefinableElement(QRedefinableElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QRedefinableElement::~QRedefinableElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QRedefinableElement::isLeaf() const
{
    // This is a read-write attribute

    Q_D(const QRedefinableElement);
    return d->isLeaf;
}

void QRedefinableElement::setLeaf(bool isLeaf)
{
    // This is a read-write attribute

    Q_D(QRedefinableElement);
    if (d->isLeaf != isLeaf) {
        d->isLeaf = isLeaf;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isLeaf");
}

void QRedefinableElement::unsetLeaf()
{
    setLeaf(false);
    Q_D(QRedefinableElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QRedefinableElement::redefinedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QRedefinableElement);
    return d->redefinedElements;
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QRedefinableElement::redefinitionContexts() const
{
    // This is a read-only derived-union association end

    Q_D(const QRedefinableElement);
    return d->redefinitionContexts;
}

/*!
    The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
 */
bool QRedefinableElement::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QRedefinableElement::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QRedefinableElement::isRedefinitionContextValid(const QRedefinableElement *redefined) const
{
    qWarning("QRedefinableElement::isRedefinitionContextValid: operation to be implemented");
    Q_UNUSED(redefined);

    return bool(); // change here to your derived return
}

void QRedefinableElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("isLeaf")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("isLeaf")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("isLeaf")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("isLeaf")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("isLeaf")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("isLeaf")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinedElements")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinedElements")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinedElements")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The redefinable element that is being redefined by this element.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinedElements")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinedElements")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinedElements")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinitionContexts")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinitionContexts")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinitionContexts")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the contexts that this element may be redefined from.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinitionContexts")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinitionContexts")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRedefinableElement")][QString::fromLatin1("redefinitionContexts")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QNamedElement::setPropertyData();
}

#include "moc_qredefinableelement.cpp"

QT_END_NAMESPACE_QTMOF

