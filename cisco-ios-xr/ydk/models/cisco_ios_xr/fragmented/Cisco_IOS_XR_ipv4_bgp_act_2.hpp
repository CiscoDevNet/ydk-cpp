#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_2_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpInstanceAsGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceAsGracefulRpc();
        ~ClearBgpInstanceAsGracefulRpc();

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

        class Input; //type: ClearBgpInstanceAsGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAsGracefulRpc::Input> input;
        
}; // ClearBgpInstanceAsGracefulRpc


class ClearBgpInstanceAsGracefulRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAsGracefulRpc::Input

class ClearBgpInstanceAsRpc : public Entity
{
    public:
        ClearBgpInstanceAsRpc();
        ~ClearBgpInstanceAsRpc();

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

        class Input; //type: ClearBgpInstanceAsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAsRpc::Input> input;
        
}; // ClearBgpInstanceAsRpc


class ClearBgpInstanceAsRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceAsRpc::Input

class ClearBgpInstanceBestpathIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathIpAddrIpNetmaskRpc


class ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input

class ClearBgpInstanceBestpathIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathIpAddrRpc();
        ~ClearBgpInstanceBestpathIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathIpAddrRpc


class ClearBgpInstanceBestpathIpAddrRpc::Input : public Entity
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

}; // ClearBgpInstanceBestpathIpAddrRpc::Input

class ClearBgpInstanceBestpathIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathIpPrefixRpc();
        ~ClearBgpInstanceBestpathIpPrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathIpPrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathIpPrefixRpc


class ClearBgpInstanceBestpathIpPrefixRpc::Input : public Entity
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
        YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathIpPrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc


class ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpAddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpAddrRpc


class ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input : public Entity
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

}; // ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpPrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpPrefixRpc


class ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input : public Entity
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

}; // ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input : public Entity
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
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input : public Entity
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
        YLeaf bridge_domain_name; //type: string
        YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc


class ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc


class ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc


class ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc


class ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input : public Entity
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
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc


class ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input : public Entity
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
        YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc


class ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input : public Entity
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
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc


class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc


class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiNetworkRpc


class ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input : public Entity
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
        YLeaf network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdNetworkRpc


class ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc


class ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input

class ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc


class ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input : public Entity
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
        YLeaf rt_constraint_network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc


class ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input : public Entity
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
        YLeaf ipv4_tunnel_network; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc


class ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input : public Entity
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
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc


class ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input : public Entity
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
        YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc


class ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input : public Entity
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
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdRpc


class ClearBgpInstanceBestpathAfiSafiRdRpc::Input : public Entity
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
        YLeaf rd; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfRpc


class ClearBgpInstanceBestpathAfiSafiVrfRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfRpc::Input

class ClearBgpInstanceBestpathAfiSafiRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRpc();
        ~ClearBgpInstanceBestpathAfiSafiRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRpc


class ClearBgpInstanceBestpathAfiSafiRpc::Input : public Entity
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

}; // ClearBgpInstanceBestpathAfiSafiRpc::Input

class ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc


class ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input : public Entity
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
        YLeaf sr_policy_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc


class ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input : public Entity
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
        YLeaf bridge_domain_name; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc


class ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc


class ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input : public Entity
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
        YLeaf mp2mp; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc


class ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc


class ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc


class ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc


class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc


class ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc


class ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input : public Entity
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
        YLeaf rd; //type: string
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc


class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc


class ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input

class ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc


class ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input : public Entity
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
        YLeaf vrf_name; //type: string
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input

class ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc();
        ~ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc


class ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string

}; // ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input

class ClearBgpInstanceBestpathVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpAddrRpc();
        ~ClearBgpInstanceBestpathVrfIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfIpAddrRpc


class ClearBgpInstanceBestpathVrfIpAddrRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceBestpathVrfIpAddrRpc::Input

class ClearBgpInstanceBestpathVrfIpPrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfIpPrefixRpc();
        ~ClearBgpInstanceBestpathVrfIpPrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfIpPrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfIpPrefixRpc


class ClearBgpInstanceBestpathVrfIpPrefixRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf ip_prefix; //type: string

}; // ClearBgpInstanceBestpathVrfIpPrefixRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc


class ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc


class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc


class ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv4_addr; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc


class ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf network; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc


class ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string
        YLeaf network; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc


class ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string
        YLeaf network; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc


class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc


class ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_addr; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc


class ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRdRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiRdRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiRdRpc


class ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf rd; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiVrfRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiVrfRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiVrfRpc


class ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum
        YLeaf vrf_name; //type: string

}; // ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input

class ClearBgpInstanceBestpathVrfAfiSafiRpc : public Entity
{
    public:
        ClearBgpInstanceBestpathVrfAfiSafiRpc();
        ~ClearBgpInstanceBestpathVrfAfiSafiRpc();

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

        class Input; //type: ClearBgpInstanceBestpathVrfAfiSafiRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceBestpathVrfAfiSafiRpc::Input> input;
        
}; // ClearBgpInstanceBestpathVrfAfiSafiRpc


class ClearBgpInstanceBestpathVrfAfiSafiRpc::Input : public Entity
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
        YLeaf vrf_all; //type: one of string, enumeration
        YLeaf afi_safi_name; //type: AfiSafiTypeEnum

}; // ClearBgpInstanceBestpathVrfAfiSafiRpc::Input

class ClearBgpInstanceExternalGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceExternalGracefulRpc();
        ~ClearBgpInstanceExternalGracefulRpc();

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

        class Input; //type: ClearBgpInstanceExternalGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceExternalGracefulRpc::Input> input;
        
}; // ClearBgpInstanceExternalGracefulRpc


class ClearBgpInstanceExternalGracefulRpc::Input : public Entity
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

}; // ClearBgpInstanceExternalGracefulRpc::Input

class ClearBgpInstanceExternalRpc : public Entity
{
    public:
        ClearBgpInstanceExternalRpc();
        ~ClearBgpInstanceExternalRpc();

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

        class Input; //type: ClearBgpInstanceExternalRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceExternalRpc::Input> input;
        
}; // ClearBgpInstanceExternalRpc


class ClearBgpInstanceExternalRpc::Input : public Entity
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

}; // ClearBgpInstanceExternalRpc::Input

class ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc();
        ~ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc


class ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input : public Entity
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
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc


class ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input : public Entity
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
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input

class ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc();
        ~ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc


class ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input : public Entity
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
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input

class ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc();
        ~ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc


class ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input : public Entity
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
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input

class ClearBgpInstanceNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceNexthopPerformanceStatisticsRpc();

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

        class Input; //type: ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input> input;
        
}; // ClearBgpInstanceNexthopPerformanceStatisticsRpc


class ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input : public Entity
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

}; // ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input

class ClearBgpInstanceNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceNexthopRegistrationIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceNexthopRegistrationIpAddrRpc


class ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input : public Entity
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

}; // ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input

class ClearBgpInstancePeerDropsAllRpc : public Entity
{
    public:
        ClearBgpInstancePeerDropsAllRpc();
        ~ClearBgpInstancePeerDropsAllRpc();

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

        class Input; //type: ClearBgpInstancePeerDropsAllRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstancePeerDropsAllRpc::Input> input;
        
}; // ClearBgpInstancePeerDropsAllRpc


class ClearBgpInstancePeerDropsAllRpc::Input : public Entity
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

}; // ClearBgpInstancePeerDropsAllRpc::Input

class ClearBgpInstancePeerDropsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstancePeerDropsIpAddrRpc();
        ~ClearBgpInstancePeerDropsIpAddrRpc();

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

        class Input; //type: ClearBgpInstancePeerDropsIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstancePeerDropsIpAddrRpc::Input> input;
        
}; // ClearBgpInstancePeerDropsIpAddrRpc


class ClearBgpInstancePeerDropsIpAddrRpc::Input : public Entity
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

}; // ClearBgpInstancePeerDropsIpAddrRpc::Input

class ClearBgpInstancePerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstancePerformanceStatisticsRpc();
        ~ClearBgpInstancePerformanceStatisticsRpc();

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

        class Input; //type: ClearBgpInstancePerformanceStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstancePerformanceStatisticsRpc::Input> input;
        
}; // ClearBgpInstancePerformanceStatisticsRpc


class ClearBgpInstancePerformanceStatisticsRpc::Input : public Entity
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

}; // ClearBgpInstancePerformanceStatisticsRpc::Input

class ClearBgpInstanceRpkiServerAllSerialQueryRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiServerAllSerialQueryRpc();
        ~ClearBgpInstanceRpkiServerAllSerialQueryRpc();

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

        class Input; //type: ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input> input;
        
}; // ClearBgpInstanceRpkiServerAllSerialQueryRpc


class ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input : public Entity
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

}; // ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input

class ClearBgpInstanceRpkiServerAllRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiServerAllRpc();
        ~ClearBgpInstanceRpkiServerAllRpc();

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

        class Input; //type: ClearBgpInstanceRpkiServerAllRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiServerAllRpc::Input> input;
        
}; // ClearBgpInstanceRpkiServerAllRpc


class ClearBgpInstanceRpkiServerAllRpc::Input : public Entity
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

}; // ClearBgpInstanceRpkiServerAllRpc::Input

class ClearBgpInstanceRpkiServerRpkiServerRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiServerRpkiServerRpc();
        ~ClearBgpInstanceRpkiServerRpkiServerRpc();

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

        class Input; //type: ClearBgpInstanceRpkiServerRpkiServerRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiServerRpkiServerRpc::Input> input;
        
}; // ClearBgpInstanceRpkiServerRpkiServerRpc


class ClearBgpInstanceRpkiServerRpkiServerRpc::Input : public Entity
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
        YLeaf rpki_server; //type: string

}; // ClearBgpInstanceRpkiServerRpkiServerRpc::Input

class ClearBgpInstanceRpkiValidationIpv4Rpc : public Entity
{
    public:
        ClearBgpInstanceRpkiValidationIpv4Rpc();
        ~ClearBgpInstanceRpkiValidationIpv4Rpc();

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

        class Input; //type: ClearBgpInstanceRpkiValidationIpv4Rpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiValidationIpv4Rpc::Input> input;
        
}; // ClearBgpInstanceRpkiValidationIpv4Rpc


class ClearBgpInstanceRpkiValidationIpv4Rpc::Input : public Entity
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

}; // ClearBgpInstanceRpkiValidationIpv4Rpc::Input

class ClearBgpInstanceRpkiValidationIpv6Rpc : public Entity
{
    public:
        ClearBgpInstanceRpkiValidationIpv6Rpc();
        ~ClearBgpInstanceRpkiValidationIpv6Rpc();

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

        class Input; //type: ClearBgpInstanceRpkiValidationIpv6Rpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiValidationIpv6Rpc::Input> input;
        
}; // ClearBgpInstanceRpkiValidationIpv6Rpc


class ClearBgpInstanceRpkiValidationIpv6Rpc::Input : public Entity
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

}; // ClearBgpInstanceRpkiValidationIpv6Rpc::Input

class ClearBgpInstanceRpkiValidationRpc : public Entity
{
    public:
        ClearBgpInstanceRpkiValidationRpc();
        ~ClearBgpInstanceRpkiValidationRpc();

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

        class Input; //type: ClearBgpInstanceRpkiValidationRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceRpkiValidationRpc::Input> input;
        
}; // ClearBgpInstanceRpkiValidationRpc


class ClearBgpInstanceRpkiValidationRpc::Input : public Entity
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

}; // ClearBgpInstanceRpkiValidationRpc::Input


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_2_ */

