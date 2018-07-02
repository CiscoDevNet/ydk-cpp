#ifndef _CISCO_SESS_BORDER_CTRLR_STATS_MIB_
#define _CISCO_SESS_BORDER_CTRLR_STATS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_SESS_BORDER_CTRLR_STATS_MIB {

class CISCOSESSBORDERCTRLRSTATSMIB : public ydk::Entity
{
    public:
        CISCOSESSBORDERCTRLRSTATSMIB();
        ~CISCOSESSBORDERCTRLRSTATSMIB();

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

        class CsbRadiusStatsTable; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbRadiusStatsTable
        class CsbRfBillRealmStatsTable; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbRfBillRealmStatsTable
        class CsbSIPMthdCurrentStatsTable; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdCurrentStatsTable
        class CsbSIPMthdHistoryStatsTable; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdHistoryStatsTable
        class CsbSIPMthdRCCurrentStatsTable; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCCurrentStatsTable
        class CsbSIPMthdRCHistoryStatsTable; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCHistoryStatsTable

        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::CsbRadiusStatsTable> csbradiusstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::CsbRfBillRealmStatsTable> csbrfbillrealmstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdCurrentStatsTable> csbsipmthdcurrentstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdHistoryStatsTable> csbsipmthdhistorystatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCCurrentStatsTable> csbsipmthdrccurrentstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_STATS_MIB::CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCHistoryStatsTable> csbsipmthdrchistorystatstable;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB


class CISCOSESSBORDERCTRLRSTATSMIB::CsbRadiusStatsTable : public ydk::Entity
{
    public:
        CsbRadiusStatsTable();
        ~CsbRadiusStatsTable();

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

        class CsbRadiusStatsEntry; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbRadiusStatsTable::CsbRadiusStatsEntry

        ydk::YList csbradiusstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbRadiusStatsTable


class CISCOSESSBORDERCTRLRSTATSMIB::CsbRadiusStatsTable::CsbRadiusStatsEntry : public ydk::Entity
{
    public:
        CsbRadiusStatsEntry();
        ~CsbRadiusStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbradiusstatsentindex; //type: uint32
        ydk::YLeaf csbradiusstatsclientname; //type: string
        ydk::YLeaf csbradiusstatsclienttype; //type: CiscoSbcRadiusClientType
        ydk::YLeaf csbradiusstatssrvrname; //type: string
        ydk::YLeaf csbradiusstatsacsreqs; //type: uint64
        ydk::YLeaf csbradiusstatsacsrtrns; //type: uint64
        ydk::YLeaf csbradiusstatsacsaccpts; //type: uint64
        ydk::YLeaf csbradiusstatsacsrejects; //type: uint64
        ydk::YLeaf csbradiusstatsacschalls; //type: uint64
        ydk::YLeaf csbradiusstatsactreqs; //type: uint64
        ydk::YLeaf csbradiusstatsactretrans; //type: uint64
        ydk::YLeaf csbradiusstatsactrsps; //type: uint64
        ydk::YLeaf csbradiusstatsmalformedrsps; //type: uint64
        ydk::YLeaf csbradiusstatsbadauths; //type: uint64
        ydk::YLeaf csbradiusstatspending; //type: uint32
        ydk::YLeaf csbradiusstatstimeouts; //type: uint64
        ydk::YLeaf csbradiusstatsunknowntype; //type: uint64
        ydk::YLeaf csbradiusstatsdropped; //type: uint64

}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbRadiusStatsTable::CsbRadiusStatsEntry


class CISCOSESSBORDERCTRLRSTATSMIB::CsbRfBillRealmStatsTable : public ydk::Entity
{
    public:
        CsbRfBillRealmStatsTable();
        ~CsbRfBillRealmStatsTable();

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

        class CsbRfBillRealmStatsEntry; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbRfBillRealmStatsTable::CsbRfBillRealmStatsEntry

        ydk::YList csbrfbillrealmstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbRfBillRealmStatsTable


class CISCOSESSBORDERCTRLRSTATSMIB::CsbRfBillRealmStatsTable::CsbRfBillRealmStatsEntry : public ydk::Entity
{
    public:
        CsbRfBillRealmStatsEntry();
        ~CsbRfBillRealmStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbrfbillrealmstatsindex; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsrealmname; //type: string
        ydk::YLeaf csbrfbillrealmstatstotalstartacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatstotalinterimacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatstotalstopacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatstotaleventacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssuccstartacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssuccinterimacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssuccstopacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatssucceventacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfailstartacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfailinterimacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfailstopacrs; //type: uint32
        ydk::YLeaf csbrfbillrealmstatsfaileventacrs; //type: uint32

}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbRfBillRealmStatsTable::CsbRfBillRealmStatsEntry


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdCurrentStatsTable : public ydk::Entity
{
    public:
        CsbSIPMthdCurrentStatsTable();
        ~CsbSIPMthdCurrentStatsTable();

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

        class CsbSIPMthdCurrentStatsEntry; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdCurrentStatsTable::CsbSIPMthdCurrentStatsEntry

        ydk::YList csbsipmthdcurrentstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdCurrentStatsTable


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdCurrentStatsTable::CsbSIPMthdCurrentStatsEntry : public ydk::Entity
{
    public:
        CsbSIPMthdCurrentStatsEntry();
        ~CsbSIPMthdCurrentStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdcurrentstatsadjname; //type: string
        ydk::YLeaf csbsipmthdcurrentstatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdcurrentstatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbsipmthdcurrentstatsmethodname; //type: string
        ydk::YLeaf csbsipmthdcurrentstatsreqin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsreqout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp1xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp1xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp2xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp2xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp3xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp3xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp4xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp4xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp5xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp5xxout; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp6xxin; //type: uint32
        ydk::YLeaf csbsipmthdcurrentstatsresp6xxout; //type: uint32

}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdCurrentStatsTable::CsbSIPMthdCurrentStatsEntry


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdHistoryStatsTable : public ydk::Entity
{
    public:
        CsbSIPMthdHistoryStatsTable();
        ~CsbSIPMthdHistoryStatsTable();

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

        class CsbSIPMthdHistoryStatsEntry; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdHistoryStatsTable::CsbSIPMthdHistoryStatsEntry

        ydk::YList csbsipmthdhistorystatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdHistoryStatsTable


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdHistoryStatsTable::CsbSIPMthdHistoryStatsEntry : public ydk::Entity
{
    public:
        CsbSIPMthdHistoryStatsEntry();
        ~CsbSIPMthdHistoryStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdhistorystatsadjname; //type: string
        ydk::YLeaf csbsipmthdhistorystatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdhistorystatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbsipmthdhistorystatsmethodname; //type: string
        ydk::YLeaf csbsipmthdhistorystatsreqin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsreqout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp1xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp1xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp2xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp2xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp3xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp3xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp4xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp4xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp5xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp5xxout; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp6xxin; //type: uint32
        ydk::YLeaf csbsipmthdhistorystatsresp6xxout; //type: uint32

}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdHistoryStatsTable::CsbSIPMthdHistoryStatsEntry


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCCurrentStatsTable : public ydk::Entity
{
    public:
        CsbSIPMthdRCCurrentStatsTable();
        ~CsbSIPMthdRCCurrentStatsTable();

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

        class CsbSIPMthdRCCurrentStatsEntry; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCCurrentStatsTable::CsbSIPMthdRCCurrentStatsEntry

        ydk::YList csbsipmthdrccurrentstatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCCurrentStatsTable


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCCurrentStatsTable::CsbSIPMthdRCCurrentStatsEntry : public ydk::Entity
{
    public:
        CsbSIPMthdRCCurrentStatsEntry();
        ~CsbSIPMthdRCCurrentStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdrccurrentstatsadjname; //type: string
        ydk::YLeaf csbsipmthdrccurrentstatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdrccurrentstatsrespcode; //type: uint32
        ydk::YLeaf csbsipmthdrccurrentstatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbsipmthdrccurrentstatsmethodname; //type: string
        ydk::YLeaf csbsipmthdrccurrentstatsrespin; //type: uint32
        ydk::YLeaf csbsipmthdrccurrentstatsrespout; //type: uint32

}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCCurrentStatsTable::CsbSIPMthdRCCurrentStatsEntry


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCHistoryStatsTable : public ydk::Entity
{
    public:
        CsbSIPMthdRCHistoryStatsTable();
        ~CsbSIPMthdRCHistoryStatsTable();

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

        class CsbSIPMthdRCHistoryStatsEntry; //type: CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCHistoryStatsTable::CsbSIPMthdRCHistoryStatsEntry

        ydk::YList csbsipmthdrchistorystatsentry;
        
}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCHistoryStatsTable


class CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCHistoryStatsTable::CsbSIPMthdRCHistoryStatsEntry : public ydk::Entity
{
    public:
        CsbSIPMthdRCHistoryStatsEntry();
        ~CsbSIPMthdRCHistoryStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbsipmthdrchistorystatsadjname; //type: string
        ydk::YLeaf csbsipmthdrchistorystatsmethod; //type: CiscoSbcSIPMethod
        ydk::YLeaf csbsipmthdrchistorystatsrespcode; //type: uint32
        ydk::YLeaf csbsipmthdrchistorystatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbsipmthdrchistorystatsmethodname; //type: string
        ydk::YLeaf csbsipmthdrchistorystatsrespin; //type: uint32
        ydk::YLeaf csbsipmthdrchistorystatsrespout; //type: uint32

}; // CISCOSESSBORDERCTRLRSTATSMIB::CsbSIPMthdRCHistoryStatsTable::CsbSIPMthdRCHistoryStatsEntry

class CiscoSbcSIPMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ack;
        static const ydk::Enum::YLeaf bye;
        static const ydk::Enum::YLeaf cancel;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf invite;
        static const ydk::Enum::YLeaf message;
        static const ydk::Enum::YLeaf notify;
        static const ydk::Enum::YLeaf options;
        static const ydk::Enum::YLeaf prack;
        static const ydk::Enum::YLeaf refer;
        static const ydk::Enum::YLeaf register_;
        static const ydk::Enum::YLeaf subscribe;
        static const ydk::Enum::YLeaf update;

};

class CiscoSbcRadiusClientType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf authentication;
        static const ydk::Enum::YLeaf accounting;

};


}
}

#endif /* _CISCO_SESS_BORDER_CTRLR_STATS_MIB_ */

