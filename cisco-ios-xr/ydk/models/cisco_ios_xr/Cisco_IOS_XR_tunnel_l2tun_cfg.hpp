#ifndef _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_
#define _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_l2tun_cfg {

class L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

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

        class Classes; //type: L2Tp::Classes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes> classes;
        
}; // L2Tp


class L2Tp::Classes : public ydk::Entity
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

        class Class_; //type: L2Tp::Classes::Class_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_> > class_;
        
}; // L2Tp::Classes


class L2Tp::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

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
        ydk::YLeaf authentication; //type: int32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf password; //type: string
        class Security; //type: L2Tp::Classes::Class_::Security
        class Retransmit; //type: L2Tp::Classes::Class_::Retransmit
        class Tunnel; //type: L2Tp::Classes::Class_::Tunnel
        class Digest; //type: L2Tp::Classes::Class_::Digest
        class Ip; //type: L2Tp::Classes::Class_::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Digest> digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Ip> ip;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Security> security;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Tunnel> tunnel;
        
}; // L2Tp::Classes::Class_


class L2Tp::Classes::Class_::Digest : public ydk::Entity
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
        class Secrets; //type: L2Tp::Classes::Class_::Digest::Secrets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Digest::Secrets> secrets;
        
}; // L2Tp::Classes::Class_::Digest


class L2Tp::Classes::Class_::Digest::Secrets : public ydk::Entity
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

        class Secret; //type: L2Tp::Classes::Class_::Digest::Secrets::Secret

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Digest::Secrets::Secret> > secret;
        
}; // L2Tp::Classes::Class_::Digest::Secrets


class L2Tp::Classes::Class_::Digest::Secrets::Secret : public ydk::Entity
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

}; // L2Tp::Classes::Class_::Digest::Secrets::Secret


class L2Tp::Classes::Class_::Ip : public ydk::Entity
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

}; // L2Tp::Classes::Class_::Ip


class L2Tp::Classes::Class_::Retransmit : public ydk::Entity
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
        class Initial; //type: L2Tp::Classes::Class_::Retransmit::Initial
        class Timeout; //type: L2Tp::Classes::Class_::Retransmit::Timeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit::Initial> initial;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit::Timeout> timeout;
        
}; // L2Tp::Classes::Class_::Retransmit


class L2Tp::Classes::Class_::Retransmit::Initial : public ydk::Entity
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
        class Timeout; //type: L2Tp::Classes::Class_::Retransmit::Initial::Timeout

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Retransmit::Initial::Timeout> timeout;
        
}; // L2Tp::Classes::Class_::Retransmit::Initial


class L2Tp::Classes::Class_::Retransmit::Initial::Timeout : public ydk::Entity
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

}; // L2Tp::Classes::Class_::Retransmit::Initial::Timeout


class L2Tp::Classes::Class_::Retransmit::Timeout : public ydk::Entity
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

}; // L2Tp::Classes::Class_::Retransmit::Timeout


class L2Tp::Classes::Class_::Security : public ydk::Entity
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

        class Ip; //type: L2Tp::Classes::Class_::Security::Ip

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_cfg::L2Tp::Classes::Class_::Security::Ip> ip;
        
}; // L2Tp::Classes::Class_::Security


class L2Tp::Classes::Class_::Security::Ip : public ydk::Entity
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

}; // L2Tp::Classes::Class_::Security::Ip


class L2Tp::Classes::Class_::Tunnel : public ydk::Entity
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

}; // L2Tp::Classes::Class_::Tunnel

class L2tpHashMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf none;

};

class L2tpDigestHashMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_L2TUN_CFG_ */

