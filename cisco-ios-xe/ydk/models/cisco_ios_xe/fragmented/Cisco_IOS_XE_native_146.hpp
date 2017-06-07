#ifndef _CISCO_IOS_XE_NATIVE_146_
#define _CISCO_IOS_XE_NATIVE_146_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_142.hpp"
#include "Cisco_IOS_XE_native_145.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf : public Entity
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

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External : public Entity
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

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal : public Entity
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

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External : public Entity
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

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal : public Entity
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

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip : public Entity
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

        YLeaf id; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_ : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application : public Entity
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

        YLeaf name; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp : public Entity
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

        YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis : public Entity
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

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea : public Entity
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
        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp : public Entity
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

        YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer : public Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer : public Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf : public Entity
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

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::External : public Entity
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

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal : public Entity
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

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External : public Entity
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

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal : public Entity
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

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip : public Entity
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

        YLeaf id; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_ : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Authentication : public Entity
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

        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::GracefulRestart : public Entity
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
        YLeaf restart_interval; //type: uint16
        class Helper; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::GracefulRestart::Helper

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::GracefulRestart::Helper> helper; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::GracefulRestart


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::GracefulRestart::Helper : public Entity
{
    public:
        Helper();
        ~Helper();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf strict_lsa_checking; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::GracefulRestart::Helper


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello; //type: HelloEnum
        YLeaf willingness; //type: uint8
        class Cache; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Cache
        class Peering; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering> peering;
                class HelloEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acknowledgement; //type: uint64
        YLeaf update; //type: uint64

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Cache


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Selective; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering::Selective

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering::Selective> selective;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering::Selective : public Entity
{
    public:
        Selective();
        ~Selective();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf per_interface; //type: empty
        YLeaf redundancy; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::Peering::Selective


class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::SummaryPrefix : public Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf nssa_only; //type: empty
        YLeaf tag; //type: uint32
        YLeaf not_advertise; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::SummaryPrefix


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf : public Entity
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

        YLeaf vrf; //type: string
        YLeaf unicast; //type: empty
        YLeaf router_id; //type: string
        YLeaf nsr; //type: empty
        YLeaf default_metric; //type: uint32
        YLeaf maximum_paths; //type: uint32
        class Area; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area
        class AutoCost; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost
        class EventLog; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog
        class Bfd; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd
        class InterfaceId; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId
        class LogAdjacencyChanges; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges
        class MaxLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa
        class MaxMetric; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric
        class PassiveInterface; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface
        class Disable; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable
        class QueueDepth; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth
        class Timers; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers
        class TrafficShare; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity
        class Capability; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability
        class Compatible; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible
        class DefaultInformation; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation
        class DiscardRoute; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute
        class Distance; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance
        class Redistribute; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication
        class GracefulRestart; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart
        class Manet; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet
        class SummaryPrefix; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost> auto_cost; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability> capability;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible> compatible;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable> disable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute> discard_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog> event_log; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId> interface_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa> max_lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric> max_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth> queue_depth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute> redistribute;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix> > summary_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare> traffic_share;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf default_cost; //type: uint32
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Authentication
        class Capability; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Capability
        class FilterList; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::FilterList
        class Nssa; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa
        class Ipv4Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range
        class Ipv6Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range
        class ShamLink; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink
        class Stub; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Stub
        class VirtualLink; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Capability> capability;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::FilterList> > filter_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range> ipv4_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range> ipv6_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa> nssa; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink> > sham_link;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Stub> stub; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink> > virtual_link;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Authentication : public Entity
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

        YLeaf message_digest; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Capability : public Entity
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

        YLeaf default_exclusion; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Capability


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::FilterList : public Entity
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

        YLeaf in_out; //type: InOutEnum
        YLeaf prefix; //type: string
        class InOutEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::FilterList


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_ext_capability; //type: empty
        YLeaf no_redistribution; //type: empty
        YLeaf no_summary; //type: empty
        YLeaf nssa_only; //type: empty
        class DefaultInformationOriginate; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate
        class Translate; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate> default_information_originate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate> translate;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate : public Entity
{
    public:
        DefaultInformationOriginate();
        ~DefaultInformationOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: int32
        YLeaf metric_type; //type: uint32
        YLeaf no_ext_capability; //type: empty
        YLeaf no_redistribution; //type: empty
        YLeaf no_summary; //type: empty
        YLeaf nssa_only; //type: empty
        class Translate; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate> translate;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type7; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7 : public Entity
{
    public:
        Type7();
        ~Type7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type7; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate::Type7 : public Entity
{
    public:
        Type7();
        ~Type7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Nssa::Translate::Type7


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range : public Entity
{
    public:
        Ipv4Range();
        ~Ipv4Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range::Range> > range;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range::Range : public Entity
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

        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf advertise; //type: empty
        YLeaf not_advertise; //type: empty
        YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv4Range::Range


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range : public Entity
{
    public:
        Ipv6Range();
        ~Ipv6Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range::Range> > range;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range::Range : public Entity
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

        YLeaf ip; //type: string
        YLeaf advertise; //type: empty
        YLeaf not_advertise; //type: empty
        YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Ipv6Range::Range


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink : public Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string
        YLeaf dest; //type: string
        YLeaf cost; //type: uint16
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink::TtlSecurity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink::TtlSecurity : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::ShamLink::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Stub : public Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_ext_capability; //type: empty
        YLeaf no_summary; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::Stub


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink : public Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication
        class HelloInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::HelloInterval
        class DeadInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::DeadInterval
        class RetransmitInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::RetransmitInterval
        class TransmitDelay; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TransmitDelay
        class Topology; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Topology
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TtlSecurity
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::DeadInterval> dead_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey> > message_digest_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::RetransmitInterval> retransmit_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Topology> topology;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TransmitDelay> transmit_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication : public Entity
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

        YLeaf null; //type: empty
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey
        class KeyChain; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain
        class MessageDigest; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest> message_digest;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5 : public Entity
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

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain : public Entity
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
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5 : public Entity
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

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest : public Entity
{
    public:
        MessageDigest();
        ~MessageDigest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5 : public Entity
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

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_interval_value; //type: int32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::HelloInterval


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::DeadInterval : public Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::DeadInterval


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::RetransmitInterval : public Entity
{
    public:
        RetransmitInterval();
        ~RetransmitInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retransmit_interval_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::RetransmitInterval


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TransmitDelay : public Entity
{
    public:
        TransmitDelay();
        ~TransmitDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_delay_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TransmitDelay


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Topology : public Entity
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

        YLeaf disable; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::Topology


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TtlSecurity : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5 : public Entity
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

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::VirtualLink::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost : public Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reference_bandwidth; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::AutoCost


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog : public Entity
{
    public:
        EventLog();
        ~EventLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf one_shot; //type: empty
        YLeaf pause; //type: empty
        YLeaf size; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::EventLog


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Bfd


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId : public Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmp_if_index; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::InterfaceId


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges : public Entity
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

        YLeaf detail; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::LogAdjacencyChanges


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa : public Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf ignore_count; //type: uint32
        YLeaf ignore_time; //type: uint32
        YLeaf reset_time; //type: uint32
        YLeaf warning_only; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxLsa


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric : public Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RouterLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa> router_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa : public Entity
{
    public:
        RouterLsa();
        ~RouterLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_stub; //type: empty
        class ExternalLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa
        class OnStartup; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup
        class SummaryLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa> external_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup> on_startup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa> summary_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa : public Entity
{
    public:
        ExternalLsa();
        ~ExternalLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::ExternalLsa


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf wait_for_bgp; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::OnStartup


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa : public Entity
{
    public:
        SummaryLsa();
        ~SummaryLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::MaxMetric::RouterLsa::SummaryLsa


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::PassiveInterface


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Disable::PassiveInterface


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth : public Entity
{
    public:
        QueueDepth();
        ~QueueDepth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hello; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello
        class Update; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update> update;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello : public Entity
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

        YLeaf options; //type: one of uint32, enumeration
        class OptionsEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: one of uint32, enumeration
        class OptionsEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers : public Entity
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

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa
        class Pacing; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing
        class Throttle; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing> pacing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle> throttle;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf arrival; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing : public Entity
{
    public:
        Pacing();
        ~Pacing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flood; //type: uint32
        YLeaf lsa_group; //type: uint32
        YLeaf retransmission; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Pacing


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa
        class Spf; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf> spf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All> all;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All : public Entity
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

        YLeaf delay; //type: uint32
        YLeaf min_delay; //type: uint32
        YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Lsa::All


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf : public Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint32
        YLeaf min_delay; //type: uint32
        YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Timers::Throttle::Spf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare : public Entity
{
    public:
        TrafficShare();
        ~TrafficShare();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: empty
        YLeaf across_interfaces; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TrafficShare


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity : public Entity
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

        YLeaf all_interfaces; //type: empty
        YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability : public Entity
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

        YLeaf capability_type; //type: CapabilityTypeEnum
        class CapabilityTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible : public Entity
{
    public:
        Compatible();
        ~Compatible();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rfc1583; //type: empty
        YLeaf rfc1587; //type: empty
        YLeaf rfc5243; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Compatible


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate : public Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DefaultInformation::Originate


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute : public Entity
{
    public:
        DiscardRoute();
        ~DiscardRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external; //type: empty
        YLeaf internal; //type: empty
        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::DiscardRoute


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance : public Entity
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

        class OspfDistance; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance> ospf_distance;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance : public Entity
{
    public:
        OspfDistance();
        ~OspfDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distance; //type: uint32
        YLeaf ip; //type: string
        YLeaf wildcard; //type: string
        YLeaf acl_name; //type: one of union, string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::OspfDistance


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf : public Entity
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

        YLeaf external; //type: uint32
        YLeaf inter_area; //type: uint32
        YLeaf intra_area; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Distance::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute : public Entity
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

        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_
        class MaximumPrefix; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix
        class Vrf_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_> vrf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application : public Entity
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

        YLeaf name; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp : public Entity
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

        YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis : public Entity
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

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea : public Entity
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
        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp : public Entity
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

        YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer : public Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Authentication::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf deployment;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf strict;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet::HelloEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Area::FilterList::InOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Hello::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::QueueDepth::Update::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Capability::CapabilityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf lls;
        static const Enum::YLeaf opaque;
        static const Enum::YLeaf transit;
        static const Enum::YLeaf vrf_lite;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_146_ */

