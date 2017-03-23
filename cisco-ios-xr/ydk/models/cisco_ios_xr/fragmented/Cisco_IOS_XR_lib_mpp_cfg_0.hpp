#ifndef _CISCO_IOS_XR_LIB_MPP_CFG_0_
#define _CISCO_IOS_XR_LIB_MPP_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_lib_mpp_cfg {

class ControlPlane : public Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class ManagementPlaneProtection; //type: ControlPlane::ManagementPlaneProtection

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection> management_plane_protection;


}; // ControlPlane


class ControlPlane::ManagementPlaneProtection : public Entity
{
    public:
        ManagementPlaneProtection();
        ~ManagementPlaneProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Outband; //type: ControlPlane::ManagementPlaneProtection::Outband
        class Inband; //type: ControlPlane::ManagementPlaneProtection::Inband

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband> inband;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband> outband;


}; // ControlPlane::ManagementPlaneProtection


class ControlPlane::ManagementPlaneProtection::Outband : public Entity
{
    public:
        Outband();
        ~Outband();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf outband_vrf; //type: string

        class InterfaceSelection; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection> interface_selection;


}; // ControlPlane::ManagementPlaneProtection::Outband


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection : public Entity
{
    public:
        InterfaceSelection();
        ~InterfaceSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces
        class AllInterfaces; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces> all_interfaces;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces> interfaces;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface> > interface;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols> all_protocols;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol> http_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol> netconf_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol> snmp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol> ssh_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol> telnet_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol> tftp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml> xr_xml;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol : public Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol : public Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol : public Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml : public Entity
{
    public:
        XrXml();
        ~XrXml();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol : public Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol : public Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol : public Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols : public Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces : public Entity
{
    public:
        AllInterfaces();
        ~AllInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols> all_protocols;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol> http_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol> netconf_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol> snmp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol> ssh_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol> telnet_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol> tftp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml> xr_xml;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol : public Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol : public Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol : public Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml : public Entity
{
    public:
        XrXml();
        ~XrXml();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes


}
}

#endif /* _CISCO_IOS_XR_LIB_MPP_CFG_0_ */

