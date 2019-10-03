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

        class VmVmps; //type: CISCOVLANMEMBERSHIPMIB::VmVmps
        class VmMembership; //type: CISCOVLANMEMBERSHIPMIB::VmMembership
        class VmStatistics; //type: CISCOVLANMEMBERSHIPMIB::VmStatistics
        class VmStatus; //type: CISCOVLANMEMBERSHIPMIB::VmStatus
        class VmVmpsTable; //type: CISCOVLANMEMBERSHIPMIB::VmVmpsTable
        class VmMembershipSummaryTable; //type: CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable
        class VmMembershipTable; //type: CISCOVLANMEMBERSHIPMIB::VmMembershipTable
        class VmMembershipSummaryExtTable; //type: CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable
        class VmVoiceVlanTable; //type: CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable

        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmVmps> vmvmps;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmMembership> vmmembership;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmStatistics> vmstatistics;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmStatus> vmstatus;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmVmpsTable> vmvmpstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable> vmmembershipsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmMembershipTable> vmmembershiptable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable> vmmembershipsummaryexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable> vmvoicevlantable;
        
}; // CISCOVLANMEMBERSHIPMIB


class CISCOVLANMEMBERSHIPMIB::VmVmps : public ydk::Entity
{
    public:
        VmVmps();
        ~VmVmps();

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
        ydk::YLeaf vmvmpsreconfirm; //type: VmVmpsReconfirm
        ydk::YLeaf vmvmpsreconfirmresult; //type: VmVmpsReconfirmResult
        ydk::YLeaf vmvmpscurrent; //type: string
        class VmVmpsReconfirm;
        class VmVmpsReconfirmResult;

}; // CISCOVLANMEMBERSHIPMIB::VmVmps


class CISCOVLANMEMBERSHIPMIB::VmMembership : public ydk::Entity
{
    public:
        VmMembership();
        ~VmMembership();

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

        ydk::YLeaf vmvlancreationmode; //type: VmVlanCreationMode
        class VmVlanCreationMode;

}; // CISCOVLANMEMBERSHIPMIB::VmMembership


class CISCOVLANMEMBERSHIPMIB::VmStatistics : public ydk::Entity
{
    public:
        VmStatistics();
        ~VmStatistics();

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

}; // CISCOVLANMEMBERSHIPMIB::VmStatistics


class CISCOVLANMEMBERSHIPMIB::VmStatus : public ydk::Entity
{
    public:
        VmStatus();
        ~VmStatus();

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

}; // CISCOVLANMEMBERSHIPMIB::VmStatus


class CISCOVLANMEMBERSHIPMIB::VmVmpsTable : public ydk::Entity
{
    public:
        VmVmpsTable();
        ~VmVmpsTable();

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

        class VmVmpsEntry; //type: CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry

        ydk::YList vmvmpsentry;
        
}; // CISCOVLANMEMBERSHIPMIB::VmVmpsTable


class CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry : public ydk::Entity
{
    public:
        VmVmpsEntry();
        ~VmVmpsEntry();

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

}; // CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry


class CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable : public ydk::Entity
{
    public:
        VmMembershipSummaryTable();
        ~VmMembershipSummaryTable();

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

        class VmMembershipSummaryEntry; //type: CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry

        ydk::YList vmmembershipsummaryentry;
        
}; // CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable


class CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry : public ydk::Entity
{
    public:
        VmMembershipSummaryEntry();
        ~VmMembershipSummaryEntry();

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

}; // CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry


class CISCOVLANMEMBERSHIPMIB::VmMembershipTable : public ydk::Entity
{
    public:
        VmMembershipTable();
        ~VmMembershipTable();

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

        class VmMembershipEntry; //type: CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry

        ydk::YList vmmembershipentry;
        
}; // CISCOVLANMEMBERSHIPMIB::VmMembershipTable


class CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry : public ydk::Entity
{
    public:
        VmMembershipEntry();
        ~VmMembershipEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf vmvlantype; //type: VmVlanType
        ydk::YLeaf vmvlan; //type: int32
        ydk::YLeaf vmportstatus; //type: VmPortStatus
        ydk::YLeaf vmvlans; //type: binary
        ydk::YLeaf vmvlans2k; //type: binary
        ydk::YLeaf vmvlans3k; //type: binary
        ydk::YLeaf vmvlans4k; //type: binary
        class VmVlanType;
        class VmPortStatus;

}; // CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry


class CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable : public ydk::Entity
{
    public:
        VmMembershipSummaryExtTable();
        ~VmMembershipSummaryExtTable();

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

        class VmMembershipSummaryExtEntry; //type: CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry

        ydk::YList vmmembershipsummaryextentry;
        
}; // CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable


class CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry : public ydk::Entity
{
    public:
        VmMembershipSummaryExtEntry();
        ~VmMembershipSummaryExtEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VLAN_MEMBERSHIP_MIB::CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::vmmembershipsummaryvlanindex)
        ydk::YLeaf vmmembershipsummaryvlanindex;
        ydk::YLeaf vmmembershipportrangeindex; //type: CiscoPortListRange
        ydk::YLeaf vmmembershipsummaryextports; //type: binary

}; // CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry


class CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable : public ydk::Entity
{
    public:
        VmVoiceVlanTable();
        ~VmVoiceVlanTable();

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

        class VmVoiceVlanEntry; //type: CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry

        ydk::YList vmvoicevlanentry;
        
}; // CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable


class CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry : public ydk::Entity
{
    public:
        VmVoiceVlanEntry();
        ~VmVoiceVlanEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf vmvoicevlanid; //type: int32
        ydk::YLeaf vmvoicevlancdpverifyenable; //type: boolean

}; // CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry

class CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf execute;

        static int get_enum_value(const std::string & name) {
            if (name == "ready") return 1;
            if (name == "execute") return 2;
            return -1;
        }
};

class CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf noResponse;
        static const ydk::Enum::YLeaf noVmps;
        static const ydk::Enum::YLeaf noDynamicPort;
        static const ydk::Enum::YLeaf noHostConnected;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "inProgress") return 2;
            if (name == "success") return 3;
            if (name == "noResponse") return 4;
            if (name == "noVmps") return 5;
            if (name == "noDynamicPort") return 6;
            if (name == "noHostConnected") return 7;
            return -1;
        }
};

class CISCOVLANMEMBERSHIPMIB::VmMembership::VmVlanCreationMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf automatic;
        static const ydk::Enum::YLeaf manual;

        static int get_enum_value(const std::string & name) {
            if (name == "automatic") return 1;
            if (name == "manual") return 2;
            return -1;
        }
};

class CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmVlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf multiVlan;

        static int get_enum_value(const std::string & name) {
            if (name == "static") return 1;
            if (name == "dynamic") return 2;
            if (name == "multiVlan") return 3;
            return -1;
        }
};

class CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmPortStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "inactive") return 1;
            if (name == "active") return 2;
            if (name == "shutdown") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_VLAN_MEMBERSHIP_MIB_ */

