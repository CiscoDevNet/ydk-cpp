#ifndef _CISCO_IOS_XR_LIB_MPP_CFG_
#define _CISCO_IOS_XR_LIB_MPP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_mpp_cfg {

class ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

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

        class ManagementPlaneProtection; //type: ControlPlane::ManagementPlaneProtection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection> management_plane_protection;
        
}; // ControlPlane


class ControlPlane::ManagementPlaneProtection : public ydk::Entity
{
    public:
        ManagementPlaneProtection();
        ~ManagementPlaneProtection();

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

        class Outband; //type: ControlPlane::ManagementPlaneProtection::Outband
        class Inband; //type: ControlPlane::ManagementPlaneProtection::Inband

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband> inband;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband> outband;
        
}; // ControlPlane::ManagementPlaneProtection


class ControlPlane::ManagementPlaneProtection::Inband : public ydk::Entity
{
    public:
        Inband();
        ~Inband();

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

        class InterfaceSelection; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection> interface_selection;
        
}; // ControlPlane::ManagementPlaneProtection::Inband


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection : public ydk::Entity
{
    public:
        InterfaceSelection();
        ~InterfaceSelection();

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

        class Interfaces; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces
        class AllInterfaces; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces> all_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces> interfaces;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces : public ydk::Entity
{
    public:
        AllInterfaces();
        ~AllInterfaces();

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

        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols> all_protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol> http_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol> netconf_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol> snmp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol> ssh_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol> telnet_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol> tftp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml> xr_xml;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols : public ydk::Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol : public ydk::Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol : public ydk::Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol : public ydk::Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol : public ydk::Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol : public ydk::Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol : public ydk::Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml : public ydk::Entity
{
    public:
        XrXml();
        ~XrXml();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface> > interface;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols> all_protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol> http_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol> netconf_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol> snmp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol> ssh_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol> telnet_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol> tftp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml> xr_xml;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols : public ydk::Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol : public ydk::Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol : public ydk::Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol : public ydk::Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol : public ydk::Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol : public ydk::Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol : public ydk::Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml : public ydk::Entity
{
    public:
        XrXml();
        ~XrXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband : public ydk::Entity
{
    public:
        Outband();
        ~Outband();

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

        ydk::YLeaf outband_vrf; //type: string
        class InterfaceSelection; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection> interface_selection;
        
}; // ControlPlane::ManagementPlaneProtection::Outband


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection : public ydk::Entity
{
    public:
        InterfaceSelection();
        ~InterfaceSelection();

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

        class Interfaces; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces
        class AllInterfaces; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces> all_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces> interfaces;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces : public ydk::Entity
{
    public:
        AllInterfaces();
        ~AllInterfaces();

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

        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols> all_protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol> http_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol> netconf_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol> snmp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol> ssh_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol> telnet_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol> tftp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml> xr_xml;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols : public ydk::Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol : public ydk::Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol : public ydk::Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol : public ydk::Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol : public ydk::Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol : public ydk::Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol : public ydk::Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml : public ydk::Entity
{
    public:
        XrXml();
        ~XrXml();

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

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

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

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

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

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

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

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

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

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf address; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Interface; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface> > interface;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface_name; //type: string
        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols> all_protocols;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol> http_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol> netconf_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol> snmp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol> ssh_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol> telnet_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol> tftp_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml> xr_xml;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols : public ydk::Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol : public ydk::Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol : public ydk::Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol : public ydk::Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol : public ydk::Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol : public ydk::Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol : public ydk::Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml : public ydk::Entity
{
    public:
        XrXml();
        ~XrXml();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass> peer_class;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass : public ydk::Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_all; //type: empty
        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6> peer_v6;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4 : public ydk::Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6 : public ydk::Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers> peers;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes : public ydk::Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public ydk::Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;
        
}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer


}
}

#endif /* _CISCO_IOS_XR_LIB_MPP_CFG_ */

