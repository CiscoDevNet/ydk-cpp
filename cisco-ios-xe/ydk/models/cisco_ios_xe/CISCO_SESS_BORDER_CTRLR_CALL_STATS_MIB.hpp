#ifndef _CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB_
#define _CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB {

class CiscoSessBorderCtrlrCallStatsMib : public Entity
{
    public:
        CiscoSessBorderCtrlrCallStatsMib();
        ~CiscoSessBorderCtrlrCallStatsMib();

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

        class Csbcallstatsinstancetable; //type: CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable
        class Csbcallstatstable; //type: CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable
        class Csbcurrperiodicstatstable; //type: CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable
        class Csbhistorystatstable; //type: CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable
        class Csbperflowstatstable; //type: CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable
        class Csbh248Statstable; //type: CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable
        class Csbh248Statsrev1Table; //type: CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table

        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable> csbcallstatsinstancetable_;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable> csbcallstatstable_;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable> csbcurrperiodicstatstable_;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table> csbh248statsrev1table_;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable> csbh248statstable_;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable> csbhistorystatstable_;
        std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable> csbperflowstatstable_;
        
}; // CiscoSessBorderCtrlrCallStatsMib


class CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable : public Entity
{
    public:
        Csbcallstatsinstancetable();
        ~Csbcallstatsinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbcallstatsinstanceentry; //type: CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry> > csbcallstatsinstanceentry_;
        
}; // CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable


class CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry : public Entity
{
    public:
        Csbcallstatsinstanceentry();
        ~Csbcallstatsinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csbcallstatsinstanceindex; //type: uint32
        YLeaf csbcallstatsinstancephysicalindex; //type: int32

}; // CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry


class CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable : public Entity
{
    public:
        Csbcallstatstable();
        ~Csbcallstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbcallstatsentry; //type: CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry> > csbcallstatsentry_;
        
}; // CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable


class CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry : public Entity
{
    public:
        Csbcallstatsentry();
        ~Csbcallstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        YLeaf csbcallstatsserviceindex; //type: uint32
        YLeaf csbcallstatssbcname; //type: string
        YLeaf csbcallstatscallshigh; //type: uint32
        YLeaf csbcallstatsrate1sec; //type: uint32
        YLeaf csbcallstatscallslow; //type: uint32
        YLeaf csbcallstatsavailableflows; //type: uint32
        YLeaf csbcallstatsusedflows; //type: uint32
        YLeaf csbcallstatspeakflows; //type: uint32
        YLeaf csbcallstatstotalflows; //type: uint32
        YLeaf csbcallstatsusedsigflows; //type: uint32
        YLeaf csbcallstatspeaksigflows; //type: uint32
        YLeaf csbcallstatstotalsigflows; //type: uint32
        YLeaf csbcallstatsavailablepktrate; //type: uint32
        YLeaf csbcallstatsunclassifiedpkts; //type: uint64
        YLeaf csbcallstatsrtppktssent; //type: uint64
        YLeaf csbcallstatsrtppktsrcvd; //type: uint64
        YLeaf csbcallstatsrtppktsdiscard; //type: uint64
        YLeaf csbcallstatsrtpoctetssent; //type: uint64
        YLeaf csbcallstatsrtpoctetsrcvd; //type: uint64
        YLeaf csbcallstatsrtpoctetsdiscard; //type: uint64
        YLeaf csbcallstatsnomediacount; //type: uint32
        YLeaf csbcallstatsrouteerrors; //type: uint32
        YLeaf csbcallstatsavailabletranscodeflows; //type: uint32
        YLeaf csbcallstatsactivetranscodeflows; //type: uint32
        YLeaf csbcallstatspeaktranscodeflows; //type: uint32
        YLeaf csbcallstatstotaltranscodeflows; //type: uint32

}; // CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry


class CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable : public Entity
{
    public:
        Csbcurrperiodicstatstable();
        ~Csbcurrperiodicstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbcurrperiodicstatsentry; //type: CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry> > csbcurrperiodicstatsentry_;
        
}; // CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable


class CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry : public Entity
{
    public:
        Csbcurrperiodicstatsentry();
        ~Csbcurrperiodicstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbcurrperiodicstatsinterval; //type: CiscosbcperiodicstatsintervalEnum
        YLeaf csbcurrperiodicstatsactivecalls; //type: uint32
        YLeaf csbcurrperiodicstatsactivatingcalls; //type: uint32
        YLeaf csbcurrperiodicstatsdeactivatingcalls; //type: uint32
        YLeaf csbcurrperiodicstatstotalcallattempts; //type: uint32
        YLeaf csbcurrperiodicstatsfailedcallattempts; //type: uint32
        YLeaf csbcurrperiodicstatscallroutingfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallresourcefailure; //type: uint32
        YLeaf csbcurrperiodicstatscallmediafailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsigfailure; //type: uint32
        YLeaf csbcurrperiodicstatsactivecallfailure; //type: uint32
        YLeaf csbcurrperiodicstatscongestionfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetuppolicyfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetupnapolicyfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetuproutingpolicyfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetupcacpolicyfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetupcaccalllimitfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetupcacratelimitfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetupcacbandwidthfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetupcacmedialimitfailure; //type: uint32
        YLeaf csbcurrperiodicstatscallsetupcacmediaupdatefailure; //type: uint32
        YLeaf csbcurrperiodicstatstimestamp; //type: binary
        YLeaf csbcurrperiodicstatstranscodedcalls; //type: uint32
        YLeaf csbcurrperiodicstatstransratedcalls; //type: uint32
        YLeaf csbcurrperiodicstatstotalcallupdatefailure; //type: uint32
        YLeaf csbcurrperiodicstatsactiveipv6calls; //type: uint32
        YLeaf csbcurrperiodicstatsactiveemergencycalls; //type: uint32
        YLeaf csbcurrperiodicstatsactivee2emergencycalls; //type: uint32
        YLeaf csbcurrperiodicstatsimsrxactivecalls; //type: uint32
        YLeaf csbcurrperiodicstatsimsrxcallsetupfaiures; //type: uint32
        YLeaf csbcurrperiodicstatsimsrxcallrenegotiationattempts; //type: uint32
        YLeaf csbcurrperiodicstatsimsrxcallrenegotiationfailures; //type: uint32
        YLeaf csbcurrperiodicstatsaudiotranscodedcalls; //type: uint32
        YLeaf csbcurrperiodicstatsfaxtranscodedcalls; //type: uint32
        YLeaf csbcurrperiodicstatsrtpdisallowedfailures; //type: uint32
        YLeaf csbcurrperiodicstatssrtpdisallowedfailures; //type: uint32
        YLeaf csbcurrperiodicstatsnonsrtpcalls; //type: uint32
        YLeaf csbcurrperiodicstatssrtpnoniwcalls; //type: uint32
        YLeaf csbcurrperiodicstatssrtpiwcalls; //type: uint32
        YLeaf csbcurrperiodicstatsdtmfiw2833calls; //type: uint32
        YLeaf csbcurrperiodicstatsdtmfiwinbandcalls; //type: uint32
        YLeaf csbcurrperiodicstatsdtmfiw2833inbandcalls; //type: uint32
        YLeaf csbcurrperiodicstatstotaltapsrequested; //type: uint32
        YLeaf csbcurrperiodicstatstotaltapssucceeded; //type: uint32
        YLeaf csbcurrperiodicstatscurrenttaps; //type: uint32
        YLeaf csbcurrperiodicipseccalls; //type: uint32

}; // CiscoSessBorderCtrlrCallStatsMib::Csbcurrperiodicstatstable::Csbcurrperiodicstatsentry


class CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable : public Entity
{
    public:
        Csbhistorystatstable();
        ~Csbhistorystatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbhistorystatsentry; //type: CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry> > csbhistorystatsentry_;
        
}; // CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable


class CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry : public Entity
{
    public:
        Csbhistorystatsentry();
        ~Csbhistorystatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbhistorystatsinterval; //type: CiscosbcperiodicstatsintervalEnum
        YLeaf csbhistorystatselements; //type: uint32
        YLeaf csbhistorystatsactivecalls; //type: uint32
        YLeaf csbhistorystatstotalcallattempts; //type: uint32
        YLeaf csbhistorystatsfailedcallattempts; //type: uint32
        YLeaf csbhistorystatscallroutingfailure; //type: uint32
        YLeaf csbhistorystatscallresourcefailure; //type: uint32
        YLeaf csbhistorystatscallmediafailure; //type: uint32
        YLeaf csbhistorystatsfailsigfailure; //type: uint32
        YLeaf csbhistorystatsactivecallfailure; //type: uint32
        YLeaf csbhistorystatscongestionfailure; //type: uint32
        YLeaf csbhistorystatscallsetuppolicyfailure; //type: uint32
        YLeaf csbhistorystatscallsetupnapolicyfailure; //type: uint32
        YLeaf csbhistorystatscallsetuproutingpolicyfailure; //type: uint32
        YLeaf csbhistorystatscallsetupcacpolicyfailure; //type: uint32
        YLeaf csbhistorystatscallsetupcaccalllimitfailure; //type: uint32
        YLeaf csbhistorystatscallsetupcacratelimitfailure; //type: uint32
        YLeaf csbhistorystatscallsetupcacbandwidthfailure; //type: uint32
        YLeaf csbhistorystatscallsetupcacmedialimitfailure; //type: uint32
        YLeaf csbhistorystatscallsetupcacmediaupdatefailure; //type: uint32
        YLeaf csbhistorystatstimestamp; //type: binary
        YLeaf csbhistroystatstranscodedcalls; //type: uint32
        YLeaf csbhistroystatstransratedcalls; //type: uint32
        YLeaf csbhistorystatstotalcallupdatefailure; //type: uint32
        YLeaf csbhistorystatsactiveipv6calls; //type: uint32
        YLeaf csbhistorystatsactiveemergencycalls; //type: uint32
        YLeaf csbhistorystatsactivee2emergencycalls; //type: uint32
        YLeaf csbhistorystatsimsrxactivecalls; //type: uint32
        YLeaf csbhistorystatsimsrxcallsetupfailures; //type: uint32
        YLeaf csbhistorystatsimsrxcallrenegotiationattempts; //type: uint32
        YLeaf csbhistorystatsimsrxcallrenegotiationfailures; //type: uint32
        YLeaf csbhistorystatsaudiotranscodedcalls; //type: uint32
        YLeaf csbhistorystatsfaxtranscodedcalls; //type: uint32
        YLeaf csbhistorystatsrtpdisallowedfailures; //type: uint32
        YLeaf csbhistorystatssrtpdisallowedfailures; //type: uint32
        YLeaf csbhistorystatsnonsrtpcalls; //type: uint32
        YLeaf csbhistorystatssrtpnoniwcalls; //type: uint32
        YLeaf csbhistorystatssrtpiwcalls; //type: uint32
        YLeaf csbhistorystatsdtmfiw2833calls; //type: uint32
        YLeaf csbhistorystatsdtmfiwinbandcalls; //type: uint32
        YLeaf csbhistorystatsdtmfiw2833inbandcalls; //type: uint32
        YLeaf csbhistorystatstotaltapsrequested; //type: uint32
        YLeaf csbhistorystatstotaltapssucceeded; //type: uint32
        YLeaf csbhistorystatscurrenttaps; //type: uint32
        YLeaf csbhistorystatsipseccalls; //type: uint32

}; // CiscoSessBorderCtrlrCallStatsMib::Csbhistorystatstable::Csbhistorystatsentry


class CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable : public Entity
{
    public:
        Csbperflowstatstable();
        ~Csbperflowstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbperflowstatsentry; //type: CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry> > csbperflowstatsentry_;
        
}; // CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable


class CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry : public Entity
{
    public:
        Csbperflowstatsentry();
        ~Csbperflowstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbperflowstatsvdbeid; //type: int32
        YLeaf csbperflowstatsgateid; //type: int32
        YLeaf csbperflowstatsflowpairid; //type: int32
        YLeaf csbperflowstatssideid; //type: CsbperflowstatssideidEnum
        YLeaf csbperflowstatsflowtype; //type: CsbperflowstatsflowtypeEnum
        YLeaf csbperflowstatsrtppktssent; //type: uint64
        YLeaf csbperflowstatsrtppktsrcvd; //type: uint64
        YLeaf csbperflowstatsrtppktsdiscard; //type: uint64
        YLeaf csbperflowstatsrtpoctetssent; //type: uint64
        YLeaf csbperflowstatsrtpoctetsrcvd; //type: uint64
        YLeaf csbperflowstatsrtpoctetsdiscard; //type: uint64
        YLeaf csbperflowstatsrtcppktssent; //type: uint64
        YLeaf csbperflowstatsrtcppktsrcvd; //type: uint64
        YLeaf csbperflowstatsrtcppktslost; //type: uint64
        YLeaf csbperflowstatsepjitter; //type: uint64
        YLeaf csbperflowstatstmanpermbs; //type: uint32
        YLeaf csbperflowstatstmanpersdr; //type: uint32
        YLeaf csbperflowstatsdscpsettings; //type: string
        YLeaf csbperflowstatsadrstatus; //type: binary
        YLeaf csbperflowstatsqasettings; //type: binary
        YLeaf csbperflowstatsrtppktslost; //type: uint64
        class CsbperflowstatssideidEnum;
        class CsbperflowstatsflowtypeEnum;

}; // CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry


class CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable : public Entity
{
    public:
        Csbh248Statstable();
        ~Csbh248Statstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbh248Statsentry; //type: CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry> > csbh248statsentry_;
        
}; // CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable


class CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry : public Entity
{
    public:
        Csbh248Statsentry();
        ~Csbh248Statsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbh248statsctrlrindex; //type: int32
        YLeaf csbh248statsrequestssent; //type: uint32
        YLeaf csbh248statsrequestsrcvd; //type: uint32
        YLeaf csbh248statsrequestsfailed; //type: uint32
        YLeaf csbh248statsrequestsretried; //type: uint32
        YLeaf csbh248statsrepliessent; //type: uint32
        YLeaf csbh248statsrepliesrcvd; //type: uint32
        YLeaf csbh248statsrepliesretried; //type: uint32
        YLeaf csbh248statssegpktssent; //type: uint32
        YLeaf csbh248statssegpktsrcvd; //type: uint32
        YLeaf csbh248statsestablishedtime; //type: binary
        YLeaf csbh248statstmaxtimeoutval; //type: int32
        YLeaf csbh248statsrtt; //type: uint32
        YLeaf csbh248statslt; //type: uint32

}; // CiscoSessBorderCtrlrCallStatsMib::Csbh248Statstable::Csbh248Statsentry


class CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table : public Entity
{
    public:
        Csbh248Statsrev1Table();
        ~Csbh248Statsrev1Table();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Csbh248Statsrev1Entry; //type: CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry

        std::vector<std::shared_ptr<CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry> > csbh248statsrev1entry_;
        
}; // CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table


class CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry : public Entity
{
    public:
        Csbh248Statsrev1Entry();
        ~Csbh248Statsrev1Entry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatsinstancetable::Csbcallstatsinstanceentry::csbcallstatsinstanceindex)
        YLeaf csbcallstatsinstanceindex;
        //type: uint32 (refers to CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB::CiscoSessBorderCtrlrCallStatsMib::Csbcallstatstable::Csbcallstatsentry::csbcallstatsserviceindex)
        YLeaf csbcallstatsserviceindex;
        YLeaf csbh248statsvdbeid; //type: int32
        YLeaf csbh248statsrequestssentrev1; //type: uint32
        YLeaf csbh248statsrequestsrcvdrev1; //type: uint32
        YLeaf csbh248statsrequestsfailedrev1; //type: uint32
        YLeaf csbh248statsrequestsretriedrev1; //type: uint32
        YLeaf csbh248statsrepliessentrev1; //type: uint32
        YLeaf csbh248statsrepliesrcvdrev1; //type: uint32
        YLeaf csbh248statsrepliesretriedrev1; //type: uint32
        YLeaf csbh248statssegpktssentrev1; //type: uint32
        YLeaf csbh248statssegpktsrcvdrev1; //type: uint32
        YLeaf csbh248statsestablishedtimerev1; //type: binary
        YLeaf csbh248statstmaxtimeoutvalrev1; //type: int32
        YLeaf csbh248statsrttrev1; //type: uint32
        YLeaf csbh248statsltrev1; //type: uint32

}; // CiscoSessBorderCtrlrCallStatsMib::Csbh248Statsrev1Table::Csbh248Statsrev1Entry

class CiscosbcperiodicstatsintervalEnum : public Enum
{
    public:
        static const Enum::YLeaf fiveMinute;
        static const Enum::YLeaf fifteenMinute;
        static const Enum::YLeaf oneHour;
        static const Enum::YLeaf oneDay;

};

class CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::CsbperflowstatssideidEnum : public Enum
{
    public:
        static const Enum::YLeaf sideA;
        static const Enum::YLeaf sideB;

};

class CiscoSessBorderCtrlrCallStatsMib::Csbperflowstatstable::Csbperflowstatsentry::CsbperflowstatsflowtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf media;
        static const Enum::YLeaf signalling;

};


}
}

#endif /* _CISCO_SESS_BORDER_CTRLR_CALL_STATS_MIB_ */

