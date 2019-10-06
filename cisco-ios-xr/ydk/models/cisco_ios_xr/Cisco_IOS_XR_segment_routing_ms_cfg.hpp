#ifndef _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_
#define _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_cfg {

class Sr : public ydk::Entity
{
    public:
        Sr();
        ~Sr();

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

        ydk::YLeaf enable; //type: empty
        class LocalBlock; //type: Sr::LocalBlock
        class Mappings; //type: Sr::Mappings
        class AdjacencySid; //type: Sr::AdjacencySid
        class GlobalBlock; //type: Sr::GlobalBlock
        class TrafficEngineering; //type: Sr::TrafficEngineering

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::LocalBlock> local_block; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::Mappings> mappings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::AdjacencySid> adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::GlobalBlock> global_block; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering> traffic_engineering;
        
}; // Sr


class Sr::LocalBlock : public ydk::Entity
{
    public:
        LocalBlock();
        ~LocalBlock();

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

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Sr::LocalBlock


class Sr::Mappings : public ydk::Entity
{
    public:
        Mappings();
        ~Mappings();

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

        class Mapping; //type: Sr::Mappings::Mapping

        ydk::YList mapping;
        
}; // Sr::Mappings


class Sr::Mappings::Mapping : public ydk::Entity
{
    public:
        Mapping();
        ~Mapping();

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

        ydk::YLeaf af; //type: SrmsAddressFamily
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: uint32
        ydk::YLeaf sid_start; //type: uint32
        ydk::YLeaf sid_range; //type: uint32
        ydk::YLeaf flag_attached; //type: SrmsMiFlag

}; // Sr::Mappings::Mapping


class Sr::AdjacencySid : public ydk::Entity
{
    public:
        AdjacencySid();
        ~AdjacencySid();

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

        class Interfaces; //type: Sr::AdjacencySid::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::AdjacencySid::Interfaces> interfaces;
        
}; // Sr::AdjacencySid


class Sr::AdjacencySid::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: Sr::AdjacencySid::Interfaces::Interface

        ydk::YList interface;
        
}; // Sr::AdjacencySid::Interfaces


class Sr::AdjacencySid::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        class AddressFamilies; //type: Sr::AdjacencySid::Interfaces::Interface::AddressFamilies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::AdjacencySid::Interfaces::Interface::AddressFamilies> address_families;
        
}; // Sr::AdjacencySid::Interfaces::Interface


class Sr::AdjacencySid::Interfaces::Interface::AddressFamilies : public ydk::Entity
{
    public:
        AddressFamilies();
        ~AddressFamilies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressFamily; //type: Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily

        ydk::YList address_family;
        
}; // Sr::AdjacencySid::Interfaces::Interface::AddressFamilies


class Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: SrmsAddressFamily
        class NextHops; //type: Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops> next_hops;
        
}; // Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily


class Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops : public ydk::Entity
{
    public:
        NextHops();
        ~NextHops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop; //type: Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop

        ydk::YList next_hop;
        
}; // Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops


class Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        class L2AdjacencySid; //type: Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid> l2_adjacency_sid;
        
}; // Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop


class Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid : public ydk::Entity
{
    public:
        L2AdjacencySid();
        ~L2AdjacencySid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: SidTypeList
        ydk::YLeaf absolute_sid; //type: uint32
        ydk::YLeaf index_sid; //type: uint32
        ydk::YLeaf srlb; //type: string

}; // Sr::AdjacencySid::Interfaces::Interface::AddressFamilies::AddressFamily::NextHops::NextHop::L2AdjacencySid


class Sr::GlobalBlock : public ydk::Entity
{
    public:
        GlobalBlock();
        ~GlobalBlock();

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

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Sr::GlobalBlock


class Sr::TrafficEngineering : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf te_latency; //type: empty
        ydk::YLeaf maximum_sid_depth; //type: uint32
        ydk::YLeaf enable; //type: empty
        class OutOfResources; //type: Sr::TrafficEngineering::OutOfResources
        class OnDemandColors; //type: Sr::TrafficEngineering::OnDemandColors
        class Segments; //type: Sr::TrafficEngineering::Segments
        class Logging; //type: Sr::TrafficEngineering::Logging
        class Timers; //type: Sr::TrafficEngineering::Timers
        class BindingSidRules; //type: Sr::TrafficEngineering::BindingSidRules
        class Policies; //type: Sr::TrafficEngineering::Policies
        class SrteInterfaces; //type: Sr::TrafficEngineering::SrteInterfaces
        class Pcc; //type: Sr::TrafficEngineering::Pcc
        class AffinityMaps; //type: Sr::TrafficEngineering::AffinityMaps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OutOfResources> out_of_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OnDemandColors> on_demand_colors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Segments> segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Logging> logging; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::BindingSidRules> binding_sid_rules;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies> policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::SrteInterfaces> srte_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Pcc> pcc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::AffinityMaps> affinity_maps;
        
}; // Sr::TrafficEngineering


class Sr::TrafficEngineering::OutOfResources : public ydk::Entity
{
    public:
        OutOfResources();
        ~OutOfResources();

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

        ydk::YLeaf maximum_paths_batch; //type: uint32
        ydk::YLeaf maximum_paths; //type: uint32

}; // Sr::TrafficEngineering::OutOfResources


class Sr::TrafficEngineering::OnDemandColors : public ydk::Entity
{
    public:
        OnDemandColors();
        ~OnDemandColors();

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

        class OnDemandColor; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor

        ydk::YList on_demand_color;
        
}; // Sr::TrafficEngineering::OnDemandColors


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor : public ydk::Entity
{
    public:
        OnDemandColor();
        ~OnDemandColor();

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

        ydk::YLeaf color; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf maximum_sid_depth; //type: uint32
        ydk::YLeaf enable; //type: empty
        class OnDemandColorDynMpls; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls> on_demand_color_dyn_mpls;
        
}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls : public ydk::Entity
{
    public:
        OnDemandColorDynMpls();
        ~OnDemandColorDynMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on_demand_color_dyn_mpls_flex_algorithm; //type: uint32
        ydk::YLeaf enable; //type: empty
        class OnDemandColorDynMplsMetric; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric
        class OnDemandColorDynMplsPce; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce
        class DisjointPath; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath
        class AffinityRules; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric> on_demand_color_dyn_mpls_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce> on_demand_color_dyn_mpls_pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath> disjoint_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules> affinity_rules;
        
}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric : public ydk::Entity
{
    public:
        OnDemandColorDynMplsMetric();
        ~OnDemandColorDynMplsMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_type; //type: XtcMetric
        ydk::YLeaf enable; //type: empty
        class MetricMargin; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin> metric_margin;
        
}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin : public ydk::Entity
{
    public:
        MetricMargin();
        ~MetricMargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_type; //type: XtcMetricValue
        ydk::YLeaf absolute_value; //type: uint32
        ydk::YLeaf relative_value; //type: uint32

}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsMetric::MetricMargin


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce : public ydk::Entity
{
    public:
        OnDemandColorDynMplsPce();
        ~OnDemandColorDynMplsPce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::OnDemandColorDynMplsPce


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath : public ydk::Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf disjointness_type; //type: XtcDisjointness
        ydk::YLeaf sub_id; //type: uint32

}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::DisjointPath


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules : public ydk::Entity
{
    public:
        AffinityRules();
        ~AffinityRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AffinityRule; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule

        ydk::YList affinity_rule;
        
}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule : public ydk::Entity
{
    public:
        AffinityRule();
        ~AffinityRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rule; //type: XtcAffinityRule
        class AffinityName; //type: Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName

        ydk::YList affinity_name;
        
}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule


class Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName : public ydk::Entity
{
    public:
        AffinityName();
        ~AffinityName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_name; //type: string

}; // Sr::TrafficEngineering::OnDemandColors::OnDemandColor::OnDemandColorDynMpls::AffinityRules::AffinityRule::AffinityName


class Sr::TrafficEngineering::Segments : public ydk::Entity
{
    public:
        Segments();
        ~Segments();

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

        class Segment; //type: Sr::TrafficEngineering::Segments::Segment

        ydk::YList segment;
        
}; // Sr::TrafficEngineering::Segments


class Sr::TrafficEngineering::Segments::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

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

        ydk::YLeaf path_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Segments_; //type: Sr::TrafficEngineering::Segments::Segment::Segments_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Segments::Segment::Segments_> segments;
        
}; // Sr::TrafficEngineering::Segments::Segment


class Sr::TrafficEngineering::Segments::Segment::Segments_ : public ydk::Entity
{
    public:
        Segments_();
        ~Segments_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Segment_; //type: Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_

        ydk::YList segment;
        
}; // Sr::TrafficEngineering::Segments::Segment::Segments_


class Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_ : public ydk::Entity
{
    public:
        Segment_();
        ~Segment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_index; //type: uint32
        ydk::YLeaf segment_type; //type: XtcSegment
        ydk::YLeaf address; //type: string
        ydk::YLeaf mpls_label; //type: uint32

}; // Sr::TrafficEngineering::Segments::Segment::Segments_::Segment_


class Sr::TrafficEngineering::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf policy_status; //type: empty

}; // Sr::TrafficEngineering::Logging


class Sr::TrafficEngineering::Timers : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf candidate_path_cleanup_delay; //type: uint32
        ydk::YLeaf cleanup_delay; //type: uint32
        ydk::YLeaf install_delay; //type: uint32
        ydk::YLeaf periodic_reoptimization; //type: uint32

}; // Sr::TrafficEngineering::Timers


class Sr::TrafficEngineering::BindingSidRules : public ydk::Entity
{
    public:
        BindingSidRules();
        ~BindingSidRules();

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

        class Explicit; //type: Sr::TrafficEngineering::BindingSidRules::Explicit
        class DynamicBindingSidRules; //type: Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::BindingSidRules::Explicit> explicit_; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules> dynamic_binding_sid_rules; // presence node
        
}; // Sr::TrafficEngineering::BindingSidRules


class Sr::TrafficEngineering::BindingSidRules::Explicit : public ydk::Entity
{
    public:
        Explicit();
        ~Explicit();

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

        ydk::YLeaf rule; //type: XtcBindingSidexplicitRule

}; // Sr::TrafficEngineering::BindingSidRules::Explicit


class Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules : public ydk::Entity
{
    public:
        DynamicBindingSidRules();
        ~DynamicBindingSidRules();

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

        ydk::YLeaf dynamic_binding_sid_rule; //type: XtcBindingSidDynamicRule

}; // Sr::TrafficEngineering::BindingSidRules::DynamicBindingSidRules


class Sr::TrafficEngineering::Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

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

        class Policy; //type: Sr::TrafficEngineering::Policies::Policy

        ydk::YList policy;
        
}; // Sr::TrafficEngineering::Policies


class Sr::TrafficEngineering::Policies::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf ipv6_disable; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf enable; //type: empty
        class Steering; //type: Sr::TrafficEngineering::Policies::Policy::Steering
        class BindingSid; //type: Sr::TrafficEngineering::Policies::Policy::BindingSid
        class PolicyColorEndpoint; //type: Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint
        class AutoRoute; //type: Sr::TrafficEngineering::Policies::Policy::AutoRoute
        class CandidatePaths; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::Steering> steering;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::BindingSid> binding_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint> policy_color_endpoint; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::AutoRoute> auto_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths> candidate_paths;
        
}; // Sr::TrafficEngineering::Policies::Policy


class Sr::TrafficEngineering::Policies::Policy::Steering : public ydk::Entity
{
    public:
        Steering();
        ~Steering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Applications; //type: Sr::TrafficEngineering::Policies::Policy::Steering::Applications

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::Steering::Applications> applications;
        
}; // Sr::TrafficEngineering::Policies::Policy::Steering


class Sr::TrafficEngineering::Policies::Policy::Steering::Applications : public ydk::Entity
{
    public:
        Applications();
        ~Applications();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application

        ydk::YList application;
        
}; // Sr::TrafficEngineering::Policies::Policy::Steering::Applications


class Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf application; //type: XtcSteeringApplication
        ydk::YLeaf disable; //type: empty

}; // Sr::TrafficEngineering::Policies::Policy::Steering::Applications::Application


class Sr::TrafficEngineering::Policies::Policy::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf binding_sid_type; //type: XtcBindingSid
        ydk::YLeaf mpls_label; //type: uint32

}; // Sr::TrafficEngineering::Policies::Policy::BindingSid


class Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint : public ydk::Entity
{
    public:
        PolicyColorEndpoint();
        ~PolicyColorEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf color; //type: uint32
        ydk::YLeaf end_point_type; //type: XtcEndPoint
        ydk::YLeaf end_point_address; //type: string

}; // Sr::TrafficEngineering::Policies::Policy::PolicyColorEndpoint


class Sr::TrafficEngineering::Policies::Policy::AutoRoute : public ydk::Entity
{
    public:
        AutoRoute();
        ~AutoRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf force_sr_include; //type: empty
        ydk::YLeaf enable; //type: empty
        class AutoRouteMetric; //type: Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric
        class IncludePrefixes; //type: Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric> auto_route_metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes> include_prefixes;
        
}; // Sr::TrafficEngineering::Policies::Policy::AutoRoute


class Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric : public ydk::Entity
{
    public:
        AutoRouteMetric();
        ~AutoRouteMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf autoroute_metric_type; //type: XtcAutoRouteMetric
        ydk::YLeaf metric_relative_value; //type: int32
        ydk::YLeaf metric_constant_value; //type: uint32

}; // Sr::TrafficEngineering::Policies::Policy::AutoRoute::AutoRouteMetric


class Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes : public ydk::Entity
{
    public:
        IncludePrefixes();
        ~IncludePrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IncludePrefix; //type: Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix

        ydk::YList include_prefix;
        
}; // Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes


class Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix : public ydk::Entity
{
    public:
        IncludePrefix();
        ~IncludePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_type; //type: XtcAddressFamily
        ydk::YLeaf prefix_address; //type: string
        ydk::YLeaf prefix_length; //type: uint32

}; // Sr::TrafficEngineering::Policies::Policy::AutoRoute::IncludePrefixes::IncludePrefix


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths : public ydk::Entity
{
    public:
        CandidatePaths();
        ~CandidatePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Preferences; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences> preferences;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences : public ydk::Entity
{
    public:
        Preferences();
        ~Preferences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Preference; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference

        ydk::YList preference;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference : public ydk::Entity
{
    public:
        Preference();
        ~Preference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_index; //type: uint32
        ydk::YLeaf enable; //type: empty
        class Constraints; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints
        class PathInfos; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints> constraints;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos> path_infos;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints : public ydk::Entity
{
    public:
        Constraints();
        ~Constraints();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DisjointPath; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath
        class SegmentRules; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules
        class AffinityRules; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath> disjoint_path; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules> segment_rules; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules> affinity_rules;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath : public ydk::Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf disjointness_type; //type: XtcDisjointness
        ydk::YLeaf sub_id; //type: uint32

}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::DisjointPath


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules : public ydk::Entity
{
    public:
        SegmentRules();
        ~SegmentRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_algorithm; //type: uint32

}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::SegmentRules


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules : public ydk::Entity
{
    public:
        AffinityRules();
        ~AffinityRules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AffinityRule; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule

        ydk::YList affinity_rule;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule : public ydk::Entity
{
    public:
        AffinityRule();
        ~AffinityRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rule; //type: XtcAffinityRule
        class AffinityName; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName

        ydk::YList affinity_name;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName : public ydk::Entity
{
    public:
        AffinityName();
        ~AffinityName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_name; //type: string

}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::Constraints::AffinityRules::AffinityRule::AffinityName


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos : public ydk::Entity
{
    public:
        PathInfos();
        ~PathInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathInfo; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo

        ydk::YList path_info;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo : public ydk::Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: XtcPath
        ydk::YLeaf hop_type; //type: XtcPathHop
        ydk::YLeaf segment_list_name; //type: string
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf enable; //type: empty
        class Metric; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric
        class Pcep; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric> metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep> pcep;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_limit; //type: uint32
        ydk::YLeaf metric_type; //type: XtcMetric
        ydk::YLeaf enable; //type: empty
        class MetricMargin; //type: Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin> metric_margin;
        
}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin : public ydk::Entity
{
    public:
        MetricMargin();
        ~MetricMargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_type; //type: XtcMetricValue
        ydk::YLeaf absolute_value; //type: uint32
        ydk::YLeaf relative_value; //type: uint32

}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Metric::MetricMargin


class Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep : public ydk::Entity
{
    public:
        Pcep();
        ~Pcep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Sr::TrafficEngineering::Policies::Policy::CandidatePaths::Preferences::Preference::PathInfos::PathInfo::Pcep


class Sr::TrafficEngineering::SrteInterfaces : public ydk::Entity
{
    public:
        SrteInterfaces();
        ~SrteInterfaces();

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

        class SrteInterface; //type: Sr::TrafficEngineering::SrteInterfaces::SrteInterface

        ydk::YList srte_interface;
        
}; // Sr::TrafficEngineering::SrteInterfaces


class Sr::TrafficEngineering::SrteInterfaces::SrteInterface : public ydk::Entity
{
    public:
        SrteInterface();
        ~SrteInterface();

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

        ydk::YLeaf srte_interface_name; //type: string
        ydk::YLeaf interface_metric; //type: uint32
        ydk::YLeaf enable; //type: empty
        class InterfaceAffinities; //type: Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities> interface_affinities;
        
}; // Sr::TrafficEngineering::SrteInterfaces::SrteInterface


class Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities : public ydk::Entity
{
    public:
        InterfaceAffinities();
        ~InterfaceAffinities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceAffinity; //type: Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity

        ydk::YList interface_affinity;
        
}; // Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities


class Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity : public ydk::Entity
{
    public:
        InterfaceAffinity();
        ~InterfaceAffinity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_name; //type: string

}; // Sr::TrafficEngineering::SrteInterfaces::SrteInterface::InterfaceAffinities::InterfaceAffinity


class Sr::TrafficEngineering::Pcc : public ydk::Entity
{
    public:
        Pcc();
        ~Pcc();

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

        ydk::YLeaf dead_timer_interval; //type: uint32
        ydk::YLeaf pcc_centric; //type: empty
        ydk::YLeaf report_all; //type: empty
        ydk::YLeaf keepalive_timer_interval; //type: uint32
        ydk::YLeaf initiated_state_interval; //type: uint32
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf initiated_orphan_interval; //type: uint32
        ydk::YLeaf delegation_timeout; //type: uint32
        class PcePeers; //type: Sr::TrafficEngineering::Pcc::PcePeers
        class PceAddresses; //type: Sr::TrafficEngineering::Pcc::PceAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Pcc::PcePeers> pce_peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_segment_routing_ms_cfg::Sr::TrafficEngineering::Pcc::PceAddresses> pce_addresses;
        
}; // Sr::TrafficEngineering::Pcc


class Sr::TrafficEngineering::Pcc::PcePeers : public ydk::Entity
{
    public:
        PcePeers();
        ~PcePeers();

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

        class PcePeer; //type: Sr::TrafficEngineering::Pcc::PcePeers::PcePeer

        ydk::YList pce_peer;
        
}; // Sr::TrafficEngineering::Pcc::PcePeers


class Sr::TrafficEngineering::Pcc::PcePeers::PcePeer : public ydk::Entity
{
    public:
        PcePeer();
        ~PcePeer();

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

        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf keychain; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf precedence; //type: uint32

}; // Sr::TrafficEngineering::Pcc::PcePeers::PcePeer


class Sr::TrafficEngineering::Pcc::PceAddresses : public ydk::Entity
{
    public:
        PceAddresses();
        ~PceAddresses();

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

        class PceAddress; //type: Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress

        ydk::YList pce_address;
        
}; // Sr::TrafficEngineering::Pcc::PceAddresses


class Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress : public ydk::Entity
{
    public:
        PceAddress();
        ~PceAddress();

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

        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf precedence; //type: uint32

}; // Sr::TrafficEngineering::Pcc::PceAddresses::PceAddress


class Sr::TrafficEngineering::AffinityMaps : public ydk::Entity
{
    public:
        AffinityMaps();
        ~AffinityMaps();

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

        class AffinityMap; //type: Sr::TrafficEngineering::AffinityMaps::AffinityMap

        ydk::YList affinity_map;
        
}; // Sr::TrafficEngineering::AffinityMaps


class Sr::TrafficEngineering::AffinityMaps::AffinityMap : public ydk::Entity
{
    public:
        AffinityMap();
        ~AffinityMap();

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

        ydk::YLeaf affinity_name; //type: string
        ydk::YLeaf bit_position; //type: uint32

}; // Sr::TrafficEngineering::AffinityMaps::AffinityMap

class SrmsMiFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class SrmsAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};

class SidTypeList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf index_;

        static int get_enum_value(const std::string & name) {
            if (name == "absolute") return 1;
            if (name == "index") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SEGMENT_ROUTING_MS_CFG_ */

