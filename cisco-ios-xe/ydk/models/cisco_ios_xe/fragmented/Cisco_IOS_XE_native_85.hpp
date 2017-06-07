#ifndef _CISCO_IOS_XE_NATIVE_85_
#define _CISCO_IOS_XE_NATIVE_85_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::Neighbor::LocalAs : public Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_no; //type: one of uint32, string
        YLeaf no_prepend; //type: empty
        YLeaf replace_as; //type: empty
        YLeaf dual_as; //type: empty

}; // Native::Router::Bgp::Neighbor::LocalAs


class Native::Router::Bgp::Neighbor::AdditionalPaths : public Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf receive; //type: empty
        class Send; //type: Native::Router::Bgp::Neighbor::AdditionalPaths::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Neighbor::AdditionalPaths


class Native::Router::Bgp::Neighbor::AdditionalPaths::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: empty

}; // Native::Router::Bgp::Neighbor::AdditionalPaths::Send


class Native::Router::Bgp::Neighbor::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best_external; //type: empty
        class AdditionalPaths; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::Neighbor::Advertise::DiversePath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::Neighbor::Advertise


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths : public Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Best; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best : public Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BestRange; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf group_best; //type: empty

}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best; //type: uint8

}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best : public Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BestRange; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf best; //type: uint8

}; // Native::Router::Bgp::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::Neighbor::Advertise::DiversePath : public Entity
{
    public:
        DiversePath();
        ~DiversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpath; //type: empty
        class Backup; //type: Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mpath; //type: empty

}; // Native::Router::Bgp::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::Neighbor::AdvertiseMap : public Entity
{
    public:
        AdvertiseMap();
        ~AdvertiseMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Name; //type: Native::Router::Bgp::Neighbor::AdvertiseMap::Name

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::AdvertiseMap::Name> > name;
        
}; // Native::Router::Bgp::Neighbor::AdvertiseMap


class Native::Router::Bgp::Neighbor::AdvertiseMap::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        YLeaf exist_map; //type: string
        YLeaf non_exist_map; //type: string

}; // Native::Router::Bgp::Neighbor::AdvertiseMap::Name


class Native::Router::Bgp::Neighbor::Aigp : public Entity
{
    public:
        Aigp();
        ~Aigp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Send; //type: Native::Router::Bgp::Neighbor::Aigp::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Aigp::Send> send;
        
}; // Native::Router::Bgp::Neighbor::Aigp


class Native::Router::Bgp::Neighbor::Aigp::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf med; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity> cost_community;
        
}; // Native::Router::Bgp::Neighbor::Aigp::Send


class Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity : public Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CcRange; //type: Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange> > cc_range;
        
}; // Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity


class Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange : public Entity
{
    public:
        CcRange();
        ~CcRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        class Poi; //type: Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi> poi;
        
}; // Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange


class Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi : public Entity
{
    public:
        Poi();
        ~Poi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IgpCost; //type: Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost
        class PreBestpath; //type: Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost> igp_cost; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath> pre_bestpath; // presence node
        
}; // Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi


class Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost : public Entity
{
    public:
        IgpCost();
        ~IgpCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost


class Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath : public Entity
{
    public:
        PreBestpath();
        ~PreBestpath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath


class Native::Router::Bgp::Neighbor::Announce : public Entity
{
    public:
        Announce();
        ~Announce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rpki; //type: Native::Router::Bgp::Neighbor::Announce::Rpki

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Announce::Rpki> rpki;
        
}; // Native::Router::Bgp::Neighbor::Announce


class Native::Router::Bgp::Neighbor::Announce::Rpki : public Entity
{
    public:
        Rpki();
        ~Rpki();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: empty

}; // Native::Router::Bgp::Neighbor::Announce::Rpki


class Native::Router::Bgp::Neighbor::AllowasIn : public Entity
{
    public:
        AllowasIn();
        ~AllowasIn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: uint8

}; // Native::Router::Bgp::Neighbor::AllowasIn


class Native::Router::Bgp::Neighbor::AsOverride : public Entity
{
    public:
        AsOverride();
        ~AsOverride();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::Bgp::Neighbor::AsOverride


class Native::Router::Bgp::Neighbor::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Orf; //type: Native::Router::Bgp::Neighbor::Capability::Orf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::Neighbor::Capability


class Native::Router::Bgp::Neighbor::Capability::Orf : public Entity
{
    public:
        Orf();
        ~Orf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList prefix_list; //type: list of  PrefixListEnum
        class PrefixListEnum;

}; // Native::Router::Bgp::Neighbor::Capability::Orf


class Native::Router::Bgp::Neighbor::DefaultOriginate : public Entity
{
    public:
        DefaultOriginate();
        ~DefaultOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Neighbor::DefaultOriginate


class Native::Router::Bgp::Neighbor::DistributeList : public Entity
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

        YLeaf inout; //type: InoutEnum
        YLeaf accesslist; //type: one of uint16, string
        class InoutEnum;

}; // Native::Router::Bgp::Neighbor::DistributeList


class Native::Router::Bgp::Neighbor::EbgpMultihop : public Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_hop; //type: uint8

}; // Native::Router::Bgp::Neighbor::EbgpMultihop


class Native::Router::Bgp::Neighbor::FallOver : public Entity
{
    public:
        FallOver();
        ~FallOver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bfd; //type: Native::Router::Bgp::Neighbor::FallOver::Bfd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::FallOver::Bfd> bfd; // presence node
        
}; // Native::Router::Bgp::Neighbor::FallOver


class Native::Router::Bgp::Neighbor::FallOver::Bfd : public Entity
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


}; // Native::Router::Bgp::Neighbor::FallOver::Bfd


class Native::Router::Bgp::Neighbor::FilterList : public Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inout; //type: InoutEnum
        YLeaf as_path_list; //type: uint16
        class InoutEnum;

}; // Native::Router::Bgp::Neighbor::FilterList


class Native::Router::Bgp::Neighbor::Inherit : public Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_policy; //type: string
        YLeaf peer_session; //type: string

}; // Native::Router::Bgp::Neighbor::Inherit


class Native::Router::Bgp::Neighbor::LogNeighborChanges : public Entity
{
    public:
        LogNeighborChanges();
        ~LogNeighborChanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::Bgp::Neighbor::LogNeighborChanges


class Native::Router::Bgp::Neighbor::MaximumPrefix : public Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_prefix_no; //type: uint32
        YLeaf threshold; //type: uint8
        YLeaf restart; //type: uint16
        YLeaf warning_only; //type: empty

}; // Native::Router::Bgp::Neighbor::MaximumPrefix


class Native::Router::Bgp::Neighbor::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enctype; //type: uint8
        YLeaf text; //type: string

}; // Native::Router::Bgp::Neighbor::Password


class Native::Router::Bgp::Neighbor::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inout; //type: InoutEnum
        YLeaf prefix_list_name; //type: string
        class InoutEnum;

}; // Native::Router::Bgp::Neighbor::PrefixList


class Native::Router::Bgp::Neighbor::PathAttribute : public Entity
{
    public:
        PathAttribute();
        ~PathAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Discard; //type: Native::Router::Bgp::Neighbor::PathAttribute::Discard
        class TreatAsWithdraw; //type: Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PathAttribute::Discard> discard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw> treat_as_withdraw;
        
}; // Native::Router::Bgp::Neighbor::PathAttribute


class Native::Router::Bgp::Neighbor::PathAttribute::Discard : public Entity
{
    public:
        Discard();
        ~Discard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attibute_Type; //type: Native::Router::Bgp::Neighbor::PathAttribute::Discard::Attibute_Type
        class Range; //type: Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PathAttribute::Discard::Attibute_Type> attibute_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range> range;
        
}; // Native::Router::Bgp::Neighbor::PathAttribute::Discard


class Native::Router::Bgp::Neighbor::PathAttribute::Discard::Attibute_Type : public Entity
{
    public:
        Attibute_Type();
        ~Attibute_Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint8
        YLeaf in; //type: empty

}; // Native::Router::Bgp::Neighbor::PathAttribute::Discard::Attibute_Type


class Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_value; //type: uint8
        YLeaf end_value; //type: uint8
        YLeaf in; //type: empty

}; // Native::Router::Bgp::Neighbor::PathAttribute::Discard::Range


class Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw : public Entity
{
    public:
        TreatAsWithdraw();
        ~TreatAsWithdraw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attibute_Type; //type: Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type
        class Range; //type: Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type> attibute_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range> range;
        
}; // Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw


class Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type : public Entity
{
    public:
        Attibute_Type();
        ~Attibute_Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint8
        YLeaf in; //type: empty

}; // Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type


class Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_value; //type: uint8
        YLeaf end_value; //type: uint8
        YLeaf in; //type: empty

}; // Native::Router::Bgp::Neighbor::PathAttribute::TreatAsWithdraw::Range


class Native::Router::Bgp::Neighbor::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inout; //type: InoutEnum
        YLeaf route_map_name; //type: string
        class InoutEnum;

}; // Native::Router::Bgp::Neighbor::RouteMap


class Native::Router::Bgp::Neighbor::SendCommunity : public Entity
{
    public:
        SendCommunity();
        ~SendCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_community_where; //type: SendCommunityWhereEnum
        class SendCommunityWhereEnum;

}; // Native::Router::Bgp::Neighbor::SendCommunity


class Native::Router::Bgp::Neighbor::SendLabel : public Entity
{
    public:
        SendLabel();
        ~SendLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_label_explicit; //type: SendLabelExplicitEnum
        class SendLabelExplicitEnum;

}; // Native::Router::Bgp::Neighbor::SendLabel


class Native::Router::Bgp::Neighbor::SlowPeer : public Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Detection; //type: Native::Router::Bgp::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Neighbor::SlowPeer


class Native::Router::Bgp::Neighbor::SlowPeer::Detection : public Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup : public Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dynamic; //type: Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf permanent; //type: empty

}; // Native::Router::Bgp::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Neighbor::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keepalive_interval; //type: uint16
        YLeaf holdtime; //type: uint16
        YLeaf minimum_neighbor_hold; //type: uint16

}; // Native::Router::Bgp::Neighbor::Timers


class Native::Router::Bgp::Neighbor::TranslateUpdate : public Entity
{
    public:
        TranslateUpdate();
        ~TranslateUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4> ipv4;
        
}; // Native::Router::Bgp::Neighbor::TranslateUpdate


class Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4 : public Entity
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

        class Multicast; //type: Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast> multicast; // presence node
        
}; // Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4


class Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty

}; // Native::Router::Bgp::Neighbor::TranslateUpdate::Ipv4::Multicast


class Native::Router::Bgp::Neighbor::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf connection_mode; //type: ConnectionModeEnum
        YLeaf multi_session; //type: empty
        class PathMtuDiscovery; //type: Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery> path_mtu_discovery; // presence node
                class ConnectionModeEnum;

}; // Native::Router::Bgp::Neighbor::Transport


class Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery : public Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::Bgp::Neighbor::Transport::PathMtuDiscovery


class Native::Router::Bgp::Neighbor::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hops; //type: uint8

}; // Native::Router::Bgp::Neighbor::TtlSecurity


class Native::Router::Bgp::Neighbor::UpdateSource : public Entity
{
    public:
        UpdateSource();
        ~UpdateSource();

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
        class AtmSubinterface; //type: Native::Router::Bgp::Neighbor::UpdateSource::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Bgp::Neighbor::UpdateSource::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Bgp::Neighbor::UpdateSource::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::UpdateSource::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::UpdateSource::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::UpdateSource::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::Neighbor::UpdateSource


class Native::Router::Bgp::Neighbor::UpdateSource::AtmSubinterface : public Entity
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

}; // Native::Router::Bgp::Neighbor::UpdateSource::AtmSubinterface


class Native::Router::Bgp::Neighbor::UpdateSource::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Bgp::Neighbor::UpdateSource::AtmAcrsubinterface


class Native::Router::Bgp::Neighbor::UpdateSource::LispSubinterface : public Entity
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

}; // Native::Router::Bgp::Neighbor::UpdateSource::LispSubinterface


class Native::Router::Bgp::Neighbor::UpdateSource::PortChannelSubinterface : public Entity
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

}; // Native::Router::Bgp::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::Neighbor::HaMode : public Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GracefulRestart; //type: Native::Router::Bgp::Neighbor::HaMode::GracefulRestart
        class Sso; //type: Native::Router::Bgp::Neighbor::HaMode::Sso

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::HaMode::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::Neighbor::HaMode


class Native::Router::Bgp::Neighbor::HaMode::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::Bgp::Neighbor::HaMode::GracefulRestart


class Native::Router::Bgp::Neighbor::HaMode::Sso : public Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::Bgp::Neighbor::HaMode::Sso


class Native::Router::Bgp::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: string
        YLeaf backdoor; //type: empty
        YLeaf mask; //type: string
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Network


class Native::Router::Bgp::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Router::Bgp::Redistribute::Application
        class Bgp_; //type: Native::Router::Bgp::Redistribute::Bgp_
        class Connected; //type: Native::Router::Bgp::Redistribute::Connected
        class Dvmrp; //type: Native::Router::Bgp::Redistribute::Dvmrp
        class Eigrp; //type: Native::Router::Bgp::Redistribute::Eigrp
        class Isis; //type: Native::Router::Bgp::Redistribute::Isis
        class Lisp; //type: Native::Router::Bgp::Redistribute::Lisp
        class IsoIgrp; //type: Native::Router::Bgp::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Bgp::Redistribute::Mobile
        class Odr; //type: Native::Router::Bgp::Redistribute::Odr
        class Ospf; //type: Native::Router::Bgp::Redistribute::Ospf
        class Rip; //type: Native::Router::Bgp::Redistribute::Rip
        class Static_; //type: Native::Router::Bgp::Redistribute::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Application> application; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Bgp_> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Dvmrp> dvmrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::IsoIgrp> iso_igrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Bgp::Redistribute


class Native::Router::Bgp::Redistribute::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Name; //type: Native::Router::Bgp::Redistribute::Application::Name

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Application::Name> > name;
        
}; // Native::Router::Bgp::Redistribute::Application


class Native::Router::Bgp::Redistribute::Application::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Application::Name


class Native::Router::Bgp::Redistribute::Bgp_ : public Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_no; //type: one of uint32, string
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Bgp_


class Native::Router::Bgp::Redistribute::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Connected


class Native::Router::Bgp::Redistribute::Dvmrp : public Entity
{
    public:
        Dvmrp();
        ~Dvmrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Redistribute::Dvmrp


class Native::Router::Bgp::Redistribute::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_no; //type: uint16
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Eigrp


class Native::Router::Bgp::Redistribute::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisArea; //type: Native::Router::Bgp::Redistribute::Isis::IsisArea
        class Default_; //type: Native::Router::Bgp::Redistribute::Isis::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Isis::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Isis::IsisArea> > isis_area;
        
}; // Native::Router::Bgp::Redistribute::Isis


class Native::Router::Bgp::Redistribute::Isis::IsisArea : public Entity
{
    public:
        IsisArea();
        ~IsisArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ip; //type: empty
        YLeaf clns; //type: empty
        YLeaf routes; //type: RoutesEnum
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string
        class RoutesEnum;

}; // Native::Router::Bgp::Redistribute::Isis::IsisArea


class Native::Router::Bgp::Redistribute::Isis::Default_ : public Entity
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

        YLeaf ip; //type: empty
        YLeaf clns; //type: empty
        YLeaf routes; //type: RoutesEnum
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string
        class RoutesEnum;

}; // Native::Router::Bgp::Redistribute::Isis::Default_


class Native::Router::Bgp::Redistribute::Lisp : public Entity
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

        YLeaf include_connected; //type: empty
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Lisp


class Native::Router::Bgp::Redistribute::IsoIgrp : public Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsoIgrpArea; //type: Native::Router::Bgp::Redistribute::IsoIgrp::IsoIgrpArea
        class Default_; //type: Native::Router::Bgp::Redistribute::IsoIgrp::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::IsoIgrp::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::IsoIgrp::IsoIgrpArea> > iso_igrp_area;
        
}; // Native::Router::Bgp::Redistribute::IsoIgrp


class Native::Router::Bgp::Redistribute::IsoIgrp::IsoIgrpArea : public Entity
{
    public:
        IsoIgrpArea();
        ~IsoIgrpArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf route_map; //type: string
        YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Redistribute::IsoIgrp::IsoIgrpArea


class Native::Router::Bgp::Redistribute::IsoIgrp::Default_ : public Entity
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

        YLeaf route_map; //type: string
        YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Redistribute::IsoIgrp::Default_


class Native::Router::Bgp::Redistribute::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Mobile


class Native::Router::Bgp::Redistribute::Odr : public Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Odr


class Native::Router::Bgp::Redistribute::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        class Vrf; //type: Native::Router::Bgp::Redistribute::Ospf::Vrf
        class NonVrf; //type: Native::Router::Bgp::Redistribute::Ospf::NonVrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Ospf::NonVrf> non_vrf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Ospf::Vrf> > vrf;
        
}; // Native::Router::Bgp::Redistribute::Ospf


class Native::Router::Bgp::Redistribute::Ospf::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::Redistribute::Ospf::Vrf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Ospf::Vrf::Match> match;
        
}; // Native::Router::Bgp::Redistribute::Ospf::Vrf


class Native::Router::Bgp::Redistribute::Ospf::Vrf::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Router::Bgp::Redistribute::Ospf::Vrf::Match


class Native::Router::Bgp::Redistribute::Ospf::NonVrf : public Entity
{
    public:
        NonVrf();
        ~NonVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::Redistribute::Ospf::NonVrf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Ospf::NonVrf::Match> match;
        
}; // Native::Router::Bgp::Redistribute::Ospf::NonVrf


class Native::Router::Bgp::Redistribute::Ospf::NonVrf::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal; //type: empty
        YLeaf external; //type: RedistOspfExternalTypeEnum
        YLeaf external2; //type: RedistOspfExternalTypeEnum
        YLeaf nssa_external; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Ospf::NonVrf::Match


class Native::Router::Bgp::Redistribute::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Rip


class Native::Router::Bgp::Redistribute::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::Bgp::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::Bgp::Redistribute::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::Bgp::Redistribute::Static_


class Native::Router::Bgp::Redistribute::Static_::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Redistribute::Static_::Clns


class Native::Router::Bgp::Redistribute::Static_::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Bgp::Redistribute::Static_::Ip


class Native::Router::Bgp::TableMap : public Entity
{
    public:
        TableMap();
        ~TableMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf filter; //type: empty

}; // Native::Router::Bgp::TableMap


class Native::Router::Bgp::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::Router::Bgp::Snmp::Context

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Snmp::Context> context;
        
}; // Native::Router::Bgp::Snmp


class Native::Router::Bgp::Snmp::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context_Word; //type: Native::Router::Bgp::Snmp::Context::Context_Word

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Snmp::Context::Context_Word> > context_word;
        
}; // Native::Router::Bgp::Snmp::Context


class Native::Router::Bgp::Snmp::Context::Context_Word : public Entity
{
    public:
        Context_Word();
        ~Context_Word();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_word; //type: string

}; // Native::Router::Bgp::Snmp::Context::Context_Word


class Native::Router::Bgp::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class WithVrf; //type: Native::Router::Bgp::AddressFamily::WithVrf
        class NoVrf; //type: Native::Router::Bgp::AddressFamily::NoVrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf> no_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf> with_vrf;
        
}; // Native::Router::Bgp::AddressFamily


class Native::Router::Bgp::AddressFamily::WithVrf : public Entity
{
    public:
        WithVrf();
        ~WithVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4
        class Ipv6; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4> > ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv6> > ipv6;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4 : public Entity
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

        YLeaf af_name; //type: Bgp_Ipv4_Af_TypeEnum
        class Vrf; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf> > vrf;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf default_metric; //type: uint32
        YLeaf synchronization; //type: empty
        YLeaf auto_summary; //type: boolean
        class AggregateAddress; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::AggregateAddress
        class Bgp_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::DefaultInformation
        class Distance; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Distance
        class DistributeList; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::MaximumPaths
        class Neighbor; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor
        class Network; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Network
        class Redistribute; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute
        class TableMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::TableMap
        class Snmp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::AggregateAddress> aggregate_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Distance> distance;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::DistributeList> > distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::MaximumPaths> maximum_paths;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Snmp> snmp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::TableMap> table_map; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::AggregateAddress : public Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mask; //type: string
        YLeaf advertise_map; //type: string
        YLeaf as_set; //type: empty
        YLeaf attribute_map; //type: string
        YLeaf as_override; //type: empty
        YLeaf route_map; //type: string
        YLeaf summary_only; //type: empty
        YLeaf suppress_map; //type: string

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::AggregateAddress


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_ : public Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf always_compare_med; //type: empty
        YLeaf aggregate_timer; //type: uint8
        YLeaf advertise_best_external; //type: empty
        YLeaf cluster_id; //type: one of uint32, string
        YLeaf deterministic_med; //type: empty
        YLeaf dmzlink_bw; //type: empty
        YLeaf enforce_first_as; //type: empty
        YLeaf enhanced_error; //type: empty
        YLeaf fast_external_fallover; //type: boolean
        YLeaf log_neighbor_changes; //type: empty
        YLeaf maxas_limit; //type: uint16
        YLeaf maxcommunity_limit; //type: uint16
        YLeaf redistribute_internal; //type: empty
        YLeaf scan_time; //type: uint8
        YLeaf soft_reconfig_backup; //type: empty
        YLeaf suppress_inactive; //type: empty
        YLeaf update_delay; //type: uint16
        class Asnotation; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Asnotation
        class NopeerupDelay; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::NopeerupDelay
        class Recursion; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Recursion
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths
        class Bestpath; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath
        class ClientToClient; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ClientToClient
        class Confederation; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation
        class ConsistencyChecker; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker
        class Dampening; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening
        class Default_; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Default_
        class GracefulRestart; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::GracefulRestart
        class HaMode; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode
        class InjectMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::InjectMap
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup
        class Nexthop; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop
        class Regexp; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Regexp
        class Transport; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Asnotation> asnotation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath> bestpath;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ClientToClient> client_to_client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation> confederation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker> consistency_checker;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode> ha_mode;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::InjectMap> > inject_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop> nexthop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::NopeerupDelay> nopeerup_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Recursion> recursion;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Regexp> regexp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::RouteMap> route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup> update_group;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Asnotation : public Entity
{
    public:
        Asnotation();
        ~Asnotation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Asnotation


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::NopeerupDelay : public Entity
{
    public:
        NopeerupDelay();
        ~NopeerupDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cold_boot; //type: uint16
        YLeaf nsf_switchover; //type: uint16
        YLeaf post_boot; //type: uint16
        YLeaf user_initiated; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::NopeerupDelay


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Recursion : public Entity
{
    public:
        Recursion();
        ~Recursion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Recursion


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths : public Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf install; //type: empty
        YLeaf receive; //type: empty
        class Select; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select : public Entity
{
    public:
        Select();
        ~Select();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Best; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best : public Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range> > range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf group_best; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf best_external; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best : public Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range> > range;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::BestExternal : public Entity
{
    public:
        BestExternal();
        ~BestExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backup; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::GroupBest : public Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath : public Entity
{
    public:
        Bestpath();
        ~Bestpath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf compare_routerid; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::CostCommunity
        class IgpMetric; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::IgpMetric
        class Med; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::CostCommunity> cost_community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::IgpMetric> igp_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med> med;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::CostCommunity : public Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::CostCommunity


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::IgpMetric : public Entity
{
    public:
        IgpMetric();
        ~IgpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::IgpMetric


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med : public Entity
{
    public:
        Med();
        ~Med();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf missing_at_worst; //type: empty
        class Confed; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med::Confed

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med::Confed> confed; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med::Confed : public Entity
{
    public:
        Confed();
        ~Confed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf missing_at_worst; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Bestpath::Med::Confed


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ClientToClient : public Entity
{
    public:
        ClientToClient();
        ~ClientToClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reflection; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ClientToClient


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation : public Entity
{
    public:
        Confederation();
        ~Confederation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf identifier; //type: uint32
        class Peers; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation::Peers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation::Peers> peers;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList peers_as; //type: list of  uint32

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Confederation::Peers


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker : public Entity
{
    public:
        ConsistencyChecker();
        ~ConsistencyChecker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AutoRepair; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::AutoRepair
        class ErrorMessage; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::ErrorMessage

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::AutoRepair> auto_repair; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::ErrorMessage> error_message; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::AutoRepair : public Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::AutoRepair


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::ErrorMessage : public Entity
{
    public:
        ErrorMessage();
        ~ErrorMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::ConsistencyChecker::ErrorMessage


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Dampen; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening::Dampen

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening::Dampen : public Entity
{
    public:
        Dampen();
        ~Dampen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf half_life_time; //type: uint8
        YLeaf reuse_time; //type: uint16
        YLeaf suppress_time; //type: uint16
        YLeaf max_suppress_time; //type: uint8

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Dampening::Dampen


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Default_ : public Entity
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

        YLeaf ipv4_unicast; //type: boolean
        YLeaf ipv6_nexthop; //type: empty
        YLeaf local_preference; //type: uint32
        YLeaf route_target; //type: RouteTargetEnum
        class RouteTargetEnum;

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Default_


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended; //type: empty
        YLeaf restart_time; //type: uint16
        YLeaf stalepath_time; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::GracefulRestart


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode : public Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sso; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode::Sso

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode::Sso : public Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefer; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::HaMode::Sso


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::InjectMap : public Entity
{
    public:
        InjectMap();
        ~InjectMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf exist_map; //type: string
        YLeaf copy_attributes; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::InjectMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::RouteMap


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer : public Entity
{
    public:
        SlowPeer();
        ~SlowPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Detection; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::Detection : public Entity
{
    public:
        Detection();
        ~Detection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf threshold; //type: uint16

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup : public Entity
{
    public:
        SplitUpdateGroup();
        ~SplitUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf permanent; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup : public Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Split; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup::Split

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup::Split> split;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup::Split : public Entity
{
    public:
        Split();
        ~Split();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_override; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::UpdateGroup::Split


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Trigger; //type: Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop::Trigger

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop::Trigger : public Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint8
        YLeaf enable; //type: boolean

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Regexp : public Entity
{
    public:
        Regexp();
        ~Regexp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deterministic; //type: empty

}; // Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Regexp

class Native::Router::Bgp::Neighbor::Capability::Orf::PrefixListEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf send;

};

class Native::Router::Bgp::Neighbor::DistributeList::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::Neighbor::FilterList::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::Neighbor::PrefixList::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::Neighbor::RouteMap::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::Neighbor::SendCommunity::SendCommunityWhereEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf extended;
        static const Enum::YLeaf standard;

};

class Native::Router::Bgp::Neighbor::SendLabel::SendLabelExplicitEnum : public Enum
{
    public:
        static const Enum::YLeaf explicit_null;

};

class Native::Router::Bgp::Neighbor::Transport::ConnectionModeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class Native::Router::Bgp::Redistribute::Isis::IsisArea::RoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::Redistribute::Isis::Default_::RoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Bgp_::Default_::RouteTargetEnum : public Enum
{
    public:
        static const Enum::YLeaf filter;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_85_ */

