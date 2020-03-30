// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/statement/StatementPackageImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2018 <emf4cpp@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/StatementFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace ::xpand3::statement;

StatementPackage::StatementPackage()
{

    // Feature definitions of AbstractStatement

    // Feature definitions of ExpandStatement
    m_ExpandStatement__foreach = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ExpandStatement__parameters = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ExpandStatement__separator = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ExpandStatement__target = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ExpandStatement__definition = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ExpressionStatement
    m_ExpressionStatement__expression = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ErrorStatement
    m_ErrorStatement__message = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractStatementWithBody
    m_AbstractStatementWithBody__body = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of FileStatement
    m_FileStatement__once = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_FileStatement__fileNameExpression = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_FileStatement__outletNameIdentifier = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ForEachStatement
    m_ForEachStatement__target = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ForEachStatement__separator = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ForEachStatement__variable = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ForEachStatement__iteratorName = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of IfStatement
    m_IfStatement__condition = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_IfStatement__elseIf = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of LetStatement
    m_LetStatement__varName = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_LetStatement__varValue = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ProtectStatement
    m_ProtectStatement__disable = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ProtectStatement__commentStart = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ProtectStatement__commentEnd = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ProtectStatement__id = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of TextStatement
    m_TextStatement__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_TextStatement__deleteLine = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void StatementPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = StatementFactory::_instance();
    basicsetEFactoryInstance(_fa);
    _fa->basicsetEPackage(_this());

// Create classes and their features
    auto &classifiers = (::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EClassifier_ptr, -1, true, true >&) getEClassifiers();

    { // AbstractStatement
        m_AbstractStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_AbstractStatementEClass->setClassifierID(ABSTRACTSTATEMENT);
        m_AbstractStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_AbstractStatementEClass);
    }

    { // ExpandStatement
        m_ExpandStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ExpandStatementEClass->setClassifierID(EXPANDSTATEMENT);
        m_ExpandStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_ExpandStatementEClass);
        // m_ExpandStatement__foreach has already been allocated above
        m_ExpandStatement__foreach->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__FOREACH);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpandStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ExpandStatement__foreach);
        m_ExpandStatement__foreach->basicsetEContainingClass(
                m_ExpandStatementEClass);
        // m_ExpandStatement__parameters has already been allocated above
        m_ExpandStatement__parameters->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__PARAMETERS);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpandStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ExpandStatement__parameters);
        m_ExpandStatement__parameters->basicsetEContainingClass(
                m_ExpandStatementEClass);
        // m_ExpandStatement__separator has already been allocated above
        m_ExpandStatement__separator->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__SEPARATOR);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpandStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ExpandStatement__separator);
        m_ExpandStatement__separator->basicsetEContainingClass(
                m_ExpandStatementEClass);
        // m_ExpandStatement__target has already been allocated above
        m_ExpandStatement__target->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__TARGET);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpandStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ExpandStatement__target);
        m_ExpandStatement__target->basicsetEContainingClass(
                m_ExpandStatementEClass);
        // m_ExpandStatement__definition has already been allocated above
        m_ExpandStatement__definition->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPANDSTATEMENT__DEFINITION);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpandStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ExpandStatement__definition);
        m_ExpandStatement__definition->basicsetEContainingClass(
                m_ExpandStatementEClass);
    }

    { // ExpressionStatement
        m_ExpressionStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ExpressionStatementEClass->setClassifierID(EXPRESSIONSTATEMENT);
        m_ExpressionStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_ExpressionStatementEClass);
        // m_ExpressionStatement__expression has already been allocated above
        m_ExpressionStatement__expression->setFeatureID(
                ::xpand3::statement::StatementPackage::EXPRESSIONSTATEMENT__EXPRESSION);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ExpressionStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ExpressionStatement__expression);
        m_ExpressionStatement__expression->basicsetEContainingClass(
                m_ExpressionStatementEClass);
    }

    { // ErrorStatement
        m_ErrorStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ErrorStatementEClass->setClassifierID(ERRORSTATEMENT);
        m_ErrorStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_ErrorStatementEClass);
        // m_ErrorStatement__message has already been allocated above
        m_ErrorStatement__message->setFeatureID(
                ::xpand3::statement::StatementPackage::ERRORSTATEMENT__MESSAGE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ErrorStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ErrorStatement__message);
        m_ErrorStatement__message->basicsetEContainingClass(
                m_ErrorStatementEClass);
    }

    { // AbstractStatementWithBody
        m_AbstractStatementWithBodyEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_AbstractStatementWithBodyEClass->setClassifierID(
                ABSTRACTSTATEMENTWITHBODY);
        m_AbstractStatementWithBodyEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_AbstractStatementWithBodyEClass);
        // m_AbstractStatementWithBody__body has already been allocated above
        m_AbstractStatementWithBody__body->setFeatureID(
                ::xpand3::statement::StatementPackage::ABSTRACTSTATEMENTWITHBODY__BODY);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractStatementWithBodyEClass->getEStructuralFeatures()).basicAdd(
                m_AbstractStatementWithBody__body);
        m_AbstractStatementWithBody__body->basicsetEContainingClass(
                m_AbstractStatementWithBodyEClass);
    }

    { // FileStatement
        m_FileStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_FileStatementEClass->setClassifierID(FILESTATEMENT);
        m_FileStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_FileStatementEClass);
        // m_FileStatement__fileNameExpression has already been allocated above
        m_FileStatement__fileNameExpression->setFeatureID(
                ::xpand3::statement::StatementPackage::FILESTATEMENT__FILENAMEEXPRESSION);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FileStatementEClass->getEStructuralFeatures()).basicAdd(
                m_FileStatement__fileNameExpression);
        m_FileStatement__fileNameExpression->basicsetEContainingClass(
                m_FileStatementEClass);
        // m_FileStatement__outletNameIdentifier has already been allocated above
        m_FileStatement__outletNameIdentifier->setFeatureID(
                ::xpand3::statement::StatementPackage::FILESTATEMENT__OUTLETNAMEIDENTIFIER);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FileStatementEClass->getEStructuralFeatures()).basicAdd(
                m_FileStatement__outletNameIdentifier);
        m_FileStatement__outletNameIdentifier->basicsetEContainingClass(
                m_FileStatementEClass);
        // m_FileStatement__once has already been allocated above
        m_FileStatement__once->setFeatureID(
                ::xpand3::statement::StatementPackage::FILESTATEMENT__ONCE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_FileStatementEClass->getEStructuralFeatures()).basicAdd(
                m_FileStatement__once);
        m_FileStatement__once->basicsetEContainingClass(m_FileStatementEClass);
    }

    { // ForEachStatement
        m_ForEachStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ForEachStatementEClass->setClassifierID(FOREACHSTATEMENT);
        m_ForEachStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_ForEachStatementEClass);
        // m_ForEachStatement__target has already been allocated above
        m_ForEachStatement__target->setFeatureID(
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__TARGET);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ForEachStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ForEachStatement__target);
        m_ForEachStatement__target->basicsetEContainingClass(
                m_ForEachStatementEClass);
        // m_ForEachStatement__separator has already been allocated above
        m_ForEachStatement__separator->setFeatureID(
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__SEPARATOR);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ForEachStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ForEachStatement__separator);
        m_ForEachStatement__separator->basicsetEContainingClass(
                m_ForEachStatementEClass);
        // m_ForEachStatement__variable has already been allocated above
        m_ForEachStatement__variable->setFeatureID(
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__VARIABLE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ForEachStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ForEachStatement__variable);
        m_ForEachStatement__variable->basicsetEContainingClass(
                m_ForEachStatementEClass);
        // m_ForEachStatement__iteratorName has already been allocated above
        m_ForEachStatement__iteratorName->setFeatureID(
                ::xpand3::statement::StatementPackage::FOREACHSTATEMENT__ITERATORNAME);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ForEachStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ForEachStatement__iteratorName);
        m_ForEachStatement__iteratorName->basicsetEContainingClass(
                m_ForEachStatementEClass);
    }

    { // IfStatement
        m_IfStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_IfStatementEClass->setClassifierID(IFSTATEMENT);
        m_IfStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_IfStatementEClass);
        // m_IfStatement__condition has already been allocated above
        m_IfStatement__condition->setFeatureID(
                ::xpand3::statement::StatementPackage::IFSTATEMENT__CONDITION);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IfStatementEClass->getEStructuralFeatures()).basicAdd(
                m_IfStatement__condition);
        m_IfStatement__condition->basicsetEContainingClass(m_IfStatementEClass);
        // m_IfStatement__elseIf has already been allocated above
        m_IfStatement__elseIf->setFeatureID(
                ::xpand3::statement::StatementPackage::IFSTATEMENT__ELSEIF);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_IfStatementEClass->getEStructuralFeatures()).basicAdd(
                m_IfStatement__elseIf);
        m_IfStatement__elseIf->basicsetEContainingClass(m_IfStatementEClass);
    }

    { // LetStatement
        m_LetStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_LetStatementEClass->setClassifierID(LETSTATEMENT);
        m_LetStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_LetStatementEClass);
        // m_LetStatement__varName has already been allocated above
        m_LetStatement__varName->setFeatureID(
                ::xpand3::statement::StatementPackage::LETSTATEMENT__VARNAME);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LetStatementEClass->getEStructuralFeatures()).basicAdd(
                m_LetStatement__varName);
        m_LetStatement__varName->basicsetEContainingClass(m_LetStatementEClass);
        // m_LetStatement__varValue has already been allocated above
        m_LetStatement__varValue->setFeatureID(
                ::xpand3::statement::StatementPackage::LETSTATEMENT__VARVALUE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LetStatementEClass->getEStructuralFeatures()).basicAdd(
                m_LetStatement__varValue);
        m_LetStatement__varValue->basicsetEContainingClass(
                m_LetStatementEClass);
    }

    { // ProtectStatement
        m_ProtectStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_ProtectStatementEClass->setClassifierID(PROTECTSTATEMENT);
        m_ProtectStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_ProtectStatementEClass);
        // m_ProtectStatement__commentStart has already been allocated above
        m_ProtectStatement__commentStart->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTSTART);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProtectStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ProtectStatement__commentStart);
        m_ProtectStatement__commentStart->basicsetEContainingClass(
                m_ProtectStatementEClass);
        // m_ProtectStatement__commentEnd has already been allocated above
        m_ProtectStatement__commentEnd->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__COMMENTEND);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProtectStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ProtectStatement__commentEnd);
        m_ProtectStatement__commentEnd->basicsetEContainingClass(
                m_ProtectStatementEClass);
        // m_ProtectStatement__id has already been allocated above
        m_ProtectStatement__id->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__ID);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProtectStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ProtectStatement__id);
        m_ProtectStatement__id->basicsetEContainingClass(
                m_ProtectStatementEClass);
        // m_ProtectStatement__disable has already been allocated above
        m_ProtectStatement__disable->setFeatureID(
                ::xpand3::statement::StatementPackage::PROTECTSTATEMENT__DISABLE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ProtectStatementEClass->getEStructuralFeatures()).basicAdd(
                m_ProtectStatement__disable);
        m_ProtectStatement__disable->basicsetEContainingClass(
                m_ProtectStatementEClass);
    }

    { // TextStatement
        m_TextStatementEClass = ::ecore::Ptr < ::ecore::EClass
                > (new ::ecore::EClass);
        m_TextStatementEClass->setClassifierID(TEXTSTATEMENT);
        m_TextStatementEClass->basicsetEPackage(_this());
        classifiers.basicAdd(m_TextStatementEClass);
        // m_TextStatement__value has already been allocated above
        m_TextStatement__value->setFeatureID(
                ::xpand3::statement::StatementPackage::TEXTSTATEMENT__VALUE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TextStatementEClass->getEStructuralFeatures()).basicAdd(
                m_TextStatement__value);
        m_TextStatement__value->basicsetEContainingClass(m_TextStatementEClass);
        // m_TextStatement__deleteLine has already been allocated above
        m_TextStatement__deleteLine->setFeatureID(
                ::xpand3::statement::StatementPackage::TEXTSTATEMENT__DELETELINE);
        static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
                ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_TextStatementEClass->getEStructuralFeatures()).basicAdd(
                m_TextStatement__deleteLine);
        m_TextStatement__deleteLine->basicsetEContainingClass(
                m_TextStatementEClass);
    }

    // Create enums

    // Create data types

    // Initialize package
    setName("statement");
    setNsPrefix("statement");
    setNsURI("http://www.eclipse.org/m2t/xpand/xpand3/statement");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractStatementEClass->getESuperTypes().push_back(
            dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getSyntaxElement());
    m_ExpandStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementEClass);
    m_ExpressionStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementEClass);
    m_ErrorStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementEClass);
    m_AbstractStatementWithBodyEClass->getESuperTypes().push_back(
            m_AbstractStatementEClass);
    m_FileStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementWithBodyEClass);
    m_ForEachStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementWithBodyEClass);
    m_IfStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementWithBodyEClass);
    m_LetStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementWithBodyEClass);
    m_ProtectStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementWithBodyEClass);
    m_TextStatementEClass->getESuperTypes().push_back(
            m_AbstractStatementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    { // AbstractStatement
        m_AbstractStatementEClass->setName("AbstractStatement");
        m_AbstractStatementEClass->setAbstract(true);
        m_AbstractStatementEClass->setInterface(false);

    }

    { // ExpandStatement
        m_ExpandStatementEClass->setName("ExpandStatement");
        m_ExpandStatementEClass->setAbstract(false);
        m_ExpandStatementEClass->setInterface(false);
        m_ExpandStatement__foreach->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
        m_ExpandStatement__foreach->setName("foreach");
        m_ExpandStatement__foreach->setDefaultValueLiteral("");
        m_ExpandStatement__foreach->setLowerBound(0);
        m_ExpandStatement__foreach->setUpperBound(1);
        m_ExpandStatement__foreach->setTransient(false);
        m_ExpandStatement__foreach->setVolatile(false);
        m_ExpandStatement__foreach->setChangeable(true);
        m_ExpandStatement__foreach->setUnsettable(false);
        m_ExpandStatement__foreach->setID(false);
        m_ExpandStatement__foreach->setUnique(true);
        m_ExpandStatement__foreach->setDerived(false);
        m_ExpandStatement__foreach->setOrdered(true);

        m_ExpandStatement__parameters->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ExpandStatement__parameters->setName("parameters");
        m_ExpandStatement__parameters->setDefaultValueLiteral("");
        m_ExpandStatement__parameters->setLowerBound(0);
        m_ExpandStatement__parameters->setUpperBound(-1);
        m_ExpandStatement__parameters->setTransient(false);
        m_ExpandStatement__parameters->setVolatile(false);
        m_ExpandStatement__parameters->setChangeable(true);
        m_ExpandStatement__parameters->setContainment(true);
        m_ExpandStatement__parameters->setResolveProxies(true);
        m_ExpandStatement__parameters->setUnique(true);
        m_ExpandStatement__parameters->setDerived(false);
        m_ExpandStatement__parameters->setOrdered(true);
        m_ExpandStatement__separator->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ExpandStatement__separator->setName("separator");
        m_ExpandStatement__separator->setDefaultValueLiteral("");
        m_ExpandStatement__separator->setLowerBound(0);
        m_ExpandStatement__separator->setUpperBound(1);
        m_ExpandStatement__separator->setTransient(false);
        m_ExpandStatement__separator->setVolatile(false);
        m_ExpandStatement__separator->setChangeable(true);
        m_ExpandStatement__separator->setContainment(true);
        m_ExpandStatement__separator->setResolveProxies(true);
        m_ExpandStatement__separator->setUnique(true);
        m_ExpandStatement__separator->setDerived(false);
        m_ExpandStatement__separator->setOrdered(true);
        m_ExpandStatement__target->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ExpandStatement__target->setName("target");
        m_ExpandStatement__target->setDefaultValueLiteral("");
        m_ExpandStatement__target->setLowerBound(0);
        m_ExpandStatement__target->setUpperBound(1);
        m_ExpandStatement__target->setTransient(false);
        m_ExpandStatement__target->setVolatile(false);
        m_ExpandStatement__target->setChangeable(true);
        m_ExpandStatement__target->setContainment(true);
        m_ExpandStatement__target->setResolveProxies(true);
        m_ExpandStatement__target->setUnique(true);
        m_ExpandStatement__target->setDerived(false);
        m_ExpandStatement__target->setOrdered(true);
        m_ExpandStatement__definition->setEType(
                dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
        m_ExpandStatement__definition->setName("definition");
        m_ExpandStatement__definition->setDefaultValueLiteral("");
        m_ExpandStatement__definition->setLowerBound(1);
        m_ExpandStatement__definition->setUpperBound(1);
        m_ExpandStatement__definition->setTransient(false);
        m_ExpandStatement__definition->setVolatile(false);
        m_ExpandStatement__definition->setChangeable(true);
        m_ExpandStatement__definition->setContainment(true);
        m_ExpandStatement__definition->setResolveProxies(true);
        m_ExpandStatement__definition->setUnique(true);
        m_ExpandStatement__definition->setDerived(false);
        m_ExpandStatement__definition->setOrdered(true);

    }

    { // ExpressionStatement
        m_ExpressionStatementEClass->setName("ExpressionStatement");
        m_ExpressionStatementEClass->setAbstract(false);
        m_ExpressionStatementEClass->setInterface(false);

        m_ExpressionStatement__expression->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ExpressionStatement__expression->setName("expression");
        m_ExpressionStatement__expression->setDefaultValueLiteral("");
        m_ExpressionStatement__expression->setLowerBound(1);
        m_ExpressionStatement__expression->setUpperBound(1);
        m_ExpressionStatement__expression->setTransient(false);
        m_ExpressionStatement__expression->setVolatile(false);
        m_ExpressionStatement__expression->setChangeable(true);
        m_ExpressionStatement__expression->setContainment(true);
        m_ExpressionStatement__expression->setResolveProxies(true);
        m_ExpressionStatement__expression->setUnique(true);
        m_ExpressionStatement__expression->setDerived(false);
        m_ExpressionStatement__expression->setOrdered(true);

    }

    { // ErrorStatement
        m_ErrorStatementEClass->setName("ErrorStatement");
        m_ErrorStatementEClass->setAbstract(false);
        m_ErrorStatementEClass->setInterface(false);

        m_ErrorStatement__message->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ErrorStatement__message->setName("message");
        m_ErrorStatement__message->setDefaultValueLiteral("");
        m_ErrorStatement__message->setLowerBound(1);
        m_ErrorStatement__message->setUpperBound(1);
        m_ErrorStatement__message->setTransient(false);
        m_ErrorStatement__message->setVolatile(false);
        m_ErrorStatement__message->setChangeable(true);
        m_ErrorStatement__message->setContainment(true);
        m_ErrorStatement__message->setResolveProxies(true);
        m_ErrorStatement__message->setUnique(true);
        m_ErrorStatement__message->setDerived(false);
        m_ErrorStatement__message->setOrdered(true);

    }

    { // AbstractStatementWithBody
        m_AbstractStatementWithBodyEClass->setName("AbstractStatementWithBody");
        m_AbstractStatementWithBodyEClass->setAbstract(true);
        m_AbstractStatementWithBodyEClass->setInterface(false);

        m_AbstractStatementWithBody__body->setEType(m_AbstractStatementEClass);
        m_AbstractStatementWithBody__body->setName("body");
        m_AbstractStatementWithBody__body->setDefaultValueLiteral("");
        m_AbstractStatementWithBody__body->setLowerBound(1);
        m_AbstractStatementWithBody__body->setUpperBound(-1);
        m_AbstractStatementWithBody__body->setTransient(false);
        m_AbstractStatementWithBody__body->setVolatile(false);
        m_AbstractStatementWithBody__body->setChangeable(true);
        m_AbstractStatementWithBody__body->setContainment(true);
        m_AbstractStatementWithBody__body->setResolveProxies(true);
        m_AbstractStatementWithBody__body->setUnique(true);
        m_AbstractStatementWithBody__body->setDerived(false);
        m_AbstractStatementWithBody__body->setOrdered(true);

    }

    { // FileStatement
        m_FileStatementEClass->setName("FileStatement");
        m_FileStatementEClass->setAbstract(false);
        m_FileStatementEClass->setInterface(false);
        m_FileStatement__once->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
        m_FileStatement__once->setName("once");
        m_FileStatement__once->setDefaultValueLiteral("");
        m_FileStatement__once->setLowerBound(0);
        m_FileStatement__once->setUpperBound(1);
        m_FileStatement__once->setTransient(false);
        m_FileStatement__once->setVolatile(false);
        m_FileStatement__once->setChangeable(true);
        m_FileStatement__once->setUnsettable(false);
        m_FileStatement__once->setID(false);
        m_FileStatement__once->setUnique(true);
        m_FileStatement__once->setDerived(false);
        m_FileStatement__once->setOrdered(true);

        m_FileStatement__fileNameExpression->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_FileStatement__fileNameExpression->setName("fileNameExpression");
        m_FileStatement__fileNameExpression->setDefaultValueLiteral("");
        m_FileStatement__fileNameExpression->setLowerBound(0);
        m_FileStatement__fileNameExpression->setUpperBound(1);
        m_FileStatement__fileNameExpression->setTransient(false);
        m_FileStatement__fileNameExpression->setVolatile(false);
        m_FileStatement__fileNameExpression->setChangeable(true);
        m_FileStatement__fileNameExpression->setContainment(true);
        m_FileStatement__fileNameExpression->setResolveProxies(true);
        m_FileStatement__fileNameExpression->setUnique(true);
        m_FileStatement__fileNameExpression->setDerived(false);
        m_FileStatement__fileNameExpression->setOrdered(true);
        m_FileStatement__outletNameIdentifier->setEType(
                dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
        m_FileStatement__outletNameIdentifier->setName("outletNameIdentifier");
        m_FileStatement__outletNameIdentifier->setDefaultValueLiteral("");
        m_FileStatement__outletNameIdentifier->setLowerBound(0);
        m_FileStatement__outletNameIdentifier->setUpperBound(1);
        m_FileStatement__outletNameIdentifier->setTransient(false);
        m_FileStatement__outletNameIdentifier->setVolatile(false);
        m_FileStatement__outletNameIdentifier->setChangeable(true);
        m_FileStatement__outletNameIdentifier->setContainment(true);
        m_FileStatement__outletNameIdentifier->setResolveProxies(true);
        m_FileStatement__outletNameIdentifier->setUnique(true);
        m_FileStatement__outletNameIdentifier->setDerived(false);
        m_FileStatement__outletNameIdentifier->setOrdered(true);

    }

    { // ForEachStatement
        m_ForEachStatementEClass->setName("ForEachStatement");
        m_ForEachStatementEClass->setAbstract(false);
        m_ForEachStatementEClass->setInterface(false);

        m_ForEachStatement__target->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ForEachStatement__target->setName("target");
        m_ForEachStatement__target->setDefaultValueLiteral("");
        m_ForEachStatement__target->setLowerBound(0);
        m_ForEachStatement__target->setUpperBound(1);
        m_ForEachStatement__target->setTransient(false);
        m_ForEachStatement__target->setVolatile(false);
        m_ForEachStatement__target->setChangeable(true);
        m_ForEachStatement__target->setContainment(true);
        m_ForEachStatement__target->setResolveProxies(true);
        m_ForEachStatement__target->setUnique(true);
        m_ForEachStatement__target->setDerived(false);
        m_ForEachStatement__target->setOrdered(true);
        m_ForEachStatement__separator->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ForEachStatement__separator->setName("separator");
        m_ForEachStatement__separator->setDefaultValueLiteral("");
        m_ForEachStatement__separator->setLowerBound(0);
        m_ForEachStatement__separator->setUpperBound(1);
        m_ForEachStatement__separator->setTransient(false);
        m_ForEachStatement__separator->setVolatile(false);
        m_ForEachStatement__separator->setChangeable(true);
        m_ForEachStatement__separator->setContainment(true);
        m_ForEachStatement__separator->setResolveProxies(true);
        m_ForEachStatement__separator->setUnique(true);
        m_ForEachStatement__separator->setDerived(false);
        m_ForEachStatement__separator->setOrdered(true);
        m_ForEachStatement__variable->setEType(
                dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
        m_ForEachStatement__variable->setName("variable");
        m_ForEachStatement__variable->setDefaultValueLiteral("");
        m_ForEachStatement__variable->setLowerBound(0);
        m_ForEachStatement__variable->setUpperBound(1);
        m_ForEachStatement__variable->setTransient(false);
        m_ForEachStatement__variable->setVolatile(false);
        m_ForEachStatement__variable->setChangeable(true);
        m_ForEachStatement__variable->setContainment(true);
        m_ForEachStatement__variable->setResolveProxies(true);
        m_ForEachStatement__variable->setUnique(true);
        m_ForEachStatement__variable->setDerived(false);
        m_ForEachStatement__variable->setOrdered(true);
        m_ForEachStatement__iteratorName->setEType(
                dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
        m_ForEachStatement__iteratorName->setName("iteratorName");
        m_ForEachStatement__iteratorName->setDefaultValueLiteral("");
        m_ForEachStatement__iteratorName->setLowerBound(0);
        m_ForEachStatement__iteratorName->setUpperBound(1);
        m_ForEachStatement__iteratorName->setTransient(false);
        m_ForEachStatement__iteratorName->setVolatile(false);
        m_ForEachStatement__iteratorName->setChangeable(true);
        m_ForEachStatement__iteratorName->setContainment(true);
        m_ForEachStatement__iteratorName->setResolveProxies(true);
        m_ForEachStatement__iteratorName->setUnique(true);
        m_ForEachStatement__iteratorName->setDerived(false);
        m_ForEachStatement__iteratorName->setOrdered(true);

    }

    { // IfStatement
        m_IfStatementEClass->setName("IfStatement");
        m_IfStatementEClass->setAbstract(false);
        m_IfStatementEClass->setInterface(false);

        m_IfStatement__condition->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_IfStatement__condition->setName("condition");
        m_IfStatement__condition->setDefaultValueLiteral("");
        m_IfStatement__condition->setLowerBound(0);
        m_IfStatement__condition->setUpperBound(1);
        m_IfStatement__condition->setTransient(false);
        m_IfStatement__condition->setVolatile(false);
        m_IfStatement__condition->setChangeable(true);
        m_IfStatement__condition->setContainment(true);
        m_IfStatement__condition->setResolveProxies(true);
        m_IfStatement__condition->setUnique(true);
        m_IfStatement__condition->setDerived(false);
        m_IfStatement__condition->setOrdered(true);
        m_IfStatement__elseIf->setEType(m_IfStatementEClass);
        m_IfStatement__elseIf->setName("elseIf");
        m_IfStatement__elseIf->setDefaultValueLiteral("");
        m_IfStatement__elseIf->setLowerBound(0);
        m_IfStatement__elseIf->setUpperBound(1);
        m_IfStatement__elseIf->setTransient(false);
        m_IfStatement__elseIf->setVolatile(false);
        m_IfStatement__elseIf->setChangeable(true);
        m_IfStatement__elseIf->setContainment(true);
        m_IfStatement__elseIf->setResolveProxies(true);
        m_IfStatement__elseIf->setUnique(true);
        m_IfStatement__elseIf->setDerived(false);
        m_IfStatement__elseIf->setOrdered(true);

    }

    { // LetStatement
        m_LetStatementEClass->setName("LetStatement");
        m_LetStatementEClass->setAbstract(false);
        m_LetStatementEClass->setInterface(false);

        m_LetStatement__varName->setEType(
                dynamic_cast< ::xpand3::Xpand3Package* >(::xpand3::Xpand3Package::_instance().get())->getIdentifier());
        m_LetStatement__varName->setName("varName");
        m_LetStatement__varName->setDefaultValueLiteral("");
        m_LetStatement__varName->setLowerBound(0);
        m_LetStatement__varName->setUpperBound(1);
        m_LetStatement__varName->setTransient(false);
        m_LetStatement__varName->setVolatile(false);
        m_LetStatement__varName->setChangeable(true);
        m_LetStatement__varName->setContainment(true);
        m_LetStatement__varName->setResolveProxies(true);
        m_LetStatement__varName->setUnique(true);
        m_LetStatement__varName->setDerived(false);
        m_LetStatement__varName->setOrdered(true);
        m_LetStatement__varValue->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_LetStatement__varValue->setName("varValue");
        m_LetStatement__varValue->setDefaultValueLiteral("");
        m_LetStatement__varValue->setLowerBound(0);
        m_LetStatement__varValue->setUpperBound(1);
        m_LetStatement__varValue->setTransient(false);
        m_LetStatement__varValue->setVolatile(false);
        m_LetStatement__varValue->setChangeable(true);
        m_LetStatement__varValue->setContainment(true);
        m_LetStatement__varValue->setResolveProxies(true);
        m_LetStatement__varValue->setUnique(true);
        m_LetStatement__varValue->setDerived(false);
        m_LetStatement__varValue->setOrdered(true);

    }

    { // ProtectStatement
        m_ProtectStatementEClass->setName("ProtectStatement");
        m_ProtectStatementEClass->setAbstract(false);
        m_ProtectStatementEClass->setInterface(false);
        m_ProtectStatement__disable->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
        m_ProtectStatement__disable->setName("disable");
        m_ProtectStatement__disable->setDefaultValueLiteral("");
        m_ProtectStatement__disable->setLowerBound(0);
        m_ProtectStatement__disable->setUpperBound(1);
        m_ProtectStatement__disable->setTransient(false);
        m_ProtectStatement__disable->setVolatile(false);
        m_ProtectStatement__disable->setChangeable(true);
        m_ProtectStatement__disable->setUnsettable(false);
        m_ProtectStatement__disable->setID(false);
        m_ProtectStatement__disable->setUnique(true);
        m_ProtectStatement__disable->setDerived(false);
        m_ProtectStatement__disable->setOrdered(true);

        m_ProtectStatement__commentStart->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ProtectStatement__commentStart->setName("commentStart");
        m_ProtectStatement__commentStart->setDefaultValueLiteral("");
        m_ProtectStatement__commentStart->setLowerBound(0);
        m_ProtectStatement__commentStart->setUpperBound(1);
        m_ProtectStatement__commentStart->setTransient(false);
        m_ProtectStatement__commentStart->setVolatile(false);
        m_ProtectStatement__commentStart->setChangeable(true);
        m_ProtectStatement__commentStart->setContainment(true);
        m_ProtectStatement__commentStart->setResolveProxies(true);
        m_ProtectStatement__commentStart->setUnique(true);
        m_ProtectStatement__commentStart->setDerived(false);
        m_ProtectStatement__commentStart->setOrdered(true);
        m_ProtectStatement__commentEnd->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ProtectStatement__commentEnd->setName("commentEnd");
        m_ProtectStatement__commentEnd->setDefaultValueLiteral("");
        m_ProtectStatement__commentEnd->setLowerBound(0);
        m_ProtectStatement__commentEnd->setUpperBound(1);
        m_ProtectStatement__commentEnd->setTransient(false);
        m_ProtectStatement__commentEnd->setVolatile(false);
        m_ProtectStatement__commentEnd->setChangeable(true);
        m_ProtectStatement__commentEnd->setContainment(true);
        m_ProtectStatement__commentEnd->setResolveProxies(true);
        m_ProtectStatement__commentEnd->setUnique(true);
        m_ProtectStatement__commentEnd->setDerived(false);
        m_ProtectStatement__commentEnd->setOrdered(true);
        m_ProtectStatement__id->setEType(
                dynamic_cast< ::xpand3::expression::ExpressionPackage* >(::xpand3::expression::ExpressionPackage::_instance().get())->getAbstractExpression());
        m_ProtectStatement__id->setName("id");
        m_ProtectStatement__id->setDefaultValueLiteral("");
        m_ProtectStatement__id->setLowerBound(0);
        m_ProtectStatement__id->setUpperBound(1);
        m_ProtectStatement__id->setTransient(false);
        m_ProtectStatement__id->setVolatile(false);
        m_ProtectStatement__id->setChangeable(true);
        m_ProtectStatement__id->setContainment(true);
        m_ProtectStatement__id->setResolveProxies(true);
        m_ProtectStatement__id->setUnique(true);
        m_ProtectStatement__id->setDerived(false);
        m_ProtectStatement__id->setOrdered(true);

    }

    { // TextStatement
        m_TextStatementEClass->setName("TextStatement");
        m_TextStatementEClass->setAbstract(false);
        m_TextStatementEClass->setInterface(false);
        m_TextStatement__value->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
        m_TextStatement__value->setName("value");
        m_TextStatement__value->setDefaultValueLiteral("");
        m_TextStatement__value->setLowerBound(0);
        m_TextStatement__value->setUpperBound(1);
        m_TextStatement__value->setTransient(false);
        m_TextStatement__value->setVolatile(false);
        m_TextStatement__value->setChangeable(true);
        m_TextStatement__value->setUnsettable(false);
        m_TextStatement__value->setID(false);
        m_TextStatement__value->setUnique(true);
        m_TextStatement__value->setDerived(false);
        m_TextStatement__value->setOrdered(true);
        m_TextStatement__deleteLine->setEType(
                dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
        m_TextStatement__deleteLine->setName("deleteLine");
        m_TextStatement__deleteLine->setDefaultValueLiteral("");
        m_TextStatement__deleteLine->setLowerBound(0);
        m_TextStatement__deleteLine->setUpperBound(1);
        m_TextStatement__deleteLine->setTransient(false);
        m_TextStatement__deleteLine->setVolatile(false);
        m_TextStatement__deleteLine->setChangeable(true);
        m_TextStatement__deleteLine->setUnsettable(false);
        m_TextStatement__deleteLine->setID(false);
        m_TextStatement__deleteLine->setUnique(true);
        m_TextStatement__deleteLine->setDerived(false);
        m_TextStatement__deleteLine->setOrdered(true);

    }

    // TODO: Initialize data types

    /* EAnnotations for EPackage, the EClasses and their EStructuralFeatures */
    ::ecore::EAnnotation_ptr _annotation;

    _initialize();
}

::ecore::EClass_ptr StatementPackage::getAbstractStatement()
{
    return m_AbstractStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getExpandStatement()
{
    return m_ExpandStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getExpressionStatement()
{
    return m_ExpressionStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getErrorStatement()
{
    return m_ErrorStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getAbstractStatementWithBody()
{
    return m_AbstractStatementWithBodyEClass;
}
::ecore::EClass_ptr StatementPackage::getFileStatement()
{
    return m_FileStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getForEachStatement()
{
    return m_ForEachStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getIfStatement()
{
    return m_IfStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getLetStatement()
{
    return m_LetStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getProtectStatement()
{
    return m_ProtectStatementEClass;
}
::ecore::EClass_ptr StatementPackage::getTextStatement()
{
    return m_TextStatementEClass;
}

::ecore::EAttribute_ptr StatementPackage::getExpandStatement__foreach()
{
    return m_ExpandStatement__foreach;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__parameters()
{
    return m_ExpandStatement__parameters;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__separator()
{
    return m_ExpandStatement__separator;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__target()
{
    return m_ExpandStatement__target;
}
::ecore::EReference_ptr StatementPackage::getExpandStatement__definition()
{
    return m_ExpandStatement__definition;
}
::ecore::EReference_ptr StatementPackage::getExpressionStatement__expression()
{
    return m_ExpressionStatement__expression;
}
::ecore::EReference_ptr StatementPackage::getErrorStatement__message()
{
    return m_ErrorStatement__message;
}
::ecore::EReference_ptr StatementPackage::getAbstractStatementWithBody__body()
{
    return m_AbstractStatementWithBody__body;
}
::ecore::EReference_ptr StatementPackage::getFileStatement__fileNameExpression()
{
    return m_FileStatement__fileNameExpression;
}
::ecore::EReference_ptr StatementPackage::getFileStatement__outletNameIdentifier()
{
    return m_FileStatement__outletNameIdentifier;
}
::ecore::EAttribute_ptr StatementPackage::getFileStatement__once()
{
    return m_FileStatement__once;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__target()
{
    return m_ForEachStatement__target;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__separator()
{
    return m_ForEachStatement__separator;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__variable()
{
    return m_ForEachStatement__variable;
}
::ecore::EReference_ptr StatementPackage::getForEachStatement__iteratorName()
{
    return m_ForEachStatement__iteratorName;
}
::ecore::EReference_ptr StatementPackage::getIfStatement__condition()
{
    return m_IfStatement__condition;
}
::ecore::EReference_ptr StatementPackage::getIfStatement__elseIf()
{
    return m_IfStatement__elseIf;
}
::ecore::EReference_ptr StatementPackage::getLetStatement__varName()
{
    return m_LetStatement__varName;
}
::ecore::EReference_ptr StatementPackage::getLetStatement__varValue()
{
    return m_LetStatement__varValue;
}
::ecore::EReference_ptr StatementPackage::getProtectStatement__commentStart()
{
    return m_ProtectStatement__commentStart;
}
::ecore::EReference_ptr StatementPackage::getProtectStatement__commentEnd()
{
    return m_ProtectStatement__commentEnd;
}
::ecore::EReference_ptr StatementPackage::getProtectStatement__id()
{
    return m_ProtectStatement__id;
}
::ecore::EAttribute_ptr StatementPackage::getProtectStatement__disable()
{
    return m_ProtectStatement__disable;
}
::ecore::EAttribute_ptr StatementPackage::getTextStatement__value()
{
    return m_TextStatement__value;
}
::ecore::EAttribute_ptr StatementPackage::getTextStatement__deleteLine()
{
    return m_TextStatement__deleteLine;
}

