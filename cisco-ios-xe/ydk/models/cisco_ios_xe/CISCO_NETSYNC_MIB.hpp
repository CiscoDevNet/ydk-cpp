#ifndef _CISCO_NETSYNC_MIB_
#define _CISCO_NETSYNC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_NETSYNC_MIB {

class CISCONETSYNCMIB : public ydk::Entity
{
    public:
        CISCONETSYNCMIB();
        ~CISCONETSYNCMIB();

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

        class Cisconetsyncmibnotifcontrol; //type: CISCONETSYNCMIB::Cisconetsyncmibnotifcontrol
        class Cnsclkselglobaltable; //type: CISCONETSYNCMIB::Cnsclkselglobaltable
        class Cnsselectedinputsourcetable; //type: CISCONETSYNCMIB::Cnsselectedinputsourcetable
        class Cnsinputsourcetable; //type: CISCONETSYNCMIB::Cnsinputsourcetable
        class Cnsextoutputtable; //type: CISCONETSYNCMIB::Cnsextoutputtable
        class Cnst4Clocksourcetable; //type: CISCONETSYNCMIB::Cnst4Clocksourcetable

        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cisconetsyncmibnotifcontrol> cisconetsyncmibnotifcontrol;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsclkselglobaltable> cnsclkselglobaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsextoutputtable> cnsextoutputtable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsinputsourcetable> cnsinputsourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsselectedinputsourcetable> cnsselectedinputsourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnst4Clocksourcetable> cnst4clocksourcetable;
        
}; // CISCONETSYNCMIB


class CISCONETSYNCMIB::Cisconetsyncmibnotifcontrol : public ydk::Entity
{
    public:
        Cisconetsyncmibnotifcontrol();
        ~Cisconetsyncmibnotifcontrol();

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

        ydk::YLeaf cnsmibenablestatusnotification; //type: boolean

}; // CISCONETSYNCMIB::Cisconetsyncmibnotifcontrol


class CISCONETSYNCMIB::Cnsclkselglobaltable : public ydk::Entity
{
    public:
        Cnsclkselglobaltable();
        ~Cnsclkselglobaltable();

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

        class Cnsclkselglobalentry; //type: CISCONETSYNCMIB::Cnsclkselglobaltable::Cnsclkselglobalentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsclkselglobaltable::Cnsclkselglobalentry> > cnsclkselglobalentry;
        
}; // CISCONETSYNCMIB::Cnsclkselglobaltable


class CISCONETSYNCMIB::Cnsclkselglobaltable::Cnsclkselglobalentry : public ydk::Entity
{
    public:
        Cnsclkselglobalentry();
        ~Cnsclkselglobalentry();

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

        ydk::YLeaf cnsclkselgloprocindex; //type: uint32
        ydk::YLeaf cnsclkselglobprocessmode; //type: CiscoNetsyncQLMode
        ydk::YLeaf cnsclkselglobclockmode; //type: CiscoNetsyncClockMode
        ydk::YLeaf cnsclkselglobnetsyncenable; //type: boolean
        ydk::YLeaf cnsclkselglobrevertivemode; //type: boolean
        ydk::YLeaf cnsclkselglobesmcmode; //type: boolean
        ydk::YLeaf cnsclkselglobeecoption; //type: CiscoNetsyncEECOption
        ydk::YLeaf cnsclkselglobnetworkoption; //type: CiscoNetsyncNetworkOption
        ydk::YLeaf cnsclkselglobholdofftime; //type: uint32
        ydk::YLeaf cnsclkselglobwtrtime; //type: uint32
        ydk::YLeaf cnsclkselglobnofsources; //type: uint32
        ydk::YLeaf cnsclkselgloblastholdoverseconds; //type: uint32
        ydk::YLeaf cnsclkselglobcurrholdoverseconds; //type: uint32

}; // CISCONETSYNCMIB::Cnsclkselglobaltable::Cnsclkselglobalentry


class CISCONETSYNCMIB::Cnsextoutputtable : public ydk::Entity
{
    public:
        Cnsextoutputtable();
        ~Cnsextoutputtable();

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

        class Cnsextoutputentry; //type: CISCONETSYNCMIB::Cnsextoutputtable::Cnsextoutputentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsextoutputtable::Cnsextoutputentry> > cnsextoutputentry;
        
}; // CISCONETSYNCMIB::Cnsextoutputtable


class CISCONETSYNCMIB::Cnsextoutputtable::Cnsextoutputentry : public ydk::Entity
{
    public:
        Cnsextoutputentry();
        ~Cnsextoutputentry();

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

        ydk::YLeaf cnsextoutlistindex; //type: uint32
        ydk::YLeaf cnsextoutselnetsyncindex; //type: uint32
        ydk::YLeaf cnsextoutname; //type: string
        ydk::YLeaf cnsextoutintftype; //type: CiscoNetsyncIfType
        ydk::YLeaf cnsextoutqualitylevel; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnsextoutpriority; //type: uint32
        ydk::YLeaf cnsextoutfsw; //type: boolean
        ydk::YLeaf cnsextoutmsw; //type: boolean
        ydk::YLeaf cnsextoutsquelch; //type: boolean

}; // CISCONETSYNCMIB::Cnsextoutputtable::Cnsextoutputentry


class CISCONETSYNCMIB::Cnsinputsourcetable : public ydk::Entity
{
    public:
        Cnsinputsourcetable();
        ~Cnsinputsourcetable();

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

        class Cnsinputsourceentry; //type: CISCONETSYNCMIB::Cnsinputsourcetable::Cnsinputsourceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsinputsourcetable::Cnsinputsourceentry> > cnsinputsourceentry;
        
}; // CISCONETSYNCMIB::Cnsinputsourcetable


class CISCONETSYNCMIB::Cnsinputsourcetable::Cnsinputsourceentry : public ydk::Entity
{
    public:
        Cnsinputsourceentry();
        ~Cnsinputsourceentry();

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

        ydk::YLeaf cnsinpsrcnetsyncindex; //type: uint32
        ydk::YLeaf cnsinpsrcname; //type: string
        ydk::YLeaf cnsinpsrcintftype; //type: CiscoNetsyncIfType
        ydk::YLeaf cnsinpsrcpriority; //type: uint32
        ydk::YLeaf cnsinpsrcesmccap; //type: CiscoNetsyncESMCCap
        ydk::YLeaf cnsinpsrcssmcap; //type: CiscoNetsyncSSMCap
        ydk::YLeaf cnsinpsrcqualityleveltxcfg; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnsinpsrcqualitylevelrxcfg; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnsinpsrcqualityleveltx; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnsinpsrcqualitylevelrx; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnsinpsrcqualitylevel; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnsinpsrcholdofftime; //type: uint32
        ydk::YLeaf cnsinpsrcwtrtime; //type: uint32
        ydk::YLeaf cnsinpsrclockout; //type: boolean
        ydk::YLeaf cnsinpsrcsignalfailure; //type: boolean
        ydk::YLeaf cnsinpsrcalarm; //type: boolean
        ydk::YLeaf cnsinpsrcalarminfo; //type: CiscoNetsyncAlarmInfo
        ydk::YLeaf cnsinpsrcfsw; //type: boolean
        ydk::YLeaf cnsinpsrcmsw; //type: boolean

}; // CISCONETSYNCMIB::Cnsinputsourcetable::Cnsinputsourceentry


class CISCONETSYNCMIB::Cnsselectedinputsourcetable : public ydk::Entity
{
    public:
        Cnsselectedinputsourcetable();
        ~Cnsselectedinputsourcetable();

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

        class Cnsselectedinputsourceentry; //type: CISCONETSYNCMIB::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry> > cnsselectedinputsourceentry;
        
}; // CISCONETSYNCMIB::Cnsselectedinputsourcetable


class CISCONETSYNCMIB::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry : public ydk::Entity
{
    public:
        Cnsselectedinputsourceentry();
        ~Cnsselectedinputsourceentry();

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

        ydk::YLeaf cnsselinpsrcnetsyncindex; //type: uint32
        ydk::YLeaf cnsselinpsrcname; //type: string
        ydk::YLeaf cnsselinpsrcintftype; //type: CiscoNetsyncIfType
        ydk::YLeaf cnsselinpsrcqualitylevel; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnsselinpsrcpriority; //type: uint32
        ydk::YLeaf cnsselinpsrctimestamp; //type: uint32
        ydk::YLeaf cnsselinpsrcfsw; //type: boolean
        ydk::YLeaf cnsselinpsrcmsw; //type: boolean

}; // CISCONETSYNCMIB::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry


class CISCONETSYNCMIB::Cnst4Clocksourcetable : public ydk::Entity
{
    public:
        Cnst4Clocksourcetable();
        ~Cnst4Clocksourcetable();

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

        class Cnst4Clocksourceentry; //type: CISCONETSYNCMIB::Cnst4Clocksourcetable::Cnst4Clocksourceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnst4Clocksourcetable::Cnst4Clocksourceentry> > cnst4clocksourceentry;
        
}; // CISCONETSYNCMIB::Cnst4Clocksourcetable


class CISCONETSYNCMIB::Cnst4Clocksourcetable::Cnst4Clocksourceentry : public ydk::Entity
{
    public:
        Cnst4Clocksourceentry();
        ~Cnst4Clocksourceentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::Cnsextoutputtable::Cnsextoutputentry::cnsextoutlistindex)
        ydk::YLeaf cnsextoutlistindex;
        ydk::YLeaf cnst4clksrcnetsyncindex; //type: uint32
        ydk::YLeaf cnst4clksrcname; //type: string
        ydk::YLeaf cnst4clksrcintftype; //type: CiscoNetsyncIfType
        ydk::YLeaf cnst4clksrcpriority; //type: uint32
        ydk::YLeaf cnst4clksrcesmccap; //type: CiscoNetsyncESMCCap
        ydk::YLeaf cnst4clksrcssmcap; //type: CiscoNetsyncSSMCap
        ydk::YLeaf cnst4clksrcqualityleveltxcfg; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnst4clksrcqualitylevelrxcfg; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnst4clksrcqualityleveltx; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnst4clksrcqualitylevelrx; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnst4clksrcqualitylevel; //type: CiscoNetsyncQualityLevel
        ydk::YLeaf cnst4clksrcholdofftime; //type: uint32
        ydk::YLeaf cnst4clksrcwtrtime; //type: uint32
        ydk::YLeaf cnst4clksrclockout; //type: boolean
        ydk::YLeaf cnst4clksrcsignalfailure; //type: boolean
        ydk::YLeaf cnst4clksrcalarm; //type: boolean
        ydk::YLeaf cnst4clksrcalarminfo; //type: CiscoNetsyncAlarmInfo
        ydk::YLeaf cnst4clksrcfsw; //type: boolean
        ydk::YLeaf cnst4clksrcmsw; //type: boolean

}; // CISCONETSYNCMIB::Cnst4Clocksourcetable::Cnst4Clocksourceentry

class CiscoNetsyncIfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncIfTypeUnknown;
        static const ydk::Enum::YLeaf netsyncIfTypeInternal;
        static const ydk::Enum::YLeaf netsyncIfTypeEthernet;
        static const ydk::Enum::YLeaf netsyncIfTypeSonet;
        static const ydk::Enum::YLeaf netsyncIfTypeTop;
        static const ydk::Enum::YLeaf netsyncIfTypeExt;
        static const ydk::Enum::YLeaf netsyncIfTypeController;
        static const ydk::Enum::YLeaf netsyncIfTypeGps;
        static const ydk::Enum::YLeaf netsyncIfTypeAtm;

};

class CiscoNetsyncQLMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncQLModeUnknown;
        static const ydk::Enum::YLeaf netsyncQLModeQlDisabled;
        static const ydk::Enum::YLeaf netsyncQLModeQlEnabled;

};

class CiscoNetsyncSSMCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncSSMCapNone;
        static const ydk::Enum::YLeaf netsyncSSMCapTxRx;
        static const ydk::Enum::YLeaf netsyncSSMCapTx;
        static const ydk::Enum::YLeaf netsyncSSMCapRx;
        static const ydk::Enum::YLeaf netsyncSSMCapInvalid;

};

class CiscoNetsyncESMCCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncESMCCapNone;
        static const ydk::Enum::YLeaf netsyncESMCCapTxRx;
        static const ydk::Enum::YLeaf netsyncESMCCapTx;
        static const ydk::Enum::YLeaf netsyncESMCCapRx;
        static const ydk::Enum::YLeaf netsyncESMCCapInvalid;

};

class CiscoNetsyncNetworkOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncNetworkOptionUnknown;
        static const ydk::Enum::YLeaf netsyncNetworkOption1;
        static const ydk::Enum::YLeaf netsyncNetworkOption2Gen1;
        static const ydk::Enum::YLeaf netsyncNetworkOption2Gen2;
        static const ydk::Enum::YLeaf netsyncNetworkOption3;
        static const ydk::Enum::YLeaf netsyncNetworkOptionInvalid;

};

class CiscoNetsyncClockMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncClockModeUnknown;
        static const ydk::Enum::YLeaf netsyncClockModeFreerun;
        static const ydk::Enum::YLeaf netsyncClockModeHoldover;
        static const ydk::Enum::YLeaf netsyncClockModeLocked;

};

class CiscoNetsyncQualityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncQualityLevelNULL;
        static const ydk::Enum::YLeaf netsyncQualityLevelDNU;
        static const ydk::Enum::YLeaf netsyncQualityLevelDUS;
        static const ydk::Enum::YLeaf netsyncQualityLevelFAILED;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV0;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV1;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV2;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV3;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV4;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV5;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV6;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV7;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV8;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV9;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV10;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV11;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV12;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV13;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV14;
        static const ydk::Enum::YLeaf netsyncQualityLevelINV15;
        static const ydk::Enum::YLeaf netsyncQualityLevelNSUPP;
        static const ydk::Enum::YLeaf netsyncQualityLevelPRC;
        static const ydk::Enum::YLeaf netsyncQualityLevelPROV;
        static const ydk::Enum::YLeaf netsyncQualityLevelPRS;
        static const ydk::Enum::YLeaf netsyncQualityLevelSEC;
        static const ydk::Enum::YLeaf netsyncQualityLevelSMC;
        static const ydk::Enum::YLeaf netsyncQualityLevelSSUA;
        static const ydk::Enum::YLeaf netsyncQualityLevelSSUB;
        static const ydk::Enum::YLeaf netsyncQualityLevelST2;
        static const ydk::Enum::YLeaf netsyncQualityLevelST3;
        static const ydk::Enum::YLeaf netsyncQualityLevelST3E;
        static const ydk::Enum::YLeaf netsyncQualityLevelST4;
        static const ydk::Enum::YLeaf netsyncQualityLevelSTU;
        static const ydk::Enum::YLeaf netsyncQualityLevelTNC;
        static const ydk::Enum::YLeaf netsyncQualityLevelUNC;
        static const ydk::Enum::YLeaf netsyncQualityLevelUNK;

};

class CiscoNetsyncEECOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncEECOptionUnknown;
        static const ydk::Enum::YLeaf netsyncEECOption1;
        static const ydk::Enum::YLeaf netsyncEECOption2;
        static const ydk::Enum::YLeaf netsyncEECOptionInvalid;

};


}
}

#endif /* _CISCO_NETSYNC_MIB_ */

