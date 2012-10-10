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
** rights. These rights are described in the Nokia Qt LGPL Exception
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

#include "qusecase.h"
#include "qusecase_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"
#include "qnamespace_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QInclude>
#include <QtUml/QExtend>
#include <QtUml/QExtensionPoint>

QT_BEGIN_NAMESPACE_QTUML

QUseCasePrivate::QUseCasePrivate() :
    extensionPoints(new QSet<QExtensionPoint *>),
    includes(new QSet<QInclude *>),
    subjects(new QSet<QClassifier *>),
    extends(new QSet<QExtend *>)
{
}

QUseCasePrivate::~QUseCasePrivate()
{
    delete extensionPoints;
    delete includes;
    delete subjects;
    delete extends;
}
  
void QUseCasePrivate::addExtensionPoint(const QExtensionPoint *extensionPoint) 
{   
    this->extensionPoints->insert(const_cast<QExtensionPoint *>(extensionPoint)); 

    // Adjust subsetted property(ies)
    addOwnedMember(extensionPoint); 
}
 
void QUseCasePrivate::removeExtensionPoint(const QExtensionPoint *extensionPoint) 
{    
    this->extensionPoints->remove(const_cast<QExtensionPoint *>(extensionPoint)); 

    // Adjust subsetted property(ies)
    removeOwnedMember(extensionPoint);
}
  
void QUseCasePrivate::addInclude(const QInclude *include) 
{   
    this->includes->insert(const_cast<QInclude *>(include)); 

    // Adjust subsetted property(ies)
    addOwnedMember(include); 
}
 
void QUseCasePrivate::removeInclude(const QInclude *include) 
{    
    this->includes->remove(const_cast<QInclude *>(include)); 

    // Adjust subsetted property(ies)
    removeOwnedMember(include);
}
  
void QUseCasePrivate::addSubject(const QClassifier *subject) 
{   
    this->subjects->insert(const_cast<QClassifier *>(subject));  
}
 
void QUseCasePrivate::removeSubject(const QClassifier *subject) 
{    
    this->subjects->remove(const_cast<QClassifier *>(subject)); 
}
  
void QUseCasePrivate::addExtend(const QExtend *extend) 
{   
    this->extends->insert(const_cast<QExtend *>(extend)); 

    // Adjust subsetted property(ies)
    addOwnedMember(extend); 
}
 
void QUseCasePrivate::removeExtend(const QExtend *extend) 
{    
    this->extends->remove(const_cast<QExtend *>(extend)); 

    // Adjust subsetted property(ies)
    removeOwnedMember(extend);
}

/*!
    \class QUseCase

    \inmodule QtUml

    \brief A use case is the specification of a set of actions performed by a system, which yields an observable result that is, typically, of value for one or more actors or other stakeholders of the system.
 */

QUseCase::QUseCase(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QUseCasePrivate;
}

QUseCase::QUseCase(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QUseCasePrivate;
}

QUseCase::~QUseCase()
{
}

/*!
    References the ExtensionPoints owned by the use case.
 */
const QSet<QExtensionPoint *> *QUseCase::extensionPoints() const
{
    Q_D(const QUseCase);
    return d->extensionPoints;
}

void QUseCase::addExtensionPoint(const QExtensionPoint *extensionPoint)
{
    Q_D(QUseCase);
    d->addExtensionPoint(const_cast<QExtensionPoint *>(extensionPoint));
}

void QUseCase::removeExtensionPoint(const QExtensionPoint *extensionPoint)
{
    Q_D(QUseCase);
    d->removeExtensionPoint(const_cast<QExtensionPoint *>(extensionPoint));
}

/*!
    References the Include relationships owned by this use case.
 */
const QSet<QInclude *> *QUseCase::includes() const
{
    Q_D(const QUseCase);
    return d->includes;
}

void QUseCase::addInclude(const QInclude *include)
{
    Q_D(QUseCase);
    d->addInclude(const_cast<QInclude *>(include));
}

void QUseCase::removeInclude(const QInclude *include)
{
    Q_D(QUseCase);
    d->removeInclude(const_cast<QInclude *>(include));
}

/*!
    References the subjects to which this use case applies. The subject or its parts realize all the use cases that apply to this subject. Use cases need not be attached to any specific subject, however. The subject may, but need not, own the use cases that apply to it.
 */
const QSet<QClassifier *> *QUseCase::subjects() const
{
    Q_D(const QUseCase);
    return d->subjects;
}

void QUseCase::addSubject(const QClassifier *subject)
{
    Q_D(QUseCase);
    d->addSubject(const_cast<QClassifier *>(subject));
}

void QUseCase::removeSubject(const QClassifier *subject)
{
    Q_D(QUseCase);
    d->removeSubject(const_cast<QClassifier *>(subject));
}

/*!
    References the Extend relationships owned by this use case.
 */
const QSet<QExtend *> *QUseCase::extends() const
{
    Q_D(const QUseCase);
    return d->extends;
}

void QUseCase::addExtend(const QExtend *extend)
{
    Q_D(QUseCase);
    d->addExtend(const_cast<QExtend *>(extend));
}

void QUseCase::removeExtend(const QExtend *extend)
{
    Q_D(QUseCase);
    d->removeExtend(const_cast<QExtend *>(extend));
}

/*!
    The query allIncludedUseCases() returns the transitive closure of all use cases (directly or indirectly) included by this use case.
 */
const QSet<QUseCase *> *QUseCase::allIncludedUseCases() const
{
    qWarning("QUseCase::allIncludedUseCases: operation to be implemented");
}

#include "moc_qusecase.cpp"

QT_END_NAMESPACE_QTUML

