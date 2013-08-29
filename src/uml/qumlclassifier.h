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
#ifndef QUMLCLASSIFIER_H
#define QUMLCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlclassifier_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifierTemplateParameter;
class QUmlCollaborationUse;
class QUmlFeature;
class QUmlGeneralization;
class QUmlGeneralizationSet;
class QUmlNamedElement;
class QUmlProperty;
class QUmlRedefinableTemplateSignature;
class QUmlSubstitution;
class QUmlUseCase;

class Q_UML_EXPORT QUmlClassifier : public QObject, public UmlClassifier
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlProperty *> attribute READ attribute)
    Q_PROPERTY(QSet<QUmlCollaborationUse *> collaborationUse READ collaborationUse)
    Q_PROPERTY(QSet<QUmlFeature *> feature READ feature)
    Q_PROPERTY(QSet<QUmlClassifier *> general READ general)
    Q_PROPERTY(QSet<QUmlGeneralization *> generalization READ generalization)
    Q_PROPERTY(QSet<QUmlNamedElement *> inheritedMember READ inheritedMember)
    Q_PROPERTY(bool isAbstract READ isAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization)
    Q_PROPERTY(QUmlRedefinableTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature)
    Q_PROPERTY(QSet<QUmlUseCase *> ownedUseCase READ ownedUseCase)
    Q_PROPERTY(QSet<QUmlGeneralizationSet *> powertypeExtent READ powertypeExtent)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinedClassifier READ redefinedClassifier)
    Q_PROPERTY(QUmlCollaborationUse * representation READ representation)
    Q_PROPERTY(QSet<QUmlSubstitution *> substitution READ substitution)
    Q_PROPERTY(QUmlClassifierTemplateParameter * templateParameter READ templateParameter)
    Q_PROPERTY(QSet<QUmlUseCase *> useCase READ useCase)

public:
    Q_DECL_HIDDEN explicit QUmlClassifier(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlProperty *> attribute() const;
    Q_INVOKABLE const QSet<QUmlCollaborationUse *> collaborationUse() const;
    Q_INVOKABLE void addCollaborationUse(UmlCollaborationUse *collaborationUse);
    Q_INVOKABLE void removeCollaborationUse(UmlCollaborationUse *collaborationUse);
    Q_INVOKABLE const QSet<QUmlFeature *> feature() const;
    Q_INVOKABLE const QSet<QUmlClassifier *> general() const;
    Q_INVOKABLE void addGeneral(UmlClassifier *general);
    Q_INVOKABLE void removeGeneral(UmlClassifier *general);
    Q_INVOKABLE const QSet<QUmlGeneralization *> generalization() const;
    Q_INVOKABLE void addGeneralization(UmlGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(UmlGeneralization *generalization);
    Q_INVOKABLE const QSet<QUmlNamedElement *> inheritedMember() const;
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);
    Q_INVOKABLE QUmlRedefinableTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE const QSet<QUmlUseCase *> ownedUseCase() const;
    Q_INVOKABLE void addOwnedUseCase(UmlUseCase *ownedUseCase);
    Q_INVOKABLE void removeOwnedUseCase(UmlUseCase *ownedUseCase);
    Q_INVOKABLE const QSet<QUmlGeneralizationSet *> powertypeExtent() const;
    Q_INVOKABLE void addPowertypeExtent(UmlGeneralizationSet *powertypeExtent);
    Q_INVOKABLE void removePowertypeExtent(UmlGeneralizationSet *powertypeExtent);
    Q_INVOKABLE const QSet<QUmlClassifier *> redefinedClassifier() const;
    Q_INVOKABLE void addRedefinedClassifier(UmlClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(UmlClassifier *redefinedClassifier);
    Q_INVOKABLE QUmlCollaborationUse *representation() const;
    Q_INVOKABLE void setRepresentation(QUmlCollaborationUse *representation);
    Q_INVOKABLE const QSet<QUmlSubstitution *> substitution() const;
    Q_INVOKABLE void addSubstitution(UmlSubstitution *substitution);
    Q_INVOKABLE void removeSubstitution(UmlSubstitution *substitution);
    Q_INVOKABLE QUmlClassifierTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter);
    Q_INVOKABLE const QSet<QUmlUseCase *> useCase() const;
    Q_INVOKABLE void addUseCase(UmlUseCase *useCase);
    Q_INVOKABLE void removeUseCase(UmlUseCase *useCase);

    // Operations
    Q_INVOKABLE QSet<QUmlFeature *> allFeatures() const;
    Q_INVOKABLE QSet<QUmlClassifier *> allParents() const;
    Q_INVOKABLE bool conformsTo(QUmlClassifier *other) const;
    Q_INVOKABLE bool hasVisibilityOf(QUmlNamedElement *n) const;
    Q_INVOKABLE QSet<QUmlNamedElement *> inherit(QSet<QUmlNamedElement *> inhs) const;
    Q_INVOKABLE QSet<QUmlNamedElement *> inheritableMembers(QUmlClassifier *c) const;
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE bool maySpecializeType(QUmlClassifier *c) const;
    Q_INVOKABLE QSet<QUmlClassifier *> parents() const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlClassifier *)
Q_DECLARE_METATYPE(QList<QUmlClassifier *> *)
Q_DECLARE_METATYPE(QSet<QUmlClassifier *> *)

QT_END_HEADER

#endif // QUMLCLASSIFIER_H

