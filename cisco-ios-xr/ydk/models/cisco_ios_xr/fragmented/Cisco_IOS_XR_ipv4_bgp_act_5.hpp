#ifndef _CISCO_IOS_XR_IPV4_BGP_ACT_5_
#define _CISCO_IOS_XR_IPV4_BGP_ACT_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

class ClearBgpRpkiValidationIpv6Rpc : public Entity
{
    public:
        ClearBgpRpkiValidationIpv6Rpc();
        ~ClearBgpRpkiValidationIpv6Rpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // ClearBgpRpkiValidationIpv6Rpc

class ClearBgpRpkiValidationRpc : public Entity
{
    public:
        ClearBgpRpkiValidationRpc();
        ~ClearBgpRpkiValidationRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // ClearBgpRpkiValidationRpc

class ClearBgpShutdownRpc : public Entity
{
    public:
        ClearBgpShutdownRpc();
        ~ClearBgpShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // ClearBgpShutdownRpc

class ClearBgpUpdateOutqAddressFamilyUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqAddressFamilyUpdateParentRpc();
        ~ClearBgpUpdateOutqAddressFamilyUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // ClearBgpUpdateOutqAddressFamilyUpdateParentRpc

class ClearBgpUpdateOutqAddressFamilyRpc : public Entity
{
    public:
        ClearBgpUpdateOutqAddressFamilyRpc();
        ~ClearBgpUpdateOutqAddressFamilyRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // ClearBgpUpdateOutqAddressFamilyRpc

class ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input> input;
        
}; // ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc


class ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input : public Entity
{
    public:
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

}; // ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input

class ClearBgpUpdateOutqNeighborIpAddrRefreshRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrRefreshRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrRefreshRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input> input;
        
}; // ClearBgpUpdateOutqNeighborIpAddrRefreshRpc


class ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input : public Entity
{
    public:
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

}; // ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input

class ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input> input;
        
}; // ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc


class ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input : public Entity
{
    public:
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

}; // ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input

class ClearBgpUpdateOutqNeighborIpAddrRpc : public Entity
{
    public:
        ClearBgpUpdateOutqNeighborIpAddrRpc();
        ~ClearBgpUpdateOutqNeighborIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqNeighborIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqNeighborIpAddrRpc::Input> input;
        
}; // ClearBgpUpdateOutqNeighborIpAddrRpc


class ClearBgpUpdateOutqNeighborIpAddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpUpdateOutqNeighborIpAddrRpc::Input

class ClearBgpUpdateOutqProcessRpc : public Entity
{
    public:
        ClearBgpUpdateOutqProcessRpc();
        ~ClearBgpUpdateOutqProcessRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // ClearBgpUpdateOutqProcessRpc

class ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc


class ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input

class ClearBgpUpdateOutqUpdateGroupSubGroupRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input> input;
        
}; // ClearBgpUpdateOutqUpdateGroupSubGroupRpc


class ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group; //type: string
        YLeaf sub_group; //type: string

}; // ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input

class ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc


class ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input

class ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();
        ~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input> input;
        
}; // ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc


class ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group; //type: string
        YLeaf refresh_sub_group; //type: string

}; // ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input

class ClearBgpUpdateOutqUpdateGroupUpdateParentRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupUpdateParentRpc();
        ~ClearBgpUpdateOutqUpdateGroupUpdateParentRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input> input;
        
}; // ClearBgpUpdateOutqUpdateGroupUpdateParentRpc


class ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group; //type: string

}; // ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input

class ClearBgpUpdateOutqUpdateGroupRpc : public Entity
{
    public:
        ClearBgpUpdateOutqUpdateGroupRpc();
        ~ClearBgpUpdateOutqUpdateGroupRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpUpdateOutqUpdateGroupRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpUpdateOutqUpdateGroupRpc::Input> input;
        
}; // ClearBgpUpdateOutqUpdateGroupRpc


class ClearBgpUpdateOutqUpdateGroupRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group; //type: string

}; // ClearBgpUpdateOutqUpdateGroupRpc::Input

class ClearBgpVersionIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionIpAddrIpNetmaskRpc();
        ~ClearBgpVersionIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpVersionIpAddrIpNetmaskRpc


class ClearBgpVersionIpAddrIpNetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionIpAddrIpNetmaskRpc::Input

class ClearBgpVersionIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionIpAddrRpc();
        ~ClearBgpVersionIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionIpAddrRpc::Input> input;
        
}; // ClearBgpVersionIpAddrRpc


class ClearBgpVersionIpAddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionIpAddrRpc::Input

class ClearBgpVersionIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionIpPrefixRpc();
        ~ClearBgpVersionIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionIpPrefixRpc::Input> input;
        
}; // ClearBgpVersionIpPrefixRpc


class ClearBgpVersionIpPrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionIpPrefixRpc::Input

class ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc();
        ~ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc


class ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input

class ClearBgpVersionAfiSafiIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpAddrRpc();
        ~ClearBgpVersionAfiSafiIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpAddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpAddrRpc


class ClearBgpVersionAfiSafiIpAddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpAddrRpc::Input

class ClearBgpVersionAfiSafiIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpPrefixRpc();
        ~ClearBgpVersionAfiSafiIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpPrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpPrefixRpc


class ClearBgpVersionAfiSafiIpPrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpPrefixRpc::Input

class ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc


class ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input

class ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc


class ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input

class ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc


class ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input

class ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc();
        ~ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc


class ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input

class ClearBgpVersionAfiSafiRdIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpAddrRpc();
        ~ClearBgpVersionAfiSafiRdIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpAddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpAddrRpc


class ClearBgpVersionAfiSafiRdIpAddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpAddrRpc::Input

class ClearBgpVersionAfiSafiRdIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpPrefixRpc();
        ~ClearBgpVersionAfiSafiRdIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpPrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpPrefixRpc


class ClearBgpVersionAfiSafiRdIpPrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpPrefixRpc::Input

class ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc


class ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input

class ClearBgpVersionAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4AddrRpc();
        ~ClearBgpVersionAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpv4AddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpv4AddrRpc


class ClearBgpVersionAfiSafiIpv4AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpv4AddrRpc::Input

class ClearBgpVersionAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpv4PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpv4PrefixRpc


class ClearBgpVersionAfiSafiIpv4PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpv4PrefixRpc::Input

class ClearBgpVersionAfiSafiRdIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv4AddrRpc();
        ~ClearBgpVersionAfiSafiRdIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpv4AddrRpc


class ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input

class ClearBgpVersionAfiSafiVrfIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv4AddrRpc();
        ~ClearBgpVersionAfiSafiVrfIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfIpv4AddrRpc


class ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input

class ClearBgpVersionAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiNetworkRpc();
        ~ClearBgpVersionAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiNetworkRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiNetworkRpc


class ClearBgpVersionAfiSafiNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiNetworkRpc::Input

class ClearBgpVersionAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdNetworkRpc();
        ~ClearBgpVersionAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdNetworkRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdNetworkRpc


class ClearBgpVersionAfiSafiRdNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdNetworkRpc::Input

class ClearBgpVersionAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfNetworkRpc();
        ~ClearBgpVersionAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfNetworkRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfNetworkRpc


class ClearBgpVersionAfiSafiVrfNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfNetworkRpc::Input

class ClearBgpVersionAfiSafiRtConstraintNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRtConstraintNetworkRpc();
        ~ClearBgpVersionAfiSafiRtConstraintNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRtConstraintNetworkRpc


class ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input

class ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc();
        ~ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc


class ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input

class ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc


class ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpVersionAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv6AddrRpc();
        ~ClearBgpVersionAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpv6AddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpv6AddrRpc


class ClearBgpVersionAfiSafiIpv6AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpv6AddrRpc::Input

class ClearBgpVersionAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiIpv6PrefixRpc();
        ~ClearBgpVersionAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiIpv6PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiIpv6PrefixRpc


class ClearBgpVersionAfiSafiIpv6PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiIpv6PrefixRpc::Input

class ClearBgpVersionAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdRpc();
        ~ClearBgpVersionAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdRpc


class ClearBgpVersionAfiSafiRdRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdRpc::Input

class ClearBgpVersionAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfRpc();
        ~ClearBgpVersionAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfRpc


class ClearBgpVersionAfiSafiVrfRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfRpc::Input

class ClearBgpVersionAfiSafiRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRpc();
        ~ClearBgpVersionAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRpc


class ClearBgpVersionAfiSafiRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRpc::Input

class ClearBgpVersionAfiSafiSrPolicyPrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiSrPolicyPrefixRpc();
        ~ClearBgpVersionAfiSafiSrPolicyPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiSrPolicyPrefixRpc


class ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input

class ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc


class ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input

class ClearBgpVersionAfiSafiRdIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiRdIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpv4PrefixRpc


class ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input

class ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc


class ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input

class ClearBgpVersionAfiSafiVrfIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv4PrefixRpc();
        ~ClearBgpVersionAfiSafiVrfIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfIpv4PrefixRpc


class ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input

class ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc


class ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input

class ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc


class ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input

class ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc


class ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpVersionAfiSafiRdIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv6AddrRpc();
        ~ClearBgpVersionAfiSafiRdIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpv6AddrRpc


class ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input

class ClearBgpVersionAfiSafiRdIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiRdIpv6PrefixRpc();
        ~ClearBgpVersionAfiSafiRdIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiRdIpv6PrefixRpc


class ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input

class ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc


class ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpVersionAfiSafiVrfIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv6AddrRpc();
        ~ClearBgpVersionAfiSafiVrfIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfIpv6AddrRpc


class ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input

class ClearBgpVersionAfiSafiVrfIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionAfiSafiVrfIpv6PrefixRpc();
        ~ClearBgpVersionAfiSafiVrfIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input> input;
        
}; // ClearBgpVersionAfiSafiVrfIpv6PrefixRpc


class ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input

class ClearBgpVersionVrfIpAddrIpNetmaskRpc : public Entity
{
    public:
        ClearBgpVersionVrfIpAddrIpNetmaskRpc();
        ~ClearBgpVersionVrfIpAddrIpNetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input> input;
        
}; // ClearBgpVersionVrfIpAddrIpNetmaskRpc


class ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input

class ClearBgpVersionVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpVersionVrfIpAddrRpc();
        ~ClearBgpVersionVrfIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfIpAddrRpc::Input> input;
        
}; // ClearBgpVersionVrfIpAddrRpc


class ClearBgpVersionVrfIpAddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfIpAddrRpc::Input

class ClearBgpVersionVrfIpPrefixRpc : public Entity
{
    public:
        ClearBgpVersionVrfIpPrefixRpc();
        ~ClearBgpVersionVrfIpPrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfIpPrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfIpPrefixRpc::Input> input;
        
}; // ClearBgpVersionVrfIpPrefixRpc


class ClearBgpVersionVrfIpPrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfIpPrefixRpc::Input

class ClearBgpVersionVrfAfiSafiIpv4PrefixRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv4PrefixRpc();
        ~ClearBgpVersionVrfAfiSafiIpv4PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiIpv4PrefixRpc


class ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input

class ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc();
        ~ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc


class ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input

class ClearBgpVersionVrfAfiSafiIpv4AddrRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv4AddrRpc();
        ~ClearBgpVersionVrfAfiSafiIpv4AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiIpv4AddrRpc


class ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input

class ClearBgpVersionVrfAfiSafiNetworkRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiNetworkRpc();
        ~ClearBgpVersionVrfAfiSafiNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiNetworkRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiNetworkRpc


class ClearBgpVersionVrfAfiSafiNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiNetworkRpc::Input

class ClearBgpVersionVrfAfiSafiRdNetworkRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiRdNetworkRpc();
        ~ClearBgpVersionVrfAfiSafiRdNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiRdNetworkRpc


class ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input

class ClearBgpVersionVrfAfiSafiVrfNetworkRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiVrfNetworkRpc();
        ~ClearBgpVersionVrfAfiSafiVrfNetworkRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiVrfNetworkRpc


class ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input

class ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc();
        ~ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc


class ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input

class ClearBgpVersionVrfAfiSafiIpv6AddrRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv6AddrRpc();
        ~ClearBgpVersionVrfAfiSafiIpv6AddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiIpv6AddrRpc


class ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input

class ClearBgpVersionVrfAfiSafiIpv6PrefixRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiIpv6PrefixRpc();
        ~ClearBgpVersionVrfAfiSafiIpv6PrefixRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiIpv6PrefixRpc


class ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input

class ClearBgpVersionVrfAfiSafiRdRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiRdRpc();
        ~ClearBgpVersionVrfAfiSafiRdRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiRdRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiRdRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiRdRpc


class ClearBgpVersionVrfAfiSafiRdRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiRdRpc::Input

class ClearBgpVersionVrfAfiSafiVrfRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiVrfRpc();
        ~ClearBgpVersionVrfAfiSafiVrfRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiVrfRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiVrfRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiVrfRpc


class ClearBgpVersionVrfAfiSafiVrfRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiVrfRpc::Input

class ClearBgpVersionVrfAfiSafiRpc : public Entity
{
    public:
        ClearBgpVersionVrfAfiSafiRpc();
        ~ClearBgpVersionVrfAfiSafiRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVersionVrfAfiSafiRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVersionVrfAfiSafiRpc::Input> input;
        
}; // ClearBgpVersionVrfAfiSafiRpc


class ClearBgpVersionVrfAfiSafiRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVersionVrfAfiSafiRpc::Input

class ClearBgpVrfAllGracefulRpc : public Entity
{
    public:
        ClearBgpVrfAllGracefulRpc();
        ~ClearBgpVrfAllGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVrfAllGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAllGracefulRpc::Input> input;
        
}; // ClearBgpVrfAllGracefulRpc


class ClearBgpVrfAllGracefulRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVrfAllGracefulRpc::Input

class ClearBgpVrfAllRpc : public Entity
{
    public:
        ClearBgpVrfAllRpc();
        ~ClearBgpVrfAllRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVrfAllRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAllRpc::Input> input;
        
}; // ClearBgpVrfAllRpc


class ClearBgpVrfAllRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVrfAllRpc::Input

class ClearBgpVrfIpAddrGracefulRpc : public Entity
{
    public:
        ClearBgpVrfIpAddrGracefulRpc();
        ~ClearBgpVrfIpAddrGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVrfIpAddrGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfIpAddrGracefulRpc::Input> input;
        
}; // ClearBgpVrfIpAddrGracefulRpc


class ClearBgpVrfIpAddrGracefulRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVrfIpAddrGracefulRpc::Input

class ClearBgpVrfIpAddrLongLivedStaleRpc : public Entity
{
    public:
        ClearBgpVrfIpAddrLongLivedStaleRpc();
        ~ClearBgpVrfIpAddrLongLivedStaleRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVrfIpAddrLongLivedStaleRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfIpAddrLongLivedStaleRpc::Input> input;
        
}; // ClearBgpVrfIpAddrLongLivedStaleRpc


class ClearBgpVrfIpAddrLongLivedStaleRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVrfIpAddrLongLivedStaleRpc::Input

class ClearBgpVrfIpAddrRpc : public Entity
{
    public:
        ClearBgpVrfIpAddrRpc();
        ~ClearBgpVrfIpAddrRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVrfIpAddrRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfIpAddrRpc::Input> input;
        
}; // ClearBgpVrfIpAddrRpc


class ClearBgpVrfIpAddrRpc::Input : public Entity
{
    public:
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

}; // ClearBgpVrfIpAddrRpc::Input

class ClearBgpVrfAsGracefulRpc : public Entity
{
    public:
        ClearBgpVrfAsGracefulRpc();
        ~ClearBgpVrfAsGracefulRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: ClearBgpVrfAsGracefulRpc::Input

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_act::ClearBgpVrfAsGracefulRpc::Input> input;
        
}; // ClearBgpVrfAsGracefulRpc


class ClearBgpVrfAsGracefulRpc::Input : public Entity
{
    public:
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
        YLeaf as_number; //type: one of union, uint16

}; // ClearBgpVrfAsGracefulRpc::Input


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_ACT_5_ */

