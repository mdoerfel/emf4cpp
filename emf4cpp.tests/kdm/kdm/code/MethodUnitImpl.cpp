// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/MethodUnitImpl.cpp
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

#include "MethodUnit.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/ControlElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/code/CommentUnit.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/action/EntryFlow.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MethodUnitImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::code;

void MethodUnit::_initialize()
{
    // Supertypes
    ::kdm::code::ControlElement::_initialize();

    // References

    /*PROTECTED REGION ID(MethodUnitImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MethodUnit::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::METHODUNIT__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__SOURCE:
    {
        _any = getSource().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__COMMENT:
    {
        _any = getComment().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__CODERELATION:
    {
        _any = getCodeRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__TYPE:
    {
        _any = ::ecore::as < ::ecore::EObject > (getType());
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__ENTRYFLOW:
    {
        _any = getEntryFlow().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__CODEELEMENT:
    {
        _any = getCodeElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__KIND:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::code::MethodKind
                > ::toAny(_any, getKind());
    }
        return _any;
    case ::kdm::code::CodePackage::METHODUNIT__EXPORT:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::code::ExportKind
                > ::toAny(_any, getExport());
    }
        return _any;

    }
    throw "Error: eGet() does not handle this featureID";
}

void MethodUnit::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::METHODUNIT__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__SOURCE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getSource().clear();
        getSource().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__COMMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getComment().clear();
        getComment().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__CODERELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getCodeRelation().clear();
        getCodeRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__TYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast < ::ecore::EObject_ptr
                > (_newValue);
        auto _t1 = ::ecore::as < ::kdm::code::Datatype > (_t0);
        setType(_t1);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__ENTRYFLOW:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getEntryFlow().clear();
        getEntryFlow().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__CODEELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getCodeElement().clear();
        getCodeElement().insert_all(*_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__KIND:
    {
        ::kdm::code::MethodKind _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::code::MethodKind
                > ::fromAny(_newValue, _t0);
        setKind(_t0);
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__EXPORT:
    {
        ::kdm::code::ExportKind _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::code::ExportKind
                > ::fromAny(_newValue, _t0);
        setExport(_t0);
    }
        return;

    }
    throw "Error: eSet() does not handle this featureID";
}

::ecore::EBoolean MethodUnit::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::METHODUNIT__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::code::CodePackage::METHODUNIT__SOURCE:
        return getSource().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__COMMENT:
        return getComment().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__CODERELATION:
        return getCodeRelation().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__TYPE:
        return getType().get() != nullptr;
    case ::kdm::code::CodePackage::METHODUNIT__ENTRYFLOW:
        return getEntryFlow().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__CODEELEMENT:
        return getCodeElement().size() > 0;
    case ::kdm::code::CodePackage::METHODUNIT__KIND:
        return ::ecorecpp::mapping::set_traits < ::kdm::code::MethodKind
                > ::is_set(getKind());
    case ::kdm::code::CodePackage::METHODUNIT__EXPORT:
        return ::ecorecpp::mapping::set_traits < ::kdm::code::ExportKind
                > ::is_set(getExport());

    }
    throw "Error: eIsSet() does not handle this featureID";
}

void MethodUnit::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error: eUnset() does not handle this featureID";
}

::ecore::EClass_ptr MethodUnit::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::code::CodePackage::_instance()->getMethodUnit();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MethodUnit::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::METHODUNIT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__ANNOTATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__SOURCE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__COMMENT:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__CODERELATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__TYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__ENTRYFLOW:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__CODEELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MethodUnit::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::code::CodePackage::METHODUNIT__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__ANNOTATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__STEREOTYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__SOURCE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__COMMENT:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__CODERELATION:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__TYPE:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__ENTRYFLOW:
    {
    }
        return;
    case ::kdm::code::CodePackage::METHODUNIT__CODEELEMENT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

