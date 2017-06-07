#ifndef _CISCO_IOS_XE_NATIVE_141_
#define _CISCO_IOS_XE_NATIVE_141_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_140.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Ospf::Redistribute::Mobile : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Mobile::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Mobile


class Native::Router::Ospf::Redistribute::Mobile::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Mobile::RedistOptions


class Native::Router::Ospf::Redistribute::Odr : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Odr::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Odr


class Native::Router::Ospf::Redistribute::Odr::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Odr::RedistOptions


class Native::Router::Ospf::Redistribute::Ospf_ : public Entity
{
    public:
        Ospf_();
        ~Ospf_();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Ospf_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospf_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospf::Redistribute::Ospf_


class Native::Router::Ospf::Redistribute::Ospf_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Ospf_::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Ospf_::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospf_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospf_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Ospf_::Match


class Native::Router::Ospf::Redistribute::Ospf_::Match::Internal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Ospf_::Match::Internal


class Native::Router::Ospf::Redistribute::Ospf_::Match::External : public Entity
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

}; // Native::Router::Ospf::Redistribute::Ospf_::Match::External


class Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Ospfv3::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospfv3::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospf::Redistribute::Ospfv3


class Native::Router::Ospf::Redistribute::Ospfv3::Match : public Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Ospfv3::Match


class Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal


class Native::Router::Ospf::Redistribute::Ospfv3::Match::External : public Entity
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

}; // Native::Router::Ospf::Redistribute::Ospfv3::Match::External


class Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Rip : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Rip::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Rip


class Native::Router::Ospf::Redistribute::Rip::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Rip::RedistOptions


class Native::Router::Ospf::Redistribute::Static_ : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Static_::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Static_


class Native::Router::Ospf::Redistribute::Static_::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Static_::RedistOptions


class Native::Router::Ospf::Redistribute::MaximumPrefix : public Entity
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

        YLeaf number; //type: uint32
        class ThresholdWarningOnlyContainer; //type: Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer> threshold_warning_only_container;
        
}; // Native::Router::Ospf::Redistribute::MaximumPrefix


class Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer : public Entity
{
    public:
        ThresholdWarningOnlyContainer();
        ~ThresholdWarningOnlyContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint32
        YLeaf warning_only; //type: empty

}; // Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer


class Native::Router::Ospf::Redistribute::Vrf : public Entity
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

        class NonGlobalVrf; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf
        class Global; //type: Native::Router::Ospf::Redistribute::Vrf::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global> global;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf> > non_global_vrf;
        
}; // Native::Router::Ospf::Redistribute::Vrf


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf : public Entity
{
    public:
        NonGlobalVrf();
        ~NonGlobalVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Application; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application
        class Bgp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp
        class Connected; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected
        class Eigrp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp
        class Isis; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis
        class IsoIgrp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp
        class Lisp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp
        class Mobile; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile
        class Odr; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr
        class Ospf_; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_
        class Ospfv3; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3
        class Rip; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip
        class Static_; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_> static_; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis : public Entity
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
        class IsisArea; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp : public Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_ : public Entity
{
    public:
        Ospf_();
        ~Ospf_();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match : public Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_ : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global : public Entity
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

        class Application; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp
        class Isis; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis
        class IsoIgrp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Mobile
        class Odr; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Odr
        class Ospf_; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_
        class Ospfv3; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global


class Native::Router::Ospf::Redistribute::Vrf::Global::Application : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Application


class Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Bgp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Bgp


class Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Connected


class Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp


class Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis : public Entity
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
        class IsisArea; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp : public Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospf::Redistribute::Vrf::Global::Lisp : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Lisp


class Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Mobile : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Mobile


class Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Odr : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Odr


class Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_ : public Entity
{
    public:
        Ospf_();
        ~Ospf_();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match : public Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::Global::Rip : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Rip


class Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Static_ : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Static_


class Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions


class Native::Router::Ospf::DistributeList : public Entity
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

        class Accesslist; //type: Native::Router::Ospf::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Ospf::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Ospf::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Ospf::DistributeList


class Native::Router::Ospf::DistributeList::Accesslist : public Entity
{
    public:
        Accesslist();
        ~Accesslist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum

}; // Native::Router::Ospf::DistributeList::Accesslist


class Native::Router::Ospf::DistributeList::AccesslistIfname : public Entity
{
    public:
        AccesslistIfname();
        ~AccesslistIfname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum
        YLeaf interface; //type: string
        YLeaf interface_routing_id; //type: uint8
        YLeaf isis_tag; //type: string
        YLeaf vrf; //type: string

}; // Native::Router::Ospf::DistributeList::AccesslistIfname


class Native::Router::Ospf::DistributeList::AccesslistPrefixGateway : public Entity
{
    public:
        AccesslistPrefixGateway();
        ~AccesslistPrefixGateway();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum
        YLeaf prefix_gateway; //type: PrefixGatewayEnum
        YLeaf name; //type: string
        class PrefixGatewayEnum;

}; // Native::Router::Ospf::DistributeList::AccesslistPrefixGateway


class Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname : public Entity
{
    public:
        AccesslistPrefixGatewayIfname();
        ~AccesslistPrefixGatewayIfname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum
        YLeaf interface; //type: string
        YLeaf prefix_gateway; //type: PrefixGatewayEnum
        YLeaf name; //type: string
        YLeaf interface_routing_id; //type: uint8
        YLeaf isis_tag; //type: string
        YLeaf vrf; //type: string
        class PrefixGatewayEnum;

}; // Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Ospf::DomainId : public Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_format; //type: string
        YLeaf null; //type: empty
        class IpFormatSecondary; //type: Native::Router::Ospf::DomainId::IpFormatSecondary
        class Type; //type: Native::Router::Ospf::DomainId::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DomainId::IpFormatSecondary> ip_format_secondary;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DomainId::Type> type;
        
}; // Native::Router::Ospf::DomainId


class Native::Router::Ospf::DomainId::IpFormatSecondary : public Entity
{
    public:
        IpFormatSecondary();
        ~IpFormatSecondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf secondary; //type: empty

}; // Native::Router::Ospf::DomainId::IpFormatSecondary


class Native::Router::Ospf::DomainId::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type_leaf; //type: TypeLeafEnum
        YLeaf value_; //type: string
        class TypeLeafEnum;

}; // Native::Router::Ospf::DomainId::Type


class Native::Router::Ospf::FastReroute : public Entity
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

        YLeaf keep_all_paths; //type: empty
        class PerPrefix; //type: Native::Router::Ospf::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Router::Ospf::FastReroute


class Native::Router::Ospf::FastReroute::PerPrefix : public Entity
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

        class Enable; //type: Native::Router::Ospf::FastReroute::PerPrefix::Enable
        class RemoteLfa; //type: Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa
        class TieBreak; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak> tie_break;
        
}; // Native::Router::Ospf::FastReroute::PerPrefix


class Native::Router::Ospf::FastReroute::PerPrefix::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area; //type: one of uint32, string
        YLeaf prefix_priority; //type: PrefixPriorityEnum
        class PrefixPriorityEnum;

}; // Native::Router::Ospf::FastReroute::PerPrefix::Enable


class Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa : public Entity
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

        YLeaf area; //type: one of uint32, string
        YLeaf maximum_cost; //type: uint32
        YLeaf tunnel; //type: TunnelEnum
        class TunnelEnum;

}; // Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak : public Entity
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

        class BroadcastInterfaceDisjoint; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint
        class Downstream; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream
        class LinecardDisjoint; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint
        class LowestMetric; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric
        class NodeProtecting; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting
        class PrimaryPath; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath
        class SecondaryPath; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath
        class Srlg; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint> broadcast_interface_disjoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream> downstream;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint> linecard_disjoint;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric> lowest_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting> node_protecting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath> primary_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath> secondary_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg> srlg;
        
}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint : public Entity
{
    public:
        BroadcastInterfaceDisjoint();
        ~BroadcastInterfaceDisjoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream : public Entity
{
    public:
        Downstream();
        ~Downstream();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint : public Entity
{
    public:
        LinecardDisjoint();
        ~LinecardDisjoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric : public Entity
{
    public:
        LowestMetric();
        ~LowestMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting : public Entity
{
    public:
        NodeProtecting();
        ~NodeProtecting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath : public Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath : public Entity
{
    public:
        SecondaryPath();
        ~SecondaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf required; //type: empty
        YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg


class Native::Router::Ospf::GracefulRestart : public Entity
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
        class Helper; //type: Native::Router::Ospf::GracefulRestart::Helper

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::GracefulRestart::Helper> helper; // presence node
        
}; // Native::Router::Ospf::GracefulRestart


class Native::Router::Ospf::GracefulRestart::Helper : public Entity
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

}; // Native::Router::Ospf::GracefulRestart::Helper


class Native::Router::Ospf::Ignore : public Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Native::Router::Ospf::Ignore::Lsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Ignore::Lsa> lsa;
        
}; // Native::Router::Ospf::Ignore


class Native::Router::Ospf::Ignore::Lsa : public Entity
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

        YLeaf mospf; //type: empty

}; // Native::Router::Ospf::Ignore::Lsa


class Native::Router::Ospf::Limit : public Entity
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

        class Retransmissions; //type: Native::Router::Ospf::Limit::Retransmissions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Limit::Retransmissions> retransmissions;
        
}; // Native::Router::Ospf::Limit


class Native::Router::Ospf::Limit::Retransmissions : public Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_dc; //type: one of uint32, enumeration
        YLeaf dc; //type: one of uint32, enumeration

}; // Native::Router::Ospf::Limit::Retransmissions


class Native::Router::Ospf::LocalRibCriteria : public Entity
{
    public:
        LocalRibCriteria();
        ~LocalRibCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding_address; //type: empty
        YLeaf inter_area_summary; //type: empty
        YLeaf nssa_translation; //type: empty

}; // Native::Router::Ospf::LocalRibCriteria


class Native::Router::Ospf::Microloop : public Entity
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

        class Avoidance; //type: Native::Router::Ospf::Microloop::Avoidance

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Microloop::Avoidance> avoidance; // presence node
        
}; // Native::Router::Ospf::Microloop


class Native::Router::Ospf::Microloop::Avoidance : public Entity
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

}; // Native::Router::Ospf::Microloop::Avoidance


class Native::Router::Ospf::Mpls : public Entity
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

        class Ldp; //type: Native::Router::Ospf::Mpls::Ldp
        class TrafficEng; //type: Native::Router::Ospf::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Router::Ospf::Mpls


class Native::Router::Ospf::Mpls::Ldp : public Entity
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

        class Autoconfig; //type: Native::Router::Ospf::Mpls::Ldp::Autoconfig
        class Sync; //type: Native::Router::Ospf::Mpls::Ldp::Sync

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::Ldp::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::Ldp::Sync> sync; // presence node
        
}; // Native::Router::Ospf::Mpls::Ldp


class Native::Router::Ospf::Mpls::Ldp::Autoconfig : public Entity
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

        YLeaf area; //type: one of uint32, string

}; // Native::Router::Ospf::Mpls::Ldp::Autoconfig


class Native::Router::Ospf::Mpls::Ldp::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Router::Ospf::Mpls::Ldp::Sync


class Native::Router::Ospf::Mpls::TrafficEng : public Entity
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

        YLeaf multicast_intact; //type: empty
        YLeaf area; //type: one of uint32, string
        class AutorouteExclude; //type: Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude
        class Interface; //type: Native::Router::Ospf::Mpls::TrafficEng::Interface
        class MeshGroupContainer; //type: Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer
        class RouterId; //type: Native::Router::Ospf::Mpls::TrafficEng::RouterId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude> autoroute_exclude;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer> mesh_group_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::RouterId> router_id;
        
}; // Native::Router::Ospf::Mpls::TrafficEng


class Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude : public Entity
{
    public:
        AutorouteExclude();
        ~AutorouteExclude();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list; //type: string

}; // Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude


class Native::Router::Ospf::Mpls::TrafficEng::Interface : public Entity
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

        YLeaf name; //type: string
        YLeaf id; //type: uint32
        YLeaf area; //type: uint32

}; // Native::Router::Ospf::Mpls::TrafficEng::Interface


class Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer : public Entity
{
    public:
        MeshGroupContainer();
        ~MeshGroupContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mesh_group; //type: uint32
        YLeaf interface; //type: string
        YLeaf id; //type: uint32
        class Area; //type: Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area> > area;
        
}; // Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer


class Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area : public Entity
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

}; // Native::Router::Ospf::Mpls::TrafficEng::MeshGroupContainer::Area


class Native::Router::Ospf::Mpls::TrafficEng::RouterId : public Entity
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

        YLeaf interface; //type: string
        YLeaf id; //type: uint32

}; // Native::Router::Ospf::Mpls::TrafficEng::RouterId


class Native::Router::Ospf::Neighbor : public Entity
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

        YLeaf ip; //type: string
        YLeaf cost; //type: uint32
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint32
        class DatabaseFilter; //type: Native::Router::Ospf::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Router::Ospf::Neighbor


class Native::Router::Ospf::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Router::Ospf::Neighbor::DatabaseFilter::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Neighbor::DatabaseFilter::All> all;
        
}; // Native::Router::Ospf::Neighbor::DatabaseFilter


class Native::Router::Ospf::Neighbor::DatabaseFilter::All : public Entity
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

        YLeaf out; //type: empty

}; // Native::Router::Ospf::Neighbor::DatabaseFilter::All


class Native::Router::Ospf::Network : public Entity
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

        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf area; //type: one of uint32, string

}; // Native::Router::Ospf::Network


class Native::Router::Ospf::Nsf : public Entity
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

        class Cisco; //type: Native::Router::Ospf::Nsf::Cisco
        class Ietf; //type: Native::Router::Ospf::Nsf::Ietf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Cisco> cisco; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Ietf> ietf;
        
}; // Native::Router::Ospf::Nsf


class Native::Router::Ospf::Nsf::Cisco : public Entity
{
    public:
        Cisco();
        ~Cisco();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Helper; //type: Native::Router::Ospf::Nsf::Cisco::Helper

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Cisco::Helper> helper; // presence node
        
}; // Native::Router::Ospf::Nsf::Cisco


class Native::Router::Ospf::Nsf::Cisco::Helper : public Entity
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

}; // Native::Router::Ospf::Nsf::Cisco::Helper


class Native::Router::Ospf::Nsf::Ietf : public Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Helper; //type: Native::Router::Ospf::Nsf::Ietf::Helper

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Ietf::Helper> helper; // presence node
        
}; // Native::Router::Ospf::Nsf::Ietf


class Native::Router::Ospf::Nsf::Ietf::Helper : public Entity
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

}; // Native::Router::Ospf::Nsf::Ietf::Helper


class Native::Router::Ospf::PrefixPriority : public Entity
{
    public:
        PrefixPriority();
        ~PrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf high; //type: empty
        YLeaf route_map; //type: string

}; // Native::Router::Ospf::PrefixPriority


class Native::Router::Ospf::ProcessMinTime : public Entity
{
    public:
        ProcessMinTime();
        ~ProcessMinTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint32

}; // Native::Router::Ospf::ProcessMinTime


class Native::Router::Ospf::Snmp : public Entity
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

        class Context; //type: Native::Router::Ospf::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context> > context;
        
}; // Native::Router::Ospf::Snmp


class Native::Router::Ospf::Snmp::Context : public Entity
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

        YLeaf name; //type: string
        class Community; //type: Native::Router::Ospf::Snmp::Context::Community
        class User; //type: Native::Router::Ospf::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User> user;
        
}; // Native::Router::Ospf::Snmp::Context


class Native::Router::Ospf::Snmp::Context::Community : public Entity
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

        YLeaf community_string; //type: string
        class Access; //type: Native::Router::Ospf::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Ospf::Snmp::Context::Community


class Native::Router::Ospf::Snmp::Context::Community::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf standard_acl; //type: uint32
        YLeaf expanded_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string
        YLeaf ro; //type: empty
        YLeaf rw; //type: empty

}; // Native::Router::Ospf::Snmp::Context::Community::Access


class Native::Router::Ospf::Snmp::Context::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Permisssion; //type: Native::Router::Ospf::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Ospf::Snmp::Context::User


class Native::Router::Ospf::Snmp::Context::User::Permisssion : public Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credential; //type: empty
        YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::Ospf::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Ospf::Snmp::Context::User::Permisssion

class Native::Router::Ospf::Redistribute::Mobile::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Odr::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospf_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospf_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospf_::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospf_::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospfv3::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Ospf::DomainId::Type::TypeLeafEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0005;
        static const Enum::YLeaf Y_0105;
        static const Enum::YLeaf Y_0205;
        static const Enum::YLeaf Y_8005;

};

class Native::Router::Ospf::FastReroute::PerPrefix::Enable::PrefixPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf high;
        static const Enum::YLeaf low;

};

class Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::TunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_ldp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_141_ */

