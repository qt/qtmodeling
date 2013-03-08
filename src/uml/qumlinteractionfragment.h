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
#ifndef QUMLINTERACTIONFRAGMENT_H
#define QUMLINTERACTIONFRAGMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlNamedElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlGeneralOrdering;
class QUmlInteractionOperand;
class QUmlLifeline;
class QUmlInteraction;

class QUmlInteractionFragmentPrivate;

class Q_UML_EXPORT QUmlInteractionFragment : public QUmlNamedElement
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlGeneralOrdering *> generalOrderings READ generalOrderings)
    Q_PROPERTY(QUmlInteraction * enclosingInteraction READ enclosingInteraction WRITE setEnclosingInteraction)
    Q_PROPERTY(QSet<QUmlLifeline *> covered READ covered)
    Q_PROPERTY(QUmlInteractionOperand * enclosingOperand READ enclosingOperand WRITE setEnclosingOperand)

    Q_DISABLE_COPY(QUmlInteractionFragment)
    Q_DECLARE_PRIVATE(QUmlInteractionFragment)

public:
    Q_INVOKABLE explicit QUmlInteractionFragment(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInteractionFragment();

    // Association ends from QUmlInteractionFragment
    Q_INVOKABLE QSet<QUmlGeneralOrdering *> generalOrderings() const;
    Q_INVOKABLE void addGeneralOrdering(QUmlGeneralOrdering *generalOrdering);
    Q_INVOKABLE void removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering);
    Q_INVOKABLE QUmlInteraction *enclosingInteraction() const;
    Q_INVOKABLE void setEnclosingInteraction(QUmlInteraction *enclosingInteraction);
    Q_INVOKABLE QSet<QUmlLifeline *> covered() const;
    Q_INVOKABLE void addCovered(QUmlLifeline *covered);
    Q_INVOKABLE void removeCovered(QUmlLifeline *covered);
    Q_INVOKABLE QUmlInteractionOperand *enclosingOperand() const;
    Q_INVOKABLE void setEnclosingOperand(QUmlInteractionOperand *enclosingOperand);

    virtual void setPropertyData();

protected:
    explicit QUmlInteractionFragment(QUmlInteractionFragmentPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINTERACTIONFRAGMENT_H

