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
#ifndef QUMLGENERALIZATION_H
#define QUMLGENERALIZATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlDirectedRelationship>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlGeneralizationSet;

class QUmlGeneralizationPrivate;

class Q_UML_EXPORT QUmlGeneralization : public QUmlDirectedRelationship
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isSubstitutable READ isSubstitutable WRITE setSubstitutable RESET unsetSubstitutable)
    Q_PROPERTY(QUmlClassifier * specific READ specific WRITE setSpecific)
    Q_PROPERTY(QSet<QUmlGeneralizationSet *> generalizationSets READ generalizationSets)
    Q_PROPERTY(QUmlClassifier * general READ general WRITE setGeneral)

    Q_DISABLE_COPY(QUmlGeneralization)
    Q_DECLARE_PRIVATE(QUmlGeneralization)

public:
    Q_INVOKABLE explicit QUmlGeneralization(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlGeneralization();

    // Attributes from QUmlGeneralization
    Q_INVOKABLE bool isSubstitutable() const;
    Q_INVOKABLE void setSubstitutable(bool isSubstitutable);
    Q_INVOKABLE void unsetSubstitutable();

    // Association ends from QUmlGeneralization
    Q_INVOKABLE QUmlClassifier *specific() const;
    Q_INVOKABLE void setSpecific(QUmlClassifier *specific);
    Q_INVOKABLE QSet<QUmlGeneralizationSet *> generalizationSets() const;
    Q_INVOKABLE void addGeneralizationSet(QUmlGeneralizationSet *generalizationSet);
    Q_INVOKABLE void removeGeneralizationSet(QUmlGeneralizationSet *generalizationSet);
    Q_INVOKABLE QUmlClassifier *general() const;
    Q_INVOKABLE void setGeneral(QUmlClassifier *general);

    virtual void setPropertyData();

protected:
    explicit QUmlGeneralization(QUmlGeneralizationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLGENERALIZATION_H

