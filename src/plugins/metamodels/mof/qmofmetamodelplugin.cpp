/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofmetamodelplugin.h"

#include <QtMof/QtMof>

QMofMetaModelPlugin::QMofMetaModelPlugin(QObject *parent)
    : QMetaModelPlugin(parent)
{
}

QModelingElement *QMofMetaModelPlugin::createModelingElement(QString type)
{
    if (type == "QMofArgument") return new QMofArgument;
    else if (type == "QMofAssociation") return new QMofAssociation;
    else if (type == "QMofClass") return new QMofClass;
    else if (type == "QMofComment") return new QMofComment;
    else if (type == "QMofConstraint") return new QMofConstraint;
    else if (type == "QMofDataType") return new QMofDataType;
    else if (type == "QMofElementImport") return new QMofElementImport;
    else if (type == "QMofEnumerationLiteral") return new QMofEnumerationLiteral;
    else if (type == "QMofEnumeration") return new QMofEnumeration;
    else if (type == "QMofException") return new QMofException;
    else if (type == "QMofExpression") return new QMofExpression;
    else if (type == "QMofExtent") return new QMofExtent;
    else if (type == "QMofFactory") return new QMofFactory;
    else if (type == "QMofGeneralization") return new QMofGeneralization;
    else if (type == "QMofInstanceSpecification") return new QMofInstanceSpecification;
    else if (type == "QMofInstanceValue") return new QMofInstanceValue;
    else if (type == "QMofLink") return new QMofLink;
    else if (type == "QMofLiteralBoolean") return new QMofLiteralBoolean;
    else if (type == "QMofLiteralInteger") return new QMofLiteralInteger;
    else if (type == "QMofLiteralNull") return new QMofLiteralNull;
    else if (type == "QMofLiteralReal") return new QMofLiteralReal;
    else if (type == "QMofLiteralString") return new QMofLiteralString;
    else if (type == "QMofLiteralUnlimitedNatural") return new QMofLiteralUnlimitedNatural;
    else if (type == "QMofObject") return new QMofObject;
    else if (type == "QMofOpaqueExpression") return new QMofOpaqueExpression;
    else if (type == "QMofOperation") return new QMofOperation;
    else if (type == "QMofPackageImport") return new QMofPackageImport;
    else if (type == "QMofPackageMerge") return new QMofPackageMerge;
    else if (type == "QMofPackage") return new QMofPackage;
    else if (type == "QMofParameter") return new QMofParameter;
    else if (type == "QMofPrimitiveType") return new QMofPrimitiveType;
    else if (type == "QMofProperty") return new QMofProperty;
    else if (type == "QMofReflectiveCollection") return new QMofReflectiveCollection;
    else if (type == "QMofReflectiveSequence") return new QMofReflectiveSequence;
    else if (type == "QMofSlot") return new QMofSlot;
    else if (type == "QMofTag") return new QMofTag;
    else if (type == "QMofURIExtent") return new QMofURIExtent;
    Q_ASSERT_X(true,
               "QMofMetaModelPlugin::createModelingElement",
               QStringLiteral("QMofMetaModelPlugin does not know how to create instances of '%1' type !").arg(type).toLatin1());
    return 0;
}

