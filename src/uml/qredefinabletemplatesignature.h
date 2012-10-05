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
#include <QtUml/QTemplateSignature>
#include <QtUml/QRedefinableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QRedefinableTemplateSignaturePrivate;
class QClassifier;
class QTemplateParameter;

class Q_UML_EXPORT QRedefinableTemplateSignature : public QTemplateSignature, public QRedefinableElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QRedefinableTemplateSignature
    Q_PROPERTY(QClassifier * classifier READ classifier WRITE setClassifier)
    Q_PROPERTY(const QSet<QRedefinableTemplateSignature *> * extendedSignatures READ extendedSignatures)
    Q_PROPERTY(const QSet<QTemplateParameter *> * inheritedParameters READ inheritedParameters)

    Q_DISABLE_COPY(QRedefinableTemplateSignature)
    Q_DECLARE_PRIVATE(QRedefinableTemplateSignature)

public:
    explicit QRedefinableTemplateSignature(QObject *parent = 0);
    virtual ~QRedefinableTemplateSignature();

    // Association-ends
    QClassifier *classifier() const;
    void setClassifier(const QClassifier *classifier);
    const QSet<QRedefinableTemplateSignature *> *extendedSignatures() const;
    void addExtendedSignature(const QRedefinableTemplateSignature *extendedSignature);
    void removeExtendedSignature(const QRedefinableTemplateSignature *extendedSignature);
    const QSet<QTemplateParameter *> *inheritedParameters() const;

    // Operations
    bool isConsistentWith(const QRedefinableElement *redefinee) const;

private:
    QRedefinableTemplateSignaturePrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QRedefinableTemplateSignature) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QRedefinableTemplateSignature) *> *)

QT_END_HEADER

#endif // QTUML_QREDEFINABLETEMPLATESIGNATURE_H

