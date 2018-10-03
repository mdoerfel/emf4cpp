// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/data/ContentRestriction.hpp
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

#ifndef KDM_DATA_CONTENTRESTRICTION_HPP
#define KDM_DATA_CONTENTRESTRICTION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>
#include <kdm/data_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/core_forward.hpp>
#include <kdm/source_forward.hpp>
#include <kdm/action_forward.hpp>
#include <kdm/data/AbstractContentElement.hpp>

#include "DataPackage.hpp"

/*PROTECTED REGION ID(ContentRestriction_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace data
    {

    class EXPORT_KDM_DLL ContentRestriction : public virtual ::kdm::data::AbstractContentElement
    {
    public:
        ContentRestriction();

        virtual ~ContentRestriction();

        virtual void _initialize();

        // Operations

        // Attributes
        virtual ::kdm::core::String getKind () const;
        virtual void setKind (::kdm::core::String _kind);

        virtual ::kdm::core::String getValue () const;
        virtual void setValue (::kdm::core::String _value);

        // References

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = DataPackage::CONTENTRESTRICTION;

        /*PROTECTED REGION ID(ContentRestriction) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

        // EObjectImpl
        virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
        virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
        virtual void eUnset ( ::ecore::EInt _featureID);
        virtual ::ecore::EClass_ptr _eClass ();
        virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
        virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

        /*PROTECTED REGION ID(ContentRestrictionImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        ContentRestriction_ptr _this()
        {   return ContentRestriction_ptr(this);}

        // Attributes

        ::kdm::core::String m_kind;

        ::kdm::core::String m_value;

        // References

    };

}
 // data
}// kdm

#endif // KDM_DATA_CONTENTRESTRICTION_HPP

