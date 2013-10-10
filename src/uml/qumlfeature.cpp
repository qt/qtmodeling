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
#include "qumlfeature.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlFeature

    \inmodule QtUml

    \brief A feature declares a behavioral or structural characteristic of instances of classifiers.
 */
QUmlFeature::QUmlFeature() :
    _isStatic(false)
{
}

QUmlFeature::~QUmlFeature()
{
}

QModelingElement *QUmlFeature::clone() const
{
    QUmlFeature *c = new QUmlFeature;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QUmlClassifier *> QUmlFeature::featuringClassifiers() const
{
    // This is a read-only derived union association end

    return _featuringClassifiers;
}

void QUmlFeature::addFeaturingClassifier(QUmlClassifier *featuringClassifier)
{
    // This is a read-only derived union association end

    if (!_featuringClassifiers.contains(featuringClassifier)) {
        _featuringClassifiers.insert(featuringClassifier);
        if (featuringClassifier && featuringClassifier->asQModelingObject() && this->asQModelingObject())
            QObject::connect(featuringClassifier->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeFeaturingClassifier(QObject *)));

        // Adjust opposite properties
        if (featuringClassifier) {
            featuringClassifier->addFeature(this);
        }
    }
}

void QUmlFeature::removeFeaturingClassifier(QUmlClassifier *featuringClassifier)
{
    // This is a read-only derived union association end

    if (_featuringClassifiers.contains(featuringClassifier)) {
        _featuringClassifiers.remove(featuringClassifier);

        // Adjust opposite properties
        if (featuringClassifier) {
            featuringClassifier->removeFeature(this);
        }
    }
}

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlFeature::isStatic() const
{
    // This is a read-write property

    return _isStatic;
}

void QUmlFeature::setStatic(bool isStatic)
{
    // This is a read-write property

    if (_isStatic != isStatic) {
        _isStatic = isStatic;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isStatic");
    }
}

