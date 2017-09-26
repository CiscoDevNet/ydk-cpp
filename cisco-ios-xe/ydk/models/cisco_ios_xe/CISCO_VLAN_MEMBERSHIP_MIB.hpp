#ifndef _CISCO_VLAN_MEMBERSHIP_MIB_
#define _CISCO_VLAN_MEMBERSHIP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VLAN_MEMBERSHIP_MIB {

class CISCOVLANMEMBERSHIPMIB : public ydk::Entity
{
    public:
        CISCOVLANMEMBERSHIPMIB();
        ~CISCOVLANMEMBERSHIPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Vmvmps; //type: CISCOVLANMEMBERSHIPMIB::Vmvmps
        class Vmmembership; //type: CISCOVLANMEMBERSHIPMIB::Vmmembership
        class Vmstatistics; //type: CISCOVLANMEMBERSHIPMIB::Vmstatistics
        class Vmstatus; //type: CISCOVLANMEMBERSHIPMIB::Vmstatus
        class Vmvmpstable; //type: CISCOVLANMEMBERSHIPMIB::Vmvmpstable
        class Vmmembershipsummarytable; //type: CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable
        class Vmmembershiptable; //type: CISCOVLANMEMBERSHIPMIB::Vmmembershiptable
        class Vmmembershipsummaryexttable; //type: CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable
        class Vmvoicevlantable; //type: CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable

        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembership> vmmembership;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable> vmmembershipsummaryexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable> vmmembershipsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembershiptable> vmmembershiptable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmstatistics> vmstatistics;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmstatus> vmstatus;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmvmps> vmvmps;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmvmpstable> vmvmpstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable> vmvoicevlantable;
        
}; // CISCOVLANMEMBERSHIPMIB


class CISCOVLANMEMBERSHIPMIB::Vmmembership : public ydk::Entity
{
    public:
        Vmmembership();
        ~Vmmembership();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vmvlancreationmode; //type: Vmvlancreationmode
        class Vmvlancreationmode;

}; // CISCOVLANMEMBERSHIPMIB::Vmmembership


class CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable : public ydk::Entity
{
    public:
        Vmmembershipsummaryexttable();
        ~Vmmembershipsummaryexttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vmmembershipsummaryextentry; //type: CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry> > vmmembershipsummaryextentry;
        
}; // CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable


class CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry : public ydk::Entity
{
    public:
        Vmmembershipsummaryextentry();
        ~Vmmembershipsummaryextentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::vmmembershipsummaryvlanindex)
        ydk::YLeaf vmmembershipsummaryvlanindex;
        ydk::YLeaf vmmembershipportrangeindex; //type: CiscoPortListRange
        ydk::YLeaf vmmembershipsummaryextports; //type: binary

}; // CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry


class CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable : public ydk::Entity
{
    public:
        Vmmembershipsummarytable();
        ~Vmmembershipsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vmmembershipsummaryentry; //type: CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry> > vmmembershipsummaryentry;
        
}; // CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable


class CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry : public ydk::Entity
{
    public:
        Vmmembershipsummaryentry();
        ~Vmmembershipsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vmmembershipsummaryvlanindex; //type: int32
        ydk::YLeaf vmmembershipsummarymemberports; //type: binary
        ydk::YLeaf vmmembershipsummarymember2kports; //type: binary

}; // CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry


class CISCOVLANMEMBERSHIPMIB::Vmmembershiptable : public ydk::Entity
{
    public:
        Vmmembershiptable();
        ~Vmmembershiptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vmmembershipentry; //type: CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry> > vmmembershipentry;
        
}; // CISCOVLANMEMBERSHIPMIB::Vmmembershiptable


class CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry : public ydk::Entity
{
    public:
        Vmmembershipentry();
        ~Vmmembershipentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
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

}; // CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry


class CISCOVLANMEMBERSHIPMIB::Vmstatistics : public ydk::Entity
{
    public:
        Vmstatistics();
        ~Vmstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vmvqpqueries; //type: uint32
        ydk::YLeaf vmvqpresponses; //type: uint32
        ydk::YLeaf vmvmpschanges; //type: uint32
        ydk::YLeaf vmvqpshutdown; //type: uint32
        ydk::YLeaf vmvqpdenied; //type: uint32
        ydk::YLeaf vmvqpwrongdomain; //type: uint32
        ydk::YLeaf vmvqpwrongversion; //type: uint32
        ydk::YLeaf vminsufficientresources; //type: uint32

}; // CISCOVLANMEMBERSHIPMIB::Vmstatistics


class CISCOVLANMEMBERSHIPMIB::Vmstatus : public ydk::Entity
{
    public:
        Vmstatus();
        ~Vmstatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vmnotificationsenabled; //type: boolean

}; // CISCOVLANMEMBERSHIPMIB::Vmstatus


class CISCOVLANMEMBERSHIPMIB::Vmvmps : public ydk::Entity
{
    public:
        Vmvmps();
        ~Vmvmps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vmvmpsvqpversion; //type: int32
        ydk::YLeaf vmvmpsretries; //type: int32
        ydk::YLeaf vmvmpsreconfirminterval; //type: int32
        ydk::YLeaf vmvmpsreconfirm; //type: Vmvmpsreconfirm
        ydk::YLeaf vmvmpsreconfirmresult; //type: Vmvmpsreconfirmresult
        ydk::YLeaf vmvmpscurrent; //type: string
        class Vmvmpsreconfirm;
        class Vmvmpsreconfirmresult;

}; // CISCOVLANMEMBERSHIPMIB::Vmvmps


class CISCOVLANMEMBERSHIPMIB::Vmvmpstable : public ydk::Entity
{
    public:
        Vmvmpstable();
        ~Vmvmpstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vmvmpsentry; //type: CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry> > vmvmpsentry;
        
}; // CISCOVLANMEMBERSHIPMIB::Vmvmpstable


class CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry : public ydk::Entity
{
    public:
        Vmvmpsentry();
        ~Vmvmpsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vmvmpsipaddress; //type: string
        ydk::YLeaf vmvmpsprimary; //type: boolean
        ydk::YLeaf vmvmpsrowstatus; //type: RowStatus

}; // CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry


class CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable : public ydk::Entity
{
    public:
        Vmvoicevlantable();
        ~Vmvoicevlantable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vmvoicevlanentry; //type: CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry> > vmvoicevlanentry;
        
}; // CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable


class CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry : public ydk::Entity
{
    public:
        Vmvoicevlanentry();
        ~Vmvoicevlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf vmvoicevlanid; //type: int32
        ydk::YLeaf vmvoicevlancdpverifyenable; //type: boolean

}; // CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry

class CISCOVLANMEMBERSHIPMIB::Vmmembership::Vmvlancreationmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf automatic;
        static const ydk::Enum::YLeaf manual;

};

class CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmvlantype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf multiVlan;

};

class CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmportstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf shutdown;

};

class CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf execute;

};

class CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult : public ydk::Enum
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


}
}

#endif /* _CISCO_VLAN_MEMBERSHIP_MIB_ */

