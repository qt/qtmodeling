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
#include "qmofgeneralization.h"

#include "private/qmofgeneralizationobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

/*!
    \class QMofGeneralization

    \inmodule QtMof

    \brief A generalization is a taxonomic relationship between a more general classifier and a more specific classifier. Each instance of the specific classifier is also an indirect instance of the general classifier. Thus, the specific classifier inherits the features of the more general classifier.
 */

/*!
    Creates a new QMofGeneralization. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofGeneralization::QMofGeneralization(bool createQModelingObject) :
    _general(0),
    _isSubstitutable(true),
    _specific(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofGeneralizationObject(this));
}

/*!
    Returns a deep-copied clone of the QMofGeneralization.
*/
QModelingElement *QMofGeneralization::clone() const
{
    QMofGeneralization *c = new QMofGeneralization;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    if (general())
        c->setGeneral(dynamic_cast<QMofClassifier *>(general()->clone()));
    c->setSubstitutable(isSubstitutable());
    if (specific())
        c->setSpecific(dynamic_cast<QMofClassifier *>(specific()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the general classifier in the Generalization relationship.

    \b {Subsetted property(ies):} QMofDirectedRelationship::targets().
 */
QMofClassifier *QMofGeneralization::general() const
{
    // This is a read-write association end

    return _general;
}

/*!
    Adjusts general to \a general.
 */
void QMofGeneralization::setGeneral(QMofClassifier *general)
{
    // This is a read-write association end

    if (_general != general) {
        // Adjust subsetted properties
        removeTarget(_general);

        _general = general;
        if (general && general->asQModelingObject() && this->asQModelingObject())
            QObject::connect(general->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setGeneral()));

        // Adjust subsetted properties
        if (general) {
            addTarget(general);
        }
    }
}

/*!
    Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier.
 */
bool QMofGeneralization::isSubstitutable() const
{
    // This is a read-write property

    return _isSubstitutable;
}

/*!
    Adjusts isSubstitutable to \a isSubstitutable.
 */
void QMofGeneralization::setSubstitutable(bool isSubstitutable)
{
    // This is a read-write property

    if (_isSubstitutable != isSubstitutable) {
        _isSubstitutable = isSubstitutable;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isSubstitutable");
    }
}

/*!
    References the specializing classifier in the Generalization relationship.

    \b {Subsetted property(ies):} QMofElement::owner(), QMofDirectedRelationship::sources().

    \b {Opposite property(ies):} QMofClassifier::generalizations().
 */
QMofClassifier *QMofGeneralization::specific() const
{
    // This is a read-write association end

    return _specific;
}

/*!
    Adjusts specific to \a specific.
 */
void QMofGeneralization::setSpecific(QMofClassifier *specific)
{
    // This is a read-write association end

    if (_specific != specific) {
        // Adjust subsetted properties
        removeSource(_specific);

        _specific = specific;
        if (specific && specific->asQModelingObject() && this->asQModelingObject())
            QObject::connect(specific->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSpecific()));

        // Adjust subsetted properties
        setOwner(specific);
        if (specific) {
            addSource(specific);
        }
    }
}

QT_END_NAMESPACE

