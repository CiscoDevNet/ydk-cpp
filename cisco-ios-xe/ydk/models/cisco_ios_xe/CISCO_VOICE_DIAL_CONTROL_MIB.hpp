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

        class CvGeneralConfiguration; //type: CISCOVOICEDIALCONTROLMIB::CvGeneralConfiguration
        class CvGatewayCallActive; //type: CISCOVOICEDIALCONTROLMIB::CvGatewayCallActive
        class CvCallVolume; //type: CISCOVOICEDIALCONTROLMIB::CvCallVolume
        class CvCallRateMonitor; //type: CISCOVOICEDIALCONTROLMIB::CvCallRateMonitor
        class CvCallVolumeStatsHistory; //type: CISCOVOICEDIALCONTROLMIB::CvCallVolumeStatsHistory
        class CvPeerCfgTable; //type: CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable
        class CvVoicePeerCfgTable; //type: CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable
        class CvVoIPPeerCfgTable; //type: CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable
        class CvPeerCommonCfgTable; //type: CISCOVOICEDIALCONTROLMIB::CvPeerCommonCfgTable
        class CvCallActiveTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallActiveTable
        class CvVoIPCallActiveTable; //type: CISCOVOICEDIALCONTROLMIB::CvVoIPCallActiveTable
        class CvCallVolConnTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallVolConnTable
        class CvCallVolIfTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallVolIfTable
        class CvCallHistoryTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallHistoryTable
        class CvVoIPCallHistoryTable; //type: CISCOVOICEDIALCONTROLMIB::CvVoIPCallHistoryTable
        class CvCallRateStatsTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallRateStatsTable
        class CvCallLegRateStatsTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallLegRateStatsTable
        class CvActiveCallStatsTable; //type: CISCOVOICEDIALCONTROLMIB::CvActiveCallStatsTable
        class CvCallDurationStatsTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallDurationStatsTable
        class CvSipMsgRateStatsTable; //type: CISCOVOICEDIALCONTROLMIB::CvSipMsgRateStatsTable
        class CvCallRateWMTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallRateWMTable
        class CvCallLegRateWMTable; //type: CISCOVOICEDIALCONTROLMIB::CvCallLegRateWMTable
        class CvActiveCallWMTable; //type: CISCOVOICEDIALCONTROLMIB::CvActiveCallWMTable
        class CvSipMsgRateWMTable; //type: CISCOVOICEDIALCONTROLMIB::CvSipMsgRateWMTable

        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvGeneralConfiguration> cvgeneralconfiguration;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvGatewayCallActive> cvgatewaycallactive;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallVolume> cvcallvolume;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallRateMonitor> cvcallratemonitor;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallVolumeStatsHistory> cvcallvolumestatshistory;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable> cvpeercfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable> cvvoicepeercfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable> cvvoippeercfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvPeerCommonCfgTable> cvpeercommoncfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallActiveTable> cvcallactivetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvVoIPCallActiveTable> cvvoipcallactivetable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallVolConnTable> cvcallvolconntable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallVolIfTable> cvcallvoliftable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallHistoryTable> cvcallhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvVoIPCallHistoryTable> cvvoipcallhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallRateStatsTable> cvcallratestatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallLegRateStatsTable> cvcalllegratestatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvActiveCallStatsTable> cvactivecallstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallDurationStatsTable> cvcalldurationstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvSipMsgRateStatsTable> cvsipmsgratestatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallRateWMTable> cvcallratewmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvCallLegRateWMTable> cvcalllegratewmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvActiveCallWMTable> cvactivecallwmtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DIAL_CONTROL_MIB::CISCOVOICEDIALCONTROLMIB::CvSipMsgRateWMTable> cvsipmsgratewmtable;
        
}; // CISCOVOICEDIALCONTROLMIB


class CISCOVOICEDIALCONTROLMIB::CvGeneralConfiguration : public ydk::Entity
{
    public:
        CvGeneralConfiguration();
        ~CvGeneralConfiguration();

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

}; // CISCOVOICEDIALCONTROLMIB::CvGeneralConfiguration


class CISCOVOICEDIALCONTROLMIB::CvGatewayCallActive : public ydk::Entity
{
    public:
        CvGatewayCallActive();
        ~CvGatewayCallActive();

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

}; // CISCOVOICEDIALCONTROLMIB::CvGatewayCallActive


class CISCOVOICEDIALCONTROLMIB::CvCallVolume : public ydk::Entity
{
    public:
        CvCallVolume();
        ~CvCallVolume();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallVolume


class CISCOVOICEDIALCONTROLMIB::CvCallRateMonitor : public ydk::Entity
{
    public:
        CvCallRateMonitor();
        ~CvCallRateMonitor();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallRateMonitor


class CISCOVOICEDIALCONTROLMIB::CvCallVolumeStatsHistory : public ydk::Entity
{
    public:
        CvCallVolumeStatsHistory();
        ~CvCallVolumeStatsHistory();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallVolumeStatsHistory


class CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable : public ydk::Entity
{
    public:
        CvPeerCfgTable();
        ~CvPeerCfgTable();

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

        class CvPeerCfgEntry; //type: CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable::CvPeerCfgEntry

        ydk::YList cvpeercfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable


class CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable::CvPeerCfgEntry : public ydk::Entity
{
    public:
        CvPeerCfgEntry();
        ~CvPeerCfgEntry();

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
        ydk::YLeaf cvpeercfgtype; //type: CvPeerCfgType
        ydk::YLeaf cvpeercfgrowstatus; //type: RowStatus
        ydk::YLeaf cvpeercfgpeertype; //type: CvPeerCfgPeerType
        ydk::YLeaf cvcallvolpeerincomingcalls; //type: uint32
        ydk::YLeaf cvcallvolpeeroutgoingcalls; //type: uint32
        class CvPeerCfgType;
        class CvPeerCfgPeerType;

}; // CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable::CvPeerCfgEntry


class CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable : public ydk::Entity
{
    public:
        CvVoicePeerCfgTable();
        ~CvVoicePeerCfgTable();

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

        class CvVoicePeerCfgEntry; //type: CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable::CvVoicePeerCfgEntry

        ydk::YList cvvoicepeercfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable


class CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable::CvVoicePeerCfgEntry : public ydk::Entity
{
    public:
        CvVoicePeerCfgEntry();
        ~CvVoicePeerCfgEntry();

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
        ydk::YLeaf cvvoicepeercfgsessiontarget; //type: string
        ydk::YLeaf cvvoicepeercfgdialdigitsprefix; //type: string
        ydk::YLeaf cvvoicepeercfgdidcallenable; //type: boolean
        ydk::YLeaf cvvoicepeercfgcasgroup; //type: int32
        ydk::YLeaf cvvoicepeercfgregistere164; //type: boolean
        ydk::YLeaf cvvoicepeercfgforwarddigits; //type: int32
        ydk::YLeaf cvvoicepeercfgechocancellertest; //type: CvVoicePeerCfgEchoCancellerTest
        class CvVoicePeerCfgEchoCancellerTest;

}; // CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable::CvVoicePeerCfgEntry


class CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable : public ydk::Entity
{
    public:
        CvVoIPPeerCfgTable();
        ~CvVoIPPeerCfgTable();

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

        class CvVoIPPeerCfgEntry; //type: CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable::CvVoIPPeerCfgEntry

        ydk::YList cvvoippeercfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable


class CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable::CvVoIPPeerCfgEntry : public ydk::Entity
{
    public:
        CvVoIPPeerCfgEntry();
        ~CvVoIPPeerCfgEntry();

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
        ydk::YLeaf cvvoippeercfgdigitrelay; //type: CvVoIPPeerCfgDigitRelay
        ydk::YLeaf cvvoippeercfgcoderbytes; //type: int32
        ydk::YLeaf cvvoippeercfgfaxbytes; //type: int32
        ydk::YLeaf cvvoippeercfginbandsignaling; //type: CvcInBandSignaling
        ydk::YLeaf cvvoippeercfgmediasetting; //type: CvVoIPPeerCfgMediaSetting
        ydk::YLeaf cvvoippeercfgdesiredqosvideo; //type: QosService
        ydk::YLeaf cvvoippeercfgminacceptableqosvideo; //type: QosService
        ydk::YLeaf cvvoippeercfgredirectip2ip; //type: boolean
        ydk::YLeaf cvvoippeercfgoctetaligned; //type: boolean
        ydk::YLeaf cvvoippeercfgbitrates; //type: CvAmrNbBitRateMode
        ydk::YLeaf cvvoippeercfgcrc; //type: boolean
        ydk::YLeaf cvvoippeercfgcodermode; //type: CvIlbcFrameMode
        ydk::YLeaf cvvoippeercfgcodingmode; //type: CvVoIPPeerCfgCodingMode
        ydk::YLeaf cvvoippeercfgbitrate; //type: uint32
        ydk::YLeaf cvvoippeercfgframesize; //type: CvVoIPPeerCfgFrameSize
        ydk::YLeaf cvvoippeercfgdscppolicynotificationenable; //type: boolean
        ydk::YLeaf cvvoippeercfgmediapolicynotificationenable; //type: boolean
        class CvVoIPPeerCfgMediaSetting;
        class CvVoIPPeerCfgCodingMode;
        class CvVoIPPeerCfgFrameSize;

}; // CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable::CvVoIPPeerCfgEntry


class CISCOVOICEDIALCONTROLMIB::CvPeerCommonCfgTable : public ydk::Entity
{
    public:
        CvPeerCommonCfgTable();
        ~CvPeerCommonCfgTable();

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

        class CvPeerCommonCfgEntry; //type: CISCOVOICEDIALCONTROLMIB::CvPeerCommonCfgTable::CvPeerCommonCfgEntry

        ydk::YList cvpeercommoncfgentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvPeerCommonCfgTable


class CISCOVOICEDIALCONTROLMIB::CvPeerCommonCfgTable::CvPeerCommonCfgEntry : public ydk::Entity
{
    public:
        CvPeerCommonCfgEntry();
        ~CvPeerCommonCfgEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvPeerCommonCfgTable::CvPeerCommonCfgEntry


class CISCOVOICEDIALCONTROLMIB::CvCallActiveTable : public ydk::Entity
{
    public:
        CvCallActiveTable();
        ~CvCallActiveTable();

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

        class CvCallActiveEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallActiveTable::CvCallActiveEntry

        ydk::YList cvcallactiveentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallActiveTable


class CISCOVOICEDIALCONTROLMIB::CvCallActiveTable::CvCallActiveEntry : public ydk::Entity
{
    public:
        CvCallActiveEntry();
        ~CvCallActiveEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactiveindex)
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

}; // CISCOVOICEDIALCONTROLMIB::CvCallActiveTable::CvCallActiveEntry


class CISCOVOICEDIALCONTROLMIB::CvVoIPCallActiveTable : public ydk::Entity
{
    public:
        CvVoIPCallActiveTable();
        ~CvVoIPCallActiveTable();

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

        class CvVoIPCallActiveEntry; //type: CISCOVOICEDIALCONTROLMIB::CvVoIPCallActiveTable::CvVoIPCallActiveEntry

        ydk::YList cvvoipcallactiveentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvVoIPCallActiveTable


class CISCOVOICEDIALCONTROLMIB::CvVoIPCallActiveTable::CvVoIPCallActiveEntry : public ydk::Entity
{
    public:
        CvVoIPCallActiveEntry();
        ~CvVoIPCallActiveEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactiveindex)
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

}; // CISCOVOICEDIALCONTROLMIB::CvVoIPCallActiveTable::CvVoIPCallActiveEntry


class CISCOVOICEDIALCONTROLMIB::CvCallVolConnTable : public ydk::Entity
{
    public:
        CvCallVolConnTable();
        ~CvCallVolConnTable();

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

        class CvCallVolConnEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallVolConnTable::CvCallVolConnEntry

        ydk::YList cvcallvolconnentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallVolConnTable


class CISCOVOICEDIALCONTROLMIB::CvCallVolConnTable::CvCallVolConnEntry : public ydk::Entity
{
    public:
        CvCallVolConnEntry();
        ~CvCallVolConnEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallVolConnTable::CvCallVolConnEntry


class CISCOVOICEDIALCONTROLMIB::CvCallVolIfTable : public ydk::Entity
{
    public:
        CvCallVolIfTable();
        ~CvCallVolIfTable();

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

        class CvCallVolIfEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallVolIfTable::CvCallVolIfEntry

        ydk::YList cvcallvolifentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallVolIfTable


class CISCOVOICEDIALCONTROLMIB::CvCallVolIfTable::CvCallVolIfEntry : public ydk::Entity
{
    public:
        CvCallVolIfEntry();
        ~CvCallVolIfEntry();

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
        ydk::YLeaf cvcallvolmediaincomingcalls; //type: uint32
        ydk::YLeaf cvcallvolmediaoutgoingcalls; //type: uint32

}; // CISCOVOICEDIALCONTROLMIB::CvCallVolIfTable::CvCallVolIfEntry


class CISCOVOICEDIALCONTROLMIB::CvCallHistoryTable : public ydk::Entity
{
    public:
        CvCallHistoryTable();
        ~CvCallHistoryTable();

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

        class CvCallHistoryEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallHistoryTable::CvCallHistoryEntry

        ydk::YList cvcallhistoryentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallHistoryTable


class CISCOVOICEDIALCONTROLMIB::CvCallHistoryTable::CvCallHistoryEntry : public ydk::Entity
{
    public:
        CvCallHistoryEntry();
        ~CvCallHistoryEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::ccallhistoryindex)
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

}; // CISCOVOICEDIALCONTROLMIB::CvCallHistoryTable::CvCallHistoryEntry


class CISCOVOICEDIALCONTROLMIB::CvVoIPCallHistoryTable : public ydk::Entity
{
    public:
        CvVoIPCallHistoryTable();
        ~CvVoIPCallHistoryTable();

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

        class CvVoIPCallHistoryEntry; //type: CISCOVOICEDIALCONTROLMIB::CvVoIPCallHistoryTable::CvVoIPCallHistoryEntry

        ydk::YList cvvoipcallhistoryentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvVoIPCallHistoryTable


class CISCOVOICEDIALCONTROLMIB::CvVoIPCallHistoryTable::CvVoIPCallHistoryEntry : public ydk::Entity
{
    public:
        CvVoIPCallHistoryEntry();
        ~CvVoIPCallHistoryEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_DIAL_CONTROL_MIB::CISCODIALCONTROLMIB::CCallHistoryTable::CCallHistoryEntry::ccallhistoryindex)
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

}; // CISCOVOICEDIALCONTROLMIB::CvVoIPCallHistoryTable::CvVoIPCallHistoryEntry


class CISCOVOICEDIALCONTROLMIB::CvCallRateStatsTable : public ydk::Entity
{
    public:
        CvCallRateStatsTable();
        ~CvCallRateStatsTable();

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

        class CvCallRateStatsEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallRateStatsTable::CvCallRateStatsEntry

        ydk::YList cvcallratestatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallRateStatsTable


class CISCOVOICEDIALCONTROLMIB::CvCallRateStatsTable::CvCallRateStatsEntry : public ydk::Entity
{
    public:
        CvCallRateStatsEntry();
        ~CvCallRateStatsEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallRateStatsTable::CvCallRateStatsEntry


class CISCOVOICEDIALCONTROLMIB::CvCallLegRateStatsTable : public ydk::Entity
{
    public:
        CvCallLegRateStatsTable();
        ~CvCallLegRateStatsTable();

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

        class CvCallLegRateStatsEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallLegRateStatsTable::CvCallLegRateStatsEntry

        ydk::YList cvcalllegratestatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallLegRateStatsTable


class CISCOVOICEDIALCONTROLMIB::CvCallLegRateStatsTable::CvCallLegRateStatsEntry : public ydk::Entity
{
    public:
        CvCallLegRateStatsEntry();
        ~CvCallLegRateStatsEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallLegRateStatsTable::CvCallLegRateStatsEntry


class CISCOVOICEDIALCONTROLMIB::CvActiveCallStatsTable : public ydk::Entity
{
    public:
        CvActiveCallStatsTable();
        ~CvActiveCallStatsTable();

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

        class CvActiveCallStatsEntry; //type: CISCOVOICEDIALCONTROLMIB::CvActiveCallStatsTable::CvActiveCallStatsEntry

        ydk::YList cvactivecallstatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvActiveCallStatsTable


class CISCOVOICEDIALCONTROLMIB::CvActiveCallStatsTable::CvActiveCallStatsEntry : public ydk::Entity
{
    public:
        CvActiveCallStatsEntry();
        ~CvActiveCallStatsEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvActiveCallStatsTable::CvActiveCallStatsEntry


class CISCOVOICEDIALCONTROLMIB::CvCallDurationStatsTable : public ydk::Entity
{
    public:
        CvCallDurationStatsTable();
        ~CvCallDurationStatsTable();

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

        class CvCallDurationStatsEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallDurationStatsTable::CvCallDurationStatsEntry

        ydk::YList cvcalldurationstatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallDurationStatsTable


class CISCOVOICEDIALCONTROLMIB::CvCallDurationStatsTable::CvCallDurationStatsEntry : public ydk::Entity
{
    public:
        CvCallDurationStatsEntry();
        ~CvCallDurationStatsEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallDurationStatsTable::CvCallDurationStatsEntry


class CISCOVOICEDIALCONTROLMIB::CvSipMsgRateStatsTable : public ydk::Entity
{
    public:
        CvSipMsgRateStatsTable();
        ~CvSipMsgRateStatsTable();

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

        class CvSipMsgRateStatsEntry; //type: CISCOVOICEDIALCONTROLMIB::CvSipMsgRateStatsTable::CvSipMsgRateStatsEntry

        ydk::YList cvsipmsgratestatsentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvSipMsgRateStatsTable


class CISCOVOICEDIALCONTROLMIB::CvSipMsgRateStatsTable::CvSipMsgRateStatsEntry : public ydk::Entity
{
    public:
        CvSipMsgRateStatsEntry();
        ~CvSipMsgRateStatsEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvSipMsgRateStatsTable::CvSipMsgRateStatsEntry


class CISCOVOICEDIALCONTROLMIB::CvCallRateWMTable : public ydk::Entity
{
    public:
        CvCallRateWMTable();
        ~CvCallRateWMTable();

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

        class CvCallRateWMEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallRateWMTable::CvCallRateWMEntry

        ydk::YList cvcallratewmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallRateWMTable


class CISCOVOICEDIALCONTROLMIB::CvCallRateWMTable::CvCallRateWMEntry : public ydk::Entity
{
    public:
        CvCallRateWMEntry();
        ~CvCallRateWMEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallRateWMTable::CvCallRateWMEntry


class CISCOVOICEDIALCONTROLMIB::CvCallLegRateWMTable : public ydk::Entity
{
    public:
        CvCallLegRateWMTable();
        ~CvCallLegRateWMTable();

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

        class CvCallLegRateWMEntry; //type: CISCOVOICEDIALCONTROLMIB::CvCallLegRateWMTable::CvCallLegRateWMEntry

        ydk::YList cvcalllegratewmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvCallLegRateWMTable


class CISCOVOICEDIALCONTROLMIB::CvCallLegRateWMTable::CvCallLegRateWMEntry : public ydk::Entity
{
    public:
        CvCallLegRateWMEntry();
        ~CvCallLegRateWMEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvCallLegRateWMTable::CvCallLegRateWMEntry


class CISCOVOICEDIALCONTROLMIB::CvActiveCallWMTable : public ydk::Entity
{
    public:
        CvActiveCallWMTable();
        ~CvActiveCallWMTable();

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

        class CvActiveCallWMEntry; //type: CISCOVOICEDIALCONTROLMIB::CvActiveCallWMTable::CvActiveCallWMEntry

        ydk::YList cvactivecallwmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvActiveCallWMTable


class CISCOVOICEDIALCONTROLMIB::CvActiveCallWMTable::CvActiveCallWMEntry : public ydk::Entity
{
    public:
        CvActiveCallWMEntry();
        ~CvActiveCallWMEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvActiveCallWMTable::CvActiveCallWMEntry


class CISCOVOICEDIALCONTROLMIB::CvSipMsgRateWMTable : public ydk::Entity
{
    public:
        CvSipMsgRateWMTable();
        ~CvSipMsgRateWMTable();

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

        class CvSipMsgRateWMEntry; //type: CISCOVOICEDIALCONTROLMIB::CvSipMsgRateWMTable::CvSipMsgRateWMEntry

        ydk::YList cvsipmsgratewmentry;
        
}; // CISCOVOICEDIALCONTROLMIB::CvSipMsgRateWMTable


class CISCOVOICEDIALCONTROLMIB::CvSipMsgRateWMTable::CvSipMsgRateWMEntry : public ydk::Entity
{
    public:
        CvSipMsgRateWMEntry();
        ~CvSipMsgRateWMEntry();

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

}; // CISCOVOICEDIALCONTROLMIB::CvSipMsgRateWMTable::CvSipMsgRateWMEntry

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

class CvAmrNbRtpEncap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc3267;

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

class CvCallVolumeStatsIntvlType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf secondStats;
        static const ydk::Enum::YLeaf minuteStats;
        static const ydk::Enum::YLeaf hourStats;

};

class CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable::CvPeerCfgEntry::CvPeerCfgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf voice;
        static const ydk::Enum::YLeaf voip;
        static const ydk::Enum::YLeaf mmail;
        static const ydk::Enum::YLeaf voatm;
        static const ydk::Enum::YLeaf vofr;

};

class CISCOVOICEDIALCONTROLMIB::CvPeerCfgTable::CvPeerCfgEntry::CvPeerCfgPeerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf voice;
        static const ydk::Enum::YLeaf data;

};

class CISCOVOICEDIALCONTROLMIB::CvVoicePeerCfgTable::CvVoicePeerCfgEntry::CvVoicePeerCfgEchoCancellerTest : public ydk::Enum
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

class CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable::CvVoIPPeerCfgEntry::CvVoIPPeerCfgMediaSetting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flowThrough;
        static const ydk::Enum::YLeaf flowAround;

};

class CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable::CvVoIPPeerCfgEntry::CvVoIPPeerCfgCodingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf independent;

};

class CISCOVOICEDIALCONTROLMIB::CvVoIPPeerCfgTable::CvVoIPPeerCfgEntry::CvVoIPPeerCfgFrameSize : public ydk::Enum
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

