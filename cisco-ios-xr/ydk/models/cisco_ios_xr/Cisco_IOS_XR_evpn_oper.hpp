#ifndef _CISCO_IOS_XR_EVPN_OPER_
#define _CISCO_IOS_XR_EVPN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {

class Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

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

        class Nodes; //type: Evpn::Nodes
        class Active; //type: Evpn::Active
        class Standby; //type: Evpn::Standby

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby> standby;
        
}; // Evpn


class Evpn::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Evpn::Nodes::Node

        ydk::YList node;
        
}; // Evpn::Nodes


class Evpn::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_id; //type: string
        class EvpnGroups; //type: Evpn::Nodes::Node::EvpnGroups
        class RemoteShgs; //type: Evpn::Nodes::Node::RemoteShgs
        class Client; //type: Evpn::Nodes::Node::Client
        class Igmps; //type: Evpn::Nodes::Node::Igmps
        class Evis; //type: Evpn::Nodes::Node::Evis
        class Summary; //type: Evpn::Nodes::Node::Summary
        class EviDetail; //type: Evpn::Nodes::Node::EviDetail
        class Teps; //type: Evpn::Nodes::Node::Teps
        class InternalLabels; //type: Evpn::Nodes::Node::InternalLabels
        class EthernetSegments; //type: Evpn::Nodes::Node::EthernetSegments
        class AcIds; //type: Evpn::Nodes::Node::AcIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EvpnGroups> evpn_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::RemoteShgs> remote_shgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Igmps> igmps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail> evi_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Teps> teps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::InternalLabels> internal_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EthernetSegments> ethernet_segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::AcIds> ac_ids;
        
}; // Evpn::Nodes::Node


class Evpn::Nodes::Node::EvpnGroups : public ydk::Entity
{
    public:
        EvpnGroups();
        ~EvpnGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnGroup; //type: Evpn::Nodes::Node::EvpnGroups::EvpnGroup

        ydk::YList evpn_group;
        
}; // Evpn::Nodes::Node::EvpnGroups


class Evpn::Nodes::Node::EvpnGroups::EvpnGroup : public ydk::Entity
{
    public:
        EvpnGroup();
        ~EvpnGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf state; //type: EvpnGrp
        class CoreInterface; //type: Evpn::Nodes::Node::EvpnGroups::EvpnGroup::CoreInterface
        class AccessInterface; //type: Evpn::Nodes::Node::EvpnGroups::EvpnGroup::AccessInterface

        ydk::YList core_interface;
        ydk::YList access_interface;
        
}; // Evpn::Nodes::Node::EvpnGroups::EvpnGroup


class Evpn::Nodes::Node::EvpnGroups::EvpnGroup::CoreInterface : public ydk::Entity
{
    public:
        CoreInterface();
        ~CoreInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Nodes::Node::EvpnGroups::EvpnGroup::CoreInterface


class Evpn::Nodes::Node::EvpnGroups::EvpnGroup::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Nodes::Node::EvpnGroups::EvpnGroup::AccessInterface


class Evpn::Nodes::Node::RemoteShgs : public ydk::Entity
{
    public:
        RemoteShgs();
        ~RemoteShgs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteShg; //type: Evpn::Nodes::Node::RemoteShgs::RemoteShg

        ydk::YList remote_shg;
        
}; // Evpn::Nodes::Node::RemoteShgs


class Evpn::Nodes::Node::RemoteShgs::RemoteShg : public ydk::Entity
{
    public:
        RemoteShg();
        ~RemoteShg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        class EthernetSegmentIdentifier; //type: Evpn::Nodes::Node::RemoteShgs::RemoteShg::EthernetSegmentIdentifier
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Nodes::Node::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel

        ydk::YList ethernet_segment_identifier;
        ydk::YList remote_split_horizon_group_label;
        
}; // Evpn::Nodes::Node::RemoteShgs::RemoteShg


class Evpn::Nodes::Node::RemoteShgs::RemoteShg::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::RemoteShgs::RemoteShg::EthernetSegmentIdentifier


class Evpn::Nodes::Node::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Nodes::Node::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel


class Evpn::Nodes::Node::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Evpn::Nodes::Node::Client


class Evpn::Nodes::Node::Igmps : public ydk::Entity
{
    public:
        Igmps();
        ~Igmps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Igmp; //type: Evpn::Nodes::Node::Igmps::Igmp

        ydk::YList igmp;
        
}; // Evpn::Nodes::Node::Igmps


class Evpn::Nodes::Node::Igmps::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_type; //type: uint32
        ydk::YLeaf is_leave; //type: uint32
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf src_ip; //type: string
        ydk::YLeaf grp_ip; //type: string
        ydk::YLeaf bd_id; //type: uint32
        ydk::YLeaf bp_xcid; //type: uint32
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf bd_id_xr; //type: uint32
        ydk::YLeaf route_type; //type: EvpnIgmpMsg
        ydk::YLeaf source_addr; //type: string
        ydk::YLeaf group_addr; //type: string
        ydk::YLeaf ethernet_tag_id; //type: uint32
        ydk::YLeaf igmp_version; //type: EvpnIgmpVersion
        ydk::YLeaf igmp_group_type; //type: EvpnIgmpGrp
        ydk::YLeaf max_response_time; //type: uint8
        ydk::YLeaf resolved; //type: boolean
        class SourceInfo; //type: Evpn::Nodes::Node::Igmps::Igmp::SourceInfo
        class EthernetSegmentIdentifier; //type: Evpn::Nodes::Node::Igmps::Igmp::EthernetSegmentIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Igmps::Igmp::SourceInfo> source_info;
        ydk::YList ethernet_segment_identifier;
        
}; // Evpn::Nodes::Node::Igmps::Igmp


class Evpn::Nodes::Node::Igmps::Igmp::SourceInfo : public ydk::Entity
{
    public:
        SourceInfo();
        ~SourceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: EvpnIgmpSource
        ydk::YLeaf remote_info; //type: string
        class LocalInfo; //type: Evpn::Nodes::Node::Igmps::Igmp::SourceInfo::LocalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Igmps::Igmp::SourceInfo::LocalInfo> local_info;
        
}; // Evpn::Nodes::Node::Igmps::Igmp::SourceInfo


class Evpn::Nodes::Node::Igmps::Igmp::SourceInfo::LocalInfo : public ydk::Entity
{
    public:
        LocalInfo();
        ~LocalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_name; //type: string

}; // Evpn::Nodes::Node::Igmps::Igmp::SourceInfo::LocalInfo


class Evpn::Nodes::Node::Igmps::Igmp::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::Igmps::Igmp::EthernetSegmentIdentifier


class Evpn::Nodes::Node::Evis : public ydk::Entity
{
    public:
        Evis();
        ~Evis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Evi; //type: Evpn::Nodes::Node::Evis::Evi

        ydk::YList evi;
        
}; // Evpn::Nodes::Node::Evis


class Evpn::Nodes::Node::Evis::Evi : public ydk::Entity
{
    public:
        Evi();
        ~Evi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::Evis::Evi


class Evpn::Nodes::Node::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf ev_is; //type: uint32
        ydk::YLeaf tunnel_endpoints; //type: uint32
        ydk::YLeaf local_mac_routes; //type: uint32
        ydk::YLeaf local_ipv4_mac_routes; //type: uint32
        ydk::YLeaf local_ipv6_mac_routes; //type: uint32
        ydk::YLeaf es_global_mac_routes; //type: uint32
        ydk::YLeaf remote_mac_routes; //type: uint32
        ydk::YLeaf remote_soo_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv4_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv6_mac_routes; //type: uint32
        ydk::YLeaf local_imcast_routes; //type: uint32
        ydk::YLeaf remote_imcast_routes; //type: uint32
        ydk::YLeaf labels; //type: uint32
        ydk::YLeaf es_entries; //type: uint32
        ydk::YLeaf neighbor_entries; //type: uint32
        ydk::YLeaf local_ead_routes; //type: uint32
        ydk::YLeaf remote_ead_routes; //type: uint32
        ydk::YLeaf global_source_mac; //type: string
        ydk::YLeaf peering_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf carving_time; //type: uint32
        ydk::YLeaf cost_out; //type: boolean
        ydk::YLeaf startup_cost_in_time; //type: uint32
        ydk::YLeaf l2rib_throttle; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean

}; // Evpn::Nodes::Node::Summary


class Evpn::Nodes::Node::EviDetail : public ydk::Entity
{
    public:
        EviDetail();
        ~EviDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Elements; //type: Evpn::Nodes::Node::EviDetail::Elements
        class EviChildren; //type: Evpn::Nodes::Node::EviDetail::EviChildren

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements> elements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren> evi_children;
        
}; // Evpn::Nodes::Node::EviDetail


class Evpn::Nodes::Node::EviDetail::Elements : public ydk::Entity
{
    public:
        Elements();
        ~Elements();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Element; //type: Evpn::Nodes::Node::EviDetail::Elements::Element

        ydk::YList element;
        
}; // Evpn::Nodes::Node::EviDetail::Elements


class Evpn::Nodes::Node::EviDetail::Elements::Element : public ydk::Entity
{
    public:
        Element();
        ~Element();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf description; //type: string
        ydk::YLeaf unicast_label; //type: uint32
        ydk::YLeaf multicast_label; //type: uint32
        ydk::YLeaf cw_disable; //type: boolean
        ydk::YLeaf table_policy_name; //type: string
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf rt_import_block_set; //type: boolean
        ydk::YLeaf rt_export_block_set; //type: boolean
        ydk::YLeaf advertise_mac; //type: boolean
        ydk::YLeaf etree_leaf; //type: boolean
        ydk::YLeaf advertise_bvi_mac; //type: boolean
        ydk::YLeaf aliasing_disabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf reoriginate_disabled; //type: boolean
        ydk::YLeaf stitching; //type: boolean
        ydk::YLeaf multicast_source_connected; //type: boolean
        ydk::YLeaf bgp_implicit_import_disabled; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        class EvpnInstance; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::EvpnInstance
        class FlowLabel; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::EvpnInstance> evpn_instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto> rt_auto;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element


class Evpn::Nodes::Node::EviDetail::Elements::Element::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::EvpnInstance


class Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel : public ydk::Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_flow_label; //type: boolean
        ydk::YLeaf global_flow_label; //type: boolean

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto : public ydk::Entity
{
    public:
        RdAuto();
        ~RdAuto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured : public ydk::Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto : public ydk::Entity
{
    public:
        RtAuto();
        ~RtAuto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        
}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Nodes::Node::EviDetail::EviChildren : public ydk::Entity
{
    public:
        EviChildren();
        ~EviChildren();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Neighbors; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets> route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs> macs;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf neighbor_ip; //type: string
        ydk::YLeaf neighbor; //type: string
        class EvpnInstance; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance
        class LeafEvis; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance> evpn_instance;
        ydk::YList leaf_evis;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance


class Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis : public ydk::Entity
{
    public:
        LeafEvis();
        ~LeafEvis();

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

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries : public ydk::Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetAutoDiscovery; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        ydk::YList ethernet_auto_discovery;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public ydk::Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf local_next_hop; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf is_local_ead; //type: boolean
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        ydk::YLeaf num_paths; //type: uint32
        class EvpnInstance; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance
        class EthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance> evpn_instance;
        ydk::YList ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier


class Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts : public ydk::Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InclusiveMulticast; //type: Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        ydk::YList inclusive_multicast;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public ydk::Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf originating_ip; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf originating_ip_xr; //type: string
        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf pmsi_tunnel_type; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf is_local_entry; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf srte_policy; //type: string
        ydk::YLeaf etree_leaf; //type: boolean
        class EvpnInstance; //type: Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance> evpn_instance;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteTarget; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget

        ydk::YList route_target;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf route_target_role; //type: L2vpnAdRtRole
        ydk::YLeaf route_target_stitching; //type: boolean
        class EvpnInstance; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance
        class RouteTarget_; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance> evpn_instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public ydk::Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs : public ydk::Entity
{
    public:
        Macs();
        ~Macs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mac; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac

        ydk::YList mac;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf ip_address_xr; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf num_paths; //type: uint32
        ydk::YLeaf is_local_mac; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf is_remote_mac; //type: boolean
        ydk::YLeaf soo_nexthop; //type: string
        ydk::YLeaf ipnh_address; //type: string
        ydk::YLeaf esi_port_key; //type: uint16
        ydk::YLeaf local_encap_type; //type: uint8
        ydk::YLeaf remote_encap_type; //type: uint8
        ydk::YLeaf learned_bridge_port_name; //type: string
        ydk::YLeaf local_seq_id; //type: uint32
        ydk::YLeaf remote_seq_id; //type: uint32
        ydk::YLeaf local_l3_label; //type: uint32
        ydk::YLeaf router_mac_address; //type: string
        ydk::YLeaf mac_flush_requested; //type: uint16
        ydk::YLeaf mac_flush_received; //type: uint16
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf local_is_static; //type: boolean
        ydk::YLeaf remote_is_static; //type: boolean
        ydk::YLeaf local_etree_leaf; //type: boolean
        ydk::YLeaf remote_etree_leaf; //type: boolean
        ydk::YLeaf local_attachment_circuit_id; //type: uint32
        ydk::YLeaf remote_attachment_circuit_id; //type: uint32
        class EvpnInstance; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::EvpnInstance
        class LocalEthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier
        class RemoteEthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::EvpnInstance> evpn_instance;
        ydk::YList local_ethernet_segment_identifier;
        ydk::YList remote_ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::EvpnInstance


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        LocalEthernetSegmentIdentifier();
        ~LocalEthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        RemoteEthernetSegmentIdentifier();
        ~RemoteEthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier


class Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Nodes::Node::Teps : public ydk::Entity
{
    public:
        Teps();
        ~Teps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tep; //type: Evpn::Nodes::Node::Teps::Tep

        ydk::YList tep;
        
}; // Evpn::Nodes::Node::Teps


class Evpn::Nodes::Node::Teps::Tep : public ydk::Entity
{
    public:
        Tep();
        ~Tep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tep_id; //type: uint32
        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf use_count; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_table_id; //type: uint32
        ydk::YLeaf udp_port; //type: uint16
        class LocalInfo; //type: Evpn::Nodes::Node::Teps::Tep::LocalInfo
        class RemoteInfo; //type: Evpn::Nodes::Node::Teps::Tep::RemoteInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Teps::Tep::LocalInfo> local_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::Teps::Tep::RemoteInfo> remote_info;
        
}; // Evpn::Nodes::Node::Teps::Tep


class Evpn::Nodes::Node::Teps::Tep::LocalInfo : public ydk::Entity
{
    public:
        LocalInfo();
        ~LocalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        ydk::YLeaf ip; //type: string

}; // Evpn::Nodes::Node::Teps::Tep::LocalInfo


class Evpn::Nodes::Node::Teps::Tep::RemoteInfo : public ydk::Entity
{
    public:
        RemoteInfo();
        ~RemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        ydk::YLeaf ip; //type: string

}; // Evpn::Nodes::Node::Teps::Tep::RemoteInfo


class Evpn::Nodes::Node::InternalLabels : public ydk::Entity
{
    public:
        InternalLabels();
        ~InternalLabels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InternalLabel; //type: Evpn::Nodes::Node::InternalLabels::InternalLabel

        ydk::YList internal_label;
        
}; // Evpn::Nodes::Node::InternalLabels


class Evpn::Nodes::Node::InternalLabels::InternalLabel : public ydk::Entity
{
    public:
        InternalLabel();
        ~InternalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf esi; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf mac_num_paths; //type: uint32
        ydk::YLeaf ead_num_paths; //type: uint32
        ydk::YLeaf evi_num_paths; //type: uint32
        ydk::YLeaf sum_num_paths; //type: uint32
        ydk::YLeaf sum_num_active_paths; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf ecmp_disable; //type: boolean
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        class EvpnInstance; //type: Evpn::Nodes::Node::InternalLabels::InternalLabel::EvpnInstance
        class MacPathBuffer; //type: Evpn::Nodes::Node::InternalLabels::InternalLabel::MacPathBuffer
        class EadPathBuffer; //type: Evpn::Nodes::Node::InternalLabels::InternalLabel::EadPathBuffer
        class EviPathBuffer; //type: Evpn::Nodes::Node::InternalLabels::InternalLabel::EviPathBuffer
        class SummaryPathBuffer; //type: Evpn::Nodes::Node::InternalLabels::InternalLabel::SummaryPathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::InternalLabels::InternalLabel::EvpnInstance> evpn_instance;
        ydk::YList mac_path_buffer;
        ydk::YList ead_path_buffer;
        ydk::YList evi_path_buffer;
        ydk::YList summary_path_buffer;
        
}; // Evpn::Nodes::Node::InternalLabels::InternalLabel


class Evpn::Nodes::Node::InternalLabels::InternalLabel::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::InternalLabels::InternalLabel::EvpnInstance


class Evpn::Nodes::Node::InternalLabels::InternalLabel::MacPathBuffer : public ydk::Entity
{
    public:
        MacPathBuffer();
        ~MacPathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::InternalLabels::InternalLabel::MacPathBuffer


class Evpn::Nodes::Node::InternalLabels::InternalLabel::EadPathBuffer : public ydk::Entity
{
    public:
        EadPathBuffer();
        ~EadPathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::InternalLabels::InternalLabel::EadPathBuffer


class Evpn::Nodes::Node::InternalLabels::InternalLabel::EviPathBuffer : public ydk::Entity
{
    public:
        EviPathBuffer();
        ~EviPathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::InternalLabels::InternalLabel::EviPathBuffer


class Evpn::Nodes::Node::InternalLabels::InternalLabel::SummaryPathBuffer : public ydk::Entity
{
    public:
        SummaryPathBuffer();
        ~SummaryPathBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Nodes::Node::InternalLabels::InternalLabel::SummaryPathBuffer


class Evpn::Nodes::Node::EthernetSegments : public ydk::Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetSegment; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment

        ydk::YList ethernet_segment;
        
}; // Evpn::Nodes::Node::EthernetSegments


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

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
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf esi_type; //type: L2vpnEvpnEsi
        ydk::YLeaf esi_system_identifier; //type: string
        ydk::YLeaf esi_port_key; //type: uint32
        ydk::YLeaf esi_system_priority; //type: uint32
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf ethernet_segment_state; //type: L2vpnEvpnEsState
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf main_port_role; //type: L2vpnRgRole
        ydk::YLeaf main_port_mac; //type: string
        ydk::YLeaf num_up_p_ws; //type: uint32
        ydk::YLeaf route_target; //type: string
        ydk::YLeaf rt_origin; //type: L2vpnEvpnRtOrigin
        ydk::YLeaf es_bgp_gates; //type: string
        ydk::YLeaf es_l2fib_gates; //type: string
        ydk::YLeaf mac_flushing_mode_config; //type: L2vpnEvpnMfMode
        ydk::YLeaf load_balance_mode_config; //type: L2vpnEvpnLbMode
        ydk::YLeaf load_balance_mode_is_default; //type: boolean
        ydk::YLeaf load_balance_mode_oper; //type: L2vpnEvpnLbMode
        ydk::YLeaf force_single_home; //type: boolean
        ydk::YLeaf source_mac_oper; //type: string
        ydk::YLeaf source_mac_origin; //type: L2vpnEvpnSmacSrc
        ydk::YLeaf peering_timer; //type: uint32
        ydk::YLeaf peering_timer_left; //type: uint32
        ydk::YLeaf recovery_timer; //type: uint32
        ydk::YLeaf recovery_timer_left; //type: uint32
        ydk::YLeaf carving_timer; //type: uint32
        ydk::YLeaf carving_timer_left; //type: uint32
        ydk::YLeaf service_carving_mode; //type: L2vpnEvpnScMode
        ydk::YLeaf service_carving_mcast_mode; //type: L2vpnEvpnScMcastMode
        ydk::YLeaf primary_services_input; //type: string
        ydk::YLeaf secondary_services_input; //type: string
        ydk::YLeaf forwarder_ports; //type: uint32
        ydk::YLeaf permanent_forwarder_ports; //type: uint32
        ydk::YLeaf elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_config_forwarder_ports; //type: uint32
        ydk::YLeaf mp_protected; //type: boolean
        ydk::YLeaf nve_anycast_vtep; //type: boolean
        ydk::YLeaf nve_ingress_replication; //type: boolean
        ydk::YLeaf local_split_horizon_group_label_valid; //type: boolean
        ydk::YLeaf local_split_horizon_group_label; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier
        class PrimaryService; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::PrimaryService
        class SecondaryService; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::SecondaryService
        class ServiceCarvingISidelectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult
        class ServiceCarvingIsidNotElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult
        class ServiceCarvingEviElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult
        class ServiceCarvingEviNotElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult
        class ServiceCarvingVniElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult
        class ServiceCarvingVniNotElectedResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult
        class NextHop; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop
        class ServiceCarvingVpwsPermanentResult; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        ydk::YList ethernet_segment_identifier;
        ydk::YList primary_service;
        ydk::YList secondary_service;
        ydk::YList service_carving_i_sidelected_result;
        ydk::YList service_carving_isid_not_elected_result;
        ydk::YList service_carving_evi_elected_result;
        ydk::YList service_carving_evi_not_elected_result;
        ydk::YList service_carving_vni_elected_result;
        ydk::YList service_carving_vni_not_elected_result;
        ydk::YList next_hop;
        ydk::YList service_carving_vpws_permanent_result;
        ydk::YList remote_split_horizon_group_label;
        
}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::PrimaryService : public ydk::Entity
{
    public:
        PrimaryService();
        ~PrimaryService();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::PrimaryService


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::SecondaryService : public ydk::Entity
{
    public:
        SecondaryService();
        ~SecondaryService();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::SecondaryService


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult : public ydk::Entity
{
    public:
        ServiceCarvingISidelectedResult();
        ~ServiceCarvingISidelectedResult();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingIsidNotElectedResult();
        ~ServiceCarvingIsidNotElectedResult();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviElectedResult();
        ~ServiceCarvingEviElectedResult();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviNotElectedResult();
        ~ServiceCarvingEviNotElectedResult();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingVniElectedResult();
        ~ServiceCarvingVniElectedResult();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingVniNotElectedResult();
        ~ServiceCarvingVniNotElectedResult();

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

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf df_dont_prempt; //type: boolean
        ydk::YLeaf df_type; //type: uint8
        ydk::YLeaf df_pref; //type: uint16

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult : public ydk::Entity
{
    public:
        ServiceCarvingVpwsPermanentResult();
        ~ServiceCarvingVpwsPermanentResult();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult


class Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Nodes::Node::AcIds : public ydk::Entity
{
    public:
        AcIds();
        ~AcIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcId; //type: Evpn::Nodes::Node::AcIds::AcId

        ydk::YList ac_id;
        
}; // Evpn::Nodes::Node::AcIds


class Evpn::Nodes::Node::AcIds::AcId : public ydk::Entity
{
    public:
        AcId();
        ~AcId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf neighbor; //type: string
        class EvpnInstance; //type: Evpn::Nodes::Node::AcIds::AcId::EvpnInstance
        class LeafEvis; //type: Evpn::Nodes::Node::AcIds::AcId::LeafEvis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Nodes::Node::AcIds::AcId::EvpnInstance> evpn_instance;
        ydk::YList leaf_evis;
        
}; // Evpn::Nodes::Node::AcIds::AcId


class Evpn::Nodes::Node::AcIds::AcId::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Nodes::Node::AcIds::AcId::EvpnInstance


class Evpn::Nodes::Node::AcIds::AcId::LeafEvis : public ydk::Entity
{
    public:
        LeafEvis();
        ~LeafEvis();

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

}; // Evpn::Nodes::Node::AcIds::AcId::LeafEvis


class Evpn::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class EvpnGroups; //type: Evpn::Active::EvpnGroups
        class RemoteShgs; //type: Evpn::Active::RemoteShgs
        class Client; //type: Evpn::Active::Client
        class Igmps; //type: Evpn::Active::Igmps
        class Evis; //type: Evpn::Active::Evis
        class Summary; //type: Evpn::Active::Summary
        class EviDetail; //type: Evpn::Active::EviDetail
        class Teps; //type: Evpn::Active::Teps
        class InternalLabels; //type: Evpn::Active::InternalLabels
        class EthernetSegments; //type: Evpn::Active::EthernetSegments
        class AcIds; //type: Evpn::Active::AcIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EvpnGroups> evpn_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::RemoteShgs> remote_shgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Igmps> igmps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail> evi_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Teps> teps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::InternalLabels> internal_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EthernetSegments> ethernet_segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::AcIds> ac_ids;
        
}; // Evpn::Active


class Evpn::Active::EvpnGroups : public ydk::Entity
{
    public:
        EvpnGroups();
        ~EvpnGroups();

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

        class EvpnGroup; //type: Evpn::Active::EvpnGroups::EvpnGroup

        ydk::YList evpn_group;
        
}; // Evpn::Active::EvpnGroups


class Evpn::Active::EvpnGroups::EvpnGroup : public ydk::Entity
{
    public:
        EvpnGroup();
        ~EvpnGroup();

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

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf state; //type: EvpnGrp
        class CoreInterface; //type: Evpn::Active::EvpnGroups::EvpnGroup::CoreInterface
        class AccessInterface; //type: Evpn::Active::EvpnGroups::EvpnGroup::AccessInterface

        ydk::YList core_interface;
        ydk::YList access_interface;
        
}; // Evpn::Active::EvpnGroups::EvpnGroup


class Evpn::Active::EvpnGroups::EvpnGroup::CoreInterface : public ydk::Entity
{
    public:
        CoreInterface();
        ~CoreInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Active::EvpnGroups::EvpnGroup::CoreInterface


class Evpn::Active::EvpnGroups::EvpnGroup::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Active::EvpnGroups::EvpnGroup::AccessInterface


class Evpn::Active::RemoteShgs : public ydk::Entity
{
    public:
        RemoteShgs();
        ~RemoteShgs();

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

        class RemoteShg; //type: Evpn::Active::RemoteShgs::RemoteShg

        ydk::YList remote_shg;
        
}; // Evpn::Active::RemoteShgs


class Evpn::Active::RemoteShgs::RemoteShg : public ydk::Entity
{
    public:
        RemoteShg();
        ~RemoteShg();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        class EthernetSegmentIdentifier; //type: Evpn::Active::RemoteShgs::RemoteShg::EthernetSegmentIdentifier
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Active::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel

        ydk::YList ethernet_segment_identifier;
        ydk::YList remote_split_horizon_group_label;
        
}; // Evpn::Active::RemoteShgs::RemoteShg


class Evpn::Active::RemoteShgs::RemoteShg::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Active::RemoteShgs::RemoteShg::EthernetSegmentIdentifier


class Evpn::Active::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Active::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel


class Evpn::Active::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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


}; // Evpn::Active::Client


class Evpn::Active::Igmps : public ydk::Entity
{
    public:
        Igmps();
        ~Igmps();

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

        class Igmp; //type: Evpn::Active::Igmps::Igmp

        ydk::YList igmp;
        
}; // Evpn::Active::Igmps


class Evpn::Active::Igmps::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

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

        ydk::YLeaf source_type; //type: uint32
        ydk::YLeaf is_leave; //type: uint32
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf src_ip; //type: string
        ydk::YLeaf grp_ip; //type: string
        ydk::YLeaf bd_id; //type: uint32
        ydk::YLeaf bp_xcid; //type: uint32
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf bd_id_xr; //type: uint32
        ydk::YLeaf route_type; //type: EvpnIgmpMsg
        ydk::YLeaf source_addr; //type: string
        ydk::YLeaf group_addr; //type: string
        ydk::YLeaf ethernet_tag_id; //type: uint32
        ydk::YLeaf igmp_version; //type: EvpnIgmpVersion
        ydk::YLeaf igmp_group_type; //type: EvpnIgmpGrp
        ydk::YLeaf max_response_time; //type: uint8
        ydk::YLeaf resolved; //type: boolean
        class SourceInfo; //type: Evpn::Active::Igmps::Igmp::SourceInfo
        class EthernetSegmentIdentifier; //type: Evpn::Active::Igmps::Igmp::EthernetSegmentIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Igmps::Igmp::SourceInfo> source_info;
        ydk::YList ethernet_segment_identifier;
        
}; // Evpn::Active::Igmps::Igmp


class Evpn::Active::Igmps::Igmp::SourceInfo : public ydk::Entity
{
    public:
        SourceInfo();
        ~SourceInfo();

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

        ydk::YLeaf type; //type: EvpnIgmpSource
        ydk::YLeaf remote_info; //type: string
        class LocalInfo; //type: Evpn::Active::Igmps::Igmp::SourceInfo::LocalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Igmps::Igmp::SourceInfo::LocalInfo> local_info;
        
}; // Evpn::Active::Igmps::Igmp::SourceInfo


class Evpn::Active::Igmps::Igmp::SourceInfo::LocalInfo : public ydk::Entity
{
    public:
        LocalInfo();
        ~LocalInfo();

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

        ydk::YLeaf if_name; //type: string

}; // Evpn::Active::Igmps::Igmp::SourceInfo::LocalInfo


class Evpn::Active::Igmps::Igmp::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Active::Igmps::Igmp::EthernetSegmentIdentifier


class Evpn::Active::Evis : public ydk::Entity
{
    public:
        Evis();
        ~Evis();

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

        class Evi; //type: Evpn::Active::Evis::Evi

        ydk::YList evi;
        
}; // Evpn::Active::Evis


class Evpn::Active::Evis::Evi : public ydk::Entity
{
    public:
        Evi();
        ~Evi();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::Evis::Evi


class Evpn::Active::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf ev_is; //type: uint32
        ydk::YLeaf tunnel_endpoints; //type: uint32
        ydk::YLeaf local_mac_routes; //type: uint32
        ydk::YLeaf local_ipv4_mac_routes; //type: uint32
        ydk::YLeaf local_ipv6_mac_routes; //type: uint32
        ydk::YLeaf es_global_mac_routes; //type: uint32
        ydk::YLeaf remote_mac_routes; //type: uint32
        ydk::YLeaf remote_soo_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv4_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv6_mac_routes; //type: uint32
        ydk::YLeaf local_imcast_routes; //type: uint32
        ydk::YLeaf remote_imcast_routes; //type: uint32
        ydk::YLeaf labels; //type: uint32
        ydk::YLeaf es_entries; //type: uint32
        ydk::YLeaf neighbor_entries; //type: uint32
        ydk::YLeaf local_ead_routes; //type: uint32
        ydk::YLeaf remote_ead_routes; //type: uint32
        ydk::YLeaf global_source_mac; //type: string
        ydk::YLeaf peering_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf carving_time; //type: uint32
        ydk::YLeaf cost_out; //type: boolean
        ydk::YLeaf startup_cost_in_time; //type: uint32
        ydk::YLeaf l2rib_throttle; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean

}; // Evpn::Active::Summary


class Evpn::Active::EviDetail : public ydk::Entity
{
    public:
        EviDetail();
        ~EviDetail();

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

        class Elements; //type: Evpn::Active::EviDetail::Elements
        class EviChildren; //type: Evpn::Active::EviDetail::EviChildren

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements> elements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren> evi_children;
        
}; // Evpn::Active::EviDetail


class Evpn::Active::EviDetail::Elements : public ydk::Entity
{
    public:
        Elements();
        ~Elements();

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

        class Element; //type: Evpn::Active::EviDetail::Elements::Element

        ydk::YList element;
        
}; // Evpn::Active::EviDetail::Elements


class Evpn::Active::EviDetail::Elements::Element : public ydk::Entity
{
    public:
        Element();
        ~Element();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf description; //type: string
        ydk::YLeaf unicast_label; //type: uint32
        ydk::YLeaf multicast_label; //type: uint32
        ydk::YLeaf cw_disable; //type: boolean
        ydk::YLeaf table_policy_name; //type: string
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf rt_import_block_set; //type: boolean
        ydk::YLeaf rt_export_block_set; //type: boolean
        ydk::YLeaf advertise_mac; //type: boolean
        ydk::YLeaf etree_leaf; //type: boolean
        ydk::YLeaf advertise_bvi_mac; //type: boolean
        ydk::YLeaf aliasing_disabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf reoriginate_disabled; //type: boolean
        ydk::YLeaf stitching; //type: boolean
        ydk::YLeaf multicast_source_connected; //type: boolean
        ydk::YLeaf bgp_implicit_import_disabled; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        class EvpnInstance; //type: Evpn::Active::EviDetail::Elements::Element::EvpnInstance
        class FlowLabel; //type: Evpn::Active::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::EvpnInstance> evpn_instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto> rt_auto;
        
}; // Evpn::Active::EviDetail::Elements::Element


class Evpn::Active::EviDetail::Elements::Element::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::EviDetail::Elements::Element::EvpnInstance


class Evpn::Active::EviDetail::Elements::Element::FlowLabel : public ydk::Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

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

        ydk::YLeaf static_flow_label; //type: boolean
        ydk::YLeaf global_flow_label; //type: boolean

}; // Evpn::Active::EviDetail::Elements::Element::FlowLabel


class Evpn::Active::EviDetail::Elements::Element::RdAuto : public ydk::Entity
{
    public:
        RdAuto();
        ~RdAuto();

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

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;
        
}; // Evpn::Active::EviDetail::Elements::Element::RdAuto


class Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto


class Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RdConfigured : public ydk::Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

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

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAuto : public ydk::Entity
{
    public:
        RtAuto();
        ~RtAuto();

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

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        
}; // Evpn::Active::EviDetail::Elements::Element::RtAuto


class Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

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

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Active::EviDetail::EviChildren : public ydk::Entity
{
    public:
        EviChildren();
        ~EviChildren();

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

        class Neighbors; //type: Evpn::Active::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Active::EviDetail::EviChildren::Macs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets> route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs> macs;
        
}; // Evpn::Active::EviDetail::EviChildren


class Evpn::Active::EviDetail::EviChildren::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Evpn::Active::EviDetail::EviChildren::Neighbors


class Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf neighbor_ip; //type: string
        ydk::YLeaf neighbor; //type: string
        class EvpnInstance; //type: Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance
        class LeafEvis; //type: Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance> evpn_instance;
        ydk::YList leaf_evis;
        
}; // Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance


class Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis : public ydk::Entity
{
    public:
        LeafEvis();
        ~LeafEvis();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries : public ydk::Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

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

        class EthernetAutoDiscovery; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        ydk::YList ethernet_auto_discovery;
        
}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public ydk::Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf local_next_hop; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf is_local_ead; //type: boolean
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        ydk::YLeaf num_paths; //type: uint32
        class EvpnInstance; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance
        class EthernetSegmentIdentifier; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance> evpn_instance;
        ydk::YList ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier


class Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts : public ydk::Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

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

        class InclusiveMulticast; //type: Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        ydk::YList inclusive_multicast;
        
}; // Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public ydk::Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf originating_ip; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf originating_ip_xr; //type: string
        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf pmsi_tunnel_type; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf is_local_entry; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf srte_policy; //type: string
        ydk::YLeaf etree_leaf; //type: boolean
        class EvpnInstance; //type: Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance> evpn_instance;
        
}; // Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance


class Evpn::Active::EviDetail::EviChildren::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

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

        class RouteTarget; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget

        ydk::YList route_target;
        
}; // Evpn::Active::EviDetail::EviChildren::RouteTargets


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf route_target_role; //type: L2vpnAdRtRole
        ydk::YLeaf route_target_stitching; //type: boolean
        class EvpnInstance; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance
        class RouteTarget_; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance> evpn_instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;
        
}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public ydk::Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

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

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        
}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

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

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Active::EviDetail::EviChildren::Macs : public ydk::Entity
{
    public:
        Macs();
        ~Macs();

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

        class Mac; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac

        ydk::YList mac;
        
}; // Evpn::Active::EviDetail::EviChildren::Macs


class Evpn::Active::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf ip_address_xr; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf num_paths; //type: uint32
        ydk::YLeaf is_local_mac; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf is_remote_mac; //type: boolean
        ydk::YLeaf soo_nexthop; //type: string
        ydk::YLeaf ipnh_address; //type: string
        ydk::YLeaf esi_port_key; //type: uint16
        ydk::YLeaf local_encap_type; //type: uint8
        ydk::YLeaf remote_encap_type; //type: uint8
        ydk::YLeaf learned_bridge_port_name; //type: string
        ydk::YLeaf local_seq_id; //type: uint32
        ydk::YLeaf remote_seq_id; //type: uint32
        ydk::YLeaf local_l3_label; //type: uint32
        ydk::YLeaf router_mac_address; //type: string
        ydk::YLeaf mac_flush_requested; //type: uint16
        ydk::YLeaf mac_flush_received; //type: uint16
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf local_is_static; //type: boolean
        ydk::YLeaf remote_is_static; //type: boolean
        ydk::YLeaf local_etree_leaf; //type: boolean
        ydk::YLeaf remote_etree_leaf; //type: boolean
        ydk::YLeaf local_attachment_circuit_id; //type: uint32
        ydk::YLeaf remote_attachment_circuit_id; //type: uint32
        class EvpnInstance; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance
        class LocalEthernetSegmentIdentifier; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier
        class RemoteEthernetSegmentIdentifier; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance> evpn_instance;
        ydk::YList local_ethernet_segment_identifier;
        ydk::YList remote_ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::EvpnInstance


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        LocalEthernetSegmentIdentifier();
        ~LocalEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        RemoteEthernetSegmentIdentifier();
        ~RemoteEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier


class Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Active::Teps : public ydk::Entity
{
    public:
        Teps();
        ~Teps();

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

        class Tep; //type: Evpn::Active::Teps::Tep

        ydk::YList tep;
        
}; // Evpn::Active::Teps


class Evpn::Active::Teps::Tep : public ydk::Entity
{
    public:
        Tep();
        ~Tep();

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

        ydk::YLeaf tep_id; //type: uint32
        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf use_count; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_table_id; //type: uint32
        ydk::YLeaf udp_port; //type: uint16
        class LocalInfo; //type: Evpn::Active::Teps::Tep::LocalInfo
        class RemoteInfo; //type: Evpn::Active::Teps::Tep::RemoteInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Teps::Tep::LocalInfo> local_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::Teps::Tep::RemoteInfo> remote_info;
        
}; // Evpn::Active::Teps::Tep


class Evpn::Active::Teps::Tep::LocalInfo : public ydk::Entity
{
    public:
        LocalInfo();
        ~LocalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        ydk::YLeaf ip; //type: string

}; // Evpn::Active::Teps::Tep::LocalInfo


class Evpn::Active::Teps::Tep::RemoteInfo : public ydk::Entity
{
    public:
        RemoteInfo();
        ~RemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        ydk::YLeaf ip; //type: string

}; // Evpn::Active::Teps::Tep::RemoteInfo


class Evpn::Active::InternalLabels : public ydk::Entity
{
    public:
        InternalLabels();
        ~InternalLabels();

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

        class InternalLabel; //type: Evpn::Active::InternalLabels::InternalLabel

        ydk::YList internal_label;
        
}; // Evpn::Active::InternalLabels


class Evpn::Active::InternalLabels::InternalLabel : public ydk::Entity
{
    public:
        InternalLabel();
        ~InternalLabel();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf esi; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf mac_num_paths; //type: uint32
        ydk::YLeaf ead_num_paths; //type: uint32
        ydk::YLeaf evi_num_paths; //type: uint32
        ydk::YLeaf sum_num_paths; //type: uint32
        ydk::YLeaf sum_num_active_paths; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf ecmp_disable; //type: boolean
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        class EvpnInstance; //type: Evpn::Active::InternalLabels::InternalLabel::EvpnInstance
        class MacPathBuffer; //type: Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer
        class EadPathBuffer; //type: Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer
        class EviPathBuffer; //type: Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer
        class SummaryPathBuffer; //type: Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::InternalLabels::InternalLabel::EvpnInstance> evpn_instance;
        ydk::YList mac_path_buffer;
        ydk::YList ead_path_buffer;
        ydk::YList evi_path_buffer;
        ydk::YList summary_path_buffer;
        
}; // Evpn::Active::InternalLabels::InternalLabel


class Evpn::Active::InternalLabels::InternalLabel::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::InternalLabels::InternalLabel::EvpnInstance


class Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer : public ydk::Entity
{
    public:
        MacPathBuffer();
        ~MacPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Active::InternalLabels::InternalLabel::MacPathBuffer


class Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer : public ydk::Entity
{
    public:
        EadPathBuffer();
        ~EadPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Active::InternalLabels::InternalLabel::EadPathBuffer


class Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer : public ydk::Entity
{
    public:
        EviPathBuffer();
        ~EviPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Active::InternalLabels::InternalLabel::EviPathBuffer


class Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer : public ydk::Entity
{
    public:
        SummaryPathBuffer();
        ~SummaryPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Active::InternalLabels::InternalLabel::SummaryPathBuffer


class Evpn::Active::EthernetSegments : public ydk::Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

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

        class EthernetSegment; //type: Evpn::Active::EthernetSegments::EthernetSegment

        ydk::YList ethernet_segment;
        
}; // Evpn::Active::EthernetSegments


class Evpn::Active::EthernetSegments::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf esi_type; //type: L2vpnEvpnEsi
        ydk::YLeaf esi_system_identifier; //type: string
        ydk::YLeaf esi_port_key; //type: uint32
        ydk::YLeaf esi_system_priority; //type: uint32
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf ethernet_segment_state; //type: L2vpnEvpnEsState
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf main_port_role; //type: L2vpnRgRole
        ydk::YLeaf main_port_mac; //type: string
        ydk::YLeaf num_up_p_ws; //type: uint32
        ydk::YLeaf route_target; //type: string
        ydk::YLeaf rt_origin; //type: L2vpnEvpnRtOrigin
        ydk::YLeaf es_bgp_gates; //type: string
        ydk::YLeaf es_l2fib_gates; //type: string
        ydk::YLeaf mac_flushing_mode_config; //type: L2vpnEvpnMfMode
        ydk::YLeaf load_balance_mode_config; //type: L2vpnEvpnLbMode
        ydk::YLeaf load_balance_mode_is_default; //type: boolean
        ydk::YLeaf load_balance_mode_oper; //type: L2vpnEvpnLbMode
        ydk::YLeaf force_single_home; //type: boolean
        ydk::YLeaf source_mac_oper; //type: string
        ydk::YLeaf source_mac_origin; //type: L2vpnEvpnSmacSrc
        ydk::YLeaf peering_timer; //type: uint32
        ydk::YLeaf peering_timer_left; //type: uint32
        ydk::YLeaf recovery_timer; //type: uint32
        ydk::YLeaf recovery_timer_left; //type: uint32
        ydk::YLeaf carving_timer; //type: uint32
        ydk::YLeaf carving_timer_left; //type: uint32
        ydk::YLeaf service_carving_mode; //type: L2vpnEvpnScMode
        ydk::YLeaf service_carving_mcast_mode; //type: L2vpnEvpnScMcastMode
        ydk::YLeaf primary_services_input; //type: string
        ydk::YLeaf secondary_services_input; //type: string
        ydk::YLeaf forwarder_ports; //type: uint32
        ydk::YLeaf permanent_forwarder_ports; //type: uint32
        ydk::YLeaf elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_config_forwarder_ports; //type: uint32
        ydk::YLeaf mp_protected; //type: boolean
        ydk::YLeaf nve_anycast_vtep; //type: boolean
        ydk::YLeaf nve_ingress_replication; //type: boolean
        ydk::YLeaf local_split_horizon_group_label_valid; //type: boolean
        ydk::YLeaf local_split_horizon_group_label; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier
        class PrimaryService; //type: Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService
        class SecondaryService; //type: Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService
        class ServiceCarvingISidelectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult
        class ServiceCarvingIsidNotElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult
        class ServiceCarvingEviElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult
        class ServiceCarvingEviNotElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult
        class ServiceCarvingVniElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult
        class ServiceCarvingVniNotElectedResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult
        class NextHop; //type: Evpn::Active::EthernetSegments::EthernetSegment::NextHop
        class ServiceCarvingVpwsPermanentResult; //type: Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        ydk::YList ethernet_segment_identifier;
        ydk::YList primary_service;
        ydk::YList secondary_service;
        ydk::YList service_carving_i_sidelected_result;
        ydk::YList service_carving_isid_not_elected_result;
        ydk::YList service_carving_evi_elected_result;
        ydk::YList service_carving_evi_not_elected_result;
        ydk::YList service_carving_vni_elected_result;
        ydk::YList service_carving_vni_not_elected_result;
        ydk::YList next_hop;
        ydk::YList service_carving_vpws_permanent_result;
        ydk::YList remote_split_horizon_group_label;
        
}; // Evpn::Active::EthernetSegments::EthernetSegment


class Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier


class Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService : public ydk::Entity
{
    public:
        PrimaryService();
        ~PrimaryService();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::PrimaryService


class Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService : public ydk::Entity
{
    public:
        SecondaryService();
        ~SecondaryService();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::SecondaryService


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult : public ydk::Entity
{
    public:
        ServiceCarvingISidelectedResult();
        ~ServiceCarvingISidelectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingIsidNotElectedResult();
        ~ServiceCarvingIsidNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviElectedResult();
        ~ServiceCarvingEviElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviNotElectedResult();
        ~ServiceCarvingEviNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingVniElectedResult();
        ~ServiceCarvingVniElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingVniNotElectedResult();
        ~ServiceCarvingVniNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult


class Evpn::Active::EthernetSegments::EthernetSegment::NextHop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf df_dont_prempt; //type: boolean
        ydk::YLeaf df_type; //type: uint8
        ydk::YLeaf df_pref; //type: uint16

}; // Evpn::Active::EthernetSegments::EthernetSegment::NextHop


class Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult : public ydk::Entity
{
    public:
        ServiceCarvingVpwsPermanentResult();
        ~ServiceCarvingVpwsPermanentResult();

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

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult


class Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Active::AcIds : public ydk::Entity
{
    public:
        AcIds();
        ~AcIds();

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

        class AcId; //type: Evpn::Active::AcIds::AcId

        ydk::YList ac_id;
        
}; // Evpn::Active::AcIds


class Evpn::Active::AcIds::AcId : public ydk::Entity
{
    public:
        AcId();
        ~AcId();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf neighbor; //type: string
        class EvpnInstance; //type: Evpn::Active::AcIds::AcId::EvpnInstance
        class LeafEvis; //type: Evpn::Active::AcIds::AcId::LeafEvis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Active::AcIds::AcId::EvpnInstance> evpn_instance;
        ydk::YList leaf_evis;
        
}; // Evpn::Active::AcIds::AcId


class Evpn::Active::AcIds::AcId::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Active::AcIds::AcId::EvpnInstance


class Evpn::Active::AcIds::AcId::LeafEvis : public ydk::Entity
{
    public:
        LeafEvis();
        ~LeafEvis();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Active::AcIds::AcId::LeafEvis


class Evpn::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

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

        class EvpnGroups; //type: Evpn::Standby::EvpnGroups
        class RemoteShgs; //type: Evpn::Standby::RemoteShgs
        class Client; //type: Evpn::Standby::Client
        class Igmps; //type: Evpn::Standby::Igmps
        class Evis; //type: Evpn::Standby::Evis
        class Summary; //type: Evpn::Standby::Summary
        class EviDetail; //type: Evpn::Standby::EviDetail
        class Teps; //type: Evpn::Standby::Teps
        class InternalLabels; //type: Evpn::Standby::InternalLabels
        class EthernetSegments; //type: Evpn::Standby::EthernetSegments
        class AcIds; //type: Evpn::Standby::AcIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EvpnGroups> evpn_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::RemoteShgs> remote_shgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Client> client;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Igmps> igmps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Evis> evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail> evi_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Teps> teps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::InternalLabels> internal_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EthernetSegments> ethernet_segments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds> ac_ids;
        
}; // Evpn::Standby


class Evpn::Standby::EvpnGroups : public ydk::Entity
{
    public:
        EvpnGroups();
        ~EvpnGroups();

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

        class EvpnGroup; //type: Evpn::Standby::EvpnGroups::EvpnGroup

        ydk::YList evpn_group;
        
}; // Evpn::Standby::EvpnGroups


class Evpn::Standby::EvpnGroups::EvpnGroup : public ydk::Entity
{
    public:
        EvpnGroup();
        ~EvpnGroup();

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

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf state; //type: EvpnGrp
        class CoreInterface; //type: Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface
        class AccessInterface; //type: Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface

        ydk::YList core_interface;
        ydk::YList access_interface;
        
}; // Evpn::Standby::EvpnGroups::EvpnGroup


class Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface : public ydk::Entity
{
    public:
        CoreInterface();
        ~CoreInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Standby::EvpnGroups::EvpnGroup::CoreInterface


class Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf state; //type: ImStateEnum

}; // Evpn::Standby::EvpnGroups::EvpnGroup::AccessInterface


class Evpn::Standby::RemoteShgs : public ydk::Entity
{
    public:
        RemoteShgs();
        ~RemoteShgs();

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

        class RemoteShg; //type: Evpn::Standby::RemoteShgs::RemoteShg

        ydk::YList remote_shg;
        
}; // Evpn::Standby::RemoteShgs


class Evpn::Standby::RemoteShgs::RemoteShg : public ydk::Entity
{
    public:
        RemoteShg();
        ~RemoteShg();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        class EthernetSegmentIdentifier; //type: Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel

        ydk::YList ethernet_segment_identifier;
        ydk::YList remote_split_horizon_group_label;
        
}; // Evpn::Standby::RemoteShgs::RemoteShg


class Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::RemoteShgs::RemoteShg::EthernetSegmentIdentifier


class Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Standby::RemoteShgs::RemoteShg::RemoteSplitHorizonGroupLabel


class Evpn::Standby::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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


}; // Evpn::Standby::Client


class Evpn::Standby::Igmps : public ydk::Entity
{
    public:
        Igmps();
        ~Igmps();

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

        class Igmp; //type: Evpn::Standby::Igmps::Igmp

        ydk::YList igmp;
        
}; // Evpn::Standby::Igmps


class Evpn::Standby::Igmps::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

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

        ydk::YLeaf source_type; //type: uint32
        ydk::YLeaf is_leave; //type: uint32
        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf src_ip; //type: string
        ydk::YLeaf grp_ip; //type: string
        ydk::YLeaf bd_id; //type: uint32
        ydk::YLeaf bp_xcid; //type: uint32
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf bd_id_xr; //type: uint32
        ydk::YLeaf route_type; //type: EvpnIgmpMsg
        ydk::YLeaf source_addr; //type: string
        ydk::YLeaf group_addr; //type: string
        ydk::YLeaf ethernet_tag_id; //type: uint32
        ydk::YLeaf igmp_version; //type: EvpnIgmpVersion
        ydk::YLeaf igmp_group_type; //type: EvpnIgmpGrp
        ydk::YLeaf max_response_time; //type: uint8
        ydk::YLeaf resolved; //type: boolean
        class SourceInfo; //type: Evpn::Standby::Igmps::Igmp::SourceInfo
        class EthernetSegmentIdentifier; //type: Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Igmps::Igmp::SourceInfo> source_info;
        ydk::YList ethernet_segment_identifier;
        
}; // Evpn::Standby::Igmps::Igmp


class Evpn::Standby::Igmps::Igmp::SourceInfo : public ydk::Entity
{
    public:
        SourceInfo();
        ~SourceInfo();

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

        ydk::YLeaf type; //type: EvpnIgmpSource
        ydk::YLeaf remote_info; //type: string
        class LocalInfo; //type: Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo> local_info;
        
}; // Evpn::Standby::Igmps::Igmp::SourceInfo


class Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo : public ydk::Entity
{
    public:
        LocalInfo();
        ~LocalInfo();

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

        ydk::YLeaf if_name; //type: string

}; // Evpn::Standby::Igmps::Igmp::SourceInfo::LocalInfo


class Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::Igmps::Igmp::EthernetSegmentIdentifier


class Evpn::Standby::Evis : public ydk::Entity
{
    public:
        Evis();
        ~Evis();

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

        class Evi; //type: Evpn::Standby::Evis::Evi

        ydk::YList evi;
        
}; // Evpn::Standby::Evis


class Evpn::Standby::Evis::Evi : public ydk::Entity
{
    public:
        Evi();
        ~Evi();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::Evis::Evi


class Evpn::Standby::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf ev_is; //type: uint32
        ydk::YLeaf tunnel_endpoints; //type: uint32
        ydk::YLeaf local_mac_routes; //type: uint32
        ydk::YLeaf local_ipv4_mac_routes; //type: uint32
        ydk::YLeaf local_ipv6_mac_routes; //type: uint32
        ydk::YLeaf es_global_mac_routes; //type: uint32
        ydk::YLeaf remote_mac_routes; //type: uint32
        ydk::YLeaf remote_soo_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv4_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv6_mac_routes; //type: uint32
        ydk::YLeaf local_imcast_routes; //type: uint32
        ydk::YLeaf remote_imcast_routes; //type: uint32
        ydk::YLeaf labels; //type: uint32
        ydk::YLeaf es_entries; //type: uint32
        ydk::YLeaf neighbor_entries; //type: uint32
        ydk::YLeaf local_ead_routes; //type: uint32
        ydk::YLeaf remote_ead_routes; //type: uint32
        ydk::YLeaf global_source_mac; //type: string
        ydk::YLeaf peering_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf carving_time; //type: uint32
        ydk::YLeaf cost_out; //type: boolean
        ydk::YLeaf startup_cost_in_time; //type: uint32
        ydk::YLeaf l2rib_throttle; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean

}; // Evpn::Standby::Summary


class Evpn::Standby::EviDetail : public ydk::Entity
{
    public:
        EviDetail();
        ~EviDetail();

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

        class Elements; //type: Evpn::Standby::EviDetail::Elements
        class EviChildren; //type: Evpn::Standby::EviDetail::EviChildren

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements> elements;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren> evi_children;
        
}; // Evpn::Standby::EviDetail


class Evpn::Standby::EviDetail::Elements : public ydk::Entity
{
    public:
        Elements();
        ~Elements();

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

        class Element; //type: Evpn::Standby::EviDetail::Elements::Element

        ydk::YList element;
        
}; // Evpn::Standby::EviDetail::Elements


class Evpn::Standby::EviDetail::Elements::Element : public ydk::Entity
{
    public:
        Element();
        ~Element();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf description; //type: string
        ydk::YLeaf unicast_label; //type: uint32
        ydk::YLeaf multicast_label; //type: uint32
        ydk::YLeaf cw_disable; //type: boolean
        ydk::YLeaf table_policy_name; //type: string
        ydk::YLeaf forward_class; //type: uint8
        ydk::YLeaf rt_import_block_set; //type: boolean
        ydk::YLeaf rt_export_block_set; //type: boolean
        ydk::YLeaf advertise_mac; //type: boolean
        ydk::YLeaf etree_leaf; //type: boolean
        ydk::YLeaf advertise_bvi_mac; //type: boolean
        ydk::YLeaf aliasing_disabled; //type: boolean
        ydk::YLeaf unknown_unicast_flooding_disabled; //type: boolean
        ydk::YLeaf reoriginate_disabled; //type: boolean
        ydk::YLeaf stitching; //type: boolean
        ydk::YLeaf multicast_source_connected; //type: boolean
        ydk::YLeaf bgp_implicit_import_disabled; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        class EvpnInstance; //type: Evpn::Standby::EviDetail::Elements::Element::EvpnInstance
        class FlowLabel; //type: Evpn::Standby::EviDetail::Elements::Element::FlowLabel
        class RdAuto; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto
        class RdConfigured; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured
        class RtAuto; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::EvpnInstance> evpn_instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::FlowLabel> flow_label;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto> rd_auto;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured> rd_configured;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto> rt_auto;
        
}; // Evpn::Standby::EviDetail::Elements::Element


class Evpn::Standby::EviDetail::Elements::Element::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::EviDetail::Elements::Element::EvpnInstance


class Evpn::Standby::EviDetail::Elements::Element::FlowLabel : public ydk::Entity
{
    public:
        FlowLabel();
        ~FlowLabel();

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

        ydk::YLeaf static_flow_label; //type: boolean
        ydk::YLeaf global_flow_label; //type: boolean

}; // Evpn::Standby::EviDetail::Elements::Element::FlowLabel


class Evpn::Standby::EviDetail::Elements::Element::RdAuto : public ydk::Entity
{
    public:
        RdAuto();
        ~RdAuto();

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

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured : public ydk::Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

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

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAuto : public ydk::Entity
{
    public:
        RtAuto();
        ~RtAuto();

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

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

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

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Standby::EviDetail::EviChildren : public ydk::Entity
{
    public:
        EviChildren();
        ~EviChildren();

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

        class Neighbors; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Standby::EviDetail::EviChildren::Macs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets> route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs> macs;
        
}; // Evpn::Standby::EviDetail::EviChildren


class Evpn::Standby::EviDetail::EviChildren::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Evpn::Standby::EviDetail::EviChildren::Neighbors


class Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf neighbor_ip; //type: string
        ydk::YLeaf neighbor; //type: string
        class EvpnInstance; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance
        class LeafEvis; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance> evpn_instance;
        ydk::YList leaf_evis;
        
}; // Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::EvpnInstance


class Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis : public ydk::Entity
{
    public:
        LeafEvis();
        ~LeafEvis();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::LeafEvis


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries : public ydk::Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

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

        class EthernetAutoDiscovery; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        ydk::YList ethernet_auto_discovery;
        
}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public ydk::Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf local_next_hop; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf is_local_ead; //type: boolean
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        ydk::YLeaf num_paths; //type: uint32
        class EvpnInstance; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance
        class EthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance> evpn_instance;
        ydk::YList ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EvpnInstance


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts : public ydk::Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

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

        class InclusiveMulticast; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        ydk::YList inclusive_multicast;
        
}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public ydk::Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf originating_ip; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf originating_ip_xr; //type: string
        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf pmsi_tunnel_type; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf is_local_entry; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf srte_policy; //type: string
        ydk::YLeaf etree_leaf; //type: boolean
        class EvpnInstance; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance> evpn_instance;
        
}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::EvpnInstance


class Evpn::Standby::EviDetail::EviChildren::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

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

        class RouteTarget; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget

        ydk::YList route_target;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf route_target_role; //type: L2vpnAdRtRole
        ydk::YLeaf route_target_stitching; //type: boolean
        class EvpnInstance; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance
        class RouteTarget_; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance> evpn_instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::EvpnInstance


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public ydk::Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

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

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

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

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Standby::EviDetail::EviChildren::Macs : public ydk::Entity
{
    public:
        Macs();
        ~Macs();

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

        class Mac; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac

        ydk::YList mac;
        
}; // Evpn::Standby::EviDetail::EviChildren::Macs


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf ip_address_xr; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf num_paths; //type: uint32
        ydk::YLeaf is_local_mac; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf is_remote_mac; //type: boolean
        ydk::YLeaf soo_nexthop; //type: string
        ydk::YLeaf ipnh_address; //type: string
        ydk::YLeaf esi_port_key; //type: uint16
        ydk::YLeaf local_encap_type; //type: uint8
        ydk::YLeaf remote_encap_type; //type: uint8
        ydk::YLeaf learned_bridge_port_name; //type: string
        ydk::YLeaf local_seq_id; //type: uint32
        ydk::YLeaf remote_seq_id; //type: uint32
        ydk::YLeaf local_l3_label; //type: uint32
        ydk::YLeaf router_mac_address; //type: string
        ydk::YLeaf mac_flush_requested; //type: uint16
        ydk::YLeaf mac_flush_received; //type: uint16
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf local_is_static; //type: boolean
        ydk::YLeaf remote_is_static; //type: boolean
        ydk::YLeaf local_etree_leaf; //type: boolean
        ydk::YLeaf remote_etree_leaf; //type: boolean
        ydk::YLeaf local_attachment_circuit_id; //type: uint32
        ydk::YLeaf remote_attachment_circuit_id; //type: uint32
        class EvpnInstance; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance
        class LocalEthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier
        class RemoteEthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance> evpn_instance;
        ydk::YList local_ethernet_segment_identifier;
        ydk::YList remote_ethernet_segment_identifier;
        ydk::YList path_buffer;
        
}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::EvpnInstance


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        LocalEthernetSegmentIdentifier();
        ~LocalEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        RemoteEthernetSegmentIdentifier();
        ~RemoteEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Standby::Teps : public ydk::Entity
{
    public:
        Teps();
        ~Teps();

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

        class Tep; //type: Evpn::Standby::Teps::Tep

        ydk::YList tep;
        
}; // Evpn::Standby::Teps


class Evpn::Standby::Teps::Tep : public ydk::Entity
{
    public:
        Tep();
        ~Tep();

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

        ydk::YLeaf tep_id; //type: uint32
        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf use_count; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_table_id; //type: uint32
        ydk::YLeaf udp_port; //type: uint16
        class LocalInfo; //type: Evpn::Standby::Teps::Tep::LocalInfo
        class RemoteInfo; //type: Evpn::Standby::Teps::Tep::RemoteInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Teps::Tep::LocalInfo> local_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Teps::Tep::RemoteInfo> remote_info;
        
}; // Evpn::Standby::Teps::Tep


class Evpn::Standby::Teps::Tep::LocalInfo : public ydk::Entity
{
    public:
        LocalInfo();
        ~LocalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        ydk::YLeaf ip; //type: string

}; // Evpn::Standby::Teps::Tep::LocalInfo


class Evpn::Standby::Teps::Tep::RemoteInfo : public ydk::Entity
{
    public:
        RemoteInfo();
        ~RemoteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation; //type: uint8
        ydk::YLeaf ip; //type: string

}; // Evpn::Standby::Teps::Tep::RemoteInfo


class Evpn::Standby::InternalLabels : public ydk::Entity
{
    public:
        InternalLabels();
        ~InternalLabels();

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

        class InternalLabel; //type: Evpn::Standby::InternalLabels::InternalLabel

        ydk::YList internal_label;
        
}; // Evpn::Standby::InternalLabels


class Evpn::Standby::InternalLabels::InternalLabel : public ydk::Entity
{
    public:
        InternalLabel();
        ~InternalLabel();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf encapsulation; //type: uint32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: uint32
        ydk::YLeaf esi; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf mac_num_paths; //type: uint32
        ydk::YLeaf ead_num_paths; //type: uint32
        ydk::YLeaf evi_num_paths; //type: uint32
        ydk::YLeaf sum_num_paths; //type: uint32
        ydk::YLeaf sum_num_active_paths; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf ecmp_disable; //type: boolean
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf redundancy_single_flow_active; //type: boolean
        class EvpnInstance; //type: Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance
        class MacPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer
        class EadPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer
        class EviPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer
        class SummaryPathBuffer; //type: Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance> evpn_instance;
        ydk::YList mac_path_buffer;
        ydk::YList ead_path_buffer;
        ydk::YList evi_path_buffer;
        ydk::YList summary_path_buffer;
        
}; // Evpn::Standby::InternalLabels::InternalLabel


class Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::InternalLabels::InternalLabel::EvpnInstance


class Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer : public ydk::Entity
{
    public:
        MacPathBuffer();
        ~MacPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::MacPathBuffer


class Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer : public ydk::Entity
{
    public:
        EadPathBuffer();
        ~EadPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::EadPathBuffer


class Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer : public ydk::Entity
{
    public:
        EviPathBuffer();
        ~EviPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::EviPathBuffer


class Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer : public ydk::Entity
{
    public:
        SummaryPathBuffer();
        ~SummaryPathBuffer();

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

        ydk::YLeaf tunnel_endpoint_id; //type: uint32
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::InternalLabels::InternalLabel::SummaryPathBuffer


class Evpn::Standby::EthernetSegments : public ydk::Entity
{
    public:
        EthernetSegments();
        ~EthernetSegments();

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

        class EthernetSegment; //type: Evpn::Standby::EthernetSegments::EthernetSegment

        ydk::YList ethernet_segment;
        
}; // Evpn::Standby::EthernetSegments


class Evpn::Standby::EthernetSegments::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf esi_type; //type: L2vpnEvpnEsi
        ydk::YLeaf esi_system_identifier; //type: string
        ydk::YLeaf esi_port_key; //type: uint32
        ydk::YLeaf esi_system_priority; //type: uint32
        ydk::YLeaf ethernet_segment_name; //type: string
        ydk::YLeaf ethernet_segment_state; //type: L2vpnEvpnEsState
        ydk::YLeaf if_handle; //type: string
        ydk::YLeaf main_port_role; //type: L2vpnRgRole
        ydk::YLeaf main_port_mac; //type: string
        ydk::YLeaf num_up_p_ws; //type: uint32
        ydk::YLeaf route_target; //type: string
        ydk::YLeaf rt_origin; //type: L2vpnEvpnRtOrigin
        ydk::YLeaf es_bgp_gates; //type: string
        ydk::YLeaf es_l2fib_gates; //type: string
        ydk::YLeaf mac_flushing_mode_config; //type: L2vpnEvpnMfMode
        ydk::YLeaf load_balance_mode_config; //type: L2vpnEvpnLbMode
        ydk::YLeaf load_balance_mode_is_default; //type: boolean
        ydk::YLeaf load_balance_mode_oper; //type: L2vpnEvpnLbMode
        ydk::YLeaf force_single_home; //type: boolean
        ydk::YLeaf source_mac_oper; //type: string
        ydk::YLeaf source_mac_origin; //type: L2vpnEvpnSmacSrc
        ydk::YLeaf peering_timer; //type: uint32
        ydk::YLeaf peering_timer_left; //type: uint32
        ydk::YLeaf recovery_timer; //type: uint32
        ydk::YLeaf recovery_timer_left; //type: uint32
        ydk::YLeaf carving_timer; //type: uint32
        ydk::YLeaf carving_timer_left; //type: uint32
        ydk::YLeaf service_carving_mode; //type: L2vpnEvpnScMode
        ydk::YLeaf service_carving_mcast_mode; //type: L2vpnEvpnScMcastMode
        ydk::YLeaf primary_services_input; //type: string
        ydk::YLeaf secondary_services_input; //type: string
        ydk::YLeaf forwarder_ports; //type: uint32
        ydk::YLeaf permanent_forwarder_ports; //type: uint32
        ydk::YLeaf elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_elected_forwarder_ports; //type: uint32
        ydk::YLeaf not_config_forwarder_ports; //type: uint32
        ydk::YLeaf mp_protected; //type: boolean
        ydk::YLeaf nve_anycast_vtep; //type: boolean
        ydk::YLeaf nve_ingress_replication; //type: boolean
        ydk::YLeaf local_split_horizon_group_label_valid; //type: boolean
        ydk::YLeaf local_split_horizon_group_label; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier
        class PrimaryService; //type: Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService
        class SecondaryService; //type: Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService
        class ServiceCarvingISidelectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult
        class ServiceCarvingIsidNotElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult
        class ServiceCarvingEviElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult
        class ServiceCarvingEviNotElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult
        class ServiceCarvingVniElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult
        class ServiceCarvingVniNotElectedResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult
        class NextHop; //type: Evpn::Standby::EthernetSegments::EthernetSegment::NextHop
        class ServiceCarvingVpwsPermanentResult; //type: Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult
        class RemoteSplitHorizonGroupLabel; //type: Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel

        ydk::YList ethernet_segment_identifier;
        ydk::YList primary_service;
        ydk::YList secondary_service;
        ydk::YList service_carving_i_sidelected_result;
        ydk::YList service_carving_isid_not_elected_result;
        ydk::YList service_carving_evi_elected_result;
        ydk::YList service_carving_evi_not_elected_result;
        ydk::YList service_carving_vni_elected_result;
        ydk::YList service_carving_vni_not_elected_result;
        ydk::YList next_hop;
        ydk::YList service_carving_vpws_permanent_result;
        ydk::YList remote_split_horizon_group_label;
        
}; // Evpn::Standby::EthernetSegments::EthernetSegment


class Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EthernetSegments::EthernetSegment::EthernetSegmentIdentifier


class Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService : public ydk::Entity
{
    public:
        PrimaryService();
        ~PrimaryService();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::PrimaryService


class Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService : public ydk::Entity
{
    public:
        SecondaryService();
        ~SecondaryService();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::SecondaryService


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult : public ydk::Entity
{
    public:
        ServiceCarvingISidelectedResult();
        ~ServiceCarvingISidelectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingISidelectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingIsidNotElectedResult();
        ~ServiceCarvingIsidNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingIsidNotElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviElectedResult();
        ~ServiceCarvingEviElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingEviNotElectedResult();
        ~ServiceCarvingEviNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingEviNotElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingVniElectedResult();
        ~ServiceCarvingVniElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult : public ydk::Entity
{
    public:
        ServiceCarvingVniNotElectedResult();
        ~ServiceCarvingVniNotElectedResult();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVniNotElectedResult


class Evpn::Standby::EthernetSegments::EthernetSegment::NextHop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf df_dont_prempt; //type: boolean
        ydk::YLeaf df_type; //type: uint8
        ydk::YLeaf df_pref; //type: uint16

}; // Evpn::Standby::EthernetSegments::EthernetSegment::NextHop


class Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult : public ydk::Entity
{
    public:
        ServiceCarvingVpwsPermanentResult();
        ~ServiceCarvingVpwsPermanentResult();

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

        ydk::YLeaf vpn_id; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::ServiceCarvingVpwsPermanentResult


class Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel : public ydk::Entity
{
    public:
        RemoteSplitHorizonGroupLabel();
        ~RemoteSplitHorizonGroupLabel();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf label; //type: uint32

}; // Evpn::Standby::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel


class Evpn::Standby::AcIds : public ydk::Entity
{
    public:
        AcIds();
        ~AcIds();

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

        class AcId; //type: Evpn::Standby::AcIds::AcId

        ydk::YList ac_id;
        
}; // Evpn::Standby::AcIds


class Evpn::Standby::AcIds::AcId : public ydk::Entity
{
    public:
        AcId();
        ~AcId();

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

        ydk::YLeaf evi; //type: uint32
        ydk::YLeaf ac_id; //type: uint32
        ydk::YLeaf neighbor; //type: string
        class EvpnInstance; //type: Evpn::Standby::AcIds::AcId::EvpnInstance
        class LeafEvis; //type: Evpn::Standby::AcIds::AcId::LeafEvis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::AcIds::AcId::EvpnInstance> evpn_instance;
        ydk::YList leaf_evis;
        
}; // Evpn::Standby::AcIds::AcId


class Evpn::Standby::AcIds::AcId::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf ethernet_vpn_id; //type: uint32
        ydk::YLeaf encapsulation_xr; //type: uint8
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::AcIds::AcId::EvpnInstance


class Evpn::Standby::AcIds::AcId::LeafEvis : public ydk::Entity
{
    public:
        LeafEvis();
        ~LeafEvis();

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

        ydk::YLeaf entry; //type: uint32

}; // Evpn::Standby::AcIds::AcId::LeafEvis

class BgpRouteTargetRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class BgpRouteTargetFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf es_import;

};

class L2vpnEvpnScMcastMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf hrw_s_g;
        static const ydk::Enum::YLeaf hrw_g;

};

class L2vpnEvpnScMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf manual_list;
        static const ydk::Enum::YLeaf hrw;
        static const ydk::Enum::YLeaf pref;

};

class L2vpnEvpnSmacSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf pbb_bsa;
        static const ydk::Enum::YLeaf esi;
        static const ydk::Enum::YLeaf esi_invalid;
        static const ydk::Enum::YLeaf pbb_bsa_overrride;

};

class L2vpnEvpnLbMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid_load_balancing;
        static const ydk::Enum::YLeaf single_homed;
        static const ydk::Enum::YLeaf multi_homed_aa_per_flow;
        static const ydk::Enum::YLeaf multi_homed_aa_per_service;
        static const ydk::Enum::YLeaf multi_homed_single_flow_active;
        static const ydk::Enum::YLeaf multi_homed_port_active;

};

class L2vpnEvpnMfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf tcn_stp;
        static const ydk::Enum::YLeaf mvrp;

};

class L2vpnEvpnRtOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf extracted;
        static const ydk::Enum::YLeaf configured;

};

class L2vpnRgRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_rg_role_not_defined;
        static const ydk::Enum::YLeaf l2vpn_rg_role_active;
        static const ydk::Enum::YLeaf l2vpn_rg_role_standby;
        static const ydk::Enum::YLeaf l2vpn_rg_role_max;

};

class L2vpnEvpnEsState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_ready;
        static const ydk::Enum::YLeaf peering;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf standby;

};

class L2vpnEvpnEsi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf esi_type0;
        static const ydk::Enum::YLeaf esi_type1;
        static const ydk::Enum::YLeaf esi_type2;
        static const ydk::Enum::YLeaf esi_type3;
        static const ydk::Enum::YLeaf esi_type4;
        static const ydk::Enum::YLeaf esi_type5;
        static const ydk::Enum::YLeaf l2vpn_evpn_esi_type_legacy;
        static const ydk::Enum::YLeaf l2vpn_evpn_esi_type_override;
        static const ydk::Enum::YLeaf esi_type_invalid;

};

class L2vpnAdRtRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class L2vpnAdRt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rt_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rt_v4_addr;
        static const ydk::Enum::YLeaf es_import;

};

class L2vpnAdRd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2vpn_ad_rd_none;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_auto;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_4byte_as;
        static const ydk::Enum::YLeaf l2vpn_ad_rd_v4_addr;

};

class L2vpnEvpn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_type_invalid;
        static const ydk::Enum::YLeaf evpn_type_evpn;
        static const ydk::Enum::YLeaf evpn_type_pbb_evpn;
        static const ydk::Enum::YLeaf evpn_type_evpn_vpws_vlan_unaware;
        static const ydk::Enum::YLeaf evpn_type_evpn_vpws_vlan_aware;
        static const ydk::Enum::YLeaf evpn_type_max;

};

class EvpnIgmpGrp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf include;
        static const ydk::Enum::YLeaf exclude;

};

class EvpnIgmpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v1;
        static const ydk::Enum::YLeaf v2;
        static const ydk::Enum::YLeaf v3;

};

class EvpnIgmpSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class EvpnIgmpMsg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf join;
        static const ydk::Enum::YLeaf leave;

};

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

};

class EvpnGrp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deisolating;
        static const ydk::Enum::YLeaf isolated;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf incomplete;

};


}
}

#endif /* _CISCO_IOS_XR_EVPN_OPER_ */

