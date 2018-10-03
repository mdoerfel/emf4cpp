// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/AnyTypeImpl.cpp
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

#include "AnyType.hpp"
#include <type/TypePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AnyTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::type;

void AnyType::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(AnyTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AnyType::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::type::TypePackage::ANYTYPE__MIXED:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(m_mixed.size());
        for (size_t _i = 0; _i < m_mixed.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], m_mixed[_i]);
        _any = _anys;
    }
        return _any;
    case ::type::TypePackage::ANYTYPE__ANYATTRIBUTE:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(m_anyAttribute.size());
        for (size_t _i = 0; _i < m_anyAttribute.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], m_anyAttribute[_i]);
        _any = _anys;
    }
        return _any;

    }
    throw "Error";
}

void AnyType::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::type::TypePackage::ANYTYPE__MIXED:
    {
        ::ecore::EFeatureMapEntry _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                > ::fromAny(_newValue, _t0);
        ::type::AnyType::addMixed(_t0);
    }
        return;
    case ::type::TypePackage::ANYTYPE__ANYATTRIBUTE:
    {
        ::ecore::EFeatureMapEntry _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                > ::fromAny(_newValue, _t0);
        ::type::AnyType::addAnyAttribute(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AnyType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::type::TypePackage::ANYTYPE__MIXED:
        return m_mixed.size();
    case ::type::TypePackage::ANYTYPE__ANY:
        return m_any.size();
    case ::type::TypePackage::ANYTYPE__ANYATTRIBUTE:
        return m_anyAttribute.size();

    }
    throw "Error";
}

void AnyType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AnyType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::type::TypePackage* >(::type::TypePackage::_instance().get())->getAnyType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AnyType::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AnyType::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}
