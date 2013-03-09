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
#ifndef QUMLREDEFINABLETEMPLATESIGNATURE_H
#define QUMLREDEFINABLETEMPLATESIGNATURE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlRedefinableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlRedefinableTemplateSignature;
class QUmlTemplateParameter;

class QUmlRedefinableTemplateSignaturePrivate;

class Q_UML_EXPORT QUmlRedefinableTemplateSignature : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(QSet<QUmlTemplateParameter *> inheritedParameters READ inheritedParameters STORED false)
    Q_PROPERTY(QUmlClassifier * classifier READ classifier WRITE setClassifier)
    Q_PROPERTY(QSet<QUmlRedefinableTemplateSignature *> extendedSignatures READ extendedSignatures)

    Q_DISABLE_COPY(QUmlRedefinableTemplateSignature)
    Q_DECLARE_PRIVATE(QUmlRedefinableTemplateSignature)

public:
    Q_INVOKABLE explicit QUmlRedefinableTemplateSignature(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlRedefinableTemplateSignature();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Attributes from aggregated QUmlRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QUmlRedefinableElement
    Q_INVOKABLE QSet<QUmlRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QUmlClassifier *> redefinitionContexts() const;

    // Association ends from QUmlRedefinableTemplateSignature
    Q_INVOKABLE QSet<QUmlTemplateParameter *> inheritedParameters() const;
    Q_INVOKABLE QUmlClassifier *classifier() const;
    Q_INVOKABLE void setClassifier(QUmlClassifier *classifier);
    Q_INVOKABLE QSet<QUmlRedefinableTemplateSignature *> extendedSignatures() const;
    Q_INVOKABLE void addExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature);
    Q_INVOKABLE void removeExtendedSignature(QUmlRedefinableTemplateSignature *extendedSignature);

    // Operations
    Q_INVOKABLE bool isConsistentWith(const QUmlRedefinableElement *redefinee) const;

    virtual void setPropertyData();

protected:
    explicit QUmlRedefinableTemplateSignature(QUmlRedefinableTemplateSignaturePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlTemplateSignature *_wrappedUmlTemplateSignature;
    QUmlRedefinableElement *_wrappedUmlRedefinableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLREDEFINABLETEMPLATESIGNATURE_H

