#ifndef _CISCO_IOS_XE_NATIVE_155_
#define _CISCO_IOS_XE_NATIVE_155_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_139.hpp"
#include "Cisco_IOS_XE_native_150.hpp"
#include "Cisco_IOS_XE_native_153.hpp"
#include "Cisco_IOS_XE_native_154.hpp"
#include "Cisco_IOS_XE_native_87.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent : public ydk::Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::MapCachePersistent


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr : public ydk::Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv6_addr; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::ProxyItr


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteExport : public ydk::Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf site_registrations; //type: empty
        ydk::YLeaf away_eids; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteExport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::UsePetr : public ydk::Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::UsePetr


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_value; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::UsePetr::Priority


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport : public ydk::Entity
{
    public:
        RouteImport();
        ~RouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Database; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database
        class MapCache; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache> map_cache;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application
        class Bgp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp
        class Connected; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected
        class Eigrp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp
        class Isis; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis
        class MaximumPrefix; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix
        class Nd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd
        class Ospf; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf
        class Static_; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_
        class Rip; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application> application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected> connected;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_> static_;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Application::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Connected::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_id; //type: string
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Isis::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::MaximumPrefix


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Nd::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Static_::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class LispIpRouteImport; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport> lisp_ip_route_import;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport : public ydk::Entity
{
    public:
        LispIpRouteImport();
        ~LispIpRouteImport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::Database::Rip::LispIpRouteImport


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application
        class Bgp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp
        class Connected; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected
        class Eigrp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp
        class Isis; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis
        class MaximumPrefix; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix
        class Nd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd
        class Ospf; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf
        class Static_; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_
        class Rip; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application> application; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd> nd; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_> static_; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Application::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of uint32, string
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf threshold1; //type: uint8
        ydk::YLeaf warning_only1; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::MaximumPrefix


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Nd::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        class MapCacheContainer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer : public ydk::Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont
        class Limit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf auto_discover_rlocs; //type: empty
        class Ipv4Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees
        class Ipv4Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees : public ydk::Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees : public ydk::Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface : public ydk::Entity
{
    public:
        Ipv4Interface();
        ~Ipv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface : public ydk::Entity
{
    public:
        Ipv6Interface();
        ~Ipv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ipv6::DatabaseMapping::Limit


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_request_source; //type: string
        class Default_; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_
        class EidTable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EidTable
        class BroadcastUnderlay; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::BroadcastUnderlay
        class DatabaseMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping
        class Itr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr
        class ItrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EtrEnable
        class Etr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr
        class MapCacheLimit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCacheLimit
        class SiteRegistration; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SolicitMapRequest
        class MapCache; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::BroadcastUnderlay> broadcast_underlay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_request_source; //type: string
        class EidTable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EidTable
        class BroadcastUnderlay; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::BroadcastUnderlay
        class DatabaseMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping
        class Itr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr
        class ItrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EtrEnable
        class Etr; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr
        class MapCacheLimit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCacheLimit
        class SiteRegistration; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SolicitMapRequest
        class MapCache; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::BroadcastUnderlay> broadcast_underlay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SolicitMapRequest> solicit_map_request;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EidTable


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::BroadcastUnderlay : public ydk::Entity
{
    public:
        BroadcastUnderlay();
        ~BroadcastUnderlay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_multicast; //type: string
        ydk::YLeaf ipv6_multicast; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::BroadcastUnderlay


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont
        class Mac; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Mac
        class Limit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Limit

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Limit> limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Mac> mac; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string
        class Ipv4Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees
        class Ipv4Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees : public ydk::Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees : public ydk::Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface : public ydk::Entity
{
    public:
        Ipv4Interface();
        ~Ipv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface : public ydk::Entity
{
    public:
        Ipv6Interface();
        ~Ipv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Mac


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::DatabaseMapping::Limit


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Itr::MapResolver


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::ItrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::EtrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key0


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key6


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key7


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCacheLimit


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SiteRegistration


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::SolicitMapRequest


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont> > eid_cont;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        class EtrInterfaceIp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::MapCache::EidCont::EtrInterfaceIp


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EidTable


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::BroadcastUnderlay : public ydk::Entity
{
    public:
        BroadcastUnderlay();
        ~BroadcastUnderlay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_multicast; //type: string
        ydk::YLeaf ipv6_multicast; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::BroadcastUnderlay


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont
        class Mac; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Mac
        class Limit; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Limit

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont> > eid_cont;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Limit> limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Mac> mac; // presence node
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string
        class Ipv4Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees
        class Ipv6Addrees; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees
        class Ipv4Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface
        class Ipv6Interface; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees> > ipv4_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface> > ipv4_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees> > ipv6_addrees;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface> > ipv6_interface;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees : public ydk::Entity
{
    public:
        Ipv4Addrees();
        ~Ipv4Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees : public ydk::Entity
{
    public:
        Ipv6Addrees();
        ~Ipv6Addrees();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Addrees::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface : public ydk::Entity
{
    public:
        Ipv4Interface();
        ~Ipv4Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv4Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface : public ydk::Entity
{
    public:
        Ipv6Interface();
        ~Ipv6Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class DatabaseMappingOption; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption> database_mapping_option;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption : public ydk::Entity
{
    public:
        DatabaseMappingOption();
        ~DatabaseMappingOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf down; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::EidCont::Ipv6Interface::DatabaseMappingOption


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Mac


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::DatabaseMapping::Limit


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Itr::MapResolver


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::ItrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::EtrEnable


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyPwd; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::KeyPwd : public ydk::Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key0 : public ydk::Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key0


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key6 : public ydk::Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key6


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key7 : public ydk::Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ak_7; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key7


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::AcceptMapRequestMapping : public ydk::Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept_mappping; //type: empty
        ydk::YLeaf verify; //type: empty

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::AcceptMapRequestMapping


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCacheLimit : public ydk::Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_map_cache_entries; //type: uint32
        ydk::YLeaf reserve_list; //type: string
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCacheLimit


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SiteRegistration : public ydk::Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SiteRegistration


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SolicitMapRequest : public ydk::Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty
        ydk::YLeaf max_per_entry; //type: uint8
        ydk::YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::SolicitMapRequest


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EidCont; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont> > eid_cont;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont : public ydk::Entity
{
    public:
        EidCont();
        ~EidCont();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        class EtrInterfaceIp; //type: Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont


class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp : public ydk::Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr_interface_ip_address; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8

}; // Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::MapCache::EidCont::EtrInterfaceIp


class Native::Router::LispList::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryRoute; //type: Native::Router::LispList::Alt::SummaryRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::LispList::Alt


class Native::Router::LispList::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Alt::SummaryRoute


class Native::Router::LispList::ControlPacket : public ydk::Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32

}; // Native::Router::LispList::ControlPacket


class Native::Router::LispList::Ddt : public ydk::Entity
{
    public:
        Ddt();
        ~Ddt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf root; //type: string
        class Authoritative; //type: Native::Router::LispList::Ddt::Authoritative

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative> authoritative;
        
}; // Native::Router::LispList::Ddt


class Native::Router::LispList::Ddt::Authoritative : public ydk::Entity
{
    public:
        Authoritative();
        ~Authoritative();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstanceIdEidPrefixList; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::LispList::Ddt::Authoritative


class Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList : public ydk::Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::LispList::Ddt::Authoritative::InstanceIdList : public ydk::Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdList


class Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::LispList::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::LispList::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::LispList::Decapsulation::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation::Filter> filter;
        
}; // Native::Router::LispList::Decapsulation


class Native::Router::LispList::Decapsulation::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rloc; //type: Native::Router::LispList::Decapsulation::Filter::Rloc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::LispList::Decapsulation::Filter


class Native::Router::LispList::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::LispList::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::LispList::Decapsulation::Filter::Rloc


class Native::Router::LispList::Decapsulation::Filter::Rloc::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::LispList::Decapsulation::Filter::Rloc::Source


class Native::Router::LispList::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapServer; //type: Native::Router::LispList::Etr::MapServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Etr::MapServer> map_server;
        
}; // Native::Router::LispList::Etr


class Native::Router::LispList::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string

}; // Native::Router::LispList::Etr::MapServer


class Native::Router::LispList::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf map_request_source; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeafList proxy_itr; //type: list of  string
        class DatabaseMapping; //type: Native::Router::LispList::Ipv4::DatabaseMapping
        class Distance; //type: Native::Router::LispList::Ipv4::Distance
        class Itr; //type: Native::Router::LispList::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::Ipv4::ItrEnable
        class Etr; //type: Native::Router::LispList::Ipv4::Etr
        class EtrEnable; //type: Native::Router::LispList::Ipv4::EtrEnable
        class Locator; //type: Native::Router::LispList::Ipv4::Locator
        class MapCache; //type: Native::Router::LispList::Ipv4::MapCache
        class MapCacheLimit; //type: Native::Router::LispList::Ipv4::MapCacheLimit
        class MapCachePersistent; //type: Native::Router::LispList::Ipv4::MapCachePersistent
        class MapResolver; //type: Native::Router::LispList::Ipv4::MapResolver
        class MapServer; //type: Native::Router::LispList::Ipv4::MapServer
        class PathMtuDiscovery; //type: Native::Router::LispList::Ipv4::PathMtuDiscovery
        class RouteExport; //type: Native::Router::LispList::Ipv4::RouteExport
        class RouteImport; //type: Native::Router::LispList::Ipv4::RouteImport
        class SiteRegistration; //type: Native::Router::LispList::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Ipv4::SolicitMapRequest
        class UsePetr; //type: Native::Router::LispList::Ipv4::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Locator> locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::RouteImport> route_import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::LispList::Ipv4


class Native::Router::LispList::Ipv4::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::LispList::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Ipv4::DatabaseMapping


class Native::Router::LispList::Ipv4::DatabaseMapping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Ipv4::DatabaseMapping::Limit


class Native::Router::LispList::Ipv4::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Ipv4::Distance


class Native::Router::LispList::Ipv4::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::LispList::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Ipv4::Itr


class Native::Router::LispList::Ipv4::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::LispList::Ipv4::Itr::MapResolver


class Native::Router::LispList::Ipv4::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::LispList::Ipv4::ItrEnable


class Native::Router::LispList::Ipv4::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapServer; //type: Native::Router::LispList::Ipv4::Etr::MapServer

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Ipv4::Etr


class Native::Router::LispList::Ipv4::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Ipv4::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Ipv4::Etr::MapServer


class Native::Router::LispList::Ipv4::Etr::MapServer::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string
        ydk::YLeaf pwd; //type: string

}; // Native::Router::LispList::Ipv4::Etr::MapServer::Key


class Native::Router::LispList::Ipv4::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::LispList::Ipv4::EtrEnable


class Native::Router::LispList::Ipv4::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reachability; //type: Native::Router::LispList::Ipv4::Locator::Reachability

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4::Locator::Reachability> reachability;
        
}; // Native::Router::LispList::Ipv4::Locator

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::KeyPwd::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key0::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key6::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::LispList::InstanceContainer::InstanceList::Service::Ethernet::Etr::MapServer::Key::Key7::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_155_ */

