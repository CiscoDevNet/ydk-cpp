#ifndef _CISCO_IOS_XE_NATIVE_102_
#define _CISCO_IOS_XE_NATIVE_102_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_101.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_99.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::IsisContainer::Isis::Authentication::Mode::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Router::IsisContainer::Isis::Authentication::Mode::Md5


class Native::Router::IsisContainer::Isis::Authentication::Mode::Text : public Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Router::IsisContainer::Isis::Authentication::Mode::Text


class Native::Router::IsisContainer::Isis::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class KeyChainList; //type: Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Router::IsisContainer::Isis::Authentication::KeyChain


class Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList : public Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum
        YLeaf name; //type: string

}; // Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList


class Native::Router::IsisContainer::Isis::Authentication::SendOnly : public Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Router::IsisContainer::Isis::Authentication::SendOnly


class Native::Router::IsisContainer::Isis::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of union, string
        YLeaf in; //type: string
        YLeaf gateway; //type: string
        YLeaf prefix; //type: string
        YLeaf gateway_prefix_in; //type: string
        YLeaf route_map; //type: string
        YLeaf route_map_in; //type: empty

}; // Native::Router::IsisContainer::Isis::DistributeList


class Native::Router::IsisContainer::Isis::DomainPassword : public Entity
{
    public:
        DomainPassword();
        ~DomainPassword();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf authenticate; //type: empty
        YLeaf snp; //type: SnpEnum
        class SnpEnum;

}; // Native::Router::IsisContainer::Isis::DomainPassword


class Native::Router::IsisContainer::Isis::FastFlood : public Entity
{
    public:
        FastFlood();
        ~FastFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32

}; // Native::Router::IsisContainer::Isis::FastFlood


class Native::Router::IsisContainer::Isis::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LoadSharing; //type: Native::Router::IsisContainer::Isis::FastReroute::LoadSharing
        class PerPrefix; //type: Native::Router::IsisContainer::Isis::FastReroute::PerPrefix
        class RemoteLfa; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa
        class TieBreak; //type: Native::Router::IsisContainer::Isis::FastReroute::TieBreak

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::LoadSharing> load_sharing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::PerPrefix> per_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa> remote_lfa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::TieBreak> tie_break;
        
}; // Native::Router::IsisContainer::Isis::FastReroute


class Native::Router::IsisContainer::Isis::FastReroute::LoadSharing : public Entity
{
    public:
        LoadSharing();
        ~LoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1> level_1; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2> level_2; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::LoadSharing


class Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1 : public Entity
{
    public:
        Level1();
        ~Level1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1


class Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2 : public Entity
{
    public:
        Level2();
        ~Level2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2


class Native::Router::IsisContainer::Isis::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2> level_2;
        
}; // Native::Router::IsisContainer::Isis::FastReroute::PerPrefix


class Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1 : public Entity
{
    public:
        Level1();
        ~Level1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1


class Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2 : public Entity
{
    public:
        Level2();
        ~Level2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2> level_2;
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1 : public Entity
{
    public:
        Level1();
        ~Level1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsLdp; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric : public Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_met; //type: uint32

}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2 : public Entity
{
    public:
        Level2();
        ~Level2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MplsLdp; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric : public Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_met; //type: uint32

}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric


class Native::Router::IsisContainer::Isis::FastReroute::TieBreak : public Entity
{
    public:
        TieBreak();
        ~TieBreak();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2> level_2;
        
}; // Native::Router::IsisContainer::Isis::FastReroute::TieBreak


class Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1 : public Entity
{
    public:
        Level1();
        ~Level1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf downstream; //type: uint8
        YLeaf linecard_disjoint; //type: uint8
        YLeaf lowest_backup_path_metric; //type: uint8
        YLeaf node_protecting; //type: uint8
        YLeaf primary_path; //type: uint8
        YLeaf secondary_path; //type: uint8
        YLeaf srlg_disjoint; //type: uint8

}; // Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1


class Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2 : public Entity
{
    public:
        Level2();
        ~Level2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf downstream; //type: uint8
        YLeaf linecard_disjoint; //type: uint8
        YLeaf lowest_backup_path_metric; //type: uint8
        YLeaf node_protecting; //type: uint8
        YLeaf primary_path; //type: uint8
        YLeaf secondary_path; //type: uint8
        YLeaf srlg_disjoint; //type: uint8

}; // Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2


class Native::Router::IsisContainer::Isis::TiLfa : public Entity
{
    public:
        TiLfa();
        ~TiLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level1; //type: Native::Router::IsisContainer::Isis::TiLfa::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::TiLfa::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level2> level_2; // presence node
        
}; // Native::Router::IsisContainer::Isis::TiLfa


class Native::Router::IsisContainer::Isis::TiLfa::Level1 : public Entity
{
    public:
        Level1();
        ~Level1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric> maximum_metric;
        
}; // Native::Router::IsisContainer::Isis::TiLfa::Level1


class Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric : public Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_met; //type: uint32

}; // Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric


class Native::Router::IsisContainer::Isis::TiLfa::Level2 : public Entity
{
    public:
        Level2();
        ~Level2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric> maximum_metric;
        
}; // Native::Router::IsisContainer::Isis::TiLfa::Level2


class Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric : public Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_met; //type: uint32

}; // Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric


class Native::Router::IsisContainer::Isis::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padding; //type: Native::Router::IsisContainer::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Router::IsisContainer::Isis::Hello


class Native::Router::IsisContainer::Isis::Hello::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pad_type; //type: PadTypeEnum
        class PadTypeEnum;

}; // Native::Router::IsisContainer::Isis::Hello::Padding


class Native::Router::IsisContainer::Isis::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: empty

}; // Native::Router::IsisContainer::Isis::Hostname


class Native::Router::IsisContainer::Isis::Ispf : public Entity
{
    public:
        Ispf();
        ~Ispf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: LevelEnum
        YLeaf number; //type: uint32
        class LevelEnum;

}; // Native::Router::IsisContainer::Isis::Ispf


class Native::Router::IsisContainer::Isis::LogAdjacencyChanges : public Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Router::IsisContainer::Isis::LogAdjacencyChanges


class Native::Router::IsisContainer::Isis::LspFull : public Entity
{
    public:
        LspFull();
        ~LspFull();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Suppress; //type: Native::Router::IsisContainer::Isis::LspFull::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspFull::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::LspFull


class Native::Router::IsisContainer::Isis::LspFull::Suppress : public Entity
{
    public:
        Suppress();
        ~Suppress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        class ExternalInterlevelContainer; //type: Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer> external_interlevel_container;
        
}; // Native::Router::IsisContainer::Isis::LspFull::Suppress


class Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer : public Entity
{
    public:
        ExternalInterlevelContainer();
        ~ExternalInterlevelContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer


class Native::Router::IsisContainer::Isis::LspGenInterval : public Entity
{
    public:
        LspGenInterval();
        ~LspGenInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Intervals; //type: Native::Router::IsisContainer::Isis::LspGenInterval::Intervals
        class IntervalsLevels; //type: Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::Intervals> intervals;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels> intervals_levels;
        
}; // Native::Router::IsisContainer::Isis::LspGenInterval


class Native::Router::IsisContainer::Isis::LspGenInterval::Intervals : public Entity
{
    public:
        Intervals();
        ~Intervals();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::LspGenInterval::Intervals


class Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels : public Entity
{
    public:
        IntervalsLevels();
        ~IntervalsLevels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IntervalsLevel1; //type: Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1
        class IntervalsLevel2; //type: Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1> intervals_level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2> intervals_level_2;
        
}; // Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels


class Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1 : public Entity
{
    public:
        IntervalsLevel1();
        ~IntervalsLevel1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level_1; //type: empty
        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1


class Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2 : public Entity
{
    public:
        IntervalsLevel2();
        ~IntervalsLevel2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level_2; //type: empty
        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2


class Native::Router::IsisContainer::Isis::Microloop : public Entity
{
    public:
        Microloop();
        ~Microloop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Avoidance; //type: Native::Router::IsisContainer::Isis::Microloop::Avoidance

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Microloop::Avoidance> avoidance; // presence node
        
}; // Native::Router::IsisContainer::Isis::Microloop


class Native::Router::IsisContainer::Isis::Microloop::Avoidance : public Entity
{
    public:
        Avoidance();
        ~Avoidance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf protected_; //type: empty
        YLeaf rib_update_delay; //type: uint32

}; // Native::Router::IsisContainer::Isis::Microloop::Avoidance


class Native::Router::IsisContainer::Isis::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ldp; //type: Native::Router::IsisContainer::Isis::Mpls::Ldp
        class TrafficEng; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Router::IsisContainer::Isis::Mpls


class Native::Router::IsisContainer::Isis::Mpls::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sync; //type: empty
        YLeaf sync_igp_shortcuts; //type: empty
        class Autoconfig; //type: Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig> autoconfig; // presence node
        
}; // Native::Router::IsisContainer::Isis::Mpls::Ldp


class Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig : public Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level_1; //type: empty
        YLeaf level_2; //type: empty

}; // Native::Router::IsisContainer::Isis::Mpls::Ldp::Autoconfig


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng : public Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level_1; //type: empty
        YLeaf level_2; //type: empty
        YLeaf multicast_intact; //type: empty
        class RouterId; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId
        class Scanner; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId> router_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner> scanner; // presence node
        
}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::LispSubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface


class Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner : public Entity
{
    public:
        Scanner();
        ~Scanner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf max_flash; //type: uint32

}; // Native::Router::IsisContainer::Isis::Mpls::TrafficEng::Scanner


class Native::Router::IsisContainer::Isis::Net : public Entity
{
    public:
        Net();
        ~Net();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string

}; // Native::Router::IsisContainer::Isis::Net


class Native::Router::IsisContainer::Isis::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco; //type: empty
        YLeaf ietf; //type: empty
        YLeaf interval; //type: uint16
        class Interface; //type: Native::Router::IsisContainer::Isis::Nsf::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Nsf::Interface> interface;
        
}; // Native::Router::IsisContainer::Isis::Nsf


class Native::Router::IsisContainer::Isis::Nsf::Interface : public Entity
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

        YLeaf wait; //type: uint8

}; // Native::Router::IsisContainer::Isis::Nsf::Interface


class Native::Router::IsisContainer::Isis::Partition : public Entity
{
    public:
        Partition();
        ~Partition();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf avoidance; //type: empty

}; // Native::Router::IsisContainer::Isis::Partition


class Native::Router::IsisContainer::Isis::PassiveInterface : public Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty
        YLeaf interface; //type: string

}; // Native::Router::IsisContainer::Isis::PassiveInterface


class Native::Router::IsisContainer::Isis::Disable : public Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PassiveInterface; //type: Native::Router::IsisContainer::Isis::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::IsisContainer::Isis::Disable


class Native::Router::IsisContainer::Isis::Disable::PassiveInterface : public Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Router::IsisContainer::Isis::Disable::PassiveInterface


class Native::Router::IsisContainer::Isis::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf shutdown; //type: empty

}; // Native::Router::IsisContainer::Isis::Protocol


class Native::Router::IsisContainer::Isis::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpls; //type: empty
        class PrefixSidMap; //type: Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Native::Router::IsisContainer::Isis::SegmentRouting


class Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap : public Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf advertise_local; //type: empty
        class Receive; //type: Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive> receive; // presence node
        
}; // Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap


class Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive


class Native::Router::IsisContainer::Isis::Skeptical : public Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::IsisContainer::Isis::Skeptical


class Native::Router::IsisContainer::Isis::Use : public Entity
{
    public:
        Use();
        ~Use();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_metrics; //type: empty

}; // Native::Router::IsisContainer::Isis::Use


class Native::Router::IsisContainer::Isis::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_interfaces; //type: empty
        YLeaf check_ctrl_plane_failure; //type: empty

}; // Native::Router::IsisContainer::Isis::Bfd


class Native::Router::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable_ttl_propagate; //type: empty
        YLeaf site_id; //type: uint32
        class Default_; //type: Native::Router::Lisp::Default_
        class Service; //type: Native::Router::Lisp::Service
        class Encapsulation; //type: Native::Router::Lisp::Encapsulation
        class LocatorSet; //type: Native::Router::Lisp::LocatorSet
        class LocatorScope; //type: Native::Router::Lisp::LocatorScope
        class InstanceContainer; //type: Native::Router::Lisp::InstanceContainer
        class Alt; //type: Native::Router::Lisp::Alt
        class ControlPacket; //type: Native::Router::Lisp::ControlPacket
        class Ddt; //type: Native::Router::Lisp::Ddt
        class Decapsulation; //type: Native::Router::Lisp::Decapsulation
        class Etr; //type: Native::Router::Lisp::Etr
        class Ipv4; //type: Native::Router::Lisp::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::MapRequest
        class MapServer; //type: Native::Router::Lisp::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::RemoteRlocProbe
        class EidTable; //type: Native::Router::Lisp::EidTable
        class Security; //type: Native::Router::Lisp::Security
        class Site; //type: Native::Router::Lisp::Site
        class Syslog; //type: Native::Router::Lisp::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::ControlPacket> control_packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Ddt> ddt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer> instance_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorDown> locator_down;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorSet> > locator_set;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::LocatorTable> locator_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::MapRequest> map_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Security> security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Service> service; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site> > site;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Syslog> syslog;
        
}; // Native::Router::Lisp


class Native::Router::Lisp::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable_ttl_propagate; //type: empty
        YLeaf site_id; //type: uint32
        class Service; //type: Native::Router::Lisp::Default_::Service
        class Encapsulation; //type: Native::Router::Lisp::Default_::Encapsulation
        class LocatorSet; //type: Native::Router::Lisp::Default_::LocatorSet
        class LocatorScope; //type: Native::Router::Lisp::Default_::LocatorScope
        class InstanceContainer; //type: Native::Router::Lisp::Default_::InstanceContainer
        class Alt; //type: Native::Router::Lisp::Default_::Alt
        class ControlPacket; //type: Native::Router::Lisp::Default_::ControlPacket
        class Ddt; //type: Native::Router::Lisp::Default_::Ddt
        class Decapsulation; //type: Native::Router::Lisp::Default_::Decapsulation
        class Etr; //type: Native::Router::Lisp::Default_::Etr
        class Ipv4; //type: Native::Router::Lisp::Default_::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Default_::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::Default_::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::Default_::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::Default_::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::Default_::MapRequest
        class MapServer; //type: Native::Router::Lisp::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::Default_::RemoteRlocProbe
        class EidTable; //type: Native::Router::Lisp::Default_::EidTable
        class Security; //type: Native::Router::Lisp::Default_::Security
        class Site; //type: Native::Router::Lisp::Default_::Site
        class Syslog; //type: Native::Router::Lisp::Default_::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::ControlPacket> control_packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt> ddt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer> instance_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorDown> locator_down;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorSet> > locator_set;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorTable> locator_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::MapRequest> map_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Security> security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service> service; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Site> > site;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Syslog> syslog;
        
}; // Native::Router::Lisp::Default_


class Native::Router::Lisp::Default_::Service : public Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Router::Lisp::Default_::Service::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Default_::Service::Ipv6
        class Ethernet; //type: Native::Router::Lisp::Default_::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::Lisp::Default_::Service


class Native::Router::Lisp::Default_::Service::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv4::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4


class Native::Router::Lisp::Default_::Service::Ipv4::Default__ : public Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr : public Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Itr::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable : public Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::ItrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable : public Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::EtrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr : public Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping : public Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept_mappping; //type: empty
        YLeaf verify; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit : public Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_map_cache_entries; //type: uint32
        YLeaf reserve_list; //type: string
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCacheLimit


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest : public Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered : public Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRegister; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister : public Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::SiteRegistration


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest : public Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty
        YLeaf max_per_entry; //type: uint8
        YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::SolicitMapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alt; //type: uint8
        YLeaf away; //type: uint8
        YLeaf dyn_eid; //type: uint8
        YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::Distance


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache : public Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids> away_eids;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids : public Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCache::AwayEids


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent : public Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::MapCachePersistent


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr : public Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_addr; //type: string
        YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::ProxyItr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport : public Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registrations; //type: empty
        YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::RouteExport


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr : public Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr


class Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority_value; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Default__::UsePetr::Priority


class Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping


class Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::Service::Ipv4::Itr : public Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Itr


class Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::Itr::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable : public Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::ItrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable : public Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::EtrEnable


class Native::Router::Lisp::Default_::Service::Ipv4::Etr : public Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7


class Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping : public Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept_mappping; //type: empty
        YLeaf verify; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit : public Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_map_cache_entries; //type: uint32
        YLeaf reserve_list; //type: string
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCacheLimit


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest : public Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered : public Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRegister; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister> map_register;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister : public Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate


class Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allowed_locator; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source


class Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::SiteRegistration


class Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest : public Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty
        YLeaf max_per_entry; //type: uint8
        YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::SolicitMapRequest


class Native::Router::Lisp::Default_::Service::Ipv4::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alt; //type: uint8
        YLeaf away; //type: uint8
        YLeaf dyn_eid; //type: uint8
        YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::Distance


class Native::Router::Lisp::Default_::Service::Ipv4::MapCache : public Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids> away_eids;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCache


class Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids : public Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_map_request; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCache::AwayEids


class Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent : public Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::Lisp::Default_::Service::Ipv4::MapCachePersistent


class Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr : public Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_addr; //type: string
        YLeaf ipv6_addr; //type: string

}; // Native::Router::Lisp::Default_::Service::Ipv4::ProxyItr


class Native::Router::Lisp::Default_::Service::Ipv4::RouteExport : public Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registrations; //type: empty
        YLeaf away_eids; //type: empty

}; // Native::Router::Lisp::Default_::Service::Ipv4::RouteExport


class Native::Router::Lisp::Default_::Service::Ipv4::UsePetr : public Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority> priority;
        
}; // Native::Router::Lisp::Default_::Service::Ipv4::UsePetr


class Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority_value; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv4::UsePetr::Priority


class Native::Router::Lisp::Default_::Service::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv6::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv6::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv6::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv6


class Native::Router::Lisp::Default_::Service::Ipv6::Default__ : public Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable
        class Etr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer
        class SiteRegistration; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance
        class MapCache; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport
        class UsePetr; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping


class Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit

class Native::Router::IsisContainer::Isis::DomainPassword::SnpEnum : public Enum
{
    public:
        static const Enum::YLeaf send_only;
        static const Enum::YLeaf validate;

};

class Native::Router::IsisContainer::Isis::Hello::Padding::PadTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_point;
        static const Enum::YLeaf point_to_point;

};

class Native::Router::IsisContainer::Isis::Ispf::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::Service::Ipv6::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::Lisp::Default_::Service::Ipv6::Default__::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_102_ */

