#ifndef _CISCO_NETSYNC_MIB_
#define _CISCO_NETSYNC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_NETSYNC_MIB {

class CiscoNetsyncMib : public ydk::Entity
{
    public:
        CiscoNetsyncMib();
        ~CiscoNetsyncMib();

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

        class Cisconetsyncmibnotifcontrol; //type: CiscoNetsyncMib::Cisconetsyncmibnotifcontrol
        class Cnsclkselglobaltable; //type: CiscoNetsyncMib::Cnsclkselglobaltable
        class Cnsselectedinputsourcetable; //type: CiscoNetsyncMib::Cnsselectedinputsourcetable
        class Cnsinputsourcetable; //type: CiscoNetsyncMib::Cnsinputsourcetable
        class Cnsextoutputtable; //type: CiscoNetsyncMib::Cnsextoutputtable
        class Cnst4Clocksourcetable; //type: CiscoNetsyncMib::Cnst4Clocksourcetable

        std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cisconetsyncmibnotifcontrol> cisconetsyncmibnotifcontrol;
        std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsclkselglobaltable> cnsclkselglobaltable;
        std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsextoutputtable> cnsextoutputtable;
        std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsinputsourcetable> cnsinputsourcetable;
        std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsselectedinputsourcetable> cnsselectedinputsourcetable;
        std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnst4Clocksourcetable> cnst4clocksourcetable;
        
}; // CiscoNetsyncMib


class CiscoNetsyncMib::Cisconetsyncmibnotifcontrol : public ydk::Entity
{
    public:
        Cisconetsyncmibnotifcontrol();
        ~Cisconetsyncmibnotifcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnsmibenablestatusnotification; //type: boolean

}; // CiscoNetsyncMib::Cisconetsyncmibnotifcontrol


class CiscoNetsyncMib::Cnsclkselglobaltable : public ydk::Entity
{
    public:
        Cnsclkselglobaltable();
        ~Cnsclkselglobaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnsclkselglobalentry; //type: CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry> > cnsclkselglobalentry;
        
}; // CiscoNetsyncMib::Cnsclkselglobaltable


class CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry : public ydk::Entity
{
    public:
        Cnsclkselglobalentry();
        ~Cnsclkselglobalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnsclkselgloprocindex; //type: uint32
        ydk::YLeaf cnsclkselglobprocessmode; //type: Cisconetsyncqlmode
        ydk::YLeaf cnsclkselglobclockmode; //type: Cisconetsyncclockmode
        ydk::YLeaf cnsclkselglobnetsyncenable; //type: boolean
        ydk::YLeaf cnsclkselglobrevertivemode; //type: boolean
        ydk::YLeaf cnsclkselglobesmcmode; //type: boolean
        ydk::YLeaf cnsclkselglobeecoption; //type: Cisconetsynceecoption
        ydk::YLeaf cnsclkselglobnetworkoption; //type: Cisconetsyncnetworkoption
        ydk::YLeaf cnsclkselglobholdofftime; //type: uint32
        ydk::YLeaf cnsclkselglobwtrtime; //type: uint32
        ydk::YLeaf cnsclkselglobnofsources; //type: uint32
        ydk::YLeaf cnsclkselgloblastholdoverseconds; //type: uint32
        ydk::YLeaf cnsclkselglobcurrholdoverseconds; //type: uint32

}; // CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry


class CiscoNetsyncMib::Cnsselectedinputsourcetable : public ydk::Entity
{
    public:
        Cnsselectedinputsourcetable();
        ~Cnsselectedinputsourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnsselectedinputsourceentry; //type: CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry> > cnsselectedinputsourceentry;
        
}; // CiscoNetsyncMib::Cnsselectedinputsourcetable


class CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry : public ydk::Entity
{
    public:
        Cnsselectedinputsourceentry();
        ~Cnsselectedinputsourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnsselinpsrcnetsyncindex; //type: uint32
        ydk::YLeaf cnsselinpsrcname; //type: string
        ydk::YLeaf cnsselinpsrcintftype; //type: Cisconetsynciftype
        ydk::YLeaf cnsselinpsrcqualitylevel; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnsselinpsrcpriority; //type: uint32
        ydk::YLeaf cnsselinpsrctimestamp; //type: uint32
        ydk::YLeaf cnsselinpsrcfsw; //type: boolean
        ydk::YLeaf cnsselinpsrcmsw; //type: boolean

}; // CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry


class CiscoNetsyncMib::Cnsinputsourcetable : public ydk::Entity
{
    public:
        Cnsinputsourcetable();
        ~Cnsinputsourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnsinputsourceentry; //type: CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry> > cnsinputsourceentry;
        
}; // CiscoNetsyncMib::Cnsinputsourcetable


class CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry : public ydk::Entity
{
    public:
        Cnsinputsourceentry();
        ~Cnsinputsourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnsinpsrcnetsyncindex; //type: uint32
        ydk::YLeaf cnsinpsrcname; //type: string
        ydk::YLeaf cnsinpsrcintftype; //type: Cisconetsynciftype
        ydk::YLeaf cnsinpsrcpriority; //type: uint32
        ydk::YLeaf cnsinpsrcesmccap; //type: Cisconetsyncesmccap
        ydk::YLeaf cnsinpsrcssmcap; //type: Cisconetsyncssmcap
        ydk::YLeaf cnsinpsrcqualityleveltxcfg; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnsinpsrcqualitylevelrxcfg; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnsinpsrcqualityleveltx; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnsinpsrcqualitylevelrx; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnsinpsrcqualitylevel; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnsinpsrcholdofftime; //type: uint32
        ydk::YLeaf cnsinpsrcwtrtime; //type: uint32
        ydk::YLeaf cnsinpsrclockout; //type: boolean
        ydk::YLeaf cnsinpsrcsignalfailure; //type: boolean
        ydk::YLeaf cnsinpsrcalarm; //type: boolean
        ydk::YLeaf cnsinpsrcalarminfo; //type: Cisconetsyncalarminfo
        ydk::YLeaf cnsinpsrcfsw; //type: boolean
        ydk::YLeaf cnsinpsrcmsw; //type: boolean

}; // CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry


class CiscoNetsyncMib::Cnsextoutputtable : public ydk::Entity
{
    public:
        Cnsextoutputtable();
        ~Cnsextoutputtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnsextoutputentry; //type: CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry> > cnsextoutputentry;
        
}; // CiscoNetsyncMib::Cnsextoutputtable


class CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry : public ydk::Entity
{
    public:
        Cnsextoutputentry();
        ~Cnsextoutputentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cnsextoutlistindex; //type: uint32
        ydk::YLeaf cnsextoutselnetsyncindex; //type: uint32
        ydk::YLeaf cnsextoutname; //type: string
        ydk::YLeaf cnsextoutintftype; //type: Cisconetsynciftype
        ydk::YLeaf cnsextoutqualitylevel; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnsextoutpriority; //type: uint32
        ydk::YLeaf cnsextoutfsw; //type: boolean
        ydk::YLeaf cnsextoutmsw; //type: boolean
        ydk::YLeaf cnsextoutsquelch; //type: boolean

}; // CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry


class CiscoNetsyncMib::Cnst4Clocksourcetable : public ydk::Entity
{
    public:
        Cnst4Clocksourcetable();
        ~Cnst4Clocksourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cnst4Clocksourceentry; //type: CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry> > cnst4clocksourceentry;
        
}; // CiscoNetsyncMib::Cnst4Clocksourcetable


class CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry : public ydk::Entity
{
    public:
        Cnst4Clocksourceentry();
        ~Cnst4Clocksourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::cnsextoutlistindex)
        ydk::YLeaf cnsextoutlistindex;
        ydk::YLeaf cnst4clksrcnetsyncindex; //type: uint32
        ydk::YLeaf cnst4clksrcname; //type: string
        ydk::YLeaf cnst4clksrcintftype; //type: Cisconetsynciftype
        ydk::YLeaf cnst4clksrcpriority; //type: uint32
        ydk::YLeaf cnst4clksrcesmccap; //type: Cisconetsyncesmccap
        ydk::YLeaf cnst4clksrcssmcap; //type: Cisconetsyncssmcap
        ydk::YLeaf cnst4clksrcqualityleveltxcfg; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnst4clksrcqualitylevelrxcfg; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnst4clksrcqualityleveltx; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnst4clksrcqualitylevelrx; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnst4clksrcqualitylevel; //type: Cisconetsyncqualitylevel
        ydk::YLeaf cnst4clksrcholdofftime; //type: uint32
        ydk::YLeaf cnst4clksrcwtrtime; //type: uint32
        ydk::YLeaf cnst4clksrclockout; //type: boolean
        ydk::YLeaf cnst4clksrcsignalfailure; //type: boolean
        ydk::YLeaf cnst4clksrcalarm; //type: boolean
        ydk::YLeaf cnst4clksrcalarminfo; //type: Cisconetsyncalarminfo
        ydk::YLeaf cnst4clksrcfsw; //type: boolean
        ydk::YLeaf cnst4clksrcmsw; //type: boolean

}; // CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry

class Cisconetsynciftype : public ydk::Enum
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

class Cisconetsynceecoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncEECOptionUnknown;
        static const ydk::Enum::YLeaf netsyncEECOption1;
        static const ydk::Enum::YLeaf netsyncEECOption2;
        static const ydk::Enum::YLeaf netsyncEECOptionInvalid;

};

class Cisconetsyncnetworkoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncNetworkOptionUnknown;
        static const ydk::Enum::YLeaf netsyncNetworkOption1;
        static const ydk::Enum::YLeaf netsyncNetworkOption2Gen1;
        static const ydk::Enum::YLeaf netsyncNetworkOption2Gen2;
        static const ydk::Enum::YLeaf netsyncNetworkOption3;
        static const ydk::Enum::YLeaf netsyncNetworkOptionInvalid;

};

class Cisconetsyncssmcap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncSSMCapNone;
        static const ydk::Enum::YLeaf netsyncSSMCapTxRx;
        static const ydk::Enum::YLeaf netsyncSSMCapTx;
        static const ydk::Enum::YLeaf netsyncSSMCapRx;
        static const ydk::Enum::YLeaf netsyncSSMCapInvalid;

};

class Cisconetsyncclockmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncClockModeUnknown;
        static const ydk::Enum::YLeaf netsyncClockModeFreerun;
        static const ydk::Enum::YLeaf netsyncClockModeHoldover;
        static const ydk::Enum::YLeaf netsyncClockModeLocked;

};

class Cisconetsyncqlmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncQLModeUnknown;
        static const ydk::Enum::YLeaf netsyncQLModeQlDisabled;
        static const ydk::Enum::YLeaf netsyncQLModeQlEnabled;

};

class Cisconetsyncesmccap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncESMCCapNone;
        static const ydk::Enum::YLeaf netsyncESMCCapTxRx;
        static const ydk::Enum::YLeaf netsyncESMCCapTx;
        static const ydk::Enum::YLeaf netsyncESMCCapRx;
        static const ydk::Enum::YLeaf netsyncESMCCapInvalid;

};

class Cisconetsyncqualitylevel : public ydk::Enum
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


}
}

#endif /* _CISCO_NETSYNC_MIB_ */

