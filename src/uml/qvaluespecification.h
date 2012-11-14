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
#ifndef QTUML_QVALUESPECIFICATION_H
#define QTUML_QVALUESPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QTypedElement>
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QParameterableElement;

class QValueSpecificationPrivate;

class Q_UML_EXPORT QValueSpecification : public QObject
{
    Q_OBJECT

    Q_DISABLE_COPY(QValueSpecification)
    Q_DECLARE_PRIVATE(QValueSpecification)

public:
    explicit QValueSpecification(QObject *parent = 0);
    virtual ~QValueSpecification();

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    QString name() const;
    void setName(QString name);
    QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    QNamespace *namespace_() const;
    const QSet<QDependency *> *clientDependencies() const;
    void addClientDependency(QDependency *clientDependency);
    void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QTypedElement
    QType *type() const;
    void setType(QType *type);

    // Association ends from aggregated QParameterableElement
    QTemplateParameter *owningTemplateParameter() const;
    void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);
    QTemplateParameter *templateParameter() const;
    void setTemplateParameter(QTemplateParameter *templateParameter);

    // Attributes from aggregated QPackageableElement
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);

    // Operations
    bool booleanValue() const;
    qint32 integerValue() const;
    bool isCompatibleWith(const QParameterableElement *p) const;
    bool isComputable() const;
    bool isNull() const;
    qreal realValue() const;
    QString stringValue() const;
    qint32 unlimitedValue() const;

protected:
    explicit QValueSpecification(QValueSpecificationPrivate &dd, QObject *parent = 0);

private:
    QTypedElement *_wrappedTypedElement;
    QPackageableElement *_wrappedPackageableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QValueSpecification) *> *)

QT_END_HEADER

#endif // QTUML_QVALUESPECIFICATION_H

