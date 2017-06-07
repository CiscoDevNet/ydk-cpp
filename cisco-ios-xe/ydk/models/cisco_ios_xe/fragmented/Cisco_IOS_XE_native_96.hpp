#ifndef _CISCO_IOS_XE_NATIVE_96_
#define _CISCO_IOS_XE_NATIVE_96_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation : public Entity
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

        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric : public Entity
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

        class DmRdr; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr> > dm_rdr;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr : public Entity
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
        class DmRdr0; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0> > dm_rdr0;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr


class Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0 : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance : public Entity
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

        class RadDis; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_> eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis> > rad_dis;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis : public Entity
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
        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4 : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_ : public Entity
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

        class DiRt; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt> > di_rt;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList : public Entity
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

        class EigFilt; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt
        class Gateway; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway
        class Prefix; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix
        class RouteMap; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt> > eig_filt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway> gateway;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap> route_map;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt : public Entity
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
        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway : public Entity
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

        class GwList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList> > gw_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix : public Entity
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

        class PlName; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName> > pl_name;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap : public Entity
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

        class RmapName; //type: Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName> > rmap_name;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap


class Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName


class Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_ : public Entity
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
        class Stub; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub> stub; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub


class Native::Router::Eigrp::AddressFamily::AfIpList::Metric : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Metric


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor : public Entity
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

        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4 : public Entity
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
        class Interface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface> interface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface : public Entity
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
        class AtmSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpList::Network : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Network


class Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList : public Entity
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

        class NsrList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList
        class OlAcl; //type: Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList> > nsr_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl> > ol_acl;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList


class Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList


class Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute : public Entity
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
        class Bgp; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp
        class Connected; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected
        class Isis; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis
        class Lisp; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp
        class Mobile; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile
        class Odr; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr
        class Rip; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip
        class Static_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_
        class Vrf; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr> odr; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf> vrf;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp : public Entity
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
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric> metric;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_ : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_


class Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf


class Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric : public Entity
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
        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric


class Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4 : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers : public Entity
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

        class ActiveTime; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime
        class GracefulRestart; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart
        class Nsf; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime> active_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf> nsf;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart


class Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf


class Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare : public Entity
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
        class Min; //type: Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min> min;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare


class Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology : public Entity
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

        class Base; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base> base; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Distance; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance
        class DistributeList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList
        class Redistribute; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute> redistribute;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance : public Entity
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

        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_> eigrp;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_ : public Entity
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

        class DistanceList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList> > distance_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList : public Entity
{
    public:
        DistanceList();
        ~DistanceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal_route; //type: uint8
        YLeaf external_route; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList : public Entity
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

        class PrefixList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList
        class RouteMap; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList> > prefix_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap> > route_map;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList : public Entity
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

        YLeaf prefix_list; //type: string
        YLeaf gateway; //type: empty
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap : public Entity
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
        YLeaf in; //type: string
        YLeaf out; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute : public Entity
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

        YLeaf connected; //type: empty
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_
        class Static_; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_ : public Entity
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

        class AsList; //type: Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList> > as_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList : public Entity
{
    public:
        AsList();
        ~AsList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf autonomous_system; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList


class Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_ : public Entity
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


}; // Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_


class Native::Router::Eigrp::AddressFamily::AfIpVrfList : public Entity
{
    public:
        AfIpVrfList();
        ~AfIpVrfList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        YLeaf unicast_multicast; //type: UnicastMulticastEnum
        YLeaf autonomous_system; //type: uint16
        YLeaf auto_summary; //type: empty
        YLeaf maximum_paths; //type: uint8
        YLeaf nsf; //type: empty
        YLeaf shutdown; //type: empty
        YLeaf variance; //type: uint8
        class AfInterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface
        class Bfd; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd
        class DefaultInformation; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation
        class DefaultMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric
        class Distance; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance
        class DistributeList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric
        class Neighbor; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor
        class Network; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network
        class OffsetList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList
        class Redistribute; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute
        class SummaryMetric; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric
        class Timers; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers
        class TrafficShare; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare
        class Topology; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface> > af_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric> default_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor> neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList> offset_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric> summary_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology> topology;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare> traffic_share;
                class UnicastMulticastEnum;

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface : public Entity
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
        class Authentication; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication
        class SummaryAddress; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress> summary_address;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication : public Entity
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
        class Mode; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode> mode;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode : public Entity
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
        class HmacSha256; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256> hmac_sha_256;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256 : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd : public Entity
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
        class Interface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface> interface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface : public Entity
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
        class AtmSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation : public Entity
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

        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric : public Entity
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

        class DmRdr; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr> > dm_rdr;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr : public Entity
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
        class DmRdr0; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0> > dm_rdr0;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0 : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance : public Entity
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

        class RadDis; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_> eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis> > rad_dis;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis : public Entity
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
        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4 : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_ : public Entity
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

        class DiRt; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt> > di_rt;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList : public Entity
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

        class EigFilt; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt
        class Gateway; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway
        class Prefix; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix
        class RouteMap; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt> > eig_filt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway> gateway;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap> route_map;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt : public Entity
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
        class In; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In
        class Out; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In> in; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out> out; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway : public Entity
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

        class GwList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList> > gw_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix : public Entity
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

        class PlName; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName> > pl_name;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap : public Entity
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

        class RmapName; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName> > rmap_name;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_ : public Entity
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
        class Stub; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub> stub; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor : public Entity
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

        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4 : public Entity
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
        class Interface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface> interface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface : public Entity
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
        class AtmSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList : public Entity
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

        class NsrList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList
        class OlAcl; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList> > nsr_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl> > ol_acl;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute : public Entity
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
        class Bgp; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp
        class Connected; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected
        class Isis; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis
        class Lisp; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp
        class Mobile; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile
        class Odr; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr
        class Rip; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip
        class Static_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_
        class Vrf; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr> odr; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf> vrf;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp : public Entity
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
        class Metric; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric> metric;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_ : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric : public Entity
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
        class Ipv4; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4> > ipv4;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4 : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers : public Entity
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

        class ActiveTime; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime
        class GracefulRestart; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart
        class Nsf; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime> active_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf> nsf;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare : public Entity
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
        class Min; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min> min;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min : public Entity
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

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology : public Entity
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

        class Base; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base> base; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Distance; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance
        class DistributeList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList
        class Redistribute; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute> redistribute;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance : public Entity
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

        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_> eigrp;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_ : public Entity
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

        class DistanceList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList> > distance_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList : public Entity
{
    public:
        DistanceList();
        ~DistanceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal_route; //type: uint8
        YLeaf external_route; //type: uint8

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList : public Entity
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

        class PrefixList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList
        class RouteMap; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList> > prefix_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap> > route_map;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList : public Entity
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

        YLeaf prefix_list; //type: string
        YLeaf gateway; //type: empty
        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap : public Entity
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
        YLeaf in; //type: string
        YLeaf out; //type: string

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute : public Entity
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

        YLeaf connected; //type: empty
        class Eigrp_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_
        class Static_; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_ : public Entity
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

        class AsList; //type: Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList> > as_list;
        
}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList : public Entity
{
    public:
        AsList();
        ~AsList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf autonomous_system; //type: uint16

}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList


class Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_ : public Entity
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


}; // Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_


class Native::Router::Eigrp::AfInterface : public Entity
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
        class Authentication; //type: Native::Router::Eigrp::AfInterface::Authentication
        class SummaryAddress; //type: Native::Router::Eigrp::AfInterface::SummaryAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AfInterface::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AfInterface::SummaryAddress> summary_address;
        
}; // Native::Router::Eigrp::AfInterface


class Native::Router::Eigrp::AfInterface::Authentication : public Entity
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
        class Mode; //type: Native::Router::Eigrp::AfInterface::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AfInterface::Authentication::Mode> mode;
        
}; // Native::Router::Eigrp::AfInterface::Authentication


class Native::Router::Eigrp::AfInterface::Authentication::Mode : public Entity
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
        class HmacSha256; //type: Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256> hmac_sha_256;
        
}; // Native::Router::Eigrp::AfInterface::Authentication::Mode

class Native::Router::Eigrp::AddressFamily::AfIpVrfList::UnicastMulticastEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_96_ */

