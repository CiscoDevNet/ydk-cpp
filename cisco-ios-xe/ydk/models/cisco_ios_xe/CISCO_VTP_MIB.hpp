#ifndef _CISCO_VTP_MIB_
#define _CISCO_VTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VTP_MIB {

class CISCOVTPMIB : public ydk::Entity
{
    public:
        CISCOVTPMIB();
        ~CISCOVTPMIB();

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

        class VtpStatus; //type: CISCOVTPMIB::VtpStatus
        class InternalVlanInfo; //type: CISCOVTPMIB::InternalVlanInfo
        class VlanTrunkPorts; //type: CISCOVTPMIB::VlanTrunkPorts
        class VlanStatistics; //type: CISCOVTPMIB::VlanStatistics
        class ManagementDomainTable; //type: CISCOVTPMIB::ManagementDomainTable
        class VtpVlanTable; //type: CISCOVTPMIB::VtpVlanTable
        class VtpInternalVlanTable; //type: CISCOVTPMIB::VtpInternalVlanTable
        class VtpVlanEditTable; //type: CISCOVTPMIB::VtpVlanEditTable
        class VtpVlanLocalShutdownTable; //type: CISCOVTPMIB::VtpVlanLocalShutdownTable
        class VlanTrunkPortTable; //type: CISCOVTPMIB::VlanTrunkPortTable
        class VtpDiscoverTable; //type: CISCOVTPMIB::VtpDiscoverTable
        class VtpDiscoverResultTable; //type: CISCOVTPMIB::VtpDiscoverResultTable
        class VtpDatabaseTable; //type: CISCOVTPMIB::VtpDatabaseTable
        class VtpAuthenticationTable; //type: CISCOVTPMIB::VtpAuthenticationTable

        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpStatus> vtpstatus;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::InternalVlanInfo> internalvlaninfo;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VlanTrunkPorts> vlantrunkports;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VlanStatistics> vlanstatistics;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable> managementdomaintable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpVlanTable> vtpvlantable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpInternalVlanTable> vtpinternalvlantable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpVlanEditTable> vtpvlanedittable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpVlanLocalShutdownTable> vtpvlanlocalshutdowntable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VlanTrunkPortTable> vlantrunkporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpDiscoverTable> vtpdiscovertable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpDiscoverResultTable> vtpdiscoverresulttable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpDatabaseTable> vtpdatabasetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpAuthenticationTable> vtpauthenticationtable;
        
}; // CISCOVTPMIB


class CISCOVTPMIB::VtpStatus : public ydk::Entity
{
    public:
        VtpStatus();
        ~VtpStatus();

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

        ydk::YLeaf vtpversion; //type: VtpVersion
        ydk::YLeaf vtpmaxvlanstorage; //type: int32
        ydk::YLeaf vtpnotificationsenabled; //type: boolean
        ydk::YLeaf vtpvlancreatednotifenabled; //type: boolean
        ydk::YLeaf vtpvlandeletednotifenabled; //type: boolean
        class VtpVersion;

}; // CISCOVTPMIB::VtpStatus


class CISCOVTPMIB::InternalVlanInfo : public ydk::Entity
{
    public:
        InternalVlanInfo();
        ~InternalVlanInfo();

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

        ydk::YLeaf vtpinternalvlanallocpolicy; //type: VtpInternalVlanAllocPolicy
        class VtpInternalVlanAllocPolicy;

}; // CISCOVTPMIB::InternalVlanInfo


class CISCOVTPMIB::VlanTrunkPorts : public ydk::Entity
{
    public:
        VlanTrunkPorts();
        ~VlanTrunkPorts();

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

        ydk::YLeaf vlantrunkportsetserialno; //type: int32
        ydk::YLeaf vlantrunkportsdot1qtag; //type: boolean

}; // CISCOVTPMIB::VlanTrunkPorts


class CISCOVTPMIB::VlanStatistics : public ydk::Entity
{
    public:
        VlanStatistics();
        ~VlanStatistics();

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

        ydk::YLeaf vlanstatsvlans; //type: uint32
        ydk::YLeaf vlanstatsextendedvlans; //type: uint32
        ydk::YLeaf vlanstatsinternalvlans; //type: uint32
        ydk::YLeaf vlanstatsfreevlans; //type: uint32

}; // CISCOVTPMIB::VlanStatistics


class CISCOVTPMIB::ManagementDomainTable : public ydk::Entity
{
    public:
        ManagementDomainTable();
        ~ManagementDomainTable();

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

        class ManagementDomainEntry; //type: CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry

        ydk::YList managementdomainentry;
        
}; // CISCOVTPMIB::ManagementDomainTable


class CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry : public ydk::Entity
{
    public:
        ManagementDomainEntry();
        ~ManagementDomainEntry();

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

        ydk::YLeaf managementdomainindex; //type: int32
        ydk::YLeaf managementdomainname; //type: string
        ydk::YLeaf managementdomainlocalmode; //type: ManagementDomainLocalMode
        ydk::YLeaf managementdomainconfigrevnumber; //type: uint32
        ydk::YLeaf managementdomainlastupdater; //type: string
        ydk::YLeaf managementdomainlastchange; //type: string
        ydk::YLeaf managementdomainrowstatus; //type: RowStatus
        ydk::YLeaf managementdomaintftpserver; //type: string
        ydk::YLeaf managementdomaintftppathname; //type: string
        ydk::YLeaf managementdomainpruningstate; //type: ManagementDomainPruningState
        ydk::YLeaf managementdomainversioninuse; //type: ManagementDomainVersionInUse
        ydk::YLeaf managementdomainpruningstateoper; //type: ManagementDomainPruningStateOper
        ydk::YLeaf managementdomainadminsrcif; //type: string
        ydk::YLeaf managementdomainsourceonlymode; //type: boolean
        ydk::YLeaf managementdomainopersrcif; //type: string
        ydk::YLeaf managementdomainconfigfile; //type: string
        ydk::YLeaf managementdomainlocalupdatertype; //type: InetAddressType
        ydk::YLeaf managementdomainlocalupdater; //type: binary
        ydk::YLeaf managementdomaindeviceid; //type: string
        ydk::YLeaf vtpvlaneditoperation; //type: VtpVlanEditOperation
        ydk::YLeaf vtpvlanapplystatus; //type: VtpVlanApplyStatus
        ydk::YLeaf vtpvlaneditbufferowner; //type: binary
        ydk::YLeaf vtpvlaneditconfigrevnumber; //type: uint32
        ydk::YLeaf vtpvlaneditmodifiedvlan; //type: int32
        ydk::YLeaf vtpinsummaryadverts; //type: uint32
        ydk::YLeaf vtpinsubsetadverts; //type: uint32
        ydk::YLeaf vtpinadvertrequests; //type: uint32
        ydk::YLeaf vtpoutsummaryadverts; //type: uint32
        ydk::YLeaf vtpoutsubsetadverts; //type: uint32
        ydk::YLeaf vtpoutadvertrequests; //type: uint32
        ydk::YLeaf vtpconfigrevnumbererrors; //type: uint32
        ydk::YLeaf vtpconfigdigesterrors; //type: uint32
        class ManagementDomainLocalMode;
        class ManagementDomainPruningState;
        class ManagementDomainVersionInUse;
        class ManagementDomainPruningStateOper;
        class VtpVlanEditOperation;
        class VtpVlanApplyStatus;

}; // CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry


class CISCOVTPMIB::VtpVlanTable : public ydk::Entity
{
    public:
        VtpVlanTable();
        ~VtpVlanTable();

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

        class VtpVlanEntry; //type: CISCOVTPMIB::VtpVlanTable::VtpVlanEntry

        ydk::YList vtpvlanentry;
        
}; // CISCOVTPMIB::VtpVlanTable


class CISCOVTPMIB::VtpVlanTable::VtpVlanEntry : public ydk::Entity
{
    public:
        VtpVlanEntry();
        ~VtpVlanEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpvlanindex; //type: int32
        ydk::YLeaf vtpvlanstate; //type: VtpVlanState
        ydk::YLeaf vtpvlantype; //type: VlanType
        ydk::YLeaf vtpvlanname; //type: string
        ydk::YLeaf vtpvlanmtu; //type: int32
        ydk::YLeaf vtpvlandot10said; //type: binary
        ydk::YLeaf vtpvlanringnumber; //type: int32
        ydk::YLeaf vtpvlanbridgenumber; //type: int32
        ydk::YLeaf vtpvlanstptype; //type: VtpVlanStpType
        ydk::YLeaf vtpvlanparentvlan; //type: int32
        ydk::YLeaf vtpvlantranslationalvlan1; //type: int32
        ydk::YLeaf vtpvlantranslationalvlan2; //type: int32
        ydk::YLeaf vtpvlanbridgetype; //type: VtpVlanBridgeType
        ydk::YLeaf vtpvlanarehopcount; //type: int32
        ydk::YLeaf vtpvlanstehopcount; //type: int32
        ydk::YLeaf vtpvlaniscrfbackup; //type: boolean
        ydk::YLeaf vtpvlantypeext; //type: VlanTypeExt
        ydk::YLeaf vtpvlanifindex; //type: int32
        ydk::YLeaf stpxvlanmistpinstmapinstindex; //type: int32
        class VtpVlanState;
        class VtpVlanStpType;
        class VtpVlanBridgeType;

}; // CISCOVTPMIB::VtpVlanTable::VtpVlanEntry


class CISCOVTPMIB::VtpInternalVlanTable : public ydk::Entity
{
    public:
        VtpInternalVlanTable();
        ~VtpInternalVlanTable();

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

        class VtpInternalVlanEntry; //type: CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry

        ydk::YList vtpinternalvlanentry;
        
}; // CISCOVTPMIB::VtpInternalVlanTable


class CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry : public ydk::Entity
{
    public:
        VtpInternalVlanEntry();
        ~VtpInternalVlanEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::vtpvlanindex)
        ydk::YLeaf vtpvlanindex;
        ydk::YLeaf vtpinternalvlanowner; //type: string

}; // CISCOVTPMIB::VtpInternalVlanTable::VtpInternalVlanEntry


class CISCOVTPMIB::VtpVlanEditTable : public ydk::Entity
{
    public:
        VtpVlanEditTable();
        ~VtpVlanEditTable();

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

        class VtpVlanEditEntry; //type: CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry

        ydk::YList vtpvlaneditentry;
        
}; // CISCOVTPMIB::VtpVlanEditTable


class CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry : public ydk::Entity
{
    public:
        VtpVlanEditEntry();
        ~VtpVlanEditEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpvlaneditindex; //type: int32
        ydk::YLeaf vtpvlaneditstate; //type: VtpVlanEditState
        ydk::YLeaf vtpvlanedittype; //type: VlanType
        ydk::YLeaf vtpvlaneditname; //type: string
        ydk::YLeaf vtpvlaneditmtu; //type: int32
        ydk::YLeaf vtpvlaneditdot10said; //type: binary
        ydk::YLeaf vtpvlaneditringnumber; //type: int32
        ydk::YLeaf vtpvlaneditbridgenumber; //type: int32
        ydk::YLeaf vtpvlaneditstptype; //type: VtpVlanEditStpType
        ydk::YLeaf vtpvlaneditparentvlan; //type: int32
        ydk::YLeaf vtpvlaneditrowstatus; //type: RowStatus
        ydk::YLeaf vtpvlanedittranslationalvlan1; //type: int32
        ydk::YLeaf vtpvlanedittranslationalvlan2; //type: int32
        ydk::YLeaf vtpvlaneditbridgetype; //type: VtpVlanEditBridgeType
        ydk::YLeaf vtpvlaneditarehopcount; //type: int32
        ydk::YLeaf vtpvlaneditstehopcount; //type: int32
        ydk::YLeaf vtpvlaneditiscrfbackup; //type: boolean
        ydk::YLeaf vtpvlanedittypeext; //type: VlanTypeExt
        ydk::YLeaf vtpvlanedittypeext2; //type: VlanTypeExt
        ydk::YLeaf stpxvlanmistpinstmapeditinstindex; //type: int32
        class VtpVlanEditState;
        class VtpVlanEditStpType;
        class VtpVlanEditBridgeType;

}; // CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry


class CISCOVTPMIB::VtpVlanLocalShutdownTable : public ydk::Entity
{
    public:
        VtpVlanLocalShutdownTable();
        ~VtpVlanLocalShutdownTable();

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

        class VtpVlanLocalShutdownEntry; //type: CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry

        ydk::YList vtpvlanlocalshutdownentry;
        
}; // CISCOVTPMIB::VtpVlanLocalShutdownTable


class CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry : public ydk::Entity
{
    public:
        VtpVlanLocalShutdownEntry();
        ~VtpVlanLocalShutdownEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::vtpvlanindex)
        ydk::YLeaf vtpvlanindex;
        ydk::YLeaf vtpvlanlocalshutdown; //type: VtpVlanLocalShutdown
        class VtpVlanLocalShutdown;

}; // CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry


class CISCOVTPMIB::VlanTrunkPortTable : public ydk::Entity
{
    public:
        VlanTrunkPortTable();
        ~VlanTrunkPortTable();

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

        class VlanTrunkPortEntry; //type: CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry

        ydk::YList vlantrunkportentry;
        
}; // CISCOVTPMIB::VlanTrunkPortTable


class CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry : public ydk::Entity
{
    public:
        VlanTrunkPortEntry();
        ~VlanTrunkPortEntry();

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

        ydk::YLeaf vlantrunkportifindex; //type: int32
        ydk::YLeaf vlantrunkportmanagementdomain; //type: int32
        ydk::YLeaf vlantrunkportencapsulationtype; //type: VlanTrunkPortEncapsulationType
        ydk::YLeaf vlantrunkportvlansenabled; //type: binary
        ydk::YLeaf vlantrunkportnativevlan; //type: int32
        ydk::YLeaf vlantrunkportrowstatus; //type: RowStatus
        ydk::YLeaf vlantrunkportinjoins; //type: uint32
        ydk::YLeaf vlantrunkportoutjoins; //type: uint32
        ydk::YLeaf vlantrunkportoldadverts; //type: uint32
        ydk::YLeaf vlantrunkportvlanspruningeligible; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined; //type: binary
        ydk::YLeaf vlantrunkportdynamicstate; //type: VlanTrunkPortDynamicState
        ydk::YLeaf vlantrunkportdynamicstatus; //type: VlanTrunkPortDynamicStatus
        ydk::YLeaf vlantrunkportvtpenabled; //type: boolean
        ydk::YLeaf vlantrunkportencapsulationopertype; //type: VlanTrunkPortEncapsulationOperType
        ydk::YLeaf vlantrunkportvlansenabled2k; //type: binary
        ydk::YLeaf vlantrunkportvlansenabled3k; //type: binary
        ydk::YLeaf vlantrunkportvlansenabled4k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible2k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible3k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible4k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined2k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined3k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined4k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined2k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined3k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined4k; //type: binary
        ydk::YLeaf vlantrunkportdot1qtunnel; //type: VlanTrunkPortDot1qTunnel
        ydk::YLeaf vlantrunkportvlansactivefirst2k; //type: binary
        ydk::YLeaf vlantrunkportvlansactivesecond2k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap; //type: binary
        ydk::YLeaf stpxpreferredvlansmap2k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap3k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap4k; //type: binary
        ydk::YLeaf stpxpreferredmistpinstancesmap; //type: binary
        ydk::YLeaf stpxpreferredmstinstancesmap; //type: binary
        class VlanTrunkPortEncapsulationType;
        class VlanTrunkPortDynamicState;
        class VlanTrunkPortDynamicStatus;
        class VlanTrunkPortEncapsulationOperType;
        class VlanTrunkPortDot1qTunnel;

}; // CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry


class CISCOVTPMIB::VtpDiscoverTable : public ydk::Entity
{
    public:
        VtpDiscoverTable();
        ~VtpDiscoverTable();

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

        class VtpDiscoverEntry; //type: CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry

        ydk::YList vtpdiscoverentry;
        
}; // CISCOVTPMIB::VtpDiscoverTable


class CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry : public ydk::Entity
{
    public:
        VtpDiscoverEntry();
        ~VtpDiscoverEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdiscoveraction; //type: VtpDiscoverAction
        ydk::YLeaf vtpdiscoverstatus; //type: VtpDiscoverStatus
        ydk::YLeaf vtplastdiscovertime; //type: uint32
        class VtpDiscoverAction;
        class VtpDiscoverStatus;

}; // CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry


class CISCOVTPMIB::VtpDiscoverResultTable : public ydk::Entity
{
    public:
        VtpDiscoverResultTable();
        ~VtpDiscoverResultTable();

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

        class VtpDiscoverResultEntry; //type: CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry

        ydk::YList vtpdiscoverresultentry;
        
}; // CISCOVTPMIB::VtpDiscoverResultTable


class CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry : public ydk::Entity
{
    public:
        VtpDiscoverResultEntry();
        ~VtpDiscoverResultEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdiscoverresultindex; //type: uint32
        ydk::YLeaf vtpdiscoverresultdatabasename; //type: string
        ydk::YLeaf vtpdiscoverresultconflicting; //type: boolean
        ydk::YLeaf vtpdiscoverresultdeviceid; //type: string
        ydk::YLeaf vtpdiscoverresultprimaryserver; //type: string
        ydk::YLeaf vtpdiscoverresultrevnumber; //type: uint32
        ydk::YLeaf vtpdiscoverresultsystemname; //type: string

}; // CISCOVTPMIB::VtpDiscoverResultTable::VtpDiscoverResultEntry


class CISCOVTPMIB::VtpDatabaseTable : public ydk::Entity
{
    public:
        VtpDatabaseTable();
        ~VtpDatabaseTable();

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

        class VtpDatabaseEntry; //type: CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry

        ydk::YList vtpdatabaseentry;
        
}; // CISCOVTPMIB::VtpDatabaseTable


class CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry : public ydk::Entity
{
    public:
        VtpDatabaseEntry();
        ~VtpDatabaseEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdatabaseindex; //type: uint32
        ydk::YLeaf vtpdatabasename; //type: string
        ydk::YLeaf vtpdatabaselocalmode; //type: VtpDatabaseLocalMode
        ydk::YLeaf vtpdatabaserevnumber; //type: uint32
        ydk::YLeaf vtpdatabaseprimaryserver; //type: boolean
        ydk::YLeaf vtpdatabaseprimaryserverid; //type: string
        ydk::YLeaf vtpdatabasetakeoverprimary; //type: boolean
        ydk::YLeaf vtpdatabasetakeoverpassword; //type: string
        class VtpDatabaseLocalMode;

}; // CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry


class CISCOVTPMIB::VtpAuthenticationTable : public ydk::Entity
{
    public:
        VtpAuthenticationTable();
        ~VtpAuthenticationTable();

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

        class VtpAuthEntry; //type: CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry

        ydk::YList vtpauthentry;
        
}; // CISCOVTPMIB::VtpAuthenticationTable


class CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry : public ydk::Entity
{
    public:
        VtpAuthEntry();
        ~VtpAuthEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_VTP_MIB::CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpauthpassword; //type: string
        ydk::YLeaf vtpauthpasswordtype; //type: VtpAuthPasswordType
        ydk::YLeaf vtpauthsecretkey; //type: binary
        class VtpAuthPasswordType;

}; // CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry

class VlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf fddi;
        static const ydk::Enum::YLeaf tokenRing;
        static const ydk::Enum::YLeaf fddiNet;
        static const ydk::Enum::YLeaf trNet;
        static const ydk::Enum::YLeaf deprecated;

        static int get_enum_value(const std::string & name) {
            if (name == "ethernet") return 1;
            if (name == "fddi") return 2;
            if (name == "tokenRing") return 3;
            if (name == "fddiNet") return 4;
            if (name == "trNet") return 5;
            if (name == "deprecated") return 6;
            return -1;
        }
};

class CISCOVTPMIB::VtpStatus::VtpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf one;
        static const ydk::Enum::YLeaf two;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf three;

        static int get_enum_value(const std::string & name) {
            if (name == "one") return 1;
            if (name == "two") return 2;
            if (name == "none") return 3;
            if (name == "three") return 4;
            return -1;
        }
};

class CISCOVTPMIB::InternalVlanInfo::VtpInternalVlanAllocPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ascending;
        static const ydk::Enum::YLeaf descending;

        static int get_enum_value(const std::string & name) {
            if (name == "ascending") return 1;
            if (name == "descending") return 2;
            return -1;
        }
};

class CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainLocalMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "client") return 1;
            if (name == "server") return 2;
            if (name == "transparent") return 3;
            if (name == "off") return 4;
            return -1;
        }
};

class CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainPruningState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainVersionInUse : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;
        static const ydk::Enum::YLeaf version2;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf version3;

        static int get_enum_value(const std::string & name) {
            if (name == "version1") return 1;
            if (name == "version2") return 2;
            if (name == "none") return 3;
            if (name == "version3") return 4;
            return -1;
        }
};

class CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::ManagementDomainPruningStateOper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanEditOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf apply;
        static const ydk::Enum::YLeaf release;
        static const ydk::Enum::YLeaf restartTimer;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "copy") return 2;
            if (name == "apply") return 3;
            if (name == "release") return 4;
            if (name == "restartTimer") return 5;
            return -1;
        }
};

class CISCOVTPMIB::ManagementDomainTable::ManagementDomainEntry::VtpVlanApplyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf configNumberError;
        static const ydk::Enum::YLeaf inconsistentEdit;
        static const ydk::Enum::YLeaf tooBig;
        static const ydk::Enum::YLeaf localNVStoreFail;
        static const ydk::Enum::YLeaf remoteNVStoreFail;
        static const ydk::Enum::YLeaf editBufferEmpty;
        static const ydk::Enum::YLeaf someOtherError;
        static const ydk::Enum::YLeaf notPrimaryServer;

        static int get_enum_value(const std::string & name) {
            if (name == "inProgress") return 1;
            if (name == "succeeded") return 2;
            if (name == "configNumberError") return 3;
            if (name == "inconsistentEdit") return 4;
            if (name == "tooBig") return 5;
            if (name == "localNVStoreFail") return 6;
            if (name == "remoteNVStoreFail") return 7;
            if (name == "editBufferEmpty") return 8;
            if (name == "someOtherError") return 9;
            if (name == "notPrimaryServer") return 10;
            return -1;
        }
};

class CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf mtuTooBigForDevice;
        static const ydk::Enum::YLeaf mtuTooBigForTrunk;

        static int get_enum_value(const std::string & name) {
            if (name == "operational") return 1;
            if (name == "suspended") return 2;
            if (name == "mtuTooBigForDevice") return 3;
            if (name == "mtuTooBigForTrunk") return 4;
            return -1;
        }
};

class CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanStpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf ibm;
        static const ydk::Enum::YLeaf hybrid;

        static int get_enum_value(const std::string & name) {
            if (name == "ieee") return 1;
            if (name == "ibm") return 2;
            if (name == "hybrid") return 3;
            return -1;
        }
};

class CISCOVTPMIB::VtpVlanTable::VtpVlanEntry::VtpVlanBridgeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf srt;
        static const ydk::Enum::YLeaf srb;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "srt") return 1;
            if (name == "srb") return 2;
            return -1;
        }
};

class CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf suspended;

        static int get_enum_value(const std::string & name) {
            if (name == "operational") return 1;
            if (name == "suspended") return 2;
            return -1;
        }
};

class CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditStpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf ibm;
        static const ydk::Enum::YLeaf auto_;

        static int get_enum_value(const std::string & name) {
            if (name == "ieee") return 1;
            if (name == "ibm") return 2;
            if (name == "auto") return 3;
            return -1;
        }
};

class CISCOVTPMIB::VtpVlanEditTable::VtpVlanEditEntry::VtpVlanEditBridgeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srt;
        static const ydk::Enum::YLeaf srb;

        static int get_enum_value(const std::string & name) {
            if (name == "srt") return 1;
            if (name == "srb") return 2;
            return -1;
        }
};

class CISCOVTPMIB::VtpVlanLocalShutdownTable::VtpVlanLocalShutdownEntry::VtpVlanLocalShutdown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            return -1;
        }
};

class CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf dot10;
        static const ydk::Enum::YLeaf lane;
        static const ydk::Enum::YLeaf dot1Q;
        static const ydk::Enum::YLeaf negotiate;

        static int get_enum_value(const std::string & name) {
            if (name == "isl") return 1;
            if (name == "dot10") return 2;
            if (name == "lane") return 3;
            if (name == "dot1Q") return 4;
            if (name == "negotiate") return 5;
            return -1;
        }
};

class CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf desirable;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf onNoNegotiate;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            if (name == "off") return 2;
            if (name == "desirable") return 3;
            if (name == "auto") return 4;
            if (name == "onNoNegotiate") return 5;
            return -1;
        }
};

class CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDynamicStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trunking;
        static const ydk::Enum::YLeaf notTrunking;

        static int get_enum_value(const std::string & name) {
            if (name == "trunking") return 1;
            if (name == "notTrunking") return 2;
            return -1;
        }
};

class CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortEncapsulationOperType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf dot10;
        static const ydk::Enum::YLeaf lane;
        static const ydk::Enum::YLeaf dot1Q;
        static const ydk::Enum::YLeaf negotiating;
        static const ydk::Enum::YLeaf notApplicable;

        static int get_enum_value(const std::string & name) {
            if (name == "isl") return 1;
            if (name == "dot10") return 2;
            if (name == "lane") return 3;
            if (name == "dot1Q") return 4;
            if (name == "negotiating") return 5;
            if (name == "notApplicable") return 6;
            return -1;
        }
};

class CISCOVTPMIB::VlanTrunkPortTable::VlanTrunkPortEntry::VlanTrunkPortDot1qTunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trunk;
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "trunk") return 1;
            if (name == "access") return 2;
            if (name == "disabled") return 3;
            return -1;
        }
};

class CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discover;
        static const ydk::Enum::YLeaf noOperation;
        static const ydk::Enum::YLeaf purgeResult;

        static int get_enum_value(const std::string & name) {
            if (name == "discover") return 1;
            if (name == "noOperation") return 2;
            if (name == "purgeResult") return 3;
            return -1;
        }
};

class CISCOVTPMIB::VtpDiscoverTable::VtpDiscoverEntry::VtpDiscoverStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf resourceUnavailable;
        static const ydk::Enum::YLeaf someOtherError;

        static int get_enum_value(const std::string & name) {
            if (name == "inProgress") return 1;
            if (name == "succeeded") return 2;
            if (name == "resourceUnavailable") return 3;
            if (name == "someOtherError") return 4;
            return -1;
        }
};

class CISCOVTPMIB::VtpDatabaseTable::VtpDatabaseEntry::VtpDatabaseLocalMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "client") return 1;
            if (name == "server") return 2;
            if (name == "transparent") return 3;
            if (name == "off") return 4;
            return -1;
        }
};

class CISCOVTPMIB::VtpAuthenticationTable::VtpAuthEntry::VtpAuthPasswordType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plaintext;
        static const ydk::Enum::YLeaf hidden;

        static int get_enum_value(const std::string & name) {
            if (name == "plaintext") return 1;
            if (name == "hidden") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_VTP_MIB_ */

