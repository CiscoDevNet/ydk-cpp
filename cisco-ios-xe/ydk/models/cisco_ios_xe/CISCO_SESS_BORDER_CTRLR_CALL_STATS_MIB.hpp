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

        class Csbcallstatsinstancetable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable
        class Csbcallstatstable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable
        class Csbcurrperiodicstatstable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable
        class Csbhistorystatstable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable
        class Csbperflowstatstable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable
        class Csbh248Statstable; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable
        class Csbh248Statsrev1Table; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table

        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable> csbcallstatsinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable> csbcallstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable> csbcurrperiodicstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable> csbhistorystatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable> csbperflowstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable> csbh248statstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table> csbh248statsrev1table;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable : public ydk::Entity
{
    public:
        Csbcallstatsinstancetable();
        ~Csbcallstatsinstancetable();

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

        class Csbcallstatsinstanceentry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry> > csbcallstatsinstanceentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry : public ydk::Entity
{
    public:
        Csbcallstatsinstanceentry();
        ~Csbcallstatsinstanceentry();

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

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable : public ydk::Entity
{
    public:
        Csbcallstatstable();
        ~Csbcallstatstable();

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

        class Csbcallstatsentry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry> > csbcallstatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry : public ydk::Entity
{
    public:
        Csbcallstatsentry();
        ~Csbcallstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
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

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable : public ydk::Entity
{
    public:
        Csbcurrperiodicstatstable();
        ~Csbcurrperiodicstatstable();

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

        class Csbcurrperiodicstatsentry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry> > csbcurrperiodicstatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry : public ydk::Entity
{
    public:
        Csbcurrperiodicstatsentry();
        ~Csbcurrperiodicstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
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

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable : public ydk::Entity
{
    public:
        Csbhistorystatstable();
        ~Csbhistorystatstable();

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

        class Csbhistorystatsentry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable::Csbhistorystatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable::Csbhistorystatsentry> > csbhistorystatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable::Csbhistorystatsentry : public ydk::Entity
{
    public:
        Csbhistorystatsentry();
        ~Csbhistorystatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
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

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbhistorystatstable::Csbhistorystatsentry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable : public ydk::Entity
{
    public:
        Csbperflowstatstable();
        ~Csbperflowstatstable();

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

        class Csbperflowstatsentry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable::Csbperflowstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable::Csbperflowstatsentry> > csbperflowstatsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable::Csbperflowstatsentry : public ydk::Entity
{
    public:
        Csbperflowstatsentry();
        ~Csbperflowstatsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        ydk::YLeaf csbcallstatsserviceindex;
        ydk::YLeaf csbperflowstatsvdbeid; //type: int32
        ydk::YLeaf csbperflowstatsgateid; //type: int32
        ydk::YLeaf csbperflowstatsflowpairid; //type: int32
        ydk::YLeaf csbperflowstatssideid; //type: Csbperflowstatssideid
        ydk::YLeaf csbperflowstatsflowtype; //type: Csbperflowstatsflowtype
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
        class Csbperflowstatssideid;
        class Csbperflowstatsflowtype;

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable::Csbperflowstatsentry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable : public ydk::Entity
{
    public:
        Csbh248Statstable();
        ~Csbh248Statstable();

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

        class Csbh248Statsentry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable::Csbh248Statsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable::Csbh248Statsentry> > csbh248statsentry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable::Csbh248Statsentry : public ydk::Entity
{
    public:
        Csbh248Statsentry();
        ~Csbh248Statsentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
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

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statstable::Csbh248Statsentry


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table : public ydk::Entity
{
    public:
        Csbh248Statsrev1Table();
        ~Csbh248Statsrev1Table();

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

        class Csbh248Statsrev1Entry; //type: CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table::Csbh248Statsrev1Entry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table::Csbh248Statsrev1Entry> > csbh248statsrev1entry;
        
}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table


class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table::Csbh248Statsrev1Entry : public ydk::Entity
{
    public:
        Csbh248Statsrev1Entry();
        ~Csbh248Statsrev1Entry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        ydk::YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
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

}; // CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbh248Statsrev1Table::Csbh248Statsrev1Entry

class CiscoSbcPeriodicStatsInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf fiveMinute;
        static const ydk::Enum::YLeaf fifteenMinute;
        static const ydk::Enum::YLeaf oneHour;
        static const ydk::Enum::YLeaf oneDay;

};

class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable::Csbperflowstatsentry::Csbperflowstatssideid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sideA;
        static const ydk::Enum::YLeaf sideB;

};

class CISCOSESSBORDERCTRLRCALLSTATSMIB::Csbperflowstatstable::Csbperflowstatsentry::Csbperflowstatsflowtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf media;
        static const ydk::Enum::YLeaf signalling;

};


}
}

#endif /* _CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB_ */

