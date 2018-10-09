#ifndef _CISCO_IOS_XE_OSPF_OPER_1_
#define _CISCO_IOS_XE_OSPF_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_ospf_oper_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ospf_oper {


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_priority; //type: uint8
        ydk::YLeaf link_local_interface_address; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint32
        ydk::YLeaf lsa_id_options; //type: Ospfv3LsaOptions

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix : public ydk::Entity
{
    public:
        IaPrefix();
        ~IaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf referenced_link_state_id; //type: uint32
        ydk::YLeaf referenced_adv_router; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link : public ydk::Entity
{
    public:
        Ospfv3Link();
        ~Ospfv3Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_router_id; //type: uint32
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix : public ydk::Entity
{
    public:
        Ospfv3Prefix();
        ~Ospfv3Prefix();

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
        ydk::YLeaf prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix : public ydk::Entity
{
    public:
        Ospfv3IaPrefix();
        ~Ospfv3IaPrefix();

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
        ydk::YLeaf prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix


class OspfOperData::OspfState::OspfInstance::MultiTopology : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // OspfOperData::OspfState::OspfInstance::MultiTopology


class OspfOperData::Ospfv2Instance : public ydk::Entity
{
    public:
        Ospfv2Instance();
        ~Ospfv2Instance();

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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf router_id; //type: uint32
        class Ospfv2Area; //type: OspfOperData::Ospfv2Instance::Ospfv2Area
        class Ospfv2LsdbExternal; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal

        ydk::YList ospfv2_area;
        ydk::YList ospfv2_lsdb_external;
        
}; // OspfOperData::Ospfv2Instance


class OspfOperData::Ospfv2Instance::Ospfv2Area : public ydk::Entity
{
    public:
        Ospfv2Area();
        ~Ospfv2Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: uint32
        class Ospfv2LsdbArea; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea
        class Ospfv2Interface; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface

        ydk::YList ospfv2_lsdb_area;
        ydk::YList ospfv2_interface;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea : public ydk::Entity
{
    public:
        Ospfv2LsdbArea();
        ~Ospfv2LsdbArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf lsa_id; //type: uint32
        ydk::YLeaf advertising_router; //type: uint32
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf lsa_options; //type: Ospfv2LsaFlagOptions
        ydk::YLeaf lsa_seq_number; //type: uint32
        ydk::YLeaf lsa_checksum; //type: uint16
        ydk::YLeaf lsa_length; //type: uint16
        class Ospfv2RouterLsaLinks; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks
        class UnsupportedLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa
        class RouterLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa
        class NetworkLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa
        class NetworkSummaryLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa
        class RouterSummaryLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa
        class ExternalLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa
        class NssaLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa

        ydk::YList ospfv2_router_lsa_links;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa> unsupported_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa> router_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa> network_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa> network_summary_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa> router_summary_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa> external_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa> nssa_lsa;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks : public ydk::Entity
{
    public:
        Ospfv2RouterLsaLinks();
        ~Ospfv2RouterLsaLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: uint8
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf link_data; //type: uint32
        class LinkTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo

        ydk::YList link_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo : public ydk::Entity
{
    public:
        LinkTopo();
        ~LinkTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric; //type: uint16

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::Ospfv2RouterLsaLinks::LinkTopo


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa : public ydk::Entity
{
    public:
        UnsupportedLsa();
        ~UnsupportedLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList lsa_data; //type: list of  uint8

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::UnsupportedLsa


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa : public ydk::Entity
{
    public:
        RouterLsa();
        ~RouterLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_lsa_bits; //type: Ospfv2RouterLsaBits
        ydk::YLeaf router_lsa_number_links; //type: uint16

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterLsa


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa : public ydk::Entity
{
    public:
        NetworkLsa();
        ~NetworkLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_lsa_mask; //type: uint32
        ydk::YLeafList network_attached_routers; //type: list of  uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkLsa


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa : public ydk::Entity
{
    public:
        NetworkSummaryLsa();
        ~NetworkSummaryLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_lsa_mask; //type: uint32
        class SummaryTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo

        ydk::YList summary_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo : public ydk::Entity
{
    public:
        SummaryTopo();
        ~SummaryTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NetworkSummaryLsa::SummaryTopo


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa : public ydk::Entity
{
    public:
        RouterSummaryLsa();
        ~RouterSummaryLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_lsa_mask; //type: uint32
        class SummaryTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo

        ydk::YList summary_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo : public ydk::Entity
{
    public:
        SummaryTopo();
        ~SummaryTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::RouterSummaryLsa::SummaryTopo


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa : public ydk::Entity
{
    public:
        ExternalLsa();
        ~ExternalLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_lsa_mask; //type: uint32
        class ExternalTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo

        ydk::YList external_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo : public ydk::Entity
{
    public:
        ExternalTopo();
        ~ExternalTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric_type; //type: OspfExternalMetricType
        ydk::YLeaf topo_metric; //type: uint32
        ydk::YLeaf topo_forwarding_address; //type: string
        ydk::YLeaf topo_route_tag; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::ExternalLsa::ExternalTopo


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa : public ydk::Entity
{
    public:
        NssaLsa();
        ~NssaLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_lsa_mask; //type: uint32
        class ExternalTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo

        ydk::YList external_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo : public ydk::Entity
{
    public:
        ExternalTopo();
        ~ExternalTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric_type; //type: OspfExternalMetricType
        ydk::YLeaf topo_metric; //type: uint32
        ydk::YLeaf topo_forwarding_address; //type: string
        ydk::YLeaf topo_route_tag; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2LsdbArea::NssaLsa::ExternalTopo


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface : public ydk::Entity
{
    public:
        Ospfv2Interface();
        ~Ospfv2Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf network_type; //type: OspfNetworkType
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf prefix_suppresion; //type: boolean
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf transmit_delay; //type: uint16
        ydk::YLeaf hello_timer; //type: uint32
        ydk::YLeaf wait_timer; //type: uint32
        ydk::YLeaf dr; //type: uint32
        ydk::YLeaf bdr; //type: uint32
        ydk::YLeaf dr_ip; //type: string
        ydk::YLeaf bdr_ip; //type: string
        ydk::YLeaf state; //type: Ospfv2IntfState
        class TtlSecurityVal; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal
        class AuthVal; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal
        class Ospfv2Neighbor; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal> ttl_security_val;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal> auth_val;
        ydk::YList ospfv2_neighbor;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal : public ydk::Entity
{
    public:
        TtlSecurityVal();
        ~TtlSecurityVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf hops; //type: int32

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::TtlSecurityVal


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal : public ydk::Entity
{
    public:
        AuthVal();
        ~AuthVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_auth; //type: uint32
        class AuthKey; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey
        class KeyChain; //type: OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey> auth_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain> key_chain;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey : public ydk::Entity
{
    public:
        AuthKey();
        ~AuthKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: uint8
        ydk::YLeaf crypto_algo; //type: Ospfv2CryptoAlgorithm
        ydk::YLeafList key_string; //type: list of  uint8

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::AuthKey


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList key_chain; //type: list of  uint8

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::AuthVal::KeyChain


class OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor : public ydk::Entity
{
    public:
        Ospfv2Neighbor();
        ~Ospfv2Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbr_id; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf dr; //type: uint32
        ydk::YLeaf bdr; //type: uint32
        ydk::YLeaf dr_ip; //type: string
        ydk::YLeaf bdr_ip; //type: string
        ydk::YLeaf event_count; //type: uint32
        ydk::YLeaf retrans_count; //type: uint32
        ydk::YLeaf state; //type: NbrStateType
        ydk::YLeaf dead_timer; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2Area::Ospfv2Interface::Ospfv2Neighbor


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal : public ydk::Entity
{
    public:
        Ospfv2LsdbExternal();
        ~Ospfv2LsdbExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint8
        ydk::YLeaf lsa_id; //type: uint32
        ydk::YLeaf advertising_router; //type: uint32
        ydk::YLeaf lsa_age; //type: uint16
        ydk::YLeaf lsa_options; //type: Ospfv2LsaFlagOptions
        ydk::YLeaf lsa_seq_number; //type: uint32
        ydk::YLeaf lsa_checksum; //type: uint16
        ydk::YLeaf lsa_length; //type: uint16
        class Ospfv2RouterLsaLinks; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks
        class UnsupportedLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa
        class RouterLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa
        class NetworkLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa
        class NetworkSummaryLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa
        class RouterSummaryLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa
        class ExternalLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa
        class NssaLsa; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa

        ydk::YList ospfv2_router_lsa_links;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa> unsupported_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa> router_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa> network_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa> network_summary_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa> router_summary_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa> external_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa> nssa_lsa;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks : public ydk::Entity
{
    public:
        Ospfv2RouterLsaLinks();
        ~Ospfv2RouterLsaLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_type; //type: uint8
        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf link_data; //type: uint32
        class LinkTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo

        ydk::YList link_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo : public ydk::Entity
{
    public:
        LinkTopo();
        ~LinkTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric; //type: uint16

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::Ospfv2RouterLsaLinks::LinkTopo


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa : public ydk::Entity
{
    public:
        UnsupportedLsa();
        ~UnsupportedLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList lsa_data; //type: list of  uint8

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::UnsupportedLsa


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa : public ydk::Entity
{
    public:
        RouterLsa();
        ~RouterLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_lsa_bits; //type: Ospfv2RouterLsaBits
        ydk::YLeaf router_lsa_number_links; //type: uint16

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterLsa


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa : public ydk::Entity
{
    public:
        NetworkLsa();
        ~NetworkLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_lsa_mask; //type: uint32
        ydk::YLeafList network_attached_routers; //type: list of  uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkLsa


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa : public ydk::Entity
{
    public:
        NetworkSummaryLsa();
        ~NetworkSummaryLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_lsa_mask; //type: uint32
        class SummaryTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo

        ydk::YList summary_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo : public ydk::Entity
{
    public:
        SummaryTopo();
        ~SummaryTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NetworkSummaryLsa::SummaryTopo


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa : public ydk::Entity
{
    public:
        RouterSummaryLsa();
        ~RouterSummaryLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_lsa_mask; //type: uint32
        class SummaryTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo

        ydk::YList summary_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo : public ydk::Entity
{
    public:
        SummaryTopo();
        ~SummaryTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::RouterSummaryLsa::SummaryTopo


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa : public ydk::Entity
{
    public:
        ExternalLsa();
        ~ExternalLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_lsa_mask; //type: uint32
        class ExternalTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo

        ydk::YList external_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo : public ydk::Entity
{
    public:
        ExternalTopo();
        ~ExternalTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric_type; //type: OspfExternalMetricType
        ydk::YLeaf topo_metric; //type: uint32
        ydk::YLeaf topo_forwarding_address; //type: string
        ydk::YLeaf topo_route_tag; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::ExternalLsa::ExternalTopo


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa : public ydk::Entity
{
    public:
        NssaLsa();
        ~NssaLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_lsa_mask; //type: uint32
        class ExternalTopo; //type: OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo

        ydk::YList external_topo;
        
}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa


class OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo : public ydk::Entity
{
    public:
        ExternalTopo();
        ~ExternalTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mt_id; //type: uint8
        ydk::YLeaf topo_metric_type; //type: OspfExternalMetricType
        ydk::YLeaf topo_metric; //type: uint32
        ydk::YLeaf topo_forwarding_address; //type: string
        ydk::YLeaf topo_route_tag; //type: uint32

}; // OspfOperData::Ospfv2Instance::Ospfv2LsdbExternal::NssaLsa::ExternalTopo


}
}

#endif /* _CISCO_IOS_XE_OSPF_OPER_1_ */

