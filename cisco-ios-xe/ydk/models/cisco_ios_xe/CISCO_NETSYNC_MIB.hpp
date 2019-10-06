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

        class CiscoNetsyncMIBNotifControl; //type: CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl
        class CnsClkSelGlobalTable; //type: CISCONETSYNCMIB::CnsClkSelGlobalTable
        class CnsSelectedInputSourceTable; //type: CISCONETSYNCMIB::CnsSelectedInputSourceTable
        class CnsInputSourceTable; //type: CISCONETSYNCMIB::CnsInputSourceTable
        class CnsExtOutputTable; //type: CISCONETSYNCMIB::CnsExtOutputTable
        class CnsT4ClockSourceTable; //type: CISCONETSYNCMIB::CnsT4ClockSourceTable

        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl> cisconetsyncmibnotifcontrol;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::CnsClkSelGlobalTable> cnsclkselglobaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::CnsSelectedInputSourceTable> cnsselectedinputsourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::CnsInputSourceTable> cnsinputsourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::CnsExtOutputTable> cnsextoutputtable;
        std::shared_ptr<cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::CnsT4ClockSourceTable> cnst4clocksourcetable;
        
}; // CISCONETSYNCMIB


class CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl : public ydk::Entity
{
    public:
        CiscoNetsyncMIBNotifControl();
        ~CiscoNetsyncMIBNotifControl();

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

}; // CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl


class CISCONETSYNCMIB::CnsClkSelGlobalTable : public ydk::Entity
{
    public:
        CnsClkSelGlobalTable();
        ~CnsClkSelGlobalTable();

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

        class CnsClkSelGlobalEntry; //type: CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry

        ydk::YList cnsclkselglobalentry;
        
}; // CISCONETSYNCMIB::CnsClkSelGlobalTable


class CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry : public ydk::Entity
{
    public:
        CnsClkSelGlobalEntry();
        ~CnsClkSelGlobalEntry();

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

}; // CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry


class CISCONETSYNCMIB::CnsSelectedInputSourceTable : public ydk::Entity
{
    public:
        CnsSelectedInputSourceTable();
        ~CnsSelectedInputSourceTable();

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

        class CnsSelectedInputSourceEntry; //type: CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry

        ydk::YList cnsselectedinputsourceentry;
        
}; // CISCONETSYNCMIB::CnsSelectedInputSourceTable


class CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry : public ydk::Entity
{
    public:
        CnsSelectedInputSourceEntry();
        ~CnsSelectedInputSourceEntry();

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

}; // CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry


class CISCONETSYNCMIB::CnsInputSourceTable : public ydk::Entity
{
    public:
        CnsInputSourceTable();
        ~CnsInputSourceTable();

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

        class CnsInputSourceEntry; //type: CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry

        ydk::YList cnsinputsourceentry;
        
}; // CISCONETSYNCMIB::CnsInputSourceTable


class CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry : public ydk::Entity
{
    public:
        CnsInputSourceEntry();
        ~CnsInputSourceEntry();

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

}; // CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry


class CISCONETSYNCMIB::CnsExtOutputTable : public ydk::Entity
{
    public:
        CnsExtOutputTable();
        ~CnsExtOutputTable();

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

        class CnsExtOutputEntry; //type: CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry

        ydk::YList cnsextoutputentry;
        
}; // CISCONETSYNCMIB::CnsExtOutputTable


class CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry : public ydk::Entity
{
    public:
        CnsExtOutputEntry();
        ~CnsExtOutputEntry();

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

}; // CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry


class CISCONETSYNCMIB::CnsT4ClockSourceTable : public ydk::Entity
{
    public:
        CnsT4ClockSourceTable();
        ~CnsT4ClockSourceTable();

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

        class CnsT4ClockSourceEntry; //type: CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry

        ydk::YList cnst4clocksourceentry;
        
}; // CISCONETSYNCMIB::CnsT4ClockSourceTable


class CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry : public ydk::Entity
{
    public:
        CnsT4ClockSourceEntry();
        ~CnsT4ClockSourceEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_NETSYNC_MIB::CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::cnsextoutlistindex)
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

}; // CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry

class CiscoNetsyncESMCCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncESMCCapNone;
        static const ydk::Enum::YLeaf netsyncESMCCapTxRx;
        static const ydk::Enum::YLeaf netsyncESMCCapTx;
        static const ydk::Enum::YLeaf netsyncESMCCapRx;
        static const ydk::Enum::YLeaf netsyncESMCCapInvalid;

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncESMCCapNone") return 1;
            if (name == "netsyncESMCCapTxRx") return 2;
            if (name == "netsyncESMCCapTx") return 3;
            if (name == "netsyncESMCCapRx") return 4;
            if (name == "netsyncESMCCapInvalid") return 5;
            return -1;
        }
};

class CiscoNetsyncQLMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncQLModeUnknown;
        static const ydk::Enum::YLeaf netsyncQLModeQlDisabled;
        static const ydk::Enum::YLeaf netsyncQLModeQlEnabled;

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncQLModeUnknown") return 1;
            if (name == "netsyncQLModeQlDisabled") return 2;
            if (name == "netsyncQLModeQlEnabled") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncQualityLevelNULL") return 1;
            if (name == "netsyncQualityLevelDNU") return 2;
            if (name == "netsyncQualityLevelDUS") return 3;
            if (name == "netsyncQualityLevelFAILED") return 4;
            if (name == "netsyncQualityLevelINV0") return 5;
            if (name == "netsyncQualityLevelINV1") return 6;
            if (name == "netsyncQualityLevelINV2") return 7;
            if (name == "netsyncQualityLevelINV3") return 8;
            if (name == "netsyncQualityLevelINV4") return 9;
            if (name == "netsyncQualityLevelINV5") return 10;
            if (name == "netsyncQualityLevelINV6") return 11;
            if (name == "netsyncQualityLevelINV7") return 12;
            if (name == "netsyncQualityLevelINV8") return 13;
            if (name == "netsyncQualityLevelINV9") return 14;
            if (name == "netsyncQualityLevelINV10") return 15;
            if (name == "netsyncQualityLevelINV11") return 16;
            if (name == "netsyncQualityLevelINV12") return 17;
            if (name == "netsyncQualityLevelINV13") return 18;
            if (name == "netsyncQualityLevelINV14") return 19;
            if (name == "netsyncQualityLevelINV15") return 20;
            if (name == "netsyncQualityLevelNSUPP") return 21;
            if (name == "netsyncQualityLevelPRC") return 22;
            if (name == "netsyncQualityLevelPROV") return 23;
            if (name == "netsyncQualityLevelPRS") return 24;
            if (name == "netsyncQualityLevelSEC") return 25;
            if (name == "netsyncQualityLevelSMC") return 26;
            if (name == "netsyncQualityLevelSSUA") return 27;
            if (name == "netsyncQualityLevelSSUB") return 28;
            if (name == "netsyncQualityLevelST2") return 29;
            if (name == "netsyncQualityLevelST3") return 30;
            if (name == "netsyncQualityLevelST3E") return 31;
            if (name == "netsyncQualityLevelST4") return 32;
            if (name == "netsyncQualityLevelSTU") return 33;
            if (name == "netsyncQualityLevelTNC") return 34;
            if (name == "netsyncQualityLevelUNC") return 35;
            if (name == "netsyncQualityLevelUNK") return 36;
            return -1;
        }
};

class CiscoNetsyncClockMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncClockModeUnknown;
        static const ydk::Enum::YLeaf netsyncClockModeFreerun;
        static const ydk::Enum::YLeaf netsyncClockModeHoldover;
        static const ydk::Enum::YLeaf netsyncClockModeLocked;

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncClockModeUnknown") return 1;
            if (name == "netsyncClockModeFreerun") return 2;
            if (name == "netsyncClockModeHoldover") return 3;
            if (name == "netsyncClockModeLocked") return 4;
            return -1;
        }
};

class CiscoNetsyncSSMCap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncSSMCapNone;
        static const ydk::Enum::YLeaf netsyncSSMCapTxRx;
        static const ydk::Enum::YLeaf netsyncSSMCapTx;
        static const ydk::Enum::YLeaf netsyncSSMCapRx;
        static const ydk::Enum::YLeaf netsyncSSMCapInvalid;

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncSSMCapNone") return 1;
            if (name == "netsyncSSMCapTxRx") return 2;
            if (name == "netsyncSSMCapTx") return 3;
            if (name == "netsyncSSMCapRx") return 4;
            if (name == "netsyncSSMCapInvalid") return 5;
            return -1;
        }
};

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

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncIfTypeUnknown") return 1;
            if (name == "netsyncIfTypeInternal") return 2;
            if (name == "netsyncIfTypeEthernet") return 3;
            if (name == "netsyncIfTypeSonet") return 4;
            if (name == "netsyncIfTypeTop") return 5;
            if (name == "netsyncIfTypeExt") return 6;
            if (name == "netsyncIfTypeController") return 7;
            if (name == "netsyncIfTypeGps") return 8;
            if (name == "netsyncIfTypeAtm") return 9;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncNetworkOptionUnknown") return 1;
            if (name == "netsyncNetworkOption1") return 2;
            if (name == "netsyncNetworkOption2Gen1") return 3;
            if (name == "netsyncNetworkOption2Gen2") return 4;
            if (name == "netsyncNetworkOption3") return 5;
            if (name == "netsyncNetworkOptionInvalid") return 6;
            return -1;
        }
};

class CiscoNetsyncEECOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf netsyncEECOptionUnknown;
        static const ydk::Enum::YLeaf netsyncEECOption1;
        static const ydk::Enum::YLeaf netsyncEECOption2;
        static const ydk::Enum::YLeaf netsyncEECOptionInvalid;

        static int get_enum_value(const std::string & name) {
            if (name == "netsyncEECOptionUnknown") return 1;
            if (name == "netsyncEECOption1") return 2;
            if (name == "netsyncEECOption2") return 3;
            if (name == "netsyncEECOptionInvalid") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_NETSYNC_MIB_ */

