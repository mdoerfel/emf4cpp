// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/ExceptionDef.cpp
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

#include "ExceptionDef.hpp"
#include <idlmm/Contained.hpp>
#include <idlmm/Container.hpp>
#include <idlmm/Field.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "idlmm/IdlmmPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ExceptionDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::idlmm;

// Default constructor
ExceptionDef::ExceptionDef()
{
    /*PROTECTED REGION ID(ExceptionDefImpl__ExceptionDefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ExceptionDef::~ExceptionDef()
{
}

// Attributes

::idlmm::ETypeCode ExceptionDef::getTypeCode() const
{
    return m_typeCode;
}

void ExceptionDef::setTypeCode(::idlmm::ETypeCode _typeCode)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::idlmm::ETypeCode _old_typeCode = m_typeCode;
#endif
    m_typeCode = _typeCode;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::idlmm::IdlmmPackage::_instance()->getExceptionDef__typeCode(),
                _old_typeCode,
                m_typeCode
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::idlmm::Field_ptr >& ExceptionDef::getMembers() const
{
    if (!m_members)
        return const_cast< ExceptionDef* >(this)->getMembers();

    return *m_members;
}

::ecorecpp::mapping::EList< ::idlmm::Field_ptr >& ExceptionDef::getMembers()
{
    /*PROTECTED REGION ID(ExceptionDef__getMembers) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_members)
        m_members.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl< ::idlmm::Field_ptr,
                        -1, true, false >(this,
                        ::idlmm::IdlmmPackage::_instance()->getExceptionDef__members()));
    /*PROTECTED REGION END*/
    return *m_members;
}

