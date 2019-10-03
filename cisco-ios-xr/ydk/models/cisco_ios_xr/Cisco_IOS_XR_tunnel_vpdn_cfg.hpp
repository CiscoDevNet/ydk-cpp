#ifndef _CISCO_IOS_XR_TUNNEL_VPDN_CFG_
#define _CISCO_IOS_XR_TUNNEL_VPDN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_vpdn_cfg {

class Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

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

        ydk::YLeaf session_limit; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf soft_shut; //type: empty
        class History; //type: Vpdn::History
        class Redundancy; //type: Vpdn::Redundancy
        class Local; //type: Vpdn::Local
        class Templates; //type: Vpdn::Templates
        class CallerId; //type: Vpdn::CallerId
        class VpdNgroups; //type: Vpdn::VpdNgroups
        class Loggings; //type: Vpdn::Loggings
        class L2tp; //type: Vpdn::L2tp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::History> history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates> templates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::CallerId> caller_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::VpdNgroups> vpd_ngroups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Loggings> loggings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::L2tp> l2tp;
        
}; // Vpdn


class Vpdn::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf failure; //type: empty

}; // Vpdn::History


class Vpdn::Redundancy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty
        class ProcessFailures; //type: Vpdn::Redundancy::ProcessFailures

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Redundancy::ProcessFailures> process_failures;
        
}; // Vpdn::Redundancy


class Vpdn::Redundancy::ProcessFailures : public ydk::Entity
{
    public:
        ProcessFailures();
        ~ProcessFailures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf switchover; //type: empty

}; // Vpdn::Redundancy::ProcessFailures


class Vpdn::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf secret_text; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf cache_disabled; //type: empty
        ydk::YLeaf port; //type: uint16

}; // Vpdn::Local


class Vpdn::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Template; //type: Vpdn::Templates::Template

        ydk::YList template_;
        
}; // Vpdn::Templates


class Vpdn::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf cisco_avp100_format_e_enable; //type: empty
        ydk::YLeaf description; //type: string
        ydk::YLeaf l2tp_class; //type: string
        ydk::YLeaf dsl_line_forwarding; //type: empty
        class CallerId; //type: Vpdn::Templates::Template::CallerId
        class Vpn; //type: Vpdn::Templates::Template::Vpn
        class Tunnel; //type: Vpdn::Templates::Template::Tunnel
        class Ip; //type: Vpdn::Templates::Template::Ip
        class Ipv4; //type: Vpdn::Templates::Template::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template::CallerId> caller_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template::Vpn> vpn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template::Ip> ip;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template::Ipv4> ipv4;
        
}; // Vpdn::Templates::Template


class Vpdn::Templates::Template::CallerId : public ydk::Entity
{
    public:
        CallerId();
        ~CallerId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mask; //type: string

}; // Vpdn::Templates::Template::CallerId


class Vpdn::Templates::Template::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class Id; //type: Vpdn::Templates::Template::Vpn::Id

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template::Vpn::Id> id;
        
}; // Vpdn::Templates::Template::Vpn


class Vpdn::Templates::Template::Vpn::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oui; //type: string
        ydk::YLeaf index_; //type: string

}; // Vpdn::Templates::Template::Vpn::Id


class Vpdn::Templates::Template::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf busy_timeout; //type: uint32

}; // Vpdn::Templates::Template::Tunnel


class Vpdn::Templates::Template::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos; //type: uint32

}; // Vpdn::Templates::Template::Ip


class Vpdn::Templates::Template::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf source; //type: string

}; // Vpdn::Templates::Template::Ipv4


class Vpdn::CallerId : public ydk::Entity
{
    public:
        CallerId();
        ~CallerId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mask; //type: string

}; // Vpdn::CallerId


class Vpdn::VpdNgroups : public ydk::Entity
{
    public:
        VpdNgroups();
        ~VpdNgroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VpdNgroup; //type: Vpdn::VpdNgroups::VpdNgroup

        ydk::YList vpd_ngroup;
        
}; // Vpdn::VpdNgroups


class Vpdn::VpdNgroups::VpdNgroup : public ydk::Entity
{
    public:
        VpdNgroup();
        ~VpdNgroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vpd_ngroupname; //type: string
        ydk::YLeaf dsl_line_forwarding; //type: empty
        ydk::YLeaf cisco_avp100_format_e_enable; //type: empty
        ydk::YLeaf desc; //type: string
        ydk::YLeaf attribute; //type: string
        ydk::YLeaf l2tp_class; //type: string
        ydk::YLeaf tunnel_busy_timeout; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf sr_ctemplate; //type: string
        class VpnId; //type: Vpdn::VpdNgroups::VpdNgroup::VpnId
        class Ip; //type: Vpdn::VpdNgroups::VpdNgroup::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::VpdNgroups::VpdNgroup::VpnId> vpn_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::VpdNgroups::VpdNgroup::Ip> ip;
        
}; // Vpdn::VpdNgroups::VpdNgroup


class Vpdn::VpdNgroups::VpdNgroup::VpnId : public ydk::Entity
{
    public:
        VpnId();
        ~VpnId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpn_id_oui; //type: string
        ydk::YLeaf vpn_id_index; //type: string

}; // Vpdn::VpdNgroups::VpdNgroup::VpnId


class Vpdn::VpdNgroups::VpdNgroup::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tos; //type: uint32

}; // Vpdn::VpdNgroups::VpdNgroup::Ip


class Vpdn::Loggings : public ydk::Entity
{
    public:
        Loggings();
        ~Loggings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Logging; //type: Vpdn::Loggings::Logging

        ydk::YList logging;
        
}; // Vpdn::Loggings


class Vpdn::Loggings::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf option; //type: Option

}; // Vpdn::Loggings::Logging


class Vpdn::L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tcp_mss_adjust; //type: uint32
        ydk::YLeaf reassembly; //type: empty
        class SessionId; //type: Vpdn::L2tp::SessionId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::L2tp::SessionId> session_id;
        
}; // Vpdn::L2tp


class Vpdn::L2tp::SessionId : public ydk::Entity
{
    public:
        SessionId();
        ~SessionId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Space; //type: Vpdn::L2tp::SessionId::Space

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::L2tp::SessionId::Space> space;
        
}; // Vpdn::L2tp::SessionId


class Vpdn::L2tp::SessionId::Space : public ydk::Entity
{
    public:
        Space();
        ~Space();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hierarchy; //type: empty

}; // Vpdn::L2tp::SessionId::Space

class DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf reflect;
        static const ydk::Enum::YLeaf set;

        static int get_enum_value(const std::string & name) {
            if (name == "clear") return 0;
            if (name == "reflect") return 1;
            if (name == "set") return 2;
            return -1;
        }
};

class Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf dead_cache;
        static const ydk::Enum::YLeaf tunnel_drop;

        static int get_enum_value(const std::string & name) {
            if (name == "local") return 1;
            if (name == "user") return 2;
            if (name == "dead-cache") return 8;
            if (name == "tunnel-drop") return 16;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_VPDN_CFG_ */

