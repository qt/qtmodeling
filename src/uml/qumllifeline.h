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
#ifndef QUMLLIFELINE_H
#define QUMLLIFELINE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlConnectableElement;
class QUmlValueSpecification;
class QUmlInteraction;
class QUmlInteractionFragment;
class QUmlPartDecomposition;

class QUmlLifelinePrivate;

class Q_UML_EXPORT QUmlLifeline : public QUmlNamedElement
{
    Q_OBJECT

    Q_PROPERTY(QUmlConnectableElement * represents READ represents WRITE setRepresents)
    Q_PROPERTY(QUmlPartDecomposition * decomposedAs READ decomposedAs WRITE setDecomposedAs)
    Q_PROPERTY(QSet<QUmlInteractionFragment *> coveredBy READ coveredBy)
    Q_PROPERTY(QUmlInteraction * interaction READ interaction WRITE setInteraction)
    Q_PROPERTY(QUmlValueSpecification * selector READ selector WRITE setSelector)

    Q_DISABLE_COPY(QUmlLifeline)
    Q_DECLARE_PRIVATE(QUmlLifeline)

public:
    Q_INVOKABLE explicit QUmlLifeline(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlLifeline();

    // Association ends from QUmlLifeline
    Q_INVOKABLE QUmlConnectableElement *represents() const;
    Q_INVOKABLE void setRepresents(QUmlConnectableElement *represents);
    Q_INVOKABLE QUmlPartDecomposition *decomposedAs() const;
    Q_INVOKABLE void setDecomposedAs(QUmlPartDecomposition *decomposedAs);
    Q_INVOKABLE QSet<QUmlInteractionFragment *> coveredBy() const;
    Q_INVOKABLE void addCoveredBy(QUmlInteractionFragment *coveredBy);
    Q_INVOKABLE void removeCoveredBy(QUmlInteractionFragment *coveredBy);
    Q_INVOKABLE QUmlInteraction *interaction() const;
    Q_INVOKABLE void setInteraction(QUmlInteraction *interaction);
    Q_INVOKABLE QUmlValueSpecification *selector() const;
    Q_INVOKABLE void setSelector(QUmlValueSpecification *selector);

    virtual void setPropertyData();

protected:
    explicit QUmlLifeline(QUmlLifelinePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLLIFELINE_H

