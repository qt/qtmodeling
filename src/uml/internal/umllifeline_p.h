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
#ifndef UMLLIFELINE_H
#define UMLLIFELINE_H

#include <QtUml/QtUmlGlobal>

#include "private/umlnamedelement_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlConnectableElement;
class UmlInteraction;
class UmlInteractionFragment;
class UmlPartDecomposition;
class UmlValueSpecification;

class Q_UML_EXPORT UmlLifeline : public UmlNamedElement
{
public:
    Q_DECL_HIDDEN explicit UmlLifeline();

    // Owned attributes
    const QSet<UmlInteractionFragment *> coveredBy() const;
    void addCoveredBy(UmlInteractionFragment *coveredBy);
    void removeCoveredBy(UmlInteractionFragment *coveredBy);
    UmlPartDecomposition *decomposedAs() const;
    void setDecomposedAs(UmlPartDecomposition *decomposedAs);
    UmlInteraction *interaction() const;
    void setInteraction(UmlInteraction *interaction);
    UmlConnectableElement *represents() const;
    void setRepresents(UmlConnectableElement *represents);
    UmlValueSpecification *selector() const;
    void setSelector(UmlValueSpecification *selector);

protected:
    QSet<UmlInteractionFragment *> _coveredBy;
    UmlPartDecomposition *_decomposedAs;
    UmlInteraction *_interaction;
    UmlConnectableElement *_represents;
    UmlValueSpecification *_selector;
};

#endif // UMLLIFELINE_H

