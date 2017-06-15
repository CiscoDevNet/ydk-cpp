#ifndef _COMMON_MPLS_STATIC_
#define _COMMON_MPLS_STATIC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace common_mpls_static {

class NexthopResolutionTypeIdentity : public virtual Identity
{
    public:
        NexthopResolutionTypeIdentity();
        ~NexthopResolutionTypeIdentity();


}; // NexthopResolutionTypeIdentity

class LspTypeIdentity : public virtual Identity
{
    public:
        LspTypeIdentity();
        ~LspTypeIdentity();


}; // LspTypeIdentity

class MplsStatic : public Entity
{
    public:
        MplsStatic();
        ~MplsStatic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class MplsStaticCfg; //type: MplsStatic::MplsStaticCfg
        class MplsStaticState; //type: MplsStatic::MplsStaticState

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg> mpls_static_cfg_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState> mpls_static_state_;
        
}; // MplsStatic


class MplsStatic::MplsStaticCfg : public Entity
{
    public:
        MplsStaticCfg();
        ~MplsStaticCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4IngressLsps; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps
        class Interfaces; //type: MplsStatic::MplsStaticCfg::Interfaces
        class Ipv6IngressLsps; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps
        class NamedLsps; //type: MplsStatic::MplsStaticCfg::NamedLsps
        class InLabelLsps; //type: MplsStatic::MplsStaticCfg::InLabelLsps

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps> in_label_lsps_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Interfaces> interfaces_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps> ipv4_ingress_lsps_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps> ipv6_ingress_lsps_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps> named_lsps_;
        
}; // MplsStatic::MplsStaticCfg


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps : public Entity
{
    public:
        Ipv4IngressLsps();
        ~Ipv4IngressLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4IngressLsp; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp> > ipv4_ingress_lsp_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp : public Entity
{
    public:
        Ipv4IngressLsp();
        ~Ipv4IngressLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf prefix; //type: string
        YLeaf name; //type: string
        YLeaf in_label; //type: one of uint32, enumeration
        class Path; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path> path_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop> > next_hop_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: HoptypeEnum
        YLeaf protected_by; //type: uint32
        class NextHopType; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType> next_hop_type_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType : public Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_index; //type: uint32
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string
        YLeaf ipv4_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf out_interface_name;

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pop_and_forward; //type: empty
        YLeaf preserve; //type: empty
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: MplsStatic::MplsStaticCfg::Interfaces::Interface

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Interfaces::Interface> > interface_;
        
}; // MplsStatic::MplsStaticCfg::Interfaces


class MplsStatic::MplsStaticCfg::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf name;
        YLeaf enabled; //type: uint32

}; // MplsStatic::MplsStaticCfg::Interfaces::Interface


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps : public Entity
{
    public:
        Ipv6IngressLsps();
        ~Ipv6IngressLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6IngressLsp; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp> > ipv6_ingress_lsp_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp : public Entity
{
    public:
        Ipv6IngressLsp();
        ~Ipv6IngressLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf prefix; //type: string
        YLeaf name; //type: string
        YLeaf in_label; //type: one of uint32, enumeration
        class Path; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path> path_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop> > next_hop_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: HoptypeEnum
        YLeaf protected_by; //type: uint32
        class NextHopType; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType> next_hop_type_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType : public Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_index; //type: uint32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf out_interface_name;

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::NamedLsps : public Entity
{
    public:
        NamedLsps();
        ~NamedLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NamedLsp; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp> > named_lsp_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp : public Entity
{
    public:
        NamedLsp();
        ~NamedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf name; //type: string
        YLeaf lsp_type; //type: LspTypeIdentity
        YLeaf in_label; //type: one of uint32, enumeration
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string
        class Path; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path> path_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop> > next_hop_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: HoptypeEnum
        YLeaf protected_by; //type: uint32
        class NextHopType; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType> next_hop_type_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType : public Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_index; //type: uint32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf out_interface_name;

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps : public Entity
{
    public:
        InLabelLsps();
        ~InLabelLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InLabelLsp; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp> > in_label_lsp_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp : public Entity
{
    public:
        InLabelLsp();
        ~InLabelLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf in_label; //type: one of uint32, enumeration
        class Path; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path> path_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop> > next_hop_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: HoptypeEnum
        YLeaf protected_by; //type: uint32
        class NextHopType; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType> next_hop_type_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations> operations_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType : public Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_index; //type: uint32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf out_interface_name;

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticState : public Entity
{
    public:
        MplsStaticState();
        ~MplsStaticState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelSwitchedPaths; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths> label_switched_paths_;
        
}; // MplsStatic::MplsStaticState


class MplsStatic::MplsStaticState::LabelSwitchedPaths : public Entity
{
    public:
        LabelSwitchedPaths();
        ~LabelSwitchedPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelSwitchedPath; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath> > label_switched_path_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath : public Entity
{
    public:
        LabelSwitchedPath();
        ~LabelSwitchedPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf prefix; //type: string
        YLeaf name; //type: string
        YLeaf in_label_value; //type: one of uint32, enumeration
        class IngressStats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats
        class EgressStats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats
        class Path; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats> egress_stats_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats> ingress_stats_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path> path_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats : public Entity
{
    public:
        IngressStats();
        ~IngressStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats> stats_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64
        YLeaf dropped_packets; //type: uint64
        YLeaf dropped_bytes; //type: uint64

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats : public Entity
{
    public:
        EgressStats();
        ~EgressStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats> stats_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64
        YLeaf dropped_packets; //type: uint64
        YLeaf dropped_bytes; //type: uint64

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop> > next_hop_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations> operations_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: HoptypeEnum
        YLeaf protected_by; //type: uint32
        YLeaf origin; //type: NexthopResolutionTypeIdentity
        class NextHopType; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations
        class NexthopStats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType> next_hop_type_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats> nexthop_stats_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations> operations_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType : public Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_index; //type: uint32
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        YLeaf out_interface_name;

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations : public Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preserve; //type: empty
        YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push> push_;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap> swap_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap : public Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack> stack_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push : public Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack> stack_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats : public Entity
{
    public:
        NexthopStats();
        ~NexthopStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats> stats_;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: uint64
        YLeaf bytes; //type: uint64
        YLeaf dropped_packets; //type: uint64
        YLeaf dropped_bytes; //type: uint64

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats

class BgpRouteNexthopIdentity : public common_mpls_static::NexthopResolutionTypeIdentity, virtual Identity
{
    public:
        BgpRouteNexthopIdentity();
        ~BgpRouteNexthopIdentity();


}; // BgpRouteNexthopIdentity

class IsisRouteNexthopIdentity : public common_mpls_static::NexthopResolutionTypeIdentity, virtual Identity
{
    public:
        IsisRouteNexthopIdentity();
        ~IsisRouteNexthopIdentity();


}; // IsisRouteNexthopIdentity

class StaticNexthopIdentity : public common_mpls_static::NexthopResolutionTypeIdentity, virtual Identity
{
    public:
        StaticNexthopIdentity();
        ~StaticNexthopIdentity();


}; // StaticNexthopIdentity

class LspIpv6Identity : public common_mpls_static::LspTypeIdentity, virtual Identity
{
    public:
        LspIpv6Identity();
        ~LspIpv6Identity();


}; // LspIpv6Identity

class LspIpv4Identity : public common_mpls_static::LspTypeIdentity, virtual Identity
{
    public:
        LspIpv4Identity();
        ~LspIpv4Identity();


}; // LspIpv4Identity

class OspfRouteNexthopIdentity : public common_mpls_static::NexthopResolutionTypeIdentity, virtual Identity
{
    public:
        OspfRouteNexthopIdentity();
        ~OspfRouteNexthopIdentity();


}; // OspfRouteNexthopIdentity

class LspIdentity : public common_mpls_static::LspTypeIdentity, virtual Identity
{
    public:
        LspIdentity();
        ~LspIdentity();


}; // LspIdentity

class LspVrfIdentity : public common_mpls_static::LspTypeIdentity, virtual Identity
{
    public:
        LspVrfIdentity();
        ~LspVrfIdentity();


}; // LspVrfIdentity

class HoptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf PRIMARY;
        static const Enum::YLeaf BACKUP;

};


}
}

#endif /* _COMMON_MPLS_STATIC_ */

