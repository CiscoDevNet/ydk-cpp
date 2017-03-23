#ifndef _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_
#define _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_tunnel_l2tun_cfg {

class L2Tp : public Entity
{
    public:
        L2Tp();
        ~L2Tp();

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



        class Classes; //type: L2Tp::Classes

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes> classes;


}; // L2Tp


class L2Tp::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Class_; //type: L2Tp::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_> > class_;


}; // L2Tp::Classes


class L2Tp::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf class_name; //type: string
        YLeaf host_name; //type: string
        YLeaf hidden; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf timeout_setup; //type: uint32
        YLeaf receive_window; //type: uint32
        YLeaf congestion_control; //type: empty
        YLeaf timeout_no_user; //type: uint32
        YLeaf authentication; //type: int32
        YLeaf enable; //type: empty
        YLeaf password; //type: string

        class Security; //type: L2Tp::Classes::Class_::Security
        class Retransmit; //type: L2Tp::Classes::Class_::Retransmit
        class Tunnel; //type: L2Tp::Classes::Class_::Tunnel
        class Digest; //type: L2Tp::Classes::Class_::Digest
        class Ip; //type: L2Tp::Classes::Class_::Ip

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Digest> digest;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Ip> ip;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Security> security;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Tunnel> tunnel;


}; // L2Tp::Classes::Class_


class L2Tp::Classes::Class_::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ip; //type: L2Tp::Classes::Class_::Security::Ip

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Security::Ip> ip;


}; // L2Tp::Classes::Class_::Security


class L2Tp::Classes::Class_::Security::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_check; //type: empty



}; // L2Tp::Classes::Class_::Security::Ip


class L2Tp::Classes::Class_::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf retry; //type: uint32

        class Initial; //type: L2Tp::Classes::Class_::Retransmit::Initial
        class Timeout; //type: L2Tp::Classes::Class_::Retransmit::Timeout

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit::Initial> initial;
        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit::Timeout> timeout;


}; // L2Tp::Classes::Class_::Retransmit


class L2Tp::Classes::Class_::Retransmit::Initial : public Entity
{
    public:
        Initial();
        ~Initial();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf retry; //type: uint32

        class Timeout; //type: L2Tp::Classes::Class_::Retransmit::Initial::Timeout

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit::Initial::Timeout> timeout;


}; // L2Tp::Classes::Class_::Retransmit::Initial


class L2Tp::Classes::Class_::Retransmit::Initial::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32



}; // L2Tp::Classes::Class_::Retransmit::Initial::Timeout


class L2Tp::Classes::Class_::Retransmit::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32



}; // L2Tp::Classes::Class_::Retransmit::Timeout


class L2Tp::Classes::Class_::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf accounting; //type: string



}; // L2Tp::Classes::Class_::Tunnel


class L2Tp::Classes::Class_::Digest : public Entity
{
    public:
        Digest();
        ~Digest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hash; //type: L2TpDigestHashMethodEnum
        YLeaf check_disable; //type: empty

        class Secrets; //type: L2Tp::Classes::Class_::Digest::Secrets

        std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Digest::Secrets> secrets;


}; // L2Tp::Classes::Class_::Digest


class L2Tp::Classes::Class_::Digest::Secrets : public Entity
{
    public:
        Secrets();
        ~Secrets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Secret; //type: L2Tp::Classes::Class_::Digest::Secrets::Secret

        std::vector<std::shared_ptr<Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Digest::Secrets::Secret> > secret;


}; // L2Tp::Classes::Class_::Digest::Secrets


class L2Tp::Classes::Class_::Digest::Secrets::Secret : public Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf secret_name; //type: string
        YLeaf hash; //type: L2TpHashMethodEnum



}; // L2Tp::Classes::Class_::Digest::Secrets::Secret


class L2Tp::Classes::Class_::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tos; //type: uint32



}; // L2Tp::Classes::Class_::Ip

class L2TpDigestHashMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha1;

};

class L2TpHashMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf none;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_ */

