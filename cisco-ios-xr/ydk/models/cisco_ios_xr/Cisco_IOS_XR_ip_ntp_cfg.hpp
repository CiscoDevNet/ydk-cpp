#ifndef _CISCO_IOS_XR_IP_NTP_CFG_
#define _CISCO_IOS_XR_IP_NTP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_ntp_cfg {

class Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

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

        ydk::YLeaf max_associations; //type: uint32
        ydk::YLeaf master; //type: uint32
        ydk::YLeaf broadcast_delay; //type: uint32
        ydk::YLeaf log_internal_sync; //type: empty
        ydk::YLeaf update_calendar; //type: empty
        class AdminTypes; //type: Ntp::AdminTypes
        class PeerVrfs; //type: Ntp::PeerVrfs
        class DscpIpv4; //type: Ntp::DscpIpv4
        class DscpIpv6; //type: Ntp::DscpIpv6
        class Sources; //type: Ntp::Sources
        class Drift; //type: Ntp::Drift
        class Authentication; //type: Ntp::Authentication
        class Passive; //type: Ntp::Passive
        class InterfaceTables; //type: Ntp::InterfaceTables
        class AccessGroupTables; //type: Ntp::AccessGroupTables

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::AdminTypes> admin_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs> peer_vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::DscpIpv4> dscp_ipv4; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::DscpIpv6> dscp_ipv6; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::Sources> sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::Drift> drift;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::Passive> passive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables> interface_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::AccessGroupTables> access_group_tables;
        
}; // Ntp


class Ntp::AdminTypes : public ydk::Entity
{
    public:
        AdminTypes();
        ~AdminTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AdminType; //type: Ntp::AdminTypes::AdminType

        ydk::YList admin_type;
        
}; // Ntp::AdminTypes


class Ntp::AdminTypes::AdminType : public ydk::Entity
{
    public:
        AdminType();
        ~AdminType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf peer_type; //type: NtpPeer
        ydk::YLeaf ntp_version; //type: uint32
        ydk::YLeaf authentication_key; //type: uint32
        ydk::YLeaf min_poll; //type: uint32
        ydk::YLeaf max_poll; //type: uint32
        ydk::YLeaf preferred_peer; //type: empty
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty

}; // Ntp::AdminTypes::AdminType


class Ntp::PeerVrfs : public ydk::Entity
{
    public:
        PeerVrfs();
        ~PeerVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PeerVrf; //type: Ntp::PeerVrfs::PeerVrf

        ydk::YList peer_vrf;
        
}; // Ntp::PeerVrfs


class Ntp::PeerVrfs::PeerVrf : public ydk::Entity
{
    public:
        PeerVrf();
        ~PeerVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class PeerIpv4s; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv4s
        class PeerIpv6s; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv6s

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv4s> peer_ipv4s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv6s> peer_ipv6s;
        
}; // Ntp::PeerVrfs::PeerVrf


class Ntp::PeerVrfs::PeerVrf::PeerIpv4s : public ydk::Entity
{
    public:
        PeerIpv4s();
        ~PeerIpv4s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerIpv4; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4

        ydk::YList peer_ipv4;
        
}; // Ntp::PeerVrfs::PeerVrf::PeerIpv4s


class Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4 : public ydk::Entity
{
    public:
        PeerIpv4();
        ~PeerIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_ipv4; //type: string
        class PeerTypeIpv4; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4

        ydk::YList peer_type_ipv4;
        
}; // Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4


class Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4 : public ydk::Entity
{
    public:
        PeerTypeIpv4();
        ~PeerTypeIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_type; //type: NtpPeer
        ydk::YLeaf ntp_version; //type: uint32
        ydk::YLeaf authentication_key; //type: uint32
        ydk::YLeaf min_poll; //type: uint32
        ydk::YLeaf max_poll; //type: uint32
        ydk::YLeaf preferred_peer; //type: empty
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty

}; // Ntp::PeerVrfs::PeerVrf::PeerIpv4s::PeerIpv4::PeerTypeIpv4


class Ntp::PeerVrfs::PeerVrf::PeerIpv6s : public ydk::Entity
{
    public:
        PeerIpv6s();
        ~PeerIpv6s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerIpv6; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6

        ydk::YList peer_ipv6;
        
}; // Ntp::PeerVrfs::PeerVrf::PeerIpv6s


class Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6 : public ydk::Entity
{
    public:
        PeerIpv6();
        ~PeerIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_ipv6; //type: string
        class PeerTypeIpv6; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6

        ydk::YList peer_type_ipv6;
        
}; // Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6


class Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6 : public ydk::Entity
{
    public:
        PeerTypeIpv6();
        ~PeerTypeIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_type; //type: NtpPeer
        ydk::YLeaf ntp_version; //type: uint32
        ydk::YLeaf authentication_key; //type: uint32
        ydk::YLeaf min_poll; //type: uint32
        ydk::YLeaf max_poll; //type: uint32
        ydk::YLeaf preferred_peer; //type: empty
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf burst; //type: empty
        ydk::YLeaf iburst; //type: empty
        ydk::YLeaf address_ipv6; //type: string

}; // Ntp::PeerVrfs::PeerVrf::PeerIpv6s::PeerIpv6::PeerTypeIpv6


class Ntp::DscpIpv4 : public ydk::Entity
{
    public:
        DscpIpv4();
        ~DscpIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mode; //type: Ntpdscp
        ydk::YLeaf dscp_or_precedence_value; //type: uint32

}; // Ntp::DscpIpv4


class Ntp::DscpIpv6 : public ydk::Entity
{
    public:
        DscpIpv6();
        ~DscpIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mode; //type: Ntpdscp
        ydk::YLeaf dscp_or_precedence_value; //type: uint32

}; // Ntp::DscpIpv6


class Ntp::Sources : public ydk::Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Source; //type: Ntp::Sources::Source

        ydk::YList source;
        
}; // Ntp::Sources


class Ntp::Sources::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_interface; //type: string

}; // Ntp::Sources::Source


class Ntp::Drift : public ydk::Entity
{
    public:
        Drift();
        ~Drift();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf aging_time; //type: uint32
        class File; //type: Ntp::Drift::File

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::Drift::File> file;
        
}; // Ntp::Drift


class Ntp::Drift::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf filename; //type: string

}; // Ntp::Drift::File


class Ntp::Authentication : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty
        class Keys; //type: Ntp::Authentication::Keys
        class TrustedKeys; //type: Ntp::Authentication::TrustedKeys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication::Keys> keys;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication::TrustedKeys> trusted_keys;
        
}; // Ntp::Authentication


class Ntp::Authentication::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Key; //type: Ntp::Authentication::Keys::Key

        ydk::YList key;
        
}; // Ntp::Authentication::Keys


class Ntp::Authentication::Keys::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf key_number; //type: uint32
        ydk::YLeaf authentication_key; //type: string

}; // Ntp::Authentication::Keys::Key


class Ntp::Authentication::TrustedKeys : public ydk::Entity
{
    public:
        TrustedKeys();
        ~TrustedKeys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TrustedKey; //type: Ntp::Authentication::TrustedKeys::TrustedKey

        ydk::YList trusted_key;
        
}; // Ntp::Authentication::TrustedKeys


class Ntp::Authentication::TrustedKeys::TrustedKey : public ydk::Entity
{
    public:
        TrustedKey();
        ~TrustedKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf key_number; //type: uint32

}; // Ntp::Authentication::TrustedKeys::TrustedKey


class Ntp::Passive : public ydk::Entity
{
    public:
        Passive();
        ~Passive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty

}; // Ntp::Passive


class Ntp::InterfaceTables : public ydk::Entity
{
    public:
        InterfaceTables();
        ~InterfaceTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InterfaceTable; //type: Ntp::InterfaceTables::InterfaceTable

        ydk::YList interface_table;
        
}; // Ntp::InterfaceTables


class Ntp::InterfaceTables::InterfaceTable : public ydk::Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class Interface; //type: Ntp::InterfaceTables::InterfaceTable::Interface

        ydk::YList interface;
        
}; // Ntp::InterfaceTables::InterfaceTable


class Ntp::InterfaceTables::InterfaceTable::Interface : public ydk::Entity
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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf disable; //type: empty
        class InterfaceMulticast; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast
        class InterfaceBroadcast; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast> interface_multicast;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast> interface_broadcast;
        
}; // Ntp::InterfaceTables::InterfaceTable::Interface


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast : public ydk::Entity
{
    public:
        InterfaceMulticast();
        ~InterfaceMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastClients; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients
        class MulticastServers; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients> multicast_clients;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers> multicast_servers;
        
}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients : public ydk::Entity
{
    public:
        MulticastClients();
        ~MulticastClients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastClient; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient

        ydk::YList multicast_client;
        
}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient : public ydk::Entity
{
    public:
        MulticastClient();
        ~MulticastClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string

}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers : public ydk::Entity
{
    public:
        MulticastServers();
        ~MulticastServers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MulticastServer; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer

        ydk::YList multicast_server;
        
}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer : public ydk::Entity
{
    public:
        MulticastServer();
        ~MulticastServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf authentication_key; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf ttl; //type: uint32

}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast : public ydk::Entity
{
    public:
        InterfaceBroadcast();
        ~InterfaceBroadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast_client; //type: empty
        class BroadcastServers; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers> broadcast_servers;
        
}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers : public ydk::Entity
{
    public:
        BroadcastServers();
        ~BroadcastServers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BroadcastServer; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer

        ydk::YList broadcast_server;
        
}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer : public ydk::Entity
{
    public:
        BroadcastServer();
        ~BroadcastServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast_type; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf authentication_key; //type: uint32
        ydk::YLeaf ntp_version; //type: uint32

}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::BroadcastServers::BroadcastServer


class Ntp::AccessGroupTables : public ydk::Entity
{
    public:
        AccessGroupTables();
        ~AccessGroupTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AccessGroupTable; //type: Ntp::AccessGroupTables::AccessGroupTable

        ydk::YList access_group_table;
        
}; // Ntp::AccessGroupTables


class Ntp::AccessGroupTables::AccessGroupTable : public ydk::Entity
{
    public:
        AccessGroupTable();
        ~AccessGroupTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class AccessGroupAfTable; //type: Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable

        ydk::YList access_group_af_table;
        
}; // Ntp::AccessGroupTables::AccessGroupTable


class Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable : public ydk::Entity
{
    public:
        AccessGroupAfTable();
        ~AccessGroupAfTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: NtpAccessAf
        class AccessGroup; //type: Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup

        ydk::YList access_group;
        
}; // Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable


class Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_group_type; //type: NtpAccess
        ydk::YLeaf access_list_name; //type: string

}; // Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup

class NtpAccessAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            return -1;
        }
};

class NtpPeer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer;
        static const ydk::Enum::YLeaf server;

        static int get_enum_value(const std::string & name) {
            if (name == "peer") return 0;
            if (name == "server") return 1;
            return -1;
        }
};

class Ntpdscp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ntp_precedence;
        static const ydk::Enum::YLeaf ntpdscp;

        static int get_enum_value(const std::string & name) {
            if (name == "ntp-precedence") return 0;
            if (name == "ntpdscp") return 1;
            return -1;
        }
};

class NtpAccess : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peer;
        static const ydk::Enum::YLeaf serve;
        static const ydk::Enum::YLeaf serve_only;
        static const ydk::Enum::YLeaf query_only;

        static int get_enum_value(const std::string & name) {
            if (name == "peer") return 0;
            if (name == "serve") return 1;
            if (name == "serve-only") return 2;
            if (name == "query-only") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IP_NTP_CFG_ */

