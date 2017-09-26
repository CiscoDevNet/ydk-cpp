#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_1_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType : public ydk::Entity
{
    public:
        OpaqueMplsTeLsaType();
        ~OpaqueMplsTeLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv : public ydk::Entity
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

        ydk::YLeaf tlv_type; //type: uint16
        ydk::YLeaf tlv_length; //type: uint16
        ydk::YLeaf mpls_router_id; //type: uint32
        ydk::YLeaf mpls_dste_link; //type: boolean
        ydk::YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv : public ydk::Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sub_tlv_type; //type: Stlv
        ydk::YLeaf sub_tlv_length; //type: uint16
        ydk::YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType : public ydk::Entity
{
    public:
        OpaqueRouterInfoLsaType();
        ~OpaqueRouterInfoLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_rilsa_scope; //type: OspfLsaOpqRiScope
        ydk::YLeaf opaque_ri_interface_name; //type: string
        class OpaqueRitlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv> > opaque_ritlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv : public ydk::Entity
{
    public:
        OpaqueRitlv();
        ~OpaqueRitlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ritlv_internal_type; //type: OspfShOpqRiTlvTypes
        class UnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv
        class RtrCapTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv
        class Pcedtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv
        class SrAlgoTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv
        class SrRangeTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv
        class NodeMsdtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv> node_msdtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv> pcedtlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv> rtr_cap_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv> sr_algo_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv> sr_range_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv> unknown_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv : public ydk::Entity
{
    public:
        NodeMsdtlv();
        ~NodeMsdtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_msdtlv_length; //type: uint16
        class NodeMsdSubTypes; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes> node_msd_sub_types;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes : public ydk::Entity
{
    public:
        NodeMsdSubTypes();
        ~NodeMsdSubTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msd_sub_type; //type: uint8
        ydk::YLeaf msd_value; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv : public ydk::Entity
{
    public:
        Pcedtlv();
        ~Pcedtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcedtlv_length; //type: uint16
        class PcedAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr
        class PcedScope; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr> pced_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope> pced_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr : public ydk::Entity
{
    public:
        PcedAddr();
        ~PcedAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce_addr_type; //type: OspfShOpqRiPceAddrTypes
        class PceAddrUnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv
        class Ipv4PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr
        class Ipv6PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr> ipv4pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr> ipv6pce_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv> pce_addr_unknown_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr : public ydk::Entity
{
    public:
        Ipv4PceAddr();
        ~Ipv4PceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv4_addr; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr : public ydk::Entity
{
    public:
        Ipv6PceAddr();
        ~Ipv6PceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pceipv6_addr; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv : public ydk::Entity
{
    public:
        PceAddrUnknownTlv();
        ~PceAddrUnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope : public ydk::Entity
{
    public:
        PcedScope();
        ~PcedScope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lbit; //type: boolean
        ydk::YLeaf rbit; //type: boolean
        ydk::YLeaf rd_bit; //type: boolean
        ydk::YLeaf sbit; //type: boolean
        ydk::YLeaf sd_bit; //type: boolean
        ydk::YLeaf ybit; //type: boolean
        ydk::YLeaf pref_l; //type: uint8
        ydk::YLeaf pref_r; //type: uint8
        ydk::YLeaf pref_s; //type: uint8
        ydk::YLeaf pref_y; //type: uint8
        ydk::YLeaf all_scope_info_bits; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv : public ydk::Entity
{
    public:
        RtrCapTlv();
        ~RtrCapTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_cap_tlv_length; //type: uint16
        ydk::YLeaf rtr_cap_graceful_restart; //type: boolean
        ydk::YLeaf rtr_cap_graceful_restart_helper; //type: boolean
        ydk::YLeaf rtr_cap_stub_rtr; //type: boolean
        ydk::YLeaf rtr_cap_area_te; //type: boolean
        ydk::YLeaf rtr_cap_p2plan; //type: boolean
        ydk::YLeaf rtr_cap_te_exp; //type: boolean
        ydk::YLeaf rtr_cap_all_bits; //type: uint32
        ydk::YLeaf rtr_cap_additional_info; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv : public ydk::Entity
{
    public:
        SrAlgoTlv();
        ~SrAlgoTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_algo_length; //type: uint16
        ydk::YLeaf sr_algo_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv : public ydk::Entity
{
    public:
        SrRangeTlv();
        ~SrRangeTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_range_length; //type: uint16
        ydk::YLeaf sr_range_size; //type: uint32
        class Sidtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv> sidtlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv : public ydk::Entity
{
    public:
        Sidtlv();
        ~Sidtlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sr_sid_length; //type: uint16
        ydk::YLeaf sr_sid_value; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv : public ydk::Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ri_gen_tlv_type; //type: uint16
        ydk::YLeaf ri_gen_tlv_length; //type: uint16
        ydk::YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType : public ydk::Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_asbr; //type: boolean
        ydk::YLeaf router_abr; //type: boolean
        ydk::YLeaf internal_lsa; //type: boolean
        class Link; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link
        class InternalLink; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink> > internal_link;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link> > link;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink : public ydk::Entity
{
    public:
        InternalLink();
        ~InternalLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_id; //type: string
        ydk::YLeaf link_data; //type: string
        ydk::YLeaf link_type; //type: OspfLinkTypes
        ydk::YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos : public ydk::Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_tos; //type: uint16
        ydk::YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType : public ydk::Entity
{
    public:
        SummaryLsaType();
        ~SummaryLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf summary_prefix_length; //type: uint32
        ydk::YLeaf internal_sum_lsa; //type: boolean
        class SummaryLsaMetric; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric> > summary_lsa_metric;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric : public ydk::Entity
{
    public:
        SummaryLsaMetric();
        ~SummaryLsaMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric


class Ospf::Processes::Process::DefaultVrf::FastReroute : public ydk::Entity
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

        class Topologies; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies> topologies;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute


class Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies : public ydk::Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology> > topology;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies


class Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf ipfrr_topo_area_id; //type: string
        ydk::YLeaf ipfrr_router_id; //type: string
        ydk::YLeaf ipfrr_area_revision; //type: uint32
        class IpfrrTopo; //type: Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo> > ipfrr_topo;
        
}; // Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology


class Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo : public ydk::Entity
{
    public:
        IpfrrTopo();
        ~IpfrrTopo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf distance_reverse; //type: uint32
        ydk::YLeaf type4; //type: boolean
        ydk::YLeaf revision; //type: uint32
        ydk::YLeaf neighbor_sourced; //type: boolean
        ydk::YLeaf dr; //type: boolean
        ydk::YLeaf poison; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::FastReroute::Topologies::Topology::IpfrrTopo


class Ospf::Processes::Process::DefaultVrf::FloodListTable : public ydk::Entity
{
    public:
        FloodListTable();
        ~FloodListTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flood; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood> > flood;
        
}; // Ospf::Processes::Process::DefaultVrf::FloodListTable


class Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood : public ydk::Entity
{
    public:
        Flood();
        ~Flood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf flood_interface_name; //type: string
        ydk::YLeaf flood_pacing_timer; //type: uint32
        ydk::YLeaf flood_lsa_count; //type: uint32
        class AreaFlood; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood> > as_flood;
        
}; // Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood


class Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood : public ydk::Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood


class Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood : public ydk::Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header_lsa_type; //type: Lsa
        ydk::YLeaf header_lsa_age; //type: uint16
        ydk::YLeaf header_ls_id; //type: string
        ydk::YLeaf header_advertising_router; //type: string
        ydk::YLeaf header_sequence_number; //type: uint32
        ydk::YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation : public ydk::Entity
{
    public:
        InterfaceInformation();
        ~InterfaceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLinks; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks
        class InterfaceBriefs; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs
        class Interfaces; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks> virtual_links;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs : public ydk::Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceBrief; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief> > interface_brief;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj> > interface_madj;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces : public ydk::Entity
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

        class Interface; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface> > interface;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_state; //type: InterfaceState
        ydk::YLeaf interface_line_state; //type: boolean
        ydk::YLeaf interface_address; //type: string
        ydk::YLeaf interface_mask; //type: uint32
        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf interface_sid; //type: uint32
        ydk::YLeaf interface_sid_php_off; //type: boolean
        ydk::YLeaf interface_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_strict_spf_sid; //type: uint32
        ydk::YLeaf interface_strict_spf_sid_php_off; //type: boolean
        ydk::YLeaf interface_strict_spf_sid_n_flag_clear; //type: boolean
        ydk::YLeaf interface_router_id; //type: string
        ydk::YLeaf network_type; //type: Interface
        ydk::YLeaf ip_mtu; //type: uint16
        ydk::YLeaf maximum_packet_size; //type: uint16
        ydk::YLeaf interface_tunnel_flags; //type: uint32
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf interface_bandwidth; //type: uint32
        ydk::YLeaf cfg_cost_fallback; //type: boolean
        ydk::YLeaf interface_cost_fallback; //type: uint16
        ydk::YLeaf cost_fallback_active; //type: boolean
        ydk::YLeaf configured_ldp_sync; //type: boolean
        ydk::YLeaf configured_ldp_sync_igp_shortcuts; //type: boolean
        ydk::YLeaf interface_ldp_sync; //type: boolean
        ydk::YLeaf configured_demand_circuit; //type: boolean
        ydk::YLeaf interface_demand_circuit; //type: boolean
        ydk::YLeaf interface_dc_bitless_lsa_count; //type: uint32
        ydk::YLeaf transmission_delay; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState
        ydk::YLeaf interface_priority; //type: uint8
        ydk::YLeaf designated_router; //type: boolean
        ydk::YLeaf designated_router_id; //type: string
        ydk::YLeaf designated_router_address; //type: string
        ydk::YLeaf backup_designated_router; //type: boolean
        ydk::YLeaf backup_designated_router_id; //type: string
        ydk::YLeaf backup_designated_router_address; //type: string
        ydk::YLeaf network_lsa_flush_timer; //type: uint32
        ydk::YLeaf interface_lsa_filter; //type: boolean
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf hello_interval_ms; //type: uint32
        ydk::YLeaf dead_interval; //type: uint32
        ydk::YLeaf wait_interval; //type: uint32
        ydk::YLeaf interface_retransmission_interrval; //type: uint32
        ydk::YLeaf interface_nsf_enabled; //type: boolean
        ydk::YLeaf interface_nsf; //type: boolean
        ydk::YLeaf interface_last_nsf; //type: uint32
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf next_hello_time; //type: uint32
        ydk::YLeaf next_hello_time_ms; //type: uint32
        ydk::YLeaf ttl_security_enabled; //type: boolean
        ydk::YLeaf ttl_security_hop_count; //type: uint32
        ydk::YLeaf interfaceis_madj; //type: boolean
        ydk::YLeaf interface_madj_count; //type: uint16
        ydk::YLeaf prefix_suppress_primary_addresses; //type: boolean
        ydk::YLeaf prefix_suppress_secondary_addresses; //type: boolean
        ydk::YLeaf is_loopback_stub_network; //type: boolean
        ydk::YLeaf interface_ack_list_count; //type: uint32
        ydk::YLeaf interface_ack_list_high_watermark; //type: uint32
        ydk::YLeaf registered_for_link_down_fast_detection; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time; //type: uint32
        ydk::YLeaf interface_fast_detect_hold_down; //type: boolean
        ydk::YLeaf fast_detect_hold_down_time_remaining; //type: uint32
        ydk::YLeaf fast_reroute_type; //type: Ipfrr
        ydk::YLeaf fast_reroute_topology_independent_lfa; //type: boolean
        ydk::YLeaf interface_unnum; //type: string
        ydk::YLeaf interface_forw; //type: boolean
        ydk::YLeaf interface_pri_labels; //type: uint8
        ydk::YLeaf interface_bkp_labels; //type: uint8
        ydk::YLeaf interface_srte_labels; //type: uint8
        class InterfaceBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation
        class ActiveInterface; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface
        class Srlg; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg
        class InterfaceNeighbor; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj
        class IpfrrTiebreakers; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers
        class IpSecAddr; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface> active_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj> > interface_madj;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor> > interface_neighbor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr> > ip_sec_addr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers> > ipfrr_tiebreakers;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg> > srlg;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface : public ydk::Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf interface_area_flood_index; //type: uint32
        ydk::YLeaf interface_as_flood_index; //type: uint32
        ydk::YLeaf interface_flood_length; //type: uint32
        ydk::YLeaf interface_area_next_flood; //type: uint32
        ydk::YLeaf interface_area_next_flood_index; //type: uint32
        ydk::YLeaf interface_as_next_flood; //type: uint32
        ydk::YLeaf interface_as_next_flood_index; //type: uint32
        ydk::YLeaf flood_scan_length; //type: uint32
        ydk::YLeaf maximum_flood_length; //type: uint32
        ydk::YLeaf last_flood_time; //type: uint32
        ydk::YLeaf maximum_flood_time; //type: uint32
        ydk::YLeaf interface_flood_pacing_timer; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf suppress_hello_count; //type: uint16
        ydk::YLeaf interface_authentication_type; //type: Authentication
        ydk::YLeaf youngest_md_key; //type: boolean
        ydk::YLeaf old_md5_key_neighbor_count; //type: uint32
        ydk::YLeaf youngest_md_key_id; //type: uint16
        ydk::YLeaf keychain_id; //type: uint64
        class MdKeys; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys> > md_keys;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys : public ydk::Entity
{
    public:
        MdKeys();
        ~MdKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface::MdKeys


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation : public ydk::Entity
{
    public:
        InterfaceBfdInformation();
        ~InterfaceBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd_intf_enable_mode; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj : public ydk::Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_area; //type: string
        ydk::YLeaf madj_area_id; //type: uint32
        ydk::YLeaf interface_neighbor_count; //type: uint16
        ydk::YLeaf interface_adj_neighbor_count; //type: uint16
        ydk::YLeaf interface_link_cost; //type: uint16
        ydk::YLeaf ospf_interface_state; //type: OspfInterfaceState

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor : public ydk::Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_neighbor_id; //type: string
        ydk::YLeaf interface_neighbor_cost; //type: uint32
        ydk::YLeaf neighbor_dr; //type: boolean
        ydk::YLeaf neighbor_bdr; //type: boolean
        ydk::YLeaf suppress_hello; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr : public ydk::Entity
{
    public:
        IpSecAddr();
        ~IpSecAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary_addr; //type: string
        ydk::YLeaf secondary_prefix; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpSecAddr


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers : public ydk::Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker_type; //type: IpfrrTbrkr
        ydk::YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::Srlg


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks : public ydk::Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualLink; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink> > virtual_link;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_name; //type: string
        ydk::YLeaf virtual_link_name_xr; //type: string
        ydk::YLeaf virtual_link_neighbor_id; //type: string
        ydk::YLeaf virtual_link_state; //type: OspfInterfaceState
        ydk::YLeaf virtual_link_demand_circuit; //type: boolean
        ydk::YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        ydk::YLeaf transit_area; //type: string
        ydk::YLeaf virtual_link_interface_name; //type: string
        ydk::YLeaf virtual_link_cost; //type: uint16
        ydk::YLeaf virual_link_transmission_delay; //type: uint16
        ydk::YLeaf virtual_link_hello_interval; //type: uint32
        ydk::YLeaf virtual_link_hello_interval_ms; //type: uint32
        ydk::YLeaf virtual_link_dead_interval; //type: uint32
        ydk::YLeaf virtual_link_wait_interval; //type: uint32
        ydk::YLeaf virtaul_link_retransmission_interval; //type: uint32
        ydk::YLeaf virtual_link_next_hello; //type: uint32
        ydk::YLeaf virtual_link_next_hello_ms; //type: uint32
        ydk::YLeaf virtual_link_passive; //type: boolean
        ydk::YLeaf virtual_link_authentication_type; //type: Authentication
        ydk::YLeaf virtual_link_youngest_md_key; //type: boolean
        ydk::YLeaf virtual_link_youngest_md_key_id; //type: uint16
        ydk::YLeaf virtual_link_old_md_key_count; //type: uint32
        ydk::YLeaf virtual_link_keychain_id; //type: uint64
        ydk::YLeaf virtual_link_nsf_enabled; //type: boolean
        ydk::YLeaf virtual_link_nsf; //type: boolean
        ydk::YLeaf virtual_link_last_nsf; //type: uint32
        class VirtualLinkNeighbor; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor
        class VirtualLinkMdKey; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey> > virtual_link_md_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey : public ydk::Entity
{
    public:
        VirtualLinkMdKey();
        ~VirtualLinkMdKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkMdKey


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor : public ydk::Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_link_suppress_hello; //type: boolean
        ydk::YLeaf virtual_link_state; //type: NeighborState
        class VirtualLinkRetransmissoin; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin> virtual_link_retransmissoin;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin : public ydk::Entity
{
    public:
        VirtualLinkRetransmissoin();
        ~VirtualLinkRetransmissoin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dbd_retransmission_count; //type: uint32
        ydk::YLeaf dbd_retransmission_total_count; //type: uint32
        ydk::YLeaf area_flooding_index; //type: uint32
        ydk::YLeaf as_flood_index; //type: uint32
        ydk::YLeaf neighbor_retransmission_count; //type: uint32
        ydk::YLeaf number_of_retransmissions; //type: uint32
        ydk::YLeaf area_first_flood_information; //type: uint32
        ydk::YLeaf area_first_flood_information_index; //type: uint32
        ydk::YLeaf as_first_flood_information; //type: uint32
        ydk::YLeaf as_first_flood_information_index; //type: uint32
        ydk::YLeaf area_next_flood_information; //type: uint32
        ydk::YLeaf area_next_flood_information_index; //type: uint32
        ydk::YLeaf as_next_flood_information; //type: uint32
        ydk::YLeaf as_next_flood_information_index; //type: uint32
        ydk::YLeaf last_retransmission_length; //type: uint32
        ydk::YLeaf maximum_retransmission_length; //type: uint32
        ydk::YLeaf last_retransmission_time; //type: uint32
        ydk::YLeaf maximum_retransmission_time; //type: uint32
        ydk::YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin


class Ospf::Processes::Process::DefaultVrf::MplsTe : public ydk::Entity
{
    public:
        MplsTe();
        ~MplsTe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeLinks; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks
        class MplsTeFragments; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments> mpls_te_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks> mpls_te_links;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments : public ydk::Entity
{
    public:
        MplsTeFragments();
        ~MplsTeFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeFragment; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment> > mpls_te_fragment;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment : public ydk::Entity
{
    public:
        MplsTeFragment();
        ~MplsTeFragment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf mpls_te_router_id; //type: string
        ydk::YLeaf mpls_te_enabled; //type: boolean
        ydk::YLeaf mpls_te_initialized; //type: boolean
        ydk::YLeaf mpls_te_area_id; //type: string
        ydk::YLeaf mpls_te_area_instance; //type: uint32
        ydk::YLeaf mpls_te_router_address; //type: string
        ydk::YLeaf mpls_te_next_fragment_id; //type: uint32
        ydk::YLeaf spacious_fragment; //type: boolean
        class MplsTeLink; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink
        class MplsTeFragment_; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_> > mpls_te_fragment;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink> > mpls_te_link;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_ : public ydk::Entity
{
    public:
        MplsTeFragment_();
        ~MplsTeFragment_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fragment_instance; //type: uint32
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf dste_model_id; //type: uint8
        ydk::YLeaf same_fragment_count; //type: uint8
        class MplsTeLink; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink> > mpls_te_link;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink : public ydk::Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData> > ext_admin_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkProtocolPriorityCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority> > maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth> > mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw> > max_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio> > unres_oduj_prio;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw> > max_lspbw;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw> > unres_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData> > mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeFragment_::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink : public ydk::Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData> > ext_admin_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkProtocolPriorityCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority> > maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth> > mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw> > max_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio> > unres_oduj_prio;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw> > max_lspbw;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw> > unres_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData> > mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority : public ydk::Entity
{
    public:
        SubPoolUnreserveBwPerPriority();
        ~SubPoolUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments::MplsTeFragment::MplsTeLink::SubPoolUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks : public ydk::Entity
{
    public:
        MplsTeLinks();
        ~MplsTeLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsTeLink; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink> > mpls_te_link;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink : public ydk::Entity
{
    public:
        MplsTeLink();
        ~MplsTeLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_id; //type: int32
        ydk::YLeaf mpls_te_router_id; //type: string
        ydk::YLeaf mpls_te_enabled; //type: boolean
        ydk::YLeaf mpls_te_initialized; //type: boolean
        ydk::YLeaf mpls_te_area_id; //type: string
        ydk::YLeaf mpls_te_area_instance; //type: uint32
        ydk::YLeaf mpls_te_router_address; //type: string
        ydk::YLeaf mpls_te_next_fragment_id; //type: uint32
        ydk::YLeaf spacious_fragment; //type: boolean
        class MplsTeLink_; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_
        class MplsTeFragment; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment> > mpls_te_fragment;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_> > mpls_te_link;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment : public ydk::Entity
{
    public:
        MplsTeFragment();
        ~MplsTeFragment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fragment_instance; //type: uint32
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf dste_model_id; //type: uint8
        ydk::YLeaf same_fragment_count; //type: uint8
        class MplsTeLink_; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_> > mpls_te_link;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_ : public ydk::Entity
{
    public:
        MplsTeLink_();
        ~MplsTeLink_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf new_link; //type: boolean
        ydk::YLeaf fragment_id; //type: uint32
        ydk::YLeaf mpls_link_instance; //type: uint32
        ydk::YLeaf mpls_link_type; //type: LinkSubnet
        ydk::YLeaf neighbor_system_id; //type: string
        ydk::YLeaf link_address; //type: string
        ydk::YLeaf neighbor_ip_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bw; //type: uint32
        ydk::YLeaf maximum_link_reservable_bw; //type: uint32
        ydk::YLeaf maximum_link_sub_reservable_bw; //type: uint32
        ydk::YLeaf priority_count; //type: int32
        ydk::YLeaf affinity; //type: uint32
        ydk::YLeaf output_interface_id; //type: uint32
        ydk::YLeaf input_interface_id; //type: uint32
        ydk::YLeaf dste_in_use; //type: boolean
        ydk::YLeaf dste_allocation_model_id; //type: IgpteLibBwModel
        ydk::YLeaf number_of_optional_tl_vs; //type: uint8
        class GlobalUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority
        class SubPoolUnreserveBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority
        class LinkProtocolPriorityCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability
        class LinkSwCapability; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability
        class ExtendedAdminGroupList; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList
        class MplsteLinkOptTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList> extended_admin_group_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority> global_unreserve_bw_per_priority;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability> link_protocol_priority_capability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability> link_sw_capability;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv> > mplste_link_opt_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::SubPoolUnreserveBwPerPriority> sub_pool_unreserve_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList : public ydk::Entity
{
    public:
        ExtendedAdminGroupList();
        ~ExtendedAdminGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended_admin_size; //type: uint32
        class ExtAdminData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData> > ext_admin_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData : public ydk::Entity
{
    public:
        ExtAdminData();
        ~ExtAdminData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::ExtendedAdminGroupList::ExtAdminData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority : public ydk::Entity
{
    public:
        GlobalUnreserveBwPerPriority();
        ~GlobalUnreserveBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority> > bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority : public ydk::Entity
{
    public:
        BwPerPriority();
        ~BwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability : public ydk::Entity
{
    public:
        LinkProtocolPriorityCapability();
        ~LinkProtocolPriorityCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_protocol_capability; //type: uint8
        ydk::YLeaf link_protocol_priority; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkProtocolPriorityCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability : public ydk::Entity
{
    public:
        LinkSwCapability();
        ~LinkSwCapability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_switching_capability; //type: uint8
        ydk::YLeaf link_encoding; //type: uint8
        ydk::YLeaf minimum_lsp_bw; //type: uint64
        ydk::YLeaf link_mtu; //type: uint16
        class MaximumLspBwPerPriority; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority> > maximum_lsp_bw_per_priority;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority : public ydk::Entity
{
    public:
        MaximumLspBwPerPriority();
        ~MaximumLspBwPerPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::LinkSwCapability::MaximumLspBwPerPriority


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv : public ydk::Entity
{
    public:
        MplsteLinkOptTlv();
        ~MplsteLinkOptTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplste_link_opt_tlv_type; //type: MplsTeOptTlv
        ydk::YLeaf mplste_link_opt_tlv_len; //type: uint16
        class MplsteLinkOptTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue> > mplste_link_opt_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue : public ydk::Entity
{
    public:
        MplsteLinkOptTlvValue();
        ~MplsteLinkOptTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_tlv_type; //type: MplsTeOptTlv
        class BctlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue
        class SrlgtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue
        class IxcdtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue
        class UnidtlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue> bctlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue> ixcdtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue> srlgtlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue> unidtlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue : public ydk::Entity
{
    public:
        BctlvValue();
        ~BctlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model_id; //type: uint8
        ydk::YLeaf num_b_cs; //type: uint32
        class MplsteLinkBcBandwidth; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth> > mplste_link_bc_bandwidth;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth : public ydk::Entity
{
    public:
        MplsteLinkBcBandwidth();
        ~MplsteLinkBcBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::BctlvValue::MplsteLinkBcBandwidth


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue : public ydk::Entity
{
    public:
        IxcdtlvValue();
        ~IxcdtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap; //type: uint8
        ydk::YLeaf rile_len_code; //type: uint8
        ydk::YLeaf fixed_scsi_count; //type: uint32
        ydk::YLeaf flex_scsi_count; //type: uint32
        class IxcdSwitchingCapType; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType> ixcd_switching_cap_type;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw> > max_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType : public ydk::Entity
{
    public:
        IxcdSwitchingCapType();
        ~IxcdSwitchingCapType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switching_cap_type; //type: uint8
        class IxcdpscInfo; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo
        class IxcdbwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv> ixcdbw_sub_tlv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo> ixcdpsc_info;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv : public ydk::Entity
{
    public:
        IxcdbwSubTlv();
        ~IxcdbwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ArrBwSubTlv; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv> > arr_bw_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv : public ydk::Entity
{
    public:
        ArrBwSubTlv();
        ~ArrBwSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_sub_tlv_type; //type: uint16
        ydk::YLeaf bw_sub_tlv_length; //type: uint16
        class BwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue> bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue : public ydk::Entity
{
    public:
        BwSubTlvValue();
        ~BwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ixcdbw_sub_tlv_type; //type: uint16
        class FixedBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue
        class FlexBwSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue> fixed_bw_sub_tlv_value;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue> flex_bw_sub_tlv_value;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue : public ydk::Entity
{
    public:
        FixedBwSubTlvValue();
        ~FixedBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FixedSubTlvValue; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue
        class UnresOdujPrio; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue> fixed_sub_tlv_value;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio> > unres_oduj_prio;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue : public ydk::Entity
{
    public:
        FixedSubTlvValue();
        ~FixedSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::FixedSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio : public ydk::Entity
{
    public:
        UnresOdujPrio();
        ~UnresOdujPrio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FixedBwSubTlvValue::UnresOdujPrio


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue : public ydk::Entity
{
    public:
        FlexBwSubTlvValue();
        ~FlexBwSubTlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexSubTlvValueCommon; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon
        class UnresLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw
        class MaxLspbw; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon> flex_sub_tlv_value_common;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw> > max_lspbw;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw> > unres_lspbw;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon : public ydk::Entity
{
    public:
        FlexSubTlvValueCommon();
        ~FlexSubTlvValueCommon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signal_type; //type: uint8
        ydk::YLeaf num_stages; //type: uint8
        ydk::YLeaf tbit; //type: uint8
        ydk::YLeaf sbit; //type: uint8
        ydk::YLeaf tsg; //type: uint8
        ydk::YLeaf res; //type: uint8
        ydk::YLeaf priority_bit0; //type: uint8
        ydk::YLeaf priority_bit1; //type: uint8
        ydk::YLeaf priority_bit2; //type: uint8
        ydk::YLeaf priority_bit3; //type: uint8
        ydk::YLeaf priority_bit4; //type: uint8
        ydk::YLeaf priority_bit5; //type: uint8
        ydk::YLeaf priority_bit6; //type: uint8
        ydk::YLeaf priority_bit7; //type: uint8
        ydk::YLeaf stage; //type: string

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::FlexSubTlvValueCommon


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw : public ydk::Entity
{
    public:
        UnresLspbw();
        ~UnresLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdbwSubTlv::ArrBwSubTlv::BwSubTlvValue::FlexBwSubTlvValue::UnresLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo : public ydk::Entity
{
    public:
        IxcdpscInfo();
        ~IxcdpscInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_lsp_bandwidth; //type: uint64
        ydk::YLeaf psc_interface_mtu; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::IxcdSwitchingCapType::IxcdpscInfo


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw : public ydk::Entity
{
    public:
        MaxLspbw();
        ~MaxLspbw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: int64

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::IxcdtlvValue::MaxLspbw


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue : public ydk::Entity
{
    public:
        SrlgtlvValue();
        ~SrlgtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_len; //type: uint32
        ydk::YLeaf num_srl_gs; //type: uint32
        class MplsteLinkSrlgData; //type: Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData> > mplste_link_srlg_data;
        
}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData : public ydk::Entity
{
    public:
        MplsteLinkSrlgData();
        ~MplsteLinkSrlgData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::SrlgtlvValue::MplsteLinkSrlgData


class Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue : public ydk::Entity
{
    public:
        UnidtlvValue();
        ~UnidtlvValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uni_dir_delay; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment::MplsTeLink_::MplsteLinkOptTlv::MplsteLinkOptTlvValue::UnidtlvValue


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_1_ */

