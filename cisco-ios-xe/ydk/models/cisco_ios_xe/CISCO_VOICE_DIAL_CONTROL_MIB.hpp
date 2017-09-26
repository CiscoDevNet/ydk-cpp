#ifndef _CISCO_VOICE_DIAL_CONTROL_MIB_
#define _CISCO_VOICE_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VOICE_DIAL_CONTROL_MIB {

class CISCOVOICEDIALCONTROLMIB : public ydk::Entity
{
    public:
        CISCOVOICEDIALCONTROLMIB();
        ~CISCOVOICEDIALCONTROLMIB();

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

        class Cvgeneralconfiguration; //type: CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration
        class Cvgatewaycallactive; //type: CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive
        class Cvcallvolume; //type: CISCOVOICEDIALCONTROLMIB::Cvcallvolume
        class Cvcallratemonitor; //type: CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor
        class Cvcallvolumestatshistory; //type: CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory
        class Cvpeercfgtable; //type: CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable
        class Cvvoicepeercfgtable; //type: CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable
        class Cvvoippeercfgtable; //type: CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable
        class Cvpeercommoncfgtable; //type: CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable
        class Cvcallactivetable; //type: CISCOVOICEDIALCONTROLMIB::Cvcallactivetable
        class Cvvoipcallactivetable; //type: CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable
        class Cvcallvolconntable; //type: CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable
        class Cvcallvoliftable; //type: CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable
        class Cvcallhistorytable; //type: CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable
        class Cvvoipcallhistorytable; //type: CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable
        class Cvcallratestatstable; //type: CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable
        class Cvcalllegratestatstable; //type: CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable
        class Cvactivecallstatstable; //type: CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable
        class Cvcalldurationstatstable; //type: CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable
        class Cvsipmsgratestatstable; //type: CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable
        class Cvcallratewmtable; //type: CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable
        class Cvcalllegratewmtable; //type: CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable
        class Cvactivecallwmtable; //type: CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable
        class Cvsipmsgratewmtable; //type: CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable

        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable> cvactivecallstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable> cvactivecallwmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallactivetable> cvcallactivetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable> cvcalldurationstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable> cvcallhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable> cvcalllegratestatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable> cvcalllegratewmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor> cvcallratemonitor;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable> cvcallratestatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable> cvcallratewmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable> cvcallvolconntable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable> cvcallvoliftable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallvolume> cvcallvolume;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory> cvcallvolumestatshistory;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive> cvgatewaycallactive;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration> cvgeneralconfiguration;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable> cvpeercfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable> cvpeercommoncfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable> cvsipmsgratestatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable> cvsipmsgratewmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable> cvvoicepeercfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable> cvvoipcallactivetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable> cvvoipcallhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable> cvvoippeercfgtable;
        
}; // CISCOVOICEDIALCONTROLMIB


class CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable : public ydk::Entity
{
    public:
        Cvactivecallstatstable();
        ~Cvactivecallstatstable();

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

        class Cvactivecallstatsentry; //type: CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry> > cvactivecallstatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable


class CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry : public ydk::Entity
{
    public:
        Cvactivecallstatsentry();
        ~Cvactivecallstatsentry();

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

        ydk::YLeaf cvactivecallstatsintvldurunits; //type: CvCallVolumeStatsIntvlType
        ydk::YLeaf cvactivecallstatsintvldur; //type: uint32
        ydk::YLeaf cvactivecallstatsmaxval; //type: uint32
        ydk::YLeaf cvactivecallstatsavgval; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvactivecallstatstable::Cvactivecallstatsentry


class CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable : public ydk::Entity
{
    public:
        Cvactivecallwmtable();
        ~Cvactivecallwmtable();

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

        class Cvactivecallwmentry; //type: CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry> > cvactivecallwmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable


class CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry : public ydk::Entity
{
    public:
        Cvactivecallwmentry();
        ~Cvactivecallwmentry();

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

        ydk::YLeaf cvactivecallwmintvldurunits; //type: CvCallVolumeWMIntvlType
        ydk::YLeaf cvactivecallwmindex; //type: uint32
        ydk::YLeaf cvactivecallwmvalue; //type: uint32
        ydk::YLeaf cvactivecallwmts; //type: string

}; // CISCOVOICEDIALCONTROLMIB::Cvactivecallwmtable::Cvactivecallwmentry


class CISCOVOICEDIALCONTROLMIB::Cvcallactivetable : public ydk::Entity
{
    public:
        Cvcallactivetable();
        ~Cvcallactivetable();

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

        class Cvcallactiveentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry> > cvcallactiveentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcallactivetable


class CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry : public ydk::Entity
{
    public:
        Cvcallactiveentry();
        ~Cvcallactiveentry();

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

        //type: uint32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable::Callactiveentry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable::Callactiveentry::callactiveindex)
        ydk::YLeaf callactiveindex;
        ydk::YLeaf cvcallactiveconnectionid; //type: binary
        ydk::YLeaf cvcallactivetxduration; //type: uint32
        ydk::YLeaf cvcallactivevoicetxduration; //type: uint32
        ydk::YLeaf cvcallactivefaxtxduration; //type: uint32
        ydk::YLeaf cvcallactivecodertyperate; //type: CvcCoderTypeRate
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

}; // CISCOVOICEDIALCONTROLMIB::Cvcallactivetable::Cvcallactiveentry


class CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable : public ydk::Entity
{
    public:
        Cvcalldurationstatstable();
        ~Cvcalldurationstatstable();

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

        class Cvcalldurationstatsentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry> > cvcalldurationstatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable


class CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry : public ydk::Entity
{
    public:
        Cvcalldurationstatsentry();
        ~Cvcalldurationstatsentry();

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

        ydk::YLeaf cvcalldurationstatsintvldurunits; //type: CvCallVolumeStatsIntvlType
        ydk::YLeaf cvcalldurationstatsintvldur; //type: uint32
        ydk::YLeaf cvcalldurationstatsmaxval; //type: uint32
        ydk::YLeaf cvcalldurationstatsavgval; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcalldurationstatstable::Cvcalldurationstatsentry


class CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable : public ydk::Entity
{
    public:
        Cvcallhistorytable();
        ~Cvcallhistorytable();

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

        class Cvcallhistoryentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry> > cvcallhistoryentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable


class CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry : public ydk::Entity
{
    public:
        Cvcallhistoryentry();
        ~Cvcallhistoryentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        ydk::YLeaf ccallhistoryindex;
        ydk::YLeaf cvcallhistoryconnectionid; //type: binary
        ydk::YLeaf cvcallhistorytxduration; //type: uint32
        ydk::YLeaf cvcallhistoryvoicetxduration; //type: uint32
        ydk::YLeaf cvcallhistoryfaxtxduration; //type: uint32
        ydk::YLeaf cvcallhistorycodertyperate; //type: CvcCoderTypeRate
        ydk::YLeaf cvcallhistorynoiselevel; //type: int32
        ydk::YLeaf cvcallhistoryacomlevel; //type: int32
        ydk::YLeaf cvcallhistorysessiontarget; //type: string
        ydk::YLeaf cvcallhistoryimgpagecount; //type: uint32
        ydk::YLeaf cvcallhistorycallingname; //type: string
        ydk::YLeaf cvcallhistorycalleridblock; //type: boolean
        ydk::YLeaf cvcallhistoryaccountcode; //type: string
        ydk::YLeaf cvcallhistorycallid; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcallhistorytable::Cvcallhistoryentry


class CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable : public ydk::Entity
{
    public:
        Cvcalllegratestatstable();
        ~Cvcalllegratestatstable();

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

        class Cvcalllegratestatsentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry> > cvcalllegratestatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable


class CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry : public ydk::Entity
{
    public:
        Cvcalllegratestatsentry();
        ~Cvcalllegratestatsentry();

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

        ydk::YLeaf cvcalllegratestatsintvldurunits; //type: CvCallVolumeStatsIntvlType
        ydk::YLeaf cvcalllegratestatsintvldur; //type: uint32
        ydk::YLeaf cvcalllegratestatsmaxval; //type: uint32
        ydk::YLeaf cvcalllegratestatsavgval; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcalllegratestatstable::Cvcalllegratestatsentry


class CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable : public ydk::Entity
{
    public:
        Cvcalllegratewmtable();
        ~Cvcalllegratewmtable();

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

        class Cvcalllegratewmentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry> > cvcalllegratewmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable


class CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry : public ydk::Entity
{
    public:
        Cvcalllegratewmentry();
        ~Cvcalllegratewmentry();

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

        ydk::YLeaf cvcalllegratewmintvldurunits; //type: CvCallVolumeWMIntvlType
        ydk::YLeaf cvcalllegratewmindex; //type: uint32
        ydk::YLeaf cvcalllegratewmvalue; //type: uint32
        ydk::YLeaf cvcalllegratewmts; //type: string

}; // CISCOVOICEDIALCONTROLMIB::Cvcalllegratewmtable::Cvcalllegratewmentry


class CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor : public ydk::Entity
{
    public:
        Cvcallratemonitor();
        ~Cvcallratemonitor();

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

        ydk::YLeaf cvcallratemonitorenable; //type: boolean
        ydk::YLeaf cvcallratemonitortime; //type: uint32
        ydk::YLeaf cvcallrate; //type: uint32
        ydk::YLeaf cvcallratehiwatermark; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcallratemonitor


class CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable : public ydk::Entity
{
    public:
        Cvcallratestatstable();
        ~Cvcallratestatstable();

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

        class Cvcallratestatsentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry> > cvcallratestatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable


class CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry : public ydk::Entity
{
    public:
        Cvcallratestatsentry();
        ~Cvcallratestatsentry();

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

        ydk::YLeaf cvcallratestatsintvldurunits; //type: CvCallVolumeStatsIntvlType
        ydk::YLeaf cvcallratestatsintvldur; //type: uint32
        ydk::YLeaf cvcallratestatsmaxval; //type: uint32
        ydk::YLeaf cvcallratestatsavgval; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcallratestatstable::Cvcallratestatsentry


class CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable : public ydk::Entity
{
    public:
        Cvcallratewmtable();
        ~Cvcallratewmtable();

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

        class Cvcallratewmentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry> > cvcallratewmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable


class CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry : public ydk::Entity
{
    public:
        Cvcallratewmentry();
        ~Cvcallratewmentry();

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

        ydk::YLeaf cvcallratewmintvldurunits; //type: CvCallVolumeWMIntvlType
        ydk::YLeaf cvcallratewmindex; //type: uint32
        ydk::YLeaf cvcallratewmvalue; //type: uint32
        ydk::YLeaf cvcallratewmts; //type: string

}; // CISCOVOICEDIALCONTROLMIB::Cvcallratewmtable::Cvcallratewmentry


class CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable : public ydk::Entity
{
    public:
        Cvcallvolconntable();
        ~Cvcallvolconntable();

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

        class Cvcallvolconnentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry> > cvcallvolconnentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable


class CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry : public ydk::Entity
{
    public:
        Cvcallvolconnentry();
        ~Cvcallvolconnentry();

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

        ydk::YLeaf cvcallvolconnindex; //type: CvCallConnectionType
        ydk::YLeaf cvcallvolconnactiveconnection; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcallvolconntable::Cvcallvolconnentry


class CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable : public ydk::Entity
{
    public:
        Cvcallvoliftable();
        ~Cvcallvoliftable();

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

        class Cvcallvolifentry; //type: CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry> > cvcallvolifentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable


class CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry : public ydk::Entity
{
    public:
        Cvcallvolifentry();
        ~Cvcallvolifentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cvcallvolmediaincomingcalls; //type: uint32
        ydk::YLeaf cvcallvolmediaoutgoingcalls; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcallvoliftable::Cvcallvolifentry


class CISCOVOICEDIALCONTROLMIB::Cvcallvolume : public ydk::Entity
{
    public:
        Cvcallvolume();
        ~Cvcallvolume();

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

        ydk::YLeaf cvcallvolconntotalactiveconnections; //type: uint32
        ydk::YLeaf cvcallvolconnmaxcallconnectionlicenese; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcallvolume


class CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory : public ydk::Entity
{
    public:
        Cvcallvolumestatshistory();
        ~Cvcallvolumestatshistory();

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

        ydk::YLeaf cvcalldurationstatsthreshold; //type: uint32
        ydk::YLeaf cvcallvolumewmtablesize; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvcallvolumestatshistory


class CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive : public ydk::Entity
{
    public:
        Cvgatewaycallactive();
        ~Cvgatewaycallactive();

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

        ydk::YLeaf cvcallactiveds0s; //type: uint32
        ydk::YLeaf cvcallactiveds0shighthreshold; //type: uint32
        ydk::YLeaf cvcallactiveds0slowthreshold; //type: uint32
        ydk::YLeaf cvcallactiveds0shighnotifyenable; //type: boolean
        ydk::YLeaf cvcallactiveds0slownotifyenable; //type: boolean

}; // CISCOVOICEDIALCONTROLMIB::Cvgatewaycallactive


class CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration : public ydk::Entity
{
    public:
        Cvgeneralconfiguration();
        ~Cvgeneralconfiguration();

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

        ydk::YLeaf cvgeneralpoorqovnotificationenable; //type: boolean
        ydk::YLeaf cvgeneralfallbacknotificationenable; //type: boolean
        ydk::YLeaf cvgeneraldscppolicynotificationenable; //type: boolean
        ydk::YLeaf cvgeneralmediapolicynotificationenable; //type: boolean

}; // CISCOVOICEDIALCONTROLMIB::Cvgeneralconfiguration


class CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable : public ydk::Entity
{
    public:
        Cvpeercfgtable();
        ~Cvpeercfgtable();

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

        class Cvpeercfgentry; //type: CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry> > cvpeercfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable


class CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry : public ydk::Entity
{
    public:
        Cvpeercfgentry();
        ~Cvpeercfgentry();

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

        ydk::YLeaf cvpeercfgindex; //type: int32
        ydk::YLeaf cvpeercfgifindex; //type: int32
        ydk::YLeaf cvpeercfgtype; //type: Cvpeercfgtype
        ydk::YLeaf cvpeercfgrowstatus; //type: RowStatus
        ydk::YLeaf cvpeercfgpeertype; //type: Cvpeercfgpeertype
        ydk::YLeaf cvcallvolpeerincomingcalls; //type: uint32
        ydk::YLeaf cvcallvolpeeroutgoingcalls; //type: uint32
        class Cvpeercfgtype;
        class Cvpeercfgpeertype;

}; // CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry


class CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable : public ydk::Entity
{
    public:
        Cvpeercommoncfgtable();
        ~Cvpeercommoncfgtable();

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

        class Cvpeercommoncfgentry; //type: CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry> > cvpeercommoncfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable


class CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry : public ydk::Entity
{
    public:
        Cvpeercommoncfgentry();
        ~Cvpeercommoncfgentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
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

}; // CISCOVOICEDIALCONTROLMIB::Cvpeercommoncfgtable::Cvpeercommoncfgentry


class CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable : public ydk::Entity
{
    public:
        Cvsipmsgratestatstable();
        ~Cvsipmsgratestatstable();

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

        class Cvsipmsgratestatsentry; //type: CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry> > cvsipmsgratestatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable


class CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry : public ydk::Entity
{
    public:
        Cvsipmsgratestatsentry();
        ~Cvsipmsgratestatsentry();

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

        ydk::YLeaf cvsipmsgratestatsintvldurunits; //type: CvCallVolumeStatsIntvlType
        ydk::YLeaf cvsipmsgratestatsintvldur; //type: uint32
        ydk::YLeaf cvsipmsgratestatsmaxval; //type: uint32
        ydk::YLeaf cvsipmsgratestatsavgval; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvsipmsgratestatstable::Cvsipmsgratestatsentry


class CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable : public ydk::Entity
{
    public:
        Cvsipmsgratewmtable();
        ~Cvsipmsgratewmtable();

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

        class Cvsipmsgratewmentry; //type: CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry> > cvsipmsgratewmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable


class CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry : public ydk::Entity
{
    public:
        Cvsipmsgratewmentry();
        ~Cvsipmsgratewmentry();

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

        ydk::YLeaf cvsipmsgratewmintvldurunits; //type: CvCallVolumeWMIntvlType
        ydk::YLeaf cvsipmsgratewmindex; //type: uint32
        ydk::YLeaf cvsipmsgratewmvalue; //type: uint32
        ydk::YLeaf cvsipmsgratewmts; //type: string

}; // CISCOVOICEDIALCONTROLMIB::Cvsipmsgratewmtable::Cvsipmsgratewmentry


class CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable : public ydk::Entity
{
    public:
        Cvvoicepeercfgtable();
        ~Cvvoicepeercfgtable();

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

        class Cvvoicepeercfgentry; //type: CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry> > cvvoicepeercfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable


class CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry : public ydk::Entity
{
    public:
        Cvvoicepeercfgentry();
        ~Cvvoicepeercfgentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cvvoicepeercfgsessiontarget; //type: string
        ydk::YLeaf cvvoicepeercfgdialdigitsprefix; //type: string
        ydk::YLeaf cvvoicepeercfgdidcallenable; //type: boolean
        ydk::YLeaf cvvoicepeercfgcasgroup; //type: int32
        ydk::YLeaf cvvoicepeercfgregistere164; //type: boolean
        ydk::YLeaf cvvoicepeercfgforwarddigits; //type: int32
        ydk::YLeaf cvvoicepeercfgechocancellertest; //type: Cvvoicepeercfgechocancellertest
        class Cvvoicepeercfgechocancellertest;

}; // CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry


class CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable : public ydk::Entity
{
    public:
        Cvvoipcallactivetable();
        ~Cvvoipcallactivetable();

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

        class Cvvoipcallactiveentry; //type: CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry> > cvvoipcallactiveentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable


class CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry : public ydk::Entity
{
    public:
        Cvvoipcallactiveentry();
        ~Cvvoipcallactiveentry();

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

        //type: uint32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable::Callactiveentry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable::Callactiveentry::callactiveindex)
        ydk::YLeaf callactiveindex;
        ydk::YLeaf cvvoipcallactiveconnectionid; //type: binary
        ydk::YLeaf cvvoipcallactiveremoteipaddress; //type: string
        ydk::YLeaf cvvoipcallactiveremoteudpport; //type: int32
        ydk::YLeaf cvvoipcallactiveroundtripdelay; //type: uint32
        ydk::YLeaf cvvoipcallactiveselectedqos; //type: QosService
        ydk::YLeaf cvvoipcallactivesessionprotocol; //type: CvSessionProtocol
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
        ydk::YLeaf cvvoipcallactivecodertyperate; //type: CvcCoderTypeRate
        ydk::YLeaf cvvoipcallactivelostpackets; //type: uint32
        ydk::YLeaf cvvoipcallactiveearlypackets; //type: uint32
        ydk::YLeaf cvvoipcallactivelatepackets; //type: uint32
        ydk::YLeaf cvvoipcallactiveusername; //type: string
        ydk::YLeaf cvvoipcallactiveprotocolcallid; //type: binary
        ydk::YLeaf cvvoipcallactiveremsigipaddrt; //type: InetAddressType
        ydk::YLeaf cvvoipcallactiveremsigipaddr; //type: binary
        ydk::YLeaf cvvoipcallactiveremsigport; //type: int32
        ydk::YLeaf cvvoipcallactiveremmediaipaddrt; //type: InetAddressType
        ydk::YLeaf cvvoipcallactiveremmediaipaddr; //type: binary
        ydk::YLeaf cvvoipcallactiveremmediaport; //type: int32
        ydk::YLeaf cvvoipcallactivesrtpenable; //type: boolean
        ydk::YLeaf cvvoipcallactiveoctetaligned; //type: boolean
        ydk::YLeaf cvvoipcallactivebitrates; //type: CvAmrNbBitRateMode
        ydk::YLeaf cvvoipcallactivemodechgperiod; //type: int32
        ydk::YLeaf cvvoipcallactivemodechgneighbor; //type: boolean
        ydk::YLeaf cvvoipcallactivemaxptime; //type: int32
        ydk::YLeaf cvvoipcallactivecrc; //type: boolean
        ydk::YLeaf cvvoipcallactiverobustsorting; //type: boolean
        ydk::YLeaf cvvoipcallactiveencap; //type: CvAmrNbRtpEncap
        ydk::YLeaf cvvoipcallactiveinterleaving; //type: int32
        ydk::YLeaf cvvoipcallactiveptime; //type: int32
        ydk::YLeaf cvvoipcallactivechannels; //type: int32
        ydk::YLeaf cvvoipcallactivecodermode; //type: CvIlbcFrameMode
        ydk::YLeaf cvvoipcallactivecallid; //type: uint32
        ydk::YLeaf cvvoipcallactivecallreferenceid; //type: uint32
        ydk::YLeaf ccvoipcallactivepolicyname; //type: string
        ydk::YLeaf cvvoipcallactivereverseddirectionpeeraddress; //type: string
        ydk::YLeaf cvvoipcallactivesessionid; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvvoipcallactivetable::Cvvoipcallactiveentry


class CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable : public ydk::Entity
{
    public:
        Cvvoipcallhistorytable();
        ~Cvvoipcallhistorytable();

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

        class Cvvoipcallhistoryentry; //type: CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry> > cvvoipcallhistoryentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable


class CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry : public ydk::Entity
{
    public:
        Cvvoipcallhistoryentry();
        ~Cvvoipcallhistoryentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        ydk::YLeaf ccallhistoryindex;
        ydk::YLeaf cvvoipcallhistoryconnectionid; //type: binary
        ydk::YLeaf cvvoipcallhistoryremoteipaddress; //type: string
        ydk::YLeaf cvvoipcallhistoryremoteudpport; //type: int32
        ydk::YLeaf cvvoipcallhistoryroundtripdelay; //type: uint32
        ydk::YLeaf cvvoipcallhistoryselectedqos; //type: QosService
        ydk::YLeaf cvvoipcallhistorysessionprotocol; //type: CvSessionProtocol
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
        ydk::YLeaf cvvoipcallhistorycodertyperate; //type: CvcCoderTypeRate
        ydk::YLeaf cvvoipcallhistoryicpif; //type: int32
        ydk::YLeaf cvvoipcallhistorylostpackets; //type: uint32
        ydk::YLeaf cvvoipcallhistoryearlypackets; //type: uint32
        ydk::YLeaf cvvoipcallhistorylatepackets; //type: uint32
        ydk::YLeaf cvvoipcallhistoryusername; //type: string
        ydk::YLeaf cvvoipcallhistoryprotocolcallid; //type: binary
        ydk::YLeaf cvvoipcallhistoryremsigipaddrt; //type: InetAddressType
        ydk::YLeaf cvvoipcallhistoryremsigipaddr; //type: binary
        ydk::YLeaf cvvoipcallhistoryremsigport; //type: int32
        ydk::YLeaf cvvoipcallhistoryremmediaipaddrt; //type: InetAddressType
        ydk::YLeaf cvvoipcallhistoryremmediaipaddr; //type: binary
        ydk::YLeaf cvvoipcallhistoryremmediaport; //type: int32
        ydk::YLeaf cvvoipcallhistorysrtpenable; //type: boolean
        ydk::YLeaf cvvoipcallhistoryfallbackicpif; //type: int32
        ydk::YLeaf cvvoipcallhistoryfallbackloss; //type: uint32
        ydk::YLeaf cvvoipcallhistoryfallbackdelay; //type: uint32
        ydk::YLeaf cvvoipcallhistoryoctetaligned; //type: boolean
        ydk::YLeaf cvvoipcallhistorybitrates; //type: CvAmrNbBitRateMode
        ydk::YLeaf cvvoipcallhistorymodechgperiod; //type: int32
        ydk::YLeaf cvvoipcallhistorymodechgneighbor; //type: boolean
        ydk::YLeaf cvvoipcallhistorymaxptime; //type: int32
        ydk::YLeaf cvvoipcallhistorycrc; //type: boolean
        ydk::YLeaf cvvoipcallhistoryrobustsorting; //type: boolean
        ydk::YLeaf cvvoipcallhistoryencap; //type: CvAmrNbRtpEncap
        ydk::YLeaf cvvoipcallhistoryinterleaving; //type: int32
        ydk::YLeaf cvvoipcallhistoryptime; //type: int32
        ydk::YLeaf cvvoipcallhistorychannels; //type: int32
        ydk::YLeaf cvvoipcallhistorycodermode; //type: CvIlbcFrameMode
        ydk::YLeaf cvvoipcallhistorycallid; //type: uint32
        ydk::YLeaf cvvoipcallhistorycallreferenceid; //type: uint32
        ydk::YLeaf cvvoipcallhistorysessionid; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::Cvvoipcallhistorytable::Cvvoipcallhistoryentry


class CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable : public ydk::Entity
{
    public:
        Cvvoippeercfgtable();
        ~Cvvoippeercfgtable();

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

        class Cvvoippeercfgentry; //type: CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry> > cvvoippeercfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable


class CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry : public ydk::Entity
{
    public:
        Cvvoippeercfgentry();
        ~Cvvoippeercfgentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cvvoippeercfgsessionprotocol; //type: CvSessionProtocol
        ydk::YLeaf cvvoippeercfgdesiredqos; //type: QosService
        ydk::YLeaf cvvoippeercfgminacceptableqos; //type: QosService
        ydk::YLeaf cvvoippeercfgsessiontarget; //type: string
        ydk::YLeaf cvvoippeercfgcoderrate; //type: CvcSpeechCoderRate
        ydk::YLeaf cvvoippeercfgfaxrate; //type: CvcFaxTransmitRate
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
        ydk::YLeaf cvvoippeercfginbandsignaling; //type: CvcInBandSignaling
        ydk::YLeaf cvvoippeercfgmediasetting; //type: Cvvoippeercfgmediasetting
        ydk::YLeaf cvvoippeercfgdesiredqosvideo; //type: QosService
        ydk::YLeaf cvvoippeercfgminacceptableqosvideo; //type: QosService
        ydk::YLeaf cvvoippeercfgredirectip2ip; //type: boolean
        ydk::YLeaf cvvoippeercfgoctetaligned; //type: boolean
        ydk::YLeaf cvvoippeercfgbitrates; //type: CvAmrNbBitRateMode
        ydk::YLeaf cvvoippeercfgcrc; //type: boolean
        ydk::YLeaf cvvoippeercfgcodermode; //type: CvIlbcFrameMode
        ydk::YLeaf cvvoippeercfgcodingmode; //type: Cvvoippeercfgcodingmode
        ydk::YLeaf cvvoippeercfgbitrate; //type: uint32
        ydk::YLeaf cvvoippeercfgframesize; //type: Cvvoippeercfgframesize
        ydk::YLeaf cvvoippeercfgdscppolicynotificationenable; //type: boolean
        ydk::YLeaf cvvoippeercfgmediapolicynotificationenable; //type: boolean
        class Cvvoippeercfgmediasetting;
        class Cvvoippeercfgcodingmode;
        class Cvvoippeercfgframesize;

}; // CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry

class CvCallConnectionType : public ydk::Enum
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

class CvSessionProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf sdp;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf sccp;

};

class CvCallVolumeWMIntvlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf secondStats;
        static const ydk::Enum::YLeaf minuteStats;
        static const ydk::Enum::YLeaf hourStats;
        static const ydk::Enum::YLeaf fromReloadStats;

};

class CvIlbcFrameMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frameMode20;
        static const ydk::Enum::YLeaf frameMode30;

};

class CvCallVolumeStatsIntvlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf secondStats;
        static const ydk::Enum::YLeaf minuteStats;
        static const ydk::Enum::YLeaf hourStats;

};

class CvAmrNbRtpEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3267;

};

class CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf voice;
        static const ydk::Enum::YLeaf voip;
        static const ydk::Enum::YLeaf mmail;
        static const ydk::Enum::YLeaf voatm;
        static const ydk::Enum::YLeaf vofr;

};

class CISCOVOICEDIALCONTROLMIB::Cvpeercfgtable::Cvpeercfgentry::Cvpeercfgpeertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf voice;
        static const ydk::Enum::YLeaf data;

};

class CISCOVOICEDIALCONTROLMIB::Cvvoicepeercfgtable::Cvvoicepeercfgentry::Cvvoicepeercfgechocancellertest : public ydk::Enum
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

class CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgmediasetting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flowThrough;
        static const ydk::Enum::YLeaf flowAround;

};

class CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgcodingmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf independent;

};

class CISCOVOICEDIALCONTROLMIB::Cvvoippeercfgtable::Cvvoippeercfgentry::Cvvoippeercfgframesize : public ydk::Enum
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

