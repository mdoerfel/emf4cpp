// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/ui/UIAction.cpp
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

#include "UIAction.hpp"
#include <kdm/ui/AbstractUIElement.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/ui/UIEvent.hpp>
#include <kdm/core/KDMRelationship.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/kdm/KDMModel.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "kdm/ui/UiPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(UIAction.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::kdm::ui;

// Default constructor
UIAction::UIAction()
{
    /*PROTECTED REGION ID(UIActionImpl__UIActionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

UIAction::~UIAction()
{
}

// Attributes

::kdm::core::String UIAction::getKind() const
{
    return m_kind;
}

void UIAction::setKind(::kdm::core::String _kind)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::kdm::core::String _old_kind = m_kind;
#endif
    m_kind = _kind;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::kdm::ui::UiPackage::_instance()->getUIAction__kind(),
                _old_kind,
                m_kind
            );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::kdm::ui::UIEvent_ptr >& UIAction::getUIElement() const
{
    if (!m_UIElement)
        return const_cast< UIAction* >(this)->getUIElement();

    return *m_UIElement;
}

::ecorecpp::mapping::EList< ::kdm::ui::UIEvent_ptr >& UIAction::getUIElement()
{
    /*PROTECTED REGION ID(UIAction__getUIElement) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    if (!m_UIElement)
        m_UIElement.reset(
                new ::ecorecpp::mapping::ReferenceEListImpl<
                        ::kdm::ui::UIEvent_ptr, -1, true, false >(this,
                        ::kdm::ui::UiPackage::_instance()->getUIAction__UIElement()));
    /*PROTECTED REGION END*/
    return *m_UIElement;
}

