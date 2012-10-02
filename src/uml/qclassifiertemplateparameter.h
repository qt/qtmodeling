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
#ifndef QTUML_QCLASSIFIERTEMPLATEPARAMETER_H
#define QTUML_QCLASSIFIERTEMPLATEPARAMETER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QTemplateParameter>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QClassifierTemplateParameterPrivate;
class QClassifier;

class Q_UML_EXPORT QClassifierTemplateParameter : public QTemplateParameter
{
    Q_OBJECT

    // From QClassifierTemplateParameter
    Q_PROPERTY(bool allowSubstitutable READ allowSubstitutable WRITE setAllowSubstitutable)
    Q_PROPERTY(QList<QClassifier *> * constrainingClassifiers READ constrainingClassifiers)
    Q_PROPERTY(QClassifier * parameteredElement READ parameteredElement WRITE setParameteredElement)

public:
    explicit QClassifierTemplateParameter(QObject *parent = 0);
    virtual ~QClassifierTemplateParameter();

    // Attributes (except those derived && !derivedUnion)
    bool allowSubstitutable() const;
    void setAllowSubstitutable(bool allowSubstitutable);

    // Association-ends (except those derived && !derivedUnion)
    QList<QClassifier *> *constrainingClassifiers();
    QClassifier *parameteredElement() const;
    void setParameteredElement(QClassifier *parameteredElement);

private:
    Q_DISABLE_COPY(QClassifierTemplateParameter)
    Q_DECLARE_PRIVATE(QClassifierTemplateParameter)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QClassifierTemplateParameter *>)
Q_DECLARE_METATYPE(QList<QtUml::QClassifierTemplateParameter *> *)

QT_END_HEADER

#endif // QTUML_QCLASSIFIERTEMPLATEPARAMETER_H

