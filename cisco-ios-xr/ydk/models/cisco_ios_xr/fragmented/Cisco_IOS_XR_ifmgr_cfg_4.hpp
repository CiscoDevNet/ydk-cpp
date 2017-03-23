#ifndef _CISCO_IOS_XR_IFMGR_CFG_4_
#define _CISCO_IOS_XR_IFMGR_CFG_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp : public Entity
{
    public:
        Ipcp();
        ~Ipcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_route_disable; //type: empty

        class PeerAddress; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress
        class Dns; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns> dns;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress> peer_address;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress : public Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns : public Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DnsAddresses; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses> dns_addresses;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns


class InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses : public Entity
{
    public:
        DnsAddresses();
        ~DnsAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf primary; //type: string
        YLeaf secondary; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses


class InterfaceConfigurations::InterfaceConfiguration::AaaTable : public Entity
{
    public:
        AaaTable();
        ~AaaTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Radius; //type: InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius> radius;


}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable


class InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Attribute; //type: InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute> attribute;


}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius


class InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nas_port_type; //type: NasPortValueEnum



}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute


class InterfaceConfigurations::InterfaceConfiguration::Otu : public Entity
{
    public:
        Otu();
        ~Otu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gcc; //type: empty
        YLeaf sf; //type: uint32
        YLeaf secondary_admin_state; //type: OtnSecAdminStateEnum
        YLeaf sd; //type: uint32
        YLeaf performance_monitoring; //type: OtnPerMonEnum
        YLeaf loopback; //type: OtnLoopbackEnum
        YLeaf fec; //type: OtuForwardErrorCorrectionEnum

        class OtnSendTtitcmos; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos
        class OtnSendTtitcmdapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi
        class OtnExpectedTtisapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi
        class ProactiveProtection; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection
        class NetworkSrlgs; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs
        class OtnSendTti; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti
        class OtnExpectedTtitcmdapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi
        class OtnSendTtisapi; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi
        class OtnExpectedTtitcmos; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos
        class OtnExpectedTti; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs> network_srlgs;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti> otn_expected_tti;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi> otn_expected_ttisapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi> otn_expected_ttitcmdapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos> otn_expected_ttitcmos;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti> otn_send_tti;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi> otn_send_ttisapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi> otn_send_ttitcmdapi;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos> otn_send_ttitcmos;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection> proactive_protection;


}; // InterfaceConfigurations::InterfaceConfiguration::Otu


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos : public Entity
{
    public:
        OtnSendTtitcmos();
        ~OtnSendTtitcmos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeOsEnum
        YLeaf osascii_string; //type: string
        YLeaf oshex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi : public Entity
{
    public:
        OtnSendTtitcmdapi();
        ~OtnSendTtitcmdapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeDapiEnum
        YLeaf dapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi : public Entity
{
    public:
        OtnExpectedTtisapi();
        ~OtnExpectedTtisapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeSapiEnum
        YLeaf sapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection : public Entity
{
    public:
        ProactiveProtection();
        ~ProactiveProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: empty

        class TriggerThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold
        class RevertWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow
        class TriggerWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow
        class RevertThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold> revert_threshold;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow> revert_window;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold> trigger_threshold;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow> trigger_window;


}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold : public Entity
{
    public:
        TriggerThreshold();
        ~TriggerThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf coefficient; //type: uint32
        YLeaf power; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow : public Entity
{
    public:
        RevertWindow();
        ~RevertWindow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow : public Entity
{
    public:
        TriggerWindow();
        ~TriggerWindow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow


class InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold : public Entity
{
    public:
        RevertThreshold();
        ~RevertThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf coefficient; //type: uint32
        YLeaf power; //type: uint32
        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold


class InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs : public Entity
{
    public:
        NetworkSrlgs();
        ~NetworkSrlgs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetworkSrlg; //type: InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg> > network_srlg;


}; // InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs


class InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg : public Entity
{
    public:
        NetworkSrlg();
        ~NetworkSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_id; //type: uint32
        YLeaf srlg1; //type: uint32
        YLeaf srlg2; //type: uint32
        YLeaf srlg3; //type: uint32
        YLeaf srlg4; //type: uint32
        YLeaf srlg5; //type: uint32
        YLeaf srlg6; //type: uint32



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti : public Entity
{
    public:
        OtnSendTti();
        ~OtnSendTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeFullEnum
        YLeaf full_ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi : public Entity
{
    public:
        OtnExpectedTtitcmdapi();
        ~OtnExpectedTtitcmdapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeDapiEnum
        YLeaf dapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi : public Entity
{
    public:
        OtnSendTtisapi();
        ~OtnSendTtisapi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnSendTtiTypeSapiEnum
        YLeaf sapi_ascii_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos : public Entity
{
    public:
        OtnExpectedTtitcmos();
        ~OtnExpectedTtitcmos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeOsEnum
        YLeaf osascii_string; //type: string
        YLeaf oshex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos


class InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti : public Entity
{
    public:
        OtnExpectedTti();
        ~OtnExpectedTti();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf string_type; //type: OtnExpTtiTypeFullEnum
        YLeaf full_ascii_string; //type: string
        YLeaf hex_string; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl : public Entity
{
    public:
        EthernetControl();
        ~EthernetControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transport_mode; //type: EtherCtrlTransportModeEnum
        YLeaf small_frame_padding; //type: empty

        class Transceiver; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver> transceiver;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver : public Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Permit; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit> permit;


}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: PermitPluggableEnum
        YLeaf pid; //type: PermitPluggablePidEnum



}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit


class InterfaceConfigurations::InterfaceConfiguration::Cdp : public Entity
{
    public:
        Cdp();
        ~Cdp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // InterfaceConfigurations::InterfaceConfiguration::Cdp


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter : public Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound
        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound> outbound;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf do_not_use; //type: string
        YLeaf name; //type: string
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter : public Entity
{
    public:
        EsPacketFilter();
        ~EsPacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outbound; //type: string
        YLeaf inbound; //type: string



}; // InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter : public Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound
        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound

        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound> inbound;
        std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound> outbound;


}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound : public Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf do_not_use; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound : public Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf common_acl_name; //type: string
        YLeaf name; //type: string
        YLeaf hardware_count; //type: empty
        YLeaf interface_statistics; //type: empty
        YLeaf compression_level; //type: uint32
        YLeafList acl_name_array; //type: list of  string
        YLeafList is_common_array; //type: list of  boolean



}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies : public Entity
{
    public:
        ServicePolicies();
        ~ServicePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy> > service_policy;


}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy : public Entity
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



}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_4_ */

