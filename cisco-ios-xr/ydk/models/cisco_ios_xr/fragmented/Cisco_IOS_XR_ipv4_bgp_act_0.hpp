#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_0_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpAllGracefulRpc : public Entity
{
    public:
        ClearBgpAllGracefulRpc();
        ~ClearBgpAllGracefulRpc();

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


}; // ClearBgpAllGracefulRpc

class ClearBgpAllRpc : public Entity
{
    public:
        ClearBgpAllRpc();
        ~ClearBgpAllRpc();

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


}; // ClearBgpAllRpc

class ClearBgpIpAddrGracefulRpc : public Entity
{
    public:
        ClearBgpIpAddrGracefulRpc();
        ~ClearBgpIpAddrGracefulRpc();

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

        class Input; //type: ClearBgpIpAddrGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpIpAddrGracefulRpc::Input> input;
        
}; // ClearBgpIpAddrGracefulRpc


class ClearBgpIpAddrGracefulRpc::Input : public Entity
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

}; // ClearBgpIpAddrGracefulRpc::Input

class ClearBgpIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpIpAddrLongLivedStaleRpc();
        ~ClearBgpIpAddrLongLivedStaleRpc();

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

        class Input; //type: ClearBgpIpAddrLongLivedStaleRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpIpAddrLongLivedStaleRpc::Input> input;
        
}; // ClearBgpIpAddrLongLivedStaleRpc


class ClearBgpIpAddrLongLivedStaleRpc::Input : public Entity
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

}; // ClearBgpIpAddrLongLivedStaleRpc::Input

class ClearBgpIpAddrRpc : public Entity
{
    public:
        ClearBgpIpAddrRpc();
        ~ClearBgpIpAddrRpc();

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

        class Input; //type: ClearBgpIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpIpAddrRpc::Input> input;
        
}; // ClearBgpIpAddrRpc


class ClearBgpIpAddrRpc::Input : public Entity
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

}; // ClearBgpIpAddrRpc::Input

class ClearBgpAfiSafiAllSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiAllSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpAfiSafiAllSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAllSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpAfiSafiAllSoftInPrefixFilterRpc


class ClearBgpAfiSafiAllSoftInPrefixFilterRpc::Input : public Entity
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

}; // ClearBgpAfiSafiAllSoftInPrefixFilterRpc::Input

class ClearBgpAfiSafiAllSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftInRpc();
        ~ClearBgpAfiSafiAllSoftInRpc();

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

        class Input; //type: ClearBgpAfiSafiAllSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAllSoftInRpc::Input> input;
        
}; // ClearBgpAfiSafiAllSoftInRpc


class ClearBgpAfiSafiAllSoftInRpc::Input : public Entity
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

}; // ClearBgpAfiSafiAllSoftInRpc::Input

class ClearBgpAfiSafiAllSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftOutRpc();
        ~ClearBgpAfiSafiAllSoftOutRpc();

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

        class Input; //type: ClearBgpAfiSafiAllSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAllSoftOutRpc::Input> input;
        
}; // ClearBgpAfiSafiAllSoftOutRpc


class ClearBgpAfiSafiAllSoftOutRpc::Input : public Entity
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

}; // ClearBgpAfiSafiAllSoftOutRpc::Input

class ClearBgpAfiSafiAllSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiAllSoftRpc();
        ~ClearBgpAfiSafiAllSoftRpc();

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

        class Input; //type: ClearBgpAfiSafiAllSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAllSoftRpc::Input> input;
        
}; // ClearBgpAfiSafiAllSoftRpc


class ClearBgpAfiSafiAllSoftRpc::Input : public Entity
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

}; // ClearBgpAfiSafiAllSoftRpc::Input

class ClearBgpAfiSafiIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrLongLivedStaleRpc();
        ~ClearBgpAfiSafiIpAddrLongLivedStaleRpc();

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

        class Input; //type: ClearBgpAfiSafiIpAddrLongLivedStaleRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiIpAddrLongLivedStaleRpc::Input> input;
        
}; // ClearBgpAfiSafiIpAddrLongLivedStaleRpc


class ClearBgpAfiSafiIpAddrLongLivedStaleRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiIpAddrLongLivedStaleRpc::Input

class ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc


class ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::Input

class ClearBgpAfiSafiIpAddrSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftInRpc();
        ~ClearBgpAfiSafiIpAddrSoftInRpc();

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

        class Input; //type: ClearBgpAfiSafiIpAddrSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiIpAddrSoftInRpc::Input> input;
        
}; // ClearBgpAfiSafiIpAddrSoftInRpc


class ClearBgpAfiSafiIpAddrSoftInRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiIpAddrSoftInRpc::Input

class ClearBgpAfiSafiIpAddrSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftOutRpc();
        ~ClearBgpAfiSafiIpAddrSoftOutRpc();

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

        class Input; //type: ClearBgpAfiSafiIpAddrSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiIpAddrSoftOutRpc::Input> input;
        
}; // ClearBgpAfiSafiIpAddrSoftOutRpc


class ClearBgpAfiSafiIpAddrSoftOutRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiIpAddrSoftOutRpc::Input

class ClearBgpAfiSafiIpAddrSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiIpAddrSoftRpc();
        ~ClearBgpAfiSafiIpAddrSoftRpc();

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

        class Input; //type: ClearBgpAfiSafiIpAddrSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiIpAddrSoftRpc::Input> input;
        
}; // ClearBgpAfiSafiIpAddrSoftRpc


class ClearBgpAfiSafiIpAddrSoftRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiIpAddrSoftRpc::Input

class ClearBgpAfiSafiAsSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiAsSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpAfiSafiAsSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAsSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpAfiSafiAsSoftInPrefixFilterRpc


class ClearBgpAfiSafiAsSoftInPrefixFilterRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpAfiSafiAsSoftInPrefixFilterRpc::Input

class ClearBgpAfiSafiAsSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftInRpc();
        ~ClearBgpAfiSafiAsSoftInRpc();

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

        class Input; //type: ClearBgpAfiSafiAsSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAsSoftInRpc::Input> input;
        
}; // ClearBgpAfiSafiAsSoftInRpc


class ClearBgpAfiSafiAsSoftInRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpAfiSafiAsSoftInRpc::Input

class ClearBgpAfiSafiAsSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftOutRpc();
        ~ClearBgpAfiSafiAsSoftOutRpc();

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

        class Input; //type: ClearBgpAfiSafiAsSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAsSoftOutRpc::Input> input;
        
}; // ClearBgpAfiSafiAsSoftOutRpc


class ClearBgpAfiSafiAsSoftOutRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpAfiSafiAsSoftOutRpc::Input

class ClearBgpAfiSafiAsSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiAsSoftRpc();
        ~ClearBgpAfiSafiAsSoftRpc();

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

        class Input; //type: ClearBgpAfiSafiAsSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiAsSoftRpc::Input> input;
        
}; // ClearBgpAfiSafiAsSoftRpc


class ClearBgpAfiSafiAsSoftRpc::Input : public Entity
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpAfiSafiAsSoftRpc::Input

class ClearBgpAfiSafiDampeningIpPrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningIpPrefixRpc();
        ~ClearBgpAfiSafiDampeningIpPrefixRpc();

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

        class Input; //type: ClearBgpAfiSafiDampeningIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiDampeningIpPrefixRpc::Input> input;
        
}; // ClearBgpAfiSafiDampeningIpPrefixRpc


class ClearBgpAfiSafiDampeningIpPrefixRpc::Input : public Entity
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
        YLeaf ip_prefix; //type: string

}; // ClearBgpAfiSafiDampeningIpPrefixRpc::Input

class ClearBgpAfiSafiDampeningRpc : public Entity
{
    public:
        ClearBgpAfiSafiDampeningRpc();
        ~ClearBgpAfiSafiDampeningRpc();

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

        class Input; //type: ClearBgpAfiSafiDampeningRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiDampeningRpc::Input> input;
        
}; // ClearBgpAfiSafiDampeningRpc


class ClearBgpAfiSafiDampeningRpc::Input : public Entity
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

}; // ClearBgpAfiSafiDampeningRpc::Input

class ClearBgpAfiSafiExternalSoftInPrefixFilterRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftInPrefixFilterRpc();
        ~ClearBgpAfiSafiExternalSoftInPrefixFilterRpc();

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

        class Input; //type: ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::Input> input;
        
}; // ClearBgpAfiSafiExternalSoftInPrefixFilterRpc


class ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::Input : public Entity
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

}; // ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::Input

class ClearBgpAfiSafiExternalSoftInRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftInRpc();
        ~ClearBgpAfiSafiExternalSoftInRpc();

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

        class Input; //type: ClearBgpAfiSafiExternalSoftInRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiExternalSoftInRpc::Input> input;
        
}; // ClearBgpAfiSafiExternalSoftInRpc


class ClearBgpAfiSafiExternalSoftInRpc::Input : public Entity
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

}; // ClearBgpAfiSafiExternalSoftInRpc::Input

class ClearBgpAfiSafiExternalSoftOutRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftOutRpc();
        ~ClearBgpAfiSafiExternalSoftOutRpc();

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

        class Input; //type: ClearBgpAfiSafiExternalSoftOutRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiExternalSoftOutRpc::Input> input;
        
}; // ClearBgpAfiSafiExternalSoftOutRpc


class ClearBgpAfiSafiExternalSoftOutRpc::Input : public Entity
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

}; // ClearBgpAfiSafiExternalSoftOutRpc::Input

class ClearBgpAfiSafiExternalSoftRpc : public Entity
{
    public:
        ClearBgpAfiSafiExternalSoftRpc();
        ~ClearBgpAfiSafiExternalSoftRpc();

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

        class Input; //type: ClearBgpAfiSafiExternalSoftRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiExternalSoftRpc::Input> input;
        
}; // ClearBgpAfiSafiExternalSoftRpc


class ClearBgpAfiSafiExternalSoftRpc::Input : public Entity
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

}; // ClearBgpAfiSafiExternalSoftRpc::Input

class ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc


class ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input

class ClearBgpAfiSafiFlapStatisticsIpAddrRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpAddrRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpAddrRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsIpAddrRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsIpAddrRpc


class ClearBgpAfiSafiFlapStatisticsIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiFlapStatisticsIpAddrRpc::Input

class ClearBgpAfiSafiFlapStatisticsIpPrefixRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsIpPrefixRpc();
        ~ClearBgpAfiSafiFlapStatisticsIpPrefixRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsIpPrefixRpc


class ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::Input : public Entity
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
        YLeaf ip_prefix; //type: string

}; // ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::Input

class ClearBgpAfiSafiFlapStatisticsRegexpRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsRegexpRpc();
        ~ClearBgpAfiSafiFlapStatisticsRegexpRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsRegexpRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsRegexpRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsRegexpRpc


class ClearBgpAfiSafiFlapStatisticsRegexpRpc::Input : public Entity
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
        YLeaf regexp_pattern; //type: string

}; // ClearBgpAfiSafiFlapStatisticsRegexpRpc::Input

class ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc();
        ~ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc


class ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::Input : public Entity
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
        YLeaf route_policy_name; //type: string

}; // ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::Input

class ClearBgpAfiSafiFlapStatisticsRpc : public Entity
{
    public:
        ClearBgpAfiSafiFlapStatisticsRpc();
        ~ClearBgpAfiSafiFlapStatisticsRpc();

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

        class Input; //type: ClearBgpAfiSafiFlapStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiFlapStatisticsRpc::Input> input;
        
}; // ClearBgpAfiSafiFlapStatisticsRpc


class ClearBgpAfiSafiFlapStatisticsRpc::Input : public Entity
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

}; // ClearBgpAfiSafiFlapStatisticsRpc::Input

class ClearBgpAfiSafiNexthopPerformanceStatisticsRpc : public Entity
{
    public:
        ClearBgpAfiSafiNexthopPerformanceStatisticsRpc();
        ~ClearBgpAfiSafiNexthopPerformanceStatisticsRpc();

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

        class Input; //type: ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::Input> input;
        
}; // ClearBgpAfiSafiNexthopPerformanceStatisticsRpc


class ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::Input : public Entity
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

}; // ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::Input

class ClearBgpAfiSafiNexthopRegistrationIpAddrRpc : public Entity
{
    public:
        ClearBgpAfiSafiNexthopRegistrationIpAddrRpc();
        ~ClearBgpAfiSafiNexthopRegistrationIpAddrRpc();

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

        class Input; //type: ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::Input> input;
        
}; // ClearBgpAfiSafiNexthopRegistrationIpAddrRpc


class ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::Input

class ClearBgpAfiSafiSelfOriginatedRpc : public Entity
{
    public:
        ClearBgpAfiSafiSelfOriginatedRpc();
        ~ClearBgpAfiSafiSelfOriginatedRpc();

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

        class Input; //type: ClearBgpAfiSafiSelfOriginatedRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiSelfOriginatedRpc::Input> input;
        
}; // ClearBgpAfiSafiSelfOriginatedRpc


class ClearBgpAfiSafiSelfOriginatedRpc::Input : public Entity
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

}; // ClearBgpAfiSafiSelfOriginatedRpc::Input

class ClearBgpAfiSafiShutdownRpc : public Entity
{
    public:
        ClearBgpAfiSafiShutdownRpc();
        ~ClearBgpAfiSafiShutdownRpc();

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

        class Input; //type: ClearBgpAfiSafiShutdownRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiShutdownRpc::Input> input;
        
}; // ClearBgpAfiSafiShutdownRpc


class ClearBgpAfiSafiShutdownRpc::Input : public Entity
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

}; // ClearBgpAfiSafiShutdownRpc::Input

class ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc


class ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input : public Entity
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

}; // ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input

class ClearBgpAfiSafiUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqAddressFamilyRpc();
        ~ClearBgpAfiSafiUpdateOutqAddressFamilyRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqAddressFamilyRpc


class ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::Input : public Entity
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

}; // ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::Input

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc


class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc


class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc


class ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input

class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc


class ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::Input

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc


class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc


class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc


class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc


class ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

class ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc


class ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input : public Entity
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
        YLeaf update_group; //type: string

}; // ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input

class ClearBgpAfiSafiUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpAfiSafiUpdateOutqUpdateGroupRpc();
        ~ClearBgpAfiSafiUpdateOutqUpdateGroupRpc();

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

        class Input; //type: ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::Input> input;
        
}; // ClearBgpAfiSafiUpdateOutqUpdateGroupRpc


class ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::Input : public Entity
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
        YLeaf update_group; //type: string

}; // ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::Input

class ClearBgpAsGracefulRpc : public Entity
{
    public:
        ClearBgpAsGracefulRpc();
        ~ClearBgpAsGracefulRpc();

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

        class Input; //type: ClearBgpAsGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAsGracefulRpc::Input> input;
        
}; // ClearBgpAsGracefulRpc


class ClearBgpAsGracefulRpc::Input : public Entity
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

        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpAsGracefulRpc::Input

class ClearBgpAsRpc : public Entity
{
    public:
        ClearBgpAsRpc();
        ~ClearBgpAsRpc();

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

        class Input; //type: ClearBgpAsRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpAsRpc::Input> input;
        
}; // ClearBgpAsRpc


class ClearBgpAsRpc::Input : public Entity
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

        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpAsRpc::Input

class ClearBgpBestpathIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpBestpathIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpBestpathIpAddrIpNetmaskRpc


class ClearBgpBestpathIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf ip_netmask; //type: string

}; // ClearBgpBestpathIpAddrIpNetmaskRpc::Input

class ClearBgpBestpathIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathIpAddrRpc();
        ~ClearBgpBestpathIpAddrRpc();

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

        class Input; //type: ClearBgpBestpathIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathIpAddrRpc::Input> input;
        
}; // ClearBgpBestpathIpAddrRpc


class ClearBgpBestpathIpAddrRpc::Input : public Entity
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

}; // ClearBgpBestpathIpAddrRpc::Input

class ClearBgpBestpathIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathIpPrefixRpc();
        ~ClearBgpBestpathIpPrefixRpc();

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

        class Input; //type: ClearBgpBestpathIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathIpPrefixRpc::Input> input;
        
}; // ClearBgpBestpathIpPrefixRpc


class ClearBgpBestpathIpPrefixRpc::Input : public Entity
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

        YLeaf ip_prefix; //type: string

}; // ClearBgpBestpathIpPrefixRpc::Input

class ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc


class ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string

}; // ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::Input

class ClearBgpBestpathAfiSafiIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpAddrRpc();
        ~ClearBgpBestpathAfiSafiIpAddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpAddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpAddrRpc


class ClearBgpBestpathAfiSafiIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpBestpathAfiSafiIpAddrRpc::Input

class ClearBgpBestpathAfiSafiIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpPrefixRpc();
        ~ClearBgpBestpathAfiSafiIpPrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpPrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpPrefixRpc


class ClearBgpBestpathAfiSafiIpPrefixRpc::Input : public Entity
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
        YLeaf ip_prefix; //type: string

}; // ClearBgpBestpathAfiSafiIpPrefixRpc::Input

class ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc


class ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string

}; // ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input

class ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc


class ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::Input

class ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc();
        ~ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc


class ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::Input : public Entity
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
        YLeaf ip_prefix; //type: string

}; // ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::Input

class ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc();
        ~ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc


class ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string
        YLeaf ip_netmask; //type: string

}; // ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input

class ClearBgpBestpathAfiSafiRdIpAddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpAddrRpc();
        ~ClearBgpBestpathAfiSafiRdIpAddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpAddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpAddrRpc


class ClearBgpBestpathAfiSafiRdIpAddrRpc::Input : public Entity
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
        YLeaf ip_addr; //type: string

}; // ClearBgpBestpathAfiSafiRdIpAddrRpc::Input

class ClearBgpBestpathAfiSafiRdIpPrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpPrefixRpc();
        ~ClearBgpBestpathAfiSafiRdIpPrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpPrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpPrefixRpc


class ClearBgpBestpathAfiSafiRdIpPrefixRpc::Input : public Entity
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
        YLeaf ip_prefix; //type: string

}; // ClearBgpBestpathAfiSafiRdIpPrefixRpc::Input

class ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc


class ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input : public Entity
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
        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input

class ClearBgpBestpathAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4AddrRpc();
        ~ClearBgpBestpathAfiSafiIpv4AddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpv4AddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpv4AddrRpc


class ClearBgpBestpathAfiSafiIpv4AddrRpc::Input : public Entity
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
        YLeaf ipv4_addr; //type: string

}; // ClearBgpBestpathAfiSafiIpv4AddrRpc::Input

class ClearBgpBestpathAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4PrefixRpc();
        ~ClearBgpBestpathAfiSafiIpv4PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpv4PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpv4PrefixRpc


class ClearBgpBestpathAfiSafiIpv4PrefixRpc::Input : public Entity
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

}; // ClearBgpBestpathAfiSafiIpv4PrefixRpc::Input

class ClearBgpBestpathAfiSafiRdIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdIpv4AddrRpc();
        ~ClearBgpBestpathAfiSafiRdIpv4AddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdIpv4AddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdIpv4AddrRpc


class ClearBgpBestpathAfiSafiRdIpv4AddrRpc::Input : public Entity
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

}; // ClearBgpBestpathAfiSafiRdIpv4AddrRpc::Input

class ClearBgpBestpathAfiSafiVrfIpv4AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfIpv4AddrRpc();
        ~ClearBgpBestpathAfiSafiVrfIpv4AddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfIpv4AddrRpc


class ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::Input : public Entity
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

}; // ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::Input

class ClearBgpBestpathAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiNetworkRpc();
        ~ClearBgpBestpathAfiSafiNetworkRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiNetworkRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiNetworkRpc


class ClearBgpBestpathAfiSafiNetworkRpc::Input : public Entity
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
        YLeaf network; //type: string

}; // ClearBgpBestpathAfiSafiNetworkRpc::Input

class ClearBgpBestpathAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdNetworkRpc();
        ~ClearBgpBestpathAfiSafiRdNetworkRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdNetworkRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdNetworkRpc


class ClearBgpBestpathAfiSafiRdNetworkRpc::Input : public Entity
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
        YLeaf network; //type: string

}; // ClearBgpBestpathAfiSafiRdNetworkRpc::Input

class ClearBgpBestpathAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfNetworkRpc();
        ~ClearBgpBestpathAfiSafiVrfNetworkRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfNetworkRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfNetworkRpc


class ClearBgpBestpathAfiSafiVrfNetworkRpc::Input : public Entity
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
        YLeaf network; //type: string

}; // ClearBgpBestpathAfiSafiVrfNetworkRpc::Input

class ClearBgpBestpathAfiSafiRtConstraintNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRtConstraintNetworkRpc();
        ~ClearBgpBestpathAfiSafiRtConstraintNetworkRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRtConstraintNetworkRpc


class ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::Input : public Entity
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
        YLeaf rt_constraint_network; //type: string

}; // ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::Input

class ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc();
        ~ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc


class ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::Input : public Entity
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
        YLeaf ipv4_tunnel_network; //type: string

}; // ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::Input

class ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc


class ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input : public Entity
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
        YLeaf ipv6_addr; //type: string
        YLeaf ipv6_netmask; //type: string

}; // ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpBestpathAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv6AddrRpc();
        ~ClearBgpBestpathAfiSafiIpv6AddrRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpv6AddrRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpv6AddrRpc


class ClearBgpBestpathAfiSafiIpv6AddrRpc::Input : public Entity
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
        YLeaf ipv6_addr; //type: string

}; // ClearBgpBestpathAfiSafiIpv6AddrRpc::Input

class ClearBgpBestpathAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiIpv6PrefixRpc();
        ~ClearBgpBestpathAfiSafiIpv6PrefixRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiIpv6PrefixRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiIpv6PrefixRpc


class ClearBgpBestpathAfiSafiIpv6PrefixRpc::Input : public Entity
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

}; // ClearBgpBestpathAfiSafiIpv6PrefixRpc::Input

class ClearBgpBestpathAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRdRpc();
        ~ClearBgpBestpathAfiSafiRdRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRdRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRdRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRdRpc


class ClearBgpBestpathAfiSafiRdRpc::Input : public Entity
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

}; // ClearBgpBestpathAfiSafiRdRpc::Input

class ClearBgpBestpathAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiVrfRpc();
        ~ClearBgpBestpathAfiSafiVrfRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiVrfRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiVrfRpc


class ClearBgpBestpathAfiSafiVrfRpc::Input : public Entity
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

}; // ClearBgpBestpathAfiSafiVrfRpc::Input

class ClearBgpBestpathAfiSafiRpc : public Entity
{
    public:
        ClearBgpBestpathAfiSafiRpc();
        ~ClearBgpBestpathAfiSafiRpc();

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

        class Input; //type: ClearBgpBestpathAfiSafiRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpBestpathAfiSafiRpc::Input> input;
        
}; // ClearBgpBestpathAfiSafiRpc


class ClearBgpBestpathAfiSafiRpc::Input : public Entity
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

}; // ClearBgpBestpathAfiSafiRpc::Input

class InstanceNameEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class Vpnv6SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf unicast;

};

class AfiEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf l2vpn;
        static const Enum::YLeaf link_state;
        static const Enum::YLeaf vpnv4;
        static const Enum::YLeaf vpnv6;

};

class VrfNameEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class Ipv4SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf labeled_unicast;
        static const Enum::YLeaf mdt;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf mvpn;
        static const Enum::YLeaf rt_filter;
        static const Enum::YLeaf sr_policy;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf unicast;

};

class AfiSafiTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf all_alll;
        static const Enum::YLeaf all_evpn;
        static const Enum::YLeaf all_flowspec;
        static const Enum::YLeaf all_labeled_unicast;
        static const Enum::YLeaf all_mdt;
        static const Enum::YLeaf all_mspw;
        static const Enum::YLeaf all_multicast;
        static const Enum::YLeaf all_mvpn;
        static const Enum::YLeaf all_rt_filter;
        static const Enum::YLeaf all_sr_policy;
        static const Enum::YLeaf all_tunnel;
        static const Enum::YLeaf all_unicast;
        static const Enum::YLeaf all_vpls;
        static const Enum::YLeaf all_vpws;
        static const Enum::YLeaf ipv4_all;
        static const Enum::YLeaf ipv4_flowspec;
        static const Enum::YLeaf ipv4_labeled_unicast;
        static const Enum::YLeaf ipv4_mdt;
        static const Enum::YLeaf ipv4_multicast;
        static const Enum::YLeaf ipv4_mvpn;
        static const Enum::YLeaf ipv4_rt_filter;
        static const Enum::YLeaf ipv4_sr_policy;
        static const Enum::YLeaf ipv4_tunnel;
        static const Enum::YLeaf ipv4_unicast;
        static const Enum::YLeaf ipv6_all;
        static const Enum::YLeaf ipv6_flowspec;
        static const Enum::YLeaf ipv6_labeled_unicast;
        static const Enum::YLeaf ipv6_multicast;
        static const Enum::YLeaf ipv6_mvpn;
        static const Enum::YLeaf ipv6_sr_policy;
        static const Enum::YLeaf ipv6_unicast;
        static const Enum::YLeaf l2vpn_evpn;
        static const Enum::YLeaf l2vpn_mspw;
        static const Enum::YLeaf l2vpn_vpls;
        static const Enum::YLeaf l2vpn_vpws;
        static const Enum::YLeaf link_state;
        static const Enum::YLeaf vpnv4_flowspec;
        static const Enum::YLeaf vpnv4_multicast;
        static const Enum::YLeaf vpnv4_unicast;
        static const Enum::YLeaf vpnv6_flowspec;
        static const Enum::YLeaf vpnv6_multicast;
        static const Enum::YLeaf vpnv6_unicast;

};

class Vpnv4SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf unicast;

};

class Ipv6SafiEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf labeled_unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf mvpn;
        static const Enum::YLeaf sr_policy;
        static const Enum::YLeaf unicast;

};

class L2VpnSafiEnum : public Enum
{
    public:
        static const Enum::YLeaf evpn;
        static const Enum::YLeaf mspw;
        static const Enum::YLeaf vpls;
        static const Enum::YLeaf vpws;

};

class LinkStateSafiEnum : public Enum
{
    public:
        static const Enum::YLeaf link_state;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_0_ */

