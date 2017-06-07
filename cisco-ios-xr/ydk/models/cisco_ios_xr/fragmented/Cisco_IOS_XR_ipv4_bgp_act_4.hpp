#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_4_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpInstanceVrfAsGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAsGracefulRpc();
        ~ClearBgpInstanceVrfAsGracefulRpc();

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

        class Input; //type: ClearBgpInstanceVrfAsGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAsGracefulRpc::Input> input;
        
}; // ClearBgpInstanceVrfAsGracefulRpc


class ClearBgpInstanceVrfAsGracefulRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceVrfAsGracefulRpc::Input

class ClearBgpInstanceVrfAsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAsRpc();
        ~ClearBgpInstanceVrfAsRpc();

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

        class Input; //type: ClearBgpInstanceVrfAsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAsRpc::Input> input;
        
}; // ClearBgpInstanceVrfAsRpc


class ClearBgpInstanceVrfAsRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceVrfAsRpc::Input

class ClearBgpInstanceVrfExternalGracefulRpc : public Entity
{
    public:
        ClearBgpInstanceVrfExternalGracefulRpc();
        ~ClearBgpInstanceVrfExternalGracefulRpc();

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

        class Input; //type: ClearBgpInstanceVrfExternalGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfExternalGracefulRpc::Input> input;
        
}; // ClearBgpInstanceVrfExternalGracefulRpc


class ClearBgpInstanceVrfExternalGracefulRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfExternalGracefulRpc::Input

class ClearBgpInstanceVrfExternalRpc : public Entity
{
    public:
        ClearBgpInstanceVrfExternalRpc();
        ~ClearBgpInstanceVrfExternalRpc();

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

        class Input; //type: ClearBgpInstanceVrfExternalRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfExternalRpc::Input> input;
        
}; // ClearBgpInstanceVrfExternalRpc


class ClearBgpInstanceVrfExternalRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfExternalRpc::Input

class ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc


class ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::Input

class ClearBgpInstanceVrfAfiSafiAllSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftInRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAllSoftInRpc


class ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiAllSoftInRpc::Input

class ClearBgpInstanceVrfAfiSafiAllSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAllSoftOutRpc


class ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::Input

class ClearBgpInstanceVrfAfiSafiAllSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAllSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiAllSoftRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAllSoftRpc


class ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiAllSoftRpc::Input

class ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc


class ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::Input

class ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc


class ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::Input

class ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc


class ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::Input

class ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc


class ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::Input

class ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc


class ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::Input

class ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc


class ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::Input

class ClearBgpInstanceVrfAfiSafiAsSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftInRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAsSoftInRpc


class ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceVrfAfiSafiAsSoftInRpc::Input

class ClearBgpInstanceVrfAfiSafiAsSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAsSoftOutRpc


class ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::Input

class ClearBgpInstanceVrfAfiSafiAsSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiAsSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiAsSoftRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiAsSoftRpc


class ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpInstanceVrfAfiSafiAsSoftRpc::Input

class ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc


class ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::Input

class ClearBgpInstanceVrfAfiSafiDampeningRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiDampeningRpc();
        ~ClearBgpInstanceVrfAfiSafiDampeningRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiDampeningRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiDampeningRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiDampeningRpc


class ClearBgpInstanceVrfAfiSafiDampeningRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiDampeningRpc::Input

class ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc


class ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::Input

class ClearBgpInstanceVrfAfiSafiExternalSoftInRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftInRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftInRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiExternalSoftInRpc


class ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::Input

class ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc


class ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::Input

class ClearBgpInstanceVrfAfiSafiExternalSoftRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiExternalSoftRpc();
        ~ClearBgpInstanceVrfAfiSafiExternalSoftRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiExternalSoftRpc


class ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiExternalSoftRpc::Input

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc


class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc


class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::Input

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc


class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::Input

class ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc


class ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input : public Entity
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
        YLeaf regexp_pattern; //type: string

}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::Input

class ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc


class ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input : public Entity
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
        YLeaf route_policy_name; //type: string

}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::Input

class ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc


class ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::Input

class ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc


class ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::Input

class ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc


class ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::Input

class ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc();
        ~ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc


class ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::Input

class ClearBgpInstanceVrfAfiSafiShutdownRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiShutdownRpc();
        ~ClearBgpInstanceVrfAfiSafiShutdownRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiShutdownRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiShutdownRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiShutdownRpc


class ClearBgpInstanceVrfAfiSafiShutdownRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiShutdownRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input

class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc();
        ~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc


class ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string

}; // ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::Input

class ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc


class ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::Input

class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc();
        ~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc();

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

        class Input; //type: ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input> input;
        
}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc


class ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::Input

class ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc();
        ~ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc();

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

        class Input; //type: ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input> input;
        
}; // ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc


class ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::Input

class ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc();
        ~ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc


class ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::Input

class ClearBgpInstanceVrfPeerDropsAllRpc : public Entity
{
    public:
        ClearBgpInstanceVrfPeerDropsAllRpc();
        ~ClearBgpInstanceVrfPeerDropsAllRpc();

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

        class Input; //type: ClearBgpInstanceVrfPeerDropsAllRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfPeerDropsAllRpc::Input> input;
        
}; // ClearBgpInstanceVrfPeerDropsAllRpc


class ClearBgpInstanceVrfPeerDropsAllRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfPeerDropsAllRpc::Input

class ClearBgpInstanceVrfPeerDropsIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfPeerDropsIpAddrRpc();
        ~ClearBgpInstanceVrfPeerDropsIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceVrfPeerDropsIpAddrRpc


class ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfPeerDropsIpAddrRpc::Input

class ClearBgpInstanceVrfPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpInstanceVrfPerformanceStatisticsRpc();
        ~ClearBgpInstanceVrfPerformanceStatisticsRpc();

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

        class Input; //type: ClearBgpInstanceVrfPerformanceStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfPerformanceStatisticsRpc::Input> input;
        
}; // ClearBgpInstanceVrfPerformanceStatisticsRpc


class ClearBgpInstanceVrfPerformanceStatisticsRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfPerformanceStatisticsRpc::Input

class ClearBgpInstanceVrfShutdownRpc : public Entity
{
    public:
        ClearBgpInstanceVrfShutdownRpc();
        ~ClearBgpInstanceVrfShutdownRpc();

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

        class Input; //type: ClearBgpInstanceVrfShutdownRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfShutdownRpc::Input> input;
        
}; // ClearBgpInstanceVrfShutdownRpc


class ClearBgpInstanceVrfShutdownRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfShutdownRpc::Input

class ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc


class ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::Input

class ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc();
        ~ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc


class ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::Input

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc


class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc


class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::Input

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc


class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::Input

class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc


class ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input : public Entity
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

}; // ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::Input

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc


class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc


class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::Input

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc


class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc


class ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

class ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc


class ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string

}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::Input

class ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc();
        ~ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc();

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

        class Input; //type: ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input> input;
        
}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc


class ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string

}; // ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::Input

class ClearBgpAfiSafiDampeningIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningIpv4PrefixRpc();
        ~ClearBgpAfiSafiDampeningIpv4PrefixRpc();

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

        class Input; //type: ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input> input;
        
}; // ClearBgpAfiSafiDampeningIpv4PrefixRpc


class ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input : public Entity
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
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpAfiSafiDampeningIpv4PrefixRpc::Input

class ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc


class ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input : public Entity
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
        YLeaf ipv4_prefix; //type: string

}; // ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::Input

class ClearBgpAfiSafiDampeningIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningIpv6PrefixRpc();
        ~ClearBgpAfiSafiDampeningIpv6PrefixRpc();

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

        class Input; //type: ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input> input;
        
}; // ClearBgpAfiSafiDampeningIpv6PrefixRpc


class ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input : public Entity
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
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpAfiSafiDampeningIpv6PrefixRpc::Input

class ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc


class ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input : public Entity
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
        YLeaf ipv6_prefix; //type: string

}; // ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::Input

class ClearBgpNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpNexthopPerformanceStatisticsRpc();
        ~ClearBgpNexthopPerformanceStatisticsRpc();

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


}; // ClearBgpNexthopPerformanceStatisticsRpc

class ClearBgpNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpNexthopRegistrationIpAddrRpc();
        ~ClearBgpNexthopRegistrationIpAddrRpc();

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

        class Input; //type: ClearBgpNexthopRegistrationIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpNexthopRegistrationIpAddrRpc::Input> input;
        
}; // ClearBgpNexthopRegistrationIpAddrRpc


class ClearBgpNexthopRegistrationIpAddrRpc::Input : public Entity
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

        YLeaf ip_addr; //type: string

}; // ClearBgpNexthopRegistrationIpAddrRpc::Input

class ClearBgpPeerDropsAllRpc : public Entity
{
    public:
        ClearBgpPeerDropsAllRpc();
        ~ClearBgpPeerDropsAllRpc();

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


}; // ClearBgpPeerDropsAllRpc

class ClearBgpPeerDropsIpAddrRpc : public Entity
{
    public:
        ClearBgpPeerDropsIpAddrRpc();
        ~ClearBgpPeerDropsIpAddrRpc();

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

        class Input; //type: ClearBgpPeerDropsIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpPeerDropsIpAddrRpc::Input> input;
        
}; // ClearBgpPeerDropsIpAddrRpc


class ClearBgpPeerDropsIpAddrRpc::Input : public Entity
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

        YLeaf ip_addr; //type: string

}; // ClearBgpPeerDropsIpAddrRpc::Input

class ClearBgpPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpPerformanceStatisticsRpc();
        ~ClearBgpPerformanceStatisticsRpc();

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


}; // ClearBgpPerformanceStatisticsRpc

class ClearBgpRpkiServerAllSerialQueryRpc : public Entity
{
    public:
        ClearBgpRpkiServerAllSerialQueryRpc();
        ~ClearBgpRpkiServerAllSerialQueryRpc();

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


}; // ClearBgpRpkiServerAllSerialQueryRpc

class ClearBgpRpkiServerAllRpc : public Entity
{
    public:
        ClearBgpRpkiServerAllRpc();
        ~ClearBgpRpkiServerAllRpc();

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


}; // ClearBgpRpkiServerAllRpc

class ClearBgpRpkiServerRpkiServerRpc : public Entity
{
    public:
        ClearBgpRpkiServerRpkiServerRpc();
        ~ClearBgpRpkiServerRpkiServerRpc();

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

        class Input; //type: ClearBgpRpkiServerRpkiServerRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpRpkiServerRpkiServerRpc::Input> input;
        
}; // ClearBgpRpkiServerRpkiServerRpc


class ClearBgpRpkiServerRpkiServerRpc::Input : public Entity
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

        YLeaf rpki_server; //type: string

}; // ClearBgpRpkiServerRpkiServerRpc::Input

class ClearBgpRpkiValidationIpv4Rpc : public Entity
{
    public:
        ClearBgpRpkiValidationIpv4Rpc();
        ~ClearBgpRpkiValidationIpv4Rpc();

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


}; // ClearBgpRpkiValidationIpv4Rpc


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_4_ */

