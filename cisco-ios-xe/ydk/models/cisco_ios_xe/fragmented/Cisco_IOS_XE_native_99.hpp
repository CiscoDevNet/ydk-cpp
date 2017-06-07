#ifndef _CISCO_IOS_XE_NATIVE_99_
#define _CISCO_IOS_XE_NATIVE_99_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_97.hpp"
#include "Cisco_IOS_XE_native_98.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip


class Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp : public Entity
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

        class IsoAtag; //type: Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp


class Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag


class Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3 : public Entity
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

        class Os3Id; //type: Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_ : public Entity
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
        class Clns; //type: Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns
        class Ip; //type: Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns


class Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip


class Native::Router::Isis::Redistribute::Vrf::Global : public Entity
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
        class Application; //type: Native::Router::Isis::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::Isis::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::Isis::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::Isis::Redistribute::Vrf::Global::Eigrp
        class Isis_; //type: Native::Router::Isis::Redistribute::Vrf::Global::Isis_
        class IsoIgrp; //type: Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::Isis::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::Isis::Redistribute::Vrf::Global::Mobile
        class Ospfv3; //type: Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::Isis::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::Isis::Redistribute::Vrf::Global::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::Isis::Redistribute::Vrf::Global


class Native::Router::Isis::Redistribute::Vrf::Global::Application : public Entity
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

        class Appname; //type: Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname> > appname;
        
}; // Native::Router::Isis::Redistribute::Vrf::Global::Application


class Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname


class Native::Router::Isis::Redistribute::Vrf::Global::Bgp : public Entity
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
        class BpAsNum; //type: Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::Isis::Redistribute::Vrf::Global::Bgp


class Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum : public Entity
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
        class Clns; //type: Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum


class Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns


class Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip


class Native::Router::Isis::Redistribute::Vrf::Global::Connected : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Connected


class Native::Router::Isis::Redistribute::Vrf::Global::Eigrp : public Entity
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

        class EigrpAs; //type: Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::Isis::Redistribute::Vrf::Global::Eigrp


class Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs


class Native::Router::Isis::Redistribute::Vrf::Global::Isis_ : public Entity
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

        class IsisAtag; //type: Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag
        class Ip; //type: Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::Isis::Redistribute::Vrf::Global::Isis_


class Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag : public Entity
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
        class Ip; //type: Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag


class Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip


class Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip


class Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp : public Entity
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

        class IsoAtag; //type: Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag


class Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap


class Native::Router::Isis::Redistribute::Vrf::Global::Lisp : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Lisp


class Native::Router::Isis::Redistribute::Vrf::Global::Mobile : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Mobile


class Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3 : public Entity
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

        class Os3Id; //type: Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3


class Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id


class Native::Router::Isis::Redistribute::Vrf::Global::Rip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Rip


class Native::Router::Isis::Redistribute::Vrf::Global::Static_ : public Entity
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
        class Clns; //type: Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns
        class Ip; //type: Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::Isis::Redistribute::Vrf::Global::Static_


class Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns


class Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip : public Entity
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

}; // Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip


class Native::Router::Isis::SetAttachedBit : public Entity
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

}; // Native::Router::Isis::SetAttachedBit


class Native::Router::Isis::Snmp : public Entity
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

        class Context; //type: Native::Router::Isis::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp::Context> > context;
        
}; // Native::Router::Isis::Snmp


class Native::Router::Isis::Snmp::Context : public Entity
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
        class Community; //type: Native::Router::Isis::Snmp::Context::Community
        class User; //type: Native::Router::Isis::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp::Context::User> user;
        
}; // Native::Router::Isis::Snmp::Context


class Native::Router::Isis::Snmp::Context::Community : public Entity
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
        class Access; //type: Native::Router::Isis::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Isis::Snmp::Context::Community


class Native::Router::Isis::Snmp::Context::Community::Access : public Entity
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

}; // Native::Router::Isis::Snmp::Context::Community::Access


class Native::Router::Isis::Snmp::Context::User : public Entity
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
        class Permisssion; //type: Native::Router::Isis::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Isis::Snmp::Context::User


class Native::Router::Isis::Snmp::Context::User::Permisssion : public Entity
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
        class Access; //type: Native::Router::Isis::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Isis::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Isis::Snmp::Context::User::Permisssion


class Native::Router::Isis::Snmp::Context::User::Permisssion::Access : public Entity
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

}; // Native::Router::Isis::Snmp::Context::User::Permisssion::Access


class Native::Router::Isis::Snmp::Context::User::Permisssion::Auth : public Entity
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

}; // Native::Router::Isis::Snmp::Context::User::Permisssion::Auth


class Native::Router::Isis::SummaryAddress : public Entity
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
        class Level1; //type: Native::Router::Isis::SummaryAddress::Level1
        class Level12; //type: Native::Router::Isis::SummaryAddress::Level12
        class Level2; //type: Native::Router::Isis::SummaryAddress::Level2
        class MetricTagContainer; //type: Native::Router::Isis::SummaryAddress::MetricTagContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SummaryAddress::Level1> level_1; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SummaryAddress::Level12> level_1_2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SummaryAddress::Level2> level_2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SummaryAddress::MetricTagContainer> metric_tag_container;
        
}; // Native::Router::Isis::SummaryAddress


class Native::Router::Isis::SummaryAddress::Level1 : public Entity
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

}; // Native::Router::Isis::SummaryAddress::Level1


class Native::Router::Isis::SummaryAddress::Level12 : public Entity
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

}; // Native::Router::Isis::SummaryAddress::Level12


class Native::Router::Isis::SummaryAddress::Level2 : public Entity
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

}; // Native::Router::Isis::SummaryAddress::Level2


class Native::Router::Isis::SummaryAddress::MetricTagContainer : public Entity
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

}; // Native::Router::Isis::SummaryAddress::MetricTagContainer


class Native::Router::Isis::TrafficShare : public Entity
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

        class Min; //type: Native::Router::Isis::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::TrafficShare::Min> min;
        
}; // Native::Router::Isis::TrafficShare


class Native::Router::Isis::TrafficShare::Min : public Entity
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

}; // Native::Router::Isis::TrafficShare::Min


class Native::Router::Isis::Advertise : public Entity
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

}; // Native::Router::Isis::Advertise


class Native::Router::Isis::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::Isis::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Isis::DefaultInformation


class Native::Router::Isis::DefaultInformation::Originate : public Entity
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

}; // Native::Router::Isis::DefaultInformation::Originate


class Native::Router::Isis::Metric : public Entity
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
        class Metrics; //type: Native::Router::Isis::Metric::Metrics

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Metric::Metrics> > metrics;
        
}; // Native::Router::Isis::Metric


class Native::Router::Isis::Metric::Metrics : public Entity
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

}; // Native::Router::Isis::Metric::Metrics


class Native::Router::Isis::PrcInterval : public Entity
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

}; // Native::Router::Isis::PrcInterval


class Native::Router::Isis::SetOverloadBit : public Entity
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

        class OnStartup; //type: Native::Router::Isis::SetOverloadBit::OnStartup
        class Suppress; //type: Native::Router::Isis::SetOverloadBit::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit::OnStartup> on_startup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit::Suppress> suppress;
        
}; // Native::Router::Isis::SetOverloadBit


class Native::Router::Isis::SetOverloadBit::OnStartup : public Entity
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

        class Time; //type: Native::Router::Isis::SetOverloadBit::OnStartup::Time
        class WaitForBgp; //type: Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit::OnStartup::Time> time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp> wait_for_bgp; // presence node
        
}; // Native::Router::Isis::SetOverloadBit::OnStartup


class Native::Router::Isis::SetOverloadBit::OnStartup::Time : public Entity
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

}; // Native::Router::Isis::SetOverloadBit::OnStartup::Time


class Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp : public Entity
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

        class Suppress; //type: Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress> suppress;
        
}; // Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp


class Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress : public Entity
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

}; // Native::Router::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress


class Native::Router::Isis::SetOverloadBit::Suppress : public Entity
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

}; // Native::Router::Isis::SetOverloadBit::Suppress


class Native::Router::Isis::SpfInterval : public Entity
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

        class Level12; //type: Native::Router::Isis::SpfInterval::Level12
        class Intervals; //type: Native::Router::Isis::SpfInterval::Intervals

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SpfInterval::Intervals> intervals;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SpfInterval::Level12> > level_1_2;
        
}; // Native::Router::Isis::SpfInterval


class Native::Router::Isis::SpfInterval::Level12 : public Entity
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

}; // Native::Router::Isis::SpfInterval::Level12


class Native::Router::Isis::SpfInterval::Intervals : public Entity
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

}; // Native::Router::Isis::SpfInterval::Intervals


class Native::Router::Isis::AreaPassword : public Entity
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

}; // Native::Router::Isis::AreaPassword


class Native::Router::Isis::Authentication : public Entity
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

        class Mode; //type: Native::Router::Isis::Authentication::Mode
        class KeyChain; //type: Native::Router::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Router::Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Router::Isis::Authentication


class Native::Router::Isis::Authentication::Mode : public Entity
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

        class Md5; //type: Native::Router::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Router::Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Router::Isis::Authentication::Mode


class Native::Router::Isis::Authentication::Mode::Md5 : public Entity
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

}; // Native::Router::Isis::Authentication::Mode::Md5


class Native::Router::Isis::Authentication::Mode::Text : public Entity
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

}; // Native::Router::Isis::Authentication::Mode::Text


class Native::Router::Isis::Authentication::KeyChain : public Entity
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
        class KeyChainList; //type: Native::Router::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Router::Isis::Authentication::KeyChain


class Native::Router::Isis::Authentication::KeyChain::KeyChainList : public Entity
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

}; // Native::Router::Isis::Authentication::KeyChain::KeyChainList


class Native::Router::Isis::Authentication::SendOnly : public Entity
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

}; // Native::Router::Isis::Authentication::SendOnly


class Native::Router::Isis::DistributeList : public Entity
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

}; // Native::Router::Isis::DistributeList


class Native::Router::Isis::DomainPassword : public Entity
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

}; // Native::Router::Isis::DomainPassword


class Native::Router::Isis::FastFlood : public Entity
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

}; // Native::Router::Isis::FastFlood


class Native::Router::Isis::FastReroute : public Entity
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

        class LoadSharing; //type: Native::Router::Isis::FastReroute::LoadSharing
        class PerPrefix; //type: Native::Router::Isis::FastReroute::PerPrefix
        class RemoteLfa; //type: Native::Router::Isis::FastReroute::RemoteLfa
        class TieBreak; //type: Native::Router::Isis::FastReroute::TieBreak

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::LoadSharing> load_sharing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::PerPrefix> per_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa> remote_lfa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::TieBreak> tie_break;
        
}; // Native::Router::Isis::FastReroute


class Native::Router::Isis::FastReroute::LoadSharing : public Entity
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

        class Level1; //type: Native::Router::Isis::FastReroute::LoadSharing::Level1
        class Level2; //type: Native::Router::Isis::FastReroute::LoadSharing::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::LoadSharing::Level1> level_1; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::LoadSharing::Level2> level_2; // presence node
        
}; // Native::Router::Isis::FastReroute::LoadSharing


class Native::Router::Isis::FastReroute::LoadSharing::Level1 : public Entity
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

}; // Native::Router::Isis::FastReroute::LoadSharing::Level1


class Native::Router::Isis::FastReroute::LoadSharing::Level2 : public Entity
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

}; // Native::Router::Isis::FastReroute::LoadSharing::Level2


class Native::Router::Isis::FastReroute::PerPrefix : public Entity
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

        class Level1; //type: Native::Router::Isis::FastReroute::PerPrefix::Level1
        class Level2; //type: Native::Router::Isis::FastReroute::PerPrefix::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::PerPrefix::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::PerPrefix::Level2> level_2;
        
}; // Native::Router::Isis::FastReroute::PerPrefix


class Native::Router::Isis::FastReroute::PerPrefix::Level1 : public Entity
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

}; // Native::Router::Isis::FastReroute::PerPrefix::Level1


class Native::Router::Isis::FastReroute::PerPrefix::Level2 : public Entity
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

}; // Native::Router::Isis::FastReroute::PerPrefix::Level2


class Native::Router::Isis::FastReroute::RemoteLfa : public Entity
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

        class Level1; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level1
        class Level2; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level2> level_2;
        
}; // Native::Router::Isis::FastReroute::RemoteLfa


class Native::Router::Isis::FastReroute::RemoteLfa::Level1 : public Entity
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

        class MplsLdp; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level1


class Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp : public Entity
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

        class MaximumMetric; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp


class Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric : public Entity
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

}; // Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric


class Native::Router::Isis::FastReroute::RemoteLfa::Level2 : public Entity
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

        class MplsLdp; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level2


class Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp : public Entity
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

        class MaximumMetric; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp


class Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric : public Entity
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

}; // Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric


class Native::Router::Isis::FastReroute::TieBreak : public Entity
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

        class Level1; //type: Native::Router::Isis::FastReroute::TieBreak::Level1
        class Level2; //type: Native::Router::Isis::FastReroute::TieBreak::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::TieBreak::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::TieBreak::Level2> level_2;
        
}; // Native::Router::Isis::FastReroute::TieBreak


class Native::Router::Isis::FastReroute::TieBreak::Level1 : public Entity
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

}; // Native::Router::Isis::FastReroute::TieBreak::Level1


class Native::Router::Isis::FastReroute::TieBreak::Level2 : public Entity
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

}; // Native::Router::Isis::FastReroute::TieBreak::Level2


class Native::Router::Isis::TiLfa : public Entity
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

        class Level1; //type: Native::Router::Isis::TiLfa::Level1
        class Level2; //type: Native::Router::Isis::TiLfa::Level2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level1> level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level2> level_2; // presence node
        
}; // Native::Router::Isis::TiLfa


class Native::Router::Isis::TiLfa::Level1 : public Entity
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

        class MaximumMetric; //type: Native::Router::Isis::TiLfa::Level1::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level1::MaximumMetric> maximum_metric;
        
}; // Native::Router::Isis::TiLfa::Level1


class Native::Router::Isis::TiLfa::Level1::MaximumMetric : public Entity
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

}; // Native::Router::Isis::TiLfa::Level1::MaximumMetric


class Native::Router::Isis::TiLfa::Level2 : public Entity
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

        class MaximumMetric; //type: Native::Router::Isis::TiLfa::Level2::MaximumMetric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level2::MaximumMetric> maximum_metric;
        
}; // Native::Router::Isis::TiLfa::Level2


class Native::Router::Isis::TiLfa::Level2::MaximumMetric : public Entity
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

}; // Native::Router::Isis::TiLfa::Level2::MaximumMetric


class Native::Router::Isis::Hello : public Entity
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

        class Padding; //type: Native::Router::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Router::Isis::Hello


class Native::Router::Isis::Hello::Padding : public Entity
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

}; // Native::Router::Isis::Hello::Padding


class Native::Router::Isis::Hostname : public Entity
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

}; // Native::Router::Isis::Hostname


class Native::Router::Isis::Ispf : public Entity
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

}; // Native::Router::Isis::Ispf


class Native::Router::Isis::LogAdjacencyChanges : public Entity
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

}; // Native::Router::Isis::LogAdjacencyChanges


class Native::Router::Isis::LspFull : public Entity
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

        class Suppress; //type: Native::Router::Isis::LspFull::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspFull::Suppress> suppress;
        
}; // Native::Router::Isis::LspFull


class Native::Router::Isis::LspFull::Suppress : public Entity
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
        class ExternalInterlevelContainer; //type: Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer> external_interlevel_container;
        
}; // Native::Router::Isis::LspFull::Suppress


class Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer : public Entity
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

}; // Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer


class Native::Router::Isis::LspGenInterval : public Entity
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

        class Intervals; //type: Native::Router::Isis::LspGenInterval::Intervals
        class IntervalsLevels; //type: Native::Router::Isis::LspGenInterval::IntervalsLevels

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::Intervals> intervals;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::IntervalsLevels> intervals_levels;
        
}; // Native::Router::Isis::LspGenInterval


class Native::Router::Isis::LspGenInterval::Intervals : public Entity
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

}; // Native::Router::Isis::LspGenInterval::Intervals


class Native::Router::Isis::LspGenInterval::IntervalsLevels : public Entity
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

        class IntervalsLevel1; //type: Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1
        class IntervalsLevel2; //type: Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1> intervals_level_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2> intervals_level_2;
        
}; // Native::Router::Isis::LspGenInterval::IntervalsLevels


class Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1 : public Entity
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

}; // Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1


class Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2 : public Entity
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

}; // Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2


class Native::Router::Isis::Microloop : public Entity
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

        class Avoidance; //type: Native::Router::Isis::Microloop::Avoidance

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Microloop::Avoidance> avoidance; // presence node
        
}; // Native::Router::Isis::Microloop


class Native::Router::Isis::Microloop::Avoidance : public Entity
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

}; // Native::Router::Isis::Microloop::Avoidance


class Native::Router::Isis::Mpls : public Entity
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

        class Ldp; //type: Native::Router::Isis::Mpls::Ldp
        class TrafficEng; //type: Native::Router::Isis::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Router::Isis::Mpls


class Native::Router::Isis::Mpls::Ldp : public Entity
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
        class Autoconfig; //type: Native::Router::Isis::Mpls::Ldp::Autoconfig

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::Ldp::Autoconfig> autoconfig; // presence node
        
}; // Native::Router::Isis::Mpls::Ldp


class Native::Router::Isis::Mpls::Ldp::Autoconfig : public Entity
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

}; // Native::Router::Isis::Mpls::Ldp::Autoconfig


class Native::Router::Isis::Mpls::TrafficEng : public Entity
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
        class RouterId; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId
        class Scanner; //type: Native::Router::Isis::Mpls::TrafficEng::Scanner

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId> router_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::Scanner> scanner; // presence node
        
}; // Native::Router::Isis::Mpls::TrafficEng


class Native::Router::Isis::Mpls::TrafficEng::RouterId : public Entity
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
        class AtmSubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Isis::Mpls::TrafficEng::RouterId


class Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface : public Entity
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

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmSubinterface


class Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::AtmAcrsubinterface


class Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface : public Entity
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

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::LispSubinterface


class Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface : public Entity
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

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface


class Native::Router::Isis::Mpls::TrafficEng::Scanner : public Entity
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

}; // Native::Router::Isis::Mpls::TrafficEng::Scanner


class Native::Router::Isis::Net : public Entity
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

}; // Native::Router::Isis::Net


class Native::Router::Isis::Nsf : public Entity
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
        class Interface; //type: Native::Router::Isis::Nsf::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Nsf::Interface> interface;
        
}; // Native::Router::Isis::Nsf


class Native::Router::Isis::Nsf::Interface : public Entity
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

}; // Native::Router::Isis::Nsf::Interface


class Native::Router::Isis::Partition : public Entity
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

}; // Native::Router::Isis::Partition


class Native::Router::Isis::PassiveInterface : public Entity
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

}; // Native::Router::Isis::PassiveInterface


class Native::Router::Isis::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Isis::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Isis::Disable


class Native::Router::Isis::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Isis::Disable::PassiveInterface


class Native::Router::Isis::Protocol : public Entity
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

}; // Native::Router::Isis::Protocol


class Native::Router::Isis::SegmentRouting : public Entity
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
        class PrefixSidMap; //type: Native::Router::Isis::SegmentRouting::PrefixSidMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Native::Router::Isis::SegmentRouting


class Native::Router::Isis::SegmentRouting::PrefixSidMap : public Entity
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
        class Receive; //type: Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive> receive; // presence node
        
}; // Native::Router::Isis::SegmentRouting::PrefixSidMap


class Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive : public Entity
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

}; // Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive


class Native::Router::Isis::Skeptical : public Entity
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

}; // Native::Router::Isis::Skeptical


class Native::Router::Isis::Use : public Entity
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

}; // Native::Router::Isis::Use


class Native::Router::Isis::Bfd : public Entity
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

}; // Native::Router::Isis::Bfd


class Native::Router::IsisContainer : public Entity
{
    public:
        IsisContainer();
        ~IsisContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Router::IsisContainer::Isis

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis> > isis;
        
}; // Native::Router::IsisContainer


class Native::Router::IsisContainer::Isis : public Entity
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

        YLeaf area_tag; //type: string
        YLeaf priority; //type: uint8
        YLeaf help; //type: empty
        YLeaf maximum_paths; //type: uint32
        YLeaf ignore_lsp_errors; //type: empty
        YLeaf is_type; //type: IsTypeEnum
        YLeaf lsp_mtu; //type: uint32
        YLeaf lsp_refresh_interval; //type: uint32
        YLeaf max_area_addresses; //type: uint32
        YLeaf max_lsp_lifetime; //type: uint32
        YLeaf update_queue_depth; //type: uint32
        YLeaf vrf; //type: string
        YLeaf adjacency_check; //type: empty
        YLeaf router_id; //type: string
        class MetricStyle; //type: Native::Router::IsisContainer::Isis::MetricStyle
        class AddressFamily; //type: Native::Router::IsisContainer::Isis::AddressFamily
        class Distance; //type: Native::Router::IsisContainer::Isis::Distance
        class Ip; //type: Native::Router::IsisContainer::Isis::Ip
        class Redistribute; //type: Native::Router::IsisContainer::Isis::Redistribute
        class SetAttachedBit; //type: Native::Router::IsisContainer::Isis::SetAttachedBit
        class Snmp; //type: Native::Router::IsisContainer::Isis::Snmp
        class SummaryAddress; //type: Native::Router::IsisContainer::Isis::SummaryAddress
        class TrafficShare; //type: Native::Router::IsisContainer::Isis::TrafficShare
        class Advertise; //type: Native::Router::IsisContainer::Isis::Advertise
        class DefaultInformation; //type: Native::Router::IsisContainer::Isis::DefaultInformation
        class Metric; //type: Native::Router::IsisContainer::Isis::Metric
        class PrcInterval; //type: Native::Router::IsisContainer::Isis::PrcInterval
        class SetOverloadBit; //type: Native::Router::IsisContainer::Isis::SetOverloadBit
        class SpfInterval; //type: Native::Router::IsisContainer::Isis::SpfInterval
        class AreaPassword; //type: Native::Router::IsisContainer::Isis::AreaPassword
        class Authentication; //type: Native::Router::IsisContainer::Isis::Authentication
        class DistributeList; //type: Native::Router::IsisContainer::Isis::DistributeList
        class DomainPassword; //type: Native::Router::IsisContainer::Isis::DomainPassword
        class FastFlood; //type: Native::Router::IsisContainer::Isis::FastFlood
        class FastReroute; //type: Native::Router::IsisContainer::Isis::FastReroute
        class TiLfa; //type: Native::Router::IsisContainer::Isis::TiLfa
        class Hello; //type: Native::Router::IsisContainer::Isis::Hello
        class Hostname; //type: Native::Router::IsisContainer::Isis::Hostname
        class Ispf; //type: Native::Router::IsisContainer::Isis::Ispf
        class LogAdjacencyChanges; //type: Native::Router::IsisContainer::Isis::LogAdjacencyChanges
        class LspFull; //type: Native::Router::IsisContainer::Isis::LspFull
        class LspGenInterval; //type: Native::Router::IsisContainer::Isis::LspGenInterval
        class Microloop; //type: Native::Router::IsisContainer::Isis::Microloop
        class Mpls; //type: Native::Router::IsisContainer::Isis::Mpls
        class Net; //type: Native::Router::IsisContainer::Isis::Net
        class Nsf; //type: Native::Router::IsisContainer::Isis::Nsf
        class Partition; //type: Native::Router::IsisContainer::Isis::Partition
        class PassiveInterface; //type: Native::Router::IsisContainer::Isis::PassiveInterface
        class Disable; //type: Native::Router::IsisContainer::Isis::Disable
        class Protocol; //type: Native::Router::IsisContainer::Isis::Protocol
        class SegmentRouting; //type: Native::Router::IsisContainer::Isis::SegmentRouting
        class Skeptical; //type: Native::Router::IsisContainer::Isis::Skeptical
        class Use; //type: Native::Router::IsisContainer::Isis::Use
        class Bfd; //type: Native::Router::IsisContainer::Isis::Bfd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily> address_family;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AreaPassword> area_password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Disable> disable;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Distance> > distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DomainPassword> domain_password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastFlood> fast_flood; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Ispf> ispf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspFull> lsp_full;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval> lsp_gen_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle> metric_style;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Microloop> microloop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls> mpls;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Net> > net;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Partition> partition;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::PrcInterval> prc_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting> segment_routing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetAttachedBit> set_attached_bit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Skeptical> skeptical;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval> spf_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress> > summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa> ti_lfa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TrafficShare> traffic_share;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Use> use;
                class IsTypeEnum;

}; // Native::Router::IsisContainer::Isis


class Native::Router::IsisContainer::Isis::MetricStyle : public Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Narrow; //type: Native::Router::IsisContainer::Isis::MetricStyle::Narrow
        class Transition; //type: Native::Router::IsisContainer::Isis::MetricStyle::Transition
        class Wide; //type: Native::Router::IsisContainer::Isis::MetricStyle::Wide

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle::Narrow> narrow; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle::Transition> transition; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle::Wide> wide; // presence node
        
}; // Native::Router::IsisContainer::Isis::MetricStyle


class Native::Router::IsisContainer::Isis::MetricStyle::Narrow : public Entity
{
    public:
        Narrow();
        ~Narrow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf narrow_wide; //type: IsisLevelTypeEnum
        YLeaf transition; //type: IsisLevelTypeEnum

}; // Native::Router::IsisContainer::Isis::MetricStyle::Narrow


class Native::Router::IsisContainer::Isis::MetricStyle::Transition : public Entity
{
    public:
        Transition();
        ~Transition();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transition; //type: IsisLevelTypeEnum

}; // Native::Router::IsisContainer::Isis::MetricStyle::Transition


class Native::Router::IsisContainer::Isis::MetricStyle::Wide : public Entity
{
    public:
        Wide();
        ~Wide();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf narrow_wide; //type: IsisLevelTypeEnum
        YLeaf transition; //type: IsisLevelTypeEnum

}; // Native::Router::IsisContainer::Isis::MetricStyle::Wide


class Native::Router::IsisContainer::Isis::AddressFamily : public Entity
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

        class Ipv4; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4
        class Ipv6; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6> ipv6;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4 : public Entity
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

        YLeaf unicast_multicast; //type: UnicastMulticastEnum
        YLeaf help; //type: empty
        class Snmp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp
        class Topology; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp> snmp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology> > topology;
                class UnicastMulticastEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp : public Entity
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

        class Context; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context> > context;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context : public Entity
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
        class Community; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community
        class User; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User> user;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::Metric::Metrics::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::Isis::SpfInterval::Level12::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::Isis::AreaPassword::SnpEnum : public Enum
{
    public:
        static const Enum::YLeaf send_only;
        static const Enum::YLeaf validate;

};

class Native::Router::Isis::DomainPassword::SnpEnum : public Enum
{
    public:
        static const Enum::YLeaf send_only;
        static const Enum::YLeaf validate;

};

class Native::Router::Isis::Hello::Padding::PadTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_point;
        static const Enum::YLeaf point_to_point;

};

class Native::Router::Isis::Ispf::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::IsTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::UnicastMulticastEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_99_ */

