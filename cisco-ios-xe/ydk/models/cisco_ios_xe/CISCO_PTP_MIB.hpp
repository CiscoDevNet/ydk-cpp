#ifndef _CISCO_PTP_MIB_
#define _CISCO_PTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PTP_MIB {

class CISCOPTPMIB : public ydk::Entity
{
    public:
        CISCOPTPMIB();
        ~CISCOPTPMIB();

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

        class CiscoPtpMIBSystemInfo; //type: CISCOPTPMIB::CiscoPtpMIBSystemInfo
        class CPtpSystemTable; //type: CISCOPTPMIB::CPtpSystemTable
        class CPtpSystemDomainTable; //type: CISCOPTPMIB::CPtpSystemDomainTable
        class CPtpClockNodeTable; //type: CISCOPTPMIB::CPtpClockNodeTable
        class CPtpClockCurrentDSTable; //type: CISCOPTPMIB::CPtpClockCurrentDSTable
        class CPtpClockParentDSTable; //type: CISCOPTPMIB::CPtpClockParentDSTable
        class CPtpClockDefaultDSTable; //type: CISCOPTPMIB::CPtpClockDefaultDSTable
        class CPtpClockRunningTable; //type: CISCOPTPMIB::CPtpClockRunningTable
        class CPtpClockTimePropertiesDSTable; //type: CISCOPTPMIB::CPtpClockTimePropertiesDSTable
        class CPtpClockTransDefaultDSTable; //type: CISCOPTPMIB::CPtpClockTransDefaultDSTable
        class CPtpClockPortTable; //type: CISCOPTPMIB::CPtpClockPortTable
        class CPtpClockPortDSTable; //type: CISCOPTPMIB::CPtpClockPortDSTable
        class CPtpClockPortRunningTable; //type: CISCOPTPMIB::CPtpClockPortRunningTable
        class CPtpClockPortTransDSTable; //type: CISCOPTPMIB::CPtpClockPortTransDSTable
        class CPtpClockPortAssociateTable; //type: CISCOPTPMIB::CPtpClockPortAssociateTable

        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CiscoPtpMIBSystemInfo> ciscoptpmibsysteminfo;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpSystemTable> cptpsystemtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpSystemDomainTable> cptpsystemdomaintable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockNodeTable> cptpclocknodetable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockCurrentDSTable> cptpclockcurrentdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockParentDSTable> cptpclockparentdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockDefaultDSTable> cptpclockdefaultdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockRunningTable> cptpclockrunningtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockTimePropertiesDSTable> cptpclocktimepropertiesdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockTransDefaultDSTable> cptpclocktransdefaultdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockPortTable> cptpclockporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockPortDSTable> cptpclockportdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockPortRunningTable> cptpclockportrunningtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockPortTransDSTable> cptpclockporttransdstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PTP_MIB::CISCOPTPMIB::CPtpClockPortAssociateTable> cptpclockportassociatetable;
        
}; // CISCOPTPMIB


class CISCOPTPMIB::CiscoPtpMIBSystemInfo : public ydk::Entity
{
    public:
        CiscoPtpMIBSystemInfo();
        ~CiscoPtpMIBSystemInfo();

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

        ydk::YLeaf cptpsystemprofile; //type: ClockProfileType

}; // CISCOPTPMIB::CiscoPtpMIBSystemInfo


class CISCOPTPMIB::CPtpSystemTable : public ydk::Entity
{
    public:
        CPtpSystemTable();
        ~CPtpSystemTable();

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

        class CPtpSystemEntry; //type: CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry

        ydk::YList cptpsystementry;
        
}; // CISCOPTPMIB::CPtpSystemTable


class CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry : public ydk::Entity
{
    public:
        CPtpSystemEntry();
        ~CPtpSystemEntry();

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

        ydk::YLeaf cptpdomainindex; //type: uint32
        ydk::YLeaf cptpinstanceindex; //type: uint32
        ydk::YLeaf cptpdomainclockportstotal; //type: uint32
        ydk::YLeaf cptpdomainclockportphysicalinterfacestotal; //type: uint32

}; // CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry


class CISCOPTPMIB::CPtpSystemDomainTable : public ydk::Entity
{
    public:
        CPtpSystemDomainTable();
        ~CPtpSystemDomainTable();

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

        class CPtpSystemDomainEntry; //type: CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry

        ydk::YList cptpsystemdomainentry;
        
}; // CISCOPTPMIB::CPtpSystemDomainTable


class CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry : public ydk::Entity
{
    public:
        CPtpSystemDomainEntry();
        ~CPtpSystemDomainEntry();

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

        ydk::YLeaf cptpsystemdomainclocktypeindex; //type: ClockType
        ydk::YLeaf cptpsystemdomaintotals; //type: uint32

}; // CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry


class CISCOPTPMIB::CPtpClockNodeTable : public ydk::Entity
{
    public:
        CPtpClockNodeTable();
        ~CPtpClockNodeTable();

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

        class CPtpClockNodeEntry; //type: CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry

        ydk::YList cptpclocknodeentry;
        
}; // CISCOPTPMIB::CPtpClockNodeTable


class CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry : public ydk::Entity
{
    public:
        CPtpClockNodeEntry();
        ~CPtpClockNodeEntry();

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

        ydk::YLeaf cptpclockdomainindex; //type: uint32
        ydk::YLeaf cptpclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockinput1ppsenabled; //type: boolean
        ydk::YLeaf cptpclockinputfrequencyenabled; //type: boolean
        ydk::YLeaf cptpclocktodenabled; //type: boolean
        ydk::YLeaf cptpclockoutput1ppsenabled; //type: boolean
        ydk::YLeaf cptpclockoutput1ppsoffsetenabled; //type: boolean
        ydk::YLeaf cptpclockoutput1ppsoffsetvalue; //type: uint32
        ydk::YLeaf cptpclockoutput1ppsoffsetnegative; //type: boolean
        ydk::YLeaf cptpclockinput1ppsinterface; //type: string
        ydk::YLeaf cptpclockoutput1ppsinterface; //type: string
        ydk::YLeaf cptpclocktodinterface; //type: string

}; // CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry


class CISCOPTPMIB::CPtpClockCurrentDSTable : public ydk::Entity
{
    public:
        CPtpClockCurrentDSTable();
        ~CPtpClockCurrentDSTable();

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

        class CPtpClockCurrentDSEntry; //type: CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry

        ydk::YList cptpclockcurrentdsentry;
        
}; // CISCOPTPMIB::CPtpClockCurrentDSTable


class CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry : public ydk::Entity
{
    public:
        CPtpClockCurrentDSEntry();
        ~CPtpClockCurrentDSEntry();

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

        ydk::YLeaf cptpclockcurrentdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockcurrentdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockcurrentdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockcurrentdsstepsremoved; //type: uint32
        ydk::YLeaf cptpclockcurrentdsoffsetfrommaster; //type: binary
        ydk::YLeaf cptpclockcurrentdsmeanpathdelay; //type: binary

}; // CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry


class CISCOPTPMIB::CPtpClockParentDSTable : public ydk::Entity
{
    public:
        CPtpClockParentDSTable();
        ~CPtpClockParentDSTable();

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

        class CPtpClockParentDSEntry; //type: CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry

        ydk::YList cptpclockparentdsentry;
        
}; // CISCOPTPMIB::CPtpClockParentDSTable


class CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry : public ydk::Entity
{
    public:
        CPtpClockParentDSEntry();
        ~CPtpClockParentDSEntry();

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

        ydk::YLeaf cptpclockparentdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockparentdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockparentdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockparentdsparentportidentity; //type: binary
        ydk::YLeaf cptpclockparentdsparentstats; //type: boolean
        ydk::YLeaf cptpclockparentdsoffset; //type: int32
        ydk::YLeaf cptpclockparentdsclockphchrate; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockidentity; //type: binary
        ydk::YLeaf cptpclockparentdsgmclockpriority1; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockpriority2; //type: int32
        ydk::YLeaf cptpclockparentdsgmclockqualityclass; //type: uint32
        ydk::YLeaf cptpclockparentdsgmclockqualityaccuracy; //type: ClockQualityAccuracyType
        ydk::YLeaf cptpclockparentdsgmclockqualityoffset; //type: uint32

}; // CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry


class CISCOPTPMIB::CPtpClockDefaultDSTable : public ydk::Entity
{
    public:
        CPtpClockDefaultDSTable();
        ~CPtpClockDefaultDSTable();

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

        class CPtpClockDefaultDSEntry; //type: CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry

        ydk::YList cptpclockdefaultdsentry;
        
}; // CISCOPTPMIB::CPtpClockDefaultDSTable


class CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry : public ydk::Entity
{
    public:
        CPtpClockDefaultDSEntry();
        ~CPtpClockDefaultDSEntry();

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

        ydk::YLeaf cptpclockdefaultdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockdefaultdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockdefaultdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockdefaultdstwostepflag; //type: boolean
        ydk::YLeaf cptpclockdefaultdsclockidentity; //type: binary
        ydk::YLeaf cptpclockdefaultdspriority1; //type: int32
        ydk::YLeaf cptpclockdefaultdspriority2; //type: int32
        ydk::YLeaf cptpclockdefaultdsslaveonly; //type: boolean
        ydk::YLeaf cptpclockdefaultdsqualityclass; //type: uint32
        ydk::YLeaf cptpclockdefaultdsqualityaccuracy; //type: ClockQualityAccuracyType
        ydk::YLeaf cptpclockdefaultdsqualityoffset; //type: int32

}; // CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry


class CISCOPTPMIB::CPtpClockRunningTable : public ydk::Entity
{
    public:
        CPtpClockRunningTable();
        ~CPtpClockRunningTable();

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

        class CPtpClockRunningEntry; //type: CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry

        ydk::YList cptpclockrunningentry;
        
}; // CISCOPTPMIB::CPtpClockRunningTable


class CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry : public ydk::Entity
{
    public:
        CPtpClockRunningEntry();
        ~CPtpClockRunningEntry();

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

        ydk::YLeaf cptpclockrunningdomainindex; //type: uint32
        ydk::YLeaf cptpclockrunningclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockrunninginstanceindex; //type: uint32
        ydk::YLeaf cptpclockrunningstate; //type: ClockStateType
        ydk::YLeaf cptpclockrunningpacketssent; //type: uint64
        ydk::YLeaf cptpclockrunningpacketsreceived; //type: uint64

}; // CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry


class CISCOPTPMIB::CPtpClockTimePropertiesDSTable : public ydk::Entity
{
    public:
        CPtpClockTimePropertiesDSTable();
        ~CPtpClockTimePropertiesDSTable();

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

        class CPtpClockTimePropertiesDSEntry; //type: CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry

        ydk::YList cptpclocktimepropertiesdsentry;
        
}; // CISCOPTPMIB::CPtpClockTimePropertiesDSTable


class CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry : public ydk::Entity
{
    public:
        CPtpClockTimePropertiesDSEntry();
        ~CPtpClockTimePropertiesDSEntry();

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

        ydk::YLeaf cptpclocktimepropertiesdsdomainindex; //type: uint32
        ydk::YLeaf cptpclocktimepropertiesdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclocktimepropertiesdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclocktimepropertiesdscurrentutcoffsetvalid; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdscurrentutcoffset; //type: int32
        ydk::YLeaf cptpclocktimepropertiesdsleap59; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsleap61; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdstimetraceable; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsfreqtraceable; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdsptptimescale; //type: boolean
        ydk::YLeaf cptpclocktimepropertiesdssource; //type: ClockTimeSourceType

}; // CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry


class CISCOPTPMIB::CPtpClockTransDefaultDSTable : public ydk::Entity
{
    public:
        CPtpClockTransDefaultDSTable();
        ~CPtpClockTransDefaultDSTable();

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

        class CPtpClockTransDefaultDSEntry; //type: CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry

        ydk::YList cptpclocktransdefaultdsentry;
        
}; // CISCOPTPMIB::CPtpClockTransDefaultDSTable


class CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry : public ydk::Entity
{
    public:
        CPtpClockTransDefaultDSEntry();
        ~CPtpClockTransDefaultDSEntry();

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

        ydk::YLeaf cptpclocktransdefaultdsdomainindex; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsclockidentity; //type: binary
        ydk::YLeaf cptpclocktransdefaultdsnumofports; //type: uint32
        ydk::YLeaf cptpclocktransdefaultdsdelay; //type: ClockMechanismType
        ydk::YLeaf cptpclocktransdefaultdsprimarydomain; //type: int32

}; // CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry


class CISCOPTPMIB::CPtpClockPortTable : public ydk::Entity
{
    public:
        CPtpClockPortTable();
        ~CPtpClockPortTable();

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

        class CPtpClockPortEntry; //type: CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry

        ydk::YList cptpclockportentry;
        
}; // CISCOPTPMIB::CPtpClockPortTable


class CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry : public ydk::Entity
{
    public:
        CPtpClockPortEntry();
        ~CPtpClockPortEntry();

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

        ydk::YLeaf cptpclockportdomainindex; //type: uint32
        ydk::YLeaf cptpclockportclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockporttableportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportname; //type: string
        ydk::YLeaf cptpclockportrole; //type: ClockRoleType
        ydk::YLeaf cptpclockportsynconestep; //type: boolean
        ydk::YLeaf cptpclockportcurrentpeeraddresstype; //type: InetAddressType
        ydk::YLeaf cptpclockportcurrentpeeraddress; //type: binary
        ydk::YLeaf cptpclockportnumofassociatedports; //type: uint32

}; // CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry


class CISCOPTPMIB::CPtpClockPortDSTable : public ydk::Entity
{
    public:
        CPtpClockPortDSTable();
        ~CPtpClockPortDSTable();

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

        class CPtpClockPortDSEntry; //type: CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry

        ydk::YList cptpclockportdsentry;
        
}; // CISCOPTPMIB::CPtpClockPortDSTable


class CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry : public ydk::Entity
{
    public:
        CPtpClockPortDSEntry();
        ~CPtpClockPortDSEntry();

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

        ydk::YLeaf cptpclockportdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockportdsclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportdsclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportdsportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportdsname; //type: string
        ydk::YLeaf cptpclockportdsportidentity; //type: binary
        ydk::YLeaf cptpclockportdsannouncementinterval; //type: int32
        ydk::YLeaf cptpclockportdsannouncercttimeout; //type: int32
        ydk::YLeaf cptpclockportdssyncinterval; //type: int32
        ydk::YLeaf cptpclockportdsmindelayreqinterval; //type: int32
        ydk::YLeaf cptpclockportdspeerdelayreqinterval; //type: int32
        ydk::YLeaf cptpclockportdsdelaymech; //type: ClockMechanismType
        ydk::YLeaf cptpclockportdspeermeanpathdelay; //type: binary
        ydk::YLeaf cptpclockportdsgrantduration; //type: uint32
        ydk::YLeaf cptpclockportdsptpversion; //type: int32

}; // CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry


class CISCOPTPMIB::CPtpClockPortRunningTable : public ydk::Entity
{
    public:
        CPtpClockPortRunningTable();
        ~CPtpClockPortRunningTable();

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

        class CPtpClockPortRunningEntry; //type: CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry

        ydk::YList cptpclockportrunningentry;
        
}; // CISCOPTPMIB::CPtpClockPortRunningTable


class CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry : public ydk::Entity
{
    public:
        CPtpClockPortRunningEntry();
        ~CPtpClockPortRunningEntry();

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

        ydk::YLeaf cptpclockportrunningdomainindex; //type: uint32
        ydk::YLeaf cptpclockportrunningclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportrunningclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportrunningportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportrunningname; //type: string
        ydk::YLeaf cptpclockportrunningstate; //type: ClockPortState
        ydk::YLeaf cptpclockportrunningrole; //type: ClockRoleType
        ydk::YLeaf cptpclockportrunninginterfaceindex; //type: int32
        ydk::YLeaf cptpclockportrunningipversion; //type: int32
        ydk::YLeaf cptpclockportrunningencapsulationtype; //type: int32
        ydk::YLeaf cptpclockportrunningtxmode; //type: ClockTxModeType
        ydk::YLeaf cptpclockportrunningrxmode; //type: ClockTxModeType
        ydk::YLeaf cptpclockportrunningpacketsreceived; //type: uint64
        ydk::YLeaf cptpclockportrunningpacketssent; //type: uint64

}; // CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry


class CISCOPTPMIB::CPtpClockPortTransDSTable : public ydk::Entity
{
    public:
        CPtpClockPortTransDSTable();
        ~CPtpClockPortTransDSTable();

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

        class CPtpClockPortTransDSEntry; //type: CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry

        ydk::YList cptpclockporttransdsentry;
        
}; // CISCOPTPMIB::CPtpClockPortTransDSTable


class CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry : public ydk::Entity
{
    public:
        CPtpClockPortTransDSEntry();
        ~CPtpClockPortTransDSEntry();

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

        ydk::YLeaf cptpclockporttransdsdomainindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsinstanceindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsportnumberindex; //type: uint32
        ydk::YLeaf cptpclockporttransdsportidentity; //type: binary
        ydk::YLeaf cptpclockporttransdslogminpdelayreqint; //type: int32
        ydk::YLeaf cptpclockporttransdsfaultyflag; //type: boolean
        ydk::YLeaf cptpclockporttransdspeermeanpathdelay; //type: binary

}; // CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry


class CISCOPTPMIB::CPtpClockPortAssociateTable : public ydk::Entity
{
    public:
        CPtpClockPortAssociateTable();
        ~CPtpClockPortAssociateTable();

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

        class CPtpClockPortAssociateEntry; //type: CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry

        ydk::YList cptpclockportassociateentry;
        
}; // CISCOPTPMIB::CPtpClockPortAssociateTable


class CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry : public ydk::Entity
{
    public:
        CPtpClockPortAssociateEntry();
        ~CPtpClockPortAssociateEntry();

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

        ydk::YLeaf cptpclockportcurrentdomainindex; //type: uint32
        ydk::YLeaf cptpclockportcurrentclocktypeindex; //type: ClockType
        ydk::YLeaf cptpclockportcurrentclockinstanceindex; //type: uint32
        ydk::YLeaf cptpclockportcurrentportnumberindex; //type: uint32
        ydk::YLeaf cptpclockportassociateportindex; //type: uint32
        ydk::YLeaf cptpclockportassociateaddresstype; //type: InetAddressType
        ydk::YLeaf cptpclockportassociateaddress; //type: binary
        ydk::YLeaf cptpclockportassociatepacketssent; //type: uint64
        ydk::YLeaf cptpclockportassociatepacketsreceived; //type: uint64
        ydk::YLeaf cptpclockportassociateinerrors; //type: uint64
        ydk::YLeaf cptpclockportassociateouterrors; //type: uint64

}; // CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry

class ClockMechanismType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf e2e;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf disabled;

};

class ClockPortState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf faulty;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf listening;
        static const ydk::Enum::YLeaf preMaster;
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf uncalibrated;
        static const ydk::Enum::YLeaf slave;

};

class ClockProfileType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf telecom;
        static const ydk::Enum::YLeaf vendorspecific;

};

class ClockQualityAccuracyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reserved00;
        static const ydk::Enum::YLeaf nanoSecond25;
        static const ydk::Enum::YLeaf nanoSecond100;
        static const ydk::Enum::YLeaf nanoSecond250;
        static const ydk::Enum::YLeaf microSec1;
        static const ydk::Enum::YLeaf microSec2dot5;
        static const ydk::Enum::YLeaf microSec10;
        static const ydk::Enum::YLeaf microSec25;
        static const ydk::Enum::YLeaf microSec100;
        static const ydk::Enum::YLeaf microSec250;
        static const ydk::Enum::YLeaf milliSec1;
        static const ydk::Enum::YLeaf milliSec2dot5;
        static const ydk::Enum::YLeaf milliSec10;
        static const ydk::Enum::YLeaf milliSec25;
        static const ydk::Enum::YLeaf milliSec100;
        static const ydk::Enum::YLeaf milliSec250;
        static const ydk::Enum::YLeaf second1;
        static const ydk::Enum::YLeaf second10;
        static const ydk::Enum::YLeaf secondGreater10;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf reserved255;

};

class ClockRoleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};

class ClockStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf freerun;
        static const ydk::Enum::YLeaf holdover;
        static const ydk::Enum::YLeaf acquiring;
        static const ydk::Enum::YLeaf frequencyLocked;
        static const ydk::Enum::YLeaf phaseAligned;

};

class ClockTimeSourceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf atomicClock;
        static const ydk::Enum::YLeaf gps;
        static const ydk::Enum::YLeaf terrestrialRadio;
        static const ydk::Enum::YLeaf ptp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf handSet;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf internalOsillator;

};

class ClockTxModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf multicastmix;

};

class ClockType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ordinaryClock;
        static const ydk::Enum::YLeaf boundaryClock;
        static const ydk::Enum::YLeaf transparentClock;
        static const ydk::Enum::YLeaf boundaryNode;

};


}
}

#endif /* _CISCO_PTP_MIB_ */

