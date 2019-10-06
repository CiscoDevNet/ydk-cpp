#ifndef _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_
#define _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_l2tun_cfg {

class L2tp : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Classes; //type: L2tp::Classes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes> classes;
        
}; // L2tp


class L2tp::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

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

        class Class; //type: L2tp::Classes::Class

        ydk::YList class_;
        
}; // L2tp::Classes


class L2tp::Classes::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

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

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf host_name; //type: string
        ydk::YLeaf hidden; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf timeout_setup; //type: uint32
        ydk::YLeaf receive_window; //type: uint32
        ydk::YLeaf congestion_control; //type: empty
        ydk::YLeaf timeout_no_user; //type: uint32
        ydk::YLeaf authentication; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf password; //type: string
        class Security; //type: L2tp::Classes::Class::Security
        class Retransmit; //type: L2tp::Classes::Class::Retransmit
        class Tunnel; //type: L2tp::Classes::Class::Tunnel
        class Digest; //type: L2tp::Classes::Class::Digest
        class Ip; //type: L2tp::Classes::Class::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Digest> digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Ip> ip;
        
}; // L2tp::Classes::Class


class L2tp::Classes::Class::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: L2tp::Classes::Class::Security::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Security::Ip> ip;
        
}; // L2tp::Classes::Class::Security


class L2tp::Classes::Class::Security::Ip : public ydk::Entity
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

        ydk::YLeaf address_check; //type: empty

}; // L2tp::Classes::Class::Security::Ip


class L2tp::Classes::Class::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retry; //type: uint32
        class Initial; //type: L2tp::Classes::Class::Retransmit::Initial
        class Timeout; //type: L2tp::Classes::Class::Retransmit::Timeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Retransmit::Initial> initial;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Retransmit::Timeout> timeout;
        
}; // L2tp::Classes::Class::Retransmit


class L2tp::Classes::Class::Retransmit::Initial : public ydk::Entity
{
    public:
        Initial();
        ~Initial();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retry; //type: uint32
        class Timeout; //type: L2tp::Classes::Class::Retransmit::Initial::Timeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Retransmit::Initial::Timeout> timeout;
        
}; // L2tp::Classes::Class::Retransmit::Initial


class L2tp::Classes::Class::Retransmit::Initial::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32

}; // L2tp::Classes::Class::Retransmit::Initial::Timeout


class L2tp::Classes::Class::Retransmit::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint32
        ydk::YLeaf maximum; //type: uint32

}; // L2tp::Classes::Class::Retransmit::Timeout


class L2tp::Classes::Class::Tunnel : public ydk::Entity
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

        ydk::YLeaf accounting; //type: string

}; // L2tp::Classes::Class::Tunnel


class L2tp::Classes::Class::Digest : public ydk::Entity
{
    public:
        Digest();
        ~Digest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hash; //type: L2tpDigestHashMethod
        ydk::YLeaf check_disable; //type: empty
        class Secrets; //type: L2tp::Classes::Class::Digest::Secrets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2tp::Classes::Class::Digest::Secrets> secrets;
        
}; // L2tp::Classes::Class::Digest


class L2tp::Classes::Class::Digest::Secrets : public ydk::Entity
{
    public:
        Secrets();
        ~Secrets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Secret; //type: L2tp::Classes::Class::Digest::Secrets::Secret

        ydk::YList secret;
        
}; // L2tp::Classes::Class::Digest::Secrets


class L2tp::Classes::Class::Digest::Secrets::Secret : public ydk::Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secret_name; //type: string
        ydk::YLeaf hash; //type: L2tpHashMethod

}; // L2tp::Classes::Class::Digest::Secrets::Secret


class L2tp::Classes::Class::Ip : public ydk::Entity
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

}; // L2tp::Classes::Class::Ip

class L2tpDigestHashMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;

        static int get_enum_value(const std::string & name) {
            if (name == "md5") return 1;
            if (name == "sha1") return 2;
            return -1;
        }
};

class L2tpHashMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "md5") return 1;
            if (name == "sha1") return 2;
            if (name == "none") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_ */

