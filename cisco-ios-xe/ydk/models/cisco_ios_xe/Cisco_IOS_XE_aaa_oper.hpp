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

        class AaaUsers; //type: AaaData::AaaUsers

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_aaa_oper::AaaData::AaaUsers> > aaa_users;
        
}; // AaaData


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_aaa_oper::AaaData::AaaUsers::AaaSessions> > aaa_sessions;
        
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

};


}
}

#endif /* _CISCO_IOS_XE_AAA_OPER_ */

