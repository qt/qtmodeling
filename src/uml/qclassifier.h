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
#ifndef QTUML_QCLASSIFIER_H
#define QTUML_QCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QNamespace>
#include <QtUml/QType>
#include <QtUml/QRedefinableElement>
#include <QtUml/QTemplateableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QClassifierPrivate;
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

class Q_UML_EXPORT QClassifier : public QNamespace, public QType, public QRedefinableElement, public QTemplateableElement
{
    Q_DISABLE_COPY(QClassifier)
    Q_DECLARE_PRIVATE(QClassifier)

public:
    virtual ~QClassifier();

    // Attributes
    bool isAbstract() const;
    void setAbstract(bool isAbstract);
    bool isFinalSpecialization() const;
    void setFinalSpecialization(bool isFinalSpecialization);

    // Association-ends
    const QSet<QProperty *> *attributes() const;
    const QSet<QCollaborationUse *> *collaborationUses() const;
    void addCollaborationUse(const QCollaborationUse *collaborationUse);
    void removeCollaborationUse(const QCollaborationUse *collaborationUse);
    const QSet<QFeature *> *features() const;
    const QSet<QClassifier *> *generals() const;
    void addGeneral(const QClassifier *general);
    void removeGeneral(const QClassifier *general);
    const QSet<QGeneralization *> *generalizations() const;
    void addGeneralization(const QGeneralization *generalization);
    void removeGeneralization(const QGeneralization *generalization);
    const QSet<QNamedElement *> *inheritedMembers() const;
    QRedefinableTemplateSignature *ownedTemplateSignature() const;
    void setOwnedTemplateSignature(const QRedefinableTemplateSignature *ownedTemplateSignature);
    const QSet<QUseCase *> *ownedUseCases() const;
    void addOwnedUseCase(const QUseCase *ownedUseCase);
    void removeOwnedUseCase(const QUseCase *ownedUseCase);
    const QSet<QGeneralizationSet *> *powertypeExtents() const;
    void addPowertypeExtent(const QGeneralizationSet *powertypeExtent);
    void removePowertypeExtent(const QGeneralizationSet *powertypeExtent);
    const QSet<QClassifier *> *redefinedClassifiers() const;
    void addRedefinedClassifier(const QClassifier *redefinedClassifier);
    void removeRedefinedClassifier(const QClassifier *redefinedClassifier);
    QCollaborationUse *representation() const;
    void setRepresentation(const QCollaborationUse *representation);
    const QSet<QSubstitution *> *substitutions() const;
    void addSubstitution(const QSubstitution *substitution);
    void removeSubstitution(const QSubstitution *substitution);
    QClassifierTemplateParameter *templateParameter() const;
    void setTemplateParameter(const QClassifierTemplateParameter *templateParameter);
    const QSet<QUseCase *> *useCases() const;
    void addUseCase(const QUseCase *useCase);
    void removeUseCase(const QUseCase *useCase);

    // Operations
    const QSet<QFeature *> *allFeatures() const;
    const QSet<QClassifier *> *allParents() const;
    bool conformsTo(const QClassifier *other) const;
    bool hasVisibilityOf(const QNamedElement *n) const;
    const QSet<QNamedElement *> *inherit(const QSet<QNamedElement *> *inhs) const;
    const QSet<QNamedElement *> *inheritableMembers(const QClassifier *c) const;
    bool isTemplate() const;
    bool maySpecializeType(const QClassifier *c) const;
    const QSet<QClassifier *> *parents() const;

protected:
    // Synchronization functions for read-only subsetted properties
    void addAttribute(const QProperty *attribute);
    void removeAttribute(const QProperty *attribute);
    void addFeature(const QFeature *feature);
    void removeFeature(const QFeature *feature);

protected:
    explicit QClassifier();

private:
    QClassifierPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QCLASSIFIER_H

