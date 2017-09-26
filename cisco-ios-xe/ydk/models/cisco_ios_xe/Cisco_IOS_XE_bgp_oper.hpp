#ifndef _CISCO_IOS_XE_BGP_OPER_
#define _CISCO_IOS_XE_BGP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_oper {

class BgpStateData : public ydk::Entity
{
    public:
        BgpStateData();
        ~BgpStateData();

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

        class Neighbors; //type: BgpStateData::Neighbors
        class AddressFamilies; //type: BgpStateData::AddressFamilies
        class BgpRouteVrfs; //type: BgpStateData::BgpRouteVrfs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies> address_families;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs> bgp_route_vrfs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors> neighbors;
        
}; // BgpStateData


class BgpStateData::AddressFamilies : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AddressFamily; //type: BgpStateData::AddressFamilies::AddressFamily

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily> > address_family;
        
}; // BgpStateData::AddressFamilies


class BgpStateData::AddressFamilies::AddressFamily : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi_safi; //type: AfiSafi
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf bgp_table_version; //type: uint64
        ydk::YLeaf routing_table_version; //type: uint64
        ydk::YLeaf total_memory; //type: uint64
        class Prefixes; //type: BgpStateData::AddressFamilies::AddressFamily::Prefixes
        class Path; //type: BgpStateData::AddressFamilies::AddressFamily::Path
        class AsPath; //type: BgpStateData::AddressFamilies::AddressFamily::AsPath
        class RouteMap; //type: BgpStateData::AddressFamilies::AddressFamily::RouteMap
        class FilterList; //type: BgpStateData::AddressFamilies::AddressFamily::FilterList
        class Activities; //type: BgpStateData::AddressFamilies::AddressFamily::Activities
        class BgpNeighborSummaries; //type: BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::Activities> activities;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries> bgp_neighbor_summaries;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::FilterList> filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::Path> path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::Prefixes> prefixes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::RouteMap> route_map;
        
}; // BgpStateData::AddressFamilies::AddressFamily


class BgpStateData::AddressFamilies::AddressFamily::Activities : public ydk::Entity
{
    public:
        Activities();
        ~Activities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefixes; //type: uint64
        ydk::YLeaf paths; //type: uint64
        ydk::YLeaf scan_interval; //type: string

}; // BgpStateData::AddressFamilies::AddressFamily::Activities


class BgpStateData::AddressFamilies::AddressFamily::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_entries; //type: uint64
        ydk::YLeaf memory_usage; //type: uint64

}; // BgpStateData::AddressFamilies::AddressFamily::AsPath


class BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries : public ydk::Entity
{
    public:
        BgpNeighborSummaries();
        ~BgpNeighborSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpNeighborSummary; //type: BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary> > bgp_neighbor_summary;
        
}; // BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries


class BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary : public ydk::Entity
{
    public:
        BgpNeighborSummary();
        ~BgpNeighborSummary();

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
        ydk::YLeaf bgp_version; //type: uint32
        ydk::YLeaf messages_received; //type: uint64
        ydk::YLeaf messages_sent; //type: uint64
        ydk::YLeaf table_version; //type: uint64
        ydk::YLeaf input_queue; //type: uint64
        ydk::YLeaf output_queue; //type: uint64
        ydk::YLeaf up_time; //type: string
        ydk::YLeaf state; //type: BgpFsmState
        ydk::YLeaf prefixes_received; //type: uint64
        ydk::YLeaf dynamically_configured; //type: boolean

}; // BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary


class BgpStateData::AddressFamilies::AddressFamily::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_entries; //type: uint64
        ydk::YLeaf memory_usage; //type: uint64

}; // BgpStateData::AddressFamilies::AddressFamily::FilterList


class BgpStateData::AddressFamilies::AddressFamily::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_entries; //type: uint64
        ydk::YLeaf memory_usage; //type: uint64

}; // BgpStateData::AddressFamilies::AddressFamily::Path


class BgpStateData::AddressFamilies::AddressFamily::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_entries; //type: uint64
        ydk::YLeaf memory_usage; //type: uint64

}; // BgpStateData::AddressFamilies::AddressFamily::Prefixes


class BgpStateData::AddressFamilies::AddressFamily::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_entries; //type: uint64
        ydk::YLeaf memory_usage; //type: uint64

}; // BgpStateData::AddressFamilies::AddressFamily::RouteMap


class BgpStateData::BgpRouteVrfs : public ydk::Entity
{
    public:
        BgpRouteVrfs();
        ~BgpRouteVrfs();

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

        class BgpRouteVrf; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf> > bgp_route_vrf;
        
}; // BgpStateData::BgpRouteVrfs


class BgpStateData::BgpRouteVrfs::BgpRouteVrf : public ydk::Entity
{
    public:
        BgpRouteVrf();
        ~BgpRouteVrf();

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

        ydk::YLeaf vrf; //type: string
        class BgpRouteAfs; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs> bgp_route_afs;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs : public ydk::Entity
{
    public:
        BgpRouteAfs();
        ~BgpRouteAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpRouteAf; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf> > bgp_route_af;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf : public ydk::Entity
{
    public:
        BgpRouteAf();
        ~BgpRouteAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi; //type: AfiSafi
        class BgpRouteFilters; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters> bgp_route_filters;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters : public ydk::Entity
{
    public:
        BgpRouteFilters();
        ~BgpRouteFilters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpRouteFilter; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter> > bgp_route_filter;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter : public ydk::Entity
{
    public:
        BgpRouteFilter();
        ~BgpRouteFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_filter; //type: BgpRouteFilters
        class BgpRouteEntries; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries> bgp_route_entries;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries : public ydk::Entity
{
    public:
        BgpRouteEntries();
        ~BgpRouteEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpRouteEntry; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry> > bgp_route_entry;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry : public ydk::Entity
{
    public:
        BgpRouteEntry();
        ~BgpRouteEntry();

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
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf available_paths; //type: uint32
        ydk::YLeaf advertised_to; //type: string
        class BgpPathEntries; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries> bgp_path_entries;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries : public ydk::Entity
{
    public:
        BgpPathEntries();
        ~BgpPathEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpPathEntry; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry> > bgp_path_entry;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry : public ydk::Entity
{
    public:
        BgpPathEntry();
        ~BgpPathEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nexthop; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf origin; //type: BgpOriginCode
        ydk::YLeaf rpki_status; //type: BgpRpkiStatus
        ydk::YLeaf community; //type: string
        class PathStatus; //type: BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus> path_status;
        
}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry


class BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus : public ydk::Entity
{
    public:
        PathStatus();
        ~PathStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf suppressed; //type: empty
        ydk::YLeaf damped; //type: empty
        ydk::YLeaf history; //type: empty
        ydk::YLeaf valid; //type: empty
        ydk::YLeaf sourced; //type: empty
        ydk::YLeaf bestpath; //type: empty
        ydk::YLeaf internal; //type: empty
        ydk::YLeaf rib_fail; //type: empty
        ydk::YLeaf stale; //type: empty
        ydk::YLeaf multipath; //type: empty
        ydk::YLeaf backup_path; //type: empty
        ydk::YLeaf rt_filter; //type: empty
        ydk::YLeaf best_external; //type: empty
        ydk::YLeaf additional_path; //type: empty
        ydk::YLeaf rib_compressed; //type: empty

}; // BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus


class BgpStateData::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: BgpStateData::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor> > neighbor;
        
}; // BgpStateData::Neighbors


class BgpStateData::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf afi_safi; //type: AfiSafi
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf bgp_version; //type: uint16
        ydk::YLeaf link; //type: BgpLink
        ydk::YLeaf up_time; //type: string
        ydk::YLeaf last_write; //type: string
        ydk::YLeaf last_read; //type: string
        ydk::YLeaf installed_prefixes; //type: uint32
        ydk::YLeaf session_state; //type: BgpFsmState
        ydk::YLeafList negotiated_cap; //type: list of  string
        class NegotiatedKeepaliveTimers; //type: BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers
        class BgpNeighborCounters; //type: BgpStateData::Neighbors::Neighbor::BgpNeighborCounters
        class Connection; //type: BgpStateData::Neighbors::Neighbor::Connection
        class Transport; //type: BgpStateData::Neighbors::Neighbor::Transport
        class PrefixActivity; //type: BgpStateData::Neighbors::Neighbor::PrefixActivity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::BgpNeighborCounters> bgp_neighbor_counters;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::Connection> connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers> negotiated_keepalive_timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::PrefixActivity> prefix_activity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::Transport> transport;
        
}; // BgpStateData::Neighbors::Neighbor


class BgpStateData::Neighbors::Neighbor::BgpNeighborCounters : public ydk::Entity
{
    public:
        BgpNeighborCounters();
        ~BgpNeighborCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inq_depth; //type: uint32
        ydk::YLeaf outq_depth; //type: uint32
        class Sent; //type: BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent
        class Received; //type: BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received> received;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent> sent;
        
}; // BgpStateData::Neighbors::Neighbor::BgpNeighborCounters


class BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opens; //type: uint32
        ydk::YLeaf updates; //type: uint32
        ydk::YLeaf notifications; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf route_refreshes; //type: uint32

}; // BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received


class BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opens; //type: uint32
        ydk::YLeaf updates; //type: uint32
        ydk::YLeaf notifications; //type: uint32
        ydk::YLeaf keepalives; //type: uint32
        ydk::YLeaf route_refreshes; //type: uint32

}; // BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent


class BgpStateData::Neighbors::Neighbor::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: TcpFsmState
        ydk::YLeaf mode; //type: BgpMode
        ydk::YLeaf total_established; //type: uint32
        ydk::YLeaf total_dropped; //type: uint32
        ydk::YLeaf last_reset; //type: string
        ydk::YLeaf reset_reason; //type: string

}; // BgpStateData::Neighbors::Neighbor::Connection


class BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers : public ydk::Entity
{
    public:
        NegotiatedKeepaliveTimers();
        ~NegotiatedKeepaliveTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf keepalive_interval; //type: uint16

}; // BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers


class BgpStateData::Neighbors::Neighbor::PrefixActivity : public ydk::Entity
{
    public:
        PrefixActivity();
        ~PrefixActivity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sent; //type: BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent
        class Received; //type: BgpStateData::Neighbors::Neighbor::PrefixActivity::Received

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::PrefixActivity::Received> received;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_bgp_oper::BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent> sent;
        
}; // BgpStateData::Neighbors::Neighbor::PrefixActivity


class BgpStateData::Neighbors::Neighbor::PrefixActivity::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_prefixes; //type: uint64
        ydk::YLeaf total_prefixes; //type: uint64
        ydk::YLeaf implicit_withdraw; //type: uint64
        ydk::YLeaf explicit_withdraw; //type: uint64
        ydk::YLeaf bestpaths; //type: uint64
        ydk::YLeaf multipaths; //type: uint64

}; // BgpStateData::Neighbors::Neighbor::PrefixActivity::Received


class BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf current_prefixes; //type: uint64
        ydk::YLeaf total_prefixes; //type: uint64
        ydk::YLeaf implicit_withdraw; //type: uint64
        ydk::YLeaf explicit_withdraw; //type: uint64
        ydk::YLeaf bestpaths; //type: uint64
        ydk::YLeaf multipaths; //type: uint64

}; // BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent


class BgpStateData::Neighbors::Neighbor::Transport : public ydk::Entity
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

        ydk::YLeaf path_mtu_discovery; //type: boolean
        ydk::YLeaf local_port; //type: uint32
        ydk::YLeaf local_host; //type: string
        ydk::YLeaf foreign_port; //type: uint32
        ydk::YLeaf foreign_host; //type: string
        ydk::YLeaf mss; //type: uint32

}; // BgpStateData::Neighbors::Neighbor::Transport

class BgpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mode_active;
        static const ydk::Enum::YLeaf mode_passive;

};

class BgpFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fsm_idle;
        static const ydk::Enum::YLeaf fsm_connect;
        static const ydk::Enum::YLeaf fsm_active;
        static const ydk::Enum::YLeaf fsm_opensent;
        static const ydk::Enum::YLeaf fsm_openconfirm;
        static const ydk::Enum::YLeaf fsm_established;
        static const ydk::Enum::YLeaf fsm_nonnegotiated;

};

class BgpLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};


}
}

#endif /* _CISCO_IOS_XE_BGP_OPER_ */

