#ifndef _CISCO_IOS_XR_IPV4_OSPF_ACT_
#define _CISCO_IOS_XR_IPV4_OSPF_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_act {

class ActOspfRoutesRpc : public Entity
{
    public:
        ActOspfRoutesRpc();
        ~ActOspfRoutesRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ActOspfRoutesRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfRoutesRpc::Input> input;
        
}; // ActOspfRoutesRpc


class ActOspfRoutesRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route; //type: empty
        class Instance; //type: ActOspfRoutesRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfRoutesRpc::Input::Instance> instance;
        
}; // ActOspfRoutesRpc::Input


class ActOspfRoutesRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ActOspfRoutesRpc::Input::Instance

class ActOspfRedistributionRpc : public Entity
{
    public:
        ActOspfRedistributionRpc();
        ~ActOspfRedistributionRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ActOspfRedistributionRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfRedistributionRpc::Input> input;
        
}; // ActOspfRedistributionRpc


class ActOspfRedistributionRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf redistribution; //type: empty
        class Instance; //type: ActOspfRedistributionRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfRedistributionRpc::Input::Instance> instance;
        
}; // ActOspfRedistributionRpc::Input


class ActOspfRedistributionRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ActOspfRedistributionRpc::Input::Instance

class ActOspfStatisticsRpc : public Entity
{
    public:
        ActOspfStatisticsRpc();
        ~ActOspfStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ActOspfStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsRpc::Input> input;
        
}; // ActOspfStatisticsRpc


class ActOspfStatisticsRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf message_queue; //type: empty
        YLeaf spf; //type: empty
        YLeaf neighbor; //type: empty
        YLeaf interface_name; //type: empty
        class Instance; //type: ActOspfStatisticsRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsRpc::Input::Instance> instance;
        
}; // ActOspfStatisticsRpc::Input


class ActOspfStatisticsRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ActOspfStatisticsRpc::Input::Instance

class ActOspfStatisticsNeighborRpc : public Entity
{
    public:
        ActOspfStatisticsNeighborRpc();
        ~ActOspfStatisticsNeighborRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ActOspfStatisticsNeighborRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsNeighborRpc::Input> input;
        
}; // ActOspfStatisticsNeighborRpc


class ActOspfStatisticsNeighborRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Instance; //type: ActOspfStatisticsNeighborRpc::Input::Instance
        class Neighbor; //type: ActOspfStatisticsNeighborRpc::Input::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsNeighborRpc::Input::Instance> instance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsNeighborRpc::Input::Neighbor> neighbor;
        
}; // ActOspfStatisticsNeighborRpc::Input


class ActOspfStatisticsNeighborRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ActOspfStatisticsNeighborRpc::Input::Instance


class ActOspfStatisticsNeighborRpc::Input::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_id; //type: string
        YLeaf interface_name; //type: string

}; // ActOspfStatisticsNeighborRpc::Input::Neighbor

class ActOspfStatisticsInterfaceRpc : public Entity
{
    public:
        ActOspfStatisticsInterfaceRpc();
        ~ActOspfStatisticsInterfaceRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ActOspfStatisticsInterfaceRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsInterfaceRpc::Input> input;
        
}; // ActOspfStatisticsInterfaceRpc


class ActOspfStatisticsInterfaceRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Instance; //type: ActOspfStatisticsInterfaceRpc::Input::Instance
        class Interface; //type: ActOspfStatisticsInterfaceRpc::Input::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsInterfaceRpc::Input::Instance> instance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsInterfaceRpc::Input::Interface> interface;
        
}; // ActOspfStatisticsInterfaceRpc::Input


class ActOspfStatisticsInterfaceRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ActOspfStatisticsInterfaceRpc::Input::Instance


class ActOspfStatisticsInterfaceRpc::Input::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ActOspfStatisticsInterfaceRpc::Input::Interface

class ActOspfProcessRpc : public Entity
{
    public:
        ActOspfProcessRpc();
        ~ActOspfProcessRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ActOspfProcessRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfProcessRpc::Input> input;
        
}; // ActOspfProcessRpc


class ActOspfProcessRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process; //type: empty
        class Instance; //type: ActOspfProcessRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfProcessRpc::Input::Instance> instance;
        
}; // ActOspfProcessRpc::Input


class ActOspfProcessRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ActOspfProcessRpc::Input::Instance

class ActOspfInstanceVrfRpc : public Entity
{
    public:
        ActOspfInstanceVrfRpc();
        ~ActOspfInstanceVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ActOspfInstanceVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input> input;
        
}; // ActOspfInstanceVrfRpc


class ActOspfInstanceVrfRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Instance; //type: ActOspfInstanceVrfRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance> instance;
        
}; // ActOspfInstanceVrfRpc::Input


class ActOspfInstanceVrfRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string
        class Vrf; //type: ActOspfInstanceVrfRpc::Input::Instance::Vrf
        class All; //type: ActOspfInstanceVrfRpc::Input::Instance::All
        class AllInclusive; //type: ActOspfInstanceVrfRpc::Input::Instance::AllInclusive

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::All> all;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::AllInclusive> all_inclusive;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::Vrf> vrf;
        
}; // ActOspfInstanceVrfRpc::Input::Instance


class ActOspfInstanceVrfRpc::Input::Instance::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf process; //type: empty
        YLeaf redistribution; //type: empty
        YLeaf route; //type: empty
        class Stats; //type: ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats> stats;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::Vrf


class ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spf; //type: empty
        YLeaf message_queue; //type: empty
        class Interface; //type: ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface
        class Neighbor; //type: ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor> neighbor;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats


class ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Interface


class ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_id; //type: string
        class Interface; //type: ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface> interface;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor


class ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ActOspfInstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface


class ActOspfInstanceVrfRpc::Input::Instance::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process; //type: empty
        YLeaf redistribution; //type: empty
        YLeaf route; //type: empty
        class Stats; //type: ActOspfInstanceVrfRpc::Input::Instance::All::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::All::Stats> stats;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::All


class ActOspfInstanceVrfRpc::Input::Instance::All::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spf; //type: empty
        YLeaf message_queue; //type: empty
        class Interface; //type: ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface
        class Neighbor; //type: ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor> neighbor;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::All::Stats


class ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Interface


class ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_id; //type: string
        class Interface; //type: ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface> interface;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor


class ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ActOspfInstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface


class ActOspfInstanceVrfRpc::Input::Instance::AllInclusive : public Entity
{
    public:
        AllInclusive();
        ~AllInclusive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process; //type: empty
        YLeaf redistribution; //type: empty
        YLeaf route; //type: empty
        class Stats; //type: ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats> stats;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::AllInclusive


class ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spf; //type: empty
        YLeaf message_queue; //type: empty
        class Interface; //type: ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface
        class Neighbor; //type: ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor> neighbor;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats


class ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Interface


class ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_id; //type: string
        class Interface; //type: ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface> interface;
        
}; // ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor


class ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ActOspfInstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_ACT_ */

