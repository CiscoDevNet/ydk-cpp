#ifndef _CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB_
#define _CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB {

class CISCOSESSBORDERCTRLRCALLSTATSMIB : public ydk::Entity
{
    public:
        CISCOSESSBORDERCTRLRCALLSTATSMIB();
        ~CISCOSESSBORDERCTRLRCALLSTATSMIB();

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

        class CsbCallStatsInstanceTable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable
        class CsbCallStatsTable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable
        class CsbCurrPeriodicStatsTable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable
        class CsbHistoryStatsTable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable
        class CsbPerFlowStatsTable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable
        class CsbH248StatsTable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable
        class CsbH248StatsRev1Table; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table

        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable> csbcallstatsinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable> csbcallstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable> csbcurrperiodicstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable> csbhistorystatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable> csbperflowstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable> csbh248statstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table> csbh248statsrev1table;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable : public ydk::Entity
{
    public:
        CsbCallStatsInstanceTable();
        ~CsbCallStatsInstanceTable();

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

        class CsbCallStatsInstanceEntry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry

        ydk::YList csbcallstatsinstanceentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry : public ydk::Entity
{
    public:
        CsbCallStatsInstanceEntry();
        ~CsbCallStatsInstanceEntry();

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

        ydk::YLeaf csbcallstatsinstanceindex; //type: uint32
        ydk::YLeaf csbcallstatsinstancephysicalindex; //type: int32

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsInstanceTable::CsbCallStatsInstanceEntry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable : public ydk::Entity
{
    public:
        CsbCallStatsTable();
        ~CsbCallStatsTable();

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

        class CsbCallStatsEntry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry

        ydk::YList csbcallstatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry : public ydk::Entity
{
    public:
        CsbCallStatsEntry();
        ~CsbCallStatsEntry();

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
        ydk::YLeaf csbcallstatsserviceindex; //type: uint32
        ydk::YLeaf csbcallstatssbcname; //type: string
        ydk::YLeaf csbcallstatscallshigh; //type: uint32
        ydk::YLeaf csbcallstatsrate1sec; //type: uint32
        ydk::YLeaf csbcallstatscallslow; //type: uint32
        ydk::YLeaf csbcallstatsavailableflows; //type: uint32
        ydk::YLeaf csbcallstatsusedflows; //type: uint32
        ydk::YLeaf csbcallstatspeakflows; //type: uint32
        ydk::YLeaf csbcallstatstotalflows; //type: uint32
        ydk::YLeaf csbcallstatsusedsigflows; //type: uint32
        ydk::YLeaf csbcallstatspeaksigflows; //type: uint32
        ydk::YLeaf csbcallstatstotalsigflows; //type: uint32
        ydk::YLeaf csbcallstatsavailablepktrate; //type: uint32
        ydk::YLeaf csbcallstatsunclassifiedpkts; //type: uint64
        ydk::YLeaf csbcallstatsrtppktssent; //type: uint64
        ydk::YLeaf csbcallstatsrtppktsrcvd; //type: uint64
        ydk::YLeaf csbcallstatsrtppktsdiscard; //type: uint64
        ydk::YLeaf csbcallstatsrtpoctetssent; //type: uint64
        ydk::YLeaf csbcallstatsrtpoctetsrcvd; //type: uint64
        ydk::YLeaf csbcallstatsrtpoctetsdiscard; //type: uint64
        ydk::YLeaf csbcallstatsnomediacount; //type: uint32
        ydk::YLeaf csbcallstatsrouteerrors; //type: uint32
        ydk::YLeaf csbcallstatsavailabletranscodeflows; //type: uint32
        ydk::YLeaf csbcallstatsactivetranscodeflows; //type: uint32
        ydk::YLeaf csbcallstatspeaktranscodeflows; //type: uint32
        ydk::YLeaf csbcallstatstotaltranscodeflows; //type: uint32

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCallStatsTable::CsbCallStatsEntry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable : public ydk::Entity
{
    public:
        CsbCurrPeriodicStatsTable();
        ~CsbCurrPeriodicStatsTable();

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

        class CsbCurrPeriodicStatsEntry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry

        ydk::YList csbcurrperiodicstatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry : public ydk::Entity
{
    public:
        CsbCurrPeriodicStatsEntry();
        ~CsbCurrPeriodicStatsEntry();

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
        ydk::YLeaf csbcurrperiodicstatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbcurrperiodicstatsactivecalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsactivatingcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsdeactivatingcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatstotalcallattempts; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsfailedcallattempts; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallroutingfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallresourcefailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallmediafailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsigfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsactivecallfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscongestionfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetuppolicyfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetupnapolicyfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetuproutingpolicyfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetupcacpolicyfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetupcaccalllimitfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetupcacratelimitfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetupcacbandwidthfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetupcacmedialimitfailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscallsetupcacmediaupdatefailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatstimestamp; //type: binary
        ydk::YLeaf csbcurrperiodicstatstranscodedcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatstransratedcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatstotalcallupdatefailure; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsactiveipv6calls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsactiveemergencycalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsactivee2emergencycalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsimsrxactivecalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsimsrxcallsetupfaiures; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsimsrxcallrenegotiationattempts; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsimsrxcallrenegotiationfailures; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsaudiotranscodedcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsfaxtranscodedcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsrtpdisallowedfailures; //type: uint32
        ydk::YLeaf csbcurrperiodicstatssrtpdisallowedfailures; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsnonsrtpcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatssrtpnoniwcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatssrtpiwcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsdtmfiw2833calls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsdtmfiwinbandcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatsdtmfiw2833inbandcalls; //type: uint32
        ydk::YLeaf csbcurrperiodicstatstotaltapsrequested; //type: uint32
        ydk::YLeaf csbcurrperiodicstatstotaltapssucceeded; //type: uint32
        ydk::YLeaf csbcurrperiodicstatscurrenttaps; //type: uint32
        ydk::YLeaf csbcurrperiodicipseccalls; //type: uint32

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbCurrPeriodicStatsTable::CsbCurrPeriodicStatsEntry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable : public ydk::Entity
{
    public:
        CsbHistoryStatsTable();
        ~CsbHistoryStatsTable();

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

        class CsbHistoryStatsEntry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry

        ydk::YList csbhistorystatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry : public ydk::Entity
{
    public:
        CsbHistoryStatsEntry();
        ~CsbHistoryStatsEntry();

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
        ydk::YLeaf csbhistorystatsinterval; //type: CiscoSbcPeriodicStatsInterval
        ydk::YLeaf csbhistorystatselements; //type: uint32
        ydk::YLeaf csbhistorystatsactivecalls; //type: uint32
        ydk::YLeaf csbhistorystatstotalcallattempts; //type: uint32
        ydk::YLeaf csbhistorystatsfailedcallattempts; //type: uint32
        ydk::YLeaf csbhistorystatscallroutingfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallresourcefailure; //type: uint32
        ydk::YLeaf csbhistorystatscallmediafailure; //type: uint32
        ydk::YLeaf csbhistorystatsfailsigfailure; //type: uint32
        ydk::YLeaf csbhistorystatsactivecallfailure; //type: uint32
        ydk::YLeaf csbhistorystatscongestionfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetuppolicyfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetupnapolicyfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetuproutingpolicyfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetupcacpolicyfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetupcaccalllimitfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetupcacratelimitfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetupcacbandwidthfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetupcacmedialimitfailure; //type: uint32
        ydk::YLeaf csbhistorystatscallsetupcacmediaupdatefailure; //type: uint32
        ydk::YLeaf csbhistorystatstimestamp; //type: binary
        ydk::YLeaf csbhistroystatstranscodedcalls; //type: uint32
        ydk::YLeaf csbhistroystatstransratedcalls; //type: uint32
        ydk::YLeaf csbhistorystatstotalcallupdatefailure; //type: uint32
        ydk::YLeaf csbhistorystatsactiveipv6calls; //type: uint32
        ydk::YLeaf csbhistorystatsactiveemergencycalls; //type: uint32
        ydk::YLeaf csbhistorystatsactivee2emergencycalls; //type: uint32
        ydk::YLeaf csbhistorystatsimsrxactivecalls; //type: uint32
        ydk::YLeaf csbhistorystatsimsrxcallsetupfailures; //type: uint32
        ydk::YLeaf csbhistorystatsimsrxcallrenegotiationattempts; //type: uint32
        ydk::YLeaf csbhistorystatsimsrxcallrenegotiationfailures; //type: uint32
        ydk::YLeaf csbhistorystatsaudiotranscodedcalls; //type: uint32
        ydk::YLeaf csbhistorystatsfaxtranscodedcalls; //type: uint32
        ydk::YLeaf csbhistorystatsrtpdisallowedfailures; //type: uint32
        ydk::YLeaf csbhistorystatssrtpdisallowedfailures; //type: uint32
        ydk::YLeaf csbhistorystatsnonsrtpcalls; //type: uint32
        ydk::YLeaf csbhistorystatssrtpnoniwcalls; //type: uint32
        ydk::YLeaf csbhistorystatssrtpiwcalls; //type: uint32
        ydk::YLeaf csbhistorystatsdtmfiw2833calls; //type: uint32
        ydk::YLeaf csbhistorystatsdtmfiwinbandcalls; //type: uint32
        ydk::YLeaf csbhistorystatsdtmfiw2833inbandcalls; //type: uint32
        ydk::YLeaf csbhistorystatstotaltapsrequested; //type: uint32
        ydk::YLeaf csbhistorystatstotaltapssucceeded; //type: uint32
        ydk::YLeaf csbhistorystatscurrenttaps; //type: uint32
        ydk::YLeaf csbhistorystatsipseccalls; //type: uint32

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbHistoryStatsTable::CsbHistoryStatsEntry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable : public ydk::Entity
{
    public:
        CsbPerFlowStatsTable();
        ~CsbPerFlowStatsTable();

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

        class CsbPerFlowStatsEntry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry

        ydk::YList csbperflowstatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry : public ydk::Entity
{
    public:
        CsbPerFlowStatsEntry();
        ~CsbPerFlowStatsEntry();

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
        ydk::YLeaf csbperflowstatsvdbeid; //type: int32
        ydk::YLeaf csbperflowstatsgateid; //type: int32
        ydk::YLeaf csbperflowstatsflowpairid; //type: int32
        ydk::YLeaf csbperflowstatssideid; //type: CsbPerFlowStatsSideId
        ydk::YLeaf csbperflowstatsflowtype; //type: CsbPerFlowStatsFlowType
        ydk::YLeaf csbperflowstatsrtppktssent; //type: uint64
        ydk::YLeaf csbperflowstatsrtppktsrcvd; //type: uint64
        ydk::YLeaf csbperflowstatsrtppktsdiscard; //type: uint64
        ydk::YLeaf csbperflowstatsrtpoctetssent; //type: uint64
        ydk::YLeaf csbperflowstatsrtpoctetsrcvd; //type: uint64
        ydk::YLeaf csbperflowstatsrtpoctetsdiscard; //type: uint64
        ydk::YLeaf csbperflowstatsrtcppktssent; //type: uint64
        ydk::YLeaf csbperflowstatsrtcppktsrcvd; //type: uint64
        ydk::YLeaf csbperflowstatsrtcppktslost; //type: uint64
        ydk::YLeaf csbperflowstatsepjitter; //type: uint64
        ydk::YLeaf csbperflowstatstmanpermbs; //type: uint32
        ydk::YLeaf csbperflowstatstmanpersdr; //type: uint32
        ydk::YLeaf csbperflowstatsdscpsettings; //type: string
        ydk::YLeaf csbperflowstatsadrstatus; //type: binary
        ydk::YLeaf csbperflowstatsqasettings; //type: binary
        ydk::YLeaf csbperflowstatsrtppktslost; //type: uint64
        class CsbPerFlowStatsSideId;
        class CsbPerFlowStatsFlowType;

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable : public ydk::Entity
{
    public:
        CsbH248StatsTable();
        ~CsbH248StatsTable();

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

        class CsbH248StatsEntry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry

        ydk::YList csbh248statsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry : public ydk::Entity
{
    public:
        CsbH248StatsEntry();
        ~CsbH248StatsEntry();

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
        ydk::YLeaf csbh248statsctrlrindex; //type: int32
        ydk::YLeaf csbh248statsrequestssent; //type: uint32
        ydk::YLeaf csbh248statsrequestsrcvd; //type: uint32
        ydk::YLeaf csbh248statsrequestsfailed; //type: uint32
        ydk::YLeaf csbh248statsrequestsretried; //type: uint32
        ydk::YLeaf csbh248statsrepliessent; //type: uint32
        ydk::YLeaf csbh248statsrepliesrcvd; //type: uint32
        ydk::YLeaf csbh248statsrepliesretried; //type: uint32
        ydk::YLeaf csbh248statssegpktssent; //type: uint32
        ydk::YLeaf csbh248statssegpktsrcvd; //type: uint32
        ydk::YLeaf csbh248statsestablishedtime; //type: binary
        ydk::YLeaf csbh248statstmaxtimeoutval; //type: int32
        ydk::YLeaf csbh248statsrtt; //type: uint32
        ydk::YLeaf csbh248statslt; //type: uint32

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsTable::CsbH248StatsEntry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table : public ydk::Entity
{
    public:
        CsbH248StatsRev1Table();
        ~CsbH248StatsRev1Table();

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

        class CsbH248StatsRev1Entry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry

        ydk::YList csbh248statsrev1entry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table


class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry : public ydk::Entity
{
    public:
        CsbH248StatsRev1Entry();
        ~CsbH248StatsRev1Entry();

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
        ydk::YLeaf csbh248statsvdbeid; //type: int32
        ydk::YLeaf csbh248statsrequestssentrev1; //type: uint32
        ydk::YLeaf csbh248statsrequestsrcvdrev1; //type: uint32
        ydk::YLeaf csbh248statsrequestsfailedrev1; //type: uint32
        ydk::YLeaf csbh248statsrequestsretriedrev1; //type: uint32
        ydk::YLeaf csbh248statsrepliessentrev1; //type: uint32
        ydk::YLeaf csbh248statsrepliesrcvdrev1; //type: uint32
        ydk::YLeaf csbh248statsrepliesretriedrev1; //type: uint32
        ydk::YLeaf csbh248statssegpktssentrev1; //type: uint32
        ydk::YLeaf csbh248statssegpktsrcvdrev1; //type: uint32
        ydk::YLeaf csbh248statsestablishedtimerev1; //type: binary
        ydk::YLeaf csbh248statstmaxtimeoutvalrev1; //type: int32
        ydk::YLeaf csbh248statsrttrev1; //type: uint32
        ydk::YLeaf csbh248statsltrev1; //type: uint32

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbH248StatsRev1Table::CsbH248StatsRev1Entry

class CiscoSbcPeriodicStatsInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fiveMinute;
        static const ydk::Enum::YLeaf fifteenMinute;
        static const ydk::Enum::YLeaf oneHour;
        static const ydk::Enum::YLeaf oneDay;

        static int get_enum_value(const std::string & name) {
            if (name == "fiveMinute") return 1;
            if (name == "fifteenMinute") return 2;
            if (name == "oneHour") return 3;
            if (name == "oneDay") return 4;
            return -1;
        }
};

class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::CsbPerFlowStatsSideId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sideA;
        static const ydk::Enum::YLeaf sideB;

        static int get_enum_value(const std::string & name) {
            if (name == "sideA") return 1;
            if (name == "sideB") return 2;
            return -1;
        }
};

class CISCOSESSBORDERCTRLRCALLSTATSMIB::CsbPerFlowStatsTable::CsbPerFlowStatsEntry::CsbPerFlowStatsFlowType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media;
        static const ydk::Enum::YLeaf signalling;

        static int get_enum_value(const std::string & name) {
            if (name == "media") return 1;
            if (name == "signalling") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB_ */

