#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_1_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpBestpathAfiSafiSrPolicyPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiSrPolicyPrefixRpc();
        ~ClearBgpBestpathAfiSafiSrPolicyPrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiSrPolicyPrefixRpc


class ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf sr_policy_prefix; //type: string

}; // ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input

class ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc


class ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf bridge_domain_name; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input

class ClearBgpBestpathAfiSafiRdIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiRdIpv4PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv4PrefixRpc


class ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input

class ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc


class ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf mp2mp; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input

class ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc


class ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input

class ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc


class ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input

class ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc


class ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input

class ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc


class ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpBestpathAfiSafiRdIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6AddrRpc();
        ~ClearBgpBestpathAfiSafiRdIpv6AddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv6AddrRpc


class ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input

class ClearBgpBestpathAfiSafiRdIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv6PrefixRpc();
        ~ClearBgpBestpathAfiSafiRdIpv6PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv6PrefixRpc


class ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input

class ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc


class ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpBestpathAfiSafiVrfIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6AddrRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv6AddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv6AddrRpc


class ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input

class ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc


class ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input

class ClearBgpBestpathVrfIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathVrfIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathVrfIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpBestpathVrfIpAddrIpNetmaskRpc


class ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string

}; // ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input

class ClearBgpBestpathVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathVrfIpAddrRpc();
        ~ClearBgpBestpathVrfIpAddrRpc();

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

        class Input; //type: ClearBgpBestpathVrfIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfIpAddrRpc::Input> input;
        
}; // ClearBgpBestpathVrfIpAddrRpc


class ClearBgpBestpathVrfIpAddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string

}; // ClearBgpBestpathVrfIpAddrRpc::Input

class ClearBgpBestpathVrfIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathVrfIpPrefixRpc();
        ~ClearBgpBestpathVrfIpPrefixRpc();

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

        class Input; //type: ClearBgpBestpathVrfIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfIpPrefixRpc::Input> input;
        
}; // ClearBgpBestpathVrfIpPrefixRpc


class ClearBgpBestpathVrfIpPrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_prefix; //type: string

}; // ClearBgpBestpathVrfIpPrefixRpc::Input

class ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc


class ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input

class ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc


class ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input

class ClearBgpBestpathVrfAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv4AddrRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv4AddrRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv4AddrRpc


class ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input

class ClearBgpBestpathVrfAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiNetworkRpc();
        ~ClearBgpBestpathVrfAfiSafiNetworkRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiNetworkRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiNetworkRpc


class ClearBgpBestpathVrfAfiSafiNetworkRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string

}; // ClearBgpBestpathVrfAfiSafiNetworkRpc::Input

class ClearBgpBestpathVrfAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRdNetworkRpc();
        ~ClearBgpBestpathVrfAfiSafiRdNetworkRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiRdNetworkRpc


class ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string

}; // ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input

class ClearBgpBestpathVrfAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiVrfNetworkRpc();
        ~ClearBgpBestpathVrfAfiSafiVrfNetworkRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiVrfNetworkRpc


class ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string

}; // ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input

class ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc


class ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpBestpathVrfAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6AddrRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv6AddrRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv6AddrRpc


class ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input

class ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc();
        ~ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc


class ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input

class ClearBgpBestpathVrfAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRdRpc();
        ~ClearBgpBestpathVrfAfiSafiRdRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiRdRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiRdRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiRdRpc


class ClearBgpBestpathVrfAfiSafiRdRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string

}; // ClearBgpBestpathVrfAfiSafiRdRpc::Input

class ClearBgpBestpathVrfAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiVrfRpc();
        ~ClearBgpBestpathVrfAfiSafiVrfRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiVrfRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiVrfRpc


class ClearBgpBestpathVrfAfiSafiVrfRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string

}; // ClearBgpBestpathVrfAfiSafiVrfRpc::Input

class ClearBgpBestpathVrfAfiSafiRpc : public Entity
{
    public:
        ClearBgpBestpathVrfAfiSafiRpc();
        ~ClearBgpBestpathVrfAfiSafiRpc();

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

        class Input; //type: ClearBgpBestpathVrfAfiSafiRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathVrfAfiSafiRpc::Input> input;
        
}; // ClearBgpBestpathVrfAfiSafiRpc


class ClearBgpBestpathVrfAfiSafiRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpBestpathVrfAfiSafiRpc::Input

class ClearBgpExternalGracefulRpc : public Entity
{
    public:
        ClearBgpExternalGracefulRpc();
        ~ClearBgpExternalGracefulRpc();

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


}; // ClearBgpExternalGracefulRpc

class ClearBgpExternalRpc : public Entity
{
    public:
        ClearBgpExternalRpc();
        ~ClearBgpExternalRpc();

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


}; // ClearBgpExternalRpc

class ClearBgpInstanceAllGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceAllGracefulRpc();
        ~ClearBgpInstanceAllGracefulRpc();

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

        class Input; //type: ClearBgpInstanceAllGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAllGracefulRpc::Input> input;
        
}; // ClearBgpInstanceAllGracefulRpc


class ClearBgpInstanceAllGracefulRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceAllGracefulRpc::Input

class ClearBgpInstanceAllRpc : public Entity
{
    public:
        ClearBgpInstanceAllRpc();
        ~ClearBgpInstanceAllRpc();

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

        class Input; //type: ClearBgpInstanceAllRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAllRpc::Input> input;
        
}; // ClearBgpInstanceAllRpc


class ClearBgpInstanceAllRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration

}; // ClearBgpInstanceAllRpc::Input

class ClearBgpInstanceIpAddrGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceIpAddrGracefulRpc();
        ~ClearBgpInstanceIpAddrGracefulRpc();

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

        class Input; //type: ClearBgpInstanceIpAddrGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceIpAddrGracefulRpc::Input> input;
        
}; // ClearBgpInstanceIpAddrGracefulRpc


class ClearBgpInstanceIpAddrGracefulRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceIpAddrGracefulRpc::Input

class ClearBgpInstanceIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpInstanceIpAddrLongLivedStaleRpc();
        ~ClearBgpInstanceIpAddrLongLivedStaleRpc();

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

        class Input; //type: ClearBgpInstanceIpAddrLongLivedStaleRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceIpAddrLongLivedStaleRpc::Input> input;
        
}; // ClearBgpInstanceIpAddrLongLivedStaleRpc


class ClearBgpInstanceIpAddrLongLivedStaleRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceIpAddrLongLivedStaleRpc::Input

class ClearBgpInstanceIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceIpAddrRpc();
        ~ClearBgpInstanceIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceIpAddrRpc


class ClearBgpInstanceIpAddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceIpAddrRpc::Input

class ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc


class ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input

class ClearBgpInstanceAfiSafiAllSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftInRpc();
        ~ClearBgpInstanceAfiSafiAllSoftInRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoftInRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoftInRpc


class ClearBgpInstanceAfiSafiAllSoftInRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiAllSoftInRpc::Input

class ClearBgpInstanceAfiSafiAllSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftOutRpc();
        ~ClearBgpInstanceAfiSafiAllSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoftOutRpc


class ClearBgpInstanceAfiSafiAllSoftOutRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiAllSoftOutRpc::Input

class ClearBgpInstanceAfiSafiAllSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAllSoftRpc();
        ~ClearBgpInstanceAfiSafiAllSoftRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAllSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAllSoftRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAllSoftRpc


class ClearBgpInstanceAfiSafiAllSoftRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiAllSoftRpc::Input

class ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc();
        ~ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc


class ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input

class ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc


class ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input

class ClearBgpInstanceAfiSafiIpAddrSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftInRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftInRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoftInRpc


class ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input

class ClearBgpInstanceAfiSafiIpAddrSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftOutRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoftOutRpc


class ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input

class ClearBgpInstanceAfiSafiIpAddrSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiIpAddrSoftRpc();
        ~ClearBgpInstanceAfiSafiIpAddrSoftRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiIpAddrSoftRpc


class ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input

class ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc


class ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input

class ClearBgpInstanceAfiSafiAsSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftInRpc();
        ~ClearBgpInstanceAfiSafiAsSoftInRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoftInRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoftInRpc


class ClearBgpInstanceAfiSafiAsSoftInRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAfiSafiAsSoftInRpc::Input

class ClearBgpInstanceAfiSafiAsSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftOutRpc();
        ~ClearBgpInstanceAfiSafiAsSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoftOutRpc


class ClearBgpInstanceAfiSafiAsSoftOutRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAfiSafiAsSoftOutRpc::Input

class ClearBgpInstanceAfiSafiAsSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiAsSoftRpc();
        ~ClearBgpInstanceAfiSafiAsSoftRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiAsSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiAsSoftRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiAsSoftRpc


class ClearBgpInstanceAfiSafiAsSoftRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAfiSafiAsSoftRpc::Input

class ClearBgpInstanceAfiSafiDampeningIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpPrefixRpc();
        ~ClearBgpInstanceAfiSafiDampeningIpPrefixRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampeningIpPrefixRpc


class ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input

class ClearBgpInstanceAfiSafiDampeningRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningRpc();
        ~ClearBgpInstanceAfiSafiDampeningRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampeningRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampeningRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampeningRpc


class ClearBgpInstanceAfiSafiDampeningRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiDampeningRpc::Input

class ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc


class ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input

class ClearBgpInstanceAfiSafiExternalSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftInRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftInRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoftInRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoftInRpc


class ClearBgpInstanceAfiSafiExternalSoftInRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiExternalSoftInRpc::Input

class ClearBgpInstanceAfiSafiExternalSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftOutRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoftOutRpc


class ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input

class ClearBgpInstanceAfiSafiExternalSoftRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiExternalSoftRpc();
        ~ClearBgpInstanceAfiSafiExternalSoftRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiExternalSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiExternalSoftRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiExternalSoftRpc


class ClearBgpInstanceAfiSafiExternalSoftRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiExternalSoftRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc


class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc


class ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc


class ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc


class ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf regexp_pattern; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc


class ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf route_policy_name; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsRpc


class ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input

class ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc


class ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input

class ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc


class ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input

class ClearBgpInstanceAfiSafiSelfOriginatedRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiSelfOriginatedRpc();
        ~ClearBgpInstanceAfiSafiSelfOriginatedRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiSelfOriginatedRpc


class ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input

class ClearBgpInstanceAfiSafiShutdownRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiShutdownRpc();
        ~ClearBgpInstanceAfiSafiShutdownRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiShutdownRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiShutdownRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiShutdownRpc


class ClearBgpInstanceAfiSafiShutdownRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiShutdownRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc


class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc


class ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc


class ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input

class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc();
        ~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc


class ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf update_group; //type: string

}; // ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_1_ */

