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

class QUmlClassifierPrivate;
class Q_UML_EXPORT QUmlClassifier : public QUmlNamespace, public QUmlType, public QUmlRedefinableElement, public QUmlTemplateableElement
{
public:
    Q_DECL_HIDDEN QUmlClassifier(bool create_d_ptr = true);

    // Owned attributes
    QSet<QUmlProperty *> attribute() const;
    QSet<QUmlCollaborationUse *> collaborationUse() const;
    void addCollaborationUse(QSet<QUmlCollaborationUse *> collaborationUse);
    void removeCollaborationUse(QSet<QUmlCollaborationUse *> collaborationUse);
    QSet<QUmlFeature *> feature() const;
    QSet<QUmlClassifier *> general() const;
    void addGeneral(QSet<QUmlClassifier *> general);
    void removeGeneral(QSet<QUmlClassifier *> general);
    QSet<QUmlGeneralization *> generalization() const;
    void addGeneralization(QSet<QUmlGeneralization *> generalization);
    void removeGeneralization(QSet<QUmlGeneralization *> generalization);
    QSet<QUmlNamedElement *> inheritedMember() const;
    bool isAbstract() const;
    void setAbstract(bool isAbstract);
    bool isFinalSpecialization() const;
    void setFinalSpecialization(bool isFinalSpecialization);
    QUmlRedefinableTemplateSignature *ownedTemplateSignature() const;
    void setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature);
    QSet<QUmlUseCase *> ownedUseCase() const;
    void addOwnedUseCase(QSet<QUmlUseCase *> ownedUseCase);
    void removeOwnedUseCase(QSet<QUmlUseCase *> ownedUseCase);
    QSet<QUmlGeneralizationSet *> powertypeExtent() const;
    void addPowertypeExtent(QSet<QUmlGeneralizationSet *> powertypeExtent);
    void removePowertypeExtent(QSet<QUmlGeneralizationSet *> powertypeExtent);
    QSet<QUmlClassifier *> redefinedClassifier() const;
    void addRedefinedClassifier(QSet<QUmlClassifier *> redefinedClassifier);
    void removeRedefinedClassifier(QSet<QUmlClassifier *> redefinedClassifier);
    QUmlCollaborationUse *representation() const;
    void setRepresentation(QUmlCollaborationUse *representation);
    QSet<QUmlSubstitution *> substitution() const;
    void addSubstitution(QSet<QUmlSubstitution *> substitution);
    void removeSubstitution(QSet<QUmlSubstitution *> substitution);
    QUmlClassifierTemplateParameter *templateParameter() const;
    void setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter);
    QSet<QUmlUseCase *> useCase() const;
    void addUseCase(QSet<QUmlUseCase *> useCase);
    void removeUseCase(QSet<QUmlUseCase *> useCase);

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
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCLASSIFIER_H

