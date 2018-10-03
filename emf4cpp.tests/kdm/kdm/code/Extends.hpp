// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/code/Extends.hpp
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

#ifndef KDM_CODE_EXTENDS_HPP
#define KDM_CODE_EXTENDS_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <kdm/dllKdm.hpp>
#include <kdm/code_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>

#include "CodePackage.hpp"

/*PROTECTED REGION ID(Extends_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace code
    {

    class EXPORT_KDM_DLL Extends : public virtual ::kdm::code::AbstractCodeRelationship
    {
    public:
        Extends();

        virtual ~Extends();

        virtual void _initialize();

        // Operations

        // Attributes

        // References
        virtual ::kdm::code::Datatype_ptr getTo () const;
        virtual void setTo (::kdm::code::Datatype_ptr _to);

        virtual ::kdm::code::Datatype_ptr getFrom () const;
        virtual void setFrom (::kdm::code::Datatype_ptr _from);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = CodePackage::EXTENDS;

        /*PROTECTED REGION ID(Extends) START*/
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

        /*PROTECTED REGION ID(ExtendsImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Extends_ptr _this()
        {   return Extends_ptr(this);}

        // Attributes

        // References

        ::kdm::code::Datatype_ptr m_to;

        ::kdm::code::Datatype_ptr m_from;

    };

}
 // code
}// kdm

#endif // KDM_CODE_EXTENDS_HPP

