#ifndef _CISCO_IOS_XR_IPV4_BGP_OC_OPER_1_
#define _CISCO_IOS_XR_IPV4_BGP_OC_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oc_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oc_oper {


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::ExtAttributesList::UnknownAttributes : public ydk::Entity
{
    public:
        UnknownAttributes();
        ~UnknownAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_value; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::LastUpdateRecieved


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName : public ydk::Entity
{
    public:
        PrefixName();
        ~PrefixName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint8
        class Prefix; //type: OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix> prefix;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::PrefixName::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes> aggregrator_attributes;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community> > community;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oc_oper::OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop> next_hop;
        
}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes : public ydk::Entity
{
    public:
        AggregratorAttributes();
        ~AggregratorAttributes();

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

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::AggregratorAttributes


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf objects; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::Community


class OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop : public ydk::Entity
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

        ydk::YLeaf afi; //type: BgpOcAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // OcBgp::BgpRib::AfiSafiTable::Ipv6Unicast::OpenConfigNeighbors::OpenConfigNeighbor::AdjRibOutPre::Routes::Route::RouteAttrList::NextHop


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OC_OPER_1_ */

