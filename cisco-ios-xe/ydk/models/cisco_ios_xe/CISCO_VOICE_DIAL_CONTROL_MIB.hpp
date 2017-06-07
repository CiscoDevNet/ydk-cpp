#ifndef _CISCO_VOICE_DIAL_CONTROL_MIB_
#define _CISCO_VOICE_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_VOICE_DIAL_CONTROL_MIB {

class CiscoVoiceDialControlMib : public Entity
{
    public:
        CiscoVoiceDialControlMib();
        ~CiscoVoiceDialControlMib();

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

        class Cvgeneralconfiguration; //type: CiscoVoiceDialControlMib::Cvgeneralconfiguration
        class Cvgatewaycallactive; //type: CiscoVoiceDialControlMib::Cvgatewaycallactive
        class Cvcallvolume; //type: CiscoVoiceDialControlMib::Cvcallvolume
        class Cvcallratemonitor; //type: CiscoVoiceDialControlMib::Cvcallratemonitor
        class Cvcallvolumestatshistory; //type: CiscoVoiceDialControlMib::Cvcallvolumestatshistory
        class Cvpeercfgtable; //type: CiscoVoiceDialControlMib::Cvpeercfgtable
        class Cvvoicepeercfgtable; //type: CiscoVoiceDialControlMib::Cvvoicepeercfgtable
        class Cvvoippeercfgtable; //type: CiscoVoiceDialControlMib::Cvvoippeercfgtable
        class Cvpeercommoncfgtable; //type: CiscoVoiceDialControlMib::Cvpeercommoncfgtable
        class Cvcallactivetable; //type: CiscoVoiceDialControlMib::Cvcallactivetable
        class Cvvoipcallactivetable; //type: CiscoVoiceDialControlMib::Cvvoipcallactivetable
        class Cvcallvolconntable; //type: CiscoVoiceDialControlMib::Cvcallvolconntable
        class Cvcallvoliftable; //type: CiscoVoiceDialControlMib::Cvcallvoliftable
        class Cvcallhistorytable; //type: CiscoVoiceDialControlMib::Cvcallhistorytable
        class Cvvoipcallhistorytable; //type: CiscoVoiceDialControlMib::Cvvoipcallhistorytable
        class Cvcallratestatstable; //type: CiscoVoiceDialControlMib::Cvcallratestatstable
        class Cvcalllegratestatstable; //type: CiscoVoiceDialControlMib::Cvcalllegratestatstable
        class Cvactivecallstatstable; //type: CiscoVoiceDialControlMib::Cvactivecallstatstable
        class Cvcalldurationstatstable; //type: CiscoVoiceDialControlMib::Cvcalldurationstatstable
        class Cvsipmsgratestatstable; //type: CiscoVoiceDialControlMib::Cvsipmsgratestatstable
        class Cvcallratewmtable; //type: CiscoVoiceDialControlMib::Cvcallratewmtable
        class Cvcalllegratewmtable; //type: CiscoVoiceDialControlMib::Cvcalllegratewmtable
        class Cvactivecallwmtable; //type: CiscoVoiceDialControlMib::Cvactivecallwmtable
        class Cvsipmsgratewmtable; //type: CiscoVoiceDialControlMib::Cvsipmsgratewmtable

        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvactivecallstatstable> cvactivecallstatstable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvactivecallwmtable> cvactivecallwmtable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallactivetable> cvcallactivetable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalldurationstatstable> cvcalldurationstatstable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallhistorytable> cvcallhistorytable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalllegratestatstable> cvcalllegratestatstable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalllegratewmtable> cvcalllegratewmtable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallratemonitor> cvcallratemonitor;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallratestatstable> cvcallratestatstable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallratewmtable> cvcallratewmtable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvolconntable> cvcallvolconntable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvoliftable> cvcallvoliftable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvolume> cvcallvolume;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvolumestatshistory> cvcallvolumestatshistory;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvgatewaycallactive> cvgatewaycallactive;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvgeneralconfiguration> cvgeneralconfiguration;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvpeercfgtable> cvpeercfgtable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvpeercommoncfgtable> cvpeercommoncfgtable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvsipmsgratestatstable> cvsipmsgratestatstable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvsipmsgratewmtable> cvsipmsgratewmtable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoicepeercfgtable> cvvoicepeercfgtable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoipcallactivetable> cvvoipcallactivetable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoipcallhistorytable> cvvoipcallhistorytable;
        std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoippeercfgtable> cvvoippeercfgtable;
        
}; // CiscoVoiceDialControlMib


class CiscoVoiceDialControlMib::Cvgeneralconfiguration : public Entity
{
    public:
        Cvgeneralconfiguration();
        ~Cvgeneralconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvgeneralpoorqovnotificationenable; //type: boolean
        YLeaf cvgeneralfallbacknotificationenable; //type: boolean
        YLeaf cvgeneraldscppolicynotificationenable; //type: boolean
        YLeaf cvgeneralmediapolicynotificationenable; //type: boolean

}; // CiscoVoiceDialControlMib::Cvgeneralconfiguration


class CiscoVoiceDialControlMib::Cvgatewaycallactive : public Entity
{
    public:
        Cvgatewaycallactive();
        ~Cvgatewaycallactive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcallactiveds0s; //type: uint32
        YLeaf cvcallactiveds0shighthreshold; //type: uint32
        YLeaf cvcallactiveds0slowthreshold; //type: uint32
        YLeaf cvcallactiveds0shighnotifyenable; //type: boolean
        YLeaf cvcallactiveds0slownotifyenable; //type: boolean

}; // CiscoVoiceDialControlMib::Cvgatewaycallactive


class CiscoVoiceDialControlMib::Cvcallvolume : public Entity
{
    public:
        Cvcallvolume();
        ~Cvcallvolume();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcallvolconntotalactiveconnections; //type: uint32
        YLeaf cvcallvolconnmaxcallconnectionlicenese; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvolume


class CiscoVoiceDialControlMib::Cvcallratemonitor : public Entity
{
    public:
        Cvcallratemonitor();
        ~Cvcallratemonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcallratemonitorenable; //type: boolean
        YLeaf cvcallratemonitortime; //type: uint32
        YLeaf cvcallrate; //type: uint32
        YLeaf cvcallratehiwatermark; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallratemonitor


class CiscoVoiceDialControlMib::Cvcallvolumestatshistory : public Entity
{
    public:
        Cvcallvolumestatshistory();
        ~Cvcallvolumestatshistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcalldurationstatsthreshold; //type: uint32
        YLeaf cvcallvolumewmtablesize; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvolumestatshistory


class CiscoVoiceDialControlMib::Cvpeercfgtable : public Entity
{
    public:
        Cvpeercfgtable();
        ~Cvpeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpeercfgentry; //type: CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry> > cvpeercfgentry;
        
}; // CiscoVoiceDialControlMib::Cvpeercfgtable


class CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry : public Entity
{
    public:
        Cvpeercfgentry();
        ~Cvpeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvpeercfgindex; //type: int32
        YLeaf cvpeercfgifindex; //type: int32
        YLeaf cvpeercfgtype; //type: CvpeercfgtypeEnum
        YLeaf cvpeercfgrowstatus; //type: RowstatusEnum
        YLeaf cvpeercfgpeertype; //type: CvpeercfgpeertypeEnum
        YLeaf cvcallvolpeerincomingcalls; //type: uint32
        YLeaf cvcallvolpeeroutgoingcalls; //type: uint32
        class CvpeercfgtypeEnum;
        class CvpeercfgpeertypeEnum;

}; // CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry


class CiscoVoiceDialControlMib::Cvvoicepeercfgtable : public Entity
{
    public:
        Cvvoicepeercfgtable();
        ~Cvvoicepeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvvoicepeercfgentry; //type: CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry> > cvvoicepeercfgentry;
        
}; // CiscoVoiceDialControlMib::Cvvoicepeercfgtable


class CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry : public Entity
{
    public:
        Cvvoicepeercfgentry();
        ~Cvvoicepeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cvvoicepeercfgsessiontarget; //type: string
        YLeaf cvvoicepeercfgdialdigitsprefix; //type: string
        YLeaf cvvoicepeercfgdidcallenable; //type: boolean
        YLeaf cvvoicepeercfgcasgroup; //type: int32
        YLeaf cvvoicepeercfgregistere164; //type: boolean
        YLeaf cvvoicepeercfgforwarddigits; //type: int32
        YLeaf cvvoicepeercfgechocancellertest; //type: CvvoicepeercfgechocancellertestEnum
        class CvvoicepeercfgechocancellertestEnum;

}; // CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry


class CiscoVoiceDialControlMib::Cvvoippeercfgtable : public Entity
{
    public:
        Cvvoippeercfgtable();
        ~Cvvoippeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvvoippeercfgentry; //type: CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry> > cvvoippeercfgentry;
        
}; // CiscoVoiceDialControlMib::Cvvoippeercfgtable


class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry : public Entity
{
    public:
        Cvvoippeercfgentry();
        ~Cvvoippeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cvvoippeercfgsessionprotocol; //type: CvsessionprotocolEnum
        YLeaf cvvoippeercfgdesiredqos; //type: QosserviceEnum
        YLeaf cvvoippeercfgminacceptableqos; //type: QosserviceEnum
        YLeaf cvvoippeercfgsessiontarget; //type: string
        YLeaf cvvoippeercfgcoderrate; //type: CvcspeechcoderrateEnum
        YLeaf cvvoippeercfgfaxrate; //type: CvcfaxtransmitrateEnum
        YLeaf cvvoippeercfgvadenable; //type: boolean
        YLeaf cvvoippeercfgexpectfactor; //type: int32
        YLeaf cvvoippeercfgicpif; //type: int32
        YLeaf cvvoippeercfgpoorqovnotificationenable; //type: boolean
        YLeaf cvvoippeercfgudpchecksumenable; //type: boolean
        YLeaf cvvoippeercfgipprecedence; //type: int32
        YLeaf cvvoippeercfgtechprefix; //type: string
        YLeaf cvvoippeercfgdigitrelay; //type: Cvvoippeercfgdigitrelay
        YLeaf cvvoippeercfgcoderbytes; //type: int32
        YLeaf cvvoippeercfgfaxbytes; //type: int32
        YLeaf cvvoippeercfginbandsignaling; //type: CvcinbandsignalingEnum
        YLeaf cvvoippeercfgmediasetting; //type: CvvoippeercfgmediasettingEnum
        YLeaf cvvoippeercfgdesiredqosvideo; //type: QosserviceEnum
        YLeaf cvvoippeercfgminacceptableqosvideo; //type: QosserviceEnum
        YLeaf cvvoippeercfgredirectip2ip; //type: boolean
        YLeaf cvvoippeercfgoctetaligned; //type: boolean
        YLeaf cvvoippeercfgbitrates; //type: Cvamrnbbitratemode
        YLeaf cvvoippeercfgcrc; //type: boolean
        YLeaf cvvoippeercfgcodermode; //type: CvilbcframemodeEnum
        YLeaf cvvoippeercfgcodingmode; //type: CvvoippeercfgcodingmodeEnum
        YLeaf cvvoippeercfgbitrate; //type: uint32
        YLeaf cvvoippeercfgframesize; //type: CvvoippeercfgframesizeEnum
        YLeaf cvvoippeercfgdscppolicynotificationenable; //type: boolean
        YLeaf cvvoippeercfgmediapolicynotificationenable; //type: boolean
        class CvvoippeercfgmediasettingEnum;
        class CvvoippeercfgcodingmodeEnum;
        class CvvoippeercfgframesizeEnum;

}; // CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry


class CiscoVoiceDialControlMib::Cvpeercommoncfgtable : public Entity
{
    public:
        Cvpeercommoncfgtable();
        ~Cvpeercommoncfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvpeercommoncfgentry; //type: CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry> > cvpeercommoncfgentry;
        
}; // CiscoVoiceDialControlMib::Cvpeercommoncfgtable


class CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry : public Entity
{
    public:
        Cvpeercommoncfgentry();
        ~Cvpeercommoncfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cvpeercommoncfgincomingdnisdigits; //type: string
        YLeaf cvpeercommoncfgmaxconnections; //type: int32
        YLeaf cvpeercommoncfgapplicationname; //type: string
        YLeaf cvpeercommoncfgpreference; //type: int32
        YLeaf cvpeercommoncfghuntstop; //type: boolean
        YLeaf cvpeercommoncfgdnismappingname; //type: string
        YLeaf cvpeercommoncfgsourcecarrierid; //type: string
        YLeaf cvpeercommoncfgtargetcarrierid; //type: string
        YLeaf cvpeercommoncfgsourcetrunkgrplabel; //type: string
        YLeaf cvpeercommoncfgtargettrunkgrplabel; //type: string

}; // CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry


class CiscoVoiceDialControlMib::Cvcallactivetable : public Entity
{
    public:
        Cvcallactivetable();
        ~Cvcallactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcallactiveentry; //type: CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry> > cvcallactiveentry;
        
}; // CiscoVoiceDialControlMib::Cvcallactivetable


class CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry : public Entity
{
    public:
        Cvcallactiveentry();
        ~Cvcallactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactivesetuptime)
        YLeaf callactivesetuptime;
        //type: int32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactiveindex)
        YLeaf callactiveindex;
        YLeaf cvcallactiveconnectionid; //type: binary
        YLeaf cvcallactivetxduration; //type: uint32
        YLeaf cvcallactivevoicetxduration; //type: uint32
        YLeaf cvcallactivefaxtxduration; //type: uint32
        YLeaf cvcallactivecodertyperate; //type: CvccodertyperateEnum
        YLeaf cvcallactivenoiselevel; //type: int32
        YLeaf cvcallactiveacomlevel; //type: int32
        YLeaf cvcallactiveoutsignallevel; //type: int32
        YLeaf cvcallactiveinsignallevel; //type: int32
        YLeaf cvcallactiveerllevel; //type: int32
        YLeaf cvcallactivesessiontarget; //type: string
        YLeaf cvcallactiveimgpagecount; //type: uint32
        YLeaf cvcallactivecallingname; //type: string
        YLeaf cvcallactivecalleridblock; //type: boolean
        YLeaf cvcallactiveecanreflectorlocation; //type: int32
        YLeaf cvcallactiveaccountcode; //type: string
        YLeaf cvcallactiveerllevelrev1; //type: int32
        YLeaf cvcallactivecallid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry


class CiscoVoiceDialControlMib::Cvvoipcallactivetable : public Entity
{
    public:
        Cvvoipcallactivetable();
        ~Cvvoipcallactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvvoipcallactiveentry; //type: CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry> > cvvoipcallactiveentry;
        
}; // CiscoVoiceDialControlMib::Cvvoipcallactivetable


class CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry : public Entity
{
    public:
        Cvvoipcallactiveentry();
        ~Cvvoipcallactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactivesetuptime)
        YLeaf callactivesetuptime;
        //type: int32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactiveindex)
        YLeaf callactiveindex;
        YLeaf cvvoipcallactiveconnectionid; //type: binary
        YLeaf cvvoipcallactiveremoteipaddress; //type: string
        YLeaf cvvoipcallactiveremoteudpport; //type: int32
        YLeaf cvvoipcallactiveroundtripdelay; //type: uint32
        YLeaf cvvoipcallactiveselectedqos; //type: QosserviceEnum
        YLeaf cvvoipcallactivesessionprotocol; //type: CvsessionprotocolEnum
        YLeaf cvvoipcallactivesessiontarget; //type: string
        YLeaf cvvoipcallactiveontimervplayout; //type: uint32
        YLeaf cvvoipcallactivegapfillwithsilence; //type: uint32
        YLeaf cvvoipcallactivegapfillwithprediction; //type: uint32
        YLeaf cvvoipcallactivegapfillwithinterpolation; //type: uint32
        YLeaf cvvoipcallactivegapfillwithredundancy; //type: uint32
        YLeaf cvvoipcallactivehiwaterplayoutdelay; //type: uint32
        YLeaf cvvoipcallactivelowaterplayoutdelay; //type: uint32
        YLeaf cvvoipcallactivereceivedelay; //type: uint32
        YLeaf cvvoipcallactivevadenable; //type: boolean
        YLeaf cvvoipcallactivecodertyperate; //type: CvccodertyperateEnum
        YLeaf cvvoipcallactivelostpackets; //type: uint32
        YLeaf cvvoipcallactiveearlypackets; //type: uint32
        YLeaf cvvoipcallactivelatepackets; //type: uint32
        YLeaf cvvoipcallactiveusername; //type: string
        YLeaf cvvoipcallactiveprotocolcallid; //type: binary
        YLeaf cvvoipcallactiveremsigipaddrt; //type: InetaddresstypeEnum
        YLeaf cvvoipcallactiveremsigipaddr; //type: binary
        YLeaf cvvoipcallactiveremsigport; //type: int32
        YLeaf cvvoipcallactiveremmediaipaddrt; //type: InetaddresstypeEnum
        YLeaf cvvoipcallactiveremmediaipaddr; //type: binary
        YLeaf cvvoipcallactiveremmediaport; //type: int32
        YLeaf cvvoipcallactivesrtpenable; //type: boolean
        YLeaf cvvoipcallactiveoctetaligned; //type: boolean
        YLeaf cvvoipcallactivebitrates; //type: Cvamrnbbitratemode
        YLeaf cvvoipcallactivemodechgperiod; //type: int32
        YLeaf cvvoipcallactivemodechgneighbor; //type: boolean
        YLeaf cvvoipcallactivemaxptime; //type: int32
        YLeaf cvvoipcallactivecrc; //type: boolean
        YLeaf cvvoipcallactiverobustsorting; //type: boolean
        YLeaf cvvoipcallactiveencap; //type: CvamrnbrtpencapEnum
        YLeaf cvvoipcallactiveinterleaving; //type: int32
        YLeaf cvvoipcallactiveptime; //type: int32
        YLeaf cvvoipcallactivechannels; //type: int32
        YLeaf cvvoipcallactivecodermode; //type: CvilbcframemodeEnum
        YLeaf cvvoipcallactivecallid; //type: uint32
        YLeaf cvvoipcallactivecallreferenceid; //type: uint32
        YLeaf ccvoipcallactivepolicyname; //type: string
        YLeaf cvvoipcallactivereverseddirectionpeeraddress; //type: string
        YLeaf cvvoipcallactivesessionid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry


class CiscoVoiceDialControlMib::Cvcallvolconntable : public Entity
{
    public:
        Cvcallvolconntable();
        ~Cvcallvolconntable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcallvolconnentry; //type: CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry> > cvcallvolconnentry;
        
}; // CiscoVoiceDialControlMib::Cvcallvolconntable


class CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry : public Entity
{
    public:
        Cvcallvolconnentry();
        ~Cvcallvolconnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcallvolconnindex; //type: CvcallconnectiontypeEnum
        YLeaf cvcallvolconnactiveconnection; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry


class CiscoVoiceDialControlMib::Cvcallvoliftable : public Entity
{
    public:
        Cvcallvoliftable();
        ~Cvcallvoliftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcallvolifentry; //type: CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry> > cvcallvolifentry;
        
}; // CiscoVoiceDialControlMib::Cvcallvoliftable


class CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry : public Entity
{
    public:
        Cvcallvolifentry();
        ~Cvcallvolifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cvcallvolmediaincomingcalls; //type: uint32
        YLeaf cvcallvolmediaoutgoingcalls; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry


class CiscoVoiceDialControlMib::Cvcallhistorytable : public Entity
{
    public:
        Cvcallhistorytable();
        ~Cvcallhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcallhistoryentry; //type: CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry> > cvcallhistoryentry;
        
}; // CiscoVoiceDialControlMib::Cvcallhistorytable


class CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry : public Entity
{
    public:
        Cvcallhistoryentry();
        ~Cvcallhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        YLeaf ccallhistoryindex;
        YLeaf cvcallhistoryconnectionid; //type: binary
        YLeaf cvcallhistorytxduration; //type: uint32
        YLeaf cvcallhistoryvoicetxduration; //type: uint32
        YLeaf cvcallhistoryfaxtxduration; //type: uint32
        YLeaf cvcallhistorycodertyperate; //type: CvccodertyperateEnum
        YLeaf cvcallhistorynoiselevel; //type: int32
        YLeaf cvcallhistoryacomlevel; //type: int32
        YLeaf cvcallhistorysessiontarget; //type: string
        YLeaf cvcallhistoryimgpagecount; //type: uint32
        YLeaf cvcallhistorycallingname; //type: string
        YLeaf cvcallhistorycalleridblock; //type: boolean
        YLeaf cvcallhistoryaccountcode; //type: string
        YLeaf cvcallhistorycallid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry


class CiscoVoiceDialControlMib::Cvvoipcallhistorytable : public Entity
{
    public:
        Cvvoipcallhistorytable();
        ~Cvvoipcallhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvvoipcallhistoryentry; //type: CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry> > cvvoipcallhistoryentry;
        
}; // CiscoVoiceDialControlMib::Cvvoipcallhistorytable


class CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry : public Entity
{
    public:
        Cvvoipcallhistoryentry();
        ~Cvvoipcallhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        YLeaf ccallhistoryindex;
        YLeaf cvvoipcallhistoryconnectionid; //type: binary
        YLeaf cvvoipcallhistoryremoteipaddress; //type: string
        YLeaf cvvoipcallhistoryremoteudpport; //type: int32
        YLeaf cvvoipcallhistoryroundtripdelay; //type: uint32
        YLeaf cvvoipcallhistoryselectedqos; //type: QosserviceEnum
        YLeaf cvvoipcallhistorysessionprotocol; //type: CvsessionprotocolEnum
        YLeaf cvvoipcallhistorysessiontarget; //type: string
        YLeaf cvvoipcallhistoryontimervplayout; //type: uint32
        YLeaf cvvoipcallhistorygapfillwithsilence; //type: uint32
        YLeaf cvvoipcallhistorygapfillwithprediction; //type: uint32
        YLeaf cvvoipcallhistorygapfillwithinterpolation; //type: uint32
        YLeaf cvvoipcallhistorygapfillwithredundancy; //type: uint32
        YLeaf cvvoipcallhistoryhiwaterplayoutdelay; //type: uint32
        YLeaf cvvoipcallhistorylowaterplayoutdelay; //type: uint32
        YLeaf cvvoipcallhistoryreceivedelay; //type: uint32
        YLeaf cvvoipcallhistoryvadenable; //type: boolean
        YLeaf cvvoipcallhistorycodertyperate; //type: CvccodertyperateEnum
        YLeaf cvvoipcallhistoryicpif; //type: int32
        YLeaf cvvoipcallhistorylostpackets; //type: uint32
        YLeaf cvvoipcallhistoryearlypackets; //type: uint32
        YLeaf cvvoipcallhistorylatepackets; //type: uint32
        YLeaf cvvoipcallhistoryusername; //type: string
        YLeaf cvvoipcallhistoryprotocolcallid; //type: binary
        YLeaf cvvoipcallhistoryremsigipaddrt; //type: InetaddresstypeEnum
        YLeaf cvvoipcallhistoryremsigipaddr; //type: binary
        YLeaf cvvoipcallhistoryremsigport; //type: int32
        YLeaf cvvoipcallhistoryremmediaipaddrt; //type: InetaddresstypeEnum
        YLeaf cvvoipcallhistoryremmediaipaddr; //type: binary
        YLeaf cvvoipcallhistoryremmediaport; //type: int32
        YLeaf cvvoipcallhistorysrtpenable; //type: boolean
        YLeaf cvvoipcallhistoryfallbackicpif; //type: int32
        YLeaf cvvoipcallhistoryfallbackloss; //type: uint32
        YLeaf cvvoipcallhistoryfallbackdelay; //type: uint32
        YLeaf cvvoipcallhistoryoctetaligned; //type: boolean
        YLeaf cvvoipcallhistorybitrates; //type: Cvamrnbbitratemode
        YLeaf cvvoipcallhistorymodechgperiod; //type: int32
        YLeaf cvvoipcallhistorymodechgneighbor; //type: boolean
        YLeaf cvvoipcallhistorymaxptime; //type: int32
        YLeaf cvvoipcallhistorycrc; //type: boolean
        YLeaf cvvoipcallhistoryrobustsorting; //type: boolean
        YLeaf cvvoipcallhistoryencap; //type: CvamrnbrtpencapEnum
        YLeaf cvvoipcallhistoryinterleaving; //type: int32
        YLeaf cvvoipcallhistoryptime; //type: int32
        YLeaf cvvoipcallhistorychannels; //type: int32
        YLeaf cvvoipcallhistorycodermode; //type: CvilbcframemodeEnum
        YLeaf cvvoipcallhistorycallid; //type: uint32
        YLeaf cvvoipcallhistorycallreferenceid; //type: uint32
        YLeaf cvvoipcallhistorysessionid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry


class CiscoVoiceDialControlMib::Cvcallratestatstable : public Entity
{
    public:
        Cvcallratestatstable();
        ~Cvcallratestatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcallratestatsentry; //type: CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry> > cvcallratestatsentry;
        
}; // CiscoVoiceDialControlMib::Cvcallratestatstable


class CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry : public Entity
{
    public:
        Cvcallratestatsentry();
        ~Cvcallratestatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcallratestatsintvldurunits; //type: CvcallvolumestatsintvltypeEnum
        YLeaf cvcallratestatsintvldur; //type: uint32
        YLeaf cvcallratestatsmaxval; //type: uint32
        YLeaf cvcallratestatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry


class CiscoVoiceDialControlMib::Cvcalllegratestatstable : public Entity
{
    public:
        Cvcalllegratestatstable();
        ~Cvcalllegratestatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcalllegratestatsentry; //type: CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry> > cvcalllegratestatsentry;
        
}; // CiscoVoiceDialControlMib::Cvcalllegratestatstable


class CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry : public Entity
{
    public:
        Cvcalllegratestatsentry();
        ~Cvcalllegratestatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcalllegratestatsintvldurunits; //type: CvcallvolumestatsintvltypeEnum
        YLeaf cvcalllegratestatsintvldur; //type: uint32
        YLeaf cvcalllegratestatsmaxval; //type: uint32
        YLeaf cvcalllegratestatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry


class CiscoVoiceDialControlMib::Cvactivecallstatstable : public Entity
{
    public:
        Cvactivecallstatstable();
        ~Cvactivecallstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvactivecallstatsentry; //type: CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry> > cvactivecallstatsentry;
        
}; // CiscoVoiceDialControlMib::Cvactivecallstatstable


class CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry : public Entity
{
    public:
        Cvactivecallstatsentry();
        ~Cvactivecallstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvactivecallstatsintvldurunits; //type: CvcallvolumestatsintvltypeEnum
        YLeaf cvactivecallstatsintvldur; //type: uint32
        YLeaf cvactivecallstatsmaxval; //type: uint32
        YLeaf cvactivecallstatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry


class CiscoVoiceDialControlMib::Cvcalldurationstatstable : public Entity
{
    public:
        Cvcalldurationstatstable();
        ~Cvcalldurationstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcalldurationstatsentry; //type: CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry> > cvcalldurationstatsentry;
        
}; // CiscoVoiceDialControlMib::Cvcalldurationstatstable


class CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry : public Entity
{
    public:
        Cvcalldurationstatsentry();
        ~Cvcalldurationstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcalldurationstatsintvldurunits; //type: CvcallvolumestatsintvltypeEnum
        YLeaf cvcalldurationstatsintvldur; //type: uint32
        YLeaf cvcalldurationstatsmaxval; //type: uint32
        YLeaf cvcalldurationstatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry


class CiscoVoiceDialControlMib::Cvsipmsgratestatstable : public Entity
{
    public:
        Cvsipmsgratestatstable();
        ~Cvsipmsgratestatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvsipmsgratestatsentry; //type: CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry> > cvsipmsgratestatsentry;
        
}; // CiscoVoiceDialControlMib::Cvsipmsgratestatstable


class CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry : public Entity
{
    public:
        Cvsipmsgratestatsentry();
        ~Cvsipmsgratestatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvsipmsgratestatsintvldurunits; //type: CvcallvolumestatsintvltypeEnum
        YLeaf cvsipmsgratestatsintvldur; //type: uint32
        YLeaf cvsipmsgratestatsmaxval; //type: uint32
        YLeaf cvsipmsgratestatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry


class CiscoVoiceDialControlMib::Cvcallratewmtable : public Entity
{
    public:
        Cvcallratewmtable();
        ~Cvcallratewmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcallratewmentry; //type: CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry> > cvcallratewmentry;
        
}; // CiscoVoiceDialControlMib::Cvcallratewmtable


class CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry : public Entity
{
    public:
        Cvcallratewmentry();
        ~Cvcallratewmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcallratewmintvldurunits; //type: CvcallvolumewmintvltypeEnum
        YLeaf cvcallratewmindex; //type: uint32
        YLeaf cvcallratewmvalue; //type: uint32
        YLeaf cvcallratewmts; //type: string

}; // CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry


class CiscoVoiceDialControlMib::Cvcalllegratewmtable : public Entity
{
    public:
        Cvcalllegratewmtable();
        ~Cvcalllegratewmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcalllegratewmentry; //type: CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry> > cvcalllegratewmentry;
        
}; // CiscoVoiceDialControlMib::Cvcalllegratewmtable


class CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry : public Entity
{
    public:
        Cvcalllegratewmentry();
        ~Cvcalllegratewmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvcalllegratewmintvldurunits; //type: CvcallvolumewmintvltypeEnum
        YLeaf cvcalllegratewmindex; //type: uint32
        YLeaf cvcalllegratewmvalue; //type: uint32
        YLeaf cvcalllegratewmts; //type: string

}; // CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry


class CiscoVoiceDialControlMib::Cvactivecallwmtable : public Entity
{
    public:
        Cvactivecallwmtable();
        ~Cvactivecallwmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvactivecallwmentry; //type: CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry> > cvactivecallwmentry;
        
}; // CiscoVoiceDialControlMib::Cvactivecallwmtable


class CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry : public Entity
{
    public:
        Cvactivecallwmentry();
        ~Cvactivecallwmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvactivecallwmintvldurunits; //type: CvcallvolumewmintvltypeEnum
        YLeaf cvactivecallwmindex; //type: uint32
        YLeaf cvactivecallwmvalue; //type: uint32
        YLeaf cvactivecallwmts; //type: string

}; // CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry


class CiscoVoiceDialControlMib::Cvsipmsgratewmtable : public Entity
{
    public:
        Cvsipmsgratewmtable();
        ~Cvsipmsgratewmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvsipmsgratewmentry; //type: CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry> > cvsipmsgratewmentry;
        
}; // CiscoVoiceDialControlMib::Cvsipmsgratewmtable


class CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry : public Entity
{
    public:
        Cvsipmsgratewmentry();
        ~Cvsipmsgratewmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cvsipmsgratewmintvldurunits; //type: CvcallvolumewmintvltypeEnum
        YLeaf cvsipmsgratewmindex; //type: uint32
        YLeaf cvsipmsgratewmvalue; //type: uint32
        YLeaf cvsipmsgratewmts; //type: string

}; // CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry

class CvcallvolumewmintvltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf secondStats;
        static const Enum::YLeaf minuteStats;
        static const Enum::YLeaf hourStats;
        static const Enum::YLeaf fromReloadStats;

};

class CvilbcframemodeEnum : public Enum
{
    public:
        static const Enum::YLeaf frameMode20;
        static const Enum::YLeaf frameMode30;

};

class CvamrnbrtpencapEnum : public Enum
{
    public:
        static const Enum::YLeaf rfc3267;

};

class CvsessionprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf sdp;
        static const Enum::YLeaf sip;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf sccp;

};

class CvcallconnectiontypeEnum : public Enum
{
    public:
        static const Enum::YLeaf h323;
        static const Enum::YLeaf sip;
        static const Enum::YLeaf mgcp;
        static const Enum::YLeaf sccp;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf cacontrol;
        static const Enum::YLeaf telephony;

};

class CvcallvolumestatsintvltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf secondStats;
        static const Enum::YLeaf minuteStats;
        static const Enum::YLeaf hourStats;

};

class CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf voice;
        static const Enum::YLeaf voip;
        static const Enum::YLeaf mmail;
        static const Enum::YLeaf voatm;
        static const Enum::YLeaf vofr;

};

class CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::CvpeercfgpeertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf voice;
        static const Enum::YLeaf data;

};

class CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::CvvoicepeercfgechocancellertestEnum : public Enum
{
    public:
        static const Enum::YLeaf echoCancellerTestNone;
        static const Enum::YLeaf echoCancellerG168Test2A;
        static const Enum::YLeaf echoCancellerG168Test2B;
        static const Enum::YLeaf echoCancellerG168Test2Ca;
        static const Enum::YLeaf echoCancellerG168Test2Cb;
        static const Enum::YLeaf echoCancellerG168Test3A;
        static const Enum::YLeaf echoCancellerG168Test3B;
        static const Enum::YLeaf echoCancellerG168Test3C;
        static const Enum::YLeaf echoCancellerG168Test4;
        static const Enum::YLeaf echoCancellerG168Test6;
        static const Enum::YLeaf echoCancellerG168Test9;
        static const Enum::YLeaf echoCancellerG168Test5;
        static const Enum::YLeaf echoCancellerG168Test7;

};

class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgmediasettingEnum : public Enum
{
    public:
        static const Enum::YLeaf flowThrough;
        static const Enum::YLeaf flowAround;

};

class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgcodingmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf adaptive;
        static const Enum::YLeaf independent;

};

class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::CvvoippeercfgframesizeEnum : public Enum
{
    public:
        static const Enum::YLeaf frameSize30;
        static const Enum::YLeaf frameSize60;
        static const Enum::YLeaf frameSize30fixed;
        static const Enum::YLeaf frameSize60fixed;

};


}
}

#endif /* _CISCO_VOICE_DIAL_CONTROL_MIB_ */

