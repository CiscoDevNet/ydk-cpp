#ifndef _CISCO_NETSYNC_MIB_
#define _CISCO_NETSYNC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_NETSYNC_MIB {

class CiscoNetsyncMib : public Entity
{
    public:
        CiscoNetsyncMib();
        ~CiscoNetsyncMib();

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


class CiscoNetsyncMib::Cisconetsyncmibnotifcontrol : public Entity
{
    public:
        Cisconetsyncmibnotifcontrol();
        ~Cisconetsyncmibnotifcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnsmibenablestatusnotification; //type: boolean

}; // CiscoNetsyncMib::Cisconetsyncmibnotifcontrol


class CiscoNetsyncMib::Cnsclkselglobaltable : public Entity
{
    public:
        Cnsclkselglobaltable();
        ~Cnsclkselglobaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnsclkselglobalentry; //type: CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry> > cnsclkselglobalentry;
        
}; // CiscoNetsyncMib::Cnsclkselglobaltable


class CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry : public Entity
{
    public:
        Cnsclkselglobalentry();
        ~Cnsclkselglobalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnsclkselgloprocindex; //type: uint32
        YLeaf cnsclkselglobprocessmode; //type: CisconetsyncqlmodeEnum
        YLeaf cnsclkselglobclockmode; //type: CisconetsyncclockmodeEnum
        YLeaf cnsclkselglobnetsyncenable; //type: boolean
        YLeaf cnsclkselglobrevertivemode; //type: boolean
        YLeaf cnsclkselglobesmcmode; //type: boolean
        YLeaf cnsclkselglobeecoption; //type: CisconetsynceecoptionEnum
        YLeaf cnsclkselglobnetworkoption; //type: CisconetsyncnetworkoptionEnum
        YLeaf cnsclkselglobholdofftime; //type: uint32
        YLeaf cnsclkselglobwtrtime; //type: uint32
        YLeaf cnsclkselglobnofsources; //type: uint32
        YLeaf cnsclkselgloblastholdoverseconds; //type: uint32
        YLeaf cnsclkselglobcurrholdoverseconds; //type: uint32

}; // CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry


class CiscoNetsyncMib::Cnsselectedinputsourcetable : public Entity
{
    public:
        Cnsselectedinputsourcetable();
        ~Cnsselectedinputsourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnsselectedinputsourceentry; //type: CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry> > cnsselectedinputsourceentry;
        
}; // CiscoNetsyncMib::Cnsselectedinputsourcetable


class CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry : public Entity
{
    public:
        Cnsselectedinputsourceentry();
        ~Cnsselectedinputsourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnsselinpsrcnetsyncindex; //type: uint32
        YLeaf cnsselinpsrcname; //type: string
        YLeaf cnsselinpsrcintftype; //type: CisconetsynciftypeEnum
        YLeaf cnsselinpsrcqualitylevel; //type: CisconetsyncqualitylevelEnum
        YLeaf cnsselinpsrcpriority; //type: uint32
        YLeaf cnsselinpsrctimestamp; //type: uint32
        YLeaf cnsselinpsrcfsw; //type: boolean
        YLeaf cnsselinpsrcmsw; //type: boolean

}; // CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry


class CiscoNetsyncMib::Cnsinputsourcetable : public Entity
{
    public:
        Cnsinputsourcetable();
        ~Cnsinputsourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnsinputsourceentry; //type: CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry> > cnsinputsourceentry;
        
}; // CiscoNetsyncMib::Cnsinputsourcetable


class CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry : public Entity
{
    public:
        Cnsinputsourceentry();
        ~Cnsinputsourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnsinpsrcnetsyncindex; //type: uint32
        YLeaf cnsinpsrcname; //type: string
        YLeaf cnsinpsrcintftype; //type: CisconetsynciftypeEnum
        YLeaf cnsinpsrcpriority; //type: uint32
        YLeaf cnsinpsrcesmccap; //type: CisconetsyncesmccapEnum
        YLeaf cnsinpsrcssmcap; //type: CisconetsyncssmcapEnum
        YLeaf cnsinpsrcqualityleveltxcfg; //type: CisconetsyncqualitylevelEnum
        YLeaf cnsinpsrcqualitylevelrxcfg; //type: CisconetsyncqualitylevelEnum
        YLeaf cnsinpsrcqualityleveltx; //type: CisconetsyncqualitylevelEnum
        YLeaf cnsinpsrcqualitylevelrx; //type: CisconetsyncqualitylevelEnum
        YLeaf cnsinpsrcqualitylevel; //type: CisconetsyncqualitylevelEnum
        YLeaf cnsinpsrcholdofftime; //type: uint32
        YLeaf cnsinpsrcwtrtime; //type: uint32
        YLeaf cnsinpsrclockout; //type: boolean
        YLeaf cnsinpsrcsignalfailure; //type: boolean
        YLeaf cnsinpsrcalarm; //type: boolean
        YLeaf cnsinpsrcalarminfo; //type: Cisconetsyncalarminfo
        YLeaf cnsinpsrcfsw; //type: boolean
        YLeaf cnsinpsrcmsw; //type: boolean

}; // CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry


class CiscoNetsyncMib::Cnsextoutputtable : public Entity
{
    public:
        Cnsextoutputtable();
        ~Cnsextoutputtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnsextoutputentry; //type: CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry> > cnsextoutputentry;
        
}; // CiscoNetsyncMib::Cnsextoutputtable


class CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry : public Entity
{
    public:
        Cnsextoutputentry();
        ~Cnsextoutputentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cnsextoutlistindex; //type: uint32
        YLeaf cnsextoutselnetsyncindex; //type: uint32
        YLeaf cnsextoutname; //type: string
        YLeaf cnsextoutintftype; //type: CisconetsynciftypeEnum
        YLeaf cnsextoutqualitylevel; //type: CisconetsyncqualitylevelEnum
        YLeaf cnsextoutpriority; //type: uint32
        YLeaf cnsextoutfsw; //type: boolean
        YLeaf cnsextoutmsw; //type: boolean
        YLeaf cnsextoutsquelch; //type: boolean

}; // CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry


class CiscoNetsyncMib::Cnst4Clocksourcetable : public Entity
{
    public:
        Cnst4Clocksourcetable();
        ~Cnst4Clocksourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cnst4Clocksourceentry; //type: CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry

        std::vector<std::shared_ptr<CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry> > cnst4clocksourceentry;
        
}; // CiscoNetsyncMib::Cnst4Clocksourcetable


class CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry : public Entity
{
    public:
        Cnst4Clocksourceentry();
        ~Cnst4Clocksourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_NETSYNC_MIB::CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::cnsextoutlistindex)
        YLeaf cnsextoutlistindex;
        YLeaf cnst4clksrcnetsyncindex; //type: uint32
        YLeaf cnst4clksrcname; //type: string
        YLeaf cnst4clksrcintftype; //type: CisconetsynciftypeEnum
        YLeaf cnst4clksrcpriority; //type: uint32
        YLeaf cnst4clksrcesmccap; //type: CisconetsyncesmccapEnum
        YLeaf cnst4clksrcssmcap; //type: CisconetsyncssmcapEnum
        YLeaf cnst4clksrcqualityleveltxcfg; //type: CisconetsyncqualitylevelEnum
        YLeaf cnst4clksrcqualitylevelrxcfg; //type: CisconetsyncqualitylevelEnum
        YLeaf cnst4clksrcqualityleveltx; //type: CisconetsyncqualitylevelEnum
        YLeaf cnst4clksrcqualitylevelrx; //type: CisconetsyncqualitylevelEnum
        YLeaf cnst4clksrcqualitylevel; //type: CisconetsyncqualitylevelEnum
        YLeaf cnst4clksrcholdofftime; //type: uint32
        YLeaf cnst4clksrcwtrtime; //type: uint32
        YLeaf cnst4clksrclockout; //type: boolean
        YLeaf cnst4clksrcsignalfailure; //type: boolean
        YLeaf cnst4clksrcalarm; //type: boolean
        YLeaf cnst4clksrcalarminfo; //type: Cisconetsyncalarminfo
        YLeaf cnst4clksrcfsw; //type: boolean
        YLeaf cnst4clksrcmsw; //type: boolean

}; // CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry

class CisconetsyncesmccapEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncESMCCapNone;
        static const Enum::YLeaf netsyncESMCCapTxRx;
        static const Enum::YLeaf netsyncESMCCapTx;
        static const Enum::YLeaf netsyncESMCCapRx;
        static const Enum::YLeaf netsyncESMCCapInvalid;

};

class CisconetsyncqlmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncQLModeUnknown;
        static const Enum::YLeaf netsyncQLModeQlDisabled;
        static const Enum::YLeaf netsyncQLModeQlEnabled;

};

class CisconetsyncqualitylevelEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncQualityLevelNULL;
        static const Enum::YLeaf netsyncQualityLevelDNU;
        static const Enum::YLeaf netsyncQualityLevelDUS;
        static const Enum::YLeaf netsyncQualityLevelFAILED;
        static const Enum::YLeaf netsyncQualityLevelINV0;
        static const Enum::YLeaf netsyncQualityLevelINV1;
        static const Enum::YLeaf netsyncQualityLevelINV2;
        static const Enum::YLeaf netsyncQualityLevelINV3;
        static const Enum::YLeaf netsyncQualityLevelINV4;
        static const Enum::YLeaf netsyncQualityLevelINV5;
        static const Enum::YLeaf netsyncQualityLevelINV6;
        static const Enum::YLeaf netsyncQualityLevelINV7;
        static const Enum::YLeaf netsyncQualityLevelINV8;
        static const Enum::YLeaf netsyncQualityLevelINV9;
        static const Enum::YLeaf netsyncQualityLevelINV10;
        static const Enum::YLeaf netsyncQualityLevelINV11;
        static const Enum::YLeaf netsyncQualityLevelINV12;
        static const Enum::YLeaf netsyncQualityLevelINV13;
        static const Enum::YLeaf netsyncQualityLevelINV14;
        static const Enum::YLeaf netsyncQualityLevelINV15;
        static const Enum::YLeaf netsyncQualityLevelNSUPP;
        static const Enum::YLeaf netsyncQualityLevelPRC;
        static const Enum::YLeaf netsyncQualityLevelPROV;
        static const Enum::YLeaf netsyncQualityLevelPRS;
        static const Enum::YLeaf netsyncQualityLevelSEC;
        static const Enum::YLeaf netsyncQualityLevelSMC;
        static const Enum::YLeaf netsyncQualityLevelSSUA;
        static const Enum::YLeaf netsyncQualityLevelSSUB;
        static const Enum::YLeaf netsyncQualityLevelST2;
        static const Enum::YLeaf netsyncQualityLevelST3;
        static const Enum::YLeaf netsyncQualityLevelST3E;
        static const Enum::YLeaf netsyncQualityLevelST4;
        static const Enum::YLeaf netsyncQualityLevelSTU;
        static const Enum::YLeaf netsyncQualityLevelTNC;
        static const Enum::YLeaf netsyncQualityLevelUNC;
        static const Enum::YLeaf netsyncQualityLevelUNK;

};

class CisconetsyncclockmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncClockModeUnknown;
        static const Enum::YLeaf netsyncClockModeFreerun;
        static const Enum::YLeaf netsyncClockModeHoldover;
        static const Enum::YLeaf netsyncClockModeLocked;

};

class CisconetsyncssmcapEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncSSMCapNone;
        static const Enum::YLeaf netsyncSSMCapTxRx;
        static const Enum::YLeaf netsyncSSMCapTx;
        static const Enum::YLeaf netsyncSSMCapRx;
        static const Enum::YLeaf netsyncSSMCapInvalid;

};

class CisconetsynciftypeEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncIfTypeUnknown;
        static const Enum::YLeaf netsyncIfTypeInternal;
        static const Enum::YLeaf netsyncIfTypeEthernet;
        static const Enum::YLeaf netsyncIfTypeSonet;
        static const Enum::YLeaf netsyncIfTypeTop;
        static const Enum::YLeaf netsyncIfTypeExt;
        static const Enum::YLeaf netsyncIfTypeController;
        static const Enum::YLeaf netsyncIfTypeGps;
        static const Enum::YLeaf netsyncIfTypeAtm;

};

class CisconetsyncnetworkoptionEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncNetworkOptionUnknown;
        static const Enum::YLeaf netsyncNetworkOption1;
        static const Enum::YLeaf netsyncNetworkOption2Gen1;
        static const Enum::YLeaf netsyncNetworkOption2Gen2;
        static const Enum::YLeaf netsyncNetworkOption3;
        static const Enum::YLeaf netsyncNetworkOptionInvalid;

};

class CisconetsynceecoptionEnum : public Enum
{
    public:
        static const Enum::YLeaf netsyncEECOptionUnknown;
        static const Enum::YLeaf netsyncEECOption1;
        static const Enum::YLeaf netsyncEECOption2;
        static const Enum::YLeaf netsyncEECOptionInvalid;

};


}
}

#endif /* _CISCO_NETSYNC_MIB_ */

