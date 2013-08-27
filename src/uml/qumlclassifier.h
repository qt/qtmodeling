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

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlType>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlTemplateableElement>

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

class Q_UML_EXPORT QUmlClassifier : public QUmlNamespace, public QUmlType, public QUmlRedefinableElement, public QUmlTemplateableElement
{
public:
    Q_DECL_HIDDEN QUmlClassifier();

    // Owned attributes
    const QSet<QUmlProperty *> attribute() const;
    Q_DECL_HIDDEN void addAttribute(QUmlProperty *attribute);
    Q_DECL_HIDDEN void removeAttribute(QUmlProperty *attribute);
    const QSet<QUmlCollaborationUse *> collaborationUse() const;
    void addCollaborationUse(QUmlCollaborationUse *collaborationUse);
    void removeCollaborationUse(QUmlCollaborationUse *collaborationUse);
    const QSet<QUmlFeature *> feature() const;
    Q_DECL_HIDDEN void addFeature(QUmlFeature *feature);
    Q_DECL_HIDDEN void removeFeature(QUmlFeature *feature);
    const QSet<QUmlClassifier *> general() const;
    void addGeneral(QUmlClassifier *general);
    void removeGeneral(QUmlClassifier *general);
    const QSet<QUmlGeneralization *> generalization() const;
    void addGeneralization(QUmlGeneralization *generalization);
    void removeGeneralization(QUmlGeneralization *generalization);
    const QSet<QUmlNamedElement *> inheritedMember() const;
    Q_DECL_HIDDEN void addInheritedMember(QUmlNamedElement *inheritedMember);
    Q_DECL_HIDDEN void removeInheritedMember(QUmlNamedElement *inheritedMember);
    bool isAbstract() const;
    void setAbstract(bool isAbstract);
    bool isFinalSpecialization() const;
    void setFinalSpecialization(bool isFinalSpecialization);
    QUmlRedefinableTemplateSignature *ownedTemplateSignature() const;
    void setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature);
    const QSet<QUmlUseCase *> ownedUseCase() const;
    void addOwnedUseCase(QUmlUseCase *ownedUseCase);
    void removeOwnedUseCase(QUmlUseCase *ownedUseCase);
    const QSet<QUmlGeneralizationSet *> powertypeExtent() const;
    void addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent);
    void removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent);
    const QSet<QUmlClassifier *> redefinedClassifier() const;
    void addRedefinedClassifier(QUmlClassifier *redefinedClassifier);
    void removeRedefinedClassifier(QUmlClassifier *redefinedClassifier);
    QUmlCollaborationUse *representation() const;
    void setRepresentation(QUmlCollaborationUse *representation);
    const QSet<QUmlSubstitution *> substitution() const;
    void addSubstitution(QUmlSubstitution *substitution);
    void removeSubstitution(QUmlSubstitution *substitution);
    QUmlClassifierTemplateParameter *templateParameter() const;
    void setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter);
    const QSet<QUmlUseCase *> useCase() const;
    void addUseCase(QUmlUseCase *useCase);
    void removeUseCase(QUmlUseCase *useCase);

    // Operations
    QSet<QUmlFeature *> allFeatures() const;
    QSet<QUmlClassifier *> allParents() const;
    bool conformsTo(QUmlClassifier *other) const;
    bool hasVisibilityOf(QUmlNamedElement *n) const;
    QSet<QUmlNamedElement *> inherit(QSet<QUmlNamedElement *> inhs) const;
    QSet<QUmlNamedElement *> inheritableMembers(QUmlClassifier *c) const;
    bool isTemplate() const;
    bool maySpecializeType(QUmlClassifier *c) const;
    QSet<QUmlClassifier *> parents() const;

protected:
    QSet<QUmlProperty *> _attribute;
    QSet<QUmlCollaborationUse *> _collaborationUse;
    QSet<QUmlFeature *> _feature;
    QSet<QUmlGeneralization *> _generalization;
    bool _isAbstract;
    bool _isFinalSpecialization;
    QUmlRedefinableTemplateSignature *_ownedTemplateSignature;
    QSet<QUmlUseCase *> _ownedUseCase;
    QSet<QUmlGeneralizationSet *> _powertypeExtent;
    QSet<QUmlClassifier *> _redefinedClassifier;
    QUmlCollaborationUse *_representation;
    QSet<QUmlSubstitution *> _substitution;
    QUmlClassifierTemplateParameter *_templateParameter;
    QSet<QUmlUseCase *> _useCase;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlClassifier *)
Q_DECLARE_METATYPE(QList<QUmlClassifier *> *)
Q_DECLARE_METATYPE(QSet<QUmlClassifier *> *)

QT_END_HEADER

#endif // QUMLCLASSIFIER_H

