#ifndef _CISCO_IOS_XE_NATIVE_72_
#define _CISCO_IOS_XE_NATIVE_72_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_71.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best : public Entity
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

        class BestRange; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange> > best_range;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange : public Entity
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

        YLeaf best_range; //type: uint8
        YLeaf all; //type: empty
        YLeaf group_best; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange : public Entity
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

        class AdvPath; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath> > adv_path;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath : public Entity
{
    public:
        AdvPath();
        ~AdvPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adv_path; //type: uint8
        YLeaf adv_path0; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest : public Entity
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
        YLeaf best_range; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest


class Native::RouteMap::RouteMapSeq::Match::AsPath : public Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList access_list; //type: list of  uint16

}; // Native::RouteMap::RouteMapSeq::Match::AsPath


class Native::RouteMap::RouteMapSeq::Match::Clns : public Entity
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

        YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Clns


class Native::RouteMap::RouteMapSeq::Match::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Community


class Native::RouteMap::RouteMapSeq::Match::Extcommunity : public Entity
{
    public:
        Extcommunity();
        ~Extcommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Extcommunity


class Native::RouteMap::RouteMapSeq::Match::Interface : public Entity
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

        YLeafList interface; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Interface


class Native::RouteMap::RouteMapSeq::Match::Ip : public Entity
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

        class Address; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Address
        class Flowspec; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Match::Ip::NextHop
        class RedistributionSource; //type: Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource
        class RouteSource; //type: Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec> flowspec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource> redistribution_source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource> route_source;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ip


class Native::RouteMap::RouteMapSeq::Match::Ip::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList access_list; //type: list of  one of uint16, string
        YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Address


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec : public Entity
{
    public:
        Flowspec();
        ~Flowspec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx
        class SrcPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx> dest_pfx;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx> src_pfx;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx : public Entity
{
    public:
        DestPfx();
        ~DestPfx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList access_list; //type: list of  one of uint16, string
        YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx : public Entity
{
    public:
        SrcPfx();
        ~SrcPfx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList access_list; //type: list of  one of uint16, string
        YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx


class Native::RouteMap::RouteMapSeq::Match::Ip::NextHop : public Entity
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

        YLeafList access_list; //type: list of  one of uint16, string
        YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::NextHop


class Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource : public Entity
{
    public:
        RedistributionSource();
        ~RedistributionSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList access_list; //type: list of  one of uint16, string
        YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource


class Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource : public Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList access_list; //type: list of  one of uint16, string
        YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource


class Native::RouteMap::RouteMapSeq::Match::Ipv6 : public Entity
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

        class Address; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Address
        class Flowspec; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop
        class RouteSource; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec> flowspec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource> route_source;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ipv6


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: string
        YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Address


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec : public Entity
{
    public:
        Flowspec();
        ~Flowspec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx
        class SrcPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx> dest_pfx;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx> src_pfx;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx : public Entity
{
    public:
        DestPfx();
        ~DestPfx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: string
        YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx : public Entity
{
    public:
        SrcPfx();
        ~SrcPfx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: string
        YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx


class Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop : public Entity
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

        YLeaf access_list; //type: string
        YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop


class Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource : public Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list; //type: string
        YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource


class Native::RouteMap::RouteMapSeq::Match::Length : public Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lengths; //type: Native::RouteMap::RouteMapSeq::Match::Length::Lengths

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Length::Lengths> > lengths;
        
}; // Native::RouteMap::RouteMapSeq::Match::Length


class Native::RouteMap::RouteMapSeq::Match::Length::Lengths : public Entity
{
    public:
        Lengths();
        ~Lengths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min_len; //type: uint32
        YLeaf max_len; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Match::Length::Lengths


class Native::RouteMap::RouteMapSeq::Match::LocalPreference : public Entity
{
    public:
        LocalPreference();
        ~LocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList values; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::LocalPreference


class Native::RouteMap::RouteMapSeq::Match::MdtGroup : public Entity
{
    public:
        MdtGroup();
        ~MdtGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::MdtGroup


class Native::RouteMap::RouteMapSeq::Match::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: string
        YLeaf external; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Metric


class Native::RouteMap::RouteMapSeq::Match::PolicyList : public Entity
{
    public:
        PolicyList();
        ~PolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList policy_map_names; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::PolicyList


class Native::RouteMap::RouteMapSeq::Match::RouteType : public Entity
{
    public:
        RouteType();
        ~RouteType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal; //type: empty
        YLeaf level_1; //type: empty
        YLeaf level_2; //type: empty
        YLeaf local; //type: empty
        class External; //type: Native::RouteMap::RouteMapSeq::Match::RouteType::External
        class NssaExternal; //type: Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::RouteType::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal> nssa_external; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::RouteType


class Native::RouteMap::RouteMapSeq::Match::RouteType::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type_1; //type: empty
        YLeaf type_2; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::RouteType::External


class Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal : public Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type_1; //type: empty
        YLeaf type_2; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal


class Native::RouteMap::RouteMapSeq::Match::Rpki : public Entity
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

        YLeaf invalid; //type: empty
        YLeaf not_found; //type: empty
        YLeaf valid; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::Rpki


class Native::RouteMap::RouteMapSeq::Match::SourceProtocol : public Entity
{
    public:
        SourceProtocol();
        ~SourceProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf connected; //type: empty
        YLeaf isis; //type: empty
        YLeaf lisp; //type: empty
        YLeaf mobile; //type: empty
        YLeaf rip; //type: empty
        YLeaf static_; //type: empty
        YLeafList bgp; //type: list of  one of uint32, string
        YLeafList eigrp; //type: list of  string
        YLeafList ospf; //type: list of  string
        YLeafList ospfv3; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::SourceProtocol


class Native::RouteMap::RouteMapSeq::Match::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList tag_value; //type: list of  uint32
        YLeafList ipv4_address; //type: list of  string
        class List; //type: Native::RouteMap::RouteMapSeq::Match::Tag::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Tag::List> list;
        
}; // Native::RouteMap::RouteMapSeq::Match::Tag


class Native::RouteMap::RouteMapSeq::Match::Tag::List : public Entity
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

        YLeafList tag_names; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Tag::List


class Native::RouteTag : public Entity
{
    public:
        RouteTag();
        ~RouteTag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::RouteTag::List
        class Notation; //type: Native::RouteTag::Notation

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::Notation> notation;
        
}; // Native::RouteTag


class Native::RouteTag::List : public Entity
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

        class RtName; //type: Native::RouteTag::List::RtName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName> > rt_name;
        
}; // Native::RouteTag::List


class Native::RouteTag::List::RtName : public Entity
{
    public:
        RtName();
        ~RtName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rt_name; //type: string
        class Deny; //type: Native::RouteTag::List::RtName::Deny
        class Permit; //type: Native::RouteTag::List::RtName::Permit
        class Seq; //type: Native::RouteTag::List::RtName::Seq

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Permit> permit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq> seq;
        
}; // Native::RouteTag::List::RtName


class Native::RouteTag::List::RtName::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::RouteTag::List::RtName::Deny::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Deny::Ipv4> > ipv4;
        
}; // Native::RouteTag::List::RtName::Deny


class Native::RouteTag::List::RtName::Deny::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Deny::Ipv4


class Native::RouteTag::List::RtName::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::RouteTag::List::RtName::Permit::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Permit::Ipv4> > ipv4;
        
}; // Native::RouteTag::List::RtName::Permit


class Native::RouteTag::List::RtName::Permit::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Permit::Ipv4


class Native::RouteTag::List::RtName::Seq : public Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SeqNum; //type: Native::RouteTag::List::RtName::Seq::SeqNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum> > seq_num;
        
}; // Native::RouteTag::List::RtName::Seq


class Native::RouteTag::List::RtName::Seq::SeqNum : public Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seq_num; //type: uint32
        class Deny; //type: Native::RouteTag::List::RtName::Seq::SeqNum::Deny
        class Permit; //type: Native::RouteTag::List::RtName::Seq::SeqNum::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum::Permit> permit;
        
}; // Native::RouteTag::List::RtName::Seq::SeqNum


class Native::RouteTag::List::RtName::Seq::SeqNum::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Seq::SeqNum::Deny


class Native::RouteTag::List::RtName::Seq::SeqNum::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Seq::SeqNum::Permit


class Native::RouteTag::Notation : public Entity
{
    public:
        Notation();
        ~Notation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dotted_decimal; //type: empty

}; // Native::RouteTag::Notation


class Native::Banner : public Entity
{
    public:
        Banner();
        ~Banner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exec; //type: Native::Banner::Exec
        class Login; //type: Native::Banner::Login
        class PromptTimeout; //type: Native::Banner::PromptTimeout
        class Motd; //type: Native::Banner::Motd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Banner::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Banner::Login> login;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Banner::Motd> motd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Banner::PromptTimeout> prompt_timeout;
        
}; // Native::Banner


class Native::Banner::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_marker; //type: string
        YLeaf message; //type: string
        YLeaf end_marker; //type: string

}; // Native::Banner::Exec


class Native::Banner::Login : public Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_marker; //type: string
        YLeaf message; //type: string
        YLeaf end_marker; //type: string

}; // Native::Banner::Login


class Native::Banner::PromptTimeout : public Entity
{
    public:
        PromptTimeout();
        ~PromptTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_marker; //type: string
        YLeaf message; //type: string
        YLeaf end_marker; //type: string

}; // Native::Banner::PromptTimeout


class Native::Banner::Motd : public Entity
{
    public:
        Motd();
        ~Motd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_marker; //type: string
        YLeaf message; //type: string
        YLeaf end_marker; //type: string

}; // Native::Banner::Motd


class Native::TableMap : public Entity
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
        YLeaf default_; //type: one of uint8, enumeration
        class Map; //type: Native::TableMap::Map

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::TableMap::Map> > map;
                class DefaultEnum;

}; // Native::TableMap


class Native::TableMap::Map : public Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf from; //type: uint8
        YLeaf to; //type: uint8

}; // Native::TableMap::Map


class Native::Sdm : public Entity
{
    public:
        Sdm();
        ~Sdm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefer; //type: Native::Sdm::Prefer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Sdm::Prefer> prefer; // presence node
        
}; // Native::Sdm


class Native::Sdm::Prefer : public Entity
{
    public:
        Prefer();
        ~Prefer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty
        YLeaf qos; //type: empty

}; // Native::Sdm::Prefer


class Native::Mls : public Entity
{
    public:
        Mls();
        ~Mls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Mls


class Native::ObjectGroup : public Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Network; //type: Native::ObjectGroup::Network
        class Security; //type: Native::ObjectGroup::Security
        class Service; //type: Native::ObjectGroup::Service

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network> > network;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Security> > security;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service> > service;
        
}; // Native::ObjectGroup


class Native::ObjectGroup::Network : public Entity
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

        YLeaf name; //type: string
        class ObjModeConfigNetworkGroup; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup> obj_mode_config_network_group;
        
}; // Native::ObjectGroup::Network


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup : public Entity
{
    public:
        ObjModeConfigNetworkGroup();
        ~ObjModeConfigNetworkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf group_object; //type: string
        YLeaf host; //type: one of union, string
        class Network_Address; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address
        class Range; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address> > network_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range> range;
        
}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address : public Entity
{
    public:
        Network_Address();
        ~Network_Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_addr; //type: string
        YLeaf ipv4_mask; //type: string

}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Network_Address


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range : public Entity
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

        YLeaf ip_addr_min; //type: string
        YLeaf ip_addr_max; //type: string

}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range


class Native::ObjectGroup::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class SecurityGroup; //type: Native::ObjectGroup::Security::SecurityGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Security::SecurityGroup> security_group;
        
}; // Native::ObjectGroup::Security


class Native::ObjectGroup::Security::SecurityGroup : public Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf group_object; //type: string
        class SecurityGroup_; //type: Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_> security_group;
        
}; // Native::ObjectGroup::Security::SecurityGroup


class Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_ : public Entity
{
    public:
        SecurityGroup_();
        ~SecurityGroup_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint16

}; // Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_


class Native::ObjectGroup::Service : public Entity
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

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf group_object; //type: string
        YLeaf protocal_number; //type: uint8
        YLeaf ahp; //type: empty
        YLeaf eigrp; //type: empty
        YLeaf esp; //type: empty
        YLeaf gre; //type: empty
        YLeaf igmp; //type: empty
        YLeaf ip; //type: empty
        YLeaf ipinip; //type: empty
        YLeaf nos; //type: empty
        YLeaf ospf; //type: empty
        YLeaf pcp; //type: empty
        YLeaf pim; //type: empty
        class Icmp; //type: Native::ObjectGroup::Service::Icmp
        class Tcp; //type: Native::ObjectGroup::Service::Tcp
        class TcpUdp; //type: Native::ObjectGroup::Service::TcpUdp
        class Udp; //type: Native::ObjectGroup::Service::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Icmp> icmp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Tcp> tcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::TcpUdp> tcp_udp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Udp> udp; // presence node
        
}; // Native::ObjectGroup::Service


class Native::ObjectGroup::Service::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_number; //type: uint8
        YLeaf alternate_address; //type: empty
        YLeaf conversion_error; //type: empty
        YLeaf echo; //type: empty
        YLeaf echo_reply; //type: empty
        YLeaf information_reply; //type: empty
        YLeaf information_request; //type: empty
        YLeaf mask_reply; //type: empty
        YLeaf mask_request; //type: empty
        YLeaf mobile_redirect; //type: empty
        YLeaf parameter_problem; //type: empty
        YLeaf redirect; //type: empty
        YLeaf router_advertisement; //type: empty
        YLeaf router_solicitation; //type: empty
        YLeaf source_quench; //type: empty
        YLeaf time_exceeded; //type: empty
        YLeaf timestamp_reply; //type: empty
        YLeaf timestamp_request; //type: empty
        YLeaf traceroute; //type: empty
        YLeaf unreachable; //type: empty

}; // Native::ObjectGroup::Service::Icmp


class Native::ObjectGroup::Service::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TcpPortList; //type: Native::ObjectGroup::Service::Tcp::TcpPortList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Tcp::TcpPortList> > tcp_port_list;
        
}; // Native::ObjectGroup::Service::Tcp


class Native::ObjectGroup::Service::Tcp::TcpPortList : public Entity
{
    public:
        TcpPortList();
        ~TcpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp_port; //type: one of uint16, enumeration
        YLeaf operator_; //type: OperatorEnum
        YLeaf max_tcp_port; //type: one of uint16, enumeration
        class OperatorEnum;

}; // Native::ObjectGroup::Service::Tcp::TcpPortList


class Native::ObjectGroup::Service::TcpUdp : public Entity
{
    public:
        TcpUdp();
        ~TcpUdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UdpPortList; //type: Native::ObjectGroup::Service::TcpUdp::UdpPortList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::TcpUdp::UdpPortList> > udp_port_list;
        
}; // Native::ObjectGroup::Service::TcpUdp


class Native::ObjectGroup::Service::TcpUdp::UdpPortList : public Entity
{
    public:
        UdpPortList();
        ~UdpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf udp_port; //type: one of uint16, enumeration
        YLeaf operator_; //type: OperatorEnum
        YLeaf max_udp_port; //type: one of uint16, enumeration
        class OperatorEnum;

}; // Native::ObjectGroup::Service::TcpUdp::UdpPortList


class Native::ObjectGroup::Service::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UdpPortList; //type: Native::ObjectGroup::Service::Udp::UdpPortList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ObjectGroup::Service::Udp::UdpPortList> > udp_port_list;
        
}; // Native::ObjectGroup::Service::Udp


class Native::ObjectGroup::Service::Udp::UdpPortList : public Entity
{
    public:
        UdpPortList();
        ~UdpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf udp_port; //type: one of uint16, enumeration
        YLeaf operator_; //type: OperatorEnum
        YLeaf max_udp_port; //type: one of uint16, enumeration
        class OperatorEnum;

}; // Native::ObjectGroup::Service::Udp::UdpPortList


class Native::PseudowireClass : public Entity
{
    public:
        PseudowireClass();
        ~PseudowireClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf control_word; //type: empty
        YLeaf interworking; //type: InterworkingEnum
        YLeaf sequencing; //type: SequencingEnum
        class Ip; //type: Native::PseudowireClass::Ip
        class LoadBalance; //type: Native::PseudowireClass::LoadBalance
        class Monitor; //type: Native::PseudowireClass::Monitor
        class PreferredPath; //type: Native::PseudowireClass::PreferredPath
        class ProtocolMpls; //type: Native::PseudowireClass::ProtocolMpls
        class ProtocolL2Tpv2; //type: Native::PseudowireClass::ProtocolL2Tpv2
        class ProtocolL2Tpv3; //type: Native::PseudowireClass::ProtocolL2Tpv3
        class Status; //type: Native::PseudowireClass::Status
        class Switching; //type: Native::PseudowireClass::Switching

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2Tpv2> protocol_l2tpv2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2Tpv3> protocol_l2tpv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolMpls> protocol_mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status> status; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Switching> switching;
                class EncapsulationEnum;
        class InterworkingEnum;
        class SequencingEnum;

}; // Native::PseudowireClass


class Native::PseudowireClass::Ip : public Entity
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

        YLeaf protocol; //type: ProtocolEnum
        YLeaf ttl; //type: uint8
        class Dfbit; //type: Native::PseudowireClass::Ip::Dfbit
        class Local; //type: Native::PseudowireClass::Ip::Local
        class Pmtu; //type: Native::PseudowireClass::Ip::Pmtu
        class Tos; //type: Native::PseudowireClass::Ip::Tos

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Dfbit> dfbit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local> local;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Pmtu> pmtu; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Tos> tos;
                class ProtocolEnum;

}; // Native::PseudowireClass::Ip


class Native::PseudowireClass::Ip::Dfbit : public Entity
{
    public:
        Dfbit();
        ~Dfbit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set; //type: empty

}; // Native::PseudowireClass::Ip::Dfbit


class Native::PseudowireClass::Ip::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::PseudowireClass::Ip::Local::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface> interface;
        
}; // Native::PseudowireClass::Ip::Local


class Native::PseudowireClass::Ip::Local::Interface : public Entity
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
        class AtmSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Ip::Local::Interface


class Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface : public Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::AtmSubinterface


class Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::AtmAcrsubinterface


class Native::PseudowireClass::Ip::Local::Interface::LispSubinterface : public Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::LispSubinterface


class Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface : public Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::Ip::Pmtu : public Entity
{
    public:
        Pmtu();
        ~Pmtu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::PseudowireClass::Ip::Pmtu


class Native::PseudowireClass::Ip::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reflect; //type: empty
        YLeaf value_; //type: uint8

}; // Native::PseudowireClass::Ip::Tos


class Native::PseudowireClass::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::PseudowireClass::LoadBalance::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance::Flow> flow; // presence node
        
}; // Native::PseudowireClass::LoadBalance


class Native::PseudowireClass::LoadBalance::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ethernet; //type: EthernetEnum
        class EthernetEnum;

}; // Native::PseudowireClass::LoadBalance::Flow


class Native::PseudowireClass::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::PseudowireClass::Monitor::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer> peer;
        
}; // Native::PseudowireClass::Monitor


class Native::PseudowireClass::Monitor::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bfd; //type: Native::PseudowireClass::Monitor::Peer::Bfd

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd> bfd; // presence node
        
}; // Native::PseudowireClass::Monitor::Peer


class Native::PseudowireClass::Monitor::Peer::Bfd : public Entity
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

        class Local; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local> local;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd


class Native::PseudowireClass::Monitor::Peer::Bfd::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface> interface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface : public Entity
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
        class AtmSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface : public Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::AtmAcrsubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface : public Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LispSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface : public Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::PreferredPath : public Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::PseudowireClass::PreferredPath::Interface
        class PeerContainer; //type: Native::PseudowireClass::PreferredPath::PeerContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::PeerContainer> peer_container;
        
}; // Native::PseudowireClass::PreferredPath


class Native::PseudowireClass::PreferredPath::Interface : public Entity
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

        YLeaf tunnel; //type: uint64
        YLeaf tunnel_tp; //type: uint16
        YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::Interface


class Native::PseudowireClass::PreferredPath::PeerContainer : public Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: string
        YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::PeerContainer


class Native::PseudowireClass::ProtocolMpls : public Entity
{
    public:
        ProtocolMpls();
        ~ProtocolMpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::PseudowireClass::ProtocolMpls


class Native::PseudowireClass::ProtocolL2Tpv2 : public Entity
{
    public:
        ProtocolL2Tpv2();
        ~ProtocolL2Tpv2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::PseudowireClass::ProtocolL2Tpv2


class Native::PseudowireClass::ProtocolL2Tpv3 : public Entity
{
    public:
        ProtocolL2Tpv3();
        ~ProtocolL2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::PseudowireClass::ProtocolL2Tpv3


class Native::PseudowireClass::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf decoupled; //type: empty
        class AdminDown; //type: Native::PseudowireClass::Status::AdminDown
        class ControlPlane; //type: Native::PseudowireClass::Status::ControlPlane
        class Peer; //type: Native::PseudowireClass::Status::Peer
        class Redundancy; //type: Native::PseudowireClass::Status::Redundancy

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::AdminDown> admin_down;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::ControlPlane> control_plane;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::Redundancy> redundancy;
        
}; // Native::PseudowireClass::Status


class Native::PseudowireClass::Status::AdminDown : public Entity
{
    public:
        AdminDown();
        ~AdminDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disconnect; //type: empty

}; // Native::PseudowireClass::Status::AdminDown


class Native::PseudowireClass::Status::ControlPlane : public Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_watch; //type: empty

}; // Native::PseudowireClass::Status::ControlPlane


class Native::PseudowireClass::Status::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Topology; //type: Native::PseudowireClass::Status::Peer::Topology

        std::shared_ptr<Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer::Topology> topology;
        
}; // Native::PseudowireClass::Status::Peer


class Native::PseudowireClass::Status::Peer::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dual_homed; //type: empty

}; // Native::PseudowireClass::Status::Peer::Topology


class Native::PseudowireClass::Status::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf master; //type: empty

}; // Native::PseudowireClass::Status::Redundancy


class Native::PseudowireClass::Switching : public Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tlv; //type: empty

}; // Native::PseudowireClass::Switching


class Native::ControlPlane : public Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServicePolicy; //type: Native::ControlPlane::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::ControlPlane::ServicePolicy> service_policy;
        
}; // Native::ControlPlane


class Native::ControlPlane::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: string
        YLeaf output; //type: string

}; // Native::ControlPlane::ServicePolicy


class Native::Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CalendarValid; //type: Native::Clock::CalendarValid
        class SummerTime; //type: Native::Clock::SummerTime
        class Timezone; //type: Native::Clock::Timezone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock::CalendarValid> calendar_valid; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock::SummerTime> summer_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Clock::Timezone> timezone;
        
}; // Native::Clock


class Native::Clock::CalendarValid : public Entity
{
    public:
        CalendarValid();
        ~CalendarValid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Clock::CalendarValid


class Native::Clock::SummerTime : public Entity
{
    public:
        SummerTime();
        ~SummerTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf zone; //type: string
        YLeaf date; //type: empty
        YLeaf start_day; //type: uint8
        YLeaf start_month; //type: MonthTypeEnum
        YLeaf start_year; //type: uint32
        YLeaf start_time; //type: string
        YLeaf date_end_day; //type: uint8
        YLeaf date_end_month; //type: MonthTypeEnum
        YLeaf date_end_year; //type: uint32
        YLeaf date_end_time; //type: string
        YLeaf offset; //type: uint16
        YLeaf recurring; //type: empty
        YLeaf recurring_start; //type: one of uint8, enumeration
        YLeaf recurring_start_day; //type: WeekdayTypeEnum
        YLeaf recurring_start_month; //type: MonthTypeEnum
        YLeaf recurring_start_time; //type: string
        YLeaf recurring_end; //type: one of uint8, enumeration
        YLeaf recurring_end_day; //type: WeekdayTypeEnum
        YLeaf recurring_end_month; //type: MonthTypeEnum
        YLeaf recurring_end_time; //type: string
        YLeaf recurring_offset; //type: uint16
        class RecurringStartEnum;
        class RecurringEndEnum;

}; // Native::Clock::SummerTime


class Native::Clock::Timezone : public Entity
{
    public:
        Timezone();
        ~Timezone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf zone; //type: string
        YLeaf offset; //type: OffsetEnum
        YLeaf hours; //type: int8
        YLeaf minutes; //type: int8
        class OffsetEnum;

}; // Native::Clock::Timezone


class Native::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alarm; //type: one of uint8, enumeration
        YLeaf facility; //type: FacilityEnum
        YLeaf hostip; //type: one of union, string
        YLeaf snmp_authfail; //type: empty
        YLeaf buginf; //type: empty
        YLeaf userinfo; //type: empty
        class Discriminator; //type: Native::Logging::Discriminator
        class Persistent; //type: Native::Logging::Persistent
        class MonitorConf; //type: Native::Logging::MonitorConf
        class Monitor; //type: Native::Logging::Monitor
        class Buffered; //type: Native::Logging::Buffered
        class ConsoleConf; //type: Native::Logging::ConsoleConf
        class Console; //type: Native::Logging::Console
        class Event; //type: Native::Logging::Event
        class Esm; //type: Native::Logging::Esm
        class History; //type: Native::Logging::History
        class Host; //type: Native::Logging::Host
        class RateLimitConf; //type: Native::Logging::RateLimitConf
        class RateLimit; //type: Native::Logging::RateLimit
        class SourceInterface; //type: Native::Logging::SourceInterface
        class SnmpTrap; //type: Native::Logging::SnmpTrap
        class Trap; //type: Native::Logging::Trap
        class File; //type: Native::Logging::File

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Buffered> buffered; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Console> console; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::ConsoleConf> console_conf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Discriminator> > discriminator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Esm> esm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::File> file;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::History> history;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Monitor> monitor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::MonitorConf> monitor_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Persistent> persistent; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit> rate_limit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimitConf> rate_limit_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SnmpTrap> snmp_trap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SourceInterface> source_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Trap> trap; // presence node
                class AlarmEnum;
        class FacilityEnum;

}; // Native::Logging


class Native::Logging::Discriminator : public Entity
{
    public:
        Discriminator();
        ~Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class MsgBody; //type: Native::Logging::Discriminator::MsgBody

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Discriminator::MsgBody> msg_body;
        
}; // Native::Logging::Discriminator


class Native::Logging::Discriminator::MsgBody : public Entity
{
    public:
        MsgBody();
        ~MsgBody();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf includes; //type: string

}; // Native::Logging::Discriminator::MsgBody


class Native::Logging::Persistent : public Entity
{
    public:
        Persistent();
        ~Persistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class File; //type: Native::Logging::Persistent::File

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Persistent::File> file;
        
}; // Native::Logging::Persistent


class Native::Logging::Persistent::File : public Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf url; //type: string
        YLeaf size; //type: string
        YLeaf threshold; //type: string
        YLeaf protected_; //type: empty

}; // Native::Logging::Persistent::File


class Native::Logging::MonitorConf : public Entity
{
    public:
        MonitorConf();
        ~MonitorConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf monitor; //type: boolean

}; // Native::Logging::MonitorConf


class Native::Logging::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf severity; //type: one of uint16, enumeration
        class Discriminator; //type: Native::Logging::Monitor::Discriminator

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Monitor::Discriminator> > discriminator;
        
}; // Native::Logging::Monitor


class Native::Logging::Monitor::Discriminator : public Entity
{
    public:
        Discriminator();
        ~Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Monitor::Discriminator


class Native::Logging::Buffered : public Entity
{
    public:
        Buffered();
        ~Buffered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint32
        YLeaf severity; //type: one of uint16, enumeration
        YLeaf xxml; //type: uint32
        class Discriminator; //type: Native::Logging::Buffered::Discriminator

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Buffered::Discriminator> > discriminator;
        
}; // Native::Logging::Buffered


class Native::Logging::Buffered::Discriminator : public Entity
{
    public:
        Discriminator();
        ~Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Buffered::Discriminator


class Native::Logging::ConsoleConf : public Entity
{
    public:
        ConsoleConf();
        ~ConsoleConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf console; //type: boolean

}; // Native::Logging::ConsoleConf


class Native::Logging::Console : public Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filtered; //type: empty
        YLeaf guaranteed; //type: empty
        YLeaf xxml; //type: one of uint16, enumeration
        YLeaf severity; //type: one of uint16, enumeration
        class Discriminator; //type: Native::Logging::Console::Discriminator

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Console::Discriminator> > discriminator;
        
}; // Native::Logging::Console


class Native::Logging::Console::Discriminator : public Entity
{
    public:
        Discriminator();
        ~Discriminator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Console::Discriminator


class Native::Logging::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkStatus; //type: Native::Logging::Event::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Event::LinkStatus> link_status;
        
}; // Native::Logging::Event


class Native::Logging::Event::LinkStatus : public Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf boot; //type: empty
        YLeaf global; //type: empty
        YLeaf default_; //type: empty

}; // Native::Logging::Event::LinkStatus


class Native::Logging::Esm : public Entity
{
    public:
        Esm();
        ~Esm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf config; //type: empty

}; // Native::Logging::Esm


class Native::Logging::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16
        YLeaf severity_level; //type: one of uint8, enumeration
        class SeverityLevelEnum;

}; // Native::Logging::History


class Native::Logging::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4HostList; //type: Native::Logging::Host::Ipv4HostList
        class Ipv6; //type: Native::Logging::Host::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostList> > ipv4_host_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6> ipv6;
        
}; // Native::Logging::Host


class Native::Logging::Host::Ipv4HostList : public Entity
{
    public:
        Ipv4HostList();
        ~Ipv4HostList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_host; //type: one of union, string
        YLeaf vrf; //type: string
        YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv4HostList


class Native::Logging::Host::Ipv6 : public Entity
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

        class Ipv6HostList; //type: Native::Logging::Host::Ipv6::Ipv6HostList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostList> > ipv6_host_list;
        
}; // Native::Logging::Host::Ipv6


class Native::Logging::Host::Ipv6::Ipv6HostList : public Entity
{
    public:
        Ipv6HostList();
        ~Ipv6HostList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_host; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostList


class Native::Logging::RateLimitConf : public Entity
{
    public:
        RateLimitConf();
        ~RateLimitConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate_limit; //type: boolean

}; // Native::Logging::RateLimitConf


class Native::Logging::RateLimit : public Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Console; //type: Native::Logging::RateLimit::Console

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console> console;
        
}; // Native::Logging::RateLimit


class Native::Logging::RateLimit::Console : public Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Logging::RateLimit::Console::Range
        class All; //type: Native::Logging::RateLimit::Console::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All> all;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::Range> > range;
        
}; // Native::Logging::RateLimit::Console


class Native::Logging::RateLimit::Console::Range : public Entity
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

        YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Console::Range::Except

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::Range::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::Range


class Native::Logging::RateLimit::Console::Range::Except : public Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf alerts; //type: empty
        YLeaf critical; //type: empty
        YLeaf debugging; //type: empty
        YLeaf emergencies; //type: empty
        YLeaf errors; //type: empty
        YLeaf informational; //type: empty
        YLeaf notifications; //type: empty
        YLeaf warnings; //type: empty

}; // Native::Logging::RateLimit::Console::Range::Except


class Native::Logging::RateLimit::Console::All : public Entity
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

        class Range; //type: Native::Logging::RateLimit::Console::All::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All::Range> > range;
        
}; // Native::Logging::RateLimit::Console::All


class Native::Logging::RateLimit::Console::All::Range : public Entity
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

        YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Console::All::Range::Except

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All::Range::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::All::Range


class Native::Logging::RateLimit::Console::All::Range::Except : public Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint8
        YLeaf alerts; //type: empty
        YLeaf critical; //type: empty
        YLeaf debugging; //type: empty
        YLeaf emergencies; //type: empty
        YLeaf errors; //type: boolean
        YLeaf informational; //type: empty
        YLeaf notifications; //type: empty
        YLeaf warnings; //type: empty

}; // Native::Logging::RateLimit::Console::All::Range::Except


class Native::Logging::SourceInterface : public Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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
        YLeaf vrf; //type: string
        class AtmSubinterface; //type: Native::Logging::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Logging::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Logging::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Logging::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Logging::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Logging::SourceInterface


class Native::Logging::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Logging::SourceInterface::AtmSubinterface


class Native::Logging::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Logging::SourceInterface::AtmAcrsubinterface


class Native::Logging::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Logging::SourceInterface::LispSubinterface

class Native::TableMap::DefaultEnum : public Enum
{
    public:
        static const Enum::YLeaf copy;
        static const Enum::YLeaf ignore;

};

class Native::ObjectGroup::Service::Tcp::TcpPortList::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf eq;
        static const Enum::YLeaf gt;
        static const Enum::YLeaf lt;
        static const Enum::YLeaf range;

};

class Native::ObjectGroup::Service::TcpUdp::UdpPortList::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf eq;
        static const Enum::YLeaf gt;
        static const Enum::YLeaf lt;
        static const Enum::YLeaf range;

};

class Native::ObjectGroup::Service::Udp::UdpPortList::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf eq;
        static const Enum::YLeaf gt;
        static const Enum::YLeaf lt;
        static const Enum::YLeaf range;

};

class Native::PseudowireClass::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tpv2;
        static const Enum::YLeaf l2tpv3;
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf udp;

};

class Native::PseudowireClass::InterworkingEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf vlan;

};

class Native::PseudowireClass::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf resync;
        static const Enum::YLeaf transmit;

};

class Native::PseudowireClass::Ip::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf uti;

};

class Native::PseudowireClass::LoadBalance::Flow::EthernetEnum : public Enum
{
    public:
        static const Enum::YLeaf dst_mac;
        static const Enum::YLeaf src_dst_mac;
        static const Enum::YLeaf src_mac;

};

class Native::PseudowireClass::ProtocolMpls::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2Tpv2::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tpv2;
        static const Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2Tpv3::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tpv3;
        static const Enum::YLeaf l2tpv3ietf;
        static const Enum::YLeaf none;

};

class Native::Clock::SummerTime::RecurringStartEnum : public Enum
{
    public:
        static const Enum::YLeaf first;
        static const Enum::YLeaf last;

};

class Native::Clock::SummerTime::RecurringEndEnum : public Enum
{
    public:
        static const Enum::YLeaf first;
        static const Enum::YLeaf last;

};

class Native::Clock::Timezone::OffsetEnum : public Enum
{
    public:
        static const Enum::YLeaf Y__PLUS__;
        static const Enum::YLeaf Y_;

};

class Native::Logging::AlarmEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;

};

class Native::Logging::FacilityEnum : public Enum
{
    public:
        static const Enum::YLeaf auth;
        static const Enum::YLeaf cron;
        static const Enum::YLeaf daemon;
        static const Enum::YLeaf kern;
        static const Enum::YLeaf local0;
        static const Enum::YLeaf local1;
        static const Enum::YLeaf local2;
        static const Enum::YLeaf local3;
        static const Enum::YLeaf local4;
        static const Enum::YLeaf local5;
        static const Enum::YLeaf local6;
        static const Enum::YLeaf local7;
        static const Enum::YLeaf lpr;
        static const Enum::YLeaf mail;
        static const Enum::YLeaf news;
        static const Enum::YLeaf sys10;
        static const Enum::YLeaf sys11;
        static const Enum::YLeaf sys12;
        static const Enum::YLeaf sys13;
        static const Enum::YLeaf sys14;
        static const Enum::YLeaf sys9;
        static const Enum::YLeaf syslog;
        static const Enum::YLeaf user;
        static const Enum::YLeaf uucp;

};

class Native::Logging::History::SeverityLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf alerts;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf debugging;
        static const Enum::YLeaf emergencies;
        static const Enum::YLeaf errors;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf notifications;
        static const Enum::YLeaf warnings;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_72_ */

