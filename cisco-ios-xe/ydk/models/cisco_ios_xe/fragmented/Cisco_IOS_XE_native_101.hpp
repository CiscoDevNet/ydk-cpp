#ifndef _CISCO_IOS_XE_NATIVE_101_
#define _CISCO_IOS_XE_NATIVE_101_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_100.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_99.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface : public Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_ : public Entity
{
    public:
        Ipv6_();
        ~Ipv6_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route> route;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Priority; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority> priority;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority : public Entity
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

        class High; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High> high;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology : public Entity
{
    public:
        MultiTopology();
        ~MultiTopology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transition; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute : public Entity
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

        class Application; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_
        class Lisp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp
        class Nd; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd
        class Nemo; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo
        class Ospf; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf
        class Rip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application> application; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd> nd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo> nemo;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application : public Entity
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

        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp : public Entity
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
        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp : public Entity
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

        YLeaf as_number; //type: uint32
        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_ : public Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisRedistribute; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute
        class IsisLeak; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak> > isis_leak;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute> > isis_redistribute;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute : public Entity
{
    public:
        IsisRedistribute();
        ~IsisRedistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak : public Entity
{
    public:
        IsisLeak();
        ~IsisLeak();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_redist_levels1; //type: IsisRedistLevels1Enum
        YLeaf isis_redist_levels2; //type: IsisRedistLevels2Enum
        YLeaf into; //type: empty
        YLeaf distribute_list; //type: string
        YLeaf route_map; //type: string
        class IsisRedistLevels1Enum;
        class IsisRedistLevels2Enum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd : public Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo : public Entity
{
    public:
        Nemo();
        ~Nemo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf : public Entity
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

        YLeaf process_id; //type: uint32
        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Match; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip : public Entity
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

        YLeaf process; //type: string
        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_ : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix : public Entity
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
        YLeaf levels; //type: LevelsEnum
        class LevelsEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap : public Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap


class Native::Router::IsisContainer::Isis::Distance : public Entity
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

        YLeaf number; //type: uint8
        YLeaf clns; //type: empty
        YLeaf ip; //type: empty
        class IpList; //type: Native::Router::IsisContainer::Isis::Distance::IpList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Distance::IpList> > ip_list;
        
}; // Native::Router::IsisContainer::Isis::Distance


class Native::Router::IsisContainer::Isis::Distance::IpList : public Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        class WildcardBits; //type: Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits> > wildcard_bits;
        
}; // Native::Router::IsisContainer::Isis::Distance::IpList


class Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits : public Entity
{
    public:
        WildcardBits();
        ~WildcardBits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf w_bits; //type: string
        YLeaf access_list; //type: one of uint16, uint8

}; // Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits


class Native::Router::IsisContainer::Isis::Ip : public Entity
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

        class Route; //type: Native::Router::IsisContainer::Isis::Ip::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Ip::Route> route;
        
}; // Native::Router::IsisContainer::Isis::Ip


class Native::Router::IsisContainer::Isis::Ip::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Priority; //type: Native::Router::IsisContainer::Isis::Ip::Route::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Ip::Route::Priority> priority;
        
}; // Native::Router::IsisContainer::Isis::Ip::Route


class Native::Router::IsisContainer::Isis::Ip::Route::Priority : public Entity
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

        class High; //type: Native::Router::IsisContainer::Isis::Ip::Route::Priority::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Ip::Route::Priority::High> high;
        
}; // Native::Router::IsisContainer::Isis::Ip::Route::Priority


class Native::Router::IsisContainer::Isis::Ip::Route::Priority::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::Ip::Route::Priority::High


class Native::Router::IsisContainer::Isis::Redistribute : public Entity
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

        class Application; //type: Native::Router::IsisContainer::Isis::Redistribute::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::Redistribute::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::Redistribute::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::Redistribute::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::Redistribute::Lisp
        class MaximumPrefix; //type: Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix
        class Mobile; //type: Native::Router::IsisContainer::Isis::Redistribute::Mobile
        class Odr; //type: Native::Router::IsisContainer::Isis::Redistribute::Odr
        class Ospf; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::Redistribute::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::Redistribute::Static_
        class Vrf; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Application> > application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf> vrf;
        
}; // Native::Router::IsisContainer::Isis::Redistribute


class Native::Router::IsisContainer::Isis::Redistribute::Application : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Application


class Native::Router::IsisContainer::Isis::Redistribute::Bgp : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Bgp


class Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Connected : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Connected


class Native::Router::IsisContainer::Isis::Redistribute::Eigrp : public Entity
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

        YLeaf as_number; //type: uint32
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Eigrp


class Native::Router::IsisContainer::Isis::Redistribute::Isis_ : public Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisRedistribute; //type: Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute> > isis_redistribute;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_


class Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute : public Entity
{
    public:
        IsisRedistribute();
        ~IsisRedistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute


class Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip : public Entity
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

        YLeaf isis_redist_levels1; //type: IsisRedistLevels1Enum
        YLeaf isis_redist_levels2; //type: IsisRedistLevels2Enum
        YLeaf into; //type: empty
        YLeaf distribute_list; //type: uint32
        YLeaf route_map; //type: string
        class IsisRedistLevels1Enum;
        class IsisRedistLevels2Enum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        class AreaTagRouteMapContainer; //type: Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp


class Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::IsisContainer::Isis::Redistribute::Lisp : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Lisp


class Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix : public Entity
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
        YLeaf threshold_value; //type: uint32
        YLeaf warning_only; //type: empty
        YLeaf withdraw; //type: empty

}; // Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix


class Native::Router::IsisContainer::Isis::Redistribute::Mobile : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Mobile


class Native::Router::IsisContainer::Isis::Redistribute::Odr : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Odr


class Native::Router::IsisContainer::Isis::Redistribute::Ospf : public Entity
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

        YLeaf process_id; //type: uint32
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3 : public Entity
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

        YLeaf process_id; //type: uint32
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match> match;
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match : public Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal : public Entity
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
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal


class Native::Router::IsisContainer::Isis::Redistribute::Rip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Rip


class Native::Router::IsisContainer::Isis::Redistribute::Static_ : public Entity
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

        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Static_


class Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf : public Entity
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

        class VrfNm; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm
        class Global; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global> global;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm> > vrf_nm;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm : public Entity
{
    public:
        VrfNm();
        ~VrfNm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_nm; //type: string
        YLeaf ospf; //type: uint16
        class Application; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application : public Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname : public Entity
{
    public:
        Appname();
        ~Appname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appname; //type: string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp : public Entity
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

        YLeaf a_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum : public Entity
{
    public:
        BpAsNum();
        ~BpAsNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bp_as_num; //type: one of uint32, string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp : public Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs : public Entity
{
    public:
        EigrpAs();
        ~EigrpAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp_as; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_ : public Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag : public Entity
{
    public:
        IsisAtag();
        ~IsisAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_atag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp : public Entity
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

        class IsoAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag : public Entity
{
    public:
        IsoAtag();
        ~IsoAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iso_atag; //type: string
        YLeaf route_map; //type: empty

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap : public Entity
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

        YLeaf rm_point; //type: string

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3 : public Entity
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

        class Os3Id; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id : public Entity
{
    public:
        Os3Id();
        ~Os3Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf os3_id; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_ : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global : public Entity
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

        YLeaf ospf; //type: uint16
        class Application; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application : public Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname : public Entity
{
    public:
        Appname();
        ~Appname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appname; //type: string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp : public Entity
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

        YLeaf a_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum : public Entity
{
    public:
        BpAsNum();
        ~BpAsNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bp_as_num; //type: one of uint32, string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp : public Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs : public Entity
{
    public:
        EigrpAs();
        ~EigrpAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp_as; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_ : public Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag : public Entity
{
    public:
        IsisAtag();
        ~IsisAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_atag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp : public Entity
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

        class IsoAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag : public Entity
{
    public:
        IsoAtag();
        ~IsoAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iso_atag; //type: string
        YLeaf route_map; //type: empty

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap : public Entity
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

        YLeaf rm_point; //type: string

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3 : public Entity
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

        class Os3Id; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id : public Entity
{
    public:
        Os3Id();
        ~Os3Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf os3_id; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_ : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip


class Native::Router::IsisContainer::Isis::SetAttachedBit : public Entity
{
    public:
        SetAttachedBit();
        ~SetAttachedBit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::SetAttachedBit


class Native::Router::IsisContainer::Isis::Snmp : public Entity
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

        class Context; //type: Native::Router::IsisContainer::Isis::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context> > context;
        
}; // Native::Router::IsisContainer::Isis::Snmp


class Native::Router::IsisContainer::Isis::Snmp::Context : public Entity
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
        class Community; //type: Native::Router::IsisContainer::Isis::Snmp::Context::Community
        class User; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User> user;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context


class Native::Router::IsisContainer::Isis::Snmp::Context::Community : public Entity
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
        class Access; //type: Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access> access;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context::Community


class Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access : public Entity
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

}; // Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access


class Native::Router::IsisContainer::Isis::Snmp::Context::User : public Entity
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
        class Permisssion; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context::User


class Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion : public Entity
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
        class Access; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion


class Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access : public Entity
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
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access


class Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth : public Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf md5; //type: string
        YLeaf sha; //type: string

}; // Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth


class Native::Router::IsisContainer::Isis::SummaryAddress : public Entity
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

        YLeaf ip; //type: string
        YLeaf mask; //type: string
        class Level1; //type: Native::Router::IsisContainer::Isis::SummaryAddress::Level1
        class Level12; //type: Native::Router::IsisContainer::Isis::SummaryAddress::Level12
        class Level2; //type: Native::Router::IsisContainer::Isis::SummaryAddress::Level2
        class MetricTagContainer; //type: Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::Level1> level_1; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::Level12> level_1_2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::Level2> level_2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer> metric_tag_container;
        
}; // Native::Router::IsisContainer::Isis::SummaryAddress


class Native::Router::IsisContainer::Isis::SummaryAddress::Level1 : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::Level1


class Native::Router::IsisContainer::Isis::SummaryAddress::Level12 : public Entity
{
    public:
        Level12();
        ~Level12();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::Level12


class Native::Router::IsisContainer::Isis::SummaryAddress::Level2 : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::Level2


class Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer : public Entity
{
    public:
        MetricTagContainer();
        ~MetricTagContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer


class Native::Router::IsisContainer::Isis::TrafficShare : public Entity
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

        class Min; //type: Native::Router::IsisContainer::Isis::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TrafficShare::Min> min;
        
}; // Native::Router::IsisContainer::Isis::TrafficShare


class Native::Router::IsisContainer::Isis::TrafficShare::Min : public Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf across_interfaces; //type: empty

}; // Native::Router::IsisContainer::Isis::TrafficShare::Min


class Native::Router::IsisContainer::Isis::Advertise : public Entity
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

        YLeaf passive_only; //type: empty

}; // Native::Router::IsisContainer::Isis::Advertise


class Native::Router::IsisContainer::Isis::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::IsisContainer::Isis::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::IsisContainer::Isis::DefaultInformation


class Native::Router::IsisContainer::Isis::DefaultInformation::Originate : public Entity
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

        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::DefaultInformation::Originate


class Native::Router::IsisContainer::Isis::Metric : public Entity
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

        YLeaf metric; //type: uint32
        class Metrics; //type: Native::Router::IsisContainer::Isis::Metric::Metrics

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Metric::Metrics> > metrics;
        
}; // Native::Router::IsisContainer::Isis::Metric


class Native::Router::IsisContainer::Isis::Metric::Metrics : public Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: LevelEnum
        YLeaf metric; //type: uint32
        class LevelEnum;

}; // Native::Router::IsisContainer::Isis::Metric::Metrics


class Native::Router::IsisContainer::Isis::PrcInterval : public Entity
{
    public:
        PrcInterval();
        ~PrcInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::PrcInterval


class Native::Router::IsisContainer::Isis::SetOverloadBit : public Entity
{
    public:
        SetOverloadBit();
        ~SetOverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OnStartup; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup
        class Suppress; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup> on_startup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::SetOverloadBit


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup : public Entity
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

        class Time; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time
        class WaitForBgp; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time> time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp> wait_for_bgp; // presence node
        
}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf suppress; //type: empty
        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp : public Entity
{
    public:
        WaitForBgp();
        ~WaitForBgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Suppress; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress : public Entity
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

        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress


class Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress : public Entity
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

        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress


class Native::Router::IsisContainer::Isis::SpfInterval : public Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level12; //type: Native::Router::IsisContainer::Isis::SpfInterval::Level12
        class Intervals; //type: Native::Router::IsisContainer::Isis::SpfInterval::Intervals

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval::Intervals> intervals;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval::Level12> > level_1_2;
        
}; // Native::Router::IsisContainer::Isis::SpfInterval


class Native::Router::IsisContainer::Isis::SpfInterval::Level12 : public Entity
{
    public:
        Level12();
        ~Level12();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: LevelEnum
        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32
        class LevelEnum;

}; // Native::Router::IsisContainer::Isis::SpfInterval::Level12


class Native::Router::IsisContainer::Isis::SpfInterval::Intervals : public Entity
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
        YLeaf minimum_wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::SpfInterval::Intervals


class Native::Router::IsisContainer::Isis::AreaPassword : public Entity
{
    public:
        AreaPassword();
        ~AreaPassword();

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

}; // Native::Router::IsisContainer::Isis::AreaPassword


class Native::Router::IsisContainer::Isis::Authentication : public Entity
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

        class Mode; //type: Native::Router::IsisContainer::Isis::Authentication::Mode
        class KeyChain; //type: Native::Router::IsisContainer::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Router::IsisContainer::Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Router::IsisContainer::Isis::Authentication


class Native::Router::IsisContainer::Isis::Authentication::Mode : public Entity
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

        class Md5; //type: Native::Router::IsisContainer::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Router::IsisContainer::Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Router::IsisContainer::Isis::Authentication::Mode

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::IsisRedistLevels1Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::IsisRedistLevels2Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::Redistribute::Application::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Bgp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Eigrp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels1Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels2Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Odr::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Metric::Metrics::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::SpfInterval::Level12::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AreaPassword::SnpEnum : public Enum
{
    public:
        static const Enum::YLeaf send_only;
        static const Enum::YLeaf validate;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_101_ */

