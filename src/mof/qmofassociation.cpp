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
#include "qmofassociation.h"

#include "private/qmofassociationobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofFeature>
#include <QtMof/QMofGeneralization>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofObject>
#include <QtMof/QMofPackage>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofProperty>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofAssociation

    \inmodule QtMof

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

/*!
    Creates a new QMofAssociation. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofAssociation::QMofAssociation(bool createQModelingObject) :
    _isDerived(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofAssociationObject(this));
}

/*!
    Destroys the QMofAssociation.
 */
QMofAssociation::~QMofAssociation()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofAssociation.
*/
QModelingElement *QMofAssociation::clone() const
{
    QMofAssociation *c = new QMofAssociation;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QMofElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QMofElementImport *>(element->clone()));
    foreach (QMofConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QMofConstraint *>(element->clone()));
    foreach (QMofPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QMofPackageImport *>(element->clone()));
    foreach (QMofGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QMofGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    c->setDerived(isDerived());
    foreach (QMofProperty *element, ownedEnds())
        c->addOwnedEnd(dynamic_cast<QMofProperty *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the classifiers that are used as types of the ends of the association.

    \b {This is a read-only derived property.}

    \b {Subsetted property(ies):} QMofRelationship::relatedElements().
 */
const QList<QMofType *> QMofAssociation::endTypes() const
{
    // This is a read-only derived association end

    qWarning("QMofAssociation::endTypes(): to be implemented (this is a derived association end)");

    return QList<QMofType *>();
}

/*!
    Adds \a endType to endTypes.

    \sa endTypes(), removeEndType()
 */
void QMofAssociation::addEndType(QMofType *endType)
{
    // This is a read-only derived association end

    qWarning("QMofAssociation::addEndType(): to be implemented (this is a derived association end)");
    Q_UNUSED(endType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addRelatedElement(endType);
    }
}

/*!
    Removes \a endType from endTypes.

    \sa endTypes(), addEndType()
 */
void QMofAssociation::removeEndType(QMofType *endType)
{
    // This is a read-only derived association end

    qWarning("QMofAssociation::removeEndType(): to be implemented (this is a derived association end)");
    Q_UNUSED(endType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeRelatedElement(endType);
    }
}

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QMofAssociation::isDerived() const
{
    // This is a read-write property

    return _isDerived;
}

/*!
    Adjusts isDerived to \a isDerived.
 */
void QMofAssociation::setDerived(bool isDerived)
{
    // This is a read-write property

    if (_isDerived != isDerived) {
        _isDerived = isDerived;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isDerived");
    }
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.

    \sa addMemberEnd(), removeMemberEnd()

    \b {Subsetted property(ies):} QMofNamespace::members().

    \b {Opposite property(ies):} QMofProperty::association().
 */
const QList<QMofProperty *> QMofAssociation::memberEnds() const
{
    // This is a read-write association end

    return _memberEnds;
}

/*!
    Adds \a memberEnd to memberEnds.

    \sa memberEnds(), removeMemberEnd()
 */
void QMofAssociation::addMemberEnd(QMofProperty *memberEnd)
{
    // This is a read-write association end

    if (!_memberEnds.contains(memberEnd)) {
        _memberEnds.append(memberEnd);
        if (memberEnd && memberEnd->asQModelingObject() && this->asQModelingObject())
            QObject::connect(memberEnd->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeMemberEnd(QObject *)));

        // Adjust subsetted properties
        addMember(memberEnd);

        // Adjust opposite properties
        if (memberEnd) {
            memberEnd->setAssociation(this);
        }
    }
}

/*!
    Removes \a memberEnd from memberEnds.

    \sa memberEnds(), addMemberEnd()
 */
void QMofAssociation::removeMemberEnd(QMofProperty *memberEnd)
{
    // This is a read-write association end

    if (_memberEnds.contains(memberEnd)) {
        _memberEnds.removeAll(memberEnd);

        // Adjust subsetted properties
        removeMember(memberEnd);

        // Adjust opposite properties
        if (memberEnd) {
            memberEnd->setAssociation(0);
        }
    }
}

/*!
    The navigable ends that are owned by the association itself.

    \sa addNavigableOwnedEnd(), removeNavigableOwnedEnd()

    \b {Subsetted property(ies):} QMofAssociation::ownedEnds().
 */
const QSet<QMofProperty *> QMofAssociation::navigableOwnedEnds() const
{
    // This is a read-write association end

    return _navigableOwnedEnds;
}

/*!
    Adds \a navigableOwnedEnd to navigableOwnedEnds.

    \sa navigableOwnedEnds(), removeNavigableOwnedEnd()
 */
void QMofAssociation::addNavigableOwnedEnd(QMofProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    if (!_navigableOwnedEnds.contains(navigableOwnedEnd)) {
        _navigableOwnedEnds.insert(navigableOwnedEnd);
        if (navigableOwnedEnd && navigableOwnedEnd->asQModelingObject() && this->asQModelingObject())
            QObject::connect(navigableOwnedEnd->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeNavigableOwnedEnd(QObject *)));

        // Adjust subsetted properties
        addOwnedEnd(navigableOwnedEnd);
    }
}

/*!
    Removes \a navigableOwnedEnd from navigableOwnedEnds.

    \sa navigableOwnedEnds(), addNavigableOwnedEnd()
 */
void QMofAssociation::removeNavigableOwnedEnd(QMofProperty *navigableOwnedEnd)
{
    // This is a read-write association end

    if (_navigableOwnedEnds.contains(navigableOwnedEnd)) {
        _navigableOwnedEnds.remove(navigableOwnedEnd);

        // Adjust subsetted properties
        removeOwnedEnd(navigableOwnedEnd);
    }
}

/*!
    The ends that are owned by the association itself.

    \sa addOwnedEnd(), removeOwnedEnd()

    \b {Subsetted property(ies):} QMofClassifier::features(), QMofNamespace::ownedMembers(), QMofAssociation::memberEnds().

    \b {Opposite property(ies):} QMofProperty::owningAssociation().
 */
const QList<QMofProperty *> QMofAssociation::ownedEnds() const
{
    // This is a read-write association end

    return _ownedEnds;
}

/*!
    Adds \a ownedEnd to ownedEnds.

    \sa ownedEnds(), removeOwnedEnd()
 */
void QMofAssociation::addOwnedEnd(QMofProperty *ownedEnd)
{
    // This is a read-write association end

    if (!_ownedEnds.contains(ownedEnd)) {
        _ownedEnds.append(ownedEnd);
        if (ownedEnd && ownedEnd->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedEnd->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedEnd(QObject *)));
        ownedEnd->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addFeature(ownedEnd);
        addOwnedMember(ownedEnd);
        addMemberEnd(ownedEnd);

        // Adjust opposite properties
        if (ownedEnd) {
            ownedEnd->setOwningAssociation(this);
        }
    }
}

/*!
    Removes \a ownedEnd from ownedEnds.

    \sa ownedEnds(), addOwnedEnd()
 */
void QMofAssociation::removeOwnedEnd(QMofProperty *ownedEnd)
{
    // This is a read-write association end

    if (_ownedEnds.contains(ownedEnd)) {
        _ownedEnds.removeAll(ownedEnd);
        if (ownedEnd->asQModelingObject())
            ownedEnd->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedEnd);
        removeOwnedMember(ownedEnd);
        removeMemberEnd(ownedEnd);

        // Adjust opposite properties
        if (ownedEnd) {
            ownedEnd->setOwningAssociation(0);
        }
    }
}

QT_END_NAMESPACE

