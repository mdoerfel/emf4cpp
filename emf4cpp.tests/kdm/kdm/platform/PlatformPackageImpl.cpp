// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/platform/PlatformPackageImpl.cpp
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

#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/PlatformFactory.hpp>
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
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/core/CorePackage.hpp>
#include <kdm/source/SourcePackage.hpp>
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/CodePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/code/Module.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace ::kdm::platform;

PlatformPackage::PlatformPackage()
{

    // Feature definitions of AbstractPlatformElement
    m_AbstractPlatformElement__source = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_AbstractPlatformElement__relation = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_AbstractPlatformElement__abstraction = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_AbstractPlatformElement__implementation = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of PlatformModel
    m_PlatformModel__platformElement = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractPlatformRelationship

    // Feature definitions of Requires
    m_Requires__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Requires__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ResourceType
    m_ResourceType__platformElement = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of NamingResource

    // Feature definitions of MarshalledResource

    // Feature definitions of MessagingResource

    // Feature definitions of FileResource

    // Feature definitions of ExecutionResource

    // Feature definitions of PlatformAction
    m_PlatformAction__kind = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_PlatformAction__platformElement = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ExternalActor

    // Feature definitions of DataManager

    // Feature definitions of BindsTo
    m_BindsTo__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_BindsTo__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of PlatformElement

    // Feature definitions of PlatformRelationship
    m_PlatformRelationship__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_PlatformRelationship__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of PlatformEvent
    m_PlatformEvent__kind = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of LockResource

    // Feature definitions of DeployedSoftwareSystem
    m_DeployedSoftwareSystem__groupedComponent = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of Machine
    m_Machine__deployedComponent = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Machine__deployedResource = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of DeployedComponent
    m_DeployedComponent__groupedCode = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of DeployedResource
    m_DeployedResource__platformElement = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Loads
    m_Loads__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Loads__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Spawns
    m_Spawns__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Spawns__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of RuntimeResource

    // Feature definitions of Thread

    // Feature definitions of Process

    // Feature definitions of ReadsResource
    m_ReadsResource__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ReadsResource__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of WritesResource
    m_WritesResource__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_WritesResource__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ManagesResource
    m_ManagesResource__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ManagesResource__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of DefinedBy
    m_DefinedBy__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_DefinedBy__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of StreamResource

}

void PlatformPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = PlatformFactory::_instance();
    basicsetEFactoryInstance(_fa);
    _fa->basicsetEPackage(_this());

// Create classes and their features
    auto &classifiers = (::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EClassifier_ptr, -1, true, true >&) getEClassifiers();

    // AbstractPlatformElement
    m_AbstractPlatformElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractPlatformElementEClass->setClassifierID(ABSTRACTPLATFORMELEMENT);
    m_AbstractPlatformElementEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_AbstractPlatformElementEClass);
    // m_AbstractPlatformElement__source has already been allocated above
    m_AbstractPlatformElement__source->setFeatureID(
            ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__SOURCE);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractPlatformElementEClass->getEStructuralFeatures()).basicAdd(
            m_AbstractPlatformElement__source);
    m_AbstractPlatformElement__source->basicsetEContainingClass(
            m_AbstractPlatformElementEClass);
    // m_AbstractPlatformElement__relation has already been allocated above
    m_AbstractPlatformElement__relation->setFeatureID(
            ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__RELATION);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractPlatformElementEClass->getEStructuralFeatures()).basicAdd(
            m_AbstractPlatformElement__relation);
    m_AbstractPlatformElement__relation->basicsetEContainingClass(
            m_AbstractPlatformElementEClass);
    // m_AbstractPlatformElement__abstraction has already been allocated above
    m_AbstractPlatformElement__abstraction->setFeatureID(
            ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__ABSTRACTION);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractPlatformElementEClass->getEStructuralFeatures()).basicAdd(
            m_AbstractPlatformElement__abstraction);
    m_AbstractPlatformElement__abstraction->basicsetEContainingClass(
            m_AbstractPlatformElementEClass);
    // m_AbstractPlatformElement__implementation has already been allocated above
    m_AbstractPlatformElement__implementation->setFeatureID(
            ::kdm::platform::PlatformPackage::ABSTRACTPLATFORMELEMENT__IMPLEMENTATION);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_AbstractPlatformElementEClass->getEStructuralFeatures()).basicAdd(
            m_AbstractPlatformElement__implementation);
    m_AbstractPlatformElement__implementation->basicsetEContainingClass(
            m_AbstractPlatformElementEClass);

    // PlatformModel
    m_PlatformModelEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PlatformModelEClass->setClassifierID(PLATFORMMODEL);
    m_PlatformModelEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_PlatformModelEClass);
    // m_PlatformModel__platformElement has already been allocated above
    m_PlatformModel__platformElement->setFeatureID(
            ::kdm::platform::PlatformPackage::PLATFORMMODEL__PLATFORMELEMENT);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformModelEClass->getEStructuralFeatures()).basicAdd(
            m_PlatformModel__platformElement);
    m_PlatformModel__platformElement->basicsetEContainingClass(
            m_PlatformModelEClass);

    // AbstractPlatformRelationship
    m_AbstractPlatformRelationshipEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractPlatformRelationshipEClass->setClassifierID(
            ABSTRACTPLATFORMRELATIONSHIP);
    m_AbstractPlatformRelationshipEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_AbstractPlatformRelationshipEClass);

    // Requires
    m_RequiresEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_RequiresEClass->setClassifierID(REQUIRES);
    m_RequiresEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_RequiresEClass);
    // m_Requires__to has already been allocated above
    m_Requires__to->setFeatureID(
            ::kdm::platform::PlatformPackage::REQUIRES__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RequiresEClass->getEStructuralFeatures()).basicAdd(
            m_Requires__to);
    m_Requires__to->basicsetEContainingClass(m_RequiresEClass);
    // m_Requires__from has already been allocated above
    m_Requires__from->setFeatureID(
            ::kdm::platform::PlatformPackage::REQUIRES__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_RequiresEClass->getEStructuralFeatures()).basicAdd(
            m_Requires__from);
    m_Requires__from->basicsetEContainingClass(m_RequiresEClass);

    // ResourceType
    m_ResourceTypeEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ResourceTypeEClass->setClassifierID(RESOURCETYPE);
    m_ResourceTypeEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_ResourceTypeEClass);
    // m_ResourceType__platformElement has already been allocated above
    m_ResourceType__platformElement->setFeatureID(
            ::kdm::platform::PlatformPackage::RESOURCETYPE__PLATFORMELEMENT);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ResourceTypeEClass->getEStructuralFeatures()).basicAdd(
            m_ResourceType__platformElement);
    m_ResourceType__platformElement->basicsetEContainingClass(
            m_ResourceTypeEClass);

    // NamingResource
    m_NamingResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_NamingResourceEClass->setClassifierID(NAMINGRESOURCE);
    m_NamingResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_NamingResourceEClass);

    // MarshalledResource
    m_MarshalledResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_MarshalledResourceEClass->setClassifierID(MARSHALLEDRESOURCE);
    m_MarshalledResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_MarshalledResourceEClass);

    // MessagingResource
    m_MessagingResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_MessagingResourceEClass->setClassifierID(MESSAGINGRESOURCE);
    m_MessagingResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_MessagingResourceEClass);

    // FileResource
    m_FileResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_FileResourceEClass->setClassifierID(FILERESOURCE);
    m_FileResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_FileResourceEClass);

    // ExecutionResource
    m_ExecutionResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ExecutionResourceEClass->setClassifierID(EXECUTIONRESOURCE);
    m_ExecutionResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_ExecutionResourceEClass);

    // PlatformAction
    m_PlatformActionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PlatformActionEClass->setClassifierID(PLATFORMACTION);
    m_PlatformActionEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_PlatformActionEClass);
    // m_PlatformAction__kind has already been allocated above
    m_PlatformAction__kind->setFeatureID(
            ::kdm::platform::PlatformPackage::PLATFORMACTION__KIND);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformActionEClass->getEStructuralFeatures()).basicAdd(
            m_PlatformAction__kind);
    m_PlatformAction__kind->basicsetEContainingClass(m_PlatformActionEClass);
    // m_PlatformAction__platformElement has already been allocated above
    m_PlatformAction__platformElement->setFeatureID(
            ::kdm::platform::PlatformPackage::PLATFORMACTION__PLATFORMELEMENT);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformActionEClass->getEStructuralFeatures()).basicAdd(
            m_PlatformAction__platformElement);
    m_PlatformAction__platformElement->basicsetEContainingClass(
            m_PlatformActionEClass);

    // ExternalActor
    m_ExternalActorEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ExternalActorEClass->setClassifierID(EXTERNALACTOR);
    m_ExternalActorEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_ExternalActorEClass);

    // DataManager
    m_DataManagerEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DataManagerEClass->setClassifierID(DATAMANAGER);
    m_DataManagerEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_DataManagerEClass);

    // BindsTo
    m_BindsToEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_BindsToEClass->setClassifierID(BINDSTO);
    m_BindsToEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_BindsToEClass);
    // m_BindsTo__to has already been allocated above
    m_BindsTo__to->setFeatureID(::kdm::platform::PlatformPackage::BINDSTO__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BindsToEClass->getEStructuralFeatures()).basicAdd(
            m_BindsTo__to);
    m_BindsTo__to->basicsetEContainingClass(m_BindsToEClass);
    // m_BindsTo__from has already been allocated above
    m_BindsTo__from->setFeatureID(
            ::kdm::platform::PlatformPackage::BINDSTO__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_BindsToEClass->getEStructuralFeatures()).basicAdd(
            m_BindsTo__from);
    m_BindsTo__from->basicsetEContainingClass(m_BindsToEClass);

    // PlatformElement
    m_PlatformElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PlatformElementEClass->setClassifierID(PLATFORMELEMENT);
    m_PlatformElementEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_PlatformElementEClass);

    // PlatformRelationship
    m_PlatformRelationshipEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PlatformRelationshipEClass->setClassifierID(PLATFORMRELATIONSHIP);
    m_PlatformRelationshipEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_PlatformRelationshipEClass);
    // m_PlatformRelationship__to has already been allocated above
    m_PlatformRelationship__to->setFeatureID(
            ::kdm::platform::PlatformPackage::PLATFORMRELATIONSHIP__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformRelationshipEClass->getEStructuralFeatures()).basicAdd(
            m_PlatformRelationship__to);
    m_PlatformRelationship__to->basicsetEContainingClass(
            m_PlatformRelationshipEClass);
    // m_PlatformRelationship__from has already been allocated above
    m_PlatformRelationship__from->setFeatureID(
            ::kdm::platform::PlatformPackage::PLATFORMRELATIONSHIP__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformRelationshipEClass->getEStructuralFeatures()).basicAdd(
            m_PlatformRelationship__from);
    m_PlatformRelationship__from->basicsetEContainingClass(
            m_PlatformRelationshipEClass);

    // PlatformEvent
    m_PlatformEventEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PlatformEventEClass->setClassifierID(PLATFORMEVENT);
    m_PlatformEventEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_PlatformEventEClass);
    // m_PlatformEvent__kind has already been allocated above
    m_PlatformEvent__kind->setFeatureID(
            ::kdm::platform::PlatformPackage::PLATFORMEVENT__KIND);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_PlatformEventEClass->getEStructuralFeatures()).basicAdd(
            m_PlatformEvent__kind);
    m_PlatformEvent__kind->basicsetEContainingClass(m_PlatformEventEClass);

    // LockResource
    m_LockResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_LockResourceEClass->setClassifierID(LOCKRESOURCE);
    m_LockResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_LockResourceEClass);

    // DeployedSoftwareSystem
    m_DeployedSoftwareSystemEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DeployedSoftwareSystemEClass->setClassifierID(DEPLOYEDSOFTWARESYSTEM);
    m_DeployedSoftwareSystemEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_DeployedSoftwareSystemEClass);
    // m_DeployedSoftwareSystem__groupedComponent has already been allocated above
    m_DeployedSoftwareSystem__groupedComponent->setFeatureID(
            ::kdm::platform::PlatformPackage::DEPLOYEDSOFTWARESYSTEM__GROUPEDCOMPONENT);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeployedSoftwareSystemEClass->getEStructuralFeatures()).basicAdd(
            m_DeployedSoftwareSystem__groupedComponent);
    m_DeployedSoftwareSystem__groupedComponent->basicsetEContainingClass(
            m_DeployedSoftwareSystemEClass);

    // Machine
    m_MachineEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_MachineEClass->setClassifierID(MACHINE);
    m_MachineEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_MachineEClass);
    // m_Machine__deployedComponent has already been allocated above
    m_Machine__deployedComponent->setFeatureID(
            ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDCOMPONENT);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_MachineEClass->getEStructuralFeatures()).basicAdd(
            m_Machine__deployedComponent);
    m_Machine__deployedComponent->basicsetEContainingClass(m_MachineEClass);
    // m_Machine__deployedResource has already been allocated above
    m_Machine__deployedResource->setFeatureID(
            ::kdm::platform::PlatformPackage::MACHINE__DEPLOYEDRESOURCE);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_MachineEClass->getEStructuralFeatures()).basicAdd(
            m_Machine__deployedResource);
    m_Machine__deployedResource->basicsetEContainingClass(m_MachineEClass);

    // DeployedComponent
    m_DeployedComponentEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DeployedComponentEClass->setClassifierID(DEPLOYEDCOMPONENT);
    m_DeployedComponentEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_DeployedComponentEClass);
    // m_DeployedComponent__groupedCode has already been allocated above
    m_DeployedComponent__groupedCode->setFeatureID(
            ::kdm::platform::PlatformPackage::DEPLOYEDCOMPONENT__GROUPEDCODE);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeployedComponentEClass->getEStructuralFeatures()).basicAdd(
            m_DeployedComponent__groupedCode);
    m_DeployedComponent__groupedCode->basicsetEContainingClass(
            m_DeployedComponentEClass);

    // DeployedResource
    m_DeployedResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DeployedResourceEClass->setClassifierID(DEPLOYEDRESOURCE);
    m_DeployedResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_DeployedResourceEClass);
    // m_DeployedResource__platformElement has already been allocated above
    m_DeployedResource__platformElement->setFeatureID(
            ::kdm::platform::PlatformPackage::DEPLOYEDRESOURCE__PLATFORMELEMENT);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DeployedResourceEClass->getEStructuralFeatures()).basicAdd(
            m_DeployedResource__platformElement);
    m_DeployedResource__platformElement->basicsetEContainingClass(
            m_DeployedResourceEClass);

    // Loads
    m_LoadsEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_LoadsEClass->setClassifierID(LOADS);
    m_LoadsEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_LoadsEClass);
    // m_Loads__to has already been allocated above
    m_Loads__to->setFeatureID(::kdm::platform::PlatformPackage::LOADS__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LoadsEClass->getEStructuralFeatures()).basicAdd(
            m_Loads__to);
    m_Loads__to->basicsetEContainingClass(m_LoadsEClass);
    // m_Loads__from has already been allocated above
    m_Loads__from->setFeatureID(::kdm::platform::PlatformPackage::LOADS__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_LoadsEClass->getEStructuralFeatures()).basicAdd(
            m_Loads__from);
    m_Loads__from->basicsetEContainingClass(m_LoadsEClass);

    // Spawns
    m_SpawnsEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_SpawnsEClass->setClassifierID(SPAWNS);
    m_SpawnsEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_SpawnsEClass);
    // m_Spawns__to has already been allocated above
    m_Spawns__to->setFeatureID(::kdm::platform::PlatformPackage::SPAWNS__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SpawnsEClass->getEStructuralFeatures()).basicAdd(
            m_Spawns__to);
    m_Spawns__to->basicsetEContainingClass(m_SpawnsEClass);
    // m_Spawns__from has already been allocated above
    m_Spawns__from->setFeatureID(
            ::kdm::platform::PlatformPackage::SPAWNS__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_SpawnsEClass->getEStructuralFeatures()).basicAdd(
            m_Spawns__from);
    m_Spawns__from->basicsetEContainingClass(m_SpawnsEClass);

    // RuntimeResource
    m_RuntimeResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_RuntimeResourceEClass->setClassifierID(RUNTIMERESOURCE);
    m_RuntimeResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_RuntimeResourceEClass);

    // Thread
    m_ThreadEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ThreadEClass->setClassifierID(THREAD);
    m_ThreadEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_ThreadEClass);

    // Process
    m_ProcessEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ProcessEClass->setClassifierID(PROCESS);
    m_ProcessEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_ProcessEClass);

    // ReadsResource
    m_ReadsResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ReadsResourceEClass->setClassifierID(READSRESOURCE);
    m_ReadsResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_ReadsResourceEClass);
    // m_ReadsResource__to has already been allocated above
    m_ReadsResource__to->setFeatureID(
            ::kdm::platform::PlatformPackage::READSRESOURCE__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReadsResourceEClass->getEStructuralFeatures()).basicAdd(
            m_ReadsResource__to);
    m_ReadsResource__to->basicsetEContainingClass(m_ReadsResourceEClass);
    // m_ReadsResource__from has already been allocated above
    m_ReadsResource__from->setFeatureID(
            ::kdm::platform::PlatformPackage::READSRESOURCE__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ReadsResourceEClass->getEStructuralFeatures()).basicAdd(
            m_ReadsResource__from);
    m_ReadsResource__from->basicsetEContainingClass(m_ReadsResourceEClass);

    // WritesResource
    m_WritesResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_WritesResourceEClass->setClassifierID(WRITESRESOURCE);
    m_WritesResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_WritesResourceEClass);
    // m_WritesResource__to has already been allocated above
    m_WritesResource__to->setFeatureID(
            ::kdm::platform::PlatformPackage::WRITESRESOURCE__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_WritesResourceEClass->getEStructuralFeatures()).basicAdd(
            m_WritesResource__to);
    m_WritesResource__to->basicsetEContainingClass(m_WritesResourceEClass);
    // m_WritesResource__from has already been allocated above
    m_WritesResource__from->setFeatureID(
            ::kdm::platform::PlatformPackage::WRITESRESOURCE__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_WritesResourceEClass->getEStructuralFeatures()).basicAdd(
            m_WritesResource__from);
    m_WritesResource__from->basicsetEContainingClass(m_WritesResourceEClass);

    // ManagesResource
    m_ManagesResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ManagesResourceEClass->setClassifierID(MANAGESRESOURCE);
    m_ManagesResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_ManagesResourceEClass);
    // m_ManagesResource__to has already been allocated above
    m_ManagesResource__to->setFeatureID(
            ::kdm::platform::PlatformPackage::MANAGESRESOURCE__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ManagesResourceEClass->getEStructuralFeatures()).basicAdd(
            m_ManagesResource__to);
    m_ManagesResource__to->basicsetEContainingClass(m_ManagesResourceEClass);
    // m_ManagesResource__from has already been allocated above
    m_ManagesResource__from->setFeatureID(
            ::kdm::platform::PlatformPackage::MANAGESRESOURCE__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_ManagesResourceEClass->getEStructuralFeatures()).basicAdd(
            m_ManagesResource__from);
    m_ManagesResource__from->basicsetEContainingClass(m_ManagesResourceEClass);

    // DefinedBy
    m_DefinedByEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_DefinedByEClass->setClassifierID(DEFINEDBY);
    m_DefinedByEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_DefinedByEClass);
    // m_DefinedBy__to has already been allocated above
    m_DefinedBy__to->setFeatureID(
            ::kdm::platform::PlatformPackage::DEFINEDBY__TO);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DefinedByEClass->getEStructuralFeatures()).basicAdd(
            m_DefinedBy__to);
    m_DefinedBy__to->basicsetEContainingClass(m_DefinedByEClass);
    // m_DefinedBy__from has already been allocated above
    m_DefinedBy__from->setFeatureID(
            ::kdm::platform::PlatformPackage::DEFINEDBY__FROM);
    static_cast< ::ecorecpp::mapping::ReferenceEListImpl<
            ::ecore::EStructuralFeature_ptr, -1, true, true >& >(m_DefinedByEClass->getEStructuralFeatures()).basicAdd(
            m_DefinedBy__from);
    m_DefinedBy__from->basicsetEContainingClass(m_DefinedByEClass);

    // StreamResource
    m_StreamResourceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StreamResourceEClass->setClassifierID(STREAMRESOURCE);
    m_StreamResourceEClass->basicsetEPackage(_this());
    classifiers.basicAdd(m_StreamResourceEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("platform");
    setNsPrefix("");
    setNsURI("");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_AbstractPlatformElementEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMEntity());
    m_PlatformModelEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::kdm::KdmPackage* >(::kdm::kdm::KdmPackage::_instance().get())->getKDMModel());
    m_AbstractPlatformRelationshipEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMRelationship());
    m_RequiresEClass->getESuperTypes().push_back(
            m_AbstractPlatformRelationshipEClass);
    m_ResourceTypeEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_NamingResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
    m_MarshalledResourceEClass->getESuperTypes().push_back(
            m_ResourceTypeEClass);
    m_MessagingResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
    m_FileResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
    m_ExecutionResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
    m_PlatformActionEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_ExternalActorEClass->getESuperTypes().push_back(m_PlatformActionEClass);
    m_DataManagerEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
    m_BindsToEClass->getESuperTypes().push_back(
            m_AbstractPlatformRelationshipEClass);
    m_PlatformElementEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_PlatformRelationshipEClass->getESuperTypes().push_back(
            m_AbstractPlatformRelationshipEClass);
    m_PlatformEventEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_LockResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
    m_DeployedSoftwareSystemEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_MachineEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_DeployedComponentEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_DeployedResourceEClass->getESuperTypes().push_back(
            m_AbstractPlatformElementEClass);
    m_LoadsEClass->getESuperTypes().push_back(
            m_AbstractPlatformRelationshipEClass);
    m_SpawnsEClass->getESuperTypes().push_back(
            m_AbstractPlatformRelationshipEClass);
    m_RuntimeResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);
    m_ThreadEClass->getESuperTypes().push_back(m_RuntimeResourceEClass);
    m_ProcessEClass->getESuperTypes().push_back(m_RuntimeResourceEClass);
    m_ReadsResourceEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getAbstractActionRelationship());
    m_WritesResourceEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getAbstractActionRelationship());
    m_ManagesResourceEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getAbstractActionRelationship());
    m_DefinedByEClass->getESuperTypes().push_back(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getAbstractActionRelationship());
    m_StreamResourceEClass->getESuperTypes().push_back(m_ResourceTypeEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AbstractPlatformElement
    m_AbstractPlatformElementEClass->setName("AbstractPlatformElement");
    m_AbstractPlatformElementEClass->setAbstract(true);
    m_AbstractPlatformElementEClass->setInterface(false);
    m_AbstractPlatformElement__source->setEType(
            dynamic_cast< ::kdm::source::SourcePackage* >(::kdm::source::SourcePackage::_instance().get())->getSourceRef());
    m_AbstractPlatformElement__source->setName("source");
    m_AbstractPlatformElement__source->setDefaultValueLiteral("");
    m_AbstractPlatformElement__source->setLowerBound(0);
    m_AbstractPlatformElement__source->setUpperBound(-1);
    m_AbstractPlatformElement__source->setTransient(false);
    m_AbstractPlatformElement__source->setVolatile(false);
    m_AbstractPlatformElement__source->setChangeable(true);
    m_AbstractPlatformElement__source->setContainment(true);
    m_AbstractPlatformElement__source->setResolveProxies(true);
    m_AbstractPlatformElement__source->setUnique(true);
    m_AbstractPlatformElement__source->setDerived(false);
    m_AbstractPlatformElement__source->setOrdered(false);
    m_AbstractPlatformElement__relation->setEType(
            m_AbstractPlatformRelationshipEClass);
    m_AbstractPlatformElement__relation->setName("relation");
    m_AbstractPlatformElement__relation->setDefaultValueLiteral("");
    m_AbstractPlatformElement__relation->setLowerBound(0);
    m_AbstractPlatformElement__relation->setUpperBound(-1);
    m_AbstractPlatformElement__relation->setTransient(false);
    m_AbstractPlatformElement__relation->setVolatile(false);
    m_AbstractPlatformElement__relation->setChangeable(true);
    m_AbstractPlatformElement__relation->setContainment(true);
    m_AbstractPlatformElement__relation->setResolveProxies(true);
    m_AbstractPlatformElement__relation->setUnique(true);
    m_AbstractPlatformElement__relation->setDerived(false);
    m_AbstractPlatformElement__relation->setOrdered(false);
    m_AbstractPlatformElement__abstraction->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getActionElement());
    m_AbstractPlatformElement__abstraction->setName("abstraction");
    m_AbstractPlatformElement__abstraction->setDefaultValueLiteral("");
    m_AbstractPlatformElement__abstraction->setLowerBound(0);
    m_AbstractPlatformElement__abstraction->setUpperBound(-1);
    m_AbstractPlatformElement__abstraction->setTransient(false);
    m_AbstractPlatformElement__abstraction->setVolatile(false);
    m_AbstractPlatformElement__abstraction->setChangeable(true);
    m_AbstractPlatformElement__abstraction->setContainment(true);
    m_AbstractPlatformElement__abstraction->setResolveProxies(true);
    m_AbstractPlatformElement__abstraction->setUnique(true);
    m_AbstractPlatformElement__abstraction->setDerived(false);
    m_AbstractPlatformElement__abstraction->setOrdered(true);
    m_AbstractPlatformElement__implementation->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getAbstractCodeElement());
    m_AbstractPlatformElement__implementation->setName("implementation");
    m_AbstractPlatformElement__implementation->setDefaultValueLiteral("");
    m_AbstractPlatformElement__implementation->setLowerBound(0);
    m_AbstractPlatformElement__implementation->setUpperBound(-1);
    m_AbstractPlatformElement__implementation->setTransient(false);
    m_AbstractPlatformElement__implementation->setVolatile(false);
    m_AbstractPlatformElement__implementation->setChangeable(true);
    m_AbstractPlatformElement__implementation->setContainment(false);
    m_AbstractPlatformElement__implementation->setResolveProxies(true);
    m_AbstractPlatformElement__implementation->setUnique(true);
    m_AbstractPlatformElement__implementation->setDerived(false);
    m_AbstractPlatformElement__implementation->setOrdered(false);
    // PlatformModel
    m_PlatformModelEClass->setName("PlatformModel");
    m_PlatformModelEClass->setAbstract(false);
    m_PlatformModelEClass->setInterface(false);
    m_PlatformModel__platformElement->setEType(m_AbstractPlatformElementEClass);
    m_PlatformModel__platformElement->setName("platformElement");
    m_PlatformModel__platformElement->setDefaultValueLiteral("");
    m_PlatformModel__platformElement->setLowerBound(0);
    m_PlatformModel__platformElement->setUpperBound(-1);
    m_PlatformModel__platformElement->setTransient(false);
    m_PlatformModel__platformElement->setVolatile(false);
    m_PlatformModel__platformElement->setChangeable(true);
    m_PlatformModel__platformElement->setContainment(true);
    m_PlatformModel__platformElement->setResolveProxies(true);
    m_PlatformModel__platformElement->setUnique(true);
    m_PlatformModel__platformElement->setDerived(false);
    m_PlatformModel__platformElement->setOrdered(false);
    // AbstractPlatformRelationship
    m_AbstractPlatformRelationshipEClass->setName(
            "AbstractPlatformRelationship");
    m_AbstractPlatformRelationshipEClass->setAbstract(true);
    m_AbstractPlatformRelationshipEClass->setInterface(false);
    // Requires
    m_RequiresEClass->setName("Requires");
    m_RequiresEClass->setAbstract(false);
    m_RequiresEClass->setInterface(false);
    m_Requires__to->setEType(m_AbstractPlatformElementEClass);
    m_Requires__to->setName("to");
    m_Requires__to->setDefaultValueLiteral("");
    m_Requires__to->setLowerBound(1);
    m_Requires__to->setUpperBound(1);
    m_Requires__to->setTransient(false);
    m_Requires__to->setVolatile(false);
    m_Requires__to->setChangeable(true);
    m_Requires__to->setContainment(false);
    m_Requires__to->setResolveProxies(true);
    m_Requires__to->setUnique(true);
    m_Requires__to->setDerived(false);
    m_Requires__to->setOrdered(false);
    m_Requires__from->setEType(m_DeployedComponentEClass);
    m_Requires__from->setName("from");
    m_Requires__from->setDefaultValueLiteral("");
    m_Requires__from->setLowerBound(1);
    m_Requires__from->setUpperBound(1);
    m_Requires__from->setTransient(false);
    m_Requires__from->setVolatile(false);
    m_Requires__from->setChangeable(true);
    m_Requires__from->setContainment(false);
    m_Requires__from->setResolveProxies(true);
    m_Requires__from->setUnique(true);
    m_Requires__from->setDerived(false);
    m_Requires__from->setOrdered(false);
    // ResourceType
    m_ResourceTypeEClass->setName("ResourceType");
    m_ResourceTypeEClass->setAbstract(false);
    m_ResourceTypeEClass->setInterface(false);
    m_ResourceType__platformElement->setEType(m_AbstractPlatformElementEClass);
    m_ResourceType__platformElement->setName("platformElement");
    m_ResourceType__platformElement->setDefaultValueLiteral("");
    m_ResourceType__platformElement->setLowerBound(0);
    m_ResourceType__platformElement->setUpperBound(-1);
    m_ResourceType__platformElement->setTransient(false);
    m_ResourceType__platformElement->setVolatile(false);
    m_ResourceType__platformElement->setChangeable(true);
    m_ResourceType__platformElement->setContainment(true);
    m_ResourceType__platformElement->setResolveProxies(true);
    m_ResourceType__platformElement->setUnique(true);
    m_ResourceType__platformElement->setDerived(false);
    m_ResourceType__platformElement->setOrdered(false);
    // NamingResource
    m_NamingResourceEClass->setName("NamingResource");
    m_NamingResourceEClass->setAbstract(false);
    m_NamingResourceEClass->setInterface(false);
    // MarshalledResource
    m_MarshalledResourceEClass->setName("MarshalledResource");
    m_MarshalledResourceEClass->setAbstract(false);
    m_MarshalledResourceEClass->setInterface(false);
    // MessagingResource
    m_MessagingResourceEClass->setName("MessagingResource");
    m_MessagingResourceEClass->setAbstract(false);
    m_MessagingResourceEClass->setInterface(false);
    // FileResource
    m_FileResourceEClass->setName("FileResource");
    m_FileResourceEClass->setAbstract(false);
    m_FileResourceEClass->setInterface(false);
    // ExecutionResource
    m_ExecutionResourceEClass->setName("ExecutionResource");
    m_ExecutionResourceEClass->setAbstract(false);
    m_ExecutionResourceEClass->setInterface(false);
    // PlatformAction
    m_PlatformActionEClass->setName("PlatformAction");
    m_PlatformActionEClass->setAbstract(false);
    m_PlatformActionEClass->setInterface(false);
    m_PlatformAction__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getString());
    m_PlatformAction__kind->setName("kind");
    m_PlatformAction__kind->setDefaultValueLiteral("");
    m_PlatformAction__kind->setLowerBound(0);
    m_PlatformAction__kind->setUpperBound(1);
    m_PlatformAction__kind->setTransient(false);
    m_PlatformAction__kind->setVolatile(false);
    m_PlatformAction__kind->setChangeable(true);
    m_PlatformAction__kind->setUnsettable(false);
    m_PlatformAction__kind->setID(false);
    m_PlatformAction__kind->setUnique(false);
    m_PlatformAction__kind->setDerived(false);
    m_PlatformAction__kind->setOrdered(false);
    m_PlatformAction__platformElement->setEType(m_PlatformEventEClass);
    m_PlatformAction__platformElement->setName("platformElement");
    m_PlatformAction__platformElement->setDefaultValueLiteral("");
    m_PlatformAction__platformElement->setLowerBound(0);
    m_PlatformAction__platformElement->setUpperBound(-1);
    m_PlatformAction__platformElement->setTransient(false);
    m_PlatformAction__platformElement->setVolatile(false);
    m_PlatformAction__platformElement->setChangeable(true);
    m_PlatformAction__platformElement->setContainment(true);
    m_PlatformAction__platformElement->setResolveProxies(true);
    m_PlatformAction__platformElement->setUnique(true);
    m_PlatformAction__platformElement->setDerived(false);
    m_PlatformAction__platformElement->setOrdered(false);
    // ExternalActor
    m_ExternalActorEClass->setName("ExternalActor");
    m_ExternalActorEClass->setAbstract(false);
    m_ExternalActorEClass->setInterface(false);
    // DataManager
    m_DataManagerEClass->setName("DataManager");
    m_DataManagerEClass->setAbstract(false);
    m_DataManagerEClass->setInterface(false);
    // BindsTo
    m_BindsToEClass->setName("BindsTo");
    m_BindsToEClass->setAbstract(false);
    m_BindsToEClass->setInterface(false);
    m_BindsTo__to->setEType(m_ResourceTypeEClass);
    m_BindsTo__to->setName("to");
    m_BindsTo__to->setDefaultValueLiteral("");
    m_BindsTo__to->setLowerBound(1);
    m_BindsTo__to->setUpperBound(1);
    m_BindsTo__to->setTransient(false);
    m_BindsTo__to->setVolatile(false);
    m_BindsTo__to->setChangeable(true);
    m_BindsTo__to->setContainment(false);
    m_BindsTo__to->setResolveProxies(true);
    m_BindsTo__to->setUnique(true);
    m_BindsTo__to->setDerived(false);
    m_BindsTo__to->setOrdered(false);
    m_BindsTo__from->setEType(m_ResourceTypeEClass);
    m_BindsTo__from->setName("from");
    m_BindsTo__from->setDefaultValueLiteral("");
    m_BindsTo__from->setLowerBound(1);
    m_BindsTo__from->setUpperBound(1);
    m_BindsTo__from->setTransient(false);
    m_BindsTo__from->setVolatile(false);
    m_BindsTo__from->setChangeable(true);
    m_BindsTo__from->setContainment(false);
    m_BindsTo__from->setResolveProxies(true);
    m_BindsTo__from->setUnique(true);
    m_BindsTo__from->setDerived(false);
    m_BindsTo__from->setOrdered(false);
    // PlatformElement
    m_PlatformElementEClass->setName("PlatformElement");
    m_PlatformElementEClass->setAbstract(false);
    m_PlatformElementEClass->setInterface(false);
    // PlatformRelationship
    m_PlatformRelationshipEClass->setName("PlatformRelationship");
    m_PlatformRelationshipEClass->setAbstract(false);
    m_PlatformRelationshipEClass->setInterface(false);
    m_PlatformRelationship__to->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getKDMEntity());
    m_PlatformRelationship__to->setName("to");
    m_PlatformRelationship__to->setDefaultValueLiteral("");
    m_PlatformRelationship__to->setLowerBound(1);
    m_PlatformRelationship__to->setUpperBound(1);
    m_PlatformRelationship__to->setTransient(false);
    m_PlatformRelationship__to->setVolatile(false);
    m_PlatformRelationship__to->setChangeable(true);
    m_PlatformRelationship__to->setContainment(false);
    m_PlatformRelationship__to->setResolveProxies(true);
    m_PlatformRelationship__to->setUnique(true);
    m_PlatformRelationship__to->setDerived(false);
    m_PlatformRelationship__to->setOrdered(false);
    m_PlatformRelationship__from->setEType(m_AbstractPlatformElementEClass);
    m_PlatformRelationship__from->setName("from");
    m_PlatformRelationship__from->setDefaultValueLiteral("");
    m_PlatformRelationship__from->setLowerBound(1);
    m_PlatformRelationship__from->setUpperBound(1);
    m_PlatformRelationship__from->setTransient(false);
    m_PlatformRelationship__from->setVolatile(false);
    m_PlatformRelationship__from->setChangeable(true);
    m_PlatformRelationship__from->setContainment(false);
    m_PlatformRelationship__from->setResolveProxies(true);
    m_PlatformRelationship__from->setUnique(true);
    m_PlatformRelationship__from->setDerived(false);
    m_PlatformRelationship__from->setOrdered(false);
    // PlatformEvent
    m_PlatformEventEClass->setName("PlatformEvent");
    m_PlatformEventEClass->setAbstract(false);
    m_PlatformEventEClass->setInterface(false);
    m_PlatformEvent__kind->setEType(
            dynamic_cast< ::kdm::core::CorePackage* >(::kdm::core::CorePackage::_instance().get())->getString());
    m_PlatformEvent__kind->setName("kind");
    m_PlatformEvent__kind->setDefaultValueLiteral("");
    m_PlatformEvent__kind->setLowerBound(0);
    m_PlatformEvent__kind->setUpperBound(1);
    m_PlatformEvent__kind->setTransient(false);
    m_PlatformEvent__kind->setVolatile(false);
    m_PlatformEvent__kind->setChangeable(true);
    m_PlatformEvent__kind->setUnsettable(false);
    m_PlatformEvent__kind->setID(false);
    m_PlatformEvent__kind->setUnique(false);
    m_PlatformEvent__kind->setDerived(false);
    m_PlatformEvent__kind->setOrdered(false);
    // LockResource
    m_LockResourceEClass->setName("LockResource");
    m_LockResourceEClass->setAbstract(false);
    m_LockResourceEClass->setInterface(false);
    // DeployedSoftwareSystem
    m_DeployedSoftwareSystemEClass->setName("DeployedSoftwareSystem");
    m_DeployedSoftwareSystemEClass->setAbstract(false);
    m_DeployedSoftwareSystemEClass->setInterface(false);
    m_DeployedSoftwareSystem__groupedComponent->setEType(
            m_DeployedComponentEClass);
    m_DeployedSoftwareSystem__groupedComponent->setName("groupedComponent");
    m_DeployedSoftwareSystem__groupedComponent->setDefaultValueLiteral("");
    m_DeployedSoftwareSystem__groupedComponent->setLowerBound(0);
    m_DeployedSoftwareSystem__groupedComponent->setUpperBound(-1);
    m_DeployedSoftwareSystem__groupedComponent->setTransient(false);
    m_DeployedSoftwareSystem__groupedComponent->setVolatile(false);
    m_DeployedSoftwareSystem__groupedComponent->setChangeable(true);
    m_DeployedSoftwareSystem__groupedComponent->setContainment(false);
    m_DeployedSoftwareSystem__groupedComponent->setResolveProxies(true);
    m_DeployedSoftwareSystem__groupedComponent->setUnique(true);
    m_DeployedSoftwareSystem__groupedComponent->setDerived(false);
    m_DeployedSoftwareSystem__groupedComponent->setOrdered(false);
    // Machine
    m_MachineEClass->setName("Machine");
    m_MachineEClass->setAbstract(false);
    m_MachineEClass->setInterface(false);
    m_Machine__deployedComponent->setEType(m_DeployedComponentEClass);
    m_Machine__deployedComponent->setName("deployedComponent");
    m_Machine__deployedComponent->setDefaultValueLiteral("");
    m_Machine__deployedComponent->setLowerBound(0);
    m_Machine__deployedComponent->setUpperBound(-1);
    m_Machine__deployedComponent->setTransient(false);
    m_Machine__deployedComponent->setVolatile(false);
    m_Machine__deployedComponent->setChangeable(true);
    m_Machine__deployedComponent->setContainment(true);
    m_Machine__deployedComponent->setResolveProxies(true);
    m_Machine__deployedComponent->setUnique(true);
    m_Machine__deployedComponent->setDerived(false);
    m_Machine__deployedComponent->setOrdered(false);
    m_Machine__deployedResource->setEType(m_DeployedResourceEClass);
    m_Machine__deployedResource->setName("deployedResource");
    m_Machine__deployedResource->setDefaultValueLiteral("");
    m_Machine__deployedResource->setLowerBound(0);
    m_Machine__deployedResource->setUpperBound(-1);
    m_Machine__deployedResource->setTransient(false);
    m_Machine__deployedResource->setVolatile(false);
    m_Machine__deployedResource->setChangeable(true);
    m_Machine__deployedResource->setContainment(true);
    m_Machine__deployedResource->setResolveProxies(true);
    m_Machine__deployedResource->setUnique(true);
    m_Machine__deployedResource->setDerived(false);
    m_Machine__deployedResource->setOrdered(false);
    // DeployedComponent
    m_DeployedComponentEClass->setName("DeployedComponent");
    m_DeployedComponentEClass->setAbstract(false);
    m_DeployedComponentEClass->setInterface(false);
    m_DeployedComponent__groupedCode->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getModule());
    m_DeployedComponent__groupedCode->setName("groupedCode");
    m_DeployedComponent__groupedCode->setDefaultValueLiteral("");
    m_DeployedComponent__groupedCode->setLowerBound(0);
    m_DeployedComponent__groupedCode->setUpperBound(-1);
    m_DeployedComponent__groupedCode->setTransient(false);
    m_DeployedComponent__groupedCode->setVolatile(false);
    m_DeployedComponent__groupedCode->setChangeable(true);
    m_DeployedComponent__groupedCode->setContainment(false);
    m_DeployedComponent__groupedCode->setResolveProxies(true);
    m_DeployedComponent__groupedCode->setUnique(true);
    m_DeployedComponent__groupedCode->setDerived(false);
    m_DeployedComponent__groupedCode->setOrdered(false);
    // DeployedResource
    m_DeployedResourceEClass->setName("DeployedResource");
    m_DeployedResourceEClass->setAbstract(false);
    m_DeployedResourceEClass->setInterface(false);
    m_DeployedResource__platformElement->setEType(m_ResourceTypeEClass);
    m_DeployedResource__platformElement->setName("platformElement");
    m_DeployedResource__platformElement->setDefaultValueLiteral("");
    m_DeployedResource__platformElement->setLowerBound(0);
    m_DeployedResource__platformElement->setUpperBound(-1);
    m_DeployedResource__platformElement->setTransient(false);
    m_DeployedResource__platformElement->setVolatile(false);
    m_DeployedResource__platformElement->setChangeable(true);
    m_DeployedResource__platformElement->setContainment(true);
    m_DeployedResource__platformElement->setResolveProxies(true);
    m_DeployedResource__platformElement->setUnique(true);
    m_DeployedResource__platformElement->setDerived(false);
    m_DeployedResource__platformElement->setOrdered(false);
    // Loads
    m_LoadsEClass->setName("Loads");
    m_LoadsEClass->setAbstract(false);
    m_LoadsEClass->setInterface(false);
    m_Loads__to->setEType(m_DeployedComponentEClass);
    m_Loads__to->setName("to");
    m_Loads__to->setDefaultValueLiteral("");
    m_Loads__to->setLowerBound(1);
    m_Loads__to->setUpperBound(1);
    m_Loads__to->setTransient(false);
    m_Loads__to->setVolatile(false);
    m_Loads__to->setChangeable(true);
    m_Loads__to->setContainment(false);
    m_Loads__to->setResolveProxies(true);
    m_Loads__to->setUnique(true);
    m_Loads__to->setDerived(false);
    m_Loads__to->setOrdered(false);
    m_Loads__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getActionElement());
    m_Loads__from->setName("from");
    m_Loads__from->setDefaultValueLiteral("");
    m_Loads__from->setLowerBound(1);
    m_Loads__from->setUpperBound(1);
    m_Loads__from->setTransient(false);
    m_Loads__from->setVolatile(false);
    m_Loads__from->setChangeable(true);
    m_Loads__from->setContainment(false);
    m_Loads__from->setResolveProxies(true);
    m_Loads__from->setUnique(true);
    m_Loads__from->setDerived(false);
    m_Loads__from->setOrdered(false);
    // Spawns
    m_SpawnsEClass->setName("Spawns");
    m_SpawnsEClass->setAbstract(false);
    m_SpawnsEClass->setInterface(false);
    m_Spawns__to->setEType(m_RuntimeResourceEClass);
    m_Spawns__to->setName("to");
    m_Spawns__to->setDefaultValueLiteral("");
    m_Spawns__to->setLowerBound(1);
    m_Spawns__to->setUpperBound(1);
    m_Spawns__to->setTransient(false);
    m_Spawns__to->setVolatile(false);
    m_Spawns__to->setChangeable(true);
    m_Spawns__to->setContainment(false);
    m_Spawns__to->setResolveProxies(true);
    m_Spawns__to->setUnique(true);
    m_Spawns__to->setDerived(false);
    m_Spawns__to->setOrdered(false);
    m_Spawns__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getActionElement());
    m_Spawns__from->setName("from");
    m_Spawns__from->setDefaultValueLiteral("");
    m_Spawns__from->setLowerBound(1);
    m_Spawns__from->setUpperBound(1);
    m_Spawns__from->setTransient(false);
    m_Spawns__from->setVolatile(false);
    m_Spawns__from->setChangeable(true);
    m_Spawns__from->setContainment(false);
    m_Spawns__from->setResolveProxies(true);
    m_Spawns__from->setUnique(true);
    m_Spawns__from->setDerived(false);
    m_Spawns__from->setOrdered(false);
    // RuntimeResource
    m_RuntimeResourceEClass->setName("RuntimeResource");
    m_RuntimeResourceEClass->setAbstract(false);
    m_RuntimeResourceEClass->setInterface(false);
    // Thread
    m_ThreadEClass->setName("Thread");
    m_ThreadEClass->setAbstract(false);
    m_ThreadEClass->setInterface(false);
    // Process
    m_ProcessEClass->setName("Process");
    m_ProcessEClass->setAbstract(false);
    m_ProcessEClass->setInterface(false);
    // ReadsResource
    m_ReadsResourceEClass->setName("ReadsResource");
    m_ReadsResourceEClass->setAbstract(false);
    m_ReadsResourceEClass->setInterface(false);
    m_ReadsResource__to->setEType(m_ResourceTypeEClass);
    m_ReadsResource__to->setName("to");
    m_ReadsResource__to->setDefaultValueLiteral("");
    m_ReadsResource__to->setLowerBound(1);
    m_ReadsResource__to->setUpperBound(1);
    m_ReadsResource__to->setTransient(false);
    m_ReadsResource__to->setVolatile(false);
    m_ReadsResource__to->setChangeable(true);
    m_ReadsResource__to->setContainment(false);
    m_ReadsResource__to->setResolveProxies(true);
    m_ReadsResource__to->setUnique(true);
    m_ReadsResource__to->setDerived(false);
    m_ReadsResource__to->setOrdered(false);
    m_ReadsResource__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getActionElement());
    m_ReadsResource__from->setName("from");
    m_ReadsResource__from->setDefaultValueLiteral("");
    m_ReadsResource__from->setLowerBound(1);
    m_ReadsResource__from->setUpperBound(1);
    m_ReadsResource__from->setTransient(false);
    m_ReadsResource__from->setVolatile(false);
    m_ReadsResource__from->setChangeable(true);
    m_ReadsResource__from->setContainment(false);
    m_ReadsResource__from->setResolveProxies(true);
    m_ReadsResource__from->setUnique(true);
    m_ReadsResource__from->setDerived(false);
    m_ReadsResource__from->setOrdered(false);
    // WritesResource
    m_WritesResourceEClass->setName("WritesResource");
    m_WritesResourceEClass->setAbstract(false);
    m_WritesResourceEClass->setInterface(false);
    m_WritesResource__to->setEType(m_ResourceTypeEClass);
    m_WritesResource__to->setName("to");
    m_WritesResource__to->setDefaultValueLiteral("");
    m_WritesResource__to->setLowerBound(1);
    m_WritesResource__to->setUpperBound(1);
    m_WritesResource__to->setTransient(false);
    m_WritesResource__to->setVolatile(false);
    m_WritesResource__to->setChangeable(true);
    m_WritesResource__to->setContainment(false);
    m_WritesResource__to->setResolveProxies(true);
    m_WritesResource__to->setUnique(true);
    m_WritesResource__to->setDerived(false);
    m_WritesResource__to->setOrdered(false);
    m_WritesResource__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getActionElement());
    m_WritesResource__from->setName("from");
    m_WritesResource__from->setDefaultValueLiteral("");
    m_WritesResource__from->setLowerBound(1);
    m_WritesResource__from->setUpperBound(1);
    m_WritesResource__from->setTransient(false);
    m_WritesResource__from->setVolatile(false);
    m_WritesResource__from->setChangeable(true);
    m_WritesResource__from->setContainment(false);
    m_WritesResource__from->setResolveProxies(true);
    m_WritesResource__from->setUnique(true);
    m_WritesResource__from->setDerived(false);
    m_WritesResource__from->setOrdered(false);
    // ManagesResource
    m_ManagesResourceEClass->setName("ManagesResource");
    m_ManagesResourceEClass->setAbstract(false);
    m_ManagesResourceEClass->setInterface(false);
    m_ManagesResource__to->setEType(m_ResourceTypeEClass);
    m_ManagesResource__to->setName("to");
    m_ManagesResource__to->setDefaultValueLiteral("");
    m_ManagesResource__to->setLowerBound(1);
    m_ManagesResource__to->setUpperBound(1);
    m_ManagesResource__to->setTransient(false);
    m_ManagesResource__to->setVolatile(false);
    m_ManagesResource__to->setChangeable(true);
    m_ManagesResource__to->setContainment(false);
    m_ManagesResource__to->setResolveProxies(true);
    m_ManagesResource__to->setUnique(true);
    m_ManagesResource__to->setDerived(false);
    m_ManagesResource__to->setOrdered(false);
    m_ManagesResource__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getActionElement());
    m_ManagesResource__from->setName("from");
    m_ManagesResource__from->setDefaultValueLiteral("");
    m_ManagesResource__from->setLowerBound(1);
    m_ManagesResource__from->setUpperBound(1);
    m_ManagesResource__from->setTransient(false);
    m_ManagesResource__from->setVolatile(false);
    m_ManagesResource__from->setChangeable(true);
    m_ManagesResource__from->setContainment(false);
    m_ManagesResource__from->setResolveProxies(true);
    m_ManagesResource__from->setUnique(true);
    m_ManagesResource__from->setDerived(false);
    m_ManagesResource__from->setOrdered(false);
    // DefinedBy
    m_DefinedByEClass->setName("DefinedBy");
    m_DefinedByEClass->setAbstract(false);
    m_DefinedByEClass->setInterface(false);
    m_DefinedBy__to->setEType(
            dynamic_cast< ::kdm::code::CodePackage* >(::kdm::code::CodePackage::_instance().get())->getCodeItem());
    m_DefinedBy__to->setName("to");
    m_DefinedBy__to->setDefaultValueLiteral("");
    m_DefinedBy__to->setLowerBound(1);
    m_DefinedBy__to->setUpperBound(1);
    m_DefinedBy__to->setTransient(false);
    m_DefinedBy__to->setVolatile(false);
    m_DefinedBy__to->setChangeable(true);
    m_DefinedBy__to->setContainment(false);
    m_DefinedBy__to->setResolveProxies(true);
    m_DefinedBy__to->setUnique(true);
    m_DefinedBy__to->setDerived(false);
    m_DefinedBy__to->setOrdered(false);
    m_DefinedBy__from->setEType(
            dynamic_cast< ::kdm::action::ActionPackage* >(::kdm::action::ActionPackage::_instance().get())->getActionElement());
    m_DefinedBy__from->setName("from");
    m_DefinedBy__from->setDefaultValueLiteral("");
    m_DefinedBy__from->setLowerBound(1);
    m_DefinedBy__from->setUpperBound(1);
    m_DefinedBy__from->setTransient(false);
    m_DefinedBy__from->setVolatile(false);
    m_DefinedBy__from->setChangeable(true);
    m_DefinedBy__from->setContainment(false);
    m_DefinedBy__from->setResolveProxies(true);
    m_DefinedBy__from->setUnique(true);
    m_DefinedBy__from->setDerived(false);
    m_DefinedBy__from->setOrdered(false);
    // StreamResource
    m_StreamResourceEClass->setName("StreamResource");
    m_StreamResourceEClass->setAbstract(false);
    m_StreamResourceEClass->setInterface(false);

    // TODO: Initialize data types

    /* EAnnotations for EPackage, the EClasses and their EStructuralFeatures */
    ::ecore::EAnnotation_ptr _annotation;

    _initialize();
}

::ecore::EClass_ptr PlatformPackage::getAbstractPlatformElement()
{
    return m_AbstractPlatformElementEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformModel()
{
    return m_PlatformModelEClass;
}
::ecore::EClass_ptr PlatformPackage::getAbstractPlatformRelationship()
{
    return m_AbstractPlatformRelationshipEClass;
}
::ecore::EClass_ptr PlatformPackage::getRequires()
{
    return m_RequiresEClass;
}
::ecore::EClass_ptr PlatformPackage::getResourceType()
{
    return m_ResourceTypeEClass;
}
::ecore::EClass_ptr PlatformPackage::getNamingResource()
{
    return m_NamingResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getMarshalledResource()
{
    return m_MarshalledResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getMessagingResource()
{
    return m_MessagingResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getFileResource()
{
    return m_FileResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getExecutionResource()
{
    return m_ExecutionResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformAction()
{
    return m_PlatformActionEClass;
}
::ecore::EClass_ptr PlatformPackage::getExternalActor()
{
    return m_ExternalActorEClass;
}
::ecore::EClass_ptr PlatformPackage::getDataManager()
{
    return m_DataManagerEClass;
}
::ecore::EClass_ptr PlatformPackage::getBindsTo()
{
    return m_BindsToEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformElement()
{
    return m_PlatformElementEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformRelationship()
{
    return m_PlatformRelationshipEClass;
}
::ecore::EClass_ptr PlatformPackage::getPlatformEvent()
{
    return m_PlatformEventEClass;
}
::ecore::EClass_ptr PlatformPackage::getLockResource()
{
    return m_LockResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getDeployedSoftwareSystem()
{
    return m_DeployedSoftwareSystemEClass;
}
::ecore::EClass_ptr PlatformPackage::getMachine()
{
    return m_MachineEClass;
}
::ecore::EClass_ptr PlatformPackage::getDeployedComponent()
{
    return m_DeployedComponentEClass;
}
::ecore::EClass_ptr PlatformPackage::getDeployedResource()
{
    return m_DeployedResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getLoads()
{
    return m_LoadsEClass;
}
::ecore::EClass_ptr PlatformPackage::getSpawns()
{
    return m_SpawnsEClass;
}
::ecore::EClass_ptr PlatformPackage::getRuntimeResource()
{
    return m_RuntimeResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getThread()
{
    return m_ThreadEClass;
}
::ecore::EClass_ptr PlatformPackage::getProcess()
{
    return m_ProcessEClass;
}
::ecore::EClass_ptr PlatformPackage::getReadsResource()
{
    return m_ReadsResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getWritesResource()
{
    return m_WritesResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getManagesResource()
{
    return m_ManagesResourceEClass;
}
::ecore::EClass_ptr PlatformPackage::getDefinedBy()
{
    return m_DefinedByEClass;
}
::ecore::EClass_ptr PlatformPackage::getStreamResource()
{
    return m_StreamResourceEClass;
}

::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__source()
{
    return m_AbstractPlatformElement__source;
}
::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__relation()
{
    return m_AbstractPlatformElement__relation;
}
::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__abstraction()
{
    return m_AbstractPlatformElement__abstraction;
}
::ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__implementation()
{
    return m_AbstractPlatformElement__implementation;
}
::ecore::EReference_ptr PlatformPackage::getPlatformModel__platformElement()
{
    return m_PlatformModel__platformElement;
}
::ecore::EReference_ptr PlatformPackage::getRequires__to()
{
    return m_Requires__to;
}
::ecore::EReference_ptr PlatformPackage::getRequires__from()
{
    return m_Requires__from;
}
::ecore::EReference_ptr PlatformPackage::getResourceType__platformElement()
{
    return m_ResourceType__platformElement;
}
::ecore::EAttribute_ptr PlatformPackage::getPlatformAction__kind()
{
    return m_PlatformAction__kind;
}
::ecore::EReference_ptr PlatformPackage::getPlatformAction__platformElement()
{
    return m_PlatformAction__platformElement;
}
::ecore::EReference_ptr PlatformPackage::getBindsTo__to()
{
    return m_BindsTo__to;
}
::ecore::EReference_ptr PlatformPackage::getBindsTo__from()
{
    return m_BindsTo__from;
}
::ecore::EReference_ptr PlatformPackage::getPlatformRelationship__to()
{
    return m_PlatformRelationship__to;
}
::ecore::EReference_ptr PlatformPackage::getPlatformRelationship__from()
{
    return m_PlatformRelationship__from;
}
::ecore::EAttribute_ptr PlatformPackage::getPlatformEvent__kind()
{
    return m_PlatformEvent__kind;
}
::ecore::EReference_ptr PlatformPackage::getDeployedSoftwareSystem__groupedComponent()
{
    return m_DeployedSoftwareSystem__groupedComponent;
}
::ecore::EReference_ptr PlatformPackage::getMachine__deployedComponent()
{
    return m_Machine__deployedComponent;
}
::ecore::EReference_ptr PlatformPackage::getMachine__deployedResource()
{
    return m_Machine__deployedResource;
}
::ecore::EReference_ptr PlatformPackage::getDeployedComponent__groupedCode()
{
    return m_DeployedComponent__groupedCode;
}
::ecore::EReference_ptr PlatformPackage::getDeployedResource__platformElement()
{
    return m_DeployedResource__platformElement;
}
::ecore::EReference_ptr PlatformPackage::getLoads__to()
{
    return m_Loads__to;
}
::ecore::EReference_ptr PlatformPackage::getLoads__from()
{
    return m_Loads__from;
}
::ecore::EReference_ptr PlatformPackage::getSpawns__to()
{
    return m_Spawns__to;
}
::ecore::EReference_ptr PlatformPackage::getSpawns__from()
{
    return m_Spawns__from;
}
::ecore::EReference_ptr PlatformPackage::getReadsResource__to()
{
    return m_ReadsResource__to;
}
::ecore::EReference_ptr PlatformPackage::getReadsResource__from()
{
    return m_ReadsResource__from;
}
::ecore::EReference_ptr PlatformPackage::getWritesResource__to()
{
    return m_WritesResource__to;
}
::ecore::EReference_ptr PlatformPackage::getWritesResource__from()
{
    return m_WritesResource__from;
}
::ecore::EReference_ptr PlatformPackage::getManagesResource__to()
{
    return m_ManagesResource__to;
}
::ecore::EReference_ptr PlatformPackage::getManagesResource__from()
{
    return m_ManagesResource__from;
}
::ecore::EReference_ptr PlatformPackage::getDefinedBy__to()
{
    return m_DefinedBy__to;
}
::ecore::EReference_ptr PlatformPackage::getDefinedBy__from()
{
    return m_DefinedBy__from;
}

