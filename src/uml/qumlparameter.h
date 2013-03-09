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
#ifndef QUMLPARAMETER_H
#define QUMLPARAMETER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlConnectableElement>

// QtUml includes
#include <QtUml/QtUmlNamespace>
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlValueSpecification;
class QUmlOperation;
class QUmlParameterSet;

class QUmlParameterPrivate;

class Q_UML_EXPORT QUmlParameter : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(qint32 upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QUmlValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QUmlValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QUmlType * type READ type WRITE setType)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    Q_PROPERTY(QList<QUmlConnectorEnd *> ends READ ends STORED false)
    Q_PROPERTY(QUmlConnectableElementTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(bool isException READ isException WRITE setException RESET unsetException)
    Q_PROPERTY(QString default_ READ default_ WRITE setDefault_ STORED false)
    Q_PROPERTY(QtUml::ParameterDirectionKind direction READ direction WRITE setDirection RESET unsetDirection)
    Q_PROPERTY(bool isStream READ isStream WRITE setStream RESET unsetStream)
    Q_PROPERTY(QtUml::ParameterEffectKind effect READ effect WRITE setEffect)
    Q_PROPERTY(QUmlOperation * operation READ operation WRITE setOperation)
    Q_PROPERTY(QUmlValueSpecification * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(QSet<QUmlParameterSet *> parameterSets READ parameterSets)

    Q_DISABLE_COPY(QUmlParameter)
    Q_DECLARE_PRIVATE(QUmlParameter)

public:
    Q_INVOKABLE explicit QUmlParameter(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlParameter();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlMultiplicityElement
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE void setUpper(qint32 upper);
    Q_INVOKABLE void unsetUpper();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE void setUnique(bool isUnique);
    Q_INVOKABLE void unsetUnique();
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE void setOrdered(bool isOrdered);
    Q_INVOKABLE void unsetOrdered();
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE void setLower(qint32 lower);

    // Association ends from aggregated QUmlMultiplicityElement
    Q_INVOKABLE QUmlValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QUmlValueSpecification *upperValue);
    Q_INVOKABLE QUmlValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QUmlValueSpecification *lowerValue);

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

    // Association ends from aggregated QUmlTypedElement
    Q_INVOKABLE QUmlType *type() const;
    Q_INVOKABLE void setType(QUmlType *type);

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);

    // Association ends from aggregated QUmlConnectableElement
    Q_INVOKABLE QList<QUmlConnectorEnd *> ends() const;
    Q_INVOKABLE QUmlConnectableElementTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter);

    // Attributes from QUmlParameter
    Q_INVOKABLE bool isException() const;
    Q_INVOKABLE void setException(bool isException);
    Q_INVOKABLE void unsetException();
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE void setDefault_(QString default_);
    Q_INVOKABLE QtUml::ParameterDirectionKind direction() const;
    Q_INVOKABLE void setDirection(QtUml::ParameterDirectionKind direction);
    Q_INVOKABLE void unsetDirection();
    Q_INVOKABLE bool isStream() const;
    Q_INVOKABLE void setStream(bool isStream);
    Q_INVOKABLE void unsetStream();
    Q_INVOKABLE QtUml::ParameterEffectKind effect() const;
    Q_INVOKABLE void setEffect(QtUml::ParameterEffectKind effect);

    // Association ends from QUmlParameter
    Q_INVOKABLE QUmlOperation *operation() const;
    Q_INVOKABLE void setOperation(QUmlOperation *operation);
    Q_INVOKABLE QUmlValueSpecification *defaultValue() const;
    Q_INVOKABLE void setDefaultValue(QUmlValueSpecification *defaultValue);
    Q_INVOKABLE QSet<QUmlParameterSet *> parameterSets() const;
    Q_INVOKABLE void addParameterSet(QUmlParameterSet *parameterSet);
    Q_INVOKABLE void removeParameterSet(QUmlParameterSet *parameterSet);

    virtual void setPropertyData();

protected:
    explicit QUmlParameter(QUmlParameterPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlMultiplicityElement *_wrappedUmlMultiplicityElement;
    QUmlConnectableElement *_wrappedUmlConnectableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPARAMETER_H

