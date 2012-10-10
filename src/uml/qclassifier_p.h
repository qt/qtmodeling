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
#ifndef QTUML_QCLASSIFIER_P_H
#define QTUML_QCLASSIFIER_P_H

#include <QtUml/QtUmlGlobal>

// Base class includes

#include "qnamespace_p.h"

#include "qtype_p.h"

#include "qredefinableelement_p.h"

#include "qtemplateableelement_p.h"

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QClassifierTemplateParameter;
class QUseCase;
class QSubstitution;
class QGeneralizationSet;
class QRedefinableTemplateSignature;
class QProperty;
class QNamedElement;
class QCollaborationUse;
class QGeneralization;
class QFeature;

class QClassifierPrivate : public QNamespacePrivate, public QTypePrivate, public QRedefinableElementPrivate, public QTemplateableElementPrivate
{
public:
    explicit QClassifierPrivate();
    virtual ~QClassifierPrivate();

    bool isAbstract;
    bool isFinalSpecialization;
    QSet<QUseCase *> *ownedUseCases;
    QSet<QGeneralizationSet *> *powertypeExtents;
    QSet<QUseCase *> *useCases;
    QClassifierTemplateParameter *templateParameter;
    QSet<QClassifier *> *redefinedClassifiers;
    QRedefinableTemplateSignature *ownedTemplateSignature;
    QSet<QCollaborationUse *> *collaborationUses;
    QSet<QProperty *> *attributes;
    QSet<QFeature *> *features;
    QCollaborationUse *representation;
    QSet<QGeneralization *> *generalizations;
    QSet<QSubstitution *> *substitutions;

    // Attributes
    void setAbstract(bool isAbstract);
    void setFinalSpecialization(bool isFinalSpecialization);

    // Association-ends
    void addOwnedUseCase(const QUseCase *ownedUseCase);
    void removeOwnedUseCase(const QUseCase *ownedUseCase);
    void addPowertypeExtent(const QGeneralizationSet *powertypeExtent);
    void removePowertypeExtent(const QGeneralizationSet *powertypeExtent);
    void addUseCase(const QUseCase *useCase);
    void removeUseCase(const QUseCase *useCase);
    void setTemplateParameter(const QClassifierTemplateParameter *templateParameter);
    void addRedefinedClassifier(const QClassifier *redefinedClassifier);
    void removeRedefinedClassifier(const QClassifier *redefinedClassifier);
    void setOwnedTemplateSignature(const QRedefinableTemplateSignature *ownedTemplateSignature);
    void addCollaborationUse(const QCollaborationUse *collaborationUse);
    void removeCollaborationUse(const QCollaborationUse *collaborationUse);
    void addAttribute(const QProperty *attribute);
    void removeAttribute(const QProperty *attribute);
    void addFeature(const QFeature *feature);
    void removeFeature(const QFeature *feature);
    void addGeneral(const QClassifier *general);
    void removeGeneral(const QClassifier *general);
    void setRepresentation(const QCollaborationUse *representation);
    void addGeneralization(const QGeneralization *generalization);
    void removeGeneralization(const QGeneralization *generalization);
    void addInheritedMember(const QNamedElement *inheritedMember);
    void removeInheritedMember(const QNamedElement *inheritedMember);
    void addSubstitution(const QSubstitution *substitution);
    void removeSubstitution(const QSubstitution *substitution);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QCLASSIFIER_P_H

