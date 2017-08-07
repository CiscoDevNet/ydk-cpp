#ifndef _CISCO_IOS_XR_IPV4_BGP_OC_OPER_0_
#define _CISCO_IOS_XR_IPV4_BGP_OC_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oc_oper {

class OcBgp : public ydk::Entity
{
    public:
        OcBgp();
        ~OcBgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class BgpRib; //type: OcBgp::BgpRib

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib> bgp_rib;
        
}; // OcBgp


class OcBgp::BgpRib : public ydk::Entity
{
    public:
        BgpRib();
        ~BgpRib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfiSafiTable; //type: OcBgp::BgpRib::AfiSafiTable

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable> afi_safi_table;
        
}; // OcBgp::BgpRib


class OcBgp::BgpRib::AfiSafiTable : public ydk::Entity
{
    public:
        AfiSafiTable();
        ~AfiSafiTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Unicast; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast
        class Ipv6Unicast; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast> ipv6_unicast;
        
}; // OcBgp::BgpRib::AfiSafiTable


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocRib; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib
        class OpenConfigNeighbors; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib> loc_rib;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors> open_config_neighbors;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib : public ydk::Entity
{
    public:
        LocRib();
        ~LocRib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::LocRib::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors : public ydk::Entity
{
    public:
        OpenConfigNeighbors();
        ~OpenConfigNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpenConfigNeighbor; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor> > open_config_neighbor;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor : public ydk::Entity
{
    public:
        OpenConfigNeighbor();
        ~OpenConfigNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        class AdjRibInPost; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost
        class AdjRibOutPost; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost
        class AdjRibOutPre; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre
        class AdjRibInPre; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost> adj_rib_in_post;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre> adj_rib_in_pre;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost> adj_rib_out_post;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre> adj_rib_out_pre;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost : public ydk::Entity
{
    public:
        AdjRibInPost();
        ~AdjRibInPost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost : public ydk::Entity
{
    public:
        AdjRibOutPost();
        ~AdjRibOutPost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre : public ydk::Entity
{
    public:
        AdjRibOutPre();
        ~AdjRibOutPre();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre : public ydk::Entity
{
    public:
        AdjRibInPre();
        ~AdjRibInPre();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv4Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocRib; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib
        class OpenConfigNeighbors; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib> loc_rib;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors> open_config_neighbors;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib : public ydk::Entity
{
    public:
        LocRib();
        ~LocRib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::LocRib::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors : public ydk::Entity
{
    public:
        OpenConfigNeighbors();
        ~OpenConfigNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpenConfigNeighbor; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor> > open_config_neighbor;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor : public ydk::Entity
{
    public:
        OpenConfigNeighbor();
        ~OpenConfigNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        class AdjRibInPost; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost
        class AdjRibOutPost; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost
        class AdjRibOutPre; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre
        class AdjRibInPre; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost> adj_rib_in_post;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre> adj_rib_in_pre;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost> adj_rib_out_post;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre> adj_rib_out_pre;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost : public ydk::Entity
{
    public:
        AdjRibInPost();
        ~AdjRibInPost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPost::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost : public ydk::Entity
{
    public:
        AdjRibOutPost();
        ~AdjRibOutPost();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPost::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre : public ydk::Entity
{
    public:
        AdjRibOutPre();
        ~AdjRibOutPre();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList : public ydk::Entity
{
    public:
        ExtAttributesList();
        ~ExtAttributesList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster; //type: list of  string
        class ExtCommunity; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity
        class UnknownAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity> > ext_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes> > unknown_attributes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity : public ydk::Entity
{
    public:
        ExtCommunity();
        ~ExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::ExtCommunity


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_type; //type: uint16
        ydk::YLeaf attribute_length; //type: uint16
        ydk::YLeaf attribute_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate : public ydk::Entity
{
    public:
        LastModifiedDate();
        ~LastModifiedDate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastModifiedDate


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved : public ydk::Entity
{
    public:
        LastUpdateRecieved();
        ~LastUpdateRecieved();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes : public ydk::Entity
{
    public:
        NumRoutes();
        ~NumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::NumRoutes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre : public ydk::Entity
{
    public:
        AdjRibInPre();
        ~AdjRibInPre();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Routes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes
        class NumRoutes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::NumRoutes> num_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes> routes;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route> > route;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf path_id; //type: int32
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: BgpOcInvalidRouteReason
        ydk::YLeaf best_path; //type: boolean
        class PrefixName; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName
        class RouteAttrList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList
        class ExtAttributesList; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList
        class LastModifiedDate; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate
        class LastUpdateRecieved; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::ExtAttributesList> ext_attributes_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastModifiedDate> last_modified_date;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::LastUpdateRecieved> last_update_recieved;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName> prefix_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList> route_attr_list;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::PrefixName::Prefix


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList : public ydk::Entity
{
    public:
        RouteAttrList();
        ~RouteAttrList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_type; //type: BgpOcOriginAttr
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        class NextHop; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop
        class AggregratorAttributes; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes
        class Community; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibInPre::Routes::Route::RouteAttrList

class BgpOcAfi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class BgpOcInvalidRouteReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valid_route;
        static const ydk::Enum::YLeaf invalid_clsuter_loop;
        static const ydk::Enum::YLeaf invalid_as_path_loop;
        static const ydk::Enum::YLeaf invalid_origin_at_or_id;
        static const ydk::Enum::YLeaf invalid_as_confed_loop;

};

class BgpOcOriginAttr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf incomplete;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OC_OPER_0_ */

