#ifndef _CISCO_IOS_XE_NATIVE_2_
#define _CISCO_IOS_XE_NATIVE_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_1.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf atm; //type: empty

}; // Native::Controller::SonetAcr::Au4::CemGroupAtm::Tug2


class Native::Controller::SonetAcr::Au4::ImaGroup : public Entity
{
    public:
        ImaGroup();
        ~ImaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tug2; //type: Native::Controller::SonetAcr::Au4::ImaGroup::Tug2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Au4::ImaGroup::Tug2> > tug_2;
        
}; // Native::Controller::SonetAcr::Au4::ImaGroup


class Native::Controller::SonetAcr::Au4::ImaGroup::Tug2 : public Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf e1; //type: int8
        YLeaf ima_group; //type: int32

}; // Native::Controller::SonetAcr::Au4::ImaGroup::Tug2


class Native::Controller::SonetAcr::Aps : public Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf working; //type: int8
        YLeaf hspw_icrm_grp; //type: uint8
        class Group; //type: Native::Controller::SonetAcr::Aps::Group
        class Protect; //type: Native::Controller::SonetAcr::Aps::Protect
        class Interchassis; //type: Native::Controller::SonetAcr::Aps::Interchassis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Aps::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Aps::Interchassis> interchassis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Controller::SonetAcr::Aps::Protect> protect;
        
}; // Native::Controller::SonetAcr::Aps


class Native::Controller::SonetAcr::Aps::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_number; //type: uint8
        YLeaf acr; //type: int8

}; // Native::Controller::SonetAcr::Aps::Group


class Native::Controller::SonetAcr::Aps::Protect : public Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: int8
        YLeaf ip_addr; //type: string

}; // Native::Controller::SonetAcr::Aps::Protect


class Native::Controller::SonetAcr::Aps::Interchassis : public Entity
{
    public:
        Interchassis();
        ~Interchassis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: uint8

}; // Native::Controller::SonetAcr::Aps::Interchassis


class Native::Controller::Wanphy : public Entity
{
    public:
        Wanphy();
        ~Wanphy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Controller::Wanphy


class Native::Vrf : public Entity
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

        class Definition; //type: Native::Vrf::Definition

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition> > definition;
        
}; // Native::Vrf


class Native::Vrf::Definition : public Entity
{
    public:
        Definition();
        ~Definition();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf rd; //type: string
        class AddressFamily; //type: Native::Vrf::Definition::AddressFamily
        class RouteTarget; //type: Native::Vrf::Definition::RouteTarget

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily> address_family;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::RouteTarget> route_target;
        
}; // Native::Vrf::Definition


class Native::Vrf::Definition::AddressFamily : public Entity
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

        class Ipv4; //type: Native::Vrf::Definition::AddressFamily::Ipv4
        class Ipv6; //type: Native::Vrf::Definition::AddressFamily::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6> ipv6; // presence node
        
}; // Native::Vrf::Definition::AddressFamily


class Native::Vrf::Definition::AddressFamily::Ipv4 : public Entity
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

        class Export_; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Export_
        class Maximum; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Maximum
        class Mdt; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt
        class RouteTarget; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Export_> export_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Maximum> maximum; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt> mdt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget> route_target;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4


class Native::Vrf::Definition::AddressFamily::Ipv4::Export_ : public Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Export_


class Native::Vrf::Definition::AddressFamily::Ipv4::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf routes; //type: uint32
        YLeaf threshold; //type: uint16
        YLeaf reinstall; //type: uint16
        YLeaf warning_only; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Maximum


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt : public Entity
{
    public:
        Mdt();
        ~Mdt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log_reuse; //type: empty
        YLeafList preference; //type: list of  PreferenceEnum
        class Default_; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_
        class Data; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data> data;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_> default_;
                class PreferenceEnum;

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        class Mpls; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls> mpls;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls : public Entity
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

        YLeaf mldp; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default_::Mpls


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: one of uint16, string
        YLeaf threshold; //type: uint32
        class Multicast; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast> > multicast;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf wildcard; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Export_; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_> > export_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import> > import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_ : public Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export_


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import


class Native::Vrf::Definition::AddressFamily::Ipv6 : public Entity
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

        class RouteTarget; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget

        std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget> route_target;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Export_; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_> > export_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import> > import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_ : public Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export_


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import


class Native::Vrf::Definition::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Export_; //type: Native::Vrf::Definition::RouteTarget::Export_
        class Import; //type: Native::Vrf::Definition::RouteTarget::Import

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::RouteTarget::Export_> > export_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Vrf::Definition::RouteTarget::Import> > import;
        
}; // Native::Vrf::Definition::RouteTarget


class Native::Vrf::Definition::RouteTarget::Export_ : public Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::RouteTarget::Export_


class Native::Vrf::Definition::RouteTarget::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::RouteTarget::Import


class Native::Rmon : public Entity
{
    public:
        Rmon();
        ~Rmon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Alarm; //type: Native::Rmon::Alarm
        class Event; //type: Native::Rmon::Event

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Rmon::Alarm> > alarm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Rmon::Event> > event;
        
}; // Native::Rmon


class Native::Rmon::Alarm : public Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf mib_object; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf test_mode; //type: TestModeEnum
        YLeaf rising_threshold; //type: int32
        YLeaf rising_event; //type: uint16
        YLeaf falling_threshold; //type: int32
        YLeaf falling_event; //type: uint16
        YLeaf owner; //type: string
        class TestModeEnum;

}; // Native::Rmon::Alarm


class Native::Rmon::Event : public Entity
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

        YLeaf number; //type: uint16
        class Log; //type: Native::Rmon::Event::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Rmon::Event::Log> log; // presence node
        
}; // Native::Rmon::Event


class Native::Rmon::Event::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trap; //type: string
        YLeaf description; //type: string
        YLeaf owner; //type: string

}; // Native::Rmon::Event::Log


class Native::Sampler : public Entity
{
    public:
        Sampler();
        ~Sampler();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        class Mode; //type: Native::Sampler::Mode
        class Granularity; //type: Native::Sampler::Granularity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Sampler::Granularity> granularity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Sampler::Mode> mode;
        
}; // Native::Sampler


class Native::Sampler::Mode : public Entity
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

        class Deterministic; //type: Native::Sampler::Mode::Deterministic
        class Hash; //type: Native::Sampler::Mode::Hash
        class Random; //type: Native::Sampler::Mode::Random

        std::shared_ptr<Cisco_IOS_XE_native::Native::Sampler::Mode::Deterministic> deterministic;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Sampler::Mode::Hash> hash;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Sampler::Mode::Random> random;
        
}; // Native::Sampler::Mode


class Native::Sampler::Mode::Deterministic : public Entity
{
    public:
        Deterministic();
        ~Deterministic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Deterministic


class Native::Sampler::Mode::Hash : public Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Hash


class Native::Sampler::Mode::Random : public Entity
{
    public:
        Random();
        ~Random();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Random


class Native::Sampler::Granularity : public Entity
{
    public:
        Granularity();
        ~Granularity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf connection; //type: empty
        YLeaf packet; //type: empty

}; // Native::Sampler::Granularity


class Native::Flow : public Entity
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

        class Record; //type: Native::Flow::Record
        class Exporter; //type: Native::Flow::Exporter
        class Monitor; //type: Native::Flow::Monitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter> > exporter;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor> > monitor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record> > record;
        
}; // Native::Flow


class Native::Flow::Record : public Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: TypeEnum
        YLeaf description; //type: string
        class Collect; //type: Native::Flow::Record::Collect
        class Default_; //type: Native::Flow::Record::Default_
        class Match; //type: Native::Flow::Record::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect> collect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match> match;
                class TypeEnum;

}; // Native::Flow::Record


class Native::Flow::Record::Collect : public Entity
{
    public:
        Collect();
        ~Collect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Flow::Record::Collect::Application
        class Connection; //type: Native::Flow::Record::Collect::Connection
        class Counter; //type: Native::Flow::Record::Collect::Counter
        class Datalink; //type: Native::Flow::Record::Collect::Datalink
        class Flow_; //type: Native::Flow::Record::Collect::Flow_
        class Interface; //type: Native::Flow::Record::Collect::Interface
        class Ipv4; //type: Native::Flow::Record::Collect::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Ipv6
        class Metadata; //type: Native::Flow::Record::Collect::Metadata
        class Monitor; //type: Native::Flow::Record::Collect::Monitor
        class Mpls; //type: Native::Flow::Record::Collect::Mpls
        class Network; //type: Native::Flow::Record::Collect::Network
        class Pfr; //type: Native::Flow::Record::Collect::Pfr
        class Policy; //type: Native::Flow::Record::Collect::Policy
        class Routing; //type: Native::Flow::Record::Collect::Routing
        class Services; //type: Native::Flow::Record::Collect::Services
        class Timestamp; //type: Native::Flow::Record::Collect::Timestamp
        class Transport; //type: Native::Flow::Record::Collect::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection> connection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Metadata> metadata;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr> pfr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing> routing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services> services;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp> timestamp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport> transport;
        
}; // Native::Flow::Record::Collect


class Native::Flow::Record::Collect::Application : public Entity
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

        YLeaf vendor; //type: empty
        YLeaf version; //type: empty
        class Dns; //type: Native::Flow::Record::Collect::Application::Dns
        class Http; //type: Native::Flow::Record::Collect::Application::Http
        class Media; //type: Native::Flow::Record::Collect::Application::Media
        class Name; //type: Native::Flow::Record::Collect::Application::Name
        class Nntp; //type: Native::Flow::Record::Collect::Application::Nntp
        class Pop3; //type: Native::Flow::Record::Collect::Application::Pop3
        class Rtmp; //type: Native::Flow::Record::Collect::Application::Rtmp
        class Rtsp; //type: Native::Flow::Record::Collect::Application::Rtsp
        class Sip; //type: Native::Flow::Record::Collect::Application::Sip
        class Smtp; //type: Native::Flow::Record::Collect::Application::Smtp
        class Ssl; //type: Native::Flow::Record::Collect::Application::Ssl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Dns> dns;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http> http;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media> media;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Name> name; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Nntp> nntp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Pop3> pop3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtmp> rtmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtsp> rtsp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Sip> sip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Smtp> smtp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Ssl> ssl;
        
}; // Native::Flow::Record::Collect::Application


class Native::Flow::Record::Collect::Application::Dns : public Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Dns


class Native::Flow::Record::Collect::Application::Http : public Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty
        YLeaf referer; //type: empty
        YLeaf url; //type: empty
        YLeaf user_agent; //type: empty
        class Uri; //type: Native::Flow::Record::Collect::Application::Http::Uri

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http::Uri> uri;
        
}; // Native::Flow::Record::Collect::Application::Http


class Native::Flow::Record::Collect::Application::Http::Uri : public Entity
{
    public:
        Uri();
        ~Uri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf statistics; //type: empty

}; // Native::Flow::Record::Collect::Application::Http::Uri


class Native::Flow::Record::Collect::Application::Media : public Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Application::Media::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Application::Media::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets> packets;
        
}; // Native::Flow::Record::Collect::Application::Media


class Native::Flow::Record::Collect::Application::Media::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes


class Native::Flow::Record::Collect::Application::Media::Bytes::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Counter


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow : public Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow


class Native::Flow::Record::Collect::Application::Media::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Packets::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Packets::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Packets


class Native::Flow::Record::Collect::Application::Media::Packets::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Packets::Counter


class Native::Flow::Record::Collect::Application::Media::Packets::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Variation; //type: Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation> variation; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Packets::Rate


class Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation : public Entity
{
    public:
        Variation();
        ~Variation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation


class Native::Flow::Record::Collect::Application::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf account_on_resolution; //type: empty

}; // Native::Flow::Record::Collect::Application::Name


class Native::Flow::Record::Collect::Application::Nntp : public Entity
{
    public:
        Nntp();
        ~Nntp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Nntp


class Native::Flow::Record::Collect::Application::Pop3 : public Entity
{
    public:
        Pop3();
        ~Pop3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server; //type: empty

}; // Native::Flow::Record::Collect::Application::Pop3


class Native::Flow::Record::Collect::Application::Rtmp : public Entity
{
    public:
        Rtmp();
        ~Rtmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pageurl; //type: empty

}; // Native::Flow::Record::Collect::Application::Rtmp


class Native::Flow::Record::Collect::Application::Rtsp : public Entity
{
    public:
        Rtsp();
        ~Rtsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty

}; // Native::Flow::Record::Collect::Application::Rtsp


class Native::Flow::Record::Collect::Application::Sip : public Entity
{
    public:
        Sip();
        ~Sip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination; //type: empty
        YLeaf source; //type: empty

}; // Native::Flow::Record::Collect::Application::Sip


class Native::Flow::Record::Collect::Application::Smtp : public Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sender; //type: empty
        YLeaf server; //type: empty

}; // Native::Flow::Record::Collect::Application::Smtp


class Native::Flow::Record::Collect::Application::Ssl : public Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Ssl


class Native::Flow::Record::Collect::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: empty
        YLeaf initiator; //type: empty
        YLeaf new_connections; //type: empty
        YLeaf sum_duration; //type: empty
        YLeaf transaction_id; //type: empty
        class Client; //type: Native::Flow::Record::Collect::Connection::Client
        class Delay; //type: Native::Flow::Record::Collect::Connection::Delay
        class Server; //type: Native::Flow::Record::Collect::Connection::Server
        class Transaction; //type: Native::Flow::Record::Collect::Connection::Transaction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction> transaction;
        
}; // Native::Flow::Record::Collect::Connection


class Native::Flow::Record::Collect::Connection::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Collect::Connection::Client::Counter
        class Ipv4; //type: Native::Flow::Record::Collect::Connection::Client::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Connection::Client::Ipv6
        class Transport; //type: Native::Flow::Record::Collect::Connection::Client::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Client


class Native::Flow::Record::Collect::Connection::Client::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bytes; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Packets> packets;
        
}; // Native::Flow::Record::Collect::Connection::Client::Counter


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network : public Entity
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

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport


class Native::Flow::Record::Collect::Connection::Client::Counter::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Packets


class Native::Flow::Record::Collect::Connection::Client::Ipv4 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Ipv4


class Native::Flow::Record::Collect::Connection::Client::Ipv6 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Ipv6


class Native::Flow::Record::Collect::Connection::Client::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Transport


class Native::Flow::Record::Collect::Connection::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Application; //type: Native::Flow::Record::Collect::Connection::Delay::Application
        class Network; //type: Native::Flow::Record::Collect::Connection::Delay::Network
        class Response; //type: Native::Flow::Record::Collect::Connection::Delay::Response

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Response> response;
        
}; // Native::Flow::Record::Collect::Connection::Delay


class Native::Flow::Record::Collect::Connection::Delay::Application : public Entity
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

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Application


class Native::Flow::Record::Collect::Connection::Delay::Network : public Entity
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

        class ClientToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer
        class LongLived; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived
        class ToClient; //type: Native::Flow::Record::Collect::Connection::Delay::Network::ToClient
        class ToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Network::ToServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer> client_to_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived> long_lived;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::ToClient> to_client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::ToServer> to_server;
        
}; // Native::Flow::Record::Collect::Connection::Delay::Network


class Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer : public Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf num_samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::ClientToServer


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived : public Entity
{
    public:
        LongLived();
        ~LongLived();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientToServe; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe
        class ToClient; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient
        class ToServe; //type: Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe> client_to_serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient> to_client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe> to_serve;
        
}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe : public Entity
{
    public:
        ClientToServe();
        ~ClientToServe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ClientToServe


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient : public Entity
{
    public:
        ToClient();
        ~ToClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToClient


class Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe : public Entity
{
    public:
        ToServe();
        ~ToServe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::LongLived::ToServe


class Native::Flow::Record::Collect::Connection::Delay::Network::ToClient : public Entity
{
    public:
        ToClient();
        ~ToClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf num_samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::ToClient


class Native::Flow::Record::Collect::Connection::Delay::Network::ToServer : public Entity
{
    public:
        ToServer();
        ~ToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf num_samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Network::ToServer


class Native::Flow::Record::Collect::Connection::Delay::Response : public Entity
{
    public:
        Response();
        ~Response();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer
        class ToServer; //type: Native::Flow::Record::Collect::Connection::Delay::Response::ToServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer> client_to_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay::Response::ToServer> to_server;
        
}; // Native::Flow::Record::Collect::Connection::Delay::Response


class Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer : public Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Response::ClientToServer


class Native::Flow::Record::Collect::Connection::Delay::Response::ToServer : public Entity
{
    public:
        ToServer();
        ~ToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf histogram; //type: empty
        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Delay::Response::ToServer


class Native::Flow::Record::Collect::Connection::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Collect::Connection::Server::Counter
        class Ipv4; //type: Native::Flow::Record::Collect::Connection::Server::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Connection::Server::Ipv6
        class Transport; //type: Native::Flow::Record::Collect::Connection::Server::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Server


class Native::Flow::Record::Collect::Connection::Server::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf responses; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Packets> packets;
        
}; // Native::Flow::Record::Collect::Connection::Server::Counter


class Native::Flow::Record::Collect::Connection::Server::Counter::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Server::Counter::Bytes


class Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network : public Entity
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

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Network


class Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Counter::Bytes::Transport


class Native::Flow::Record::Collect::Connection::Server::Counter::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Counter::Packets


class Native::Flow::Record::Collect::Connection::Server::Ipv4 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Ipv4


class Native::Flow::Record::Collect::Connection::Server::Ipv6 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Ipv6


class Native::Flow::Record::Collect::Connection::Server::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Transport


class Native::Flow::Record::Collect::Connection::Transaction : public Entity
{
    public:
        Transaction();
        ~Transaction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Collect::Connection::Transaction::Counter
        class Duration; //type: Native::Flow::Record::Collect::Connection::Transaction::Duration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction::Duration> duration;
        
}; // Native::Flow::Record::Collect::Connection::Transaction


class Native::Flow::Record::Collect::Connection::Transaction::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf complete; //type: empty

}; // Native::Flow::Record::Collect::Connection::Transaction::Counter


class Native::Flow::Record::Collect::Connection::Transaction::Duration : public Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Transaction::Duration


class Native::Flow::Record::Collect::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flows; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Counter::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes> bytes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets> packets; // presence node
        
}; // Native::Flow::Record::Collect::Counter


class Native::Flow::Record::Collect::Counter::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Collect::Counter::Bytes::Rate
        class Squared; //type: Native::Flow::Record::Collect::Counter::Bytes::Squared

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Rate> rate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Squared> squared;
        
}; // Native::Flow::Record::Collect::Counter::Bytes


class Native::Flow::Record::Collect::Counter::Bytes::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Bytes::Rate


class Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow : public Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow


class Native::Flow::Record::Collect::Counter::Bytes::Squared : public Entity
{
    public:
        Squared();
        ~Squared();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Counter::Bytes::Squared


class Native::Flow::Record::Collect::Counter::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dropped; //type: empty
        YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Collect::Counter::Packets::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Packets


class Native::Flow::Record::Collect::Counter::Packets::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Packets::Rate


class Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow : public Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow


class Native::Flow::Record::Collect::Datalink : public Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_vlan_id; //type: empty
        YLeaf ethertype; //type: empty
        YLeaf source_vlan_id; //type: empty
        class Dot1Q; //type: Native::Flow::Record::Collect::Datalink::Dot1Q
        class Mac; //type: Native::Flow::Record::Collect::Datalink::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac> mac;
        
}; // Native::Flow::Record::Collect::Datalink


class Native::Flow::Record::Collect::Datalink::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: empty
        class Vlan; //type: Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan> vlan;
        
}; // Native::Flow::Record::Collect::Datalink::Dot1Q


class Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Dot1Q::Vlan


class Native::Flow::Record::Collect::Datalink::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::Flow::Record::Collect::Datalink::Mac::Destination
        class Source; //type: Native::Flow::Record::Collect::Datalink::Mac::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Source> source;
        
}; // Native::Flow::Record::Collect::Datalink::Mac


class Native::Flow::Record::Collect::Datalink::Mac::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Flow::Record::Collect::Datalink::Mac::Destination::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Destination::Address> address;
        
}; // Native::Flow::Record::Collect::Datalink::Mac::Destination


class Native::Flow::Record::Collect::Datalink::Mac::Destination::Address : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Mac::Destination::Address


class Native::Flow::Record::Collect::Datalink::Mac::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Address; //type: Native::Flow::Record::Collect::Datalink::Mac::Source::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Source::Address> address;
        
}; // Native::Flow::Record::Collect::Datalink::Mac::Source


class Native::Flow::Record::Collect::Datalink::Mac::Source::Address : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Mac::Source::Address


class Native::Flow::Record::Collect::Flow_ : public Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: empty
        YLeaf sampler; //type: empty
        YLeaf end_reason; //type: empty
        class Cts; //type: Native::Flow::Record::Collect::Flow_::Cts
        class Observation; //type: Native::Flow::Record::Collect::Flow_::Observation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Observation> observation;
        
}; // Native::Flow::Record::Collect::Flow_


class Native::Flow::Record::Collect::Flow_::Cts : public Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::Flow::Record::Collect::Flow_::Cts::Destination
        class Source; //type: Native::Flow::Record::Collect::Flow_::Cts::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts::Source> source;
        
}; // Native::Flow::Record::Collect::Flow_::Cts


class Native::Flow::Record::Collect::Flow_::Cts::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Cts::Destination


class Native::Flow::Record::Collect::Flow_::Cts::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Cts::Source


class Native::Flow::Record::Collect::Flow_::Observation : public Entity
{
    public:
        Observation();
        ~Observation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf point; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Observation


class Native::Flow::Record::Collect::Interface : public Entity
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

        class Input; //type: Native::Flow::Record::Collect::Interface::Input
        class Output; //type: Native::Flow::Record::Collect::Interface::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface::Input> input; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface::Output> output; // presence node
        
}; // Native::Flow::Record::Collect::Interface


class Native::Flow::Record::Collect::Interface::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmp; //type: empty

}; // Native::Flow::Record::Collect::Interface::Input


class Native::Flow::Record::Collect::Interface::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmp; //type: empty

}; // Native::Flow::Record::Collect::Interface::Output


class Native::Flow::Record::Collect::Ipv4 : public Entity
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

        YLeaf dscp; //type: empty
        YLeaf header_length; //type: empty
        YLeaf id; //type: empty
        YLeaf precedence; //type: empty
        YLeaf protocol; //type: empty
        YLeaf tos; //type: empty
        YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Collect::Ipv4::Destination
        class Fragmentation; //type: Native::Flow::Record::Collect::Ipv4::Fragmentation
        class Length; //type: Native::Flow::Record::Collect::Ipv4::Length
        class Option; //type: Native::Flow::Record::Collect::Ipv4::Option
        class Section; //type: Native::Flow::Record::Collect::Ipv4::Section
        class Source; //type: Native::Flow::Record::Collect::Ipv4::Source
        class TotalLength; //type: Native::Flow::Record::Collect::Ipv4::TotalLength
        class Ttl; //type: Native::Flow::Record::Collect::Ipv4::Ttl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Fragmentation> fragmentation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Length> length;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section> section;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source> source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::TotalLength> total_length; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Ttl> ttl; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4


class Native::Flow::Record::Collect::Ipv4::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Ipv4::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv4::Destination::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Destination


class Native::Flow::Record::Collect::Ipv4::Destination::Mask : public Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Destination::Mask


class Native::Flow::Record::Collect::Ipv4::Destination::Prefix : public Entity
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

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Destination::Prefix


class Native::Flow::Record::Collect::Ipv4::Fragmentation : public Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: empty
        YLeaf offset; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Fragmentation


class Native::Flow::Record::Collect::Ipv4::Length : public Entity
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

        YLeaf header; //type: empty
        YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Collect::Ipv4::Length::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Length


class Native::Flow::Record::Collect::Ipv4::Length::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Length::Total


class Native::Flow::Record::Collect::Ipv4::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Option


class Native::Flow::Record::Collect::Ipv4::Section : public Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: Native::Flow::Record::Collect::Ipv4::Section::Header
        class Payload; //type: Native::Flow::Record::Collect::Ipv4::Section::Payload

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section::Header> header;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section::Payload> payload;
        
}; // Native::Flow::Record::Collect::Ipv4::Section


class Native::Flow::Record::Collect::Ipv4::Section::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv4::Section::Header


class Native::Flow::Record::Collect::Ipv4::Section::Payload : public Entity
{
    public:
        Payload();
        ~Payload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv4::Section::Payload


class Native::Flow::Record::Collect::Ipv4::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Ipv4::Source::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv4::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Source


class Native::Flow::Record::Collect::Ipv4::Source::Mask : public Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Source::Mask


class Native::Flow::Record::Collect::Ipv4::Source::Prefix : public Entity
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

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Source::Prefix


class Native::Flow::Record::Collect::Ipv4::TotalLength : public Entity
{
    public:
        TotalLength();
        ~TotalLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::TotalLength


class Native::Flow::Record::Collect::Ipv4::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Ttl


class Native::Flow::Record::Collect::Ipv6 : public Entity
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

        YLeaf dscp; //type: empty
        YLeaf flow_label; //type: empty
        YLeaf next_header; //type: empty
        YLeaf payload_length; //type: empty
        YLeaf precedence; //type: empty
        YLeaf protocol; //type: empty
        YLeaf traffic_class; //type: empty
        YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Collect::Ipv6::Destination
        class Extension; //type: Native::Flow::Record::Collect::Ipv6::Extension
        class Fragmentation; //type: Native::Flow::Record::Collect::Ipv6::Fragmentation
        class HopLimit; //type: Native::Flow::Record::Collect::Ipv6::HopLimit
        class Length; //type: Native::Flow::Record::Collect::Ipv6::Length
        class Section; //type: Native::Flow::Record::Collect::Ipv6::Section
        class Source; //type: Native::Flow::Record::Collect::Ipv6::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Extension> extension;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Fragmentation> fragmentation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::HopLimit> hop_limit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Length> length;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Section> section;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Source> source;
        
}; // Native::Flow::Record::Collect::Ipv6


class Native::Flow::Record::Collect::Ipv6::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Ipv6::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv6::Destination::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Destination::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv6::Destination


class Native::Flow::Record::Collect::Ipv6::Destination::Mask : public Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Destination::Mask


class Native::Flow::Record::Collect::Ipv6::Destination::Prefix : public Entity
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

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Destination::Prefix


class Native::Flow::Record::Collect::Ipv6::Extension : public Entity
{
    public:
        Extension();
        ~Extension();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::Extension


class Native::Flow::Record::Collect::Ipv6::Fragmentation : public Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: empty
        YLeaf id; //type: empty
        YLeaf offset; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::Fragmentation


class Native::Flow::Record::Collect::Ipv6::HopLimit : public Entity
{
    public:
        HopLimit();
        ~HopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::HopLimit


class Native::Flow::Record::Collect::Ipv6::Length : public Entity
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

        YLeaf header; //type: empty
        YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Collect::Ipv6::Length::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Collect::Ipv6::Length


class Native::Flow::Record::Collect::Ipv6::Length::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::Length::Total


class Native::Flow::Record::Collect::Ipv6::Section : public Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: Native::Flow::Record::Collect::Ipv6::Section::Header
        class Payload; //type: Native::Flow::Record::Collect::Ipv6::Section::Payload

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Section::Header> header;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Section::Payload> payload;
        
}; // Native::Flow::Record::Collect::Ipv6::Section


class Native::Flow::Record::Collect::Ipv6::Section::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv6::Section::Header


class Native::Flow::Record::Collect::Ipv6::Section::Payload : public Entity
{
    public:
        Payload();
        ~Payload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv6::Section::Payload

class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::PreferenceEnum : public Enum
{
    public:
        static const Enum::YLeaf mldp;
        static const Enum::YLeaf pim;

};

class Native::Rmon::Alarm::TestModeEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf delta;

};

class Native::Flow::Record::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf performance_monitor;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_2_ */

