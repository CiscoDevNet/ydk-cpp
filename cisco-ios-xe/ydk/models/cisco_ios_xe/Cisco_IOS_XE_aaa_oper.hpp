#ifndef _CISCO_IOS_XE_AAA_OPER_
#define _CISCO_IOS_XE_AAA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_aaa_oper {

class AaaData : public ydk::Entity
{
    public:
        AaaData();
        ~AaaData();

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

        class AaaRadiusStats; //type: AaaData::AaaRadiusStats
        class AaaTacacsStats; //type: AaaData::AaaTacacsStats
        class AaaLdapCounters; //type: AaaData::AaaLdapCounters
        class AaaUsers; //type: AaaData::AaaUsers

        ydk::YList aaa_radius_stats;
        ydk::YList aaa_tacacs_stats;
        ydk::YList aaa_ldap_counters;
        ydk::YList aaa_users;
        
}; // AaaData


class AaaData::AaaRadiusStats : public ydk::Entity
{
    public:
        AaaRadiusStats();
        ~AaaRadiusStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf radius_server_ip; //type: string
        ydk::YLeaf auth_port; //type: uint16
        ydk::YLeaf acct_port; //type: uint16
        ydk::YLeaf authen_retried_access_requests; //type: uint32
        ydk::YLeaf authen_access_accepts; //type: uint32
        ydk::YLeaf authen_access_rejects; //type: uint32
        ydk::YLeaf authen_timeout_access_requests; //type: uint32
        ydk::YLeaf author_retried_access_requests; //type: uint32
        ydk::YLeaf author_access_accepts; //type: uint32
        ydk::YLeaf author_access_rejects; //type: uint32
        ydk::YLeaf author_timeout_access_requests; //type: uint32
        ydk::YLeaf connection_opens; //type: uint32
        ydk::YLeaf connection_closes; //type: uint32
        ydk::YLeaf connection_aborts; //type: uint32
        ydk::YLeaf connection_failures; //type: uint32
        ydk::YLeaf connection_timeouts; //type: uint32
        ydk::YLeaf authen_messages_sent; //type: uint32
        ydk::YLeaf author_messages_sent; //type: uint32
        ydk::YLeaf acct_messages_sent; //type: uint32
        ydk::YLeaf authen_messages_received; //type: uint32
        ydk::YLeaf author_messages_received; //type: uint32
        ydk::YLeaf authen_errors_received; //type: uint32
        ydk::YLeaf author_errors_received; //type: uint32
        ydk::YLeaf acct_errors_received; //type: uint32
        ydk::YLeaf stats_time; //type: string

}; // AaaData::AaaRadiusStats


class AaaData::AaaTacacsStats : public ydk::Entity
{
    public:
        AaaTacacsStats();
        ~AaaTacacsStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf tacacs_server_address; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf connection_opens; //type: uint32
        ydk::YLeaf connection_closes; //type: uint32
        ydk::YLeaf connection_aborts; //type: uint32
        ydk::YLeaf connection_failures; //type: uint32
        ydk::YLeaf connection_timeouts; //type: uint32
        ydk::YLeaf messages_sent; //type: uint32
        ydk::YLeaf messages_received; //type: uint32
        ydk::YLeaf errors_received; //type: uint32
        ydk::YLeaf stats_start_time; //type: string

}; // AaaData::AaaTacacsStats


class AaaData::AaaLdapCounters : public ydk::Entity
{
    public:
        AaaLdapCounters();
        ~AaaLdapCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ldap_server_address; //type: string
        ydk::YLeaf ldap_server_port; //type: uint16
        ydk::YLeaf connection_opens; //type: uint32
        ydk::YLeaf messages_sent; //type: uint32
        ydk::YLeaf messages_received; //type: uint32
        ydk::YLeaf errors_received; //type: uint32
        ydk::YLeaf connection_closes; //type: uint32
        ydk::YLeaf connection_aborts; //type: uint32
        ydk::YLeaf connection_failures; //type: uint32
        ydk::YLeaf connection_timeouts; //type: uint32
        ydk::YLeaf counters_start_time; //type: string

}; // AaaData::AaaLdapCounters


class AaaData::AaaUsers : public ydk::Entity
{
    public:
        AaaUsers();
        ~AaaUsers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf username; //type: string
        class AaaSessions; //type: AaaData::AaaUsers::AaaSessions

        ydk::YList aaa_sessions;
        
}; // AaaData::AaaUsers


class AaaData::AaaUsers::AaaSessions : public ydk::Entity
{
    public:
        AaaSessions();
        ~AaaSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_uid; //type: uint32
        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf protocol; //type: AaaSessProtType
        ydk::YLeaf login_time; //type: string

}; // AaaData::AaaUsers::AaaSessions

class AaaSessProtType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aaa_sess_proto_type_none;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_invalid;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_lcp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ip;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ipsec;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ipx;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_atalk;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_xremote;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_tn3270;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_telnet;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_tcp_clear;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_rlogin;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_lat;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_pad;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_osicp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_tagcp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_bacp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_decnet;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ccp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_cdp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_bridging;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_nbf;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_bap;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_multilink;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_h323;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_unknown;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_call_accept;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_vpdn_session;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_rm_call_status;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_rm_nas_status;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_dial_in;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_dial_out;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ss7;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_rms_stop;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_rms_start;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_vpdn;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_sss;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_subscriber;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_atm;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ssh;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ipv6;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_aironet;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_pppoe;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_entity;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_cdma;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_crb;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_template;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_aaa;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_epd;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_mac;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_leap;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_igmp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_webvpn;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_cts;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_radius;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_evc;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_elmi;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_dot1x;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_dtp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_lacp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_pagp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_stp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_vtp;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ethernet_mac_tunnel;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_bridge_domain;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ethernet_cfm;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ethernet_service_instance;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_service_group;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ip_dhcp_snooping;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_ip_source_guard;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_error_disable;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_cmac_bridge_domain;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_mac_in_mac_tunnel;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_l2vpn;
        static const ydk::Enum::YLeaf aaa_sess_proto_type_snmp;

        static int get_enum_value(const std::string & name) {
            if (name == "aaa-sess-proto-type-none") return 0;
            if (name == "aaa-sess-proto-type-invalid") return 1;
            if (name == "aaa-sess-proto-type-lcp") return 2;
            if (name == "aaa-sess-proto-type-ip") return 3;
            if (name == "aaa-sess-proto-type-ipsec") return 4;
            if (name == "aaa-sess-proto-type-ipx") return 5;
            if (name == "aaa-sess-proto-type-atalk") return 6;
            if (name == "aaa-sess-proto-type-xremote") return 7;
            if (name == "aaa-sess-proto-type-tn3270") return 8;
            if (name == "aaa-sess-proto-type-telnet") return 9;
            if (name == "aaa-sess-proto-type-tcp-clear") return 10;
            if (name == "aaa-sess-proto-type-rlogin") return 11;
            if (name == "aaa-sess-proto-type-lat") return 12;
            if (name == "aaa-sess-proto-type-pad") return 13;
            if (name == "aaa-sess-proto-type-osicp") return 14;
            if (name == "aaa-sess-proto-type-tagcp") return 15;
            if (name == "aaa-sess-proto-type-bacp") return 16;
            if (name == "aaa-sess-proto-type-decnet") return 17;
            if (name == "aaa-sess-proto-type-ccp") return 18;
            if (name == "aaa-sess-proto-type-cdp") return 19;
            if (name == "aaa-sess-proto-type-bridging") return 20;
            if (name == "aaa-sess-proto-type-nbf") return 21;
            if (name == "aaa-sess-proto-type-bap") return 22;
            if (name == "aaa-sess-proto-type-multilink") return 23;
            if (name == "aaa-sess-proto-type-h323") return 24;
            if (name == "aaa-sess-proto-type-unknown") return 25;
            if (name == "aaa-sess-proto-type-call-accept") return 26;
            if (name == "aaa-sess-proto-type-vpdn-session") return 27;
            if (name == "aaa-sess-proto-type-rm-call-status") return 28;
            if (name == "aaa-sess-proto-type-rm-nas-status") return 29;
            if (name == "aaa-sess-proto-type-dial-in") return 30;
            if (name == "aaa-sess-proto-type-dial-out") return 31;
            if (name == "aaa-sess-proto-type-ss7") return 32;
            if (name == "aaa-sess-proto-type-rms-stop") return 33;
            if (name == "aaa-sess-proto-type-rms-start") return 34;
            if (name == "aaa-sess-proto-type-vpdn") return 35;
            if (name == "aaa-sess-proto-type-sss") return 36;
            if (name == "aaa-sess-proto-type-subscriber") return 37;
            if (name == "aaa-sess-proto-type-atm") return 38;
            if (name == "aaa-sess-proto-type-ssh") return 39;
            if (name == "aaa-sess-proto-type-ipv6") return 40;
            if (name == "aaa-sess-proto-type-aironet") return 41;
            if (name == "aaa-sess-proto-type-pppoe") return 42;
            if (name == "aaa-sess-proto-type-entity") return 43;
            if (name == "aaa-sess-proto-type-cdma") return 44;
            if (name == "aaa-sess-proto-type-crb") return 45;
            if (name == "aaa-sess-proto-type-template") return 46;
            if (name == "aaa-sess-proto-type-aaa") return 47;
            if (name == "aaa-sess-proto-type-epd") return 48;
            if (name == "aaa-sess-proto-type-mac") return 49;
            if (name == "aaa-sess-proto-type-leap") return 50;
            if (name == "aaa-sess-proto-type-igmp") return 51;
            if (name == "aaa-sess-proto-type-webvpn") return 52;
            if (name == "aaa-sess-proto-type-cts") return 53;
            if (name == "aaa-sess-proto-type-radius") return 54;
            if (name == "aaa-sess-proto-type-evc") return 55;
            if (name == "aaa-sess-proto-type-elmi") return 56;
            if (name == "aaa-sess-proto-type-dot1x") return 57;
            if (name == "aaa-sess-proto-type-dtp") return 58;
            if (name == "aaa-sess-proto-type-lacp") return 59;
            if (name == "aaa-sess-proto-type-pagp") return 60;
            if (name == "aaa-sess-proto-type-stp") return 61;
            if (name == "aaa-sess-proto-type-vtp") return 62;
            if (name == "aaa-sess-proto-type-ethernet-mac-tunnel") return 63;
            if (name == "aaa-sess-proto-type-bridge-domain") return 64;
            if (name == "aaa-sess-proto-type-ethernet-cfm") return 65;
            if (name == "aaa-sess-proto-type-ethernet-service-instance") return 66;
            if (name == "aaa-sess-proto-type-service-group") return 67;
            if (name == "aaa-sess-proto-type-ip-dhcp-snooping") return 68;
            if (name == "aaa-sess-proto-type-ip-source-guard") return 69;
            if (name == "aaa-sess-proto-type-error-disable") return 70;
            if (name == "aaa-sess-proto-type-cmac-bridge-domain") return 71;
            if (name == "aaa-sess-proto-type-mac-in-mac-tunnel") return 72;
            if (name == "aaa-sess-proto-type-l2vpn") return 73;
            if (name == "aaa-sess-proto-type-snmp") return 74;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_AAA_OPER_ */

