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
#ifndef QTUML_QREDEFINABLETEMPLATESIGNATURE_H
#define QTUML_QREDEFINABLETEMPLATESIGNATURE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QTemplateSignature>
#include <QtUml/QRedefinableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QClassifier;
class QTemplateParameter;

class QRedefinableTemplateSignaturePrivate;

class Q_UML_EXPORT QRedefinableTemplateSignature : public QObject
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QTemplateParameter *> * inheritedParameters READ inheritedParameters STORED false)
    Q_PROPERTY(QClassifier * classifier READ classifier WRITE setClassifier)
    Q_PROPERTY(const QSet<QRedefinableTemplateSignature *> * extendedSignatures READ extendedSignatures)

    Q_DISABLE_COPY(QRedefinableTemplateSignature)
    Q_DECLARE_PRIVATE(QRedefinableTemplateSignature)

public:
    explicit QRedefinableTemplateSignature(QObject *parent = 0);
    virtual ~QRedefinableTemplateSignature();

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    QString name() const;
    void setName(QString name);
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);
    QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    QNamespace *namespace_() const;
    const QSet<QDependency *> *clientDependencies() const;
    void addClientDependency(QDependency *clientDependency);
    void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QRedefinableElement
    bool isLeaf() const;
    void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    const QSet<QRedefinableElement *> *redefinedElements() const;
    const QSet<QClassifier *> *redefinitionContexts() const;

    // Association ends from QRedefinableTemplateSignature
    const QSet<QTemplateParameter *> *inheritedParameters() const;
    QClassifier *classifier() const;
    void setClassifier(QClassifier *classifier);
    const QSet<QRedefinableTemplateSignature *> *extendedSignatures() const;
    void addExtendedSignature(QRedefinableTemplateSignature *extendedSignature);
    void removeExtendedSignature(QRedefinableTemplateSignature *extendedSignature);

    // Operations
    bool isConsistentWith(const QRedefinableElement *redefinee) const;

protected:
    explicit QRedefinableTemplateSignature(QRedefinableTemplateSignaturePrivate &dd, QObject *parent = 0);

private:
    QTemplateSignature *_wrappedTemplateSignature;
    QRedefinableElement *_wrappedRedefinableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QRedefinableTemplateSignature) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QRedefinableTemplateSignature) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QRedefinableTemplateSignature) *> *)

QT_END_HEADER

#endif // QTUML_QREDEFINABLETEMPLATESIGNATURE_H

