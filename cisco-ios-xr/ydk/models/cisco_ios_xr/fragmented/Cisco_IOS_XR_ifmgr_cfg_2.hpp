#ifndef _CISCO_IOS_XR_IFMGR_CFG_2_
#define _CISCO_IOS_XR_IFMGR_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter : public ydk::Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound
        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound> outbound;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_use; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter : public ydk::Entity
{
    public:
        EsPacketFilter();
        ~EsPacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outbound; //type: string
        ydk::YLeaf inbound; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter : public ydk::Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound
        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound> outbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound> inbound;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_use; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions : public ydk::Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanMonitorSession; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession

        ydk::YList span_monitor_session;
        
}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_class; //type: SpanSessionClass
        ydk::YLeaf mirror_first; //type: uint32
        ydk::YLeaf mirror_interval; //type: SpanMirrorInterval
        class Attachment; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment
        class Acl; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl> acl; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_name; //type: string
        ydk::YLeaf direction; //type: SpanTrafficDirection
        ydk::YLeaf port_level_enable; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_enable; //type: empty
        ydk::YLeaf acl_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess : public ydk::Entity
{
    public:
        NvSatelliteAccess();
        ~NvSatelliteAccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink : public ydk::Entity
{
    public:
        NvSatelliteFabricLink();
        ~NvSatelliteFabricLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite; //type: uint32
        ydk::YLeaf minimum_required_links; //type: uint32
        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy
        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts
        class EthernetFeatures; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts> remote_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures> ethernet_features;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group; //type: uint32
        ydk::YLeaf minimum_preferred_links; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts : public ydk::Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort

        ydk::YList remote_port;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_type; //type: string
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf sub_slot; //type: uint32
        ydk::YLeaf port_range; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures : public ydk::Entity
{
    public:
        EthernetFeatures();
        ~EthernetFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cfm; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm> cfm;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf continuity_check_interval; //type: CfmCcmInterval
        ydk::YLeaf level; //type: uint32
        ydk::YLeaf enable; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork : public ydk::Entity
{
    public:
        NvSatelliteFabricNetwork();
        ~NvSatelliteFabricNetwork();

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
        class Satellites; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites
        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites> satellites;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy> redundancy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites : public ydk::Entity
{
    public:
        Satellites();
        ~Satellites();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Satellite; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite

        ydk::YList satellite;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf enable; //type: empty
        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts> remote_ports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts : public ydk::Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort

        ydk::YList remote_port;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_type; //type: string
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf sub_slot; //type: uint32
        ydk::YLeaf port_range; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group; //type: uint32
        ydk::YLeaf minimum_preferred_links; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies : public ydk::Entity
{
    public:
        ServicePolicies();
        ~ServicePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy

        ydk::YList service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp : public ydk::Entity
{
    public:
        CiscoIOSXRPppMaCfgPpp();
        ~CiscoIOSXRPppMaCfgPpp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement : public ydk::Entity
{
    public:
        PerformanceManagement();
        ~PerformanceManagement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24
        class Minute15Gfp; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp
        class SonetMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15
        class Hour24Gfp; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp
        class EthernetHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24
        class Minute15otnTcms; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms
        class OcHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24
        class EthernetMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15
        class HoVcHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24
        class Second30; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30
        class Hour24otnTcms; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms
        class StsMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15
        class Hour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24
        class HoVcMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15
        class StsHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24
        class StmMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15
        class SonetHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24
        class Minute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path
        class OcMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15
        class EthernetSecond30; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30
        class Hour24Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path
        class Minute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24> stm_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp> minute15_gfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15> sonet_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp> hour24_gfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24> ethernet_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms> minute15otn_tcms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24> oc_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15> ethernet_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24> ho_vc_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30> second30;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms> hour24otn_tcms;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15> sts_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24> hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15> ho_vc_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24> sts_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15> stm_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24> sonet_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path> minute15_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15> oc_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30> ethernet_second30;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path> hour24_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15> minute15;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24 : public ydk::Entity
{
    public:
        StmHour24();
        ~StmHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24Stm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm> stm_hour24_stm;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm : public ydk::Entity
{
    public:
        StmHour24Stm();
        ~StmHour24Stm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24StmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports
        class StmHour24StmThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports> stm_hour24_stm_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds> stm_hour24_stm_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports : public ydk::Entity
{
    public:
        StmHour24StmReports();
        ~StmHour24StmReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24StmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport

        ydk::YList stm_hour24_stm_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport : public ydk::Entity
{
    public:
        StmHour24StmReport();
        ~StmHour24StmReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stm_report; //type: StmReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds : public ydk::Entity
{
    public:
        StmHour24StmThresholds();
        ~StmHour24StmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24StmThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold

        ydk::YList stm_hour24_stm_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold : public ydk::Entity
{
    public:
        StmHour24StmThreshold();
        ~StmHour24StmThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stm_threshold; //type: StmThreshold
        ydk::YLeaf stm_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp : public ydk::Entity
{
    public:
        Minute15Gfp();
        ~Minute15Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15Gfp_; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_> minute15_gfp;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_ : public ydk::Entity
{
    public:
        Minute15Gfp_();
        ~Minute15Gfp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15GfpReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports
        class Minute15GfpThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports> minute15_gfp_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds> minute15_gfp_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports : public ydk::Entity
{
    public:
        Minute15GfpReports();
        ~Minute15GfpReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15GfpReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport

        ydk::YList minute15_gfp_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport : public ydk::Entity
{
    public:
        Minute15GfpReport();
        ~Minute15GfpReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gfp_report; //type: GfpReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds : public ydk::Entity
{
    public:
        Minute15GfpThresholds();
        ~Minute15GfpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15GfpThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold

        ydk::YList minute15_gfp_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold : public ydk::Entity
{
    public:
        Minute15GfpThreshold();
        ~Minute15GfpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gfp_threshold; //type: GfpThreshold
        ydk::YLeaf gfp_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15 : public ydk::Entity
{
    public:
        SonetMinute15();
        ~SonetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path
        class SonetMinute15Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path> sonet_minute15_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn> sonet_minute15_ocn;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path : public ydk::Entity
{
    public:
        SonetMinute15Path();
        ~SonetMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports
        class SonetMinute15PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports> sonet_minute15_path_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds> sonet_minute15_path_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports : public ydk::Entity
{
    public:
        SonetMinute15PathReports();
        ~SonetMinute15PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport

        ydk::YList sonet_minute15_path_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport : public ydk::Entity
{
    public:
        SonetMinute15PathReport();
        ~SonetMinute15PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_report; //type: PathReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds : public ydk::Entity
{
    public:
        SonetMinute15PathThresholds();
        ~SonetMinute15PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold

        ydk::YList sonet_minute15_path_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold : public ydk::Entity
{
    public:
        SonetMinute15PathThreshold();
        ~SonetMinute15PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_threshold; //type: PathThreshold
        ydk::YLeaf path_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn : public ydk::Entity
{
    public:
        SonetMinute15Ocn();
        ~SonetMinute15Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports
        class SonetMinute15OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports> sonet_minute15_ocn_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds> sonet_minute15_ocn_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports : public ydk::Entity
{
    public:
        SonetMinute15OcnReports();
        ~SonetMinute15OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport

        ydk::YList sonet_minute15_ocn_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport : public ydk::Entity
{
    public:
        SonetMinute15OcnReport();
        ~SonetMinute15OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ocn_report; //type: OcnReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds : public ydk::Entity
{
    public:
        SonetMinute15OcnThresholds();
        ~SonetMinute15OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold

        ydk::YList sonet_minute15_ocn_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold : public ydk::Entity
{
    public:
        SonetMinute15OcnThreshold();
        ~SonetMinute15OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ocn_threshold; //type: OcnThreshold
        ydk::YLeaf ocn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp : public ydk::Entity
{
    public:
        Hour24Gfp();
        ~Hour24Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24Gfp_; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_> hour24_gfp;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_ : public ydk::Entity
{
    public:
        Hour24Gfp_();
        ~Hour24Gfp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24GfpReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports
        class Hour24GfpThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports> hour24_gfp_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds> hour24_gfp_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports : public ydk::Entity
{
    public:
        Hour24GfpReports();
        ~Hour24GfpReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24GfpReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport

        ydk::YList hour24_gfp_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport : public ydk::Entity
{
    public:
        Hour24GfpReport();
        ~Hour24GfpReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gfp_report; //type: GfpReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds : public ydk::Entity
{
    public:
        Hour24GfpThresholds();
        ~Hour24GfpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24GfpThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold

        ydk::YList hour24_gfp_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold : public ydk::Entity
{
    public:
        Hour24GfpThreshold();
        ~Hour24GfpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gfp_threshold; //type: GfpThreshold
        ydk::YLeaf gfp_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24 : public ydk::Entity
{
    public:
        EthernetHour24();
        ~EthernetHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether> hour24_ether;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether : public ydk::Entity
{
    public:
        Hour24Ether();
        ~Hour24Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds
        class Hour24EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds> hour24_ether_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports> hour24_ether_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds : public ydk::Entity
{
    public:
        Hour24EtherThresholds();
        ~Hour24EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold

        ydk::YList hour24_ether_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold : public ydk::Entity
{
    public:
        Hour24EtherThreshold();
        ~Hour24EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_threshold; //type: EtherThreshold
        ydk::YLeaf ether_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports : public ydk::Entity
{
    public:
        Hour24EtherReports();
        ~Hour24EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport

        ydk::YList hour24_ether_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport : public ydk::Entity
{
    public:
        Hour24EtherReport();
        ~Hour24EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_report; //type: EtherReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms : public ydk::Entity
{
    public:
        Minute15otnTcms();
        ~Minute15otnTcms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15otnTcm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm

        ydk::YList minute15otn_tcm;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm : public ydk::Entity
{
    public:
        Minute15otnTcm();
        ~Minute15otnTcm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcm_number; //type: uint32
        class Min15OtnTcmThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes
        class Minute15otnTcmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes> min15_otn_tcm_threshes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports> minute15otn_tcm_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes : public ydk::Entity
{
    public:
        Min15OtnTcmThreshes();
        ~Min15OtnTcmThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Min15OtnTcmThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh

        ydk::YList min15_otn_tcm_thresh;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh : public ydk::Entity
{
    public:
        Min15OtnTcmThresh();
        ~Min15OtnTcmThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_threshold; //type: OtnTcmThreshold
        ydk::YLeaf otn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports : public ydk::Entity
{
    public:
        Minute15otnTcmReports();
        ~Minute15otnTcmReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15otnTcmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport

        ydk::YList minute15otn_tcm_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport : public ydk::Entity
{
    public:
        Minute15otnTcmReport();
        ~Minute15otnTcmReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_report; //type: OtnTcmReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15otnTcms::Minute15otnTcm::Minute15otnTcmReports::Minute15otnTcmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24 : public ydk::Entity
{
    public:
        OcHour24();
        ~OcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn> oc_hour24_ocn;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn : public ydk::Entity
{
    public:
        OcHour24Ocn();
        ~OcHour24Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports
        class OcHour24OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports> oc_hour24_ocn_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds> oc_hour24_ocn_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports : public ydk::Entity
{
    public:
        OcHour24OcnReports();
        ~OcHour24OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport

        ydk::YList oc_hour24_ocn_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport : public ydk::Entity
{
    public:
        OcHour24OcnReport();
        ~OcHour24OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ocn_report; //type: OcnReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds : public ydk::Entity
{
    public:
        OcHour24OcnThresholds();
        ~OcHour24OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold

        ydk::YList oc_hour24_ocn_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold : public ydk::Entity
{
    public:
        OcHour24OcnThreshold();
        ~OcHour24OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ocn_threshold; //type: OcnThreshold
        ydk::YLeaf ocn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15 : public ydk::Entity
{
    public:
        EthernetMinute15();
        ~EthernetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether> minute15_ether;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether : public ydk::Entity
{
    public:
        Minute15Ether();
        ~Minute15Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds
        class Minute15EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds> minute15_ether_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports> minute15_ether_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds : public ydk::Entity
{
    public:
        Minute15EtherThresholds();
        ~Minute15EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold

        ydk::YList minute15_ether_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold : public ydk::Entity
{
    public:
        Minute15EtherThreshold();
        ~Minute15EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_threshold; //type: EtherThreshold
        ydk::YLeaf ether_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports : public ydk::Entity
{
    public:
        Minute15EtherReports();
        ~Minute15EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport

        ydk::YList minute15_ether_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport : public ydk::Entity
{
    public:
        Minute15EtherReport();
        ~Minute15EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_report; //type: EtherReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24 : public ydk::Entity
{
    public:
        HoVcHour24();
        ~HoVcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24hoVc; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc> ho_vc_hour24ho_vc;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc : public ydk::Entity
{
    public:
        HoVcHour24hoVc();
        ~HoVcHour24hoVc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24hoVcReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports
        class HoVcHour24hoVcThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports> ho_vc_hour24ho_vc_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds> ho_vc_hour24ho_vc_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports : public ydk::Entity
{
    public:
        HoVcHour24hoVcReports();
        ~HoVcHour24hoVcReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24hoVcReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport

        ydk::YList ho_vc_hour24ho_vc_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport : public ydk::Entity
{
    public:
        HoVcHour24hoVcReport();
        ~HoVcHour24hoVcReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ho_vc_report; //type: HoVcReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds : public ydk::Entity
{
    public:
        HoVcHour24hoVcThresholds();
        ~HoVcHour24hoVcThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24hoVcThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold

        ydk::YList ho_vc_hour24ho_vc_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold : public ydk::Entity
{
    public:
        HoVcHour24hoVcThreshold();
        ~HoVcHour24hoVcThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ho_vc_threshold; //type: HoVcThreshold
        ydk::YLeaf ho_vc_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30 : public ydk::Entity
{
    public:
        Second30();
        ~Second30();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30pcs; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs
        class Second30fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec
        class Second30Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics
        class Second30secyif; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif
        class Second30secyrx; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx
        class Second30otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn
        class Second30secytx; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs> second30pcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec> second30fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics> second30_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif> second30secyif;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx> second30secyrx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn> second30otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx> second30secytx;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs : public ydk::Entity
{
    public:
        Second30pcs();
        ~Second30pcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30pcsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds
        class Second30pcsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds> second30pcs_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports> second30pcs_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds : public ydk::Entity
{
    public:
        Second30pcsThresholds();
        ~Second30pcsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30pcsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold

        ydk::YList second30pcs_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold : public ydk::Entity
{
    public:
        Second30pcsThreshold();
        ~Second30pcsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcs_threshold; //type: PcsThreshold
        ydk::YLeaf pcs_threshold_value; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports : public ydk::Entity
{
    public:
        Second30pcsReports();
        ~Second30pcsReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30pcsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport

        ydk::YList second30pcs_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport : public ydk::Entity
{
    public:
        Second30pcsReport();
        ~Second30pcsReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcs_report; //type: PcsReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec : public ydk::Entity
{
    public:
        Second30fec();
        ~Second30fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30fecThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds
        class Second30fecReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds> second30fec_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports> second30fec_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds : public ydk::Entity
{
    public:
        Second30fecThresholds();
        ~Second30fecThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30fecThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold

        ydk::YList second30fec_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold : public ydk::Entity
{
    public:
        Second30fecThreshold();
        ~Second30fecThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_threshold; //type: FecThreshold
        ydk::YLeaf fec_threshold_value; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports : public ydk::Entity
{
    public:
        Second30fecReports();
        ~Second30fecReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30fecReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport

        ydk::YList second30fec_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport : public ydk::Entity
{
    public:
        Second30fecReport();
        ~Second30fecReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_report; //type: FecReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics : public ydk::Entity
{
    public:
        Second30Optics();
        ~Second30Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports
        class Second30OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports> second30_optics_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds> second30_optics_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports : public ydk::Entity
{
    public:
        Second30OpticsReports();
        ~Second30OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport

        ydk::YList second30_optics_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport : public ydk::Entity
{
    public:
        Second30OpticsReport();
        ~Second30OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_report; //type: OpticsReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds : public ydk::Entity
{
    public:
        Second30OpticsThresholds();
        ~Second30OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold

        ydk::YList second30_optics_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold : public ydk::Entity
{
    public:
        Second30OpticsThreshold();
        ~Second30OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_threshold; //type: OpticsThreshold
        ydk::YLeaf optics_threshold_value; //type: int32
        ydk::YLeaf dbm; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif : public ydk::Entity
{
    public:
        Second30secyif();
        ~Second30secyif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secyifThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds
        class Second30secyifReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds> second30secyif_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports> second30secyif_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds : public ydk::Entity
{
    public:
        Second30secyifThresholds();
        ~Second30secyifThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secyifThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold

        ydk::YList second30secyif_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold : public ydk::Entity
{
    public:
        Second30secyifThreshold();
        ~Second30secyifThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyif_threshold; //type: SecyifThreshold
        ydk::YLeaf secyif_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports : public ydk::Entity
{
    public:
        Second30secyifReports();
        ~Second30secyifReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secyifReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport

        ydk::YList second30secyif_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport : public ydk::Entity
{
    public:
        Second30secyifReport();
        ~Second30secyifReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyif_report; //type: SecyifReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx : public ydk::Entity
{
    public:
        Second30secyrx();
        ~Second30secyrx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secyrxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds
        class Second30secyrxReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds> second30secyrx_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports> second30secyrx_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds : public ydk::Entity
{
    public:
        Second30secyrxThresholds();
        ~Second30secyrxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secyrxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold

        ydk::YList second30secyrx_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold : public ydk::Entity
{
    public:
        Second30secyrxThreshold();
        ~Second30secyrxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyrx_threshold; //type: SecyrxThreshold
        ydk::YLeaf secyrx_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports : public ydk::Entity
{
    public:
        Second30secyrxReports();
        ~Second30secyrxReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secyrxReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport

        ydk::YList second30secyrx_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport : public ydk::Entity
{
    public:
        Second30secyrxReport();
        ~Second30secyrxReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyrx_report; //type: SecyrxReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn : public ydk::Entity
{
    public:
        Second30otn();
        ~Second30otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30OtnThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes
        class Second30otnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes> second30_otn_threshes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports> second30otn_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes : public ydk::Entity
{
    public:
        Second30OtnThreshes();
        ~Second30OtnThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30OtnThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh

        ydk::YList second30_otn_thresh;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh : public ydk::Entity
{
    public:
        Second30OtnThresh();
        ~Second30OtnThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_threshold; //type: OtnThreshold
        ydk::YLeaf otn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports : public ydk::Entity
{
    public:
        Second30otnReports();
        ~Second30otnReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30otnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport

        ydk::YList second30otn_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport : public ydk::Entity
{
    public:
        Second30otnReport();
        ~Second30otnReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_report; //type: OtnReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx : public ydk::Entity
{
    public:
        Second30secytx();
        ~Second30secytx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secytxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds
        class Second30secytxReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds> second30secytx_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports> second30secytx_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds : public ydk::Entity
{
    public:
        Second30secytxThresholds();
        ~Second30secytxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secytxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold

        ydk::YList second30secytx_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold : public ydk::Entity
{
    public:
        Second30secytxThreshold();
        ~Second30secytxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secytx_threshold; //type: SecytxThreshold
        ydk::YLeaf secytx_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports : public ydk::Entity
{
    public:
        Second30secytxReports();
        ~Second30secytxReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30secytxReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport

        ydk::YList second30secytx_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport : public ydk::Entity
{
    public:
        Second30secytxReport();
        ~Second30secytxReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secytx_report; //type: SecytxReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms : public ydk::Entity
{
    public:
        Hour24otnTcms();
        ~Hour24otnTcms();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnTcm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm

        ydk::YList hour24otn_tcm;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm : public ydk::Entity
{
    public:
        Hour24otnTcm();
        ~Hour24otnTcm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcm_number; //type: uint32
        class Hour24otnTcmThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds
        class Hour24otnTcmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds> hour24otn_tcm_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports> hour24otn_tcm_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds : public ydk::Entity
{
    public:
        Hour24otnTcmThresholds();
        ~Hour24otnTcmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnTcmThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold

        ydk::YList hour24otn_tcm_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold : public ydk::Entity
{
    public:
        Hour24otnTcmThreshold();
        ~Hour24otnTcmThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_threshold; //type: OtnTcmThreshold
        ydk::YLeaf otn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports : public ydk::Entity
{
    public:
        Hour24otnTcmReports();
        ~Hour24otnTcmReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnTcmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport

        ydk::YList hour24otn_tcm_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport : public ydk::Entity
{
    public:
        Hour24otnTcmReport();
        ~Hour24otnTcmReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_report; //type: OtnTcmReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15 : public ydk::Entity
{
    public:
        StsMinute15();
        ~StsMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path> sts_minute15_path;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path : public ydk::Entity
{
    public:
        StsMinute15Path();
        ~StsMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports
        class StsMinute15PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports> sts_minute15_path_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds> sts_minute15_path_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports : public ydk::Entity
{
    public:
        StsMinute15PathReports();
        ~StsMinute15PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport

        ydk::YList sts_minute15_path_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport : public ydk::Entity
{
    public:
        StsMinute15PathReport();
        ~StsMinute15PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_report; //type: StsReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds : public ydk::Entity
{
    public:
        StsMinute15PathThresholds();
        ~StsMinute15PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold

        ydk::YList sts_minute15_path_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold : public ydk::Entity
{
    public:
        StsMinute15PathThreshold();
        ~StsMinute15PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_threshold; //type: StsThreshold
        ydk::YLeaf path_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24 : public ydk::Entity
{
    public:
        Hour24();
        ~Hour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn
        class Hour24Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics
        class Hour24pcs; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs
        class Hour24fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec
        class Hour24secyif; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif
        class Hour24secyrx; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx
        class Hour24secytx; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn> hour24otn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics> hour24_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs> hour24pcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec> hour24fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif> hour24secyif;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx> hour24secyrx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx> hour24secytx;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn : public ydk::Entity
{
    public:
        Hour24otn();
        ~Hour24otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds
        class Hour24otnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds> hour24otn_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports> hour24otn_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds : public ydk::Entity
{
    public:
        Hour24otnThresholds();
        ~Hour24otnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold

        ydk::YList hour24otn_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold : public ydk::Entity
{
    public:
        Hour24otnThreshold();
        ~Hour24otnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_threshold; //type: OtnThreshold
        ydk::YLeaf otn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports : public ydk::Entity
{
    public:
        Hour24otnReports();
        ~Hour24otnReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport

        ydk::YList hour24otn_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport : public ydk::Entity
{
    public:
        Hour24otnReport();
        ~Hour24otnReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_report; //type: OtnReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics : public ydk::Entity
{
    public:
        Hour24Optics();
        ~Hour24Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds
        class Hour24OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds> hour24_optics_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports> hour24_optics_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds : public ydk::Entity
{
    public:
        Hour24OpticsThresholds();
        ~Hour24OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold

        ydk::YList hour24_optics_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold : public ydk::Entity
{
    public:
        Hour24OpticsThreshold();
        ~Hour24OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_threshold; //type: OpticsThreshold
        ydk::YLeaf optics_threshold_value; //type: int32
        ydk::YLeaf dbm; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports : public ydk::Entity
{
    public:
        Hour24OpticsReports();
        ~Hour24OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport

        ydk::YList hour24_optics_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport : public ydk::Entity
{
    public:
        Hour24OpticsReport();
        ~Hour24OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_report; //type: OpticsReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs : public ydk::Entity
{
    public:
        Hour24pcs();
        ~Hour24pcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24pcsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds
        class Hour24pcsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds> hour24pcs_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports> hour24pcs_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds : public ydk::Entity
{
    public:
        Hour24pcsThresholds();
        ~Hour24pcsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24pcsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold

        ydk::YList hour24pcs_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold : public ydk::Entity
{
    public:
        Hour24pcsThreshold();
        ~Hour24pcsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcs_threshold; //type: PcsThreshold
        ydk::YLeaf pcs_threshold_value; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports : public ydk::Entity
{
    public:
        Hour24pcsReports();
        ~Hour24pcsReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24pcsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport

        ydk::YList hour24pcs_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_2_ */

