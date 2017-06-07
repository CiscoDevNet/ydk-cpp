#ifndef _CISCO_IOS_XR_TUNNEL_VPDN_CFG_
#define _CISCO_IOS_XR_TUNNEL_VPDN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_tunnel_vpdn_cfg {

class Vpdn : public Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf session_limit; //type: uint32
        YLeaf enable; //type: empty
        YLeaf soft_shut; //type: empty
        class History; //type: Vpdn::History
        class Redundancy; //type: Vpdn::Redundancy
        class Local; //type: Vpdn::Local
        class Templates; //type: Vpdn::Templates
        class CallerId; //type: Vpdn::CallerId
        class VpdNgroups; //type: Vpdn::VpdNgroups
        class Loggings; //type: Vpdn::Loggings
        class L2Tp; //type: Vpdn::L2Tp

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::CallerId> caller_id;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::History> history;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::L2Tp> l2tp;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Local> local;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Loggings> loggings;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates> templates;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::VpdNgroups> vpd_ngroups;
        
}; // Vpdn


class Vpdn::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf failure; //type: empty

}; // Vpdn::History


class Vpdn::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class ProcessFailures; //type: Vpdn::Redundancy::ProcessFailures

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Redundancy::ProcessFailures> process_failures;
        
}; // Vpdn::Redundancy


class Vpdn::Redundancy::ProcessFailures : public Entity
{
    public:
        ProcessFailures();
        ~ProcessFailures();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchover; //type: empty

}; // Vpdn::Redundancy::ProcessFailures


class Vpdn::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf secret_text; //type: string
        YLeaf path; //type: string
        YLeaf cache_disabled; //type: empty
        YLeaf port; //type: uint16

}; // Vpdn::Local


class Vpdn::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: Vpdn::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template_> > template_;
        
}; // Vpdn::Templates


class Vpdn::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf description; //type: string
        YLeaf l2tp_class; //type: string
        YLeaf dsl_line_forwarding; //type: empty
        class CallerId; //type: Vpdn::Templates::Template_::CallerId
        class Vpn; //type: Vpdn::Templates::Template_::Vpn
        class Tunnel; //type: Vpdn::Templates::Template_::Tunnel
        class Ip; //type: Vpdn::Templates::Template_::Ip
        class Ipv4; //type: Vpdn::Templates::Template_::Ipv4

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template_::CallerId> caller_id;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template_::Ip> ip;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template_::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template_::Tunnel> tunnel;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template_::Vpn> vpn;
        
}; // Vpdn::Templates::Template_


class Vpdn::Templates::Template_::CallerId : public Entity
{
    public:
        CallerId();
        ~CallerId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mask; //type: string

}; // Vpdn::Templates::Template_::CallerId


class Vpdn::Templates::Template_::Vpn : public Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class Id; //type: Vpdn::Templates::Template_::Vpn::Id

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Templates::Template_::Vpn::Id> id;
        
}; // Vpdn::Templates::Template_::Vpn


class Vpdn::Templates::Template_::Vpn::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oui; //type: string
        YLeaf index_; //type: string

}; // Vpdn::Templates::Template_::Vpn::Id


class Vpdn::Templates::Template_::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf busy_timeout; //type: uint32

}; // Vpdn::Templates::Template_::Tunnel


class Vpdn::Templates::Template_::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos; //type: int32

}; // Vpdn::Templates::Template_::Ip


class Vpdn::Templates::Template_::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf df_bit; //type: DfBitEnum
        YLeaf source; //type: string

}; // Vpdn::Templates::Template_::Ipv4


class Vpdn::CallerId : public Entity
{
    public:
        CallerId();
        ~CallerId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mask; //type: string

}; // Vpdn::CallerId


class Vpdn::VpdNgroups : public Entity
{
    public:
        VpdNgroups();
        ~VpdNgroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VpdNgroup; //type: Vpdn::VpdNgroups::VpdNgroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::VpdNgroups::VpdNgroup> > vpd_ngroup;
        
}; // Vpdn::VpdNgroups


class Vpdn::VpdNgroups::VpdNgroup : public Entity
{
    public:
        VpdNgroup();
        ~VpdNgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpd_ngroupname; //type: string
        YLeaf dsl_line_forwarding; //type: empty
        YLeaf desc; //type: string
        YLeaf attribute; //type: string
        YLeaf l2tp_class; //type: string
        YLeaf tunnel_busy_timeout; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf sr_ctemplate; //type: string
        class VpnId; //type: Vpdn::VpdNgroups::VpdNgroup::VpnId
        class Ip; //type: Vpdn::VpdNgroups::VpdNgroup::Ip

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::VpdNgroups::VpdNgroup::Ip> ip;
        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::VpdNgroups::VpdNgroup::VpnId> vpn_id;
        
}; // Vpdn::VpdNgroups::VpdNgroup


class Vpdn::VpdNgroups::VpdNgroup::VpnId : public Entity
{
    public:
        VpnId();
        ~VpnId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpn_id_oui; //type: string
        YLeaf vpn_id_index; //type: string

}; // Vpdn::VpdNgroups::VpdNgroup::VpnId


class Vpdn::VpdNgroups::VpdNgroup::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos; //type: uint32

}; // Vpdn::VpdNgroups::VpdNgroup::Ip


class Vpdn::Loggings : public Entity
{
    public:
        Loggings();
        ~Loggings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Logging; //type: Vpdn::Loggings::Logging

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::Loggings::Logging> > logging;
        
}; // Vpdn::Loggings


class Vpdn::Loggings::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf option; //type: OptionEnum

}; // Vpdn::Loggings::Logging


class Vpdn::L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp_mss_adjust; //type: uint32
        YLeaf reassembly; //type: empty
        class SessionId; //type: Vpdn::L2Tp::SessionId

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::L2Tp::SessionId> session_id;
        
}; // Vpdn::L2Tp


class Vpdn::L2Tp::SessionId : public Entity
{
    public:
        SessionId();
        ~SessionId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Space; //type: Vpdn::L2Tp::SessionId::Space

        std::shared_ptr<Cisco_IOS_XR_tunnel_vpdn_cfg::Vpdn::L2Tp::SessionId::Space> space;
        
}; // Vpdn::L2Tp::SessionId


class Vpdn::L2Tp::SessionId::Space : public Entity
{
    public:
        Space();
        ~Space();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hierarchy; //type: empty

}; // Vpdn::L2Tp::SessionId::Space

class DfBitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf reflect;
        static const Enum::YLeaf set;

};

class OptionEnum : public Enum
{
    public:
        static const Enum::YLeaf local;
        static const Enum::YLeaf user;
        static const Enum::YLeaf dead_cache;
        static const Enum::YLeaf tunnel_drop;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_VPDN_CFG_ */

