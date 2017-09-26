#ifndef _CISCO_IOS_XR_INFRA_XTC_OPER_1_
#define _CISCO_IOS_XR_INFRA_XTC_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_xtc_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {


class PceTopology::PrefixInfos::PrefixInfo : public ydk::Entity
{
    public:
        PrefixInfo();
        ~PrefixInfo();

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

        ydk::YLeaf node_identifier; //type: int32
        ydk::YLeaf node_identifier_xr; //type: uint32
        class NodeProtocolIdentifier; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier
        class Address; //type: PceTopology::PrefixInfos::PrefixInfo::Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::Address> > address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier> node_protocol_identifier;
        
}; // PceTopology::PrefixInfos::PrefixInfo


class PceTopology::PrefixInfos::PrefixInfo::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::PrefixInfos::PrefixInfo::Address


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation> > srgb_information;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf autonomous_system_number; //type: uint32
        class Igp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        class IgpSrgb; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb : public ydk::Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;
        
}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::TopologyNodes : public ydk::Entity
{
    public:
        TopologyNodes();
        ~TopologyNodes();

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

        class TopologyNode; //type: PceTopology::TopologyNodes::TopologyNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode> > topology_node;
        
}; // PceTopology::TopologyNodes


class PceTopology::TopologyNodes::TopologyNode : public ydk::Entity
{
    public:
        TopologyNode();
        ~TopologyNode();

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

        ydk::YLeaf node_identifier; //type: int32
        ydk::YLeaf node_identifier_xr; //type: uint32
        ydk::YLeaf overload; //type: boolean
        class NodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier
        class PrefixSid; //type: PceTopology::TopologyNodes::TopologyNode::PrefixSid
        class Ipv4Link; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link
        class Ipv6Link; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link> > ipv4_link;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link> > ipv6_link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier> node_protocol_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::PrefixSid> > prefix_sid;
        
}; // PceTopology::TopologyNodes::TopologyNode


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link : public ydk::Entity
{
    public:
        Ipv4Link();
        ~Ipv4Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv4_address; //type: string
        ydk::YLeaf remote_ipv4_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        ydk::YLeafList srlgs; //type: list of  uint32
        class LocalIgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid> > adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid : public ydk::Entity
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

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf autonomous_system_number; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation> > srgb_information;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf autonomous_system_number; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        class IgpSrgb; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb : public ydk::Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link : public ydk::Entity
{
    public:
        Ipv6Link();
        ~Ipv6Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv6_address; //type: string
        ydk::YLeaf remote_ipv6_address; //type: string
        ydk::YLeaf igp_metric; //type: uint32
        ydk::YLeaf te_metric; //type: uint32
        ydk::YLeaf maximum_link_bandwidth; //type: uint64
        ydk::YLeaf max_reservable_bandwidth; //type: uint64
        class LocalIgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation
        class RemoteNodeProtocolIdentifier; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier
        class AdjacencySid; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid> > adjacency_sid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation> local_igp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier> remote_node_protocol_identifier;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid : public ydk::Entity
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

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix> sid_prefix;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation : public ydk::Entity
{
    public:
        LocalIgpInformation();
        ~LocalIgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf autonomous_system_number; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier : public ydk::Entity
{
    public:
        RemoteNodeProtocolIdentifier();
        ~RemoteNodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation> > srgb_information;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf autonomous_system_number; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        class IgpSrgb; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb : public ydk::Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier : public ydk::Entity
{
    public:
        NodeProtocolIdentifier();
        ~NodeProtocolIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf ipv4_bgp_router_id_set; //type: boolean
        ydk::YLeaf ipv4_bgp_router_id; //type: string
        ydk::YLeaf ipv4te_router_id_set; //type: boolean
        ydk::YLeaf ipv4te_router_id; //type: string
        class IgpInformation; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation
        class SrgbInformation; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation> > igp_information;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation> > srgb_information;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation : public ydk::Entity
{
    public:
        IgpInformation();
        ~IgpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf autonomous_system_number; //type: uint32
        class Igp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp> igp;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation : public ydk::Entity
{
    public:
        SrgbInformation();
        ~SrgbInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf size; //type: uint32
        class IgpSrgb; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb> igp_srgb;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb : public ydk::Entity
{
    public:
        IgpSrgb();
        ~IgpSrgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf igp_id; //type: PceIgpInfoId
        class Isis; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis
        class Ospf; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf
        class Bgp; //type: PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf> ospf;
        
}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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
        ydk::YLeaf confed_asn; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_id; //type: string
        ydk::YLeaf level; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis


class PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

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
        ydk::YLeaf area; //type: uint32

}; // PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf


class PceTopology::TopologyNodes::TopologyNode::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sid_type; //type: Sid
        ydk::YLeaf mpls_label; //type: uint32
        ydk::YLeaf domain_identifier; //type: uint64
        ydk::YLeaf rflag; //type: boolean
        ydk::YLeaf nflag; //type: boolean
        ydk::YLeaf pflag; //type: boolean
        ydk::YLeaf eflag; //type: boolean
        ydk::YLeaf vflag; //type: boolean
        ydk::YLeaf lflag; //type: boolean
        class SidPrefix; //type: PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix> sid_prefix;
        
}; // PceTopology::TopologyNodes::TopologyNode::PrefixSid


class PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix : public ydk::Entity
{
    public:
        SidPrefix();
        ~SidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PceAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix


class PceTopology::TopologySummary : public ydk::Entity
{
    public:
        TopologySummary();
        ~TopologySummary();

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

        ydk::YLeaf nodes; //type: uint32
        ydk::YLeaf lookup_nodes; //type: uint32
        ydk::YLeaf prefixes; //type: uint32
        ydk::YLeaf prefix_sids; //type: uint32
        ydk::YLeaf regular_prefix_sids; //type: uint32
        ydk::YLeaf strict_prefix_sids; //type: uint32
        ydk::YLeaf links; //type: uint32
        ydk::YLeaf epe_links; //type: uint32
        ydk::YLeaf adjacency_sids; //type: uint32
        ydk::YLeaf epesids; //type: uint32
        ydk::YLeaf protected_adjacency_sids; //type: uint32
        ydk::YLeaf un_protected_adjacency_sids; //type: uint32
        ydk::YLeaf topology_consistent; //type: boolean
        class StatsTopologyUpdate; //type: PceTopology::TopologySummary::StatsTopologyUpdate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_xtc_oper::PceTopology::TopologySummary::StatsTopologyUpdate> stats_topology_update;
        
}; // PceTopology::TopologySummary


class PceTopology::TopologySummary::StatsTopologyUpdate : public ydk::Entity
{
    public:
        StatsTopologyUpdate();
        ~StatsTopologyUpdate();

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

        ydk::YLeaf num_nodes_added; //type: uint32
        ydk::YLeaf num_nodes_deleted; //type: uint32
        ydk::YLeaf num_links_added; //type: uint32
        ydk::YLeaf num_links_deleted; //type: uint32
        ydk::YLeaf num_prefixes_added; //type: uint32
        ydk::YLeaf num_prefixes_deleted; //type: uint32

}; // PceTopology::TopologySummary::StatsTopologyUpdate


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_OPER_1_ */

