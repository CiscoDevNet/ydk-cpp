#ifndef _CISCO_IOS_XR_IPV6_OSPFV3_ACT_
#define _CISCO_IOS_XR_IPV6_OSPFV3_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_act {

class ActOspfv3RoutesRpc : public Entity
{
    public:
        ActOspfv3RoutesRpc();
        ~ActOspfv3RoutesRpc();

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

        class Input; //type: ActOspfv3RoutesRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3RoutesRpc::Input> input;
        
}; // ActOspfv3RoutesRpc


class ActOspfv3RoutesRpc::Input : public Entity
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
        class Instance; //type: ActOspfv3RoutesRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3RoutesRpc::Input::Instance> instance;
        
}; // ActOspfv3RoutesRpc::Input


class ActOspfv3RoutesRpc::Input::Instance : public Entity
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

}; // ActOspfv3RoutesRpc::Input::Instance

class ActOspfv3RedistributionRpc : public Entity
{
    public:
        ActOspfv3RedistributionRpc();
        ~ActOspfv3RedistributionRpc();

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

        class Input; //type: ActOspfv3RedistributionRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3RedistributionRpc::Input> input;
        
}; // ActOspfv3RedistributionRpc


class ActOspfv3RedistributionRpc::Input : public Entity
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
        class Instance; //type: ActOspfv3RedistributionRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3RedistributionRpc::Input::Instance> instance;
        
}; // ActOspfv3RedistributionRpc::Input


class ActOspfv3RedistributionRpc::Input::Instance : public Entity
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

}; // ActOspfv3RedistributionRpc::Input::Instance

class ActOspfv3ProcessRpc : public Entity
{
    public:
        ActOspfv3ProcessRpc();
        ~ActOspfv3ProcessRpc();

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

        class Input; //type: ActOspfv3ProcessRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3ProcessRpc::Input> input;
        
}; // ActOspfv3ProcessRpc


class ActOspfv3ProcessRpc::Input : public Entity
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
        class Instance; //type: ActOspfv3ProcessRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3ProcessRpc::Input::Instance> instance;
        
}; // ActOspfv3ProcessRpc::Input


class ActOspfv3ProcessRpc::Input::Instance : public Entity
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

}; // ActOspfv3ProcessRpc::Input::Instance

class ActOspfv3StatisticsNeighborRpc : public Entity
{
    public:
        ActOspfv3StatisticsNeighborRpc();
        ~ActOspfv3StatisticsNeighborRpc();

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

        class Input; //type: ActOspfv3StatisticsNeighborRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3StatisticsNeighborRpc::Input> input;
        
}; // ActOspfv3StatisticsNeighborRpc


class ActOspfv3StatisticsNeighborRpc::Input : public Entity
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

        class Instance; //type: ActOspfv3StatisticsNeighborRpc::Input::Instance
        class Neighbor; //type: ActOspfv3StatisticsNeighborRpc::Input::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3StatisticsNeighborRpc::Input::Instance> instance;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3StatisticsNeighborRpc::Input::Neighbor> neighbor;
        
}; // ActOspfv3StatisticsNeighborRpc::Input


class ActOspfv3StatisticsNeighborRpc::Input::Instance : public Entity
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

}; // ActOspfv3StatisticsNeighborRpc::Input::Instance


class ActOspfv3StatisticsNeighborRpc::Input::Neighbor : public Entity
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

}; // ActOspfv3StatisticsNeighborRpc::Input::Neighbor

class ActOspfv3StatisticsRpc : public Entity
{
    public:
        ActOspfv3StatisticsRpc();
        ~ActOspfv3StatisticsRpc();

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

        class Input; //type: ActOspfv3StatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3StatisticsRpc::Input> input;
        
}; // ActOspfv3StatisticsRpc


class ActOspfv3StatisticsRpc::Input : public Entity
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

        YLeaf prefix_priority; //type: empty
        YLeaf spf; //type: empty
        YLeaf neighbor; //type: empty
        class Instance; //type: ActOspfv3StatisticsRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3StatisticsRpc::Input::Instance> instance;
        
}; // ActOspfv3StatisticsRpc::Input


class ActOspfv3StatisticsRpc::Input::Instance : public Entity
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

}; // ActOspfv3StatisticsRpc::Input::Instance

class ActOspfv3InstanceVrfRpc : public Entity
{
    public:
        ActOspfv3InstanceVrfRpc();
        ~ActOspfv3InstanceVrfRpc();

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

        class Input; //type: ActOspfv3InstanceVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input> input;
        
}; // ActOspfv3InstanceVrfRpc


class ActOspfv3InstanceVrfRpc::Input : public Entity
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

        class Instance; //type: ActOspfv3InstanceVrfRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance> instance;
        
}; // ActOspfv3InstanceVrfRpc::Input


class ActOspfv3InstanceVrfRpc::Input::Instance : public Entity
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
        class Vrf; //type: ActOspfv3InstanceVrfRpc::Input::Instance::Vrf
        class All; //type: ActOspfv3InstanceVrfRpc::Input::Instance::All
        class AllInclusive; //type: ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::All> all;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive> all_inclusive;
        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::Vrf> vrf;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance


class ActOspfv3InstanceVrfRpc::Input::Instance::Vrf : public Entity
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
        class Stats; //type: ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats> stats;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::Vrf


class ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats : public Entity
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
        YLeaf prefix_priority; //type: empty
        class Neighbor; //type: ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor> neighbor;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats


class ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor : public Entity
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
        class Interface; //type: ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface> interface;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor


class ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface : public Entity
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

}; // ActOspfv3InstanceVrfRpc::Input::Instance::Vrf::Stats::Neighbor::Interface


class ActOspfv3InstanceVrfRpc::Input::Instance::All : public Entity
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
        class Stats; //type: ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats> stats;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::All


class ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats : public Entity
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
        YLeaf prefix_priority; //type: empty
        class Neighbor; //type: ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor> neighbor;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats


class ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor : public Entity
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
        class Interface; //type: ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface> interface;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor


class ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface : public Entity
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

}; // ActOspfv3InstanceVrfRpc::Input::Instance::All::Stats::Neighbor::Interface


class ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive : public Entity
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
        class Stats; //type: ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats> stats;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive


class ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats : public Entity
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
        YLeaf prefix_priority; //type: empty
        class Neighbor; //type: ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor> neighbor;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats


class ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor : public Entity
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
        class Interface; //type: ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv6_ospfv3_act::ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface> interface;
        
}; // ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor


class ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface : public Entity
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

}; // ActOspfv3InstanceVrfRpc::Input::Instance::AllInclusive::Stats::Neighbor::Interface


}
}

#endif /* _CISCO_IOS_XR_IPV6_OSPFV3_ACT_ */

