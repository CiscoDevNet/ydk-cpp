#ifndef _CISCO_RTTMON_MIB_
#define _CISCO_RTTMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_RTTMON_MIB {

class CISCORTTMONMIB : public ydk::Entity
{
    public:
        CISCORTTMONMIB();
        ~CISCORTTMONMIB();

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

        class RttMonAppl; //type: CISCORTTMONMIB::RttMonAppl
        class RttMonApplSupportedRttTypesTable; //type: CISCORTTMONMIB::RttMonApplSupportedRttTypesTable
        class RttMonApplSupportedProtocolsTable; //type: CISCORTTMONMIB::RttMonApplSupportedProtocolsTable
        class RttMonApplPreConfigedTable; //type: CISCORTTMONMIB::RttMonApplPreConfigedTable
        class RttMonApplAuthTable; //type: CISCORTTMONMIB::RttMonApplAuthTable
        class RttMonCtrlAdminTable; //type: CISCORTTMONMIB::RttMonCtrlAdminTable
        class RttMonEchoAdminTable; //type: CISCORTTMONMIB::RttMonEchoAdminTable
        class RttMonFileIOAdminTable; //type: CISCORTTMONMIB::RttMonFileIOAdminTable
        class RttMonScriptAdminTable; //type: CISCORTTMONMIB::RttMonScriptAdminTable
        class RttMonReactTriggerAdminTable; //type: CISCORTTMONMIB::RttMonReactTriggerAdminTable
        class RttMonEchoPathAdminTable; //type: CISCORTTMONMIB::RttMonEchoPathAdminTable
        class RttMonGrpScheduleAdminTable; //type: CISCORTTMONMIB::RttMonGrpScheduleAdminTable
        class RttMplsVpnMonCtrlTable; //type: CISCORTTMONMIB::RttMplsVpnMonCtrlTable
        class RttMonReactTable; //type: CISCORTTMONMIB::RttMonReactTable
        class RttMonGeneratedOperTable; //type: CISCORTTMONMIB::RttMonGeneratedOperTable
        class RttMonStatsCaptureTable; //type: CISCORTTMONMIB::RttMonStatsCaptureTable
        class RttMonStatsCollectTable; //type: CISCORTTMONMIB::RttMonStatsCollectTable
        class RttMonStatsTotalsTable; //type: CISCORTTMONMIB::RttMonStatsTotalsTable
        class RttMonHTTPStatsTable; //type: CISCORTTMONMIB::RttMonHTTPStatsTable
        class RttMonJitterStatsTable; //type: CISCORTTMONMIB::RttMonJitterStatsTable
        class RttMonLpdGrpStatsTable; //type: CISCORTTMONMIB::RttMonLpdGrpStatsTable
        class RttMonHistoryCollectionTable; //type: CISCORTTMONMIB::RttMonHistoryCollectionTable
        class RttMonLatestHTTPOperTable; //type: CISCORTTMONMIB::RttMonLatestHTTPOperTable
        class RttMonLatestJitterOperTable; //type: CISCORTTMONMIB::RttMonLatestJitterOperTable

        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonAppl> rttmonappl;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonApplSupportedRttTypesTable> rttmonapplsupportedrtttypestable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonApplSupportedProtocolsTable> rttmonapplsupportedprotocolstable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonApplPreConfigedTable> rttmonapplpreconfigedtable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonApplAuthTable> rttmonapplauthtable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable> rttmonctrladmintable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonEchoAdminTable> rttmonechoadmintable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonFileIOAdminTable> rttmonfileioadmintable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonScriptAdminTable> rttmonscriptadmintable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonReactTriggerAdminTable> rttmonreacttriggeradmintable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonEchoPathAdminTable> rttmonechopathadmintable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonGrpScheduleAdminTable> rttmongrpscheduleadmintable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMplsVpnMonCtrlTable> rttmplsvpnmonctrltable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonReactTable> rttmonreacttable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonGeneratedOperTable> rttmongeneratedopertable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonStatsCaptureTable> rttmonstatscapturetable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonStatsCollectTable> rttmonstatscollecttable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonStatsTotalsTable> rttmonstatstotalstable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonHTTPStatsTable> rttmonhttpstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonJitterStatsTable> rttmonjitterstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonLpdGrpStatsTable> rttmonlpdgrpstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonHistoryCollectionTable> rttmonhistorycollectiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonLatestHTTPOperTable> rttmonlatesthttpopertable;
        std::shared_ptr<cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonLatestJitterOperTable> rttmonlatestjitteropertable;
        
}; // CISCORTTMONMIB


class CISCORTTMONMIB::RttMonAppl : public ydk::Entity
{
    public:
        RttMonAppl();
        ~RttMonAppl();

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

        ydk::YLeaf rttmonapplversion; //type: string
        ydk::YLeaf rttmonapplmaxpacketdatasize; //type: int32
        ydk::YLeaf rttmonappltimeoflastset; //type: uint32
        ydk::YLeaf rttmonapplnumctrladminentry; //type: int32
        ydk::YLeaf rttmonapplreset; //type: RttReset
        ydk::YLeaf rttmonapplpreconfigedreset; //type: RttReset
        ydk::YLeaf rttmonapplprobecapacity; //type: int32
        ydk::YLeaf rttmonapplfreememlowwatermark; //type: int32
        ydk::YLeaf rttmonappllatestseterror; //type: string
        ydk::YLeaf rttmonapplresponder; //type: boolean
        ydk::YLeaf rttmonappllpdgrpstatsreset; //type: int32

}; // CISCORTTMONMIB::RttMonAppl


class CISCORTTMONMIB::RttMonApplSupportedRttTypesTable : public ydk::Entity
{
    public:
        RttMonApplSupportedRttTypesTable();
        ~RttMonApplSupportedRttTypesTable();

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

        class RttMonApplSupportedRttTypesEntry; //type: CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry

        ydk::YList rttmonapplsupportedrtttypesentry;
        
}; // CISCORTTMONMIB::RttMonApplSupportedRttTypesTable


class CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry : public ydk::Entity
{
    public:
        RttMonApplSupportedRttTypesEntry();
        ~RttMonApplSupportedRttTypesEntry();

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

        ydk::YLeaf rttmonapplsupportedrtttypes; //type: RttMonRttType
        ydk::YLeaf rttmonapplsupportedrtttypesvalid; //type: boolean

}; // CISCORTTMONMIB::RttMonApplSupportedRttTypesTable::RttMonApplSupportedRttTypesEntry


class CISCORTTMONMIB::RttMonApplSupportedProtocolsTable : public ydk::Entity
{
    public:
        RttMonApplSupportedProtocolsTable();
        ~RttMonApplSupportedProtocolsTable();

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

        class RttMonApplSupportedProtocolsEntry; //type: CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry

        ydk::YList rttmonapplsupportedprotocolsentry;
        
}; // CISCORTTMONMIB::RttMonApplSupportedProtocolsTable


class CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry : public ydk::Entity
{
    public:
        RttMonApplSupportedProtocolsEntry();
        ~RttMonApplSupportedProtocolsEntry();

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

        ydk::YLeaf rttmonapplsupportedprotocols; //type: RttMonProtocol
        ydk::YLeaf rttmonapplsupportedprotocolsvalid; //type: boolean

}; // CISCORTTMONMIB::RttMonApplSupportedProtocolsTable::RttMonApplSupportedProtocolsEntry


class CISCORTTMONMIB::RttMonApplPreConfigedTable : public ydk::Entity
{
    public:
        RttMonApplPreConfigedTable();
        ~RttMonApplPreConfigedTable();

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

        class RttMonApplPreConfigedEntry; //type: CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry

        ydk::YList rttmonapplpreconfigedentry;
        
}; // CISCORTTMONMIB::RttMonApplPreConfigedTable


class CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry : public ydk::Entity
{
    public:
        RttMonApplPreConfigedEntry();
        ~RttMonApplPreConfigedEntry();

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

        ydk::YLeaf rttmonapplpreconfigedtype; //type: RttMonApplPreConfigedType
        ydk::YLeaf rttmonapplpreconfigedname; //type: string
        ydk::YLeaf rttmonapplpreconfigedvalid; //type: boolean
        class RttMonApplPreConfigedType;

}; // CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry


class CISCORTTMONMIB::RttMonApplAuthTable : public ydk::Entity
{
    public:
        RttMonApplAuthTable();
        ~RttMonApplAuthTable();

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

        class RttMonApplAuthEntry; //type: CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry

        ydk::YList rttmonapplauthentry;
        
}; // CISCORTTMONMIB::RttMonApplAuthTable


class CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry : public ydk::Entity
{
    public:
        RttMonApplAuthEntry();
        ~RttMonApplAuthEntry();

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

        ydk::YLeaf rttmonapplauthindex; //type: int32
        ydk::YLeaf rttmonapplauthkeychain; //type: string
        ydk::YLeaf rttmonapplauthkeystring1; //type: string
        ydk::YLeaf rttmonapplauthkeystring2; //type: string
        ydk::YLeaf rttmonapplauthkeystring3; //type: string
        ydk::YLeaf rttmonapplauthkeystring4; //type: string
        ydk::YLeaf rttmonapplauthkeystring5; //type: string
        ydk::YLeaf rttmonapplauthstatus; //type: RowStatus

}; // CISCORTTMONMIB::RttMonApplAuthTable::RttMonApplAuthEntry


class CISCORTTMONMIB::RttMonCtrlAdminTable : public ydk::Entity
{
    public:
        RttMonCtrlAdminTable();
        ~RttMonCtrlAdminTable();

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

        class RttMonCtrlAdminEntry; //type: CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry

        ydk::YList rttmonctrladminentry;
        
}; // CISCORTTMONMIB::RttMonCtrlAdminTable


class CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry : public ydk::Entity
{
    public:
        RttMonCtrlAdminEntry();
        ~RttMonCtrlAdminEntry();

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

        ydk::YLeaf rttmonctrladminindex; //type: int32
        ydk::YLeaf rttmonctrladminowner; //type: binary
        ydk::YLeaf rttmonctrladmintag; //type: string
        ydk::YLeaf rttmonctrladminrtttype; //type: RttMonRttType
        ydk::YLeaf rttmonctrladminthreshold; //type: int32
        ydk::YLeaf rttmonctrladminfrequency; //type: int32
        ydk::YLeaf rttmonctrladmintimeout; //type: int32
        ydk::YLeaf rttmonctrladminverifydata; //type: boolean
        ydk::YLeaf rttmonctrladminstatus; //type: RowStatus
        ydk::YLeaf rttmonctrladminnvgen; //type: boolean
        ydk::YLeaf rttmonctrladmingroupname; //type: string
        ydk::YLeaf rttmonscheduleadminrttlife; //type: int32
        ydk::YLeaf rttmonscheduleadminrttstarttime; //type: uint32
        ydk::YLeaf rttmonscheduleadminconceptrowageout; //type: int32
        ydk::YLeaf rttmonscheduleadminrttrecurring; //type: boolean
        ydk::YLeaf rttmonscheduleadminconceptrowageoutv2; //type: int32
        ydk::YLeaf rttmonreactadminconnectionenable; //type: boolean
        ydk::YLeaf rttmonreactadmintimeoutenable; //type: boolean
        ydk::YLeaf rttmonreactadminthresholdtype; //type: RttMonReactAdminThresholdType
        ydk::YLeaf rttmonreactadminthresholdfalling; //type: int32
        ydk::YLeaf rttmonreactadminthresholdcount; //type: int32
        ydk::YLeaf rttmonreactadminthresholdcount2; //type: int32
        ydk::YLeaf rttmonreactadminactiontype; //type: RttMonReactAdminActionType
        ydk::YLeaf rttmonreactadminverifyerrorenable; //type: boolean
        ydk::YLeaf rttmonstatisticsadminnumhourgroups; //type: int32
        ydk::YLeaf rttmonstatisticsadminnumpaths; //type: int32
        ydk::YLeaf rttmonstatisticsadminnumhops; //type: int32
        ydk::YLeaf rttmonstatisticsadminnumdistbuckets; //type: int32
        ydk::YLeaf rttmonstatisticsadmindistinterval; //type: int32
        ydk::YLeaf rttmonhistoryadminnumlives; //type: int32
        ydk::YLeaf rttmonhistoryadminnumbuckets; //type: int32
        ydk::YLeaf rttmonhistoryadminnumsamples; //type: int32
        ydk::YLeaf rttmonhistoryadminfilter; //type: RttMonHistoryAdminFilter
        ydk::YLeaf rttmonctrlopermodificationtime; //type: uint32
        ydk::YLeaf rttmonctrloperdiagtext; //type: string
        ydk::YLeaf rttmonctrloperresettime; //type: uint32
        ydk::YLeaf rttmonctrloperoctetsinuse; //type: uint32
        ydk::YLeaf rttmonctrloperconnectionlostoccurred; //type: boolean
        ydk::YLeaf rttmonctrlopertimeoutoccurred; //type: boolean
        ydk::YLeaf rttmonctrloperoverthresholdoccurred; //type: boolean
        ydk::YLeaf rttmonctrlopernumrtts; //type: int32
        ydk::YLeaf rttmonctrloperrttlife; //type: int32
        ydk::YLeaf rttmonctrloperstate; //type: RttMonCtrlOperState
        ydk::YLeaf rttmonctrloperverifyerroroccurred; //type: boolean
        ydk::YLeaf rttmonlatestrttopercompletiontime; //type: uint32
        ydk::YLeaf rttmonlatestrttopersense; //type: RttResponseSense
        ydk::YLeaf rttmonlatestrttoperapplspecificsense; //type: int32
        ydk::YLeaf rttmonlatestrttopersensedescription; //type: string
        ydk::YLeaf rttmonlatestrttopertime; //type: uint32
        ydk::YLeaf rttmonlatestrttoperaddress; //type: binary
        class RttMonReactAdminThresholdType;
        class RttMonReactAdminActionType;
        class RttMonHistoryAdminFilter;
        class RttMonCtrlOperState;

}; // CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry


class CISCORTTMONMIB::RttMonEchoAdminTable : public ydk::Entity
{
    public:
        RttMonEchoAdminTable();
        ~RttMonEchoAdminTable();

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

        class RttMonEchoAdminEntry; //type: CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry

        ydk::YList rttmonechoadminentry;
        
}; // CISCORTTMONMIB::RttMonEchoAdminTable


class CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry : public ydk::Entity
{
    public:
        RttMonEchoAdminEntry();
        ~RttMonEchoAdminEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonechoadminprotocol; //type: RttMonProtocol
        ydk::YLeaf rttmonechoadmintargetaddress; //type: binary
        ydk::YLeaf rttmonechoadminpktdatarequestsize; //type: int32
        ydk::YLeaf rttmonechoadminpktdataresponsesize; //type: int32
        ydk::YLeaf rttmonechoadmintargetport; //type: int32
        ydk::YLeaf rttmonechoadminsourceaddress; //type: binary
        ydk::YLeaf rttmonechoadminsourceport; //type: int32
        ydk::YLeaf rttmonechoadmincontrolenable; //type: boolean
        ydk::YLeaf rttmonechoadmintos; //type: int32
        ydk::YLeaf rttmonechoadminlsrenable; //type: boolean
        ydk::YLeaf rttmonechoadmintargetaddressstring; //type: string
        ydk::YLeaf rttmonechoadminnameserver; //type: binary
        ydk::YLeaf rttmonechoadminoperation; //type: RttMonOperation
        ydk::YLeaf rttmonechoadminhttpversion; //type: string
        ydk::YLeaf rttmonechoadminurl; //type: string
        ydk::YLeaf rttmonechoadmincache; //type: boolean
        ydk::YLeaf rttmonechoadmininterval; //type: int32
        ydk::YLeaf rttmonechoadminnumpackets; //type: int32
        ydk::YLeaf rttmonechoadminproxy; //type: string
        ydk::YLeaf rttmonechoadminstring1; //type: string
        ydk::YLeaf rttmonechoadminstring2; //type: string
        ydk::YLeaf rttmonechoadminstring3; //type: string
        ydk::YLeaf rttmonechoadminstring4; //type: string
        ydk::YLeaf rttmonechoadminstring5; //type: string
        ydk::YLeaf rttmonechoadminmode; //type: RttMonOperation
        ydk::YLeaf rttmonechoadminvrfname; //type: binary
        ydk::YLeaf rttmonechoadmincodectype; //type: RttMonCodecType
        ydk::YLeaf rttmonechoadmincodecinterval; //type: int32
        ydk::YLeaf rttmonechoadmincodecpayload; //type: int32
        ydk::YLeaf rttmonechoadmincodecnumpackets; //type: int32
        ydk::YLeaf rttmonechoadminicpifadvfactor; //type: int32
        ydk::YLeaf rttmonechoadminlspfectype; //type: RttMonEchoAdminLSPFECType
        ydk::YLeaf rttmonechoadminlspselector; //type: binary
        ydk::YLeaf rttmonechoadminlspreplymode; //type: RttMonLSPPingReplyMode
        ydk::YLeaf rttmonechoadminlspttl; //type: int32
        ydk::YLeaf rttmonechoadminlspexp; //type: int32
        ydk::YLeaf rttmonechoadminprecision; //type: RttMonEchoAdminPrecision
        ydk::YLeaf rttmonechoadminprobepakpriority; //type: RttMonEchoAdminProbePakPriority
        ydk::YLeaf rttmonechoadminowntpsynctolabs; //type: int32
        ydk::YLeaf rttmonechoadminowntpsynctolpct; //type: int32
        ydk::YLeaf rttmonechoadminowntpsynctoltype; //type: RttMonEchoAdminOWNTPSyncTolType
        ydk::YLeaf rttmonechoadmincallednumber; //type: string
        ydk::YLeaf rttmonechoadmindetectpoint; //type: RttMonOperation
        ydk::YLeaf rttmonechoadmingkregistration; //type: boolean
        ydk::YLeaf rttmonechoadminsourcevoiceport; //type: string
        ydk::YLeaf rttmonechoadmincallduration; //type: int32
        ydk::YLeaf rttmonechoadminlspreplydscp; //type: int32
        ydk::YLeaf rttmonechoadminlspnullshim; //type: boolean
        ydk::YLeaf rttmonechoadmintargetmpid; //type: uint32
        ydk::YLeaf rttmonechoadmintargetdomainname; //type: string
        ydk::YLeaf rttmonechoadmintargetvlan; //type: int32
        ydk::YLeaf rttmonechoadminethernetcos; //type: int32
        ydk::YLeaf rttmonechoadminlspvccvid; //type: int32
        ydk::YLeaf rttmonechoadmintargetevc; //type: string
        ydk::YLeaf rttmonechoadmintargetmepport; //type: boolean
        ydk::YLeaf rttmonechoadminvideotrafficprofile; //type: string
        ydk::YLeaf rttmonechoadmindscp; //type: uint8
        ydk::YLeaf rttmonechoadminreservedsp; //type: RttMonEchoAdminReserveDsp
        ydk::YLeaf rttmonechoadmininputinterface; //type: int32
        ydk::YLeaf rttmonechoadminemulatesourceaddress; //type: binary
        ydk::YLeaf rttmonechoadminemulatesourceport; //type: int32
        ydk::YLeaf rttmonechoadminemulatetargetaddress; //type: binary
        ydk::YLeaf rttmonechoadminemulatetargetport; //type: int32
        ydk::YLeaf rttmonechoadmintargetmacaddress; //type: string
        ydk::YLeaf rttmonechoadminsourcemacaddress; //type: string
        ydk::YLeaf rttmonechoadminsourcempid; //type: uint32
        ydk::YLeaf rttmonechoadminendpointlistname; //type: string
        ydk::YLeaf rttmonechoadminssm; //type: boolean
        ydk::YLeaf rttmonechoadmincontrolretry; //type: uint32
        ydk::YLeaf rttmonechoadmincontroltimeout; //type: uint32
        ydk::YLeaf rttmonechoadminigmptreeinit; //type: uint32
        ydk::YLeaf rttmonechoadminenableburst; //type: boolean
        ydk::YLeaf rttmonechoadminaggburstcycles; //type: int32
        ydk::YLeaf rttmonechoadminlossrationumframes; //type: int32
        ydk::YLeaf rttmonechoadminavailnumframes; //type: int32
        ydk::YLeaf rttmonechoadmintstampoptimization; //type: boolean
        class RttMonEchoAdminLSPFECType;
        class RttMonEchoAdminPrecision;
        class RttMonEchoAdminProbePakPriority;
        class RttMonEchoAdminOWNTPSyncTolType;
        class RttMonEchoAdminReserveDsp;

}; // CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry


class CISCORTTMONMIB::RttMonFileIOAdminTable : public ydk::Entity
{
    public:
        RttMonFileIOAdminTable();
        ~RttMonFileIOAdminTable();

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

        class RttMonFileIOAdminEntry; //type: CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry

        ydk::YList rttmonfileioadminentry;
        
}; // CISCORTTMONMIB::RttMonFileIOAdminTable


class CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry : public ydk::Entity
{
    public:
        RttMonFileIOAdminEntry();
        ~RttMonFileIOAdminEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonfileioadminfilepath; //type: string
        ydk::YLeaf rttmonfileioadminsize; //type: RttMonFileIOAdminSize
        ydk::YLeaf rttmonfileioadminaction; //type: RttMonFileIOAdminAction
        class RttMonFileIOAdminSize;
        class RttMonFileIOAdminAction;

}; // CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry


class CISCORTTMONMIB::RttMonScriptAdminTable : public ydk::Entity
{
    public:
        RttMonScriptAdminTable();
        ~RttMonScriptAdminTable();

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

        class RttMonScriptAdminEntry; //type: CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry

        ydk::YList rttmonscriptadminentry;
        
}; // CISCORTTMONMIB::RttMonScriptAdminTable


class CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry : public ydk::Entity
{
    public:
        RttMonScriptAdminEntry();
        ~RttMonScriptAdminEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonscriptadminname; //type: string
        ydk::YLeaf rttmonscriptadmincmdlineparams; //type: string

}; // CISCORTTMONMIB::RttMonScriptAdminTable::RttMonScriptAdminEntry


class CISCORTTMONMIB::RttMonReactTriggerAdminTable : public ydk::Entity
{
    public:
        RttMonReactTriggerAdminTable();
        ~RttMonReactTriggerAdminTable();

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

        class RttMonReactTriggerAdminEntry; //type: CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry

        ydk::YList rttmonreacttriggeradminentry;
        
}; // CISCORTTMONMIB::RttMonReactTriggerAdminTable


class CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry : public ydk::Entity
{
    public:
        RttMonReactTriggerAdminEntry();
        ~RttMonReactTriggerAdminEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonreacttriggeradminrttmonctrladminindex; //type: int32
        ydk::YLeaf rttmonreacttriggeradminstatus; //type: RowStatus
        ydk::YLeaf rttmonreacttriggeroperstate; //type: RttMonReactTriggerOperState
        class RttMonReactTriggerOperState;

}; // CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry


class CISCORTTMONMIB::RttMonEchoPathAdminTable : public ydk::Entity
{
    public:
        RttMonEchoPathAdminTable();
        ~RttMonEchoPathAdminTable();

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

        class RttMonEchoPathAdminEntry; //type: CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry

        ydk::YList rttmonechopathadminentry;
        
}; // CISCORTTMONMIB::RttMonEchoPathAdminTable


class CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry : public ydk::Entity
{
    public:
        RttMonEchoPathAdminEntry();
        ~RttMonEchoPathAdminEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonechopathadminhopindex; //type: int32
        ydk::YLeaf rttmonechopathadminhopaddress; //type: binary

}; // CISCORTTMONMIB::RttMonEchoPathAdminTable::RttMonEchoPathAdminEntry


class CISCORTTMONMIB::RttMonGrpScheduleAdminTable : public ydk::Entity
{
    public:
        RttMonGrpScheduleAdminTable();
        ~RttMonGrpScheduleAdminTable();

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

        class RttMonGrpScheduleAdminEntry; //type: CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry

        ydk::YList rttmongrpscheduleadminentry;
        
}; // CISCORTTMONMIB::RttMonGrpScheduleAdminTable


class CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry : public ydk::Entity
{
    public:
        RttMonGrpScheduleAdminEntry();
        ~RttMonGrpScheduleAdminEntry();

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

        ydk::YLeaf rttmongrpscheduleadminindex; //type: int32
        ydk::YLeaf rttmongrpscheduleadminprobes; //type: string
        ydk::YLeaf rttmongrpscheduleadminperiod; //type: int32
        ydk::YLeaf rttmongrpscheduleadminfrequency; //type: int32
        ydk::YLeaf rttmongrpscheduleadminlife; //type: int32
        ydk::YLeaf rttmongrpscheduleadminageout; //type: int32
        ydk::YLeaf rttmongrpscheduleadminstatus; //type: RowStatus
        ydk::YLeaf rttmongrpscheduleadminfreqmax; //type: int32
        ydk::YLeaf rttmongrpscheduleadminfreqmin; //type: int32
        ydk::YLeaf rttmongrpscheduleadminstarttime; //type: int32
        ydk::YLeaf rttmongrpscheduleadminadd; //type: boolean
        ydk::YLeaf rttmongrpscheduleadmindelete; //type: boolean
        ydk::YLeaf rttmongrpscheduleadminreset; //type: boolean

}; // CISCORTTMONMIB::RttMonGrpScheduleAdminTable::RttMonGrpScheduleAdminEntry


class CISCORTTMONMIB::RttMplsVpnMonCtrlTable : public ydk::Entity
{
    public:
        RttMplsVpnMonCtrlTable();
        ~RttMplsVpnMonCtrlTable();

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

        class RttMplsVpnMonCtrlEntry; //type: CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry

        ydk::YList rttmplsvpnmonctrlentry;
        
}; // CISCORTTMONMIB::RttMplsVpnMonCtrlTable


class CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry : public ydk::Entity
{
    public:
        RttMplsVpnMonCtrlEntry();
        ~RttMplsVpnMonCtrlEntry();

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

        ydk::YLeaf rttmplsvpnmonctrlindex; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlrtttype; //type: RttMplsVpnMonRttType
        ydk::YLeaf rttmplsvpnmonctrlvrfname; //type: binary
        ydk::YLeaf rttmplsvpnmonctrltag; //type: string
        ydk::YLeaf rttmplsvpnmonctrlthreshold; //type: int32
        ydk::YLeaf rttmplsvpnmonctrltimeout; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlscaninterval; //type: int32
        ydk::YLeaf rttmplsvpnmonctrldelscanfactor; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlexp; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlrequestsize; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlverifydata; //type: boolean
        ydk::YLeaf rttmplsvpnmonctrlstoragetype; //type: StorageType
        ydk::YLeaf rttmplsvpnmonctrlprobelist; //type: string
        ydk::YLeaf rttmplsvpnmonctrlstatus; //type: RowStatus
        ydk::YLeaf rttmplsvpnmonctrllpd; //type: boolean
        ydk::YLeaf rttmplsvpnmonctrllpdgrplist; //type: string
        ydk::YLeaf rttmplsvpnmonctrllpdcomptime; //type: int32
        ydk::YLeaf rttmplsvpnmontypeinterval; //type: int32
        ydk::YLeaf rttmplsvpnmontypenumpackets; //type: int32
        ydk::YLeaf rttmplsvpnmontypedestport; //type: int32
        ydk::YLeaf rttmplsvpnmontypesecfreqtype; //type: RttMplsVpnMonTypeSecFreqType
        ydk::YLeaf rttmplsvpnmontypesecfreqvalue; //type: int32
        ydk::YLeaf rttmplsvpnmontypelspselector; //type: binary
        ydk::YLeaf rttmplsvpnmontypelspreplymode; //type: RttMonLSPPingReplyMode
        ydk::YLeaf rttmplsvpnmontypelspttl; //type: int32
        ydk::YLeaf rttmplsvpnmontypelspreplydscp; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdmaxsessions; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdsesstimeout; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdechotimeout; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdechointerval; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdechonullshim; //type: boolean
        ydk::YLeaf rttmplsvpnmontypelpdscanperiod; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdstathours; //type: int32
        ydk::YLeaf rttmplsvpnmonschedulerttstarttime; //type: uint32
        ydk::YLeaf rttmplsvpnmonscheduleperiod; //type: int32
        ydk::YLeaf rttmplsvpnmonschedulefrequency; //type: int32
        ydk::YLeaf rttmplsvpnmonreactconnectionenable; //type: boolean
        ydk::YLeaf rttmplsvpnmonreacttimeoutenable; //type: boolean
        ydk::YLeaf rttmplsvpnmonreactthresholdtype; //type: RttMplsVpnMonReactThresholdType
        ydk::YLeaf rttmplsvpnmonreactthresholdcount; //type: int32
        ydk::YLeaf rttmplsvpnmonreactactiontype; //type: RttMplsVpnMonReactActionType
        ydk::YLeaf rttmplsvpnmonreactlpdnotifytype; //type: RttMplsVpnMonReactLpdNotifyType
        ydk::YLeaf rttmplsvpnmonreactlpdretrycount; //type: int32
        class RttMplsVpnMonTypeSecFreqType;
        class RttMplsVpnMonReactThresholdType;
        class RttMplsVpnMonReactActionType;
        class RttMplsVpnMonReactLpdNotifyType;

}; // CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry


class CISCORTTMONMIB::RttMonReactTable : public ydk::Entity
{
    public:
        RttMonReactTable();
        ~RttMonReactTable();

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

        class RttMonReactEntry; //type: CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry

        ydk::YList rttmonreactentry;
        
}; // CISCORTTMONMIB::RttMonReactTable


class CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry : public ydk::Entity
{
    public:
        RttMonReactEntry();
        ~RttMonReactEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonreactconfigindex; //type: int32
        ydk::YLeaf rttmonreactvar; //type: RttMonReactVar
        ydk::YLeaf rttmonreactthresholdtype; //type: RttMonReactThresholdType
        ydk::YLeaf rttmonreactactiontype; //type: RttMonReactActionType
        ydk::YLeaf rttmonreactthresholdrising; //type: int32
        ydk::YLeaf rttmonreactthresholdfalling; //type: int32
        ydk::YLeaf rttmonreactthresholdcountx; //type: int32
        ydk::YLeaf rttmonreactthresholdcounty; //type: int32
        ydk::YLeaf rttmonreactvalue; //type: int32
        ydk::YLeaf rttmonreactoccurred; //type: boolean
        ydk::YLeaf rttmonreactstatus; //type: RowStatus
        class RttMonReactThresholdType;
        class RttMonReactActionType;

}; // CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry


class CISCORTTMONMIB::RttMonGeneratedOperTable : public ydk::Entity
{
    public:
        RttMonGeneratedOperTable();
        ~RttMonGeneratedOperTable();

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

        class RttMonGeneratedOperEntry; //type: CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry

        ydk::YList rttmongeneratedoperentry;
        
}; // CISCORTTMONMIB::RttMonGeneratedOperTable


class CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry : public ydk::Entity
{
    public:
        RttMonGeneratedOperEntry();
        ~RttMonGeneratedOperEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmongeneratedoperrespipaddrtype; //type: InetAddressType
        ydk::YLeaf rttmongeneratedoperrespipaddr; //type: binary
        ydk::YLeaf rttmongeneratedoperctrladminindex; //type: uint32

}; // CISCORTTMONMIB::RttMonGeneratedOperTable::RttMonGeneratedOperEntry


class CISCORTTMONMIB::RttMonStatsCaptureTable : public ydk::Entity
{
    public:
        RttMonStatsCaptureTable();
        ~RttMonStatsCaptureTable();

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

        class RttMonStatsCaptureEntry; //type: CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry

        ydk::YList rttmonstatscaptureentry;
        
}; // CISCORTTMONMIB::RttMonStatsCaptureTable


class CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry : public ydk::Entity
{
    public:
        RttMonStatsCaptureEntry();
        ~RttMonStatsCaptureEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonstatscapturestarttimeindex; //type: uint32
        ydk::YLeaf rttmonstatscapturepathindex; //type: int32
        ydk::YLeaf rttmonstatscapturehopindex; //type: int32
        ydk::YLeaf rttmonstatscapturedistindex; //type: int32
        ydk::YLeaf rttmonstatscapturecompletions; //type: int32
        ydk::YLeaf rttmonstatscaptureoverthresholds; //type: int32
        ydk::YLeaf rttmonstatscapturesumcompletiontime; //type: uint32
        ydk::YLeaf rttmonstatscapturesumcompletiontime2low; //type: uint32
        ydk::YLeaf rttmonstatscapturesumcompletiontime2high; //type: uint32
        ydk::YLeaf rttmonstatscapturecompletiontimemax; //type: uint32
        ydk::YLeaf rttmonstatscapturecompletiontimemin; //type: uint32

}; // CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry


class CISCORTTMONMIB::RttMonStatsCollectTable : public ydk::Entity
{
    public:
        RttMonStatsCollectTable();
        ~RttMonStatsCollectTable();

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

        class RttMonStatsCollectEntry; //type: CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry

        ydk::YList rttmonstatscollectentry;
        
}; // CISCORTTMONMIB::RttMonStatsCollectTable


class CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry : public ydk::Entity
{
    public:
        RttMonStatsCollectEntry();
        ~RttMonStatsCollectEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::rttmonstatscapturestarttimeindex)
        ydk::YLeaf rttmonstatscapturestarttimeindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::rttmonstatscapturepathindex)
        ydk::YLeaf rttmonstatscapturepathindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::rttmonstatscapturehopindex)
        ydk::YLeaf rttmonstatscapturehopindex;
        ydk::YLeaf rttmonstatscollectnumdisconnects; //type: int32
        ydk::YLeaf rttmonstatscollecttimeouts; //type: int32
        ydk::YLeaf rttmonstatscollectbusies; //type: int32
        ydk::YLeaf rttmonstatscollectnoconnections; //type: int32
        ydk::YLeaf rttmonstatscollectdrops; //type: int32
        ydk::YLeaf rttmonstatscollectsequenceerrors; //type: int32
        ydk::YLeaf rttmonstatscollectverifyerrors; //type: int32
        ydk::YLeaf rttmonstatscollectaddress; //type: binary
        ydk::YLeaf rttmoncontrolenableerrors; //type: int32
        ydk::YLeaf rttmonstatsretrieveerrors; //type: int32
        ydk::YLeaf rttmonstatscollectctrlenerrors; //type: int32
        ydk::YLeaf rttmonstatscollectretrieveerrors; //type: int32

}; // CISCORTTMONMIB::RttMonStatsCollectTable::RttMonStatsCollectEntry


class CISCORTTMONMIB::RttMonStatsTotalsTable : public ydk::Entity
{
    public:
        RttMonStatsTotalsTable();
        ~RttMonStatsTotalsTable();

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

        class RttMonStatsTotalsEntry; //type: CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry

        ydk::YList rttmonstatstotalsentry;
        
}; // CISCORTTMONMIB::RttMonStatsTotalsTable


class CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry : public ydk::Entity
{
    public:
        RttMonStatsTotalsEntry();
        ~RttMonStatsTotalsEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonStatsCaptureTable::RttMonStatsCaptureEntry::rttmonstatscapturestarttimeindex)
        ydk::YLeaf rttmonstatscapturestarttimeindex;
        ydk::YLeaf rttmonstatstotalselapsedtime; //type: int32
        ydk::YLeaf rttmonstatstotalsinitiations; //type: int32

}; // CISCORTTMONMIB::RttMonStatsTotalsTable::RttMonStatsTotalsEntry


class CISCORTTMONMIB::RttMonHTTPStatsTable : public ydk::Entity
{
    public:
        RttMonHTTPStatsTable();
        ~RttMonHTTPStatsTable();

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

        class RttMonHTTPStatsEntry; //type: CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry

        ydk::YList rttmonhttpstatsentry;
        
}; // CISCORTTMONMIB::RttMonHTTPStatsTable


class CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry : public ydk::Entity
{
    public:
        RttMonHTTPStatsEntry();
        ~RttMonHTTPStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonhttpstatsstarttimeindex; //type: uint32
        ydk::YLeaf rttmonhttpstatscompletions; //type: uint32
        ydk::YLeaf rttmonhttpstatsoverthresholds; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttsum2low; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttsum2high; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttmin; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttmax; //type: uint32
        ydk::YLeaf rttmonhttpstatsdnsrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatstcpconnectrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatstransactionrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatsmessagebodyoctetssum; //type: uint32
        ydk::YLeaf rttmonhttpstatsdnsservertimeout; //type: uint32
        ydk::YLeaf rttmonhttpstatstcpconnecttimeout; //type: uint32
        ydk::YLeaf rttmonhttpstatstransactiontimeout; //type: uint32
        ydk::YLeaf rttmonhttpstatsdnsqueryerror; //type: uint32
        ydk::YLeaf rttmonhttpstatshttperror; //type: uint32
        ydk::YLeaf rttmonhttpstatserror; //type: uint32
        ydk::YLeaf rttmonhttpstatsbusies; //type: uint32

}; // CISCORTTMONMIB::RttMonHTTPStatsTable::RttMonHTTPStatsEntry


class CISCORTTMONMIB::RttMonJitterStatsTable : public ydk::Entity
{
    public:
        RttMonJitterStatsTable();
        ~RttMonJitterStatsTable();

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

        class RttMonJitterStatsEntry; //type: CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry

        ydk::YList rttmonjitterstatsentry;
        
}; // CISCORTTMONMIB::RttMonJitterStatsTable


class CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry : public ydk::Entity
{
    public:
        RttMonJitterStatsEntry();
        ~RttMonJitterStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonjitterstatsstarttimeindex; //type: uint32
        ydk::YLeaf rttmonjitterstatscompletions; //type: uint32
        ydk::YLeaf rttmonjitterstatsoverthresholds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofrtt; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsum; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsum2low; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsum2high; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttmin; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttmax; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivessdlow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivessdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativessdlow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativessdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivesdslow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivesdshigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativesdslow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativesdshigh; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketlosssd; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketlossds; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketoutofsequence; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketmia; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketlatearrival; //type: uint32
        ydk::YLeaf rttmonjitterstatserror; //type: uint32
        ydk::YLeaf rttmonjitterstatsbusies; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumsd; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2sdlow; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2sdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowminsd; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxsd; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumds; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2dslow; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2dshigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowminds; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofow; //type: uint32
        ydk::YLeaf rttmonjitterstatsowminsdnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxsdnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmindsnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxdsnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofmos; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofmos; //type: uint32
        ydk::YLeaf rttmonjitterstatsminoficpif; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxoficpif; //type: uint32
        ydk::YLeaf rttmonjitterstatsiajout; //type: uint32
        ydk::YLeaf rttmonjitterstatsiajin; //type: uint32
        ydk::YLeaf rttmonjitterstatsavgjitter; //type: uint32
        ydk::YLeaf rttmonjitterstatsavgjittersd; //type: uint32
        ydk::YLeaf rttmonjitterstatsavgjitterds; //type: uint32
        ydk::YLeaf rttmonjitterstatsunsyncrts; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsumhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumsdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumdshigh; //type: uint32

}; // CISCORTTMONMIB::RttMonJitterStatsTable::RttMonJitterStatsEntry


class CISCORTTMONMIB::RttMonLpdGrpStatsTable : public ydk::Entity
{
    public:
        RttMonLpdGrpStatsTable();
        ~RttMonLpdGrpStatsTable();

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

        class RttMonLpdGrpStatsEntry; //type: CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry

        ydk::YList rttmonlpdgrpstatsentry;
        
}; // CISCORTTMONMIB::RttMonLpdGrpStatsTable


class CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry : public ydk::Entity
{
    public:
        RttMonLpdGrpStatsEntry();
        ~RttMonLpdGrpStatsEntry();

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

        ydk::YLeaf rttmonlpdgrpstatsgroupindex; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsstarttimeindex; //type: uint32
        ydk::YLeaf rttmonlpdgrpstatstargetpe; //type: binary
        ydk::YLeaf rttmonlpdgrpstatsnumofpass; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsnumoffail; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsnumoftimeout; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsavgrtt; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsminrtt; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsmaxrtt; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsminnumpaths; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsmaxnumpaths; //type: int32
        ydk::YLeaf rttmonlpdgrpstatslpdstarttime; //type: uint32
        ydk::YLeaf rttmonlpdgrpstatslpdfailoccurred; //type: boolean
        ydk::YLeaf rttmonlpdgrpstatslpdfailcause; //type: RttMplsVpnMonLpdFailureSense
        ydk::YLeaf rttmonlpdgrpstatslpdcomptime; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsgroupstatus; //type: RttMplsVpnMonLpdGrpStatus
        ydk::YLeaf rttmonlpdgrpstatsgroupprobeindex; //type: int32
        ydk::YLeaf rttmonlpdgrpstatspathids; //type: string
        ydk::YLeaf rttmonlpdgrpstatsprobestatus; //type: string
        ydk::YLeaf rttmonlpdgrpstatsresettime; //type: uint32

}; // CISCORTTMONMIB::RttMonLpdGrpStatsTable::RttMonLpdGrpStatsEntry


class CISCORTTMONMIB::RttMonHistoryCollectionTable : public ydk::Entity
{
    public:
        RttMonHistoryCollectionTable();
        ~RttMonHistoryCollectionTable();

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

        class RttMonHistoryCollectionEntry; //type: CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry

        ydk::YList rttmonhistorycollectionentry;
        
}; // CISCORTTMONMIB::RttMonHistoryCollectionTable


class CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry : public ydk::Entity
{
    public:
        RttMonHistoryCollectionEntry();
        ~RttMonHistoryCollectionEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonhistorycollectionlifeindex; //type: int32
        ydk::YLeaf rttmonhistorycollectionbucketindex; //type: int32
        ydk::YLeaf rttmonhistorycollectionsampleindex; //type: int32
        ydk::YLeaf rttmonhistorycollectionsampletime; //type: uint32
        ydk::YLeaf rttmonhistorycollectionaddress; //type: binary
        ydk::YLeaf rttmonhistorycollectioncompletiontime; //type: uint32
        ydk::YLeaf rttmonhistorycollectionsense; //type: RttResponseSense
        ydk::YLeaf rttmonhistorycollectionapplspecificsense; //type: int32
        ydk::YLeaf rttmonhistorycollectionsensedescription; //type: string

}; // CISCORTTMONMIB::RttMonHistoryCollectionTable::RttMonHistoryCollectionEntry


class CISCORTTMONMIB::RttMonLatestHTTPOperTable : public ydk::Entity
{
    public:
        RttMonLatestHTTPOperTable();
        ~RttMonLatestHTTPOperTable();

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

        class RttMonLatestHTTPOperEntry; //type: CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry

        ydk::YList rttmonlatesthttpoperentry;
        
}; // CISCORTTMONMIB::RttMonLatestHTTPOperTable


class CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry : public ydk::Entity
{
    public:
        RttMonLatestHTTPOperEntry();
        ~RttMonLatestHTTPOperEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonlatesthttpoperrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpoperdnsrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpopertcpconnectrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpopertransactionrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpopermessagebodyoctets; //type: uint32
        ydk::YLeaf rttmonlatesthttpopersense; //type: RttResponseSense
        ydk::YLeaf rttmonlatesthttperrorsensedescription; //type: string

}; // CISCORTTMONMIB::RttMonLatestHTTPOperTable::RttMonLatestHTTPOperEntry


class CISCORTTMONMIB::RttMonLatestJitterOperTable : public ydk::Entity
{
    public:
        RttMonLatestJitterOperTable();
        ~RttMonLatestJitterOperTable();

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

        class RttMonLatestJitterOperEntry; //type: CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry

        ydk::YList rttmonlatestjitteroperentry;
        
}; // CISCORTTMONMIB::RttMonLatestJitterOperTable


class CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry : public ydk::Entity
{
    public:
        RttMonLatestJitterOperEntry();
        ~RttMonLatestJitterOperEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_RTTMON_MIB::CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonlatestjitteropernumofrtt; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsum; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsum2; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttmin; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttmax; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2positivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2negativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2positivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2negativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketlosssd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketlossds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketoutofsequence; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketmia; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketlatearrival; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersense; //type: RttResponseSense
        ydk::YLeaf rttmonlatestjittererrorsensedescription; //type: string
        ydk::YLeaf rttmonlatestjitteroperowsumsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2sd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowminsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowmaxsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsumds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2ds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowminds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowmaxds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofow; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermos; //type: uint32
        ydk::YLeaf rttmonlatestjitteropericpif; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperiajout; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperiajin; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperavgjitter; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperavgsdj; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperavgdsj; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowavgsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowavgds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperntpstate; //type: RttMonLatestJitterOperNTPState
        ydk::YLeaf rttmonlatestjitteroperunsyncrts; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsumhigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsum2high; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsumsdhigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2sdhigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsumdshigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2dshigh; //type: uint32
        class RttMonLatestJitterOperNTPState;

}; // CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry

class CISCORTTMONMIB::RttMonApplPreConfigedTable::RttMonApplPreConfigedEntry::RttMonApplPreConfigedType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filePath;
        static const ydk::Enum::YLeaf scriptName;

        static int get_enum_value(const std::string & name) {
            if (name == "filePath") return 1;
            if (name == "scriptName") return 2;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 1;
            if (name == "immediate") return 2;
            if (name == "consecutive") return 3;
            if (name == "xOfy") return 4;
            if (name == "average") return 5;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonReactAdminActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf nmvtOnly;
        static const ydk::Enum::YLeaf triggerOnly;
        static const ydk::Enum::YLeaf trapAndNmvt;
        static const ydk::Enum::YLeaf trapAndTrigger;
        static const ydk::Enum::YLeaf nmvtAndTrigger;
        static const ydk::Enum::YLeaf trapNmvtAndTrigger;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "trapOnly") return 2;
            if (name == "nmvtOnly") return 3;
            if (name == "triggerOnly") return 4;
            if (name == "trapAndNmvt") return 5;
            if (name == "trapAndTrigger") return 6;
            if (name == "nmvtAndTrigger") return 7;
            if (name == "trapNmvtAndTrigger") return 8;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonHistoryAdminFilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "all") return 2;
            if (name == "overThreshold") return 3;
            if (name == "failures") return 4;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonCtrlAdminTable::RttMonCtrlAdminEntry::RttMonCtrlOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf orderlyStop;
        static const ydk::Enum::YLeaf immediateStop;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf restart;

        static int get_enum_value(const std::string & name) {
            if (name == "reset") return 1;
            if (name == "orderlyStop") return 2;
            if (name == "immediateStop") return 3;
            if (name == "pending") return 4;
            if (name == "inactive") return 5;
            if (name == "active") return 6;
            if (name == "restart") return 7;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminLSPFECType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldpIpv4Prefix;

        static int get_enum_value(const std::string & name) {
            if (name == "ldpIpv4Prefix") return 1;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminPrecision : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf microseconds;

        static int get_enum_value(const std::string & name) {
            if (name == "milliseconds") return 1;
            if (name == "microseconds") return 2;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminProbePakPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf high;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 1;
            if (name == "high") return 2;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminOWNTPSyncTolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percent;
        static const ydk::Enum::YLeaf absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "percent") return 1;
            if (name == "absolute") return 2;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonEchoAdminTable::RttMonEchoAdminEntry::RttMonEchoAdminReserveDsp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf be;
        static const ydk::Enum::YLeaf gs;
        static const ydk::Enum::YLeaf na;

        static int get_enum_value(const std::string & name) {
            if (name == "be") return 1;
            if (name == "gs") return 2;
            if (name == "na") return 3;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf n256;
        static const ydk::Enum::YLeaf n1k;
        static const ydk::Enum::YLeaf n64k;
        static const ydk::Enum::YLeaf n128k;
        static const ydk::Enum::YLeaf n256k;

        static int get_enum_value(const std::string & name) {
            if (name == "n256") return 1;
            if (name == "n1k") return 2;
            if (name == "n64k") return 3;
            if (name == "n128k") return 4;
            if (name == "n256k") return 5;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonFileIOAdminTable::RttMonFileIOAdminEntry::RttMonFileIOAdminAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf write;
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf writeRead;

        static int get_enum_value(const std::string & name) {
            if (name == "write") return 1;
            if (name == "read") return 2;
            if (name == "writeRead") return 3;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonReactTriggerAdminTable::RttMonReactTriggerAdminEntry::RttMonReactTriggerOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf pending;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "pending") return 2;
            return -1;
        }
};

class CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonTypeSecFreqType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf connectionLoss;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "timeout") return 2;
            if (name == "connectionLoss") return 3;
            if (name == "both") return 4;
            return -1;
        }
};

class CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 1;
            if (name == "immediate") return 2;
            if (name == "consecutive") return 3;
            return -1;
        }
};

class CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapOnly;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "trapOnly") return 2;
            return -1;
        }
};

class CISCORTTMONMIB::RttMplsVpnMonCtrlTable::RttMplsVpnMonCtrlEntry::RttMplsVpnMonReactLpdNotifyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lpdPathDiscovery;
        static const ydk::Enum::YLeaf lpdGroupStatus;
        static const ydk::Enum::YLeaf lpdAll;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "lpdPathDiscovery") return 2;
            if (name == "lpdGroupStatus") return 3;
            if (name == "lpdAll") return 4;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 1;
            if (name == "immediate") return 2;
            if (name == "consecutive") return 3;
            if (name == "xOfy") return 4;
            if (name == "average") return 5;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonReactTable::RttMonReactEntry::RttMonReactActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf triggerOnly;
        static const ydk::Enum::YLeaf trapAndTrigger;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "trapOnly") return 2;
            if (name == "triggerOnly") return 3;
            if (name == "trapAndTrigger") return 4;
            return -1;
        }
};

class CISCORTTMONMIB::RttMonLatestJitterOperTable::RttMonLatestJitterOperEntry::RttMonLatestJitterOperNTPState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf outOfSync;

        static int get_enum_value(const std::string & name) {
            if (name == "sync") return 1;
            if (name == "outOfSync") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_RTTMON_MIB_ */

