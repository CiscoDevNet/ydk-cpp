#ifndef _CISCO_VOICE_DIAL_CONTROL_MIB_
#define _CISCO_VOICE_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VOICE_DIAL_CONTROL_MIB {

class CiscoVoiceDialControlMib : public ydk::Entity
{
    public:
        CiscoVoiceDialControlMib();
        ~CiscoVoiceDialControlMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class CiscoVoiceDialControlMib::Cvgeneralconfiguration : public ydk::Entity
{
    public:
        Cvgeneralconfiguration();
        ~Cvgeneralconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvgeneralpoorqovnotificationenable; //type: boolean
        ydk::YLeaf cvgeneralfallbacknotificationenable; //type: boolean
        ydk::YLeaf cvgeneraldscppolicynotificationenable; //type: boolean
        ydk::YLeaf cvgeneralmediapolicynotificationenable; //type: boolean

}; // CiscoVoiceDialControlMib::Cvgeneralconfiguration


class CiscoVoiceDialControlMib::Cvgatewaycallactive : public ydk::Entity
{
    public:
        Cvgatewaycallactive();
        ~Cvgatewaycallactive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcallactiveds0s; //type: uint32
        ydk::YLeaf cvcallactiveds0shighthreshold; //type: uint32
        ydk::YLeaf cvcallactiveds0slowthreshold; //type: uint32
        ydk::YLeaf cvcallactiveds0shighnotifyenable; //type: boolean
        ydk::YLeaf cvcallactiveds0slownotifyenable; //type: boolean

}; // CiscoVoiceDialControlMib::Cvgatewaycallactive


class CiscoVoiceDialControlMib::Cvcallvolume : public ydk::Entity
{
    public:
        Cvcallvolume();
        ~Cvcallvolume();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcallvolconntotalactiveconnections; //type: uint32
        ydk::YLeaf cvcallvolconnmaxcallconnectionlicenese; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvolume


class CiscoVoiceDialControlMib::Cvcallratemonitor : public ydk::Entity
{
    public:
        Cvcallratemonitor();
        ~Cvcallratemonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcallratemonitorenable; //type: boolean
        ydk::YLeaf cvcallratemonitortime; //type: uint32
        ydk::YLeaf cvcallrate; //type: uint32
        ydk::YLeaf cvcallratehiwatermark; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallratemonitor


class CiscoVoiceDialControlMib::Cvcallvolumestatshistory : public ydk::Entity
{
    public:
        Cvcallvolumestatshistory();
        ~Cvcallvolumestatshistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcalldurationstatsthreshold; //type: uint32
        ydk::YLeaf cvcallvolumewmtablesize; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvolumestatshistory


class CiscoVoiceDialControlMib::Cvpeercfgtable : public ydk::Entity
{
    public:
        Cvpeercfgtable();
        ~Cvpeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpeercfgentry; //type: CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry> > cvpeercfgentry;
        
}; // CiscoVoiceDialControlMib::Cvpeercfgtable


class CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry : public ydk::Entity
{
    public:
        Cvpeercfgentry();
        ~Cvpeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvpeercfgindex; //type: int32
        ydk::YLeaf cvpeercfgifindex; //type: int32
        ydk::YLeaf cvpeercfgtype; //type: Cvpeercfgtype
        ydk::YLeaf cvpeercfgrowstatus; //type: Rowstatus
        ydk::YLeaf cvpeercfgpeertype; //type: Cvpeercfgpeertype
        ydk::YLeaf cvcallvolpeerincomingcalls; //type: uint32
        ydk::YLeaf cvcallvolpeeroutgoingcalls; //type: uint32
        class Cvpeercfgtype;
        class Cvpeercfgpeertype;

}; // CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry


class CiscoVoiceDialControlMib::Cvvoicepeercfgtable : public ydk::Entity
{
    public:
        Cvvoicepeercfgtable();
        ~Cvvoicepeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvvoicepeercfgentry; //type: CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry> > cvvoicepeercfgentry;
        
}; // CiscoVoiceDialControlMib::Cvvoicepeercfgtable


class CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry : public ydk::Entity
{
    public:
        Cvvoicepeercfgentry();
        ~Cvvoicepeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cvvoicepeercfgsessiontarget; //type: string
        ydk::YLeaf cvvoicepeercfgdialdigitsprefix; //type: string
        ydk::YLeaf cvvoicepeercfgdidcallenable; //type: boolean
        ydk::YLeaf cvvoicepeercfgcasgroup; //type: int32
        ydk::YLeaf cvvoicepeercfgregistere164; //type: boolean
        ydk::YLeaf cvvoicepeercfgforwarddigits; //type: int32
        ydk::YLeaf cvvoicepeercfgechocancellertest; //type: Cvvoicepeercfgechocancellertest
        class Cvvoicepeercfgechocancellertest;

}; // CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry


class CiscoVoiceDialControlMib::Cvvoippeercfgtable : public ydk::Entity
{
    public:
        Cvvoippeercfgtable();
        ~Cvvoippeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvvoippeercfgentry; //type: CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry> > cvvoippeercfgentry;
        
}; // CiscoVoiceDialControlMib::Cvvoippeercfgtable


class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry : public ydk::Entity
{
    public:
        Cvvoippeercfgentry();
        ~Cvvoippeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cvvoippeercfgsessionprotocol; //type: Cvsessionprotocol
        ydk::YLeaf cvvoippeercfgdesiredqos; //type: Qosservice
        ydk::YLeaf cvvoippeercfgminacceptableqos; //type: Qosservice
        ydk::YLeaf cvvoippeercfgsessiontarget; //type: string
        ydk::YLeaf cvvoippeercfgcoderrate; //type: Cvcspeechcoderrate
        ydk::YLeaf cvvoippeercfgfaxrate; //type: Cvcfaxtransmitrate
        ydk::YLeaf cvvoippeercfgvadenable; //type: boolean
        ydk::YLeaf cvvoippeercfgexpectfactor; //type: int32
        ydk::YLeaf cvvoippeercfgicpif; //type: int32
        ydk::YLeaf cvvoippeercfgpoorqovnotificationenable; //type: boolean
        ydk::YLeaf cvvoippeercfgudpchecksumenable; //type: boolean
        ydk::YLeaf cvvoippeercfgipprecedence; //type: int32
        ydk::YLeaf cvvoippeercfgtechprefix; //type: string
        ydk::YLeaf cvvoippeercfgdigitrelay; //type: Cvvoippeercfgdigitrelay
        ydk::YLeaf cvvoippeercfgcoderbytes; //type: int32
        ydk::YLeaf cvvoippeercfgfaxbytes; //type: int32
        ydk::YLeaf cvvoippeercfginbandsignaling; //type: Cvcinbandsignaling
        ydk::YLeaf cvvoippeercfgmediasetting; //type: Cvvoippeercfgmediasetting
        ydk::YLeaf cvvoippeercfgdesiredqosvideo; //type: Qosservice
        ydk::YLeaf cvvoippeercfgminacceptableqosvideo; //type: Qosservice
        ydk::YLeaf cvvoippeercfgredirectip2ip; //type: boolean
        ydk::YLeaf cvvoippeercfgoctetaligned; //type: boolean
        ydk::YLeaf cvvoippeercfgbitrates; //type: Cvamrnbbitratemode
        ydk::YLeaf cvvoippeercfgcrc; //type: boolean
        ydk::YLeaf cvvoippeercfgcodermode; //type: Cvilbcframemode
        ydk::YLeaf cvvoippeercfgcodingmode; //type: Cvvoippeercfgcodingmode
        ydk::YLeaf cvvoippeercfgbitrate; //type: uint32
        ydk::YLeaf cvvoippeercfgframesize; //type: Cvvoippeercfgframesize
        ydk::YLeaf cvvoippeercfgdscppolicynotificationenable; //type: boolean
        ydk::YLeaf cvvoippeercfgmediapolicynotificationenable; //type: boolean
        class Cvvoippeercfgmediasetting;
        class Cvvoippeercfgcodingmode;
        class Cvvoippeercfgframesize;

}; // CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry


class CiscoVoiceDialControlMib::Cvpeercommoncfgtable : public ydk::Entity
{
    public:
        Cvpeercommoncfgtable();
        ~Cvpeercommoncfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvpeercommoncfgentry; //type: CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry> > cvpeercommoncfgentry;
        
}; // CiscoVoiceDialControlMib::Cvpeercommoncfgtable


class CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry : public ydk::Entity
{
    public:
        Cvpeercommoncfgentry();
        ~Cvpeercommoncfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cvpeercommoncfgincomingdnisdigits; //type: string
        ydk::YLeaf cvpeercommoncfgmaxconnections; //type: int32
        ydk::YLeaf cvpeercommoncfgapplicationname; //type: string
        ydk::YLeaf cvpeercommoncfgpreference; //type: int32
        ydk::YLeaf cvpeercommoncfghuntstop; //type: boolean
        ydk::YLeaf cvpeercommoncfgdnismappingname; //type: string
        ydk::YLeaf cvpeercommoncfgsourcecarrierid; //type: string
        ydk::YLeaf cvpeercommoncfgtargetcarrierid; //type: string
        ydk::YLeaf cvpeercommoncfgsourcetrunkgrplabel; //type: string
        ydk::YLeaf cvpeercommoncfgtargettrunkgrplabel; //type: string

}; // CiscoVoiceDialControlMib::Cvpeercommoncfgtable::Cvpeercommoncfgentry


class CiscoVoiceDialControlMib::Cvcallactivetable : public ydk::Entity
{
    public:
        Cvcallactivetable();
        ~Cvcallactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcallactiveentry; //type: CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry> > cvcallactiveentry;
        
}; // CiscoVoiceDialControlMib::Cvcallactivetable


class CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry : public ydk::Entity
{
    public:
        Cvcallactiveentry();
        ~Cvcallactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactiveindex)
        ydk::YLeaf callactiveindex;
        ydk::YLeaf cvcallactiveconnectionid; //type: binary
        ydk::YLeaf cvcallactivetxduration; //type: uint32
        ydk::YLeaf cvcallactivevoicetxduration; //type: uint32
        ydk::YLeaf cvcallactivefaxtxduration; //type: uint32
        ydk::YLeaf cvcallactivecodertyperate; //type: Cvccodertyperate
        ydk::YLeaf cvcallactivenoiselevel; //type: int32
        ydk::YLeaf cvcallactiveacomlevel; //type: int32
        ydk::YLeaf cvcallactiveoutsignallevel; //type: int32
        ydk::YLeaf cvcallactiveinsignallevel; //type: int32
        ydk::YLeaf cvcallactiveerllevel; //type: int32
        ydk::YLeaf cvcallactivesessiontarget; //type: string
        ydk::YLeaf cvcallactiveimgpagecount; //type: uint32
        ydk::YLeaf cvcallactivecallingname; //type: string
        ydk::YLeaf cvcallactivecalleridblock; //type: boolean
        ydk::YLeaf cvcallactiveecanreflectorlocation; //type: int32
        ydk::YLeaf cvcallactiveaccountcode; //type: string
        ydk::YLeaf cvcallactiveerllevelrev1; //type: int32
        ydk::YLeaf cvcallactivecallid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallactivetable::Cvcallactiveentry


class CiscoVoiceDialControlMib::Cvvoipcallactivetable : public ydk::Entity
{
    public:
        Cvvoipcallactivetable();
        ~Cvvoipcallactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvvoipcallactiveentry; //type: CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry> > cvvoipcallactiveentry;
        
}; // CiscoVoiceDialControlMib::Cvvoipcallactivetable


class CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry : public ydk::Entity
{
    public:
        Cvvoipcallactiveentry();
        ~Cvvoipcallactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactiveindex)
        ydk::YLeaf callactiveindex;
        ydk::YLeaf cvvoipcallactiveconnectionid; //type: binary
        ydk::YLeaf cvvoipcallactiveremoteipaddress; //type: string
        ydk::YLeaf cvvoipcallactiveremoteudpport; //type: int32
        ydk::YLeaf cvvoipcallactiveroundtripdelay; //type: uint32
        ydk::YLeaf cvvoipcallactiveselectedqos; //type: Qosservice
        ydk::YLeaf cvvoipcallactivesessionprotocol; //type: Cvsessionprotocol
        ydk::YLeaf cvvoipcallactivesessiontarget; //type: string
        ydk::YLeaf cvvoipcallactiveontimervplayout; //type: uint32
        ydk::YLeaf cvvoipcallactivegapfillwithsilence; //type: uint32
        ydk::YLeaf cvvoipcallactivegapfillwithprediction; //type: uint32
        ydk::YLeaf cvvoipcallactivegapfillwithinterpolation; //type: uint32
        ydk::YLeaf cvvoipcallactivegapfillwithredundancy; //type: uint32
        ydk::YLeaf cvvoipcallactivehiwaterplayoutdelay; //type: uint32
        ydk::YLeaf cvvoipcallactivelowaterplayoutdelay; //type: uint32
        ydk::YLeaf cvvoipcallactivereceivedelay; //type: uint32
        ydk::YLeaf cvvoipcallactivevadenable; //type: boolean
        ydk::YLeaf cvvoipcallactivecodertyperate; //type: Cvccodertyperate
        ydk::YLeaf cvvoipcallactivelostpackets; //type: uint32
        ydk::YLeaf cvvoipcallactiveearlypackets; //type: uint32
        ydk::YLeaf cvvoipcallactivelatepackets; //type: uint32
        ydk::YLeaf cvvoipcallactiveusername; //type: string
        ydk::YLeaf cvvoipcallactiveprotocolcallid; //type: binary
        ydk::YLeaf cvvoipcallactiveremsigipaddrt; //type: Inetaddresstype
        ydk::YLeaf cvvoipcallactiveremsigipaddr; //type: binary
        ydk::YLeaf cvvoipcallactiveremsigport; //type: int32
        ydk::YLeaf cvvoipcallactiveremmediaipaddrt; //type: Inetaddresstype
        ydk::YLeaf cvvoipcallactiveremmediaipaddr; //type: binary
        ydk::YLeaf cvvoipcallactiveremmediaport; //type: int32
        ydk::YLeaf cvvoipcallactivesrtpenable; //type: boolean
        ydk::YLeaf cvvoipcallactiveoctetaligned; //type: boolean
        ydk::YLeaf cvvoipcallactivebitrates; //type: Cvamrnbbitratemode
        ydk::YLeaf cvvoipcallactivemodechgperiod; //type: int32
        ydk::YLeaf cvvoipcallactivemodechgneighbor; //type: boolean
        ydk::YLeaf cvvoipcallactivemaxptime; //type: int32
        ydk::YLeaf cvvoipcallactivecrc; //type: boolean
        ydk::YLeaf cvvoipcallactiverobustsorting; //type: boolean
        ydk::YLeaf cvvoipcallactiveencap; //type: Cvamrnbrtpencap
        ydk::YLeaf cvvoipcallactiveinterleaving; //type: int32
        ydk::YLeaf cvvoipcallactiveptime; //type: int32
        ydk::YLeaf cvvoipcallactivechannels; //type: int32
        ydk::YLeaf cvvoipcallactivecodermode; //type: Cvilbcframemode
        ydk::YLeaf cvvoipcallactivecallid; //type: uint32
        ydk::YLeaf cvvoipcallactivecallreferenceid; //type: uint32
        ydk::YLeaf ccvoipcallactivepolicyname; //type: string
        ydk::YLeaf cvvoipcallactivereverseddirectionpeeraddress; //type: string
        ydk::YLeaf cvvoipcallactivesessionid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvvoipcallactivetable::Cvvoipcallactiveentry


class CiscoVoiceDialControlMib::Cvcallvolconntable : public ydk::Entity
{
    public:
        Cvcallvolconntable();
        ~Cvcallvolconntable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcallvolconnentry; //type: CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry> > cvcallvolconnentry;
        
}; // CiscoVoiceDialControlMib::Cvcallvolconntable


class CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry : public ydk::Entity
{
    public:
        Cvcallvolconnentry();
        ~Cvcallvolconnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcallvolconnindex; //type: Cvcallconnectiontype
        ydk::YLeaf cvcallvolconnactiveconnection; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvolconntable::Cvcallvolconnentry


class CiscoVoiceDialControlMib::Cvcallvoliftable : public ydk::Entity
{
    public:
        Cvcallvoliftable();
        ~Cvcallvoliftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcallvolifentry; //type: CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry> > cvcallvolifentry;
        
}; // CiscoVoiceDialControlMib::Cvcallvoliftable


class CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry : public ydk::Entity
{
    public:
        Cvcallvolifentry();
        ~Cvcallvolifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cvcallvolmediaincomingcalls; //type: uint32
        ydk::YLeaf cvcallvolmediaoutgoingcalls; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallvoliftable::Cvcallvolifentry


class CiscoVoiceDialControlMib::Cvcallhistorytable : public ydk::Entity
{
    public:
        Cvcallhistorytable();
        ~Cvcallhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcallhistoryentry; //type: CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry> > cvcallhistoryentry;
        
}; // CiscoVoiceDialControlMib::Cvcallhistorytable


class CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry : public ydk::Entity
{
    public:
        Cvcallhistoryentry();
        ~Cvcallhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        ydk::YLeaf ccallhistoryindex;
        ydk::YLeaf cvcallhistoryconnectionid; //type: binary
        ydk::YLeaf cvcallhistorytxduration; //type: uint32
        ydk::YLeaf cvcallhistoryvoicetxduration; //type: uint32
        ydk::YLeaf cvcallhistoryfaxtxduration; //type: uint32
        ydk::YLeaf cvcallhistorycodertyperate; //type: Cvccodertyperate
        ydk::YLeaf cvcallhistorynoiselevel; //type: int32
        ydk::YLeaf cvcallhistoryacomlevel; //type: int32
        ydk::YLeaf cvcallhistorysessiontarget; //type: string
        ydk::YLeaf cvcallhistoryimgpagecount; //type: uint32
        ydk::YLeaf cvcallhistorycallingname; //type: string
        ydk::YLeaf cvcallhistorycalleridblock; //type: boolean
        ydk::YLeaf cvcallhistoryaccountcode; //type: string
        ydk::YLeaf cvcallhistorycallid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallhistorytable::Cvcallhistoryentry


class CiscoVoiceDialControlMib::Cvvoipcallhistorytable : public ydk::Entity
{
    public:
        Cvvoipcallhistorytable();
        ~Cvvoipcallhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvvoipcallhistoryentry; //type: CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry> > cvvoipcallhistoryentry;
        
}; // CiscoVoiceDialControlMib::Cvvoipcallhistorytable


class CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry : public ydk::Entity
{
    public:
        Cvvoipcallhistoryentry();
        ~Cvvoipcallhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        ydk::YLeaf ccallhistoryindex;
        ydk::YLeaf cvvoipcallhistoryconnectionid; //type: binary
        ydk::YLeaf cvvoipcallhistoryremoteipaddress; //type: string
        ydk::YLeaf cvvoipcallhistoryremoteudpport; //type: int32
        ydk::YLeaf cvvoipcallhistoryroundtripdelay; //type: uint32
        ydk::YLeaf cvvoipcallhistoryselectedqos; //type: Qosservice
        ydk::YLeaf cvvoipcallhistorysessionprotocol; //type: Cvsessionprotocol
        ydk::YLeaf cvvoipcallhistorysessiontarget; //type: string
        ydk::YLeaf cvvoipcallhistoryontimervplayout; //type: uint32
        ydk::YLeaf cvvoipcallhistorygapfillwithsilence; //type: uint32
        ydk::YLeaf cvvoipcallhistorygapfillwithprediction; //type: uint32
        ydk::YLeaf cvvoipcallhistorygapfillwithinterpolation; //type: uint32
        ydk::YLeaf cvvoipcallhistorygapfillwithredundancy; //type: uint32
        ydk::YLeaf cvvoipcallhistoryhiwaterplayoutdelay; //type: uint32
        ydk::YLeaf cvvoipcallhistorylowaterplayoutdelay; //type: uint32
        ydk::YLeaf cvvoipcallhistoryreceivedelay; //type: uint32
        ydk::YLeaf cvvoipcallhistoryvadenable; //type: boolean
        ydk::YLeaf cvvoipcallhistorycodertyperate; //type: Cvccodertyperate
        ydk::YLeaf cvvoipcallhistoryicpif; //type: int32
        ydk::YLeaf cvvoipcallhistorylostpackets; //type: uint32
        ydk::YLeaf cvvoipcallhistoryearlypackets; //type: uint32
        ydk::YLeaf cvvoipcallhistorylatepackets; //type: uint32
        ydk::YLeaf cvvoipcallhistoryusername; //type: string
        ydk::YLeaf cvvoipcallhistoryprotocolcallid; //type: binary
        ydk::YLeaf cvvoipcallhistoryremsigipaddrt; //type: Inetaddresstype
        ydk::YLeaf cvvoipcallhistoryremsigipaddr; //type: binary
        ydk::YLeaf cvvoipcallhistoryremsigport; //type: int32
        ydk::YLeaf cvvoipcallhistoryremmediaipaddrt; //type: Inetaddresstype
        ydk::YLeaf cvvoipcallhistoryremmediaipaddr; //type: binary
        ydk::YLeaf cvvoipcallhistoryremmediaport; //type: int32
        ydk::YLeaf cvvoipcallhistorysrtpenable; //type: boolean
        ydk::YLeaf cvvoipcallhistoryfallbackicpif; //type: int32
        ydk::YLeaf cvvoipcallhistoryfallbackloss; //type: uint32
        ydk::YLeaf cvvoipcallhistoryfallbackdelay; //type: uint32
        ydk::YLeaf cvvoipcallhistoryoctetaligned; //type: boolean
        ydk::YLeaf cvvoipcallhistorybitrates; //type: Cvamrnbbitratemode
        ydk::YLeaf cvvoipcallhistorymodechgperiod; //type: int32
        ydk::YLeaf cvvoipcallhistorymodechgneighbor; //type: boolean
        ydk::YLeaf cvvoipcallhistorymaxptime; //type: int32
        ydk::YLeaf cvvoipcallhistorycrc; //type: boolean
        ydk::YLeaf cvvoipcallhistoryrobustsorting; //type: boolean
        ydk::YLeaf cvvoipcallhistoryencap; //type: Cvamrnbrtpencap
        ydk::YLeaf cvvoipcallhistoryinterleaving; //type: int32
        ydk::YLeaf cvvoipcallhistoryptime; //type: int32
        ydk::YLeaf cvvoipcallhistorychannels; //type: int32
        ydk::YLeaf cvvoipcallhistorycodermode; //type: Cvilbcframemode
        ydk::YLeaf cvvoipcallhistorycallid; //type: uint32
        ydk::YLeaf cvvoipcallhistorycallreferenceid; //type: uint32
        ydk::YLeaf cvvoipcallhistorysessionid; //type: uint32

}; // CiscoVoiceDialControlMib::Cvvoipcallhistorytable::Cvvoipcallhistoryentry


class CiscoVoiceDialControlMib::Cvcallratestatstable : public ydk::Entity
{
    public:
        Cvcallratestatstable();
        ~Cvcallratestatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcallratestatsentry; //type: CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry> > cvcallratestatsentry;
        
}; // CiscoVoiceDialControlMib::Cvcallratestatstable


class CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry : public ydk::Entity
{
    public:
        Cvcallratestatsentry();
        ~Cvcallratestatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcallratestatsintvldurunits; //type: Cvcallvolumestatsintvltype
        ydk::YLeaf cvcallratestatsintvldur; //type: uint32
        ydk::YLeaf cvcallratestatsmaxval; //type: uint32
        ydk::YLeaf cvcallratestatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcallratestatstable::Cvcallratestatsentry


class CiscoVoiceDialControlMib::Cvcalllegratestatstable : public ydk::Entity
{
    public:
        Cvcalllegratestatstable();
        ~Cvcalllegratestatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcalllegratestatsentry; //type: CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry> > cvcalllegratestatsentry;
        
}; // CiscoVoiceDialControlMib::Cvcalllegratestatstable


class CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry : public ydk::Entity
{
    public:
        Cvcalllegratestatsentry();
        ~Cvcalllegratestatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcalllegratestatsintvldurunits; //type: Cvcallvolumestatsintvltype
        ydk::YLeaf cvcalllegratestatsintvldur; //type: uint32
        ydk::YLeaf cvcalllegratestatsmaxval; //type: uint32
        ydk::YLeaf cvcalllegratestatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcalllegratestatstable::Cvcalllegratestatsentry


class CiscoVoiceDialControlMib::Cvactivecallstatstable : public ydk::Entity
{
    public:
        Cvactivecallstatstable();
        ~Cvactivecallstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvactivecallstatsentry; //type: CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry> > cvactivecallstatsentry;
        
}; // CiscoVoiceDialControlMib::Cvactivecallstatstable


class CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry : public ydk::Entity
{
    public:
        Cvactivecallstatsentry();
        ~Cvactivecallstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvactivecallstatsintvldurunits; //type: Cvcallvolumestatsintvltype
        ydk::YLeaf cvactivecallstatsintvldur; //type: uint32
        ydk::YLeaf cvactivecallstatsmaxval; //type: uint32
        ydk::YLeaf cvactivecallstatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvactivecallstatstable::Cvactivecallstatsentry


class CiscoVoiceDialControlMib::Cvcalldurationstatstable : public ydk::Entity
{
    public:
        Cvcalldurationstatstable();
        ~Cvcalldurationstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcalldurationstatsentry; //type: CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry> > cvcalldurationstatsentry;
        
}; // CiscoVoiceDialControlMib::Cvcalldurationstatstable


class CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry : public ydk::Entity
{
    public:
        Cvcalldurationstatsentry();
        ~Cvcalldurationstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcalldurationstatsintvldurunits; //type: Cvcallvolumestatsintvltype
        ydk::YLeaf cvcalldurationstatsintvldur; //type: uint32
        ydk::YLeaf cvcalldurationstatsmaxval; //type: uint32
        ydk::YLeaf cvcalldurationstatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvcalldurationstatstable::Cvcalldurationstatsentry


class CiscoVoiceDialControlMib::Cvsipmsgratestatstable : public ydk::Entity
{
    public:
        Cvsipmsgratestatstable();
        ~Cvsipmsgratestatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvsipmsgratestatsentry; //type: CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry> > cvsipmsgratestatsentry;
        
}; // CiscoVoiceDialControlMib::Cvsipmsgratestatstable


class CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry : public ydk::Entity
{
    public:
        Cvsipmsgratestatsentry();
        ~Cvsipmsgratestatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvsipmsgratestatsintvldurunits; //type: Cvcallvolumestatsintvltype
        ydk::YLeaf cvsipmsgratestatsintvldur; //type: uint32
        ydk::YLeaf cvsipmsgratestatsmaxval; //type: uint32
        ydk::YLeaf cvsipmsgratestatsavgval; //type: uint32

}; // CiscoVoiceDialControlMib::Cvsipmsgratestatstable::Cvsipmsgratestatsentry


class CiscoVoiceDialControlMib::Cvcallratewmtable : public ydk::Entity
{
    public:
        Cvcallratewmtable();
        ~Cvcallratewmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcallratewmentry; //type: CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry> > cvcallratewmentry;
        
}; // CiscoVoiceDialControlMib::Cvcallratewmtable


class CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry : public ydk::Entity
{
    public:
        Cvcallratewmentry();
        ~Cvcallratewmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcallratewmintvldurunits; //type: Cvcallvolumewmintvltype
        ydk::YLeaf cvcallratewmindex; //type: uint32
        ydk::YLeaf cvcallratewmvalue; //type: uint32
        ydk::YLeaf cvcallratewmts; //type: string

}; // CiscoVoiceDialControlMib::Cvcallratewmtable::Cvcallratewmentry


class CiscoVoiceDialControlMib::Cvcalllegratewmtable : public ydk::Entity
{
    public:
        Cvcalllegratewmtable();
        ~Cvcalllegratewmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvcalllegratewmentry; //type: CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry> > cvcalllegratewmentry;
        
}; // CiscoVoiceDialControlMib::Cvcalllegratewmtable


class CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry : public ydk::Entity
{
    public:
        Cvcalllegratewmentry();
        ~Cvcalllegratewmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvcalllegratewmintvldurunits; //type: Cvcallvolumewmintvltype
        ydk::YLeaf cvcalllegratewmindex; //type: uint32
        ydk::YLeaf cvcalllegratewmvalue; //type: uint32
        ydk::YLeaf cvcalllegratewmts; //type: string

}; // CiscoVoiceDialControlMib::Cvcalllegratewmtable::Cvcalllegratewmentry


class CiscoVoiceDialControlMib::Cvactivecallwmtable : public ydk::Entity
{
    public:
        Cvactivecallwmtable();
        ~Cvactivecallwmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvactivecallwmentry; //type: CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry> > cvactivecallwmentry;
        
}; // CiscoVoiceDialControlMib::Cvactivecallwmtable


class CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry : public ydk::Entity
{
    public:
        Cvactivecallwmentry();
        ~Cvactivecallwmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvactivecallwmintvldurunits; //type: Cvcallvolumewmintvltype
        ydk::YLeaf cvactivecallwmindex; //type: uint32
        ydk::YLeaf cvactivecallwmvalue; //type: uint32
        ydk::YLeaf cvactivecallwmts; //type: string

}; // CiscoVoiceDialControlMib::Cvactivecallwmtable::Cvactivecallwmentry


class CiscoVoiceDialControlMib::Cvsipmsgratewmtable : public ydk::Entity
{
    public:
        Cvsipmsgratewmtable();
        ~Cvsipmsgratewmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cvsipmsgratewmentry; //type: CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry

        std::vector<std::shared_ptr<CISCO_VOICE_DIAL_CONTROL_MIB::CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry> > cvsipmsgratewmentry;
        
}; // CiscoVoiceDialControlMib::Cvsipmsgratewmtable


class CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry : public ydk::Entity
{
    public:
        Cvsipmsgratewmentry();
        ~Cvsipmsgratewmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cvsipmsgratewmintvldurunits; //type: Cvcallvolumewmintvltype
        ydk::YLeaf cvsipmsgratewmindex; //type: uint32
        ydk::YLeaf cvsipmsgratewmvalue; //type: uint32
        ydk::YLeaf cvsipmsgratewmts; //type: string

}; // CiscoVoiceDialControlMib::Cvsipmsgratewmtable::Cvsipmsgratewmentry

class Cvsessionprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf sdp;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf sccp;

};

class Cvcallvolumewmintvltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf secondStats;
        static const ydk::Enum::YLeaf minuteStats;
        static const ydk::Enum::YLeaf hourStats;
        static const ydk::Enum::YLeaf fromReloadStats;

};

class Cvamrnbrtpencap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3267;

};

class Cvcallconnectiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf h323;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf mgcp;
        static const ydk::Enum::YLeaf sccp;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf cacontrol;
        static const ydk::Enum::YLeaf telephony;

};

class Cvilbcframemode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frameMode20;
        static const ydk::Enum::YLeaf frameMode30;

};

class Cvcallvolumestatsintvltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf secondStats;
        static const ydk::Enum::YLeaf minuteStats;
        static const ydk::Enum::YLeaf hourStats;

};

class CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf voice;
        static const ydk::Enum::YLeaf voip;
        static const ydk::Enum::YLeaf mmail;
        static const ydk::Enum::YLeaf voatm;
        static const ydk::Enum::YLeaf vofr;

};

class CiscoVoiceDialControlMib::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgpeertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf voice;
        static const ydk::Enum::YLeaf data;

};

class CiscoVoiceDialControlMib::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echoCancellerTestNone;
        static const ydk::Enum::YLeaf echoCancellerG168Test2A;
        static const ydk::Enum::YLeaf echoCancellerG168Test2B;
        static const ydk::Enum::YLeaf echoCancellerG168Test2Ca;
        static const ydk::Enum::YLeaf echoCancellerG168Test2Cb;
        static const ydk::Enum::YLeaf echoCancellerG168Test3A;
        static const ydk::Enum::YLeaf echoCancellerG168Test3B;
        static const ydk::Enum::YLeaf echoCancellerG168Test3C;
        static const ydk::Enum::YLeaf echoCancellerG168Test4;
        static const ydk::Enum::YLeaf echoCancellerG168Test6;
        static const ydk::Enum::YLeaf echoCancellerG168Test9;
        static const ydk::Enum::YLeaf echoCancellerG168Test5;
        static const ydk::Enum::YLeaf echoCancellerG168Test7;

};

class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgmediasetting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flowThrough;
        static const ydk::Enum::YLeaf flowAround;

};

class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgcodingmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf independent;

};

class CiscoVoiceDialControlMib::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgframesize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frameSize30;
        static const ydk::Enum::YLeaf frameSize60;
        static const ydk::Enum::YLeaf frameSize30fixed;
        static const ydk::Enum::YLeaf frameSize60fixed;

};


}
}

#endif /* _CISCO_VOICE_DIAL_CONTROL_MIB_ */

