#ifndef _CISCO_SONET_MIB_
#define _CISCO_SONET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_SONET_MIB {

class CISCOSONETMIB : public ydk::Entity
{
    public:
        CISCOSONETMIB();
        ~CISCOSONETMIB();

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

        class CsApsConfig; //type: CISCOSONETMIB::CsApsConfig
        class CsNotifications; //type: CISCOSONETMIB::CsNotifications
        class CsConfigTable; //type: CISCOSONETMIB::CsConfigTable
        class CsApsConfigTable; //type: CISCOSONETMIB::CsApsConfigTable
        class CssTotalTable; //type: CISCOSONETMIB::CssTotalTable
        class CssTraceTable; //type: CISCOSONETMIB::CssTraceTable
        class CslTotalTable; //type: CISCOSONETMIB::CslTotalTable
        class CslFarEndTotalTable; //type: CISCOSONETMIB::CslFarEndTotalTable
        class CspTotalTable; //type: CISCOSONETMIB::CspTotalTable
        class CspFarEndTotalTable; //type: CISCOSONETMIB::CspFarEndTotalTable
        class CspTraceTable; //type: CISCOSONETMIB::CspTraceTable
        class CsStatsTable; //type: CISCOSONETMIB::CsStatsTable
        class CsAu4Tug3ConfigTable; //type: CISCOSONETMIB::CsAu4Tug3ConfigTable

        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CsApsConfig> csapsconfig;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CsNotifications> csnotifications;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CsConfigTable> csconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CsApsConfigTable> csapsconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CssTotalTable> csstotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CssTraceTable> csstracetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CslTotalTable> csltotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CslFarEndTotalTable> cslfarendtotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CspTotalTable> csptotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CspFarEndTotalTable> cspfarendtotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CspTraceTable> csptracetable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CsStatsTable> csstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_SONET_MIB::CISCOSONETMIB::CsAu4Tug3ConfigTable> csau4tug3configtable;
        
}; // CISCOSONETMIB


class CISCOSONETMIB::CsApsConfig : public ydk::Entity
{
    public:
        CsApsConfig();
        ~CsApsConfig();

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

        ydk::YLeaf csapslinefailurecode; //type: CsApsLineFailureCode
        ydk::YLeaf csapslineswitchreason; //type: CsApsLineSwitchReason

}; // CISCOSONETMIB::CsApsConfig


class CISCOSONETMIB::CsNotifications : public ydk::Entity
{
    public:
        CsNotifications();
        ~CsNotifications();

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

        ydk::YLeaf csnotificationsenabled; //type: boolean

}; // CISCOSONETMIB::CsNotifications


class CISCOSONETMIB::CsConfigTable : public ydk::Entity
{
    public:
        CsConfigTable();
        ~CsConfigTable();

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

        class CsConfigEntry; //type: CISCOSONETMIB::CsConfigTable::CsConfigEntry

        ydk::YList csconfigentry;
        
}; // CISCOSONETMIB::CsConfigTable


class CISCOSONETMIB::CsConfigTable::CsConfigEntry : public ydk::Entity
{
    public:
        CsConfigEntry();
        ~CsConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csconfigloopbacktype; //type: CsConfigLoopbackType
        ydk::YLeaf csconfigxmtclocksource; //type: CsConfigXmtClockSource
        ydk::YLeaf csconfigframescramble; //type: CsConfigFrameScramble
        ydk::YLeaf csconfigtype; //type: CsConfigType
        ydk::YLeaf csconfigrdivtype; //type: CsConfigRDIVType
        ydk::YLeaf csconfigrdiptype; //type: CsConfigRDIPType
        ydk::YLeaf cstributarytype; //type: CsTributaryType
        ydk::YLeaf cstributarymappingtype; //type: CsTributaryMappingType
        ydk::YLeaf cstributaryframingtype; //type: CsTributaryFramingType
        ydk::YLeaf cssignallingtransportmode; //type: CsSignallingTransportMode
        ydk::YLeaf cstributarygroupingtype; //type: CsTributaryGroupingType
        class CsConfigLoopbackType;
        class CsConfigXmtClockSource;
        class CsConfigFrameScramble;
        class CsConfigType;
        class CsConfigRDIVType;
        class CsConfigRDIPType;
        class CsTributaryType;
        class CsTributaryMappingType;
        class CsTributaryFramingType;
        class CsSignallingTransportMode;
        class CsTributaryGroupingType;

}; // CISCOSONETMIB::CsConfigTable::CsConfigEntry


class CISCOSONETMIB::CsApsConfigTable : public ydk::Entity
{
    public:
        CsApsConfigTable();
        ~CsApsConfigTable();

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

        class CsApsConfigEntry; //type: CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry

        ydk::YList csapsconfigentry;
        
}; // CISCOSONETMIB::CsApsConfigTable


class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry : public ydk::Entity
{
    public:
        CsApsConfigEntry();
        ~CsApsConfigEntry();

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

        ydk::YLeaf csapsworkingindex; //type: int32
        ydk::YLeaf csapsprotectionindex; //type: int32
        ydk::YLeaf csapsenable; //type: CsApsEnable
        ydk::YLeaf csapsarchmode; //type: CsApsArchMode
        ydk::YLeaf csapsactiveline; //type: CsApsActiveLine
        ydk::YLeaf csapssigfaultber; //type: uint32
        ydk::YLeaf csapssigdegradeber; //type: uint32
        ydk::YLeaf csapswaittorestore; //type: uint32
        ydk::YLeaf csapsdirection; //type: CsApsDirection
        ydk::YLeaf csapsrevertive; //type: CsApsRevertive
        ydk::YLeaf csapsdirectionoperational; //type: CsApsDirectionOperational
        ydk::YLeaf csapsarchmodeoperational; //type: CsApsArchModeOperational
        ydk::YLeaf csapschannelprotocol; //type: CsApsChannelProtocol
        ydk::YLeaf csapsfailurestatus; //type: CsApsLineFailureStatus
        ydk::YLeaf csapsswitchreason; //type: CsApsLineSwitchReason
        ydk::YLeaf csapsprimarysection; //type: CsApsPrimarySection
        class CsApsEnable;
        class CsApsArchMode;
        class CsApsActiveLine;
        class CsApsDirection;
        class CsApsRevertive;
        class CsApsDirectionOperational;
        class CsApsArchModeOperational;
        class CsApsChannelProtocol;
        class CsApsPrimarySection;

}; // CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry


class CISCOSONETMIB::CssTotalTable : public ydk::Entity
{
    public:
        CssTotalTable();
        ~CssTotalTable();

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

        class CssTotalEntry; //type: CISCOSONETMIB::CssTotalTable::CssTotalEntry

        ydk::YList csstotalentry;
        
}; // CISCOSONETMIB::CssTotalTable


class CISCOSONETMIB::CssTotalTable::CssTotalEntry : public ydk::Entity
{
    public:
        CssTotalEntry();
        ~CssTotalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csstotaless; //type: uint32
        ydk::YLeaf csstotalsess; //type: uint32
        ydk::YLeaf csstotalsefss; //type: uint32
        ydk::YLeaf csstotalcvs; //type: uint32

}; // CISCOSONETMIB::CssTotalTable::CssTotalEntry


class CISCOSONETMIB::CssTraceTable : public ydk::Entity
{
    public:
        CssTraceTable();
        ~CssTraceTable();

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

        class CssTraceEntry; //type: CISCOSONETMIB::CssTraceTable::CssTraceEntry

        ydk::YList csstraceentry;
        
}; // CISCOSONETMIB::CssTraceTable


class CISCOSONETMIB::CssTraceTable::CssTraceEntry : public ydk::Entity
{
    public:
        CssTraceEntry();
        ~CssTraceEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csstracetotransmit; //type: binary
        ydk::YLeaf csstracetoexpect; //type: binary
        ydk::YLeaf csstracefailure; //type: boolean
        ydk::YLeaf csstracereceived; //type: binary

}; // CISCOSONETMIB::CssTraceTable::CssTraceEntry


class CISCOSONETMIB::CslTotalTable : public ydk::Entity
{
    public:
        CslTotalTable();
        ~CslTotalTable();

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

        class CslTotalEntry; //type: CISCOSONETMIB::CslTotalTable::CslTotalEntry

        ydk::YList csltotalentry;
        
}; // CISCOSONETMIB::CslTotalTable


class CISCOSONETMIB::CslTotalTable::CslTotalEntry : public ydk::Entity
{
    public:
        CslTotalEntry();
        ~CslTotalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csltotaless; //type: uint32
        ydk::YLeaf csltotalsess; //type: uint32
        ydk::YLeaf csltotalcvs; //type: uint32
        ydk::YLeaf csltotaluass; //type: uint32

}; // CISCOSONETMIB::CslTotalTable::CslTotalEntry


class CISCOSONETMIB::CslFarEndTotalTable : public ydk::Entity
{
    public:
        CslFarEndTotalTable();
        ~CslFarEndTotalTable();

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

        class CslFarEndTotalEntry; //type: CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry

        ydk::YList cslfarendtotalentry;
        
}; // CISCOSONETMIB::CslFarEndTotalTable


class CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry : public ydk::Entity
{
    public:
        CslFarEndTotalEntry();
        ~CslFarEndTotalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cslfarendtotaless; //type: uint32
        ydk::YLeaf cslfarendtotalsess; //type: uint32
        ydk::YLeaf cslfarendtotalcvs; //type: uint32
        ydk::YLeaf cslfarendtotaluass; //type: uint32

}; // CISCOSONETMIB::CslFarEndTotalTable::CslFarEndTotalEntry


class CISCOSONETMIB::CspTotalTable : public ydk::Entity
{
    public:
        CspTotalTable();
        ~CspTotalTable();

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

        class CspTotalEntry; //type: CISCOSONETMIB::CspTotalTable::CspTotalEntry

        ydk::YList csptotalentry;
        
}; // CISCOSONETMIB::CspTotalTable


class CISCOSONETMIB::CspTotalTable::CspTotalEntry : public ydk::Entity
{
    public:
        CspTotalEntry();
        ~CspTotalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csptotaless; //type: uint32
        ydk::YLeaf csptotalsess; //type: uint32
        ydk::YLeaf csptotalcvs; //type: uint32
        ydk::YLeaf csptotaluass; //type: uint32

}; // CISCOSONETMIB::CspTotalTable::CspTotalEntry


class CISCOSONETMIB::CspFarEndTotalTable : public ydk::Entity
{
    public:
        CspFarEndTotalTable();
        ~CspFarEndTotalTable();

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

        class CspFarEndTotalEntry; //type: CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry

        ydk::YList cspfarendtotalentry;
        
}; // CISCOSONETMIB::CspFarEndTotalTable


class CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry : public ydk::Entity
{
    public:
        CspFarEndTotalEntry();
        ~CspFarEndTotalEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cspfarendtotaless; //type: uint32
        ydk::YLeaf cspfarendtotalsess; //type: uint32
        ydk::YLeaf cspfarendtotalcvs; //type: uint32
        ydk::YLeaf cspfarendtotaluass; //type: uint32

}; // CISCOSONETMIB::CspFarEndTotalTable::CspFarEndTotalEntry


class CISCOSONETMIB::CspTraceTable : public ydk::Entity
{
    public:
        CspTraceTable();
        ~CspTraceTable();

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

        class CspTraceEntry; //type: CISCOSONETMIB::CspTraceTable::CspTraceEntry

        ydk::YList csptraceentry;
        
}; // CISCOSONETMIB::CspTraceTable


class CISCOSONETMIB::CspTraceTable::CspTraceEntry : public ydk::Entity
{
    public:
        CspTraceEntry();
        ~CspTraceEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csptracetotransmit; //type: binary
        ydk::YLeaf csptracetoexpect; //type: binary
        ydk::YLeaf csptracefailure; //type: boolean
        ydk::YLeaf csptracereceived; //type: binary

}; // CISCOSONETMIB::CspTraceTable::CspTraceEntry


class CISCOSONETMIB::CsStatsTable : public ydk::Entity
{
    public:
        CsStatsTable();
        ~CsStatsTable();

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

        class CsStatsEntry; //type: CISCOSONETMIB::CsStatsTable::CsStatsEntry

        ydk::YList csstatsentry;
        
}; // CISCOSONETMIB::CsStatsTable


class CISCOSONETMIB::CsStatsTable::CsStatsEntry : public ydk::Entity
{
    public:
        CsStatsEntry();
        ~CsStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cssloss; //type: uint32
        ydk::YLeaf csslofs; //type: uint32
        ydk::YLeaf cslaiss; //type: uint32
        ydk::YLeaf cslrfis; //type: uint32
        ydk::YLeaf cspaiss; //type: uint32
        ydk::YLeaf csprfis; //type: uint32

}; // CISCOSONETMIB::CsStatsTable::CsStatsEntry


class CISCOSONETMIB::CsAu4Tug3ConfigTable : public ydk::Entity
{
    public:
        CsAu4Tug3ConfigTable();
        ~CsAu4Tug3ConfigTable();

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

        class CsAu4Tug3ConfigEntry; //type: CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry

        ydk::YList csau4tug3configentry;
        
}; // CISCOSONETMIB::CsAu4Tug3ConfigTable


class CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry : public ydk::Entity
{
    public:
        CsAu4Tug3ConfigEntry();
        ~CsAu4Tug3ConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf csau4tug3; //type: int32
        ydk::YLeaf csau4tug3payload; //type: CsAu4Tug3Payload
        class CsAu4Tug3Payload;

}; // CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry

class CsApsLineSwitchReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsOther;
        static const ydk::Enum::YLeaf csApsRevertive;
        static const ydk::Enum::YLeaf csApsManual;
        static const ydk::Enum::YLeaf csApsSignalDefectLow;
        static const ydk::Enum::YLeaf csApsSignalDefectHigh;
        static const ydk::Enum::YLeaf csApsSignalFailureLow;
        static const ydk::Enum::YLeaf csApsSignalFailureHigh;
        static const ydk::Enum::YLeaf csApsForceSwitch;
        static const ydk::Enum::YLeaf csApsLockOut;
        static const ydk::Enum::YLeaf csApsNoSwitch;

        static int get_enum_value(const std::string & name) {
            if (name == "csApsOther") return 1;
            if (name == "csApsRevertive") return 2;
            if (name == "csApsManual") return 3;
            if (name == "csApsSignalDefectLow") return 4;
            if (name == "csApsSignalDefectHigh") return 5;
            if (name == "csApsSignalFailureLow") return 6;
            if (name == "csApsSignalFailureHigh") return 7;
            if (name == "csApsForceSwitch") return 8;
            if (name == "csApsLockOut") return 9;
            if (name == "csApsNoSwitch") return 10;
            return -1;
        }
};

class CsApsLineFailureCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsChannelMismatch;
        static const ydk::Enum::YLeaf csApsProtectionByteFail;
        static const ydk::Enum::YLeaf csApsFEProtectionFailure;
        static const ydk::Enum::YLeaf csApsModeMismatch;

        static int get_enum_value(const std::string & name) {
            if (name == "csApsChannelMismatch") return 1;
            if (name == "csApsProtectionByteFail") return 2;
            if (name == "csApsFEProtectionFailure") return 3;
            if (name == "csApsModeMismatch") return 4;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigLoopbackType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLoopback;
        static const ydk::Enum::YLeaf lineLocal;
        static const ydk::Enum::YLeaf lineRemote;

        static int get_enum_value(const std::string & name) {
            if (name == "noLoopback") return 1;
            if (name == "lineLocal") return 2;
            if (name == "lineRemote") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigXmtClockSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loopTiming;
        static const ydk::Enum::YLeaf localTiming;

        static int get_enum_value(const std::string & name) {
            if (name == "loopTiming") return 1;
            if (name == "localTiming") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigFrameScramble : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "enabled") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetSts3c;
        static const ydk::Enum::YLeaf sonetStm1;
        static const ydk::Enum::YLeaf sonetSts12c;
        static const ydk::Enum::YLeaf sonetStm4;
        static const ydk::Enum::YLeaf sonetSts48c;
        static const ydk::Enum::YLeaf sonetStm16;
        static const ydk::Enum::YLeaf sonetSts192c;
        static const ydk::Enum::YLeaf sonetStm64;
        static const ydk::Enum::YLeaf sonetSts3;

        static int get_enum_value(const std::string & name) {
            if (name == "sonetSts3c") return 1;
            if (name == "sonetStm1") return 2;
            if (name == "sonetSts12c") return 3;
            if (name == "sonetStm4") return 4;
            if (name == "sonetSts48c") return 5;
            if (name == "sonetStm16") return 6;
            if (name == "sonetSts192c") return 7;
            if (name == "sonetStm64") return 8;
            if (name == "sonetSts3") return 9;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigRDIVType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onebit;
        static const ydk::Enum::YLeaf threebit;

        static int get_enum_value(const std::string & name) {
            if (name == "onebit") return 1;
            if (name == "threebit") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsConfigRDIPType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onebit;
        static const ydk::Enum::YLeaf threebit;

        static int get_enum_value(const std::string & name) {
            if (name == "onebit") return 1;
            if (name == "threebit") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vt15vc11;
        static const ydk::Enum::YLeaf vt2vc12;

        static int get_enum_value(const std::string & name) {
            if (name == "vt15vc11") return 1;
            if (name == "vt2vc12") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryMappingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asynchronous;
        static const ydk::Enum::YLeaf byteSynchronous;

        static int get_enum_value(const std::string & name) {
            if (name == "asynchronous") return 1;
            if (name == "byteSynchronous") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryFramingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf dsx1D4;
        static const ydk::Enum::YLeaf dsx1ESF;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "dsx1D4") return 2;
            if (name == "dsx1ESF") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsSignallingTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf signallingTransferMode;
        static const ydk::Enum::YLeaf clearMode;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "signallingTransferMode") return 2;
            if (name == "clearMode") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsConfigTable::CsConfigEntry::CsTributaryGroupingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf au3Grouping;
        static const ydk::Enum::YLeaf au4Grouping;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 1;
            if (name == "au3Grouping") return 2;
            if (name == "au4Grouping") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsDisabled;
        static const ydk::Enum::YLeaf csApsEnabled;

        static int get_enum_value(const std::string & name) {
            if (name == "csApsDisabled") return 1;
            if (name == "csApsEnabled") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onePlusOne;
        static const ydk::Enum::YLeaf oneToOne;
        static const ydk::Enum::YLeaf anexBOnePlusOne;
        static const ydk::Enum::YLeaf ycableOnePlusOneNok1k2;
        static const ydk::Enum::YLeaf straightOnePlusOneNok1k2;

        static int get_enum_value(const std::string & name) {
            if (name == "onePlusOne") return 1;
            if (name == "oneToOne") return 2;
            if (name == "anexBOnePlusOne") return 3;
            if (name == "ycableOnePlusOneNok1k2") return 4;
            if (name == "straightOnePlusOneNok1k2") return 5;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsActiveLine : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf csApsWorkingLine;
        static const ydk::Enum::YLeaf csApsProtectionLine;
        static const ydk::Enum::YLeaf csApsNone;

        static int get_enum_value(const std::string & name) {
            if (name == "csApsWorkingLine") return 1;
            if (name == "csApsProtectionLine") return 2;
            if (name == "csApsNone") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf uniDirectional;
        static const ydk::Enum::YLeaf biDirectional;

        static int get_enum_value(const std::string & name) {
            if (name == "uniDirectional") return 1;
            if (name == "biDirectional") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsRevertive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonrevertive;
        static const ydk::Enum::YLeaf revertive;

        static int get_enum_value(const std::string & name) {
            if (name == "nonrevertive") return 1;
            if (name == "revertive") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsDirectionOperational : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf uniDirectional;
        static const ydk::Enum::YLeaf biDirectional;

        static int get_enum_value(const std::string & name) {
            if (name == "uniDirectional") return 1;
            if (name == "biDirectional") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsArchModeOperational : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf onePlusOne;
        static const ydk::Enum::YLeaf oneToOne;
        static const ydk::Enum::YLeaf anexBOnePlusOne;
        static const ydk::Enum::YLeaf ycableOnePlusOneNok1k2;
        static const ydk::Enum::YLeaf straightOnePlusOneNok1k2;

        static int get_enum_value(const std::string & name) {
            if (name == "onePlusOne") return 1;
            if (name == "oneToOne") return 2;
            if (name == "anexBOnePlusOne") return 3;
            if (name == "ycableOnePlusOneNok1k2") return 4;
            if (name == "straightOnePlusOneNok1k2") return 5;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bellcore;
        static const ydk::Enum::YLeaf itu;

        static int get_enum_value(const std::string & name) {
            if (name == "bellcore") return 1;
            if (name == "itu") return 2;
            return -1;
        }
};

class CISCOSONETMIB::CsApsConfigTable::CsApsConfigEntry::CsApsPrimarySection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf workingSection1;
        static const ydk::Enum::YLeaf workingSection2;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "workingSection1") return 1;
            if (name == "workingSection2") return 2;
            if (name == "none") return 3;
            return -1;
        }
};

class CISCOSONETMIB::CsAu4Tug3ConfigTable::CsAu4Tug3ConfigEntry::CsAu4Tug3Payload : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf vc11;
        static const ydk::Enum::YLeaf vc12;
        static const ydk::Enum::YLeaf tu3ds3;
        static const ydk::Enum::YLeaf tu3e3;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "vc11") return 2;
            if (name == "vc12") return 3;
            if (name == "tu3ds3") return 4;
            if (name == "tu3e3") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_SONET_MIB_ */

