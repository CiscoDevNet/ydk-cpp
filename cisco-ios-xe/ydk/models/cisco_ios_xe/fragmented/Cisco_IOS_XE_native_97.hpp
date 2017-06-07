#ifndef _CISCO_IOS_XE_NATIVE_97_
#define _CISCO_IOS_XE_NATIVE_97_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_95.hpp"
#include "Cisco_IOS_XE_native_96.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256 : public Entity
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

}; // Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256


class Native::Router::Eigrp::AfInterface::SummaryAddress : public Entity
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

}; // Native::Router::Eigrp::AfInterface::SummaryAddress


class Native::Router::Eigrp::Bfd : public Entity
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
        class Interface; //type: Native::Router::Eigrp::Bfd::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface> interface;
        
}; // Native::Router::Eigrp::Bfd


class Native::Router::Eigrp::Bfd::Interface : public Entity
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
        class AtmSubinterface; //type: Native::Router::Eigrp::Bfd::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::Bfd::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::Bfd::Interface


class Native::Router::Eigrp::Bfd::Interface::AtmSubinterface : public Entity
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

}; // Native::Router::Eigrp::Bfd::Interface::AtmSubinterface


class Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Eigrp::Bfd::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::Bfd::Interface::LispSubinterface : public Entity
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

}; // Native::Router::Eigrp::Bfd::Interface::LispSubinterface


class Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface


class Native::Router::Eigrp::DefaultInformation : public Entity
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

        class In; //type: Native::Router::Eigrp::DefaultInformation::In
        class Out; //type: Native::Router::Eigrp::DefaultInformation::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultInformation::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultInformation::Out> out; // presence node
        
}; // Native::Router::Eigrp::DefaultInformation


class Native::Router::Eigrp::DefaultInformation::In : public Entity
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

        YLeaf sa_num; //type: uint16
        YLeaf sa_name; //type: string

}; // Native::Router::Eigrp::DefaultInformation::In


class Native::Router::Eigrp::DefaultInformation::Out : public Entity
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

        YLeaf sa_out_num; //type: uint16
        YLeaf sa_out_name; //type: string

}; // Native::Router::Eigrp::DefaultInformation::Out


class Native::Router::Eigrp::DefaultMetric : public Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DmRdr; //type: Native::Router::Eigrp::DefaultMetric::DmRdr

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultMetric::DmRdr> > dm_rdr;
        
}; // Native::Router::Eigrp::DefaultMetric


class Native::Router::Eigrp::DefaultMetric::DmRdr : public Entity
{
    public:
        DmRdr();
        ~DmRdr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dm_rdr; //type: uint32
        class DmRdr0; //type: Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0> > dm_rdr0;
        
}; // Native::Router::Eigrp::DefaultMetric::DmRdr


class Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0 : public Entity
{
    public:
        DmRdr0();
        ~DmRdr0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dm_rdr0; //type: uint32
        YLeaf dm_rdr_pct; //type: uint8

}; // Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0


class Native::Router::Eigrp::Distance : public Entity
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

        class RadDis; //type: Native::Router::Eigrp::Distance::RadDis
        class Eigrp_; //type: Native::Router::Eigrp::Distance::Eigrp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::Eigrp_> eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::RadDis> > rad_dis;
        
}; // Native::Router::Eigrp::Distance


class Native::Router::Eigrp::Distance::RadDis : public Entity
{
    public:
        RadDis();
        ~RadDis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rad_dis; //type: uint8
        class Ipv4; //type: Native::Router::Eigrp::Distance::RadDis::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::RadDis::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::Distance::RadDis


class Native::Router::Eigrp::Distance::RadDis::Ipv4 : public Entity
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
        YLeaf ipv40; //type: string

}; // Native::Router::Eigrp::Distance::RadDis::Ipv4


class Native::Router::Eigrp::Distance::Eigrp_ : public Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DiRt; //type: Native::Router::Eigrp::Distance::Eigrp_::DiRt

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Distance::Eigrp_::DiRt> > di_rt;
        
}; // Native::Router::Eigrp::Distance::Eigrp_


class Native::Router::Eigrp::Distance::Eigrp_::DiRt : public Entity
{
    public:
        DiRt();
        ~DiRt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf di_rt; //type: uint8
        YLeaf di_rt0; //type: uint8

}; // Native::Router::Eigrp::Distance::Eigrp_::DiRt


class Native::Router::Eigrp::DistributeList : public Entity
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

        class EigFilt; //type: Native::Router::Eigrp::DistributeList::EigFilt
        class Gateway; //type: Native::Router::Eigrp::DistributeList::Gateway
        class Prefix; //type: Native::Router::Eigrp::DistributeList::Prefix
        class RouteMap; //type: Native::Router::Eigrp::DistributeList::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::EigFilt> > eig_filt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Gateway> gateway;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::RouteMap> route_map;
        
}; // Native::Router::Eigrp::DistributeList


class Native::Router::Eigrp::DistributeList::EigFilt : public Entity
{
    public:
        EigFilt();
        ~EigFilt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eig_filt; //type: one of uint16, string
        class In; //type: Native::Router::Eigrp::DistributeList::EigFilt::In
        class Out; //type: Native::Router::Eigrp::DistributeList::EigFilt::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::EigFilt::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::EigFilt::Out> out; // presence node
        
}; // Native::Router::Eigrp::DistributeList::EigFilt


class Native::Router::Eigrp::DistributeList::EigFilt::In : public Entity
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

        YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::DistributeList::EigFilt::In


class Native::Router::Eigrp::DistributeList::EigFilt::Out : public Entity
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

        YLeafList interface_name; //type: list of  string

}; // Native::Router::Eigrp::DistributeList::EigFilt::Out


class Native::Router::Eigrp::DistributeList::Gateway : public Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GwList; //type: Native::Router::Eigrp::DistributeList::Gateway::GwList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Gateway::GwList> > gw_list;
        
}; // Native::Router::Eigrp::DistributeList::Gateway


class Native::Router::Eigrp::DistributeList::Gateway::GwList : public Entity
{
    public:
        GwList();
        ~GwList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gw_list; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Eigrp::DistributeList::Gateway::GwList


class Native::Router::Eigrp::DistributeList::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PlName; //type: Native::Router::Eigrp::DistributeList::Prefix::PlName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::Prefix::PlName> > pl_name;
        
}; // Native::Router::Eigrp::DistributeList::Prefix


class Native::Router::Eigrp::DistributeList::Prefix::PlName : public Entity
{
    public:
        PlName();
        ~PlName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pl_name; //type: string
        YLeaf gateway; //type: empty
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Eigrp::DistributeList::Prefix::PlName


class Native::Router::Eigrp::DistributeList::RouteMap : public Entity
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

        class RmapName; //type: Native::Router::Eigrp::DistributeList::RouteMap::RmapName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::DistributeList::RouteMap::RmapName> > rmap_name;
        
}; // Native::Router::Eigrp::DistributeList::RouteMap


class Native::Router::Eigrp::DistributeList::RouteMap::RmapName : public Entity
{
    public:
        RmapName();
        ~RmapName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rmap_name; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Eigrp::DistributeList::RouteMap::RmapName


class Native::Router::Eigrp::Eigrp_ : public Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        class Stub; //type: Native::Router::Eigrp::Eigrp_::Stub

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Eigrp_::Stub> stub; // presence node
        
}; // Native::Router::Eigrp::Eigrp_


class Native::Router::Eigrp::Eigrp_::Stub : public Entity
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

        YLeaf connected; //type: empty
        YLeaf summary; //type: empty
        YLeaf redistributed; //type: empty
        YLeaf leak_map; //type: string
        YLeaf receive_only; //type: empty
        YLeaf static_; //type: empty

}; // Native::Router::Eigrp::Eigrp_::Stub


class Native::Router::Eigrp::Metric : public Entity
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

        YLeaf maximum_hops; //type: uint8
        YLeaf weights; //type: uint8

}; // Native::Router::Eigrp::Metric


class Native::Router::Eigrp::Neighbor : public Entity
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

        class Ipv4; //type: Native::Router::Eigrp::Neighbor::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::Neighbor


class Native::Router::Eigrp::Neighbor::Ipv4 : public Entity
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
        class Interface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface> interface;
        
}; // Native::Router::Eigrp::Neighbor::Ipv4


class Native::Router::Eigrp::Neighbor::Ipv4::Interface : public Entity
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
        class AtmSubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface : public Entity
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

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmSubinterface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface : public Entity
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

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::LispSubinterface


class Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface


class Native::Router::Eigrp::Network : public Entity
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
        YLeaf wild_card; //type: string

}; // Native::Router::Eigrp::Network


class Native::Router::Eigrp::OffsetList : public Entity
{
    public:
        OffsetList();
        ~OffsetList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NsrList; //type: Native::Router::Eigrp::OffsetList::NsrList
        class OlAcl; //type: Native::Router::Eigrp::OffsetList::OlAcl

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::OffsetList::NsrList> > nsr_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::OffsetList::OlAcl> > ol_acl;
        
}; // Native::Router::Eigrp::OffsetList


class Native::Router::Eigrp::OffsetList::NsrList : public Entity
{
    public:
        NsrList();
        ~NsrList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr_list; //type: uint16
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Eigrp::OffsetList::NsrList


class Native::Router::Eigrp::OffsetList::OlAcl : public Entity
{
    public:
        OlAcl();
        ~OlAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ol_acl; //type: string
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Eigrp::OffsetList::OlAcl


class Native::Router::Eigrp::Redistribute : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf ospf; //type: uint16
        class Bgp; //type: Native::Router::Eigrp::Redistribute::Bgp
        class Connected; //type: Native::Router::Eigrp::Redistribute::Connected
        class Isis; //type: Native::Router::Eigrp::Redistribute::Isis
        class Lisp; //type: Native::Router::Eigrp::Redistribute::Lisp
        class Mobile; //type: Native::Router::Eigrp::Redistribute::Mobile
        class Odr; //type: Native::Router::Eigrp::Redistribute::Odr
        class Rip; //type: Native::Router::Eigrp::Redistribute::Rip
        class Static_; //type: Native::Router::Eigrp::Redistribute::Static_
        class Vrf; //type: Native::Router::Eigrp::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Odr> odr; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Vrf> vrf;
        
}; // Native::Router::Eigrp::Redistribute


class Native::Router::Eigrp::Redistribute::Bgp : public Entity
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

        YLeaf rdr_as; //type: one of uint32, string
        YLeaf route_map; //type: string
        YLeaf rd_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class Metric; //type: Native::Router::Eigrp::Redistribute::Bgp::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Redistribute::Bgp::Metric> metric;
        
}; // Native::Router::Eigrp::Redistribute::Bgp


class Native::Router::Eigrp::Redistribute::Bgp::Metric : public Entity
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

        YLeaf bandwith; //type: uint32
        YLeaf delay; //type: uint32
        YLeaf reliability; //type: uint8
        YLeaf effective; //type: uint8
        YLeaf mtu; //type: uint16

}; // Native::Router::Eigrp::Redistribute::Bgp::Metric


class Native::Router::Eigrp::Redistribute::Connected : public Entity
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

        YLeaf metric; //type: empty
        YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Connected


class Native::Router::Eigrp::Redistribute::Isis : public Entity
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

        YLeaf is_tag; //type: string
        YLeaf level_1; //type: empty
        YLeaf level_1_2; //type: empty
        YLeaf level_2; //type: empty
        YLeaf metric; //type: empty
        YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Isis


class Native::Router::Eigrp::Redistribute::Lisp : public Entity
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

        YLeaf metric; //type: empty
        YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Lisp


class Native::Router::Eigrp::Redistribute::Mobile : public Entity
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

        YLeaf metric; //type: empty
        YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Mobile


class Native::Router::Eigrp::Redistribute::Odr : public Entity
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

        YLeaf metric; //type: empty
        YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Odr


class Native::Router::Eigrp::Redistribute::Rip : public Entity
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

        YLeaf metric; //type: empty
        YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Rip


class Native::Router::Eigrp::Redistribute::Static_ : public Entity
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

        YLeaf metric; //type: empty
        YLeaf route_map; //type: empty

}; // Native::Router::Eigrp::Redistribute::Static_


class Native::Router::Eigrp::Redistribute::Vrf : public Entity
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
        YLeaf global; //type: empty

}; // Native::Router::Eigrp::Redistribute::Vrf


class Native::Router::Eigrp::SummaryMetric : public Entity
{
    public:
        SummaryMetric();
        ~SummaryMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf a_period_b_period_c_period_d_slash_nn; //type: empty
        class Ipv4; //type: Native::Router::Eigrp::SummaryMetric::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::SummaryMetric::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::SummaryMetric


class Native::Router::Eigrp::SummaryMetric::Ipv4 : public Entity
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

}; // Native::Router::Eigrp::SummaryMetric::Ipv4


class Native::Router::Eigrp::Timers : public Entity
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

        class ActiveTime; //type: Native::Router::Eigrp::Timers::ActiveTime
        class GracefulRestart; //type: Native::Router::Eigrp::Timers::GracefulRestart
        class Nsf; //type: Native::Router::Eigrp::Timers::Nsf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Timers::ActiveTime> active_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Timers::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::Timers::Nsf> nsf;
        
}; // Native::Router::Eigrp::Timers


class Native::Router::Eigrp::Timers::ActiveTime : public Entity
{
    public:
        ActiveTime();
        ~ActiveTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atimer; //type: uint16
        YLeaf disabled; //type: empty

}; // Native::Router::Eigrp::Timers::ActiveTime


class Native::Router::Eigrp::Timers::GracefulRestart : public Entity
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

        YLeaf purge_time; //type: empty

}; // Native::Router::Eigrp::Timers::GracefulRestart


class Native::Router::Eigrp::Timers::Nsf : public Entity
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

        YLeaf converge; //type: empty
        YLeaf signal; //type: empty

}; // Native::Router::Eigrp::Timers::Nsf


class Native::Router::Eigrp::TrafficShare : public Entity
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

        YLeaf balanced; //type: empty
        class Min; //type: Native::Router::Eigrp::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::TrafficShare::Min> min;
        
}; // Native::Router::Eigrp::TrafficShare


class Native::Router::Eigrp::TrafficShare::Min : public Entity
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

}; // Native::Router::Eigrp::TrafficShare::Min


class Native::Router::Isis : public Entity
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
        class MetricStyle; //type: Native::Router::Isis::MetricStyle
        class AddressFamily; //type: Native::Router::Isis::AddressFamily
        class Distance; //type: Native::Router::Isis::Distance
        class Ip; //type: Native::Router::Isis::Ip
        class Redistribute; //type: Native::Router::Isis::Redistribute
        class SetAttachedBit; //type: Native::Router::Isis::SetAttachedBit
        class Snmp; //type: Native::Router::Isis::Snmp
        class SummaryAddress; //type: Native::Router::Isis::SummaryAddress
        class TrafficShare; //type: Native::Router::Isis::TrafficShare
        class Advertise; //type: Native::Router::Isis::Advertise
        class DefaultInformation; //type: Native::Router::Isis::DefaultInformation
        class Metric; //type: Native::Router::Isis::Metric
        class PrcInterval; //type: Native::Router::Isis::PrcInterval
        class SetOverloadBit; //type: Native::Router::Isis::SetOverloadBit
        class SpfInterval; //type: Native::Router::Isis::SpfInterval
        class AreaPassword; //type: Native::Router::Isis::AreaPassword
        class Authentication; //type: Native::Router::Isis::Authentication
        class DistributeList; //type: Native::Router::Isis::DistributeList
        class DomainPassword; //type: Native::Router::Isis::DomainPassword
        class FastFlood; //type: Native::Router::Isis::FastFlood
        class FastReroute; //type: Native::Router::Isis::FastReroute
        class TiLfa; //type: Native::Router::Isis::TiLfa
        class Hello; //type: Native::Router::Isis::Hello
        class Hostname; //type: Native::Router::Isis::Hostname
        class Ispf; //type: Native::Router::Isis::Ispf
        class LogAdjacencyChanges; //type: Native::Router::Isis::LogAdjacencyChanges
        class LspFull; //type: Native::Router::Isis::LspFull
        class LspGenInterval; //type: Native::Router::Isis::LspGenInterval
        class Microloop; //type: Native::Router::Isis::Microloop
        class Mpls; //type: Native::Router::Isis::Mpls
        class Net; //type: Native::Router::Isis::Net
        class Nsf; //type: Native::Router::Isis::Nsf
        class Partition; //type: Native::Router::Isis::Partition
        class PassiveInterface; //type: Native::Router::Isis::PassiveInterface
        class Disable; //type: Native::Router::Isis::Disable
        class Protocol; //type: Native::Router::Isis::Protocol
        class SegmentRouting; //type: Native::Router::Isis::SegmentRouting
        class Skeptical; //type: Native::Router::Isis::Skeptical
        class Use; //type: Native::Router::Isis::Use
        class Bfd; //type: Native::Router::Isis::Bfd

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily> address_family;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AreaPassword> area_password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Disable> disable;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Distance> > distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::DomainPassword> domain_password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastFlood> fast_flood; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Ispf> ispf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspFull> lsp_full;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval> lsp_gen_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle> metric_style;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Microloop> microloop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Mpls> mpls;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Net> > net;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Partition> partition;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::PrcInterval> prc_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SegmentRouting> segment_routing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SetAttachedBit> set_attached_bit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Skeptical> skeptical;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SpfInterval> spf_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::SummaryAddress> > summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::TiLfa> ti_lfa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::TrafficShare> traffic_share;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::Use> use;
                class IsTypeEnum;

}; // Native::Router::Isis


class Native::Router::Isis::MetricStyle : public Entity
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

        class Narrow; //type: Native::Router::Isis::MetricStyle::Narrow
        class Transition; //type: Native::Router::Isis::MetricStyle::Transition
        class Wide; //type: Native::Router::Isis::MetricStyle::Wide

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Narrow> narrow; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Transition> transition; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Wide> wide; // presence node
        
}; // Native::Router::Isis::MetricStyle


class Native::Router::Isis::MetricStyle::Narrow : public Entity
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

}; // Native::Router::Isis::MetricStyle::Narrow


class Native::Router::Isis::MetricStyle::Transition : public Entity
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

}; // Native::Router::Isis::MetricStyle::Transition


class Native::Router::Isis::MetricStyle::Wide : public Entity
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

}; // Native::Router::Isis::MetricStyle::Wide


class Native::Router::Isis::AddressFamily : public Entity
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

        class Ipv4; //type: Native::Router::Isis::AddressFamily::Ipv4
        class Ipv6; //type: Native::Router::Isis::AddressFamily::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv6> ipv6;
        
}; // Native::Router::Isis::AddressFamily


class Native::Router::Isis::AddressFamily::Ipv4 : public Entity
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
        class Snmp; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp
        class Topology; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp> snmp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology> > topology;
                class UnicastMulticastEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4


class Native::Router::Isis::AddressFamily::Ipv4::Snmp : public Entity
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

        class Context; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context> > context;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context : public Entity
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
        class Community; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community
        class User; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User> user;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community : public Entity
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
        class Access; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User : public Entity
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
        class Permisssion; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion : public Entity
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
        class Access; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth


class Native::Router::Isis::AddressFamily::Ipv4::Topology : public Entity
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

        YLeaf name; //type: string
        YLeaf tid; //type: uint32
        YLeaf ignore_attached_bit; //type: empty
        YLeaf priority; //type: uint8
        YLeaf help; //type: empty
        YLeaf maximum_paths; //type: uint32
        class Distance; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip
        class Redistribute; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute
        class SetAttachedBit; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit
        class Snmp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp
        class SummaryAddress; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress
        class TrafficShare; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare
        class Advertise; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise
        class DefaultInformation; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation
        class Metric; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric
        class PrcInterval; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval
        class SetOverloadBit; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit
        class SpfInterval; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation> default_information;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance> > distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval> prc_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit> set_attached_bit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval> spf_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress> > summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare> traffic_share;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance : public Entity
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
        class IpList; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList> > ip_list;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList : public Entity
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
        class WildcardBits; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits> > wildcard_bits;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip : public Entity
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

        class Route; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route> route;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route : public Entity
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

        class Priority; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority> priority;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority : public Entity
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

        class High; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High> high;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute : public Entity
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

        class Application; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application
        class Bgp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp
        class Connected; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected
        class Eigrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp
        class Isis_; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_
        class IsoIgrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp
        class MaximumPrefix; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix
        class Mobile; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile
        class Odr; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr
        class Ospf; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf
        class Ospfv3; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3
        class Rip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip
        class Static_; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_
        class Vrf; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application> > application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf> vrf;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp : public Entity
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
        class Clns; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_ : public Entity
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

        class IsisRedistribute; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute> > isis_redistribute;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute : public Entity
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
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip> ip; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp : public Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
                class MetricTypeEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf : public Entity
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
        class Match; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3 : public Entity
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
        class Match; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match : public Entity
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

        class Internal; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal
        class External; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_ : public Entity
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

        class Clns; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf : public Entity
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

        class VrfNm; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm
        class Global; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global> global;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm> > vrf_nm;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm : public Entity
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
        class Application; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application
        class Bgp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp
        class Connected; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected
        class Eigrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp
        class Isis_; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_
        class IsoIgrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp
        class Lisp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp
        class Mobile; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile
        class Ospfv3; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3
        class Rip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip
        class Static_; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_> static_; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application : public Entity
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

        class Appname; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname> > appname;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp : public Entity
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
        class BpAsNum; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum : public Entity
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
        class Clns; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp : public Entity
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

        class EigrpAs; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_ : public Entity
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

        class IsisAtag; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag : public Entity
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
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp : public Entity
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

        class IsoAtag; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3 : public Entity
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

        class Os3Id; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_ : public Entity
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
        class Clns; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global : public Entity
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
        class Application; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp
        class Isis_; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_
        class IsoIgrp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile
        class Ospfv3; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application : public Entity
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

        class Appname; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname> > appname;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp : public Entity
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
        class BpAsNum; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum : public Entity
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
        class Clns; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected : public Entity
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

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected

class Native::Router::Isis::IsTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Router::Isis::AddressFamily::Ipv4::UnicastMulticastEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_97_ */

