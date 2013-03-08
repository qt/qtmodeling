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
#ifndef QUMLCLASSIFIER_P_H
#define QUMLCLASSIFIER_P_H

// Base class includes
#include "private/qwrappedobject_p.h"
#include "private/qumlnamespace_p.h"
#include "private/qumltype_p.h"
#include "private/qumlredefinableelement_p.h"
#include "private/qumltemplateableelement_p.h"

#include "QtUml/QUmlClassifier"

// Qt includes
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlRedefinableTemplateSignature;
class QUmlClassifierTemplateParameter;
class QUmlUseCase;
class QUmlSubstitution;
class QUmlGeneralizationSet;
class QUmlNamedElement;
class QUmlProperty;
class QUmlGeneralization;
class QUmlCollaborationUse;
class QUmlClassifier;
class QUmlFeature;

class Q_UML_EXPORT QUmlClassifierPrivate : public QWrappedObjectPrivate
{
    Q_DECLARE_PUBLIC(QUmlClassifier)

public:
    explicit QUmlClassifierPrivate();
    virtual ~QUmlClassifierPrivate();

    bool isAbstract;
    bool isFinalSpecialization;
    QSet<QUmlUseCase *> ownedUseCases;
    QSet<QUmlGeneralizationSet *> powertypeExtents;
    QSet<QUmlUseCase *> useCases;
    QUmlClassifierTemplateParameter *templateParameter;
    QSet<QUmlClassifier *> redefinedClassifiers;
    QUmlRedefinableTemplateSignature *ownedTemplateSignature;
    QSet<QUmlCollaborationUse *> collaborationUses;
    QSet<QUmlProperty *> attributes;
    QSet<QUmlFeature *> features;
    QUmlCollaborationUse *representation;
    QSet<QUmlGeneralization *> generalizations;
    QSet<QUmlSubstitution *> substitutions;

    // Internal functions for read-only subsetted association ends
    void addAttribute(QUmlProperty *attribute);
    void removeAttribute(QUmlProperty *attribute);
    void addFeature(QUmlFeature *feature);
    void removeFeature(QUmlFeature *feature);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCLASSIFIER_P_H

