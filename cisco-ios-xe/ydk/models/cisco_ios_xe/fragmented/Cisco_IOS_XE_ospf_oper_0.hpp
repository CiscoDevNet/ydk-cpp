#ifndef _CISCO_IOS_XE_OSPF_OPER_0_
#define _CISCO_IOS_XE_OSPF_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ospf_oper {

class OspfOperData : public ydk::Entity
{
    public:
        OspfOperData();
        ~OspfOperData();

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

        class OspfState; //type: OspfOperData::OspfState
        class Ospfv2Instance; //type: OspfOperData::Ospfv2Instance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState> ospf_state; // presence node
        ydk::YList ospfv2_instance;
        
}; // OspfOperData


class OspfOperData::OspfState : public ydk::Entity
{
    public:
        OspfState();
        ~OspfState();

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

        ydk::YLeaf op_mode; //type: OspfOperationMode
        class OspfInstance; //type: OspfOperData::OspfState::OspfInstance

        ydk::YList ospf_instance;
        
}; // OspfOperData::OspfState


class OspfOperData::OspfState::OspfInstance : public ydk::Entity
{
    public:
        OspfInstance();
        ~OspfInstance();

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

        ydk::YLeaf af; //type: AddressFamily
        ydk::YLeaf router_id; //type: uint32
        ydk::YLeaf process_id; //type: uint16
        class OspfArea; //type: OspfOperData::OspfState::OspfInstance::OspfArea
        class LinkScopeLsas; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas
        class MultiTopology; //type: OspfOperData::OspfState::OspfInstance::MultiTopology

        ydk::YList ospf_area;
        ydk::YList link_scope_lsas;
        ydk::YList multi_topology;
        
}; // OspfOperData::OspfState::OspfInstance


class OspfOperData::OspfState::OspfInstance::OspfArea : public ydk::Entity
{
    public:
        OspfArea();
        ~OspfArea();

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
        class OspfInterface; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface
        class AreaScopeLsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa

        ydk::YList ospf_interface;
        ydk::YList area_scope_lsa;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface : public ydk::Entity
{
    public:
        OspfInterface();
        ~OspfInterface();

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
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf demand_circuit; //type: boolean
        ydk::YLeaf node_flag; //type: boolean
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dead_interval; //type: uint16
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf transmit_delay; //type: uint16
        ydk::YLeaf mtu_ignore; //type: boolean
        ydk::YLeaf lls; //type: boolean
        ydk::YLeaf prefix_suppression; //type: boolean
        ydk::YLeaf bfd; //type: boolean
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf state; //type: string
        ydk::YLeaf hello_timer; //type: uint32
        ydk::YLeaf wait_timer; //type: uint32
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf priority; //type: uint8
        class MultiArea; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea
        class StaticNeighbor; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor
        class FastReroute; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute
        class TtlSecurity; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity
        class Authentication; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication
        class OspfNeighbor; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor
        class IntfLinkScopeLsas; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas
        class IntfMultiTopology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea> multi_area;
        ydk::YList static_neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity> ttl_security;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication> authentication;
        ydk::YList ospf_neighbor;
        ydk::YList intf_link_scope_lsas;
        ydk::YList intf_multi_topology;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_area_id; //type: uint32
        ydk::YLeaf cost; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor : public ydk::Entity
{
    public:
        StaticNeighbor();
        ~StaticNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf poll_interval; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf candidate_disabled; //type: boolean
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf remote_lfa_enabled; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

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
        ydk::YLeaf hops; //type: uint8

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication : public ydk::Entity
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

        ydk::YLeaf sa; //type: string
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf key_string; //type: string
        ydk::YLeaf no_auth; //type: uint32
        class CryptoAlgorithmVal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal> crypto_algorithm_val;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal : public ydk::Entity
{
    public:
        CryptoAlgorithmVal();
        ~CryptoAlgorithmVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hmac_sha1_12; //type: empty
        ydk::YLeaf hmac_sha1_20; //type: empty
        ydk::YLeaf md5; //type: empty
        ydk::YLeaf sha_1; //type: empty
        ydk::YLeaf hmac_sha_1; //type: empty
        ydk::YLeaf hmac_sha_256; //type: empty
        ydk::YLeaf hmac_sha_384; //type: empty
        ydk::YLeaf hmac_sha_512; //type: empty

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor : public ydk::Entity
{
    public:
        OspfNeighbor();
        ~OspfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_id; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf bdr; //type: string
        ydk::YLeaf state; //type: NbrStateType
        class Stats; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats> stats;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbr_event_count; //type: uint32
        ydk::YLeaf nbr_retrans_qlen; //type: uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas : public ydk::Entity
{
    public:
        IntfLinkScopeLsas();
        ~IntfLinkScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint32
        class LinkScopeLsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa
        class AreaScopeLsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa

        ydk::YList link_scope_lsa;
        ydk::YList area_scope_lsa;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa : public ydk::Entity
{
    public:
        LinkScopeLsa();
        ~LinkScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_address; //type: string
        ydk::YLeafList raw_data; //type: list of  uint8
        class Ospfv2Lsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa
        class Ospfv2Link; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology
        class Ospfv2External; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External
        class Ospfv2UnknownTlv; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv
        class Ospfv3LsaVal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal
        class Ospfv3Link; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link
        class Ospfv3PrefixList; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList
        class Ospfv3IaPrefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix
        class MultiTopology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology
        class Tlv; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv
        class UnknownSubTlv; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa> ospfv2_lsa;
        ydk::YList ospfv2_link;
        ydk::YList ospfv2_topology;
        ydk::YList ospfv2_external;
        ydk::YList ospfv2_unknown_tlv;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal> ospfv3_lsa_val;
        ydk::YList ospfv3_link;
        ydk::YList ospfv3_prefix_list;
        ydk::YList ospfv3_ia_prefix;
        ydk::YList multi_topology;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv> tlv;
        ydk::YList unknown_sub_tlv;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa : public ydk::Entity
{
    public:
        Ospfv2Lsa();
        ~Ospfv2Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf flag_options; //type: LsaFlagOptions

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_of_links; //type: uint16
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf external_mask; //type: string
        ydk::YLeaf body_flag_options; //type: Ospfv2LsaBodyFlagsOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network> network;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link : public ydk::Entity
{
    public:
        Ospfv2Link();
        ~Ospfv2Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf link_data; //type: uint32
        ydk::YLeaf type; //type: uint8
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology

        ydk::YList ospfv2_topology;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External : public ydk::Entity
{
    public:
        Ospfv2External();
        ~Ospfv2External();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv : public ydk::Entity
{
    public:
        Ospfv2UnknownTlv();
        ~Ospfv2UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeafList value_; //type: list of  uint8

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal : public ydk::Entity
{
    public:
        Ospfv3LsaVal();
        ~Ospfv3LsaVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_hdr_options; //type: Ospfv3LsaOptions
        class LsaHeader; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader> lsa_header;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_flag_options; //type: Ospfv3LsaOptions
        ydk::YLeaf lsa_body_flags; //type: Ospfv3LsaBodyFlagOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network
        class Prefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix
        class IaRouter; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter
        class LsaExternal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal
        class Nssa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa
        class LinkData; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData
        class IaPrefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter> ia_router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal> lsa_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa> nssa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData> link_data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix> ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_net_options; //type: Ospfv3LsaOptions
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ia_prefix; //type: string
        ydk::YLeaf ia_prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter : public ydk::Entity
{
    public:
        IaRouter();
        ~IaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: uint32
        ydk::YLeaf lsa_ia_options; //type: Ospfv3LsaOptions

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal : public ydk::Entity
{
    public:
        LsaExternal();
        ~LsaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaNssaExternal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal> lsa_nssa_external;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal : public ydk::Entity
{
    public:
        LsaNssaExternal();
        ~LsaNssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList : public ydk::Entity
{
    public:
        Ospfv3PrefixList();
        ~Ospfv3PrefixList();

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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

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
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf max_bandwidth; //type: decimal64
        ydk::YLeaf max_reservable_bandwidth; //type: decimal64
        ydk::YLeaf unreserved_bandwidth; //type: decimal64
        ydk::YLeaf admin_group; //type: uint32
        ydk::YLeafList local_if_ipv4_addr; //type: list of  string
        ydk::YLeafList local_remote_ipv4_addr; //type: list of  string

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv : public ydk::Entity
{
    public:
        UnknownSubTlv();
        ~UnknownSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeafList value_; //type: list of  uint8

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa : public ydk::Entity
{
    public:
        AreaScopeLsa();
        ~AreaScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeafList raw_data; //type: list of  uint8
        class Ospfv2Lsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa
        class Ospfv2Link; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology
        class Ospfv2External; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External
        class Ospfv3Lsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa
        class Ospfv3Link; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link
        class Ospfv3Prefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix
        class Ospfv3IaPrefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa> ospfv2_lsa;
        ydk::YList ospfv2_link;
        ydk::YList ospfv2_topology;
        ydk::YList ospfv2_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa> ospfv3_lsa;
        ydk::YList ospfv3_link;
        ydk::YList ospfv3_prefix;
        ydk::YList ospfv3_ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa : public ydk::Entity
{
    public:
        Ospfv2Lsa();
        ~Ospfv2Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf flag_options; //type: LsaFlagOptions

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_of_links; //type: uint16
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf external_mask; //type: string
        ydk::YLeaf body_flag_options; //type: Ospfv2LsaBodyFlagsOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network> network;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link : public ydk::Entity
{
    public:
        Ospfv2Link();
        ~Ospfv2Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf link_data; //type: uint32
        ydk::YLeaf type; //type: uint8
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology

        ydk::YList ospfv2_topology;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External : public ydk::Entity
{
    public:
        Ospfv2External();
        ~Ospfv2External();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa : public ydk::Entity
{
    public:
        Ospfv3Lsa();
        ~Ospfv3Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_hdr_options; //type: Ospfv3LsaOptions
        class LsaHeader; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader> lsa_header;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_flag_options; //type: Ospfv3LsaOptions
        ydk::YLeaf lsa_body_flags; //type: Ospfv3LsaBodyFlagOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network
        class Prefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix
        class IaRouter; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter
        class LsaExternal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal
        class Nssa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa
        class LinkData; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData
        class IaPrefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter> ia_router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal> lsa_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa> nssa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData> link_data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix> ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_net_options; //type: Ospfv3LsaOptions
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ia_prefix; //type: string
        ydk::YLeaf ia_prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter : public ydk::Entity
{
    public:
        IaRouter();
        ~IaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: uint32
        ydk::YLeaf lsa_ia_options; //type: Ospfv3LsaOptions

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal : public ydk::Entity
{
    public:
        LsaExternal();
        ~LsaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaNssaExternal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal> lsa_nssa_external;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal : public ydk::Entity
{
    public:
        LsaNssaExternal();
        ~LsaNssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix


class OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology : public ydk::Entity
{
    public:
        IntfMultiTopology();
        ~IntfMultiTopology();

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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa : public ydk::Entity
{
    public:
        AreaScopeLsa();
        ~AreaScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint32
        class AreaScopeLsa_; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_

        ydk::YList area_scope_lsa;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_ : public ydk::Entity
{
    public:
        AreaScopeLsa_();
        ~AreaScopeLsa_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeafList raw_data; //type: list of  uint8
        class Ospfv2Lsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa
        class Ospfv2Link; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology
        class Ospfv2External; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External
        class Ospfv3Lsa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa
        class Ospfv3Link; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link
        class Ospfv3Prefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix
        class Ospfv3IaPrefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa> ospfv2_lsa;
        ydk::YList ospfv2_link;
        ydk::YList ospfv2_topology;
        ydk::YList ospfv2_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa> ospfv3_lsa;
        ydk::YList ospfv3_link;
        ydk::YList ospfv3_prefix;
        ydk::YList ospfv3_ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa : public ydk::Entity
{
    public:
        Ospfv2Lsa();
        ~Ospfv2Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf flag_options; //type: LsaFlagOptions

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_of_links; //type: uint16
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf external_mask; //type: string
        ydk::YLeaf body_flag_options; //type: Ospfv2LsaBodyFlagsOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network> network;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link : public ydk::Entity
{
    public:
        Ospfv2Link();
        ~Ospfv2Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf link_data; //type: uint32
        ydk::YLeaf type; //type: uint8
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology

        ydk::YList ospfv2_topology;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External : public ydk::Entity
{
    public:
        Ospfv2External();
        ~Ospfv2External();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa : public ydk::Entity
{
    public:
        Ospfv3Lsa();
        ~Ospfv3Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_hdr_options; //type: Ospfv3LsaOptions
        class LsaHeader; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader> lsa_header;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_flag_options; //type: Ospfv3LsaOptions
        ydk::YLeaf lsa_body_flags; //type: Ospfv3LsaBodyFlagOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network
        class Prefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix
        class IaRouter; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter
        class LsaExternal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal
        class Nssa; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa
        class LinkData; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData
        class IaPrefix; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter> ia_router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal> lsa_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa> nssa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData> link_data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix> ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_net_options; //type: Ospfv3LsaOptions
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ia_prefix; //type: string
        ydk::YLeaf ia_prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter : public ydk::Entity
{
    public:
        IaRouter();
        ~IaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: uint32
        ydk::YLeaf lsa_ia_options; //type: Ospfv3LsaOptions

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal : public ydk::Entity
{
    public:
        LsaExternal();
        ~LsaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaNssaExternal; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal> lsa_nssa_external;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal : public ydk::Entity
{
    public:
        LsaNssaExternal();
        ~LsaNssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix


class OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas : public ydk::Entity
{
    public:
        LinkScopeLsas();
        ~LinkScopeLsas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint32
        class LinkScopeLsa; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa
        class AreaScopeLsa; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa

        ydk::YList link_scope_lsa;
        ydk::YList area_scope_lsa;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa : public ydk::Entity
{
    public:
        LinkScopeLsa();
        ~LinkScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf router_address; //type: string
        ydk::YLeafList raw_data; //type: list of  uint8
        class Ospfv2Lsa; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa
        class Ospfv2Link; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology
        class Ospfv2External; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External
        class Ospfv2UnknownTlv; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv
        class Ospfv3LsaVal; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal
        class Ospfv3Link; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link
        class Ospfv3PrefixList; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList
        class Ospfv3IaPrefix; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix
        class MultiTopology; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology
        class Tlv; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv
        class UnknownSubTlv; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa> ospfv2_lsa;
        ydk::YList ospfv2_link;
        ydk::YList ospfv2_topology;
        ydk::YList ospfv2_external;
        ydk::YList ospfv2_unknown_tlv;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal> ospfv3_lsa_val;
        ydk::YList ospfv3_link;
        ydk::YList ospfv3_prefix_list;
        ydk::YList ospfv3_ia_prefix;
        ydk::YList multi_topology;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv> tlv;
        ydk::YList unknown_sub_tlv;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa : public ydk::Entity
{
    public:
        Ospfv2Lsa();
        ~Ospfv2Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf flag_options; //type: LsaFlagOptions

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_of_links; //type: uint16
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf external_mask; //type: string
        ydk::YLeaf body_flag_options; //type: Ospfv2LsaBodyFlagsOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network> network;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link : public ydk::Entity
{
    public:
        Ospfv2Link();
        ~Ospfv2Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf link_data; //type: uint32
        ydk::YLeaf type; //type: uint8
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology

        ydk::YList ospfv2_topology;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External : public ydk::Entity
{
    public:
        Ospfv2External();
        ~Ospfv2External();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv : public ydk::Entity
{
    public:
        Ospfv2UnknownTlv();
        ~Ospfv2UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeafList value_; //type: list of  uint8

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal : public ydk::Entity
{
    public:
        Ospfv3LsaVal();
        ~Ospfv3LsaVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_hdr_options; //type: Ospfv3LsaOptions
        class LsaHeader; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader> lsa_header;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_flag_options; //type: Ospfv3LsaOptions
        ydk::YLeaf lsa_body_flags; //type: Ospfv3LsaBodyFlagOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network
        class Prefix; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix
        class IaRouter; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter
        class LsaExternal; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal
        class Nssa; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa
        class LinkData; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData
        class IaPrefix; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter> ia_router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal> lsa_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa> nssa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData> link_data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix> ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_net_options; //type: Ospfv3LsaOptions
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ia_prefix; //type: string
        ydk::YLeaf ia_prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter : public ydk::Entity
{
    public:
        IaRouter();
        ~IaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: uint32
        ydk::YLeaf lsa_ia_options; //type: Ospfv3LsaOptions

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal : public ydk::Entity
{
    public:
        LsaExternal();
        ~LsaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaNssaExternal; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal> lsa_nssa_external;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal : public ydk::Entity
{
    public:
        LsaNssaExternal();
        ~LsaNssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList : public ydk::Entity
{
    public:
        Ospfv3PrefixList();
        ~Ospfv3PrefixList();

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

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology : public ydk::Entity
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

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

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
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf max_bandwidth; //type: decimal64
        ydk::YLeaf max_reservable_bandwidth; //type: decimal64
        ydk::YLeaf unreserved_bandwidth; //type: decimal64
        ydk::YLeaf admin_group; //type: uint32
        ydk::YLeafList local_if_ipv4_addr; //type: list of  string
        ydk::YLeafList local_remote_ipv4_addr; //type: list of  string

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv : public ydk::Entity
{
    public:
        UnknownSubTlv();
        ~UnknownSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf length; //type: uint16
        ydk::YLeafList value_; //type: list of  uint8

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa : public ydk::Entity
{
    public:
        AreaScopeLsa();
        ~AreaScopeLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_type; //type: uint32
        ydk::YLeaf adv_router; //type: string
        ydk::YLeaf decoded_completed; //type: boolean
        ydk::YLeafList raw_data; //type: list of  uint8
        class Ospfv2Lsa; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa
        class Ospfv2Link; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology
        class Ospfv2External; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External
        class Ospfv3Lsa; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa
        class Ospfv3Link; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link
        class Ospfv3Prefix; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix
        class Ospfv3IaPrefix; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa> ospfv2_lsa;
        ydk::YList ospfv2_link;
        ydk::YList ospfv2_topology;
        ydk::YList ospfv2_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa> ospfv3_lsa;
        ydk::YList ospfv3_link;
        ydk::YList ospfv3_prefix;
        ydk::YList ospfv3_ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa : public ydk::Entity
{
    public:
        Ospfv2Lsa();
        ~Ospfv2Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf opaque_type; //type: uint8
        ydk::YLeaf opaque_id; //type: uint32
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf flag_options; //type: LsaFlagOptions

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_of_links; //type: uint16
        ydk::YLeaf summary_mask; //type: string
        ydk::YLeaf external_mask; //type: string
        ydk::YLeaf body_flag_options; //type: Ospfv2LsaBodyFlagsOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network> network;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network_mask; //type: string
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link : public ydk::Entity
{
    public:
        Ospfv2Link();
        ~Ospfv2Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: uint32
        ydk::YLeaf link_data; //type: uint32
        ydk::YLeaf type; //type: uint8
        class Ospfv2Topology; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology

        ydk::YList ospfv2_topology;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology : public ydk::Entity
{
    public:
        Ospfv2Topology();
        ~Ospfv2Topology();

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
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External : public ydk::Entity
{
    public:
        Ospfv2External();
        ~Ospfv2External();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa : public ydk::Entity
{
    public:
        Ospfv3Lsa();
        ~Ospfv3Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header
        class LsaBody; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody> lsa_body;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_id; //type: string
        ydk::YLeaf lsa_hdr_options; //type: Ospfv3LsaOptions
        class LsaHeader; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader> lsa_header;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader : public ydk::Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf age; //type: uint16
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf adv_router; //type: uint32
        ydk::YLeaf seq_num; //type: string
        ydk::YLeaf checksum; //type: string
        ydk::YLeaf length; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody : public ydk::Entity
{
    public:
        LsaBody();
        ~LsaBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_flag_options; //type: Ospfv3LsaOptions
        ydk::YLeaf lsa_body_flags; //type: Ospfv3LsaBodyFlagOptions
        class Network; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network
        class Prefix; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix
        class IaRouter; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter
        class LsaExternal; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal
        class Nssa; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa
        class LinkData; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData
        class IaPrefix; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter> ia_router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal> lsa_external;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa> nssa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData> link_data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix> ia_prefix;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_net_options; //type: Ospfv3LsaOptions
        ydk::YLeafList attached_router; //type: list of  uint32

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ia_prefix; //type: string
        ydk::YLeaf ia_prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter : public ydk::Entity
{
    public:
        IaRouter();
        ~IaRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf destination_router_id; //type: uint32
        ydk::YLeaf lsa_ia_options; //type: Ospfv3LsaOptions

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal : public ydk::Entity
{
    public:
        LsaExternal();
        ~LsaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LsaNssaExternal; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal> lsa_nssa_external;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal : public ydk::Entity
{
    public:
        LsaNssaExternal();
        ~LsaNssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf external_prefix; //type: string
        ydk::YLeaf external_prefix_options; //type: string
        ydk::YLeaf forwarding_address; //type: string
        ydk::YLeaf external_route_tag; //type: uint32
        ydk::YLeaf referenced_link_state_id; //type: uint32
        class Flags; //type: OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ospf_oper::OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags> flags;
        
}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_flag; //type: boolean

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags

class NbrStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_nbr_down;
        static const ydk::Enum::YLeaf ospf_nbr_attempt;
        static const ydk::Enum::YLeaf ospf_nbr_init;
        static const ydk::Enum::YLeaf ospf_nbr_two_way;
        static const ydk::Enum::YLeaf ospf_nbr_exchange_start;
        static const ydk::Enum::YLeaf ospf_nbr_exchange;
        static const ydk::Enum::YLeaf ospf_nbr_loading;
        static const ydk::Enum::YLeaf ospf_nbr_full;

};

class Ospfv2IntfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospfv2_interface_state_down;
        static const ydk::Enum::YLeaf ospfv2_interface_state_loopback;
        static const ydk::Enum::YLeaf ospfv2_interface_state_waiting;
        static const ydk::Enum::YLeaf ospfv2_interface_state_point_to_mpoint;
        static const ydk::Enum::YLeaf ospfv2_interface_state_point_to_point;
        static const ydk::Enum::YLeaf ospfv2_interface_state_dr;
        static const ydk::Enum::YLeaf ospfv2_interface_state_backup;
        static const ydk::Enum::YLeaf ospfv2_interface_state_other;

};

class Ospfv2LsaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospfv2_lsa_type_unsupported_lsa_type;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_router;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_network;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_summary_net;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_summary_router;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_as_external;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_nssa;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_link_scope_opaque;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_area_scope_opaque;
        static const ydk::Enum::YLeaf ospfv2_lsa_type_as_scope_opaque;

};

class OspfNetworkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_broadcast;
        static const ydk::Enum::YLeaf ospf_non_broadcast;
        static const ydk::Enum::YLeaf ospf_point_to_multipoint;
        static const ydk::Enum::YLeaf ospf_point_to_point;

};

class Ospfv2CryptoAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospfv2_crypto_cleartest;
        static const ydk::Enum::YLeaf ospfv2_crypto_md5;

};

class OspfAuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_auth_ipsec;
        static const ydk::Enum::YLeaf ospf_auth_trailer_keychain;
        static const ydk::Enum::YLeaf ospf_auth_trailer_key;
        static const ydk::Enum::YLeaf ospf_auth_type_none;

};

class OspfExternalMetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_ext_metric_type_1;
        static const ydk::Enum::YLeaf ospf_ext_metric_type_2;

};

class OspfOperationMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospf_ships_in_the_night;

};

class AddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address_family_ipv4;
        static const ydk::Enum::YLeaf address_family_ipv6;

};

class Ospfv2AuthTypeSelection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospfv2_auth_none;
        static const ydk::Enum::YLeaf ospfv2_auth_trailer_key;
        static const ydk::Enum::YLeaf ospfv2_auth_trailer_key_chain;

};


}
}

#endif /* _CISCO_IOS_XE_OSPF_OPER_0_ */

