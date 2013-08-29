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
#ifndef UMLCLASSIFIER_H
#define UMLCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

#include "private/umlnamespace_p.h"
#include "private/umltype_p.h"
#include "private/umlredefinableelement_p.h"
#include "private/umltemplateableelement_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlClassifierTemplateParameter;
class UmlCollaborationUse;
class UmlFeature;
class UmlGeneralization;
class UmlGeneralizationSet;
class UmlNamedElement;
class UmlProperty;
class UmlRedefinableTemplateSignature;
class UmlSubstitution;
class UmlUseCase;

class Q_UML_EXPORT UmlClassifier : public UmlNamespace, public UmlType, public UmlRedefinableElement, public UmlTemplateableElement
{
public:
    Q_DECL_HIDDEN explicit UmlClassifier();

    // Owned attributes
    const QSet<UmlProperty *> attribute() const;
    Q_DECL_HIDDEN void addAttribute(UmlProperty *attribute);
    Q_DECL_HIDDEN void removeAttribute(UmlProperty *attribute);
    const QSet<UmlCollaborationUse *> collaborationUse() const;
    void addCollaborationUse(UmlCollaborationUse *collaborationUse);
    void removeCollaborationUse(UmlCollaborationUse *collaborationUse);
    const QSet<UmlFeature *> feature() const;
    Q_DECL_HIDDEN void addFeature(UmlFeature *feature);
    Q_DECL_HIDDEN void removeFeature(UmlFeature *feature);
    const QSet<UmlClassifier *> general() const;
    void addGeneral(UmlClassifier *general);
    void removeGeneral(UmlClassifier *general);
    const QSet<UmlGeneralization *> generalization() const;
    void addGeneralization(UmlGeneralization *generalization);
    void removeGeneralization(UmlGeneralization *generalization);
    const QSet<UmlNamedElement *> inheritedMember() const;
    Q_DECL_HIDDEN void addInheritedMember(UmlNamedElement *inheritedMember);
    Q_DECL_HIDDEN void removeInheritedMember(UmlNamedElement *inheritedMember);
    bool isAbstract() const;
    void setAbstract(bool isAbstract);
    bool isFinalSpecialization() const;
    void setFinalSpecialization(bool isFinalSpecialization);
    UmlRedefinableTemplateSignature *ownedTemplateSignature() const;
    void setOwnedTemplateSignature(UmlRedefinableTemplateSignature *ownedTemplateSignature);
    const QSet<UmlUseCase *> ownedUseCase() const;
    void addOwnedUseCase(UmlUseCase *ownedUseCase);
    void removeOwnedUseCase(UmlUseCase *ownedUseCase);
    const QSet<UmlGeneralizationSet *> powertypeExtent() const;
    void addPowertypeExtent(UmlGeneralizationSet *powertypeExtent);
    void removePowertypeExtent(UmlGeneralizationSet *powertypeExtent);
    const QSet<UmlClassifier *> redefinedClassifier() const;
    void addRedefinedClassifier(UmlClassifier *redefinedClassifier);
    void removeRedefinedClassifier(UmlClassifier *redefinedClassifier);
    UmlCollaborationUse *representation() const;
    void setRepresentation(UmlCollaborationUse *representation);
    const QSet<UmlSubstitution *> substitution() const;
    void addSubstitution(UmlSubstitution *substitution);
    void removeSubstitution(UmlSubstitution *substitution);
    UmlClassifierTemplateParameter *templateParameter() const;
    void setTemplateParameter(UmlClassifierTemplateParameter *templateParameter);
    const QSet<UmlUseCase *> useCase() const;
    void addUseCase(UmlUseCase *useCase);
    void removeUseCase(UmlUseCase *useCase);

    // Operations
    QSet<UmlFeature *> allFeatures() const;
    QSet<UmlClassifier *> allParents() const;
    bool conformsTo(UmlClassifier *other) const;
    bool hasVisibilityOf(UmlNamedElement *n) const;
    QSet<UmlNamedElement *> inherit(QSet<UmlNamedElement *> inhs) const;
    QSet<UmlNamedElement *> inheritableMembers(UmlClassifier *c) const;
    bool isTemplate() const;
    bool maySpecializeType(UmlClassifier *c) const;
    QSet<UmlClassifier *> parents() const;

protected:
    QSet<UmlProperty *> _attribute;
    QSet<UmlCollaborationUse *> _collaborationUse;
    QSet<UmlFeature *> _feature;
    QSet<UmlGeneralization *> _generalization;
    bool _isAbstract;
    bool _isFinalSpecialization;
    UmlRedefinableTemplateSignature *_ownedTemplateSignature;
    QSet<UmlUseCase *> _ownedUseCase;
    QSet<UmlGeneralizationSet *> _powertypeExtent;
    QSet<UmlClassifier *> _redefinedClassifier;
    UmlCollaborationUse *_representation;
    QSet<UmlSubstitution *> _substitution;
    UmlClassifierTemplateParameter *_templateParameter;
    QSet<UmlUseCase *> _useCase;
};

#endif // UMLCLASSIFIER_H

