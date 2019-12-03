// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/structure/SoftwareSystemImpl.cpp
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

#include "SoftwareSystem.hpp"
#include <kdm/structure/StructurePackage.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SoftwareSystemImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::structure;

void SoftwareSystem::_initialize()
{
    // Supertypes
    ::kdm::structure::AbstractStructureElement::_initialize();

    // References

    /*PROTECTED REGION ID(SoftwareSystemImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SoftwareSystem::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean /*_resolve*/)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ATTRIBUTE:
    {
        _any = getAttribute().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ANNOTATION:
    {
        _any = getAnnotation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STEREOTYPE:
    {
        _any = getStereotype().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__TAGGEDVALUE:
    {
        _any = getTaggedValue().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::toAny(_any, getName());
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__AGGREGATED:
    {
        _any = getAggregated().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__IMPLEMENTATION:
    {
        _any = getImplementation().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTUREELEMENT:
    {
        _any = getStructureElement().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTURERELATIONSHIP:
    {
        _any = getStructureRelationship().asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void SoftwareSystem::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ATTRIBUTE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAttribute().clear();
        getAttribute().insert_all(*_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ANNOTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAnnotation().clear();
        getAnnotation().insert_all(*_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STEREOTYPE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStereotype().clear();
        getStereotype().insert_all(*_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__TAGGEDVALUE:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getTaggedValue().clear();
        getTaggedValue().insert_all(*_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__NAME:
    {
        ::kdm::core::String _t0;
        ::ecorecpp::mapping::any_traits < ::kdm::core::String
                > ::fromAny(_newValue, _t0);
        setName(_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__AGGREGATED:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getAggregated().clear();
        getAggregated().insert_all(*_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__IMPLEMENTATION:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getImplementation().clear();
        getImplementation().insert_all(*_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTUREELEMENT:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStructureElement().clear();
        getStructureElement().insert_all(*_t0);
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTURERELATIONSHIP:
    {
        auto _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EList_ptr< ::ecore::EObject_ptr > > (_newValue);
        getStructureRelationship().clear();
        getStructureRelationship().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SoftwareSystem::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ATTRIBUTE:
        return getAttribute().size() > 0;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ANNOTATION:
        return getAnnotation().size() > 0;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STEREOTYPE:
        return getStereotype().size() > 0;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__TAGGEDVALUE:
        return getTaggedValue().size() > 0;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__NAME:
        return ::ecorecpp::mapping::set_traits < ::kdm::core::String
                > ::is_set(getName());
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__AGGREGATED:
        return getAggregated().size() > 0;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__IMPLEMENTATION:
        return getImplementation().size() > 0;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTUREELEMENT:
        return getStructureElement().size() > 0;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTURERELATIONSHIP:
        return getStructureRelationship().size() > 0;

    }
    throw "Error";
}

void SoftwareSystem::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SoftwareSystem::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            ::kdm::structure::StructurePackage::_instance()->getSoftwareSystem();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SoftwareSystem::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_newValue)
{
    switch (_featureID)
    {
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ANNOTATION:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STEREOTYPE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__AGGREGATED:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__IMPLEMENTATION:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTUREELEMENT:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTURERELATIONSHIP:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SoftwareSystem::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const &_oldValue)
{
    switch (_featureID)
    {
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ATTRIBUTE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__ANNOTATION:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STEREOTYPE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__TAGGEDVALUE:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__AGGREGATED:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__IMPLEMENTATION:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTUREELEMENT:
    {
    }
        return;
    case ::kdm::structure::StructurePackage::SOFTWARESYSTEM__STRUCTURERELATIONSHIP:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

