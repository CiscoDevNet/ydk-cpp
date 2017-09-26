#ifndef _CISCO_IOS_XE_NATIVE_139_
#define _CISCO_IOS_XE_NATIVE_139_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_128.hpp"
#include "Cisco_IOS_XE_native_138.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix
        class Ospf; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf
        class Ospfv3; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3
        class Rip; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip
        class Static_; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp> > eigrp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis> > isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3> > ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::MaximumPrefix


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr


class Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm : public ydk::Entity
{
    public:
        LocReachAlgorithm();
        ~LocReachAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rloc_probing; //type: empty
        class LsbReports; //type: Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm


class Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports : public ydk::Entity
{
    public:
        LsbReports();
        ~LsbReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_transmit; //type: empty
        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports


class Native::Router::Lisp::EidTable::InstanceList::LocatorDown : public ydk::Entity
{
    public:
        LocatorDown();
        ~LocatorDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf ipv4_interface; //type: string
        ydk::YLeaf ipv6_interface; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::LocatorDown


class Native::Router::Lisp::EidTable::InstanceList::LocatorTable : public ydk::Entity
{
    public:
        LocatorTable();
        ~LocatorTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::LocatorTable


class Native::Router::Lisp::EidTable::InstanceList::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf drop; //type: empty
        ydk::YLeaf map_request; //type: empty
        ydk::YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapCache


class Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp


class Native::Router::Lisp::EidTable::InstanceList::MapRequest : public ydk::Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr_rlocs; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::MapRequest


class Native::Router::Lisp::EidTable::InstanceList::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc> rloc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Members; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members> members;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distribute; //type: empty
        class ModifyDiscovered; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered : public ydk::Entity
{
    public:
        ModifyDiscovered();
        ~ModifyDiscovered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf locator_set; //type: string
        class Operator_;

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration


class Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe : public ydk::Entity
{
    public:
        OtherXtrProbe();
        ~OtherXtrProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16

}; // Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe


class Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe : public ydk::Entity
{
    public:
        RemoteRlocProbe();
        ~RemoteRlocProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on_membership_change; //type: empty
        ydk::YLeaf on_route_change; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe


class Native::Router::Lisp::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vxlan; //type: empty

}; // Native::Router::Lisp::Encapsulation


class Native::Router::Lisp::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MapServer; //type: Native::Router::Lisp::Etr::MapServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Etr::MapServer> map_server;
        
}; // Native::Router::Lisp::Etr


class Native::Router::Lisp::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf source_address; //type: string

}; // Native::Router::Lisp::Etr::MapServer


class Native::Router::Lisp::InstanceContainer : public ydk::Entity
{
    public:
        InstanceContainer();
        ~InstanceContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstanceList; //type: Native::Router::Lisp::InstanceContainer::InstanceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList> > instance_list;
        
}; // Native::Router::Lisp::InstanceContainer


class Native::Router::Lisp::InstanceContainer::InstanceList : public ydk::Entity
{
    public:
        InstanceList();
        ~InstanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf disable_ttl_propagate; //type: empty
        class Default_; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_
        class Decapsulation; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation
        class DynamicEid; //type: Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::RemoteRlocProbe
        class Service; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Service

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation> decapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_> default_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::DynamicEid> > dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Service> service; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc


class Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        class Decapsulation; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation
        class DynamicEid; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid
        class LocReachAlgorithm; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe
        class Service; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation> decapsulation;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid> > dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service> service; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf map_notify_group; //type: string
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Prefix; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix> > ipv4_prefix;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix : public ydk::Entity
{
    public:
        Ipv4Prefix();
        ~Ipv4Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::DatabaseMapping::Ipv4Prefix


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify : public ydk::Entity
{
    public:
        EidNotify();
        ~EidNotify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationKey; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey : public ydk::Entity
{
    public:
        GatewayKey();
        ~GatewayKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gateway_ip; //type: string
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm : public ydk::Entity
{
    public:
        LocReachAlgorithm();
        ~LocReachAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rloc_probing; //type: empty
        class LsbReports; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports : public ydk::Entity
{
    public:
        LsbReports();
        ~LsbReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_transmit; //type: empty
        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::LocReachAlgorithm::LsbReports


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc> rloc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Members; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members> members;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distribute; //type: empty
        class ModifyDiscovered; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered : public ydk::Entity
{
    public:
        ModifyDiscovered();
        ~ModifyDiscovered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf locator_set; //type: string
        class Operator_;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe : public ydk::Entity
{
    public:
        OtherXtrProbe();
        ~OtherXtrProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::OtherXtrProbe


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe : public ydk::Entity
{
    public:
        RemoteRlocProbe();
        ~RemoteRlocProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on_membership_change; //type: empty
        ydk::YLeaf on_route_change; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::RemoteRlocProbe


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4
        class Ipv6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6
        class Ethernet; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__
        class EidTable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable
        class BroadcastUnderlay; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr
        class ItrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable
        class Etr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay> broadcast_underlay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay : public ydk::Entity
{
    public:
        BroadcastUnderlay();
        ~BroadcastUnderlay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_multicast; //type: string
        ydk::YLeaf ipv6_multicast; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::BroadcastUnderlay


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont
        class Mac; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac
        class Limit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac> mac; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string
        class Ipv4Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees
        class IPv4Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface
        class IPv6Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface : public ydk::Entity
{
    public:
        IPv4Interface();
        ~IPv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface : public ydk::Entity
{
    public:
        IPv6Interface();
        ~IPv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees : public ydk::Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees : public ydk::Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Limit


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::DatabaseMapping::Mac


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__ : public ydk::Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_request_source; //type: string
        class EidTable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable
        class BroadcastUnderlay; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping
        class Itr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr
        class ItrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable
        class Etr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay> broadcast_underlay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay : public ydk::Entity
{
    public:
        BroadcastUnderlay();
        ~BroadcastUnderlay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_multicast; //type: string
        ydk::YLeaf ipv6_multicast; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::BroadcastUnderlay


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont
        class Mac; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac
        class Limit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac> mac; // presence node
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string
        class Ipv4Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees
        class IPv4Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface
        class IPv6Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface : public ydk::Entity
{
    public:
        IPv4Interface();
        ~IPv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface : public ydk::Entity
{
    public:
        IPv6Interface();
        ~IPv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::IPv6Interface::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees : public ydk::Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees : public ydk::Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::DatabaseMapping::Mac


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EidTable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont> > eid_cont;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        class EtrInterfaceIp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCache::EidCont::EtrInterfaceIp


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::SolicitMapRequest


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EidTable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::EtrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Itr::MapResolver


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::ItrEnable


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont> > eid_cont;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        class EtrInterfaceIp; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::MapCacheLimit


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SiteRegistration


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::SolicitMapRequest


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__
        class EidTable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable
        class Itr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit
        class SiteRegistration; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest
        class Alt; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt
        class Distance; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr
        class RouteImport; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport
        class DatabaseMapping; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Default__> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::RouteImport> route_import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryRoute; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::Alt::SummaryRoute


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont
        class Limit; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf auto_discover_rlocs; //type: empty
        class Ipv4Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees
        class IPv4Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface
        class IPv6Interface; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv6Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv6Interface> > ipv6_interface;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface : public ydk::Entity
{
    public:
        IPv4Interface();
        ~IPv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface


class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ipv4::DatabaseMapping::EidCont::IPv4Interface::DatabaseMappingOption

class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf override;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::EidNotify::GatewayKey::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::DynamicEid::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::MapServer::Rloc::Members::ModifyDiscovered::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf override;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::InstanceContainer::InstanceList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_139_ */

