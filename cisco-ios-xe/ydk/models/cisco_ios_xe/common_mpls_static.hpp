#ifndef _COMMON_MPLS_STATIC_
#define _COMMON_MPLS_STATIC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace common_mpls_static {

class LspType : public virtual ydk::Identity
{
    public:
        LspType();
        ~LspType();


}; // LspType

class NexthopResolutionType : public virtual ydk::Identity
{
    public:
        NexthopResolutionType();
        ~NexthopResolutionType();


}; // NexthopResolutionType

class MplsStatic : public ydk::Entity
{
    public:
        MplsStatic();
        ~MplsStatic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class MplsStaticCfg; //type: MplsStatic::MplsStaticCfg
        class MplsStaticState; //type: MplsStatic::MplsStaticState

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg> mpls_static_cfg;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState> mpls_static_state;
        
}; // MplsStatic


class MplsStatic::MplsStaticCfg : public ydk::Entity
{
    public:
        MplsStaticCfg();
        ~MplsStaticCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: MplsStatic::MplsStaticCfg::Interfaces
        class Ipv4IngressLsps; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps
        class InLabelLsps; //type: MplsStatic::MplsStaticCfg::InLabelLsps
        class Ipv6IngressLsps; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps
        class NamedLsps; //type: MplsStatic::MplsStaticCfg::NamedLsps

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps> in_label_lsps;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Interfaces> interfaces;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps> ipv4_ingress_lsps;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps> ipv6_ingress_lsps;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps> named_lsps;
        
}; // MplsStatic::MplsStaticCfg


class MplsStatic::MplsStaticCfg::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: MplsStatic::MplsStaticCfg::Interfaces::Interface

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Interfaces::Interface> > interface;
        
}; // MplsStatic::MplsStaticCfg::Interfaces


class MplsStatic::MplsStaticCfg::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf name;
        ydk::YLeaf enabled; //type: uint32

}; // MplsStatic::MplsStaticCfg::Interfaces::Interface


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps : public ydk::Entity
{
    public:
        Ipv4IngressLsps();
        ~Ipv4IngressLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4IngressLsp; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp> > ipv4_ingress_lsp;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp : public ydk::Entity
{
    public:
        Ipv4IngressLsp();
        ~Ipv4IngressLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf in_label; //type: one of uint32, enumeration
        class Path; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path> path;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_protect; //type: boolean
        class NextHop; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop> > next_hop;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf protected_by; //type: uint32
        ydk::YLeaf type; //type: Hoptype
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations
        class NextHopType; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType> next_hop_type;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pop_and_forward; //type: empty
        ydk::YLeaf preserve; //type: empty
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType : public ydk::Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf out_interface_name;
        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv4_address; //type: string

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps : public ydk::Entity
{
    public:
        InLabelLsps();
        ~InLabelLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InLabelLsp; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp> > in_label_lsp;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp : public ydk::Entity
{
    public:
        InLabelLsp();
        ~InLabelLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf in_label; //type: one of uint32, enumeration
        class Path; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path> path;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop> > next_hop;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: Hoptype
        ydk::YLeaf protected_by; //type: uint32
        class NextHopType; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType> next_hop_type;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType : public ydk::Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf out_interface_name;

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps : public ydk::Entity
{
    public:
        Ipv6IngressLsps();
        ~Ipv6IngressLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6IngressLsp; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp> > ipv6_ingress_lsp;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp : public ydk::Entity
{
    public:
        Ipv6IngressLsp();
        ~Ipv6IngressLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf in_label; //type: one of uint32, enumeration
        class Path; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path> path;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop> > next_hop;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: Hoptype
        ydk::YLeaf protected_by; //type: uint32
        class NextHopType; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType> next_hop_type;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType : public ydk::Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf out_interface_name;

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::NamedLsps : public ydk::Entity
{
    public:
        NamedLsps();
        ~NamedLsps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NamedLsp; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp> > named_lsp;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp : public ydk::Entity
{
    public:
        NamedLsp();
        ~NamedLsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf lsp_type; //type: LspType
        ydk::YLeaf in_label; //type: one of uint32, enumeration
        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf ipv6_prefix; //type: string
        class Path; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path> path;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop> > next_hop;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: Hoptype
        ydk::YLeaf protected_by; //type: uint32
        class NextHopType; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType> next_hop_type;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations> operations;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType : public ydk::Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf out_interface_name;

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticState : public ydk::Entity
{
    public:
        MplsStaticState();
        ~MplsStaticState();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelSwitchedPaths; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths> label_switched_paths;
        
}; // MplsStatic::MplsStaticState


class MplsStatic::MplsStaticState::LabelSwitchedPaths : public ydk::Entity
{
    public:
        LabelSwitchedPaths();
        ~LabelSwitchedPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelSwitchedPath; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath> > label_switched_path;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath : public ydk::Entity
{
    public:
        LabelSwitchedPath();
        ~LabelSwitchedPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf in_label_value; //type: one of uint32, enumeration
        class IngressStats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats
        class EgressStats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats
        class Path; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats> egress_stats;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats> ingress_stats;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path> path;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats : public ydk::Entity
{
    public:
        IngressStats();
        ~IngressStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats> stats;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64
        ydk::YLeaf dropped_bytes; //type: uint64

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats : public ydk::Entity
{
    public:
        EgressStats();
        ~EgressStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats> stats;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64
        ydk::YLeaf dropped_bytes; //type: uint64

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_protect; //type: boolean
        class Operations; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations
        class NextHop; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop

        std::vector<std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop> > next_hop;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations> operations;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf type; //type: Hoptype
        ydk::YLeaf protected_by; //type: uint32
        ydk::YLeaf origin; //type: NexthopResolutionType
        class NextHopType; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType
        class Operations; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations
        class NexthopStats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType> next_hop_type;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats> nexthop_stats;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations> operations;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType : public ydk::Entity
{
    public:
        NextHopType();
        ~NextHopType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_index; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        //type: string (refers to ietf_interfaces::Interfaces::Interface::name)
        ydk::YLeaf out_interface_name;

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations : public ydk::Entity
{
    public:
        Operations();
        ~Operations();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preserve; //type: empty
        ydk::YLeaf pop_and_forward; //type: empty
        class Swap; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap
        class Push; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push> push;
        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap> swap;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap : public ydk::Entity
{
    public:
        Swap();
        ~Swap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack> stack;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stack; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack> stack;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList label_stack; //type: list of  one of uint32, enumeration

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats : public ydk::Entity
{
    public:
        NexthopStats();
        ~NexthopStats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stats; //type: MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats

        std::shared_ptr<common_mpls_static::MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats> stats;
        
}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats


class MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf dropped_packets; //type: uint64
        ydk::YLeaf dropped_bytes; //type: uint64

}; // MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats

class IsisRouteNexthop : public common_mpls_static::NexthopResolutionType, virtual ydk::Identity
{
    public:
        IsisRouteNexthop();
        ~IsisRouteNexthop();


}; // IsisRouteNexthop

class BgpRouteNexthop : public common_mpls_static::NexthopResolutionType, virtual ydk::Identity
{
    public:
        BgpRouteNexthop();
        ~BgpRouteNexthop();


}; // BgpRouteNexthop

class LspIpv4 : public common_mpls_static::LspType, virtual ydk::Identity
{
    public:
        LspIpv4();
        ~LspIpv4();


}; // LspIpv4

class StaticNexthop : public common_mpls_static::NexthopResolutionType, virtual ydk::Identity
{
    public:
        StaticNexthop();
        ~StaticNexthop();


}; // StaticNexthop

class OspfRouteNexthop : public common_mpls_static::NexthopResolutionType, virtual ydk::Identity
{
    public:
        OspfRouteNexthop();
        ~OspfRouteNexthop();


}; // OspfRouteNexthop

class Lsp : public common_mpls_static::LspType, virtual ydk::Identity
{
    public:
        Lsp();
        ~Lsp();


}; // Lsp

class LspVrf : public common_mpls_static::LspType, virtual ydk::Identity
{
    public:
        LspVrf();
        ~LspVrf();


}; // LspVrf

class LspIpv6 : public common_mpls_static::LspType, virtual ydk::Identity
{
    public:
        LspIpv6();
        ~LspIpv6();


}; // LspIpv6

class Hoptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf PRIMARY;
        static const ydk::Enum::YLeaf BACKUP;

};


}
}

#endif /* _COMMON_MPLS_STATIC_ */

