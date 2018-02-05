#ifndef _OPENCONFIG_RIB_BGP_
#define _OPENCONFIG_RIB_BGP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_rib_bgp {

class BgpRib : public ydk::Entity
{
    public:
        BgpRib();
        ~BgpRib();

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

        class AfiSafis; //type: BgpRib::AfiSafis

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis> afi_safis;
        
}; // BgpRib


class BgpRib::AfiSafis : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class AfiSafi; //type: BgpRib::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi> > afi_safi;
        
}; // BgpRib::AfiSafis


class BgpRib::AfiSafis::AfiSafi : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        class Ipv4Unicast; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        
}; // BgpRib::AfiSafis::AfiSafi


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocRib; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib
        class Neighbors; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib> loc_rib;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors> neighbors;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib : public ydk::Entity
{
    public:
        LocRib();
        ~LocRib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors : public ydk::Entity
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

        class Neighbor; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor> > neighbor;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf neighbor_address; //type: string
        class AdjRibInPre; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre
        class AdjRibInPost; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost
        class AdjRibOutPre; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre
        class AdjRibOutPost; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre> adj_rib_in_pre;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost> adj_rib_in_post;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre> adj_rib_out_pre;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost> adj_rib_out_post;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre : public ydk::Entity
{
    public:
        AdjRibInPre();
        ~AdjRibInPre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost : public ydk::Entity
{
    public:
        AdjRibInPost();
        ~AdjRibInPost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre : public ydk::Entity
{
    public:
        AdjRibOutPre();
        ~AdjRibOutPre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost : public ydk::Entity
{
    public:
        AdjRibOutPost();
        ~AdjRibOutPost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv4Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocRib; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib
        class Neighbors; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib> loc_rib;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors> neighbors;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib : public ydk::Entity
{
    public:
        LocRib();
        ~LocRib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::LocRib::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors : public ydk::Entity
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

        class Neighbor; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor> > neighbor;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf neighbor_address; //type: string
        class AdjRibInPre; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre
        class AdjRibInPost; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost
        class AdjRibOutPre; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre
        class AdjRibOutPost; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre> adj_rib_in_pre;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost> adj_rib_in_post;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre> adj_rib_out_pre;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost> adj_rib_out_post;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre : public ydk::Entity
{
    public:
        AdjRibInPre();
        ~AdjRibInPre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPre::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost : public ydk::Entity
{
    public:
        AdjRibInPost();
        ~AdjRibInPost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibInPost::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre : public ydk::Entity
{
    public:
        AdjRibOutPre();
        ~AdjRibOutPre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPre::Routes::Route::ExtAttributes::UnknownAttribute


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost : public ydk::Entity
{
    public:
        AdjRibOutPost();
        ~AdjRibOutPost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_routes; //type: uint64
        class Routes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes> routes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route> > route;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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
        ydk::YLeaf last_modified_date; //type: string
        ydk::YLeaf last_update_received; //type: string
        ydk::YLeaf valid_route; //type: boolean
        ydk::YLeaf invalid_reason; //type: INVALIDROUTEREASON
        ydk::YLeaf best_path; //type: boolean
        class Attributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes
        class ExtAttributes; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes> attributes;
        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes> ext_attributes;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin; //type: BgpOriginAttrType
        ydk::YLeaf as_path; //type: string
        ydk::YLeaf as4_path; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf med; //type: uint32
        ydk::YLeaf local_pref; //type: uint32
        ydk::YLeaf atomic_aggr; //type: boolean
        ydk::YLeafList community; //type: list of  one of string, uint32
        class Aggregator; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator

        std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator> aggregator;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator : public ydk::Entity
{
    public:
        Aggregator();
        ~Aggregator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as4; //type: uint32
        ydk::YLeaf address; //type: string

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::Attributes::Aggregator


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes : public ydk::Entity
{
    public:
        ExtAttributes();
        ~ExtAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf originator_id; //type: string
        ydk::YLeaf aigp; //type: uint64
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeafList cluster_list; //type: list of  string
        ydk::YLeafList ext_community; //type: list of  string
        class UnknownAttribute; //type: BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute

        std::vector<std::shared_ptr<openconfig::openconfig_rib_bgp::BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute> > unknown_attribute;
        
}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes


class BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute : public ydk::Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: uint16
        ydk::YLeaf attr_len; //type: uint16
        ydk::YLeaf attr_value; //type: binary

}; // BgpRib::AfiSafis::AfiSafi::Ipv6Unicast::Neighbors::Neighbor::AdjRibOutPost::Routes::Route::ExtAttributes::UnknownAttribute


}
}

#endif /* _OPENCONFIG_RIB_BGP_ */

