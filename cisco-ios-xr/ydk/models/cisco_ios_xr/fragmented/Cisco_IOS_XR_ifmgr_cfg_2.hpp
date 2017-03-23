#ifndef _CISCO_IOS_XR_IFMGR_CFG_2_
#define _CISCO_IOS_XR_IFMGR_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts : public Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort> > remote_port;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_type; //type: string
        YLeaf slot; //type: uint32
        YLeaf sub_slot; //type: uint32
        YLeaf port_range; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures : public Entity
{
    public:
        EthernetFeatures();
        ~EthernetFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Cfm; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm> cfm;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf continuity_check_interval; //type: CfmCcmIntervalEnum
        YLeaf level; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork : public Entity
{
    public:
        NvSatelliteFabricNetwork();
        ~NvSatelliteFabricNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Satellites; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites
        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites> satellites;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites : public Entity
{
    public:
        Satellites();
        ~Satellites();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Satellite; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite
        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos> qos;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite> > satellite;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite : public Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf satellite_id; //type: uint32
        YLeaf enable; //type: empty

        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts> remote_ports;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts : public Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort> > remote_port;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort : public Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_type; //type: string
        YLeaf slot; //type: uint32
        YLeaf sub_slot; //type: uint32
        YLeaf port_range; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf service_policy_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32
        YLeaf minimum_preferred_links; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions : public Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpanMonitorSession; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession : public Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_class; //type: SpanSessionClassEnum
        YLeaf mirror_first; //type: uint32
        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
        YLeaf acl; //type: empty

        class Attachment; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment : public Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_name; //type: string
        YLeaf direction; //type: SpanTrafficDirectionEnum
        YLeaf port_level_enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp : public Entity
{
    public:
        CiscoIosXrPppMaCfg_Ppp();
        ~CiscoIosXrPppMaCfg_Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network : public Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf forwarding_enable; //type: empty
        YLeaf icmp_mask_reply; //type: empty
        YLeaf tcp_mss_adjust_enable; //type: empty
        YLeaf ttl_propagate_disable; //type: empty
        YLeaf point_to_point; //type: empty
        YLeaf mtu; //type: uint32

        class BgpPa; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa
        class Verify; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify
        class Bgp; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp
        class Addresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses
        class HelperAddresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses> addresses;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa> bgp_pa;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses> helper_addresses;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify> verify;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa : public Entity
{
    public:
        BgpPa();
        ~BgpPa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input
        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input> input;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output> output;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_accounting; //type: boolean
        YLeaf destination_accounting; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_accounting; //type: boolean
        YLeaf destination_accounting; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reachable; //type: Ipv4ReachableEnum
        YLeaf self_ping; //type: Ipv4SelfPingEnum
        YLeaf default_ping; //type: Ipv4DefaultPingEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Qppb; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb
        class FlowTag; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag> flow_tag;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb> qppb;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb : public Entity
{
    public:
        Qppb();
        ~Qppb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input> input;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: Ipv4InterfaceQppbEnum
        YLeaf destination; //type: Ipv4InterfaceQppbEnum



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag : public Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FlowTagInput; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput> flow_tag_input;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput : public Entity
{
    public:
        FlowTagInput();
        ~FlowTagInput();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source; //type: boolean
        YLeaf destination; //type: boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses : public Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unnumbered; //type: string
        YLeaf dhcp; //type: empty

        class Secondaries; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries
        class Primary; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary> primary; // presence node
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries> secondaries;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries : public Entity
{
    public:
        Secondaries();
        ~Secondaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Secondary; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary> > secondary;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf netmask; //type: string
        YLeaf route_tag; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HelperAddress; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress> > helper_address;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf vrf_name; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress


class InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding : public Entity
{
    public:
        Ipv4NetworkForwarding();
        ~Ipv4NetworkForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf directed_broadcast; //type: empty
        YLeaf unreachables; //type: empty
        YLeaf redirects; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement : public Entity
{
    public:
        PerformanceManagement();
        ~PerformanceManagement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24
        class Minute15Gfp; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp
        class SonetMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15
        class Hour24Gfp; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp
        class EthernetHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24
        class Minute15OtnTcms; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms
        class OcHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24
        class EthernetMinute15; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15
        class HoVcHour24; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24
        class Second30; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30
        class Hour24OtnTcms; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms
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

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24> ethernet_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15> ethernet_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30> ethernet_second30;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24> ho_vc_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15> ho_vc_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24> hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp> hour24_gfp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path> hour24_path;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms> hour24otn_tcms;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15> minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp> minute15_gfp;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path> minute15_path;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms> minute15otn_tcms;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24> oc_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15> oc_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30> second30;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24> sonet_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15> sonet_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24> stm_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15> stm_minute15;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24> sts_hour24;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15> sts_minute15;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24 : public Entity
{
    public:
        StmHour24();
        ~StmHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24Stm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm> stm_hour24_stm;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm : public Entity
{
    public:
        StmHour24Stm();
        ~StmHour24Stm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports
        class StmHour24StmThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports> stm_hour24_stm_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds> stm_hour24_stm_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports : public Entity
{
    public:
        StmHour24StmReports();
        ~StmHour24StmReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport> > stm_hour24_stm_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport : public Entity
{
    public:
        StmHour24StmReport();
        ~StmHour24StmReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stm_report; //type: StmReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds : public Entity
{
    public:
        StmHour24StmThresholds();
        ~StmHour24StmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold> > stm_hour24_stm_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold : public Entity
{
    public:
        StmHour24StmThreshold();
        ~StmHour24StmThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf stm_threshold; //type: StmThresholdEnum
        YLeaf stm_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp : public Entity
{
    public:
        Minute15Gfp();
        ~Minute15Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15Gfp_; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_> minute15_gfp;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_ : public Entity
{
    public:
        Minute15Gfp_();
        ~Minute15Gfp_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15GfpReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports
        class Minute15GfpThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports> minute15_gfp_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds> minute15_gfp_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports : public Entity
{
    public:
        Minute15GfpReports();
        ~Minute15GfpReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15GfpReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport> > minute15_gfp_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport : public Entity
{
    public:
        Minute15GfpReport();
        ~Minute15GfpReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_report; //type: GfpReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds : public Entity
{
    public:
        Minute15GfpThresholds();
        ~Minute15GfpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15GfpThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold> > minute15_gfp_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold : public Entity
{
    public:
        Minute15GfpThreshold();
        ~Minute15GfpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_threshold; //type: GfpThresholdEnum
        YLeaf gfp_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15 : public Entity
{
    public:
        SonetMinute15();
        ~SonetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path
        class SonetMinute15Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn> sonet_minute15_ocn;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path> sonet_minute15_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path : public Entity
{
    public:
        SonetMinute15Path();
        ~SonetMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports
        class SonetMinute15PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports> sonet_minute15_path_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds> sonet_minute15_path_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports : public Entity
{
    public:
        SonetMinute15PathReports();
        ~SonetMinute15PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport> > sonet_minute15_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport : public Entity
{
    public:
        SonetMinute15PathReport();
        ~SonetMinute15PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_report; //type: PathReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds : public Entity
{
    public:
        SonetMinute15PathThresholds();
        ~SonetMinute15PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold> > sonet_minute15_path_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold : public Entity
{
    public:
        SonetMinute15PathThreshold();
        ~SonetMinute15PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_threshold; //type: PathThresholdEnum
        YLeaf path_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn : public Entity
{
    public:
        SonetMinute15Ocn();
        ~SonetMinute15Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports
        class SonetMinute15OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports> sonet_minute15_ocn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds> sonet_minute15_ocn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports : public Entity
{
    public:
        SonetMinute15OcnReports();
        ~SonetMinute15OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport> > sonet_minute15_ocn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport : public Entity
{
    public:
        SonetMinute15OcnReport();
        ~SonetMinute15OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_report; //type: OcnReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds : public Entity
{
    public:
        SonetMinute15OcnThresholds();
        ~SonetMinute15OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SonetMinute15OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold> > sonet_minute15_ocn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold : public Entity
{
    public:
        SonetMinute15OcnThreshold();
        ~SonetMinute15OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_threshold; //type: OcnThresholdEnum
        YLeaf ocn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp : public Entity
{
    public:
        Hour24Gfp();
        ~Hour24Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24Gfp_; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_> hour24_gfp;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_ : public Entity
{
    public:
        Hour24Gfp_();
        ~Hour24Gfp_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24GfpReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports
        class Hour24GfpThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports> hour24_gfp_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds> hour24_gfp_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports : public Entity
{
    public:
        Hour24GfpReports();
        ~Hour24GfpReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24GfpReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport> > hour24_gfp_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport : public Entity
{
    public:
        Hour24GfpReport();
        ~Hour24GfpReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_report; //type: GfpReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds : public Entity
{
    public:
        Hour24GfpThresholds();
        ~Hour24GfpThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24GfpThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold> > hour24_gfp_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold : public Entity
{
    public:
        Hour24GfpThreshold();
        ~Hour24GfpThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gfp_threshold; //type: GfpThresholdEnum
        YLeaf gfp_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24 : public Entity
{
    public:
        EthernetHour24();
        ~EthernetHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether> hour24_ether;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether : public Entity
{
    public:
        Hour24Ether();
        ~Hour24Ether();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds
        class Hour24EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports> hour24_ether_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds> hour24_ether_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds : public Entity
{
    public:
        Hour24EtherThresholds();
        ~Hour24EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold> > hour24_ether_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold : public Entity
{
    public:
        Hour24EtherThreshold();
        ~Hour24EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_threshold; //type: EtherThresholdEnum
        YLeaf ether_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports : public Entity
{
    public:
        Hour24EtherReports();
        ~Hour24EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport> > hour24_ether_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport : public Entity
{
    public:
        Hour24EtherReport();
        ~Hour24EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_report; //type: EtherReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms : public Entity
{
    public:
        Minute15OtnTcms();
        ~Minute15OtnTcms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnTcm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm> > minute15otn_tcm;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm : public Entity
{
    public:
        Minute15OtnTcm();
        ~Minute15OtnTcm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcm_number; //type: int32

        class Min15OtnTcmThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes
        class Minute15OtnTcmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes> min15_otn_tcm_threshes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports> minute15otn_tcm_reports;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes : public Entity
{
    public:
        Min15OtnTcmThreshes();
        ~Min15OtnTcmThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Min15OtnTcmThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh> > min15_otn_tcm_thresh;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh : public Entity
{
    public:
        Min15OtnTcmThresh();
        ~Min15OtnTcmThresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnTcmThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports : public Entity
{
    public:
        Minute15OtnTcmReports();
        ~Minute15OtnTcmReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15OtnTcmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport> > minute15otn_tcm_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport : public Entity
{
    public:
        Minute15OtnTcmReport();
        ~Minute15OtnTcmReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnTcmReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24 : public Entity
{
    public:
        OcHour24();
        ~OcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24Ocn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn> oc_hour24_ocn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn : public Entity
{
    public:
        OcHour24Ocn();
        ~OcHour24Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports
        class OcHour24OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports> oc_hour24_ocn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds> oc_hour24_ocn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports : public Entity
{
    public:
        OcHour24OcnReports();
        ~OcHour24OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport> > oc_hour24_ocn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport : public Entity
{
    public:
        OcHour24OcnReport();
        ~OcHour24OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_report; //type: OcnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds : public Entity
{
    public:
        OcHour24OcnThresholds();
        ~OcHour24OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold> > oc_hour24_ocn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold : public Entity
{
    public:
        OcHour24OcnThreshold();
        ~OcHour24OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ocn_threshold; //type: OcnThresholdEnum
        YLeaf ocn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15 : public Entity
{
    public:
        EthernetMinute15();
        ~EthernetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether> minute15_ether;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether : public Entity
{
    public:
        Minute15Ether();
        ~Minute15Ether();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds
        class Minute15EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports> minute15_ether_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds> minute15_ether_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds : public Entity
{
    public:
        Minute15EtherThresholds();
        ~Minute15EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold> > minute15_ether_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold : public Entity
{
    public:
        Minute15EtherThreshold();
        ~Minute15EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_threshold; //type: EtherThresholdEnum
        YLeaf ether_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports : public Entity
{
    public:
        Minute15EtherReports();
        ~Minute15EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Minute15EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport> > minute15_ether_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport : public Entity
{
    public:
        Minute15EtherReport();
        ~Minute15EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ether_report; //type: EtherReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24 : public Entity
{
    public:
        HoVcHour24();
        ~HoVcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVc; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc> ho_vc_hour24ho_vc;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc : public Entity
{
    public:
        HoVcHour24HoVc();
        ~HoVcHour24HoVc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVcReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports
        class HoVcHour24HoVcThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports> ho_vc_hour24ho_vc_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds> ho_vc_hour24ho_vc_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports : public Entity
{
    public:
        HoVcHour24HoVcReports();
        ~HoVcHour24HoVcReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVcReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport> > ho_vc_hour24ho_vc_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport : public Entity
{
    public:
        HoVcHour24HoVcReport();
        ~HoVcHour24HoVcReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ho_vc_report; //type: HoVcReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds : public Entity
{
    public:
        HoVcHour24HoVcThresholds();
        ~HoVcHour24HoVcThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcHour24HoVcThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold> > ho_vc_hour24ho_vc_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold : public Entity
{
    public:
        HoVcHour24HoVcThreshold();
        ~HoVcHour24HoVcThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ho_vc_threshold; //type: HoVcThresholdEnum
        YLeaf ho_vc_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30 : public Entity
{
    public:
        Second30();
        ~Second30();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30Fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec
        class Second30Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics
        class Second30Otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics> second30_optics;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec> second30fec;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn> second30otn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec : public Entity
{
    public:
        Second30Fec();
        ~Second30Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30FecThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds
        class Second30FecReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports> second30fec_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds> second30fec_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds : public Entity
{
    public:
        Second30FecThresholds();
        ~Second30FecThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30FecThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold> > second30fec_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold : public Entity
{
    public:
        Second30FecThreshold();
        ~Second30FecThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_threshold; //type: FecThresholdEnum
        YLeaf fec_threshold_value; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports : public Entity
{
    public:
        Second30FecReports();
        ~Second30FecReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30FecReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport> > second30fec_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport : public Entity
{
    public:
        Second30FecReport();
        ~Second30FecReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_report; //type: FecReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics : public Entity
{
    public:
        Second30Optics();
        ~Second30Optics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports
        class Second30OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports> second30_optics_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds> second30_optics_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports : public Entity
{
    public:
        Second30OpticsReports();
        ~Second30OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport> > second30_optics_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport : public Entity
{
    public:
        Second30OpticsReport();
        ~Second30OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_report; //type: OpticsReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds : public Entity
{
    public:
        Second30OpticsThresholds();
        ~Second30OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold> > second30_optics_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold : public Entity
{
    public:
        Second30OpticsThreshold();
        ~Second30OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_threshold; //type: OpticsThresholdEnum
        YLeaf optics_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn : public Entity
{
    public:
        Second30Otn();
        ~Second30Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OtnThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes
        class Second30OtnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes> second30_otn_threshes;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports> second30otn_reports;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes : public Entity
{
    public:
        Second30OtnThreshes();
        ~Second30OtnThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OtnThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh> > second30_otn_thresh;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh : public Entity
{
    public:
        Second30OtnThresh();
        ~Second30OtnThresh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports : public Entity
{
    public:
        Second30OtnReports();
        ~Second30OtnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30OtnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport> > second30otn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport : public Entity
{
    public:
        Second30OtnReport();
        ~Second30OtnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms : public Entity
{
    public:
        Hour24OtnTcms();
        ~Hour24OtnTcms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnTcm; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm> > hour24otn_tcm;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm : public Entity
{
    public:
        Hour24OtnTcm();
        ~Hour24OtnTcm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tcm_number; //type: int32

        class Hour24OtnTcmThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds
        class Hour24OtnTcmReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports> hour24otn_tcm_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds> hour24otn_tcm_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds : public Entity
{
    public:
        Hour24OtnTcmThresholds();
        ~Hour24OtnTcmThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnTcmThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold> > hour24otn_tcm_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold : public Entity
{
    public:
        Hour24OtnTcmThreshold();
        ~Hour24OtnTcmThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnTcmThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports : public Entity
{
    public:
        Hour24OtnTcmReports();
        ~Hour24OtnTcmReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnTcmReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport> > hour24otn_tcm_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport : public Entity
{
    public:
        Hour24OtnTcmReport();
        ~Hour24OtnTcmReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnTcmReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15 : public Entity
{
    public:
        StsMinute15();
        ~StsMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15Path; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path> sts_minute15_path;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path : public Entity
{
    public:
        StsMinute15Path();
        ~StsMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15PathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports
        class StsMinute15PathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports> sts_minute15_path_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds> sts_minute15_path_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports : public Entity
{
    public:
        StsMinute15PathReports();
        ~StsMinute15PathReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15PathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport> > sts_minute15_path_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport : public Entity
{
    public:
        StsMinute15PathReport();
        ~StsMinute15PathReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_report; //type: StsReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds : public Entity
{
    public:
        StsMinute15PathThresholds();
        ~StsMinute15PathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StsMinute15PathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold> > sts_minute15_path_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold : public Entity
{
    public:
        StsMinute15PathThreshold();
        ~StsMinute15PathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_threshold; //type: StsThresholdEnum
        YLeaf path_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24 : public Entity
{
    public:
        Hour24();
        ~Hour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24Otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn
        class Hour24Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics
        class Hour24Fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics> hour24_optics;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec> hour24fec;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn> hour24otn;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn : public Entity
{
    public:
        Hour24Otn();
        ~Hour24Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds
        class Hour24OtnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports> hour24otn_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds> hour24otn_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds : public Entity
{
    public:
        Hour24OtnThresholds();
        ~Hour24OtnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold> > hour24otn_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold : public Entity
{
    public:
        Hour24OtnThreshold();
        ~Hour24OtnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_threshold; //type: OtnThresholdEnum
        YLeaf otn_threshold_value; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports : public Entity
{
    public:
        Hour24OtnReports();
        ~Hour24OtnReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OtnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport> > hour24otn_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport : public Entity
{
    public:
        Hour24OtnReport();
        ~Hour24OtnReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf otn_report; //type: OtnReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics : public Entity
{
    public:
        Hour24Optics();
        ~Hour24Optics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds
        class Hour24OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports> hour24_optics_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds> hour24_optics_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds : public Entity
{
    public:
        Hour24OpticsThresholds();
        ~Hour24OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold> > hour24_optics_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold : public Entity
{
    public:
        Hour24OpticsThreshold();
        ~Hour24OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_threshold; //type: OpticsThresholdEnum
        YLeaf optics_threshold_value; //type: int32
        YLeaf dbm; //type: int32



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports : public Entity
{
    public:
        Hour24OpticsReports();
        ~Hour24OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport> > hour24_optics_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport : public Entity
{
    public:
        Hour24OpticsReport();
        ~Hour24OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf optics_report; //type: OpticsReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec : public Entity
{
    public:
        Hour24Fec();
        ~Hour24Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24FecThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds
        class Hour24FecReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports> hour24fec_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds> hour24fec_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds : public Entity
{
    public:
        Hour24FecThresholds();
        ~Hour24FecThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24FecThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold> > hour24fec_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold : public Entity
{
    public:
        Hour24FecThreshold();
        ~Hour24FecThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_threshold; //type: FecThresholdEnum
        YLeaf fec_threshold_value; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports : public Entity
{
    public:
        Hour24FecReports();
        ~Hour24FecReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Hour24FecReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport> > hour24fec_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport : public Entity
{
    public:
        Hour24FecReport();
        ~Hour24FecReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fec_report; //type: FecReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15 : public Entity
{
    public:
        HoVcMinute15();
        ~HoVcMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVc; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc> ho_vc_minute15ho_vc;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc : public Entity
{
    public:
        HoVcMinute15HoVc();
        ~HoVcMinute15HoVc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVcReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports
        class HoVcMinute15HoVcThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports> ho_vc_minute15ho_vc_reports;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds> ho_vc_minute15ho_vc_thresholds;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports : public Entity
{
    public:
        HoVcMinute15HoVcReports();
        ~HoVcMinute15HoVcReports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVcReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport> > ho_vc_minute15ho_vc_report;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport : public Entity
{
    public:
        HoVcMinute15HoVcReport();
        ~HoVcMinute15HoVcReport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ho_vc_report; //type: HoVcReportEnum
        YLeaf enable; //type: ReportEnum



}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds : public Entity
{
    public:
        HoVcMinute15HoVcThresholds();
        ~HoVcMinute15HoVcThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HoVcMinute15HoVcThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold> > ho_vc_minute15ho_vc_threshold;


}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_2_ */

