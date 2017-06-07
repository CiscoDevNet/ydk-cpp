#ifndef _CISCO_IOS_XE_NATIVE_95_
#define _CISCO_IOS_XE_NATIVE_95_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_85.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_94.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf originate; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DefaultInformation


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance : public Entity
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

        class Bgp_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_
        class AdmDistance; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance> > adm_distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_> bgp;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_ : public Entity
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

        YLeaf extern_as; //type: uint16
        YLeaf internal_as; //type: uint16
        YLeaf local; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance : public Entity
{
    public:
        AdmDistance();
        ~AdmDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distance; //type: uint16
        YLeaf srcip; //type: string
        YLeaf wildbits; //type: string
        YLeaf acl; //type: one of uint16, string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList : public Entity
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

        YLeaf id; //type: one of uint16, string
        class In; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::In
        class Out; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::Out> out; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::In


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::DistributeList::Out


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths : public Entity
{
    public:
        MaximumPaths();
        ~MaximumPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaxPath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter
        class Eibgp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp
        class Ibgp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp> eibgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp> ibgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath> max_path;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp : public Entity
{
    public:
        Eibgp();
        ~Eibgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaxPath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::ExternalRtfilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::MaxPath> max_path;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::MaxPath


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Eibgp::ExternalRtfilter


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp : public Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UnequalCost; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost
        class MaxPath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::ExternalRtfilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::MaxPath> max_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost> unequal_cost;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost : public Entity
{
    public:
        UnequalCost();
        ~UnequalCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MaxPath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::MaxPath> max_path;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::MaxPath


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::MaxPath : public Entity
{
    public:
        MaxPath();
        ~MaxPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::MaxPath


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::ExternalRtfilter : public Entity
{
    public:
        ExternalRtfilter();
        ~ExternalRtfilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::ExternalRtfilter


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf remote_as; //type: uint16
        YLeaf activate; //type: empty
        YLeaf allow_policy; //type: empty
        YLeaf advertisement_interval; //type: uint16
        YLeaf cluster_id; //type: one of uint32, string
        YLeaf description; //type: string
        YLeaf disable_connected_check; //type: empty
        YLeaf dmzlink_bw; //type: empty
        YLeaf next_hop_self; //type: empty
        YLeaf next_hop_unchanged; //type: empty
        YLeaf remove_private_as; //type: empty
        YLeaf route_reflector_client; //type: empty
        YLeaf route_reflector_cluster_id; //type: one of uint32, string
        YLeaf shutdown; //type: empty
        YLeaf soft_reconfiguration; //type: SoftReconfigurationEnum
        YLeaf unsuppress_map; //type: string
        YLeaf version; //type: uint16
        YLeaf weight; //type: uint16
        class PeerGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup
        class LocalAs; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths
        class Advertise; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise
        class AdvertiseMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap
        class Aigp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp
        class Announce; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce
        class AllowasIn; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn
        class AsOverride; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride
        class Capability; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate
        class DistributeList; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList
        class EbgpMultihop; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop
        class FallOver; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver
        class FilterList; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit
        class LogNeighborChanges; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges
        class MaximumPrefix; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix
        class Password; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Password
        class PrefixList; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList
        class PathAttribute; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity
        class SendLabel; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer
        class Timers; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers
        class TranslateUpdate; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate
        class Transport; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport
        class TtlSecurity; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity
        class UpdateSource; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource
        class HaMode; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths> additional_paths;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap> advertise_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp> aigp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce> announce;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride> as_override; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability> capability;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate> default_originate; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList> > distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop> ebgp_multihop; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver> fall_over;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList> > filter_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode> ha_mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit> inherit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs> local_as; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges> log_neighbor_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute> path_attribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup> peer_group; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList> > prefix_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap> > route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel> send_label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer> slow_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate> translate_update;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport> transport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity> ttl_security;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource> update_source;
                class SoftReconfigurationEnum;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup : public Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_group_name; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths : public Entity
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
        class Send; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise : public Entity
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
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths : public Entity
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

        class All; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All : public Entity
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

        class Best; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best : public Entity
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

        class BestRange; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best : public Entity
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

        class BestRange; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public Entity
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
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath : public Entity
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
        class Backup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap : public Entity
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

        class Name; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name> > name;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp : public Entity
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

        class Send; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send> send;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send : public Entity
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
        class CostCommunity; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity> cost_community;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity : public Entity
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

        class CcRange; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange> > cc_range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange : public Entity
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
        class Poi; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi> poi;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi : public Entity
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

        class IgpCost; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost
        class PreBestpath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost> igp_cost; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath> pre_bestpath; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce : public Entity
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

        class Rpki; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki> rpki;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability : public Entity
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

        class Orf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver : public Entity
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

        class Bfd; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd> bfd; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd : public Entity
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


}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Password : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Password


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute : public Entity
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

        class Discard; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard
        class TreatAsWithdraw; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard> discard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw> treat_as_withdraw;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard : public Entity
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

        class Attibute_Type; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type
        class Range; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type> attibute_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw : public Entity
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

        class Attibute_Type; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type
        class Range; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type> attibute_type;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range> range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer : public Entity
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

        class Detection; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup : public Entity
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

        class Dynamic; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate : public Entity
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

        class Ipv4; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4> ipv4;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4 : public Entity
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

        class Multicast; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast> multicast; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport : public Entity
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
        class PathMtuDiscovery; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery> path_mtu_discovery; // presence node
                class ConnectionModeEnum;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource : public Entity
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
        class AtmSubinterface; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode : public Entity
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

        class GracefulRestart; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart
        class Sso; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Network : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Network


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute : public Entity
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

        class Application; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application
        class Bgp_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_
        class Connected; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected
        class Dvmrp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp
        class Eigrp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp
        class Isis; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis
        class Lisp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp
        class IsoIgrp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile
        class Odr; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr
        class Ospf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf
        class Rip; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip
        class Static_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application> application; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp> dvmrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp> iso_igrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application : public Entity
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

        class Name; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name> > name;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_ : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis : public Entity
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

        class IsisArea; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea
        class Default_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea> > isis_area;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_ : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp : public Entity
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

        class IsoIgrpArea; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea
        class Default_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea> > iso_igrp_area;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_ : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf : public Entity
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
        class Vrf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf
        class NonVrf; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf> non_vrf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf> > vrf;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf : public Entity
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
        class Match; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf::Match> match;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf::Match : public Entity
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


}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf::Match


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf : public Entity
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
        class Match; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match> match;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_ : public Entity
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
        class Clns; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::TableMap : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::TableMap


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp : public Entity
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

        class Context; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context> context;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context : public Entity
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

        class Context_Word; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word> > context_word;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context


class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word : public Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word


class Native::Router::Bgp::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PeerPolicy; //type: Native::Router::Bgp::Template_::PeerPolicy
        class PeerSession; //type: Native::Router::Bgp::Template_::PeerSession

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerPolicy> > peer_policy;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession> > peer_session;
        
}; // Native::Router::Bgp::Template_


class Native::Router::Bgp::Template_::PeerPolicy : public Entity
{
    public:
        PeerPolicy();
        ~PeerPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class RouteMap; //type: Native::Router::Bgp::Template_::PeerPolicy::RouteMap
        class FilterList; //type: Native::Router::Bgp::Template_::PeerPolicy::FilterList
        class Inherit; //type: Native::Router::Bgp::Template_::PeerPolicy::Inherit

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerPolicy::FilterList> > filter_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerPolicy::Inherit> inherit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerPolicy::RouteMap> > route_map;
        
}; // Native::Router::Bgp::Template_::PeerPolicy


class Native::Router::Bgp::Template_::PeerPolicy::RouteMap : public Entity
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

        YLeaf name; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Bgp::Template_::PeerPolicy::RouteMap


class Native::Router::Bgp::Template_::PeerPolicy::FilterList : public Entity
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

        YLeaf filter_range; //type: uint16
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Bgp::Template_::PeerPolicy::FilterList


class Native::Router::Bgp::Template_::PeerPolicy::Inherit : public Entity
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

        class PeerPolicy_; //type: Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_> peer_policy;
        
}; // Native::Router::Bgp::Template_::PeerPolicy::Inherit


class Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_ : public Entity
{
    public:
        PeerPolicy_();
        ~PeerPolicy_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template__; //type: Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_::Template__

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_::Template__> > template_;
        
}; // Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_


class Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_::Template__ : public Entity
{
    public:
        Template__();
        ~Template__();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf range; //type: uint16

}; // Native::Router::Bgp::Template_::PeerPolicy::Inherit::PeerPolicy_::Template__


class Native::Router::Bgp::Template_::PeerSession : public Entity
{
    public:
        PeerSession();
        ~PeerSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf remote_as; //type: one of uint32, string
        class Password; //type: Native::Router::Bgp::Template_::PeerSession::Password
        class UpdateSource; //type: Native::Router::Bgp::Template_::PeerSession::UpdateSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession::UpdateSource> update_source;
        
}; // Native::Router::Bgp::Template_::PeerSession


class Native::Router::Bgp::Template_::PeerSession::Password : public Entity
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

        YLeaf password; //type: string
        class PasswordRange; //type: Native::Router::Bgp::Template_::PeerSession::Password::PasswordRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession::Password::PasswordRange> > password_range;
        
}; // Native::Router::Bgp::Template_::PeerSession::Password


class Native::Router::Bgp::Template_::PeerSession::Password::PasswordRange : public Entity
{
    public:
        PasswordRange();
        ~PasswordRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encruption_type_range; //type: uint8
        YLeaf password; //type: string

}; // Native::Router::Bgp::Template_::PeerSession::Password::PasswordRange


class Native::Router::Bgp::Template_::PeerSession::UpdateSource : public Entity
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
        class AtmSubinterface; //type: Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Bgp::Template_::PeerSession::UpdateSource::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::Template_::PeerSession::UpdateSource::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession::UpdateSource::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Template_::PeerSession::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::Template_::PeerSession::UpdateSource


class Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmSubinterface : public Entity
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

}; // Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmSubinterface


class Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Bgp::Template_::PeerSession::UpdateSource::AtmAcrsubinterface


class Native::Router::Bgp::Template_::PeerSession::UpdateSource::LispSubinterface : public Entity
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

}; // Native::Router::Bgp::Template_::PeerSession::UpdateSource::LispSubinterface


class Native::Router::Bgp::Template_::PeerSession::UpdateSource::PortChannelSubinterface : public Entity
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

}; // Native::Router::Bgp::Template_::PeerSession::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::Timers : public Entity
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

        class Bgp_; //type: Native::Router::Bgp::Timers::Bgp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Bgp::Timers::Bgp_> bgp;
        
}; // Native::Router::Bgp::Timers


class Native::Router::Bgp::Timers::Bgp_ : public Entity
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

        YLeaf keepalive_interval; //type: uint16
        YLeaf holdtime; //type: uint16
        YLeaf minimum_neighbor_hold; //type: uint16

}; // Native::Router::Bgp::Timers::Bgp_


class Native::Router::Eigrp : public Entity
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

        YLeaf id; //type: one of uint16, string
        YLeaf auto_summary; //type: empty
        YLeaf maximum_paths; //type: uint8
        YLeaf nsf; //type: empty
        YLeaf shutdown; //type: empty
        YLeaf variance; //type: uint8
        class PassiveInterface; //type: Native::Router::Eigrp::PassiveInterface
        class AddressFamily; //type: Native::Router::Eigrp::AddressFamily
        class AfInterface; //type: Native::Router::Eigrp::AfInterface
        class Bfd; //type: Native::Router::Eigrp::Bfd
        class DefaultInformation; //type: Native::Router::Eigrp::DefaultInformation
        class DefaultMetric; //type: Native::Router::Eigrp::DefaultMetric
        class Distance; //type: Native::Router::Eigrp::Distance
        class DistributeList; //type: Native::Router::Eigrp::DistributeList
        class Eigrp_; //type: Native::Router::Eigrp::Eigrp_
        class Metric; //type: Native::Router::Eigrp::Metric
        class Neighbor; //type: Native::Router::Eigrp::Neighbor
        class Network; //type: Native::Router::Eigrp::Network
        class OffsetList; //type: Native::Router::Eigrp::OffsetList
        class Redistribute; //type: Native::Router::Eigrp::Redistribute
        class SummaryMetric; //type: Native::Router::Eigrp::SummaryMetric
        class Timers; //type: Native::Router::Eigrp::Timers
        class TrafficShare; //type: Native::Router::Eigrp::TrafficShare

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily> > address_family;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AfInterface> > af_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultMetric> default_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Eigrp_> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor> neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::OffsetList> offset_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::SummaryMetric> summary_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::TrafficShare> traffic_share;
        
}; // Native::Router::Eigrp


class Native::Router::Eigrp::PassiveInterface : public Entity
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
        YLeaf tunnel; //type: uint32
        YLeaf vlan; //type: uint16
        YLeaf default_; //type: empty

}; // Native::Router::Eigrp::PassiveInterface


class Native::Router::Eigrp::AddressFamily : public Entity
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

        YLeaf type; //type: TypeEnum
        class AfIpList; //type: Native::Router::Eigrp::AddressFamily::AfIpList
        class AfIpVrfList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList> > af_ip_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList> > af_ip_vrf_list;
                class TypeEnum;

}; // Native::Router::Eigrp::AddressFamily


class Native::Router::Eigrp::AddressFamily::AfIpList : public Entity
{
    public:
        AfIpList();
        ~AfIpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast_multicast; //type: UnicastMulticastEnum
        YLeaf autonomous_system; //type: uint16
        YLeaf auto_summary; //type: empty
        YLeaf maximum_paths; //type: uint8
        YLeaf nsf; //type: empty
        YLeaf shutdown; //type: empty
        YLeaf variance; //type: uint8
        class AfInterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface
        class Bfd; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd
        class DefaultInformation; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation
        class DefaultMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric
        class Distance; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance
        class DistributeList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Metric
        class Neighbor; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor
        class Network; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Network
        class OffsetList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList
        class Redistribute; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute
        class SummaryMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric
        class Timers; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers
        class TrafficShare; //type: Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare
        class Topology; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface> > af_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric> default_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor> neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList> offset_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric> summary_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology> topology;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare> traffic_share;
                class UnicastMulticastEnum;

}; // Native::Router::Eigrp::AddressFamily::AfIpList


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface : public Entity
{
    public:
        AfInterface();
        ~AfInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf bandwidth_percent; //type: uint32
        YLeaf hello_interval; //type: uint16
        YLeaf hold_time; //type: uint16
        YLeaf passive_interface; //type: empty
        YLeaf split_horizon; //type: boolean
        class Authentication; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication
        class SummaryAddress; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress> summary_address;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        class Mode; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode> mode;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf md5; //type: empty
        class HmacSha256; //type: Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256> hmac_sha_256;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256 : public Entity
{
    public:
        HmacSha256();
        ~HmacSha256();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::Authentication::Mode::HmacSha256


class Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress : public Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::AfInterface::SummaryAddress


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd : public Entity
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
        class Interface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface> interface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface : public Entity
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
        class AtmSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmSubinterface

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SoftReconfigurationEnum : public Enum
{
    public:
        static const Enum::YLeaf inbound;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::PrefixListEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf send;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::InoutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::SendCommunityWhereEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf extended;
        static const Enum::YLeaf standard;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::SendLabelExplicitEnum : public Enum
{
    public:
        static const Enum::YLeaf explicit_null;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::ConnectionModeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::RoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::RoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Eigrp::AddressFamily::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class Native::Router::Eigrp::AddressFamily::AfIpList::UnicastMulticastEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_95_ */

