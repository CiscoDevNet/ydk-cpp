#ifndef _CISCO_VLAN_MEMBERSHIP_MIB_
#define _CISCO_VLAN_MEMBERSHIP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VLAN_MEMBERSHIP_MIB {

class CiscoVlanMembershipMib : public ydk::Entity
{
    public:
        CiscoVlanMembershipMib();
        ~CiscoVlanMembershipMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

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


class CiscoVlanMembershipMib::Vmvmps : public ydk::Entity
{
    public:
        Vmvmps();
        ~Vmvmps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vmvmpsvqpversion; //type: int32
        ydk::YLeaf vmvmpsretries; //type: int32
        ydk::YLeaf vmvmpsreconfirminterval; //type: int32
        ydk::YLeaf vmvmpsreconfirm; //type: Vmvmpsreconfirm
        ydk::YLeaf vmvmpsreconfirmresult; //type: Vmvmpsreconfirmresult
        ydk::YLeaf vmvmpscurrent; //type: string
        class Vmvmpsreconfirm;
        class Vmvmpsreconfirmresult;

}; // CiscoVlanMembershipMib::Vmvmps


class CiscoVlanMembershipMib::Vmmembership : public ydk::Entity
{
    public:
        Vmmembership();
        ~Vmmembership();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vmvlancreationmode; //type: Vmvlancreationmode
        class Vmvlancreationmode;

}; // CiscoVlanMembershipMib::Vmmembership


class CiscoVlanMembershipMib::Vmstatistics : public ydk::Entity
{
    public:
        Vmstatistics();
        ~Vmstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vmvqpqueries; //type: uint32
        ydk::YLeaf vmvqpresponses; //type: uint32
        ydk::YLeaf vmvmpschanges; //type: uint32
        ydk::YLeaf vmvqpshutdown; //type: uint32
        ydk::YLeaf vmvqpdenied; //type: uint32
        ydk::YLeaf vmvqpwrongdomain; //type: uint32
        ydk::YLeaf vmvqpwrongversion; //type: uint32
        ydk::YLeaf vminsufficientresources; //type: uint32

}; // CiscoVlanMembershipMib::Vmstatistics


class CiscoVlanMembershipMib::Vmstatus : public ydk::Entity
{
    public:
        Vmstatus();
        ~Vmstatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vmnotificationsenabled; //type: boolean

}; // CiscoVlanMembershipMib::Vmstatus


class CiscoVlanMembershipMib::Vmvmpstable : public ydk::Entity
{
    public:
        Vmvmpstable();
        ~Vmvmpstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vmvmpsentry; //type: CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry> > vmvmpsentry;
        
}; // CiscoVlanMembershipMib::Vmvmpstable


class CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry : public ydk::Entity
{
    public:
        Vmvmpsentry();
        ~Vmvmpsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vmvmpsipaddress; //type: string
        ydk::YLeaf vmvmpsprimary; //type: boolean
        ydk::YLeaf vmvmpsrowstatus; //type: Rowstatus

}; // CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry


class CiscoVlanMembershipMib::Vmmembershipsummarytable : public ydk::Entity
{
    public:
        Vmmembershipsummarytable();
        ~Vmmembershipsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vmmembershipsummaryentry; //type: CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry> > vmmembershipsummaryentry;
        
}; // CiscoVlanMembershipMib::Vmmembershipsummarytable


class CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry : public ydk::Entity
{
    public:
        Vmmembershipsummaryentry();
        ~Vmmembershipsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vmmembershipsummaryvlanindex; //type: int32
        ydk::YLeaf vmmembershipsummarymemberports; //type: binary
        ydk::YLeaf vmmembershipsummarymember2kports; //type: binary

}; // CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry


class CiscoVlanMembershipMib::Vmmembershiptable : public ydk::Entity
{
    public:
        Vmmembershiptable();
        ~Vmmembershiptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vmmembershipentry; //type: CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry> > vmmembershipentry;
        
}; // CiscoVlanMembershipMib::Vmmembershiptable


class CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry : public ydk::Entity
{
    public:
        Vmmembershipentry();
        ~Vmmembershipentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf vmvlantype; //type: Vmvlantype
        ydk::YLeaf vmvlan; //type: int32
        ydk::YLeaf vmportstatus; //type: Vmportstatus
        ydk::YLeaf vmvlans; //type: binary
        ydk::YLeaf vmvlans2k; //type: binary
        ydk::YLeaf vmvlans3k; //type: binary
        ydk::YLeaf vmvlans4k; //type: binary
        class Vmvlantype;
        class Vmportstatus;

}; // CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry


class CiscoVlanMembershipMib::Vmmembershipsummaryexttable : public ydk::Entity
{
    public:
        Vmmembershipsummaryexttable();
        ~Vmmembershipsummaryexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vmmembershipsummaryextentry; //type: CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry> > vmmembershipsummaryextentry;
        
}; // CiscoVlanMembershipMib::Vmmembershipsummaryexttable


class CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry : public ydk::Entity
{
    public:
        Vmmembershipsummaryextentry();
        ~Vmmembershipsummaryextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::vmmembershipsummaryvlanindex)
        ydk::YLeaf vmmembershipsummaryvlanindex;
        ydk::YLeaf vmmembershipportrangeindex; //type: Ciscoportlistrange
        ydk::YLeaf vmmembershipsummaryextports; //type: binary

}; // CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry


class CiscoVlanMembershipMib::Vmvoicevlantable : public ydk::Entity
{
    public:
        Vmvoicevlantable();
        ~Vmvoicevlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vmvoicevlanentry; //type: CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry

        std::vector<std::shared_ptr<CISCO_VLAN_MEMBERSHIP_MIB::CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry> > vmvoicevlanentry;
        
}; // CiscoVlanMembershipMib::Vmvoicevlantable


class CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry : public ydk::Entity
{
    public:
        Vmvoicevlanentry();
        ~Vmvoicevlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf vmvoicevlanid; //type: int32
        ydk::YLeaf vmvoicevlancdpverifyenable; //type: boolean

}; // CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry

class CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf execute;

};

class CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf noResponse;
        static const ydk::Enum::YLeaf noVmps;
        static const ydk::Enum::YLeaf noDynamicPort;
        static const ydk::Enum::YLeaf noHostConnected;

};

class CiscoVlanMembershipMib::Vmmembership::Vmvlancreationmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf automatic;
        static const ydk::Enum::YLeaf manual;

};

class CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmvlantype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf multiVlan;

};

class CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmportstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf shutdown;

};


}
}

#endif /* _CISCO_VLAN_MEMBERSHIP_MIB_ */

