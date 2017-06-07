#ifndef _CISCO_VLAN_MEMBERSHIP_MIB_
#define _CISCO_VLAN_MEMBERSHIP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_VLAN_MEMBERSHIP_MIB {

class CiscoVlanMembershipMib : public Entity
{
    public:
        CiscoVlanMembershipMib();
        ~CiscoVlanMembershipMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Vmvmps; //type: CiscoVlanMembershipMib::Vmvmps
        class Vmmembership; //type: CiscoVlanMembershipMib::Vmmembership
        class Vmstatistics; //type: CiscoVlanMembershipMib::Vmstatistics
        class Vmstatus; //type: CiscoVlanMembershipMib::Vmstatus
        class Vmvmpstable; //type: CiscoVlanMembershipMib::Vmvmpstable
        class Vmmembershipsummarytable; //type: CiscoVlanMembershipMib::Vmmembershipsummarytable
        class Vmmembershiptable; //type: CiscoVlanMembershipMib::Vmmembershiptable
        class Vmmembershipsummaryexttable; //type: CiscoVlanMembershipMib::Vmmembershipsummaryexttable
        class Vmvoicevlantable; //type: CiscoVlanMembershipMib::Vmvoicevlantable

        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembership> vmmembership;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummaryexttable> vmmembershipsummaryexttable;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummarytable> vmmembershipsummarytable;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershiptable> vmmembershiptable;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmstatistics> vmstatistics;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmstatus> vmstatus;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmvmps> vmvmps;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmvmpstable> vmvmpstable;
        std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmvoicevlantable> vmvoicevlantable;
        
}; // CiscoVlanMembershipMib


class CiscoVlanMembershipMib::Vmvmps : public Entity
{
    public:
        Vmvmps();
        ~Vmvmps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vmvmpsvqpversion; //type: int32
        YLeaf vmvmpsretries; //type: int32
        YLeaf vmvmpsreconfirminterval; //type: int32
        YLeaf vmvmpsreconfirm; //type: VmvmpsreconfirmEnum
        YLeaf vmvmpsreconfirmresult; //type: VmvmpsreconfirmresultEnum
        YLeaf vmvmpscurrent; //type: string
        class VmvmpsreconfirmEnum;
        class VmvmpsreconfirmresultEnum;

}; // CiscoVlanMembershipMib::Vmvmps


class CiscoVlanMembershipMib::Vmmembership : public Entity
{
    public:
        Vmmembership();
        ~Vmmembership();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vmvlancreationmode; //type: VmvlancreationmodeEnum
        class VmvlancreationmodeEnum;

}; // CiscoVlanMembershipMib::Vmmembership


class CiscoVlanMembershipMib::Vmstatistics : public Entity
{
    public:
        Vmstatistics();
        ~Vmstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vmvqpqueries; //type: uint32
        YLeaf vmvqpresponses; //type: uint32
        YLeaf vmvmpschanges; //type: uint32
        YLeaf vmvqpshutdown; //type: uint32
        YLeaf vmvqpdenied; //type: uint32
        YLeaf vmvqpwrongdomain; //type: uint32
        YLeaf vmvqpwrongversion; //type: uint32
        YLeaf vminsufficientresources; //type: uint32

}; // CiscoVlanMembershipMib::Vmstatistics


class CiscoVlanMembershipMib::Vmstatus : public Entity
{
    public:
        Vmstatus();
        ~Vmstatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vmnotificationsenabled; //type: boolean

}; // CiscoVlanMembershipMib::Vmstatus


class CiscoVlanMembershipMib::Vmvmpstable : public Entity
{
    public:
        Vmvmpstable();
        ~Vmvmpstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vmvmpsentry; //type: CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry> > vmvmpsentry;
        
}; // CiscoVlanMembershipMib::Vmvmpstable


class CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry : public Entity
{
    public:
        Vmvmpsentry();
        ~Vmvmpsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vmvmpsipaddress; //type: string
        YLeaf vmvmpsprimary; //type: boolean
        YLeaf vmvmpsrowstatus; //type: RowstatusEnum

}; // CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry


class CiscoVlanMembershipMib::Vmmembershipsummarytable : public Entity
{
    public:
        Vmmembershipsummarytable();
        ~Vmmembershipsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vmmembershipsummaryentry; //type: CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry> > vmmembershipsummaryentry;
        
}; // CiscoVlanMembershipMib::Vmmembershipsummarytable


class CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry : public Entity
{
    public:
        Vmmembershipsummaryentry();
        ~Vmmembershipsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vmmembershipsummaryvlanindex; //type: int32
        YLeaf vmmembershipsummarymemberports; //type: binary
        YLeaf vmmembershipsummarymember2kports; //type: binary

}; // CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry


class CiscoVlanMembershipMib::Vmmembershiptable : public Entity
{
    public:
        Vmmembershiptable();
        ~Vmmembershiptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vmmembershipentry; //type: CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry> > vmmembershipentry;
        
}; // CiscoVlanMembershipMib::Vmmembershiptable


class CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry : public Entity
{
    public:
        Vmmembershipentry();
        ~Vmmembershipentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf vmvlantype; //type: VmvlantypeEnum
        YLeaf vmvlan; //type: int32
        YLeaf vmportstatus; //type: VmportstatusEnum
        YLeaf vmvlans; //type: binary
        YLeaf vmvlans2k; //type: binary
        YLeaf vmvlans3k; //type: binary
        YLeaf vmvlans4k; //type: binary
        class VmvlantypeEnum;
        class VmportstatusEnum;

}; // CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry


class CiscoVlanMembershipMib::Vmmembershipsummaryexttable : public Entity
{
    public:
        Vmmembershipsummaryexttable();
        ~Vmmembershipsummaryexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vmmembershipsummaryextentry; //type: CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry> > vmmembershipsummaryextentry;
        
}; // CiscoVlanMembershipMib::Vmmembershipsummaryexttable


class CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry : public Entity
{
    public:
        Vmmembershipsummaryextentry();
        ~Vmmembershipsummaryextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::vmmembershipsummaryvlanindex)
        YLeaf vmmembershipsummaryvlanindex;
        YLeaf vmmembershipportrangeindex; //type: CiscoportlistrangeEnum
        YLeaf vmmembershipsummaryextports; //type: binary

}; // CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry


class CiscoVlanMembershipMib::Vmvoicevlantable : public Entity
{
    public:
        Vmvoicevlantable();
        ~Vmvoicevlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vmvoicevlanentry; //type: CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry> > vmvoicevlanentry;
        
}; // CiscoVlanMembershipMib::Vmvoicevlantable


class CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry : public Entity
{
    public:
        Vmvoicevlanentry();
        ~Vmvoicevlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf vmvoicevlanid; //type: int32
        YLeaf vmvoicevlancdpverifyenable; //type: boolean

}; // CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry

class CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmEnum : public Enum
{
    public:
        static const Enum::YLeaf ready;
        static const Enum::YLeaf execute;

};

class CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf success;
        static const Enum::YLeaf noResponse;
        static const Enum::YLeaf noVmps;
        static const Enum::YLeaf noDynamicPort;
        static const Enum::YLeaf noHostConnected;

};

class CiscoVlanMembershipMib::Vmmembership::VmvlancreationmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf automatic;
        static const Enum::YLeaf manual;

};

class CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmvlantypeEnum : public Enum
{
    public:
        static const Enum::YLeaf static_;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf multiVlan;

};

class CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmportstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf active;
        static const Enum::YLeaf shutdown;

};


}
}

#endif /* _CISCO_VLAN_MEMBERSHIP_MIB_ */

