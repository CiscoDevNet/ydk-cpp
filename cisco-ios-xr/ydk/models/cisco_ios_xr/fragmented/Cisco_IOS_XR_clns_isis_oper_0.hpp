#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_0_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

class OcniIsis : public ydk::Entity
{
    public:
        OcniIsis();
        ~OcniIsis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class NetworkInstances; //type: OcniIsis::NetworkInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances> network_instances;
        
}; // OcniIsis


class OcniIsis::NetworkInstances : public ydk::Entity
{
    public:
        NetworkInstances();
        ~NetworkInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NetworkInstance; //type: OcniIsis::NetworkInstances::NetworkInstance

        ydk::YList network_instance;
        
}; // OcniIsis::NetworkInstances


class OcniIsis::NetworkInstances::NetworkInstance : public ydk::Entity
{
    public:
        NetworkInstance();
        ~NetworkInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Interfaces; //type: OcniIsis::NetworkInstances::NetworkInstance::Interfaces
        class Protocols; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols> protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance


class OcniIsis::NetworkInstances::NetworkInstance::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface

        ydk::YList interface;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Interfaces


class OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface


class OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Interfaces::Interface::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols : public ydk::Entity
{
    public:
        Protocols();
        ~Protocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol

        ydk::YList protocol;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf name; //type: string
        class ProtocolsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState
        class Isis; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState> protocols_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis> isis;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState : public ydk::Entity
{
    public:
        ProtocolsState();
        ~ProtocolsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: string
        ydk::YLeaf name; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::ProtocolsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisInterfaces; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces
        class Global; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global
        class Levels; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces> isis_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels> levels;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces : public ydk::Entity
{
    public:
        IsisInterfaces();
        ~IsisInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisInterface; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface

        ydk::YList isis_interface;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface : public ydk::Entity
{
    public:
        IsisInterface();
        ~IsisInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: string
        class InterfacesAfiSafis; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis
        class InterfacesState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState
        class InterfacesLevels; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels
        class CircuitCounters; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters
        class InterfacesAuthentication; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication
        class InterfacesTimers; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis> interfaces_afi_safis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState> interfaces_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels> interfaces_levels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters> circuit_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication> interfaces_authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers> interfaces_timers;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis : public ydk::Entity
{
    public:
        InterfacesAfiSafis();
        ~InterfacesAfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfacesAfiSafi; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi

        ydk::YList interfaces_afi_safi;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi : public ydk::Entity
{
    public:
        InterfacesAfiSafi();
        ~InterfacesAfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_name; //type: string
        ydk::YLeaf safi_name; //type: string
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_name; //type: string
        ydk::YLeaf safi_name; //type: string
        ydk::YLeaf enabled; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAfiSafis::InterfacesAfiSafi::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState : public ydk::Entity
{
    public:
        InterfacesState();
        ~InterfacesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf interface_id; //type: string
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf hello_padding; //type: OpenconfigIsisTypesHelloPaddingTypeEnum
        ydk::YLeaf circuit_type; //type: OpenconfigIsisTypesCircuitTypeEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels : public ydk::Entity
{
    public:
        InterfacesLevels();
        ~InterfacesLevels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfacesLevel; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel

        ydk::YList interfaces_level;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel : public ydk::Entity
{
    public:
        InterfacesLevel();
        ~InterfacesLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_number; //type: uint32
        class HelloAuthentication; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication
        class InterfacesLevelsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState
        class PacketCounters; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters
        class Adjacencies; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies
        class LevelsTimers; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers
        class LevelsAfiSafis; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication> hello_authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState> interfaces_levels_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters> packet_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies> adjacencies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers> levels_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis> levels_afi_safis;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication : public ydk::Entity
{
    public:
        HelloAuthentication();
        ~HelloAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key> key;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_password; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::HelloAuthentication::Key::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState : public ydk::Entity
{
    public:
        InterfacesLevelsState();
        ~InterfacesLevelsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_number; //type: uint8
        ydk::YLeaf priority; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::InterfacesLevelsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters : public ydk::Entity
{
    public:
        PacketCounters();
        ~PacketCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsp; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp
        class Iih; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih
        class Psnp; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp
        class Cnsp; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp> lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih> iih;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp> psnp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp> cnsp;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp : public ydk::Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf sent; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Lsp::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih : public ydk::Entity
{
    public:
        Iih();
        ~Iih();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf sent; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Iih::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp : public ydk::Entity
{
    public:
        Psnp();
        ~Psnp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf sent; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Psnp::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp : public ydk::Entity
{
    public:
        Cnsp();
        ~Cnsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf processed; //type: uint32
        ydk::YLeaf sent; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::PacketCounters::Cnsp::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies : public ydk::Entity
{
    public:
        Adjacencies();
        ~Adjacencies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Adjacency; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency

        ydk::YList adjacency;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency : public ydk::Entity
{
    public:
        Adjacency();
        ~Adjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf neighbor_ipv4_address; //type: string
        ydk::YLeaf neighbor_ipv6_address; //type: string
        ydk::YLeaf neighbor_snpa; //type: string
        ydk::YLeaf local_extended_circuit_id; //type: uint32
        ydk::YLeaf neighbor_extended_circuit_id; //type: uint32
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf dis_system_id; //type: string
        ydk::YLeaf neighbor_circuit_type; //type: OpenconfigIsisTypesLevelTypeEnum
        ydk::YLeaf adjacency_type; //type: OpenconfigIsisTypesLevelTypeEnum
        ydk::YLeaf adjacency_state; //type: OpenconfigIsisTypesIsisInterfaceAdjStateEnum
        ydk::YLeaf remaining_hold_time; //type: uint16
        ydk::YLeaf up_time; //type: uint32
        ydk::YLeaf restart_support; //type: boolean
        ydk::YLeaf restart_suppress; //type: boolean
        ydk::YLeaf restart_status; //type: boolean
        ydk::YLeafList topology; //type: list of  string
        ydk::YLeafList area_address; //type: list of  string
        ydk::YLeafList nlpid; //type: list of  OpenconfigIsisAdjacencyStateNlpidEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::Adjacencies::Adjacency::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers : public ydk::Entity
{
    public:
        LevelsTimers();
        ~LevelsTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_multiplier; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsTimers::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis : public ydk::Entity
{
    public:
        LevelsAfiSafis();
        ~LevelsAfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LevelsAfiSafi; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi

        ydk::YList levels_afi_safi;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi : public ydk::Entity
{
    public:
        LevelsAfiSafi();
        ~LevelsAfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_name; //type: string
        ydk::YLeaf safi_name; //type: string
        class AfiSafiState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState
        class AfiSafiSegmentRouting; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState> afi_safi_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting> afi_safi_segment_routing;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState : public ydk::Entity
{
    public:
        AfiSafiState();
        ~AfiSafiState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_name; //type: string
        ydk::YLeaf safi_name; //type: string
        ydk::YLeaf metric; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting : public ydk::Entity
{
    public:
        AfiSafiSegmentRouting();
        ~AfiSafiSegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRoutingPrefixSids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids> segment_routing_prefix_sids;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids : public ydk::Entity
{
    public:
        SegmentRoutingPrefixSids();
        ~SegmentRoutingPrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRoutingPrefixSid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid

        ydk::YList segment_routing_prefix_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid : public ydk::Entity
{
    public:
        SegmentRoutingPrefixSid();
        ~SegmentRoutingPrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf sid_id; //type: string
        ydk::YLeaf label_options; //type: OpenconfigSegmentRoutingLabelOptionsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesLevels::InterfacesLevel::LevelsAfiSafis::LevelsAfiSafi::AfiSafiSegmentRouting::SegmentRoutingPrefixSids::SegmentRoutingPrefixSid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters : public ydk::Entity
{
    public:
        CircuitCounters();
        ~CircuitCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adj_changes; //type: uint32
        ydk::YLeaf rejected_adj; //type: uint32
        ydk::YLeaf id_field_len_mismatches; //type: uint32
        ydk::YLeaf max_area_address_mismatches; //type: uint32
        ydk::YLeaf auth_fails; //type: uint32
        ydk::YLeaf lan_dis_changes; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::CircuitCounters::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication : public ydk::Entity
{
    public:
        InterfacesAuthentication();
        ~InterfacesAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key> key;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_password; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesAuthentication::Key::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers : public ydk::Entity
{
    public:
        InterfacesTimers();
        ~InterfacesTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf csnp_interval; //type: uint16
        ydk::YLeaf lsp_pacing_interval; //type: uint64

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::IsisInterfaces::IsisInterface::InterfacesTimers::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRouting; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting
        class LspBit; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit
        class Nsr; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr
        class GracefulRestart; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart
        class GlobalState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState
        class InterLevelPropagationPolicies; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies
        class AfiSafis; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis
        class Timers; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers
        class Transport; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit> lsp_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState> global_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies> inter_level_propagation_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis> afi_safis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport> transport;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::SegmentRouting::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit : public ydk::Entity
{
    public:
        LspBit();
        ~LspBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OverloadBit; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit
        class AttachedBit; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit> overload_bit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit> attached_bit;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit : public ydk::Entity
{
    public:
        OverloadBit();
        ~OverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OverloadBitState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState
        class ResetTriggers; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState> overload_bit_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers> reset_triggers;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState : public ydk::Entity
{
    public:
        OverloadBitState();
        ~OverloadBitState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_bit; //type: boolean
        ydk::YLeaf set_bit_on_boot; //type: boolean
        ydk::YLeaf advertise_high_metric; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::OverloadBitState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers : public ydk::Entity
{
    public:
        ResetTriggers();
        ~ResetTriggers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ResetTrigger; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger

        ydk::YList reset_trigger;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger : public ydk::Entity
{
    public:
        ResetTrigger();
        ~ResetTrigger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reset_trigger; //type: string
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reset_trigger; //type: string
        ydk::YLeaf delay; //type: uint16

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::OverloadBit::ResetTriggers::ResetTrigger::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit : public ydk::Entity
{
    public:
        AttachedBit();
        ~AttachedBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_bit; //type: boolean
        ydk::YLeaf suppress_bit; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::LspBit::AttachedBit::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Nsr::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GracefulRestart::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState : public ydk::Entity
{
    public:
        GlobalState();
        ~GlobalState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authentication_check; //type: boolean
        ydk::YLeaf instance; //type: string
        ydk::YLeaf level_capability; //type: OpenconfigIsisTypesLevelTypeEnum
        ydk::YLeaf max_ecmp_paths; //type: uint8
        ydk::YLeaf iid_tlv; //type: boolean
        ydk::YLeaf fast_flooding; //type: boolean
        ydk::YLeafList net; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::GlobalState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies : public ydk::Entity
{
    public:
        InterLevelPropagationPolicies();
        ~InterLevelPropagationPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level1ToLevel2; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2
        class Level2ToLevel1; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2> level1_to_level2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1> level2_to_level1;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2 : public ydk::Entity
{
    public:
        Level1ToLevel2();
        ~Level1ToLevel2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList import_policy; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level1ToLevel2::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1 : public ydk::Entity
{
    public:
        Level2ToLevel1();
        ~Level2ToLevel1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList import_policy; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::InterLevelPropagationPolicies::Level2ToLevel1::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis : public ydk::Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfiSafi; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi

        ydk::YList afi_safi;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_name; //type: string
        ydk::YLeaf safi_name; //type: string
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State
        class MultiTopology; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology> multi_topology;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_name; //type: string
        ydk::YLeaf safi_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf enabled; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology : public ydk::Entity
{
    public:
        MultiTopology();
        ~MultiTopology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_name; //type: string
        ydk::YLeaf safi_name; //type: string
        ydk::YLeaf enabled; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::AfiSafis::AfiSafi::MultiTopology::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State
        class Spf; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf
        class LspGeneration; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf> spf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration> lsp_generation;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_lifetime_interval; //type: uint16
        ydk::YLeaf lsp_refresh_interval; //type: uint16

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf : public ydk::Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spf_hold_interval; //type: uint64
        ydk::YLeaf spf_first_interval; //type: uint64
        ydk::YLeaf spf_second_interval; //type: uint64
        ydk::YLeaf adaptive_timer; //type: OpenconfigIsisTypesAdaptiveTimerTypeEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::Spf::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration : public ydk::Entity
{
    public:
        LspGeneration();
        ~LspGeneration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_max_wait_interval; //type: uint64
        ydk::YLeaf lsp_first_wait_interval; //type: uint64
        ydk::YLeaf lsp_second_wait_interval; //type: uint64
        ydk::YLeaf adaptive_timer; //type: OpenconfigIsisTypesAdaptiveTimerTypeEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Timers::LspGeneration::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_mtu_size; //type: uint16

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Global::Transport::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels : public ydk::Entity
{
    public:
        Levels();
        ~Levels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level

        ydk::YList level;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_number; //type: uint32
        class RoutePreference; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference
        class LevelsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState
        class TrafficEngineering; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering
        class LevelsAuthentication; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication
        class SystemLevelCounters; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters
        class LinkStateDatabases; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference> route_preference;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState> levels_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering> traffic_engineering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication> levels_authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters> system_level_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases> link_state_databases;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference : public ydk::Entity
{
    public:
        RoutePreference();
        ~RoutePreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_route_preference; //type: uint8
        ydk::YLeaf internal_route_preference; //type: uint8

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::RoutePreference::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState : public ydk::Entity
{
    public:
        LevelsState();
        ~LevelsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level_number; //type: uint8
        ydk::YLeaf metric_style; //type: OpenconfigIsisTypesMetricStyleEnum
        ydk::YLeaf authentication_check; //type: boolean

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering : public ydk::Entity
{
    public:
        TrafficEngineering();
        ~TrafficEngineering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf ipv4_router_id; //type: string
        ydk::YLeaf ipv6_router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::TrafficEngineering::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication : public ydk::Entity
{
    public:
        LevelsAuthentication();
        ~LevelsAuthentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key> key;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_password; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LevelsAuthentication::Key::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters : public ydk::Entity
{
    public:
        SystemLevelCounters();
        ~SystemLevelCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf corrupted_lsps; //type: uint32
        ydk::YLeaf database_overloads; //type: uint32
        ydk::YLeaf exceed_max_seq_nums; //type: uint32
        ydk::YLeaf seq_num_skips; //type: uint32
        ydk::YLeaf own_lsp_purges; //type: uint32
        ydk::YLeaf id_len_mismatch; //type: uint32
        ydk::YLeaf max_area_address_mismatches; //type: uint32
        ydk::YLeaf spf_runs; //type: uint32
        ydk::YLeaf lsp_errors; //type: uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::SystemLevelCounters::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases : public ydk::Entity
{
    public:
        LinkStateDatabases();
        ~LinkStateDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkStateDatabase; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase

        ydk::YList link_state_database;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase : public ydk::Entity
{
    public:
        LinkStateDatabase();
        ~LinkStateDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        class UndefinedTlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs
        class LinkStateDatabaseState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState
        class Tlvses; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs> undefined_tlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState> link_state_database_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses> tlvses;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs : public ydk::Entity
{
    public:
        UndefinedTlvs();
        ~UndefinedTlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UndefinedTlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv

        ydk::YList undefined_tlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv : public ydk::Entity
{
    public:
        UndefinedTlv();
        ~UndefinedTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::UndefinedTlvs::UndefinedTlv::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState : public ydk::Entity
{
    public:
        LinkStateDatabaseState();
        ~LinkStateDatabaseState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_id; //type: string
        ydk::YLeaf maximum_area_addresses; //type: uint8
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf version2; //type: uint8
        ydk::YLeaf id_length; //type: uint8
        ydk::YLeaf pdu_type; //type: OpenconfigIsisLspPduTypeEnum
        ydk::YLeaf remaining_lifetime; //type: uint16
        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf checksum; //type: uint16
        ydk::YLeaf pdu_length; //type: uint16
        ydk::YLeaf is_type; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::LinkStateDatabaseState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses : public ydk::Entity
{
    public:
        Tlvses();
        ~Tlvses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs

        ydk::YList tlvs;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs : public ydk::Entity
{
    public:
        Tlvs();
        ~Tlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class AreaAddress; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress
        class Authentication; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication
        class Ipv4InterfaceAddresses; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses
        class RouterCapabilities; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities
        class MtIpv4Reachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability
        class MtIsn; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn
        class Ipv6Srlgs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs
        class TlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState
        class PurgeOi; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi
        class HostName; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName
        class Ipv6Reachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability
        class Ipv6TeRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId
        class Ipv4InternalReachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability
        class Ipv6InterfaceAddresses; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses
        class ExtendedIsReachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability
        class InstanceIds; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds
        class Ipv4Srlgs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs
        class IsReachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability
        class Ipv4TeRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId
        class Nlpid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid
        class ExtendedIpv4Reachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability
        class MultiTopology; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology
        class Ipv4ExternalReachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability
        class MtIpv6Reachability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress> area_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses> ipv4_interface_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities> router_capabilities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability> mt_ipv4_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIsn> mt_isn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Srlgs> ipv6_srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::TlvsState> tlvs_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::PurgeOi> purge_oi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::HostName> host_name;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6Reachability> ipv6_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6TeRouterId> ipv6_te_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InternalReachability> ipv4_internal_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv6InterfaceAddresses> ipv6_interface_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIsReachability> extended_is_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::InstanceIds> instance_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4Srlgs> ipv4_srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::IsReachability> is_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4TeRouterId> ipv4_te_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Nlpid> nlpid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::ExtendedIpv4Reachability> extended_ipv4_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MultiTopology> multi_topology;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4ExternalReachability> ipv4_external_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv6Reachability> mt_ipv6_reachability;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress : public ydk::Entity
{
    public:
        AreaAddress();
        ~AreaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList area_address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::AreaAddress::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crypto_type; //type: OpenconfigIsisLspCryptoTypeEnum
        ydk::YLeaf authentication_key; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Authentication::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses : public ydk::Entity
{
    public:
        Ipv4InterfaceAddresses();
        ~Ipv4InterfaceAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList ipv4_interface_address; //type: list of  string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::Ipv4InterfaceAddresses::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities : public ydk::Entity
{
    public:
        RouterCapabilities();
        ~RouterCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouterCapability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability

        ydk::YList router_capability;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability : public ydk::Entity
{
    public:
        RouterCapability();
        ~RouterCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_number; //type: uint32
        class RouterCapabilitiesState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState
        class UndefinedSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs
        class Subtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState> router_capabilities_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs> undefined_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs> subtlvs;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState : public ydk::Entity
{
    public:
        RouterCapabilitiesState();
        ~RouterCapabilitiesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_number; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspRouterCapabilityStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::RouterCapabilitiesState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs : public ydk::Entity
{
    public:
        UndefinedSubtlvs();
        ~UndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UndefinedSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv

        ydk::YList undefined_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv : public ydk::Entity
{
    public:
        UndefinedSubtlv();
        ~UndefinedSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::UndefinedSubtlvs::UndefinedSubtlv::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs : public ydk::Entity
{
    public:
        Subtlvs();
        ~Subtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Subtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv

        ydk::YList subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv : public ydk::Entity
{
    public:
        Subtlv();
        ~Subtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class SubtlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState
        class SegmentRoutingAlgorithms; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms
        class SegmentRoutingCapability; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState> subtlvs_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms> segment_routing_algorithms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability> segment_routing_capability;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState : public ydk::Entity
{
    public:
        SubtlvsState();
        ~SubtlvsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SubtlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms : public ydk::Entity
{
    public:
        SegmentRoutingAlgorithms();
        ~SegmentRoutingAlgorithms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRoutingAlgorithm; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm

        ydk::YList segment_routing_algorithm;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm : public ydk::Entity
{
    public:
        SegmentRoutingAlgorithm();
        ~SegmentRoutingAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf algorithm; //type: Algorithm
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State> state;
                class Algorithm;

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf algorithm; //type: OpenconfigIsisLspAlgorithmEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability : public ydk::Entity
{
    public:
        SegmentRoutingCapability();
        ~SegmentRoutingCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State
        class SrgbDescriptors; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors> srgb_descriptors;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspSegmentRoutingCapabilityStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors : public ydk::Entity
{
    public:
        SrgbDescriptors();
        ~SrgbDescriptors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrgbDescriptor; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor

        ydk::YList srgb_descriptor;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor : public ydk::Entity
{
    public:
        SrgbDescriptor();
        ~SrgbDescriptor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint32
        ydk::YLeaf label; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingCapability::SrgbDescriptors::SrgbDescriptor::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability : public ydk::Entity
{
    public:
        MtIpv4Reachability();
        ~MtIpv4Reachability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv4ReachabilityPrefixes; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes> mt_ipv4_reachability_prefixes;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixes();
        ~MtIpv4ReachabilityPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv4ReachabilityPrefixe; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe

        ydk::YList mt_ipv4_reachability_prefixe;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixe();
        ~MtIpv4ReachabilityPrefixe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        class MtIpv4ReachabilityPrefixesState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState
        class MtIpv4ReachabilityPrefixesUndefinedSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs
        class MtIpv4ReachabilityPrefixesSubtlvs; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState> mt_ipv4_reachability_prefixes_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs> mt_ipv4_reachability_prefixes_undefined_subtlvs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs> mt_ipv4_reachability_prefixes_subtlvs;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixesState();
        ~MtIpv4ReachabilityPrefixesState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up_down; //type: boolean
        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf mt_id; //type: uint16

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixesUndefinedSubtlvs();
        ~MtIpv4ReachabilityPrefixesUndefinedSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv4ReachabilityPrefixesUndefinedSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv

        ydk::YList mt_ipv4_reachability_prefixes_undefined_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixesUndefinedSubtlv();
        ~MtIpv4ReachabilityPrefixesUndefinedSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf length; //type: uint8
        ydk::YLeaf value_; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesUndefinedSubtlvs::MtIpv4ReachabilityPrefixesUndefinedSubtlv::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixesSubtlvs();
        ~MtIpv4ReachabilityPrefixesSubtlvs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MtIpv4ReachabilityPrefixesSubtlv; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv

        ydk::YList mt_ipv4_reachability_prefixes_subtlv;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixesSubtlv();
        ~MtIpv4ReachabilityPrefixesSubtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        class PrefixesSubtlvsTag64; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64
        class PrefixesSubtlvsTag; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag
        class MtIpv4ReachabilityPrefixesSubtlvsState; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState
        class PrefixesSubtlvsIpv4SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId
        class PrefixesSubtlvsIpv6SourceRouterId; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId
        class PrefixesSubtlvsPrefixSids; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids
        class PrefixesSubtlvsFlags; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64> prefixes_subtlvs_tag64;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag> prefixes_subtlvs_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState> mt_ipv4_reachability_prefixes_subtlvs_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId> prefixes_subtlvs_ipv4_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId> prefixes_subtlvs_ipv6_source_router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids> prefixes_subtlvs_prefix_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags> prefixes_subtlvs_flags;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64 : public ydk::Entity
{
    public:
        PrefixesSubtlvsTag64();
        ~PrefixesSubtlvsTag64();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag64; //type: list of  uint64

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag64::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag : public ydk::Entity
{
    public:
        PrefixesSubtlvsTag();
        ~PrefixesSubtlvsTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag32; //type: list of  uint32

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsTag::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState : public ydk::Entity
{
    public:
        MtIpv4ReachabilityPrefixesSubtlvsState();
        ~MtIpv4ReachabilityPrefixesSubtlvsState();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::MtIpv4ReachabilityPrefixesSubtlvsState


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId : public ydk::Entity
{
    public:
        PrefixesSubtlvsIpv4SourceRouterId();
        ~PrefixesSubtlvsIpv4SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf ipv4_source_router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv4SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId : public ydk::Entity
{
    public:
        PrefixesSubtlvsIpv6SourceRouterId();
        ~PrefixesSubtlvsIpv6SourceRouterId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeaf ipv6_source_router_id; //type: string

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsIpv6SourceRouterId::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids : public ydk::Entity
{
    public:
        PrefixesSubtlvsPrefixSids();
        ~PrefixesSubtlvsPrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixesSubtlvsPrefixSid; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid

        ydk::YList prefixes_subtlvs_prefix_sid;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid : public ydk::Entity
{
    public:
        PrefixesSubtlvsPrefixSid();
        ~PrefixesSubtlvsPrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf algorithm; //type: uint8
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspPrefixSidStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsPrefixSids::PrefixesSubtlvsPrefixSid::State


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags : public ydk::Entity
{
    public:
        PrefixesSubtlvsFlags();
        ~PrefixesSubtlvsFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_oper::OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State> state;
        
}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags


class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: string
        ydk::YLeafList flags; //type: list of  OpenconfigIsisLspFlagsStateFlagsEnum

}; // OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::MtIpv4Reachability::MtIpv4ReachabilityPrefixes::MtIpv4ReachabilityPrefixe::MtIpv4ReachabilityPrefixesSubtlvs::MtIpv4ReachabilityPrefixesSubtlv::PrefixesSubtlvsFlags::State

class IsisSubAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};

class IsisIfAfFwdAddrUnknownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_cfg_passive;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_proto_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_next_hop_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_no_link_local_add;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_vrf_enabled;
        static const ydk::Enum::YLeaf isis_intf_af_fwd_addr_unknown_internal_error;

};

class IsisUloopEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_u_loop_event_none;
        static const ydk::Enum::YLeaf isis_u_loop_event_link_down;
        static const ydk::Enum::YLeaf isis_u_loop_event_link_up;
        static const ydk::Enum::YLeaf isis_u_loop_event_ol_bit_set;
        static const ydk::Enum::YLeaf isis_u_loop_event_ol_bit_unset;

};

class SrmsMiSrcEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class IsisLspDbOp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_lsp_db_clear;
        static const ydk::Enum::YLeaf isis_lsp_db_insert_new_lsp;
        static const ydk::Enum::YLeaf isis_lsp_db_replace_lsp_with_lsp;
        static const ydk::Enum::YLeaf isis_lsp_db_purge_lsp;
        static const ydk::Enum::YLeaf isis_lsp_db_delete_lsp;

};

class OpenconfigIsisLspRouterCapabilityStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flood;
        static const ydk::Enum::YLeaf down;

};

class IsisStartupStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_startup_ssm_active;
        static const ydk::Enum::YLeaf isis_startup_ssm_complete;
        static const ydk::Enum::YLeaf isis_startup_ssm_aborted;
        static const ydk::Enum::YLeaf isis_startup_ssm_not_run;

};

class IsisUp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_down;
        static const ydk::Enum::YLeaf isis_up;

};

class IsisErrLogLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_err_log_level_info;
        static const ydk::Enum::YLeaf isis_err_log_level_warn;
        static const ydk::Enum::YLeaf isis_err_log_level_critical;

};

class OpenconfigIsisTypesHelloPaddingTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf disable;

};

class IsisIfTopoAdjFormDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_intf_passive;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_af_fwd_addr_unknown;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_topo_not_cfg;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_topo_can_not_participate;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_idle;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_internal_error;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_mtu;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_snpa;
        static const ydk::Enum::YLeaf isis_intf_topo_adj_form_disabled_mcast;

};

class IsisTilfaComputation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_tilfa_comp_none;
        static const ydk::Enum::YLeaf isis_tilfa_comp_link;
        static const ydk::Enum::YLeaf isis_tilfa_comp_node;
        static const ydk::Enum::YLeaf isis_tilfa_comp_srlg;
        static const ydk::Enum::YLeaf isis_tilfa_comp_node_srlg;

};

class IsisAdjStateReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_up_nsf_restart;
        static const ydk::Enum::YLeaf isis_adj_up_new_adj;
        static const ydk::Enum::YLeaf isis_adj_up_restarted;
        static const ydk::Enum::YLeaf isis_adj_up_nsf_restored;
        static const ydk::Enum::YLeaf isis_adj_up_chkpt_restored;
        static const ydk::Enum::YLeaf isis_adj_init_reason;
        static const ydk::Enum::YLeaf isis_adj_init_neighbor_forgot;
        static const ydk::Enum::YLeaf isis_adj_down_hold_time;
        static const ydk::Enum::YLeaf isis_adj_down_if_down;
        static const ydk::Enum::YLeaf isis_adj_down_cfg_mismatch;
        static const ydk::Enum::YLeaf isis_adj_down_circ_id;
        static const ydk::Enum::YLeaf isis_adj_down_nsf_ack_fail;
        static const ydk::Enum::YLeaf isis_adj_down_db_clear;
        static const ydk::Enum::YLeaf isis_adj_down_no_common_topology;
        static const ydk::Enum::YLeaf isis_adj_down_restart_tlv_missing;
        static const ydk::Enum::YLeaf isis_adj_down_bfd_down;
        static const ydk::Enum::YLeaf isis_adj_down_3way_down;

};

class SrmsMiAfEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class IsisAdjBfdState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_bfd_no_state;
        static const ydk::Enum::YLeaf isis_adj_bfd_down_state;
        static const ydk::Enum::YLeaf isis_adj_bfd_init_state;
        static const ydk::Enum::YLeaf isis_adj_bfd_up_state;

};

class IsisRedistProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_redist_connected;
        static const ydk::Enum::YLeaf isis_redist_static;
        static const ydk::Enum::YLeaf isis_redist_ospf;
        static const ydk::Enum::YLeaf isis_redist_bgp;
        static const ydk::Enum::YLeaf isis_redist_isis;
        static const ydk::Enum::YLeaf isis_redist_ospfv3;
        static const ydk::Enum::YLeaf isis_redist_rip;
        static const ydk::Enum::YLeaf isis_redist_eigrp;
        static const ydk::Enum::YLeaf isis_redist_subscriber;
        static const ydk::Enum::YLeaf isis_redist_application;
        static const ydk::Enum::YLeaf isis_redist_mobile;

};

class IsisShRouteAdvOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_interface;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_redistributed;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_native;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_summary;
        static const ydk::Enum::YLeaf isis_sh_route_adv_origin_default;

};

class IsisEnabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_disabled;
        static const ydk::Enum::YLeaf isis_enabled;

};

class IsisLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_level0;
        static const ydk::Enum::YLeaf isis_level1;
        static const ydk::Enum::YLeaf isis_level2;

};

class IsisFrrTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_down_stream;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_lc_disjoint;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_low_est_backup_metric;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_node_protecting;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_primary_path;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_secondary_path;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_srlg_disjoint;
        static const ydk::Enum::YLeaf isis_frr_tiebreaker_default;

};

class OpenconfigIsisLspIpv6SrlgStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf na;

};

class IsisFrr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_frr_type_none;
        static const ydk::Enum::YLeaf isis_frr_type_per_link;
        static const ydk::Enum::YLeaf isis_frr_type_per_prefix;
        static const ydk::Enum::YLeaf isis_frr_type_sr_u_loop;

};

class IsisIfDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_disabled_no_net_cfg;
        static const ydk::Enum::YLeaf isis_intf_disabled_area_missing;
        static const ydk::Enum::YLeaf isis_intf_disabled_no_area_running;
        static const ydk::Enum::YLeaf isis_intf_disabled_no_topos_cfg;
        static const ydk::Enum::YLeaf isis_intf_disabled_no_imd_conn;
        static const ydk::Enum::YLeaf isis_intf_disabled_imd_reg_error;
        static const ydk::Enum::YLeaf isis_intf_disabled_level_mismatch;
        static const ydk::Enum::YLeaf isis_intf_disabled_base_caps_error;
        static const ydk::Enum::YLeaf isis_intf_disabled_intf_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_disabled_intf_shutdown;
        static const ydk::Enum::YLeaf isis_intf_disabled_internal_error;

};

class IsisShTeLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_sh_te_link_p2p;
        static const ydk::Enum::YLeaf isis_sh_te_link_broadcast;

};

class IsisMediaClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_media_class_lan;
        static const ydk::Enum::YLeaf isis_media_class_p2p;
        static const ydk::Enum::YLeaf isis_media_class_loop_back;

};

class OpenconfigIsisTypesAdaptiveTimerTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf linear;
        static const ydk::Enum::YLeaf exponential;

};

class IsisIfMcastInvalidReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_mcast_invalid_join_error;
        static const ydk::Enum::YLeaf isis_intf_mcast_invalid_internal_error;
        static const ydk::Enum::YLeaf isis_intf_mcast_invalid_not_yet_needed;

};

class IsisIfTopoAdvPrefixDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_intf_suppressed;
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_af_prefixes_unknown;
        static const ydk::Enum::YLeaf isis_intf_topo_adv_prefix_disabled_internal_error;

};

class IsisAdjState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_up_state;
        static const ydk::Enum::YLeaf isis_adj_init_state;
        static const ydk::Enum::YLeaf isis_adj_failed_state;

};

class OpenconfigIsisLspNlpidEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class IsisIfClnsProtoDownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_add_to_intf_stack_fail;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_no_imd_conn;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_imd_node_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_imd_exist_reg_error;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_imd_state_reg_error;
        static const ydk::Enum::YLeaf isis_intf_clns_proto_down_clns_not_up;

};

class SrmsMiFlagEB : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class IsisAdjTopoStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_topo_status_ok;
        static const ydk::Enum::YLeaf isis_adj_topo_status_intf_not_configured;
        static const ydk::Enum::YLeaf isis_adj_topo_status_intf_not_running;
        static const ydk::Enum::YLeaf isis_adj_topo_status_init_state;
        static const ydk::Enum::YLeaf isis_adj_topo_status_neighbor_doesnt_participate;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_tlv_missing;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_tlv_empty;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_tlv_missing;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_tlv_empty;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_matches_ours;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_matches_ours;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv4_address_subnet_mismatch;
        static const ydk::Enum::YLeaf isis_adj_topo_status_ipv6_address_not_link_local;

};

class OpenconfigIsisLspLanAdjacencySidStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address_family;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf value_;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf set;

};

class IsisIfTopoDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_topo_disabled_not_cfg;
        static const ydk::Enum::YLeaf isis_intf_topo_disabled_internal_error;

};

class IsisIfAdjFormDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_cfg_passive;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_no_topo_participate;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_add_to_intf_stack_fail;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_clns_io;
        static const ydk::Enum::YLeaf isis_intf_adj_form_disabled_internal_error;

};

class IsisEdmLabelTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_edm_label_alloc_prefix_sid;
        static const ydk::Enum::YLeaf isis_edm_label_alloc_local_sid;
        static const ydk::Enum::YLeaf isis_edm_label_alloc_max;

};

class OpenconfigIsisLspIsisMetricFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf unsupported;

};

class OpenconfigSegmentRoutingLabelOptionsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_php;
        static const ydk::Enum::YLeaf explicit_null;

};

class IsisLevels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_levels_none;
        static const ydk::Enum::YLeaf isis_levels_1;
        static const ydk::Enum::YLeaf isis_levels_2;
        static const ydk::Enum::YLeaf isis_levels_12;
        static const ydk::Enum::YLeaf isis_levels_total;

};

class OpenconfigIsisTypesCircuitTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf broadcast;

};

class OpenconfigIsisLspCryptoTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hmac_md5;
        static const ydk::Enum::YLeaf cleartext;

};

class IsisIfAfDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_disabled_no_topo_enabled;
        static const ydk::Enum::YLeaf isis_intf_af_disabled_internal_error;

};

class OpenconfigIsisLspStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf numbered;

};

class OpenconfigIsisTypesMetricStyleEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf narrow_metric;
        static const ydk::Enum::YLeaf wide_metric;

};

class IsisNsfFlavor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_nsf_flav_or_none;
        static const ydk::Enum::YLeaf isis_nsf_flav_or_cisco;
        static const ydk::Enum::YLeaf isis_nsf_flav_or_ietf;
        static const ydk::Enum::YLeaf isis_nsf_flav_or_nsr;

};

class IsisAdjTopoChange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_adj_topo_up_change;
        static const ydk::Enum::YLeaf isis_adj_topo_next_hop_change;
        static const ydk::Enum::YLeaf isis_adj_topo_down_change;

};

class IsisShTePceFloodingScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf area;
        static const ydk::Enum::YLeaf domain;

};

class OpenconfigIsisLspAlgorithmEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spf;
        static const ydk::Enum::YLeaf strict_spf;

};

class IsisPrefixPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_prefix_priority_critical;
        static const ydk::Enum::YLeaf isis_prefix_priority_high;
        static const ydk::Enum::YLeaf isis_prefix_priority_med;
        static const ydk::Enum::YLeaf isis_prefix_priority_low;

};

class OpenconfigIsisLspFlagsStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external_flag;
        static const ydk::Enum::YLeaf readvertisement_flag;
        static const ydk::Enum::YLeaf node_flag;

};

class IsisAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class IsisKnown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_unknown;
        static const ydk::Enum::YLeaf isis_known;

};

class OpenconfigIsisLspAdjacencySidStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address_family;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf value_;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf set;

};

class OpenconfigIsisLspPrefixSidStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf readvertisement;
        static const ydk::Enum::YLeaf node;
        static const ydk::Enum::YLeaf php;
        static const ydk::Enum::YLeaf explicit_null;
        static const ydk::Enum::YLeaf value_;
        static const ydk::Enum::YLeaf local;

};

class OpenconfigIsisLspFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf partition_repair;
        static const ydk::Enum::YLeaf attached_error;
        static const ydk::Enum::YLeaf attached_expense;
        static const ydk::Enum::YLeaf attached_delay;
        static const ydk::Enum::YLeaf attached_default;
        static const ydk::Enum::YLeaf overload;

};

class IsisValid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_invalid;
        static const ydk::Enum::YLeaf isis_valid;

};

class IsisIfClnsMtuInvalidReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_clns_mtu_invalid_too_small;
        static const ydk::Enum::YLeaf isis_intf_clns_mtu_invalid_internal_error;

};

class OpenconfigIsisLspDefaultMetricStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;

};

class OpenconfigIsisAdjacencyStateNlpidEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class IsisIfAfProtoDownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_conn_fail;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_node_doesnt_exist;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_exist_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_imd_state_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_af_not_up;
        static const ydk::Enum::YLeaf isis_intf_af_proto_down_internal_error;

};

class IsisMetricMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_metric_mode_fixed;
        static const ydk::Enum::YLeaf isis_metric_mode_relative;
        static const ydk::Enum::YLeaf isis_metric_mode_absolute;

};

class OpenconfigIsisLspSegmentRoutingCapabilityStateFlagsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_mpls;
        static const ydk::Enum::YLeaf ipv6_mpls;
        static const ydk::Enum::YLeaf ipv6_sr;

};

class IsisMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_metric_style_narrow;
        static const ydk::Enum::YLeaf isis_metric_style_wide;
        static const ydk::Enum::YLeaf isis_metric_style_transition;
        static const ydk::Enum::YLeaf isis_metric_style_narrow_transition;
        static const ydk::Enum::YLeaf isis_metric_style_wide_transition;

};

class IsisIfAdvPrefixDisabledReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_adv_prefix_disabled_if_cfg_suppressed;
        static const ydk::Enum::YLeaf isis_intf_adv_prefix_disabled_no_topo_participate;
        static const ydk::Enum::YLeaf isis_intf_adv_prefix_disabled_internal_error;

};

class OpenconfigIsisTypesLevelTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level12;

};

class IsisIfAfPrefixUnknownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_af_prefix_unknown_adv_suppressed;
        static const ydk::Enum::YLeaf isis_intf_af_prefix_unknown_global_addr_reg_error;
        static const ydk::Enum::YLeaf isis_intf_af_prefix_unknown_internal_error;

};

class IsisSpfClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_spf_frr_sr_u_loop;
        static const ydk::Enum::YLeaf isis_spf_frr_per_link;
        static const ydk::Enum::YLeaf isis_spf_partial;
        static const ydk::Enum::YLeaf isis_spf_frr_per_prefix;
        static const ydk::Enum::YLeaf isis_spf_ucmp_calc;
        static const ydk::Enum::YLeaf isis_spf_flex;
        static const ydk::Enum::YLeaf isis_spf_next_hop;
        static const ydk::Enum::YLeaf isis_spf_incremental;
        static const ydk::Enum::YLeaf isis_spf_full;

};

class IsisSpfTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_spf_trig_config;
        static const ydk::Enum::YLeaf isis_spf_trig_nsr_fo;
        static const ydk::Enum::YLeaf isis_spf_trig_periodic;
        static const ydk::Enum::YLeaf isis_spf_trig_clear;
        static const ydk::Enum::YLeaf isis_spf_trig_newadj;
        static const ydk::Enum::YLeaf isis_spf_trig_deladj;
        static const ydk::Enum::YLeaf isis_spf_trig_next_hop;
        static const ydk::Enum::YLeaf isis_spf_trig_metric;
        static const ydk::Enum::YLeaf isis_spf_trig_dis;
        static const ydk::Enum::YLeaf isis_spf_trig_frr_per_link;
        static const ydk::Enum::YLeaf isis_spf_trig_frr_per_prefix;
        static const ydk::Enum::YLeaf isis_spf_trig_ucmp;
        static const ydk::Enum::YLeaf isis_spf_trig_new_tunnel;
        static const ydk::Enum::YLeaf isis_spf_trig_del_tunnel;
        static const ydk::Enum::YLeaf isis_spf_trig_chg_tunnel;
        static const ydk::Enum::YLeaf isis_spf_trig_new_node;
        static const ydk::Enum::YLeaf isis_spf_trig_del_node;
        static const ydk::Enum::YLeaf isis_spf_trig_newlsp;
        static const ydk::Enum::YLeaf isis_spf_trig_lsp_expiry;
        static const ydk::Enum::YLeaf isis_spf_trig_attach_set;
        static const ydk::Enum::YLeaf isis_spf_trig_attach_clr;
        static const ydk::Enum::YLeaf isis_spf_trig_overload_set;
        static const ydk::Enum::YLeaf isis_spf_trig_overload_clr;
        static const ydk::Enum::YLeaf isis_spf_trig_link_good;
        static const ydk::Enum::YLeaf isis_spf_trig_link_bad;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix_good;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix_bad;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix;
        static const ydk::Enum::YLeaf isis_spf_trig_area_addr;
        static const ydk::Enum::YLeaf isis_spf_trig_ip_addr;
        static const ydk::Enum::YLeaf isis_spf_trig_rtrid;
        static const ydk::Enum::YLeaf isis_spf_trig_flex_algo;
        static const ydk::Enum::YLeaf isis_spf_trig_prefix_policy;

};

class IsisIfClnsSnpaUnknownReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_intf_clns_snpa_unknown_access_error;
        static const ydk::Enum::YLeaf isis_intf_clns_snpa_unknown_not_lan;
        static const ydk::Enum::YLeaf isis_intf_clns_snpa_unknown_internal_error;

};

class OpenconfigIsisTypesIsisInterfaceAdjStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf failed;

};

class IsisReachable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_unreachable;
        static const ydk::Enum::YLeaf isis_reachable;

};

class IsisLspTrigger : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_lsp_trig_config;
        static const ydk::Enum::YLeaf isis_lsp_trig_newadj;
        static const ydk::Enum::YLeaf isis_lsp_trig_deladj;
        static const ydk::Enum::YLeaf isis_lsp_trig_dr_change;
        static const ydk::Enum::YLeaf isis_lsp_trig_area_set;
        static const ydk::Enum::YLeaf isis_lsp_trig_attach;
        static const ydk::Enum::YLeaf isis_lsp_trig_hippity;
        static const ydk::Enum::YLeaf isis_lsp_trig_regen;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_if_up;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_if_down;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_inter_area;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_external;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_external_full;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_def_orig;
        static const ydk::Enum::YLeaf isis_lsp_trig_ip_addr_chg;
        static const ydk::Enum::YLeaf isis_lsp_trig_te_info;
        static const ydk::Enum::YLeaf isis_lsp_trig_te_pce_info;
        static const ydk::Enum::YLeaf isis_lsp_trig_te_fa_info;
        static const ydk::Enum::YLeaf isis_lsp_trig_nsr_fo;
        static const ydk::Enum::YLeaf isis_lsp_trig_pn_cancel;
        static const ydk::Enum::YLeaf isis_lsp_trig_lkgp;
        static const ydk::Enum::YLeaf isis_lsp_trig_pp;
        static const ydk::Enum::YLeaf isis_lsp_trig_config_force_send;
        static const ydk::Enum::YLeaf isis_lsp_trig_config_force_init;
        static const ydk::Enum::YLeaf isis_lsp_trig_adj_sid_add;
        static const ydk::Enum::YLeaf isis_lsp_trig_adj_sid_delete;
        static const ydk::Enum::YLeaf isis_lsp_trig_adj_sid_change;
        static const ydk::Enum::YLeaf isis_lsp_trig_msd;
        static const ydk::Enum::YLeaf isis_lsp_trig_adj_sid_wait_timer;
        static const ydk::Enum::YLeaf isis_lsp_trig_direct_gen;
        static const ydk::Enum::YLeaf isis_lsp_trig_flex_algo_enable_disable;
        static const ydk::Enum::YLeaf isis_lsp_trig_pm_delay_loss;
        static const ydk::Enum::YLeaf isis_lsp_trig_pm_bw_util;

};

class IsisUloopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_none;
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_all;
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_protected;
        static const ydk::Enum::YLeaf isis_u_loop_avoidance_type_sr;

};

class Srv6EndFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf end;
        static const ydk::Enum::YLeaf end_with_psp;
        static const ydk::Enum::YLeaf end_with_usp;
        static const ydk::Enum::YLeaf end_with_psp_usp;
        static const ydk::Enum::YLeaf end_x;
        static const ydk::Enum::YLeaf end_x_with_psp;
        static const ydk::Enum::YLeaf end_x_with_usp;
        static const ydk::Enum::YLeaf end_x_with_psp_usp;
        static const ydk::Enum::YLeaf end_tn;
        static const ydk::Enum::YLeaf end_t_with_psp;
        static const ydk::Enum::YLeaf end_t_with_usp;
        static const ydk::Enum::YLeaf end_t_with_psp_usp;
        static const ydk::Enum::YLeaf end_b6;
        static const ydk::Enum::YLeaf end_b6_encaps;
        static const ydk::Enum::YLeaf end_bm;
        static const ydk::Enum::YLeaf end_dx6;
        static const ydk::Enum::YLeaf end_dx4;
        static const ydk::Enum::YLeaf end_dt6;
        static const ydk::Enum::YLeaf end_dt4;
        static const ydk::Enum::YLeaf end_dt46;
        static const ydk::Enum::YLeaf end_dx2;
        static const ydk::Enum::YLeaf end_dx2v;
        static const ydk::Enum::YLeaf end_dx2u;
        static const ydk::Enum::YLeaf end_dx2m;
        static const ydk::Enum::YLeaf end_otp;
        static const ydk::Enum::YLeaf end_s;

};

class IsisPrefixOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis_prefix_origin_l1_summary_null;
        static const ydk::Enum::YLeaf isis_prefix_origin_l1;
        static const ydk::Enum::YLeaf isis_prefix_origin_l2_summary_null;
        static const ydk::Enum::YLeaf isis_prefix_origin_l2;
        static const ydk::Enum::YLeaf isis_prefix_origin_inter_area_summary_null;
        static const ydk::Enum::YLeaf isis_prefix_origin_inter_area;
        static const ydk::Enum::YLeaf isis_prefix_origin_default_nearest_attached;

};

class OpenconfigIsisLspAttributesEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf overload;
        static const ydk::Enum::YLeaf attached;

};

class OpenconfigIsisLspPduTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;

};

class OcniIsis::NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabases::LinkStateDatabase::Tlvses::Tlvs::RouterCapabilities::RouterCapability::Subtlvs::Subtlv::SegmentRoutingAlgorithms::SegmentRoutingAlgorithm::Algorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spf;
        static const ydk::Enum::YLeaf strict_spf;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_0_ */

