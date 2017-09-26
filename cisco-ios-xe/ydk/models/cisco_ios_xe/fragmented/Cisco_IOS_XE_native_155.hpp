#ifndef _CISCO_IOS_XE_NATIVE_155_
#define _CISCO_IOS_XE_NATIVE_155_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_147.hpp"
#include "Cisco_IOS_XE_native_154.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::LispList::Default_::Ipv6::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Ipv6::MapServer


class Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister


class Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate::Source : public ydk::Entity
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

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default_::Ipv6::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Ipv6::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16
        ydk::YLeaf min; //type: uint16

}; // Native::Router::LispList::Default_::Ipv6::PathMtuDiscovery


class Native::Router::LispList::Default_::Ipv6::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::LispList::Default_::Ipv6::RouteExport


class Native::Router::LispList::Default_::Ipv6::RouteImport : public ydk::Entity
{
    public:
        RouteImport();
        ~RouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database
        class MapCache; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache> map_cache;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::MaximumPrefix
        class Ospf; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf
        class Ospfv3; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3
        class Rip; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip
        class Static_; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp> > eigrp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis> > isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3> > ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_> static_;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::MaximumPrefix


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3 : public ydk::Entity
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
        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_ : public ydk::Entity
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

        class LispIpRouteImport; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_


class Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache : public ydk::Entity
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

        class Bgp; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::MaximumPrefix
        class Ospf; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf
        class Ospfv3; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3
        class Rip; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip
        class Static_; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp> > eigrp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis> > isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3> > ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::MaximumPrefix


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3 : public ydk::Entity
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
        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_ : public ydk::Entity
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

        class MapCacheContainer; //type: Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_


class Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::LispList::Default_::Ipv6::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::SiteRegistration


class Native::Router::LispList::Default_::Ipv6::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::SolicitMapRequest


class Native::Router::LispList::Default_::Ipv6::UsePetr : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Ipv6::UsePetr


class Native::Router::LispList::Default_::LocReachAlgorithm : public ydk::Entity
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
        class LsbReports; //type: Native::Router::LispList::Default_::LocReachAlgorithm::LsbReports

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::LispList::Default_::LocReachAlgorithm


class Native::Router::LispList::Default_::LocReachAlgorithm::LsbReports : public ydk::Entity
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

}; // Native::Router::LispList::Default_::LocReachAlgorithm::LsbReports


class Native::Router::LispList::Default_::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_set; //type: string

}; // Native::Router::LispList::Default_::Locator


class Native::Router::LispList::Default_::LocatorDown : public ydk::Entity
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

}; // Native::Router::LispList::Default_::LocatorDown


class Native::Router::LispList::Default_::LocatorScope : public ydk::Entity
{
    public:
        LocatorScope();
        ~LocatorScope();

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
        ydk::YLeafList rloc_prefix; //type: list of  string
        ydk::YLeafList rtr_locator_set; //type: list of  string

}; // Native::Router::LispList::Default_::LocatorScope


class Native::Router::LispList::Default_::LocatorSet : public ydk::Entity
{
    public:
        LocatorSet();
        ~LocatorSet();

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
        ydk::YLeaf auto_discover_rlocs; //type: empty
        class IPv4Interface; //type: Native::Router::LispList::Default_::LocatorSet::IPv4Interface
        class IPv6Interface; //type: Native::Router::LispList::Default_::LocatorSet::IPv6Interface
        class IpAddress; //type: Native::Router::LispList::Default_::LocatorSet::IpAddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet::IpAddress> > ip_address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet::IPv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet::IPv6Interface> > ipv6_interface;
        
}; // Native::Router::LispList::Default_::LocatorSet


class Native::Router::LispList::Default_::LocatorSet::IPv4Interface : public ydk::Entity
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
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default_::LocatorSet::IPv4Interface


class Native::Router::LispList::Default_::LocatorSet::IPv6Interface : public ydk::Entity
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
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default_::LocatorSet::IPv6Interface


class Native::Router::LispList::Default_::LocatorSet::IpAddress : public ydk::Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default_::LocatorSet::IpAddress


class Native::Router::LispList::Default_::LocatorTable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::LocatorTable


class Native::Router::LispList::Default_::MapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::MapRequest


class Native::Router::LispList::Default_::MapServer : public ydk::Entity
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

        class Rloc; //type: Native::Router::LispList::Default_::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::LispList::Default_::MapServer::SiteRegistration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapServer::Rloc> rloc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::LispList::Default_::MapServer


class Native::Router::LispList::Default_::MapServer::Rloc : public ydk::Entity
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

        class Members; //type: Native::Router::LispList::Default_::MapServer::Rloc::Members

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapServer::Rloc::Members> members;
        
}; // Native::Router::LispList::Default_::MapServer::Rloc


class Native::Router::LispList::Default_::MapServer::Rloc::Members : public ydk::Entity
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
        class ModifyDiscovered; //type: Native::Router::LispList::Default_::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::LispList::Default_::MapServer::Rloc::Members


class Native::Router::LispList::Default_::MapServer::Rloc::Members::ModifyDiscovered : public ydk::Entity
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

}; // Native::Router::LispList::Default_::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::LispList::Default_::MapServer::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::MapServer::SiteRegistration


class Native::Router::LispList::Default_::OtherXtrProbe : public ydk::Entity
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

}; // Native::Router::LispList::Default_::OtherXtrProbe


class Native::Router::LispList::Default_::RemoteRlocProbe : public ydk::Entity
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

}; // Native::Router::LispList::Default_::RemoteRlocProbe


class Native::Router::LispList::Default_::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf strong; //type: empty

}; // Native::Router::LispList::Default_::Security


class Native::Router::LispList::Default_::Service : public ydk::Entity
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

        class Ipv4; //type: Native::Router::LispList::Default_::Service::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default_::Service::Ipv6
        class Ethernet; //type: Native::Router::LispList::Default_::Service::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::LispList::Default_::Service


class Native::Router::LispList::Default_::Service::Ethernet : public ydk::Entity
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
        class Default__; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__
        class Encapsulation; //type: Native::Router::LispList::Default_::Service::Ethernet::Encapsulation
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ethernet::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet


class Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping : public ydk::Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ethernet::Default__ : public ydk::Entity
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
        class Encapsulation; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__


class Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping : public ydk::Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation : public ydk::Entity
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

        ydk::YLeaf vxlan; //type: empty

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Encapsulation


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::EtrEnable


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr


class Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::ItrEnable


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source : public ydk::Entity
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

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::SiteRegistration


class Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Default__::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ethernet::Encapsulation : public ydk::Entity
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

        ydk::YLeaf vxlan; //type: empty

}; // Native::Router::LispList::Default_::Service::Ethernet::Encapsulation


class Native::Router::LispList::Default_::Service::Ethernet::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Etr


class Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ethernet::EtrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::EtrEnable


class Native::Router::LispList::Default_::Service::Ethernet::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::Itr


class Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::ItrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::ItrEnable


class Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest : public ydk::Entity
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

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source : public ydk::Entity
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

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered : public ydk::Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ethernet::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ethernet::MapServer : public ydk::Entity
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

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer


class Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister : public ydk::Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source : public ydk::Entity
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

        ydk::YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default_::Service::Ethernet::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::SiteRegistration


class Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ethernet::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv4 : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv4::UsePetr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::LispList::Default_::Service::Ipv4


class Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping : public ydk::Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv4::Default__ : public ydk::Entity
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

        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr> > use_petr;
                class Encapsulation;

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__


class Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping : public ydk::Entity
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

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf away; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr : public ydk::Entity
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
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer : public ydk::Entity
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
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key : public ydk::Entity
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

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7 : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr : public ydk::Entity
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

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache : public ydk::Entity
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

        ydk::YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids : public ydk::Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_map_request; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit : public ydk::Entity
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

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver : public ydk::Entity
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

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver

class Native::Router::LispList::Default_::MapServer::Rloc::Members::ModifyDiscovered::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf override;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Default__::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lisp;
        static const ydk::Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_155_ */

