#ifndef _TOKEN_RING_RMON_MIB_
#define _TOKEN_RING_RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace TOKEN_RING_RMON_MIB {

class TOKENRINGRMONMIB : public ydk::Entity
{
    public:
        TOKENRINGRMONMIB();
        ~TOKENRINGRMONMIB();

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

        class TokenRingMLStatsTable; //type: TOKENRINGRMONMIB::TokenRingMLStatsTable
        class TokenRingPStatsTable; //type: TOKENRINGRMONMIB::TokenRingPStatsTable
        class TokenRingMLHistoryTable; //type: TOKENRINGRMONMIB::TokenRingMLHistoryTable
        class TokenRingPHistoryTable; //type: TOKENRINGRMONMIB::TokenRingPHistoryTable
        class RingStationControlTable; //type: TOKENRINGRMONMIB::RingStationControlTable
        class RingStationTable; //type: TOKENRINGRMONMIB::RingStationTable
        class RingStationOrderTable; //type: TOKENRINGRMONMIB::RingStationOrderTable
        class RingStationConfigControlTable; //type: TOKENRINGRMONMIB::RingStationConfigControlTable
        class RingStationConfigTable; //type: TOKENRINGRMONMIB::RingStationConfigTable
        class SourceRoutingStatsTable; //type: TOKENRINGRMONMIB::SourceRoutingStatsTable

        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::TokenRingMLStatsTable> tokenringmlstatstable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::TokenRingPStatsTable> tokenringpstatstable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::TokenRingMLHistoryTable> tokenringmlhistorytable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::TokenRingPHistoryTable> tokenringphistorytable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::RingStationControlTable> ringstationcontroltable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::RingStationTable> ringstationtable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::RingStationOrderTable> ringstationordertable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::RingStationConfigControlTable> ringstationconfigcontroltable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::RingStationConfigTable> ringstationconfigtable;
        std::shared_ptr<cisco_ios_xe::TOKEN_RING_RMON_MIB::TOKENRINGRMONMIB::SourceRoutingStatsTable> sourceroutingstatstable;
        
}; // TOKENRINGRMONMIB


class TOKENRINGRMONMIB::TokenRingMLStatsTable : public ydk::Entity
{
    public:
        TokenRingMLStatsTable();
        ~TokenRingMLStatsTable();

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

        class TokenRingMLStatsEntry; //type: TOKENRINGRMONMIB::TokenRingMLStatsTable::TokenRingMLStatsEntry

        ydk::YList tokenringmlstatsentry;
        
}; // TOKENRINGRMONMIB::TokenRingMLStatsTable


class TOKENRINGRMONMIB::TokenRingMLStatsTable::TokenRingMLStatsEntry : public ydk::Entity
{
    public:
        TokenRingMLStatsEntry();
        ~TokenRingMLStatsEntry();

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

        ydk::YLeaf tokenringmlstatsindex; //type: int32
        ydk::YLeaf tokenringmlstatsdatasource; //type: string
        ydk::YLeaf tokenringmlstatsdropevents; //type: uint32
        ydk::YLeaf tokenringmlstatsmacoctets; //type: uint32
        ydk::YLeaf tokenringmlstatsmacpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsringpurgeevents; //type: uint32
        ydk::YLeaf tokenringmlstatsringpurgepkts; //type: uint32
        ydk::YLeaf tokenringmlstatsbeaconevents; //type: uint32
        ydk::YLeaf tokenringmlstatsbeacontime; //type: int32
        ydk::YLeaf tokenringmlstatsbeaconpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsclaimtokenevents; //type: uint32
        ydk::YLeaf tokenringmlstatsclaimtokenpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsnaunchanges; //type: uint32
        ydk::YLeaf tokenringmlstatslineerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsinternalerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsbursterrors; //type: uint32
        ydk::YLeaf tokenringmlstatsacerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsaborterrors; //type: uint32
        ydk::YLeaf tokenringmlstatslostframeerrors; //type: uint32
        ydk::YLeaf tokenringmlstatscongestionerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsframecopiederrors; //type: uint32
        ydk::YLeaf tokenringmlstatsfrequencyerrors; //type: uint32
        ydk::YLeaf tokenringmlstatstokenerrors; //type: uint32
        ydk::YLeaf tokenringmlstatssofterrorreports; //type: uint32
        ydk::YLeaf tokenringmlstatsringpollevents; //type: uint32
        ydk::YLeaf tokenringmlstatsowner; //type: string
        ydk::YLeaf tokenringmlstatsstatus; //type: EntryStatus
        ydk::YLeaf tokenringmlstatsdroppedframes; //type: uint32
        ydk::YLeaf tokenringmlstatscreatetime; //type: uint32

}; // TOKENRINGRMONMIB::TokenRingMLStatsTable::TokenRingMLStatsEntry


class TOKENRINGRMONMIB::TokenRingPStatsTable : public ydk::Entity
{
    public:
        TokenRingPStatsTable();
        ~TokenRingPStatsTable();

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

        class TokenRingPStatsEntry; //type: TOKENRINGRMONMIB::TokenRingPStatsTable::TokenRingPStatsEntry

        ydk::YList tokenringpstatsentry;
        
}; // TOKENRINGRMONMIB::TokenRingPStatsTable


class TOKENRINGRMONMIB::TokenRingPStatsTable::TokenRingPStatsEntry : public ydk::Entity
{
    public:
        TokenRingPStatsEntry();
        ~TokenRingPStatsEntry();

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

        ydk::YLeaf tokenringpstatsindex; //type: int32
        ydk::YLeaf tokenringpstatsdatasource; //type: string
        ydk::YLeaf tokenringpstatsdropevents; //type: uint32
        ydk::YLeaf tokenringpstatsdataoctets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatabroadcastpkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatamulticastpkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts18to63octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts64to127octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts128to255octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts256to511octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts512to1023octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts1024to2047octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts2048to4095octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts4096to8191octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts8192to18000octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapktsgreaterthan18000octets; //type: uint32
        ydk::YLeaf tokenringpstatsowner; //type: string
        ydk::YLeaf tokenringpstatsstatus; //type: EntryStatus
        ydk::YLeaf tokenringpstatsdroppedframes; //type: uint32
        ydk::YLeaf tokenringpstatscreatetime; //type: uint32

}; // TOKENRINGRMONMIB::TokenRingPStatsTable::TokenRingPStatsEntry


class TOKENRINGRMONMIB::TokenRingMLHistoryTable : public ydk::Entity
{
    public:
        TokenRingMLHistoryTable();
        ~TokenRingMLHistoryTable();

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

        class TokenRingMLHistoryEntry; //type: TOKENRINGRMONMIB::TokenRingMLHistoryTable::TokenRingMLHistoryEntry

        ydk::YList tokenringmlhistoryentry;
        
}; // TOKENRINGRMONMIB::TokenRingMLHistoryTable


class TOKENRINGRMONMIB::TokenRingMLHistoryTable::TokenRingMLHistoryEntry : public ydk::Entity
{
    public:
        TokenRingMLHistoryEntry();
        ~TokenRingMLHistoryEntry();

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

        ydk::YLeaf tokenringmlhistoryindex; //type: int32
        ydk::YLeaf tokenringmlhistorysampleindex; //type: int32
        ydk::YLeaf tokenringmlhistoryintervalstart; //type: uint32
        ydk::YLeaf tokenringmlhistorydropevents; //type: uint32
        ydk::YLeaf tokenringmlhistorymacoctets; //type: uint32
        ydk::YLeaf tokenringmlhistorymacpkts; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpurgeevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpurgepkts; //type: uint32
        ydk::YLeaf tokenringmlhistorybeaconevents; //type: uint32
        ydk::YLeaf tokenringmlhistorybeacontime; //type: int32
        ydk::YLeaf tokenringmlhistorybeaconpkts; //type: uint32
        ydk::YLeaf tokenringmlhistoryclaimtokenevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryclaimtokenpkts; //type: uint32
        ydk::YLeaf tokenringmlhistorynaunchanges; //type: uint32
        ydk::YLeaf tokenringmlhistorylineerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryinternalerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorybursterrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryacerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryaborterrors; //type: uint32
        ydk::YLeaf tokenringmlhistorylostframeerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorycongestionerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryframecopiederrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryfrequencyerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorytokenerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorysofterrorreports; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpollevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryactivestations; //type: int32

}; // TOKENRINGRMONMIB::TokenRingMLHistoryTable::TokenRingMLHistoryEntry


class TOKENRINGRMONMIB::TokenRingPHistoryTable : public ydk::Entity
{
    public:
        TokenRingPHistoryTable();
        ~TokenRingPHistoryTable();

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

        class TokenRingPHistoryEntry; //type: TOKENRINGRMONMIB::TokenRingPHistoryTable::TokenRingPHistoryEntry

        ydk::YList tokenringphistoryentry;
        
}; // TOKENRINGRMONMIB::TokenRingPHistoryTable


class TOKENRINGRMONMIB::TokenRingPHistoryTable::TokenRingPHistoryEntry : public ydk::Entity
{
    public:
        TokenRingPHistoryEntry();
        ~TokenRingPHistoryEntry();

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

        ydk::YLeaf tokenringphistoryindex; //type: int32
        ydk::YLeaf tokenringphistorysampleindex; //type: int32
        ydk::YLeaf tokenringphistoryintervalstart; //type: uint32
        ydk::YLeaf tokenringphistorydropevents; //type: uint32
        ydk::YLeaf tokenringphistorydataoctets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts; //type: uint32
        ydk::YLeaf tokenringphistorydatabroadcastpkts; //type: uint32
        ydk::YLeaf tokenringphistorydatamulticastpkts; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts18to63octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts64to127octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts128to255octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts256to511octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts512to1023octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts1024to2047octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts2048to4095octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts4096to8191octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts8192to18000octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapktsgreaterthan18000octets; //type: uint32

}; // TOKENRINGRMONMIB::TokenRingPHistoryTable::TokenRingPHistoryEntry


class TOKENRINGRMONMIB::RingStationControlTable : public ydk::Entity
{
    public:
        RingStationControlTable();
        ~RingStationControlTable();

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

        class RingStationControlEntry; //type: TOKENRINGRMONMIB::RingStationControlTable::RingStationControlEntry

        ydk::YList ringstationcontrolentry;
        
}; // TOKENRINGRMONMIB::RingStationControlTable


class TOKENRINGRMONMIB::RingStationControlTable::RingStationControlEntry : public ydk::Entity
{
    public:
        RingStationControlEntry();
        ~RingStationControlEntry();

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

        ydk::YLeaf ringstationcontrolifindex; //type: int32
        ydk::YLeaf ringstationcontroltablesize; //type: int32
        ydk::YLeaf ringstationcontrolactivestations; //type: int32
        ydk::YLeaf ringstationcontrolringstate; //type: RingStationControlRingState
        ydk::YLeaf ringstationcontrolbeaconsender; //type: binary
        ydk::YLeaf ringstationcontrolbeaconnaun; //type: binary
        ydk::YLeaf ringstationcontrolactivemonitor; //type: binary
        ydk::YLeaf ringstationcontrolorderchanges; //type: uint32
        ydk::YLeaf ringstationcontrolowner; //type: string
        ydk::YLeaf ringstationcontrolstatus; //type: EntryStatus
        ydk::YLeaf ringstationcontroldroppedframes; //type: uint32
        ydk::YLeaf ringstationcontrolcreatetime; //type: uint32
        class RingStationControlRingState;

}; // TOKENRINGRMONMIB::RingStationControlTable::RingStationControlEntry


class TOKENRINGRMONMIB::RingStationTable : public ydk::Entity
{
    public:
        RingStationTable();
        ~RingStationTable();

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

        class RingStationEntry; //type: TOKENRINGRMONMIB::RingStationTable::RingStationEntry

        ydk::YList ringstationentry;
        
}; // TOKENRINGRMONMIB::RingStationTable


class TOKENRINGRMONMIB::RingStationTable::RingStationEntry : public ydk::Entity
{
    public:
        RingStationEntry();
        ~RingStationEntry();

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

        ydk::YLeaf ringstationifindex; //type: int32
        ydk::YLeaf ringstationmacaddress; //type: binary
        ydk::YLeaf ringstationlastnaun; //type: binary
        ydk::YLeaf ringstationstationstatus; //type: RingStationStationStatus
        ydk::YLeaf ringstationlastentertime; //type: uint32
        ydk::YLeaf ringstationlastexittime; //type: uint32
        ydk::YLeaf ringstationduplicateaddresses; //type: uint32
        ydk::YLeaf ringstationinlineerrors; //type: uint32
        ydk::YLeaf ringstationoutlineerrors; //type: uint32
        ydk::YLeaf ringstationinternalerrors; //type: uint32
        ydk::YLeaf ringstationinbursterrors; //type: uint32
        ydk::YLeaf ringstationoutbursterrors; //type: uint32
        ydk::YLeaf ringstationacerrors; //type: uint32
        ydk::YLeaf ringstationaborterrors; //type: uint32
        ydk::YLeaf ringstationlostframeerrors; //type: uint32
        ydk::YLeaf ringstationcongestionerrors; //type: uint32
        ydk::YLeaf ringstationframecopiederrors; //type: uint32
        ydk::YLeaf ringstationfrequencyerrors; //type: uint32
        ydk::YLeaf ringstationtokenerrors; //type: uint32
        ydk::YLeaf ringstationinbeaconerrors; //type: uint32
        ydk::YLeaf ringstationoutbeaconerrors; //type: uint32
        ydk::YLeaf ringstationinsertions; //type: uint32
        class RingStationStationStatus;

}; // TOKENRINGRMONMIB::RingStationTable::RingStationEntry


class TOKENRINGRMONMIB::RingStationOrderTable : public ydk::Entity
{
    public:
        RingStationOrderTable();
        ~RingStationOrderTable();

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

        class RingStationOrderEntry; //type: TOKENRINGRMONMIB::RingStationOrderTable::RingStationOrderEntry

        ydk::YList ringstationorderentry;
        
}; // TOKENRINGRMONMIB::RingStationOrderTable


class TOKENRINGRMONMIB::RingStationOrderTable::RingStationOrderEntry : public ydk::Entity
{
    public:
        RingStationOrderEntry();
        ~RingStationOrderEntry();

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

        ydk::YLeaf ringstationorderifindex; //type: int32
        ydk::YLeaf ringstationorderorderindex; //type: int32
        ydk::YLeaf ringstationordermacaddress; //type: binary

}; // TOKENRINGRMONMIB::RingStationOrderTable::RingStationOrderEntry


class TOKENRINGRMONMIB::RingStationConfigControlTable : public ydk::Entity
{
    public:
        RingStationConfigControlTable();
        ~RingStationConfigControlTable();

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

        class RingStationConfigControlEntry; //type: TOKENRINGRMONMIB::RingStationConfigControlTable::RingStationConfigControlEntry

        ydk::YList ringstationconfigcontrolentry;
        
}; // TOKENRINGRMONMIB::RingStationConfigControlTable


class TOKENRINGRMONMIB::RingStationConfigControlTable::RingStationConfigControlEntry : public ydk::Entity
{
    public:
        RingStationConfigControlEntry();
        ~RingStationConfigControlEntry();

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

        ydk::YLeaf ringstationconfigcontrolifindex; //type: int32
        ydk::YLeaf ringstationconfigcontrolmacaddress; //type: binary
        ydk::YLeaf ringstationconfigcontrolremove; //type: RingStationConfigControlRemove
        ydk::YLeaf ringstationconfigcontrolupdatestats; //type: RingStationConfigControlUpdateStats
        class RingStationConfigControlRemove;
        class RingStationConfigControlUpdateStats;

}; // TOKENRINGRMONMIB::RingStationConfigControlTable::RingStationConfigControlEntry


class TOKENRINGRMONMIB::RingStationConfigTable : public ydk::Entity
{
    public:
        RingStationConfigTable();
        ~RingStationConfigTable();

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

        class RingStationConfigEntry; //type: TOKENRINGRMONMIB::RingStationConfigTable::RingStationConfigEntry

        ydk::YList ringstationconfigentry;
        
}; // TOKENRINGRMONMIB::RingStationConfigTable


class TOKENRINGRMONMIB::RingStationConfigTable::RingStationConfigEntry : public ydk::Entity
{
    public:
        RingStationConfigEntry();
        ~RingStationConfigEntry();

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

        ydk::YLeaf ringstationconfigifindex; //type: int32
        ydk::YLeaf ringstationconfigmacaddress; //type: binary
        ydk::YLeaf ringstationconfigupdatetime; //type: uint32
        ydk::YLeaf ringstationconfiglocation; //type: binary
        ydk::YLeaf ringstationconfigmicrocode; //type: binary
        ydk::YLeaf ringstationconfiggroupaddress; //type: binary
        ydk::YLeaf ringstationconfigfunctionaladdress; //type: binary

}; // TOKENRINGRMONMIB::RingStationConfigTable::RingStationConfigEntry


class TOKENRINGRMONMIB::SourceRoutingStatsTable : public ydk::Entity
{
    public:
        SourceRoutingStatsTable();
        ~SourceRoutingStatsTable();

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

        class SourceRoutingStatsEntry; //type: TOKENRINGRMONMIB::SourceRoutingStatsTable::SourceRoutingStatsEntry

        ydk::YList sourceroutingstatsentry;
        
}; // TOKENRINGRMONMIB::SourceRoutingStatsTable


class TOKENRINGRMONMIB::SourceRoutingStatsTable::SourceRoutingStatsEntry : public ydk::Entity
{
    public:
        SourceRoutingStatsEntry();
        ~SourceRoutingStatsEntry();

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

        ydk::YLeaf sourceroutingstatsifindex; //type: int32
        ydk::YLeaf sourceroutingstatsringnumber; //type: int32
        ydk::YLeaf sourceroutingstatsinframes; //type: uint32
        ydk::YLeaf sourceroutingstatsoutframes; //type: uint32
        ydk::YLeaf sourceroutingstatsthroughframes; //type: uint32
        ydk::YLeaf sourceroutingstatsallroutesbroadcastframes; //type: uint32
        ydk::YLeaf sourceroutingstatssingleroutebroadcastframes; //type: uint32
        ydk::YLeaf sourceroutingstatsinoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsoutoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsthroughoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsallroutesbroadcastoctets; //type: uint32
        ydk::YLeaf sourceroutingstatssingleroutesbroadcastoctets; //type: uint32
        ydk::YLeaf sourceroutingstatslocalllcframes; //type: uint32
        ydk::YLeaf sourceroutingstats1hopframes; //type: uint32
        ydk::YLeaf sourceroutingstats2hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats3hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats4hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats5hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats6hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats7hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats8hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstatsmorethan8hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstatsowner; //type: string
        ydk::YLeaf sourceroutingstatsstatus; //type: EntryStatus
        ydk::YLeaf sourceroutingstatsdroppedframes; //type: uint32
        ydk::YLeaf sourceroutingstatscreatetime; //type: uint32

}; // TOKENRINGRMONMIB::SourceRoutingStatsTable::SourceRoutingStatsEntry

class EntryStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf createRequest;
        static const ydk::Enum::YLeaf underCreation;
        static const ydk::Enum::YLeaf invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "valid") return 1;
            if (name == "createRequest") return 2;
            if (name == "underCreation") return 3;
            if (name == "invalid") return 4;
            return -1;
        }
};

class TOKENRINGRMONMIB::RingStationControlTable::RingStationControlEntry::RingStationControlRingState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normalOperation;
        static const ydk::Enum::YLeaf ringPurgeState;
        static const ydk::Enum::YLeaf claimTokenState;
        static const ydk::Enum::YLeaf beaconFrameStreamingState;
        static const ydk::Enum::YLeaf beaconBitStreamingState;
        static const ydk::Enum::YLeaf beaconRingSignalLossState;
        static const ydk::Enum::YLeaf beaconSetRecoveryModeState;

        static int get_enum_value(const std::string & name) {
            if (name == "normalOperation") return 1;
            if (name == "ringPurgeState") return 2;
            if (name == "claimTokenState") return 3;
            if (name == "beaconFrameStreamingState") return 4;
            if (name == "beaconBitStreamingState") return 5;
            if (name == "beaconRingSignalLossState") return 6;
            if (name == "beaconSetRecoveryModeState") return 7;
            return -1;
        }
};

class TOKENRINGRMONMIB::RingStationTable::RingStationEntry::RingStationStationStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf forcedRemoval;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "inactive") return 2;
            if (name == "forcedRemoval") return 3;
            return -1;
        }
};

class TOKENRINGRMONMIB::RingStationConfigControlTable::RingStationConfigControlEntry::RingStationConfigControlRemove : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stable;
        static const ydk::Enum::YLeaf removing;

        static int get_enum_value(const std::string & name) {
            if (name == "stable") return 1;
            if (name == "removing") return 2;
            return -1;
        }
};

class TOKENRINGRMONMIB::RingStationConfigControlTable::RingStationConfigControlEntry::RingStationConfigControlUpdateStats : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stable;
        static const ydk::Enum::YLeaf updating;

        static int get_enum_value(const std::string & name) {
            if (name == "stable") return 1;
            if (name == "updating") return 2;
            return -1;
        }
};


}
}

#endif /* _TOKEN_RING_RMON_MIB_ */

