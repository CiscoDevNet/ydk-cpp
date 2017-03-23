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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf route; //type: empty

        class Instance; //type: ActOspfRoutesRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfRoutesRpc::Instance> instance;


}; // ActOspfRoutesRpc


class ActOspfRoutesRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ActOspfRoutesRpc::Instance

class ActOspfRedistributionRpc : public Entity
{
    public:
        ActOspfRedistributionRpc();
        ~ActOspfRedistributionRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf redistribution; //type: empty

        class Instance; //type: ActOspfRedistributionRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfRedistributionRpc::Instance> instance;


}; // ActOspfRedistributionRpc


class ActOspfRedistributionRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ActOspfRedistributionRpc::Instance

class ActOspfStatisticsRpc : public Entity
{
    public:
        ActOspfStatisticsRpc();
        ~ActOspfStatisticsRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf all; //type: empty
        YLeaf message_queue; //type: empty
        YLeaf spf; //type: empty
        YLeaf neighbor; //type: empty
        YLeaf interface_name; //type: empty

        class Instance; //type: ActOspfStatisticsRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsRpc::Instance> instance;


}; // ActOspfStatisticsRpc


class ActOspfStatisticsRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ActOspfStatisticsRpc::Instance

class ActOspfStatisticsNeighborRpc : public Entity
{
    public:
        ActOspfStatisticsNeighborRpc();
        ~ActOspfStatisticsNeighborRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Instance; //type: ActOspfStatisticsNeighborRpc::Instance
        class Neighbor; //type: ActOspfStatisticsNeighborRpc::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsNeighborRpc::Instance> instance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsNeighborRpc::Neighbor> neighbor;


}; // ActOspfStatisticsNeighborRpc


class ActOspfStatisticsNeighborRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ActOspfStatisticsNeighborRpc::Instance


class ActOspfStatisticsNeighborRpc::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string
        YLeaf interface_name; //type: string



}; // ActOspfStatisticsNeighborRpc::Neighbor

class ActOspfStatisticsInterfaceRpc : public Entity
{
    public:
        ActOspfStatisticsInterfaceRpc();
        ~ActOspfStatisticsInterfaceRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Instance; //type: ActOspfStatisticsInterfaceRpc::Instance
        class Interface; //type: ActOspfStatisticsInterfaceRpc::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsInterfaceRpc::Instance> instance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfStatisticsInterfaceRpc::Interface> interface;


}; // ActOspfStatisticsInterfaceRpc


class ActOspfStatisticsInterfaceRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ActOspfStatisticsInterfaceRpc::Instance


class ActOspfStatisticsInterfaceRpc::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ActOspfStatisticsInterfaceRpc::Interface

class ActOspfProcessRpc : public Entity
{
    public:
        ActOspfProcessRpc();
        ~ActOspfProcessRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf process; //type: empty

        class Instance; //type: ActOspfProcessRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfProcessRpc::Instance> instance;


}; // ActOspfProcessRpc


class ActOspfProcessRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string



}; // ActOspfProcessRpc::Instance

class ActOspfInstanceVrfRpc : public Entity
{
    public:
        ActOspfInstanceVrfRpc();
        ~ActOspfInstanceVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Instance; //type: ActOspfInstanceVrfRpc::Instance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance> instance;


}; // ActOspfInstanceVrfRpc


class ActOspfInstanceVrfRpc::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_identifier; //type: string

        class Vrf; //type: ActOspfInstanceVrfRpc::Instance::Vrf
        class All; //type: ActOspfInstanceVrfRpc::Instance::All
        class AllInclusive; //type: ActOspfInstanceVrfRpc::Instance::AllInclusive

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::All> all;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::AllInclusive> all_inclusive;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::Vrf> vrf;


}; // ActOspfInstanceVrfRpc::Instance


class ActOspfInstanceVrfRpc::Instance::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf process; //type: empty
        YLeaf redistribution; //type: empty
        YLeaf route; //type: empty

        class Stats; //type: ActOspfInstanceVrfRpc::Instance::Vrf::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::Vrf::Stats> stats;


}; // ActOspfInstanceVrfRpc::Instance::Vrf


class ActOspfInstanceVrfRpc::Instance::Vrf::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf; //type: empty
        YLeaf message_queue; //type: empty

        class Interface; //type: ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface
        class Neighbor; //type: ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor> neighbor;


}; // ActOspfInstanceVrfRpc::Instance::Vrf::Stats


class ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Interface


class ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string

        class Interface; //type: ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface> interface;


}; // ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor


class ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ActOspfInstanceVrfRpc::Instance::Vrf::Stats::Neighbor::Interface


class ActOspfInstanceVrfRpc::Instance::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process; //type: empty
        YLeaf redistribution; //type: empty
        YLeaf route; //type: empty

        class Stats; //type: ActOspfInstanceVrfRpc::Instance::All::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::All::Stats> stats;


}; // ActOspfInstanceVrfRpc::Instance::All


class ActOspfInstanceVrfRpc::Instance::All::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf; //type: empty
        YLeaf message_queue; //type: empty

        class Interface; //type: ActOspfInstanceVrfRpc::Instance::All::Stats::Interface
        class Neighbor; //type: ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::All::Stats::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor> neighbor;


}; // ActOspfInstanceVrfRpc::Instance::All::Stats


class ActOspfInstanceVrfRpc::Instance::All::Stats::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ActOspfInstanceVrfRpc::Instance::All::Stats::Interface


class ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string

        class Interface; //type: ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface> interface;


}; // ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor


class ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ActOspfInstanceVrfRpc::Instance::All::Stats::Neighbor::Interface


class ActOspfInstanceVrfRpc::Instance::AllInclusive : public Entity
{
    public:
        AllInclusive();
        ~AllInclusive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf process; //type: empty
        YLeaf redistribution; //type: empty
        YLeaf route; //type: empty

        class Stats; //type: ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats> stats;


}; // ActOspfInstanceVrfRpc::Instance::AllInclusive


class ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf; //type: empty
        YLeaf message_queue; //type: empty

        class Interface; //type: ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface
        class Neighbor; //type: ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor> neighbor;


}; // ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats


class ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Interface


class ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_id; //type: string

        class Interface; //type: ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_act::ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface> interface;


}; // ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor


class ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // ActOspfInstanceVrfRpc::Instance::AllInclusive::Stats::Neighbor::Interface


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_ACT_ */

