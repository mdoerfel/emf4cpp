// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/source/SourceFileImpl.cpp
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

#include "SourceFile.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/InventoryItem.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>
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

/*PROTECTED REGION ID(SourceFileImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::source;

void SourceFile::_initialize()
{
    // Supertypes
    ::kdm::source::InventoryItem::_initialize();

    // References

    /*PROTECTED REGION ID(SourceFileImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SourceFile::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEFILE__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__INVENTORYRELATION:
    {
        _any = getInventoryRelation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__VERSION:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getVersion());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__PATH:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getPath());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__LANGUAGE:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getLanguage());
    }
        return _any;
    case ::kdm::source::SourcePackage::SOURCEFILE__ENCODING:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getEncoding());
    }
        return _any;

    }
    throw "Error";
}

void SourceFile::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEFILE__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__INVENTORYRELATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getInventoryRelation().clear();
        getInventoryRelation().insert_all(*_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__VERSION:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setVersion(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__PATH:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setPath(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__LANGUAGE:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setLanguage(_t0);
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__ENCODING:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setEncoding(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SourceFile::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEFILE__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEFILE__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEFILE__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEFILE__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEFILE__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::source::SourcePackage::SOURCEFILE__INVENTORYRELATION:
        return getInventoryRelation().size() > 0;
    case ::kdm::source::SourcePackage::SOURCEFILE__VERSION:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getVersion());
    case ::kdm::source::SourcePackage::SOURCEFILE__PATH:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getPath());
    case ::kdm::source::SourcePackage::SOURCEFILE__LANGUAGE:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getLanguage());
    case ::kdm::source::SourcePackage::SOURCEFILE__ENCODING:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getEncoding());

    }
    throw "Error";
}

void SourceFile::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SourceFile::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::source::SourcePackage::_instance()->getSourceFile();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SourceFile::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEFILE__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__STEREOTYPE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__INVENTORYRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SourceFile::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::source::SourcePackage::SOURCEFILE__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__ANNOTATION:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__STEREOTYPE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::source::SourcePackage::SOURCEFILE__INVENTORYRELATION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

