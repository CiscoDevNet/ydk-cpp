#ifndef _FRAME_RELAY_DTE_MIB_
#define _FRAME_RELAY_DTE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace FRAME_RELAY_DTE_MIB {

class FRAMERELAYDTEMIB : public ydk::Entity
{
    public:
        FRAMERELAYDTEMIB();
        ~FRAMERELAYDTEMIB();

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

        class FrameRelayTrapControl; //type: FRAMERELAYDTEMIB::FrameRelayTrapControl
        class FrDlcmiTable; //type: FRAMERELAYDTEMIB::FrDlcmiTable
        class FrCircuitTable; //type: FRAMERELAYDTEMIB::FrCircuitTable
        class FrErrTable; //type: FRAMERELAYDTEMIB::FrErrTable

        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::FrameRelayTrapControl> framerelaytrapcontrol;
        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::FrDlcmiTable> frdlcmitable;
        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::FrCircuitTable> frcircuittable;
        std::shared_ptr<cisco_ios_xe::FRAME_RELAY_DTE_MIB::FRAMERELAYDTEMIB::FrErrTable> frerrtable;
        
}; // FRAMERELAYDTEMIB


class FRAMERELAYDTEMIB::FrameRelayTrapControl : public ydk::Entity
{
    public:
        FrameRelayTrapControl();
        ~FrameRelayTrapControl();

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

        ydk::YLeaf frtrapstate; //type: FrTrapState
        ydk::YLeaf frtrapmaxrate; //type: int32
        class FrTrapState;

}; // FRAMERELAYDTEMIB::FrameRelayTrapControl


class FRAMERELAYDTEMIB::FrDlcmiTable : public ydk::Entity
{
    public:
        FrDlcmiTable();
        ~FrDlcmiTable();

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

        class FrDlcmiEntry; //type: FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry

        ydk::YList frdlcmientry;
        
}; // FRAMERELAYDTEMIB::FrDlcmiTable


class FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry : public ydk::Entity
{
    public:
        FrDlcmiEntry();
        ~FrDlcmiEntry();

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

        ydk::YLeaf frdlcmiifindex; //type: int32
        ydk::YLeaf frdlcmistate; //type: FrDlcmiState
        ydk::YLeaf frdlcmiaddress; //type: FrDlcmiAddress
        ydk::YLeaf frdlcmiaddresslen; //type: FrDlcmiAddressLen
        ydk::YLeaf frdlcmipollinginterval; //type: int32
        ydk::YLeaf frdlcmifullenquiryinterval; //type: int32
        ydk::YLeaf frdlcmierrorthreshold; //type: int32
        ydk::YLeaf frdlcmimonitoredevents; //type: int32
        ydk::YLeaf frdlcmimaxsupportedvcs; //type: int32
        ydk::YLeaf frdlcmimulticast; //type: FrDlcmiMulticast
        ydk::YLeaf frdlcmistatus; //type: FrDlcmiStatus
        ydk::YLeaf frdlcmirowstatus; //type: RowStatus
        class FrDlcmiState;
        class FrDlcmiAddress;
        class FrDlcmiAddressLen;
        class FrDlcmiMulticast;
        class FrDlcmiStatus;

}; // FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry


class FRAMERELAYDTEMIB::FrCircuitTable : public ydk::Entity
{
    public:
        FrCircuitTable();
        ~FrCircuitTable();

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

        class FrCircuitEntry; //type: FRAMERELAYDTEMIB::FrCircuitTable::FrCircuitEntry

        ydk::YList frcircuitentry;
        
}; // FRAMERELAYDTEMIB::FrCircuitTable


class FRAMERELAYDTEMIB::FrCircuitTable::FrCircuitEntry : public ydk::Entity
{
    public:
        FrCircuitEntry();
        ~FrCircuitEntry();

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

        ydk::YLeaf frcircuitifindex; //type: int32
        ydk::YLeaf frcircuitdlci; //type: int32
        ydk::YLeaf frcircuitstate; //type: FrCircuitState
        ydk::YLeaf frcircuitreceivedfecns; //type: uint32
        ydk::YLeaf frcircuitreceivedbecns; //type: uint32
        ydk::YLeaf frcircuitsentframes; //type: uint32
        ydk::YLeaf frcircuitsentoctets; //type: uint32
        ydk::YLeaf frcircuitreceivedframes; //type: uint32
        ydk::YLeaf frcircuitreceivedoctets; //type: uint32
        ydk::YLeaf frcircuitcreationtime; //type: uint32
        ydk::YLeaf frcircuitlasttimechange; //type: uint32
        ydk::YLeaf frcircuitcommittedburst; //type: int32
        ydk::YLeaf frcircuitexcessburst; //type: int32
        ydk::YLeaf frcircuitthroughput; //type: int32
        ydk::YLeaf frcircuitmulticast; //type: FrCircuitMulticast
        ydk::YLeaf frcircuittype; //type: FrCircuitType
        ydk::YLeaf frcircuitdiscards; //type: uint32
        ydk::YLeaf frcircuitreceiveddes; //type: uint32
        ydk::YLeaf frcircuitsentdes; //type: uint32
        ydk::YLeaf frcircuitlogicalifindex; //type: int32
        ydk::YLeaf frcircuitrowstatus; //type: RowStatus
        class FrCircuitState;
        class FrCircuitMulticast;
        class FrCircuitType;

}; // FRAMERELAYDTEMIB::FrCircuitTable::FrCircuitEntry


class FRAMERELAYDTEMIB::FrErrTable : public ydk::Entity
{
    public:
        FrErrTable();
        ~FrErrTable();

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

        class FrErrEntry; //type: FRAMERELAYDTEMIB::FrErrTable::FrErrEntry

        ydk::YList frerrentry;
        
}; // FRAMERELAYDTEMIB::FrErrTable


class FRAMERELAYDTEMIB::FrErrTable::FrErrEntry : public ydk::Entity
{
    public:
        FrErrEntry();
        ~FrErrEntry();

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

        ydk::YLeaf frerrifindex; //type: int32
        ydk::YLeaf frerrtype; //type: FrErrType
        ydk::YLeaf frerrdata; //type: binary
        ydk::YLeaf frerrtime; //type: uint32
        ydk::YLeaf frerrfaults; //type: uint32
        ydk::YLeaf frerrfaulttime; //type: uint32
        class FrErrType;

}; // FRAMERELAYDTEMIB::FrErrTable::FrErrEntry

class FRAMERELAYDTEMIB::FrameRelayTrapControl::FrTrapState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLmiConfigured;
        static const ydk::Enum::YLeaf lmiRev1;
        static const ydk::Enum::YLeaf ansiT1617D;
        static const ydk::Enum::YLeaf ansiT1617B;
        static const ydk::Enum::YLeaf itut933A;
        static const ydk::Enum::YLeaf ansiT1617D1994;

};

class FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddress : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf q921;
        static const ydk::Enum::YLeaf q922March90;
        static const ydk::Enum::YLeaf q922November90;
        static const ydk::Enum::YLeaf q922;

};

class FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddressLen : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf twoOctets;
        static const ydk::Enum::YLeaf threeOctets;
        static const ydk::Enum::YLeaf fourOctets;

};

class FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonBroadcast;
        static const ydk::Enum::YLeaf broadcast;

};

class FRAMERELAYDTEMIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf fault;
        static const ydk::Enum::YLeaf initializing;

};

class FRAMERELAYDTEMIB::FrCircuitTable::FrCircuitEntry::FrCircuitState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

};

class FRAMERELAYDTEMIB::FrCircuitTable::FrCircuitEntry::FrCircuitMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf oneWay;
        static const ydk::Enum::YLeaf twoWay;
        static const ydk::Enum::YLeaf nWay;

};

class FRAMERELAYDTEMIB::FrCircuitTable::FrCircuitEntry::FrCircuitType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

};

class FRAMERELAYDTEMIB::FrErrTable::FrErrEntry::FrErrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknownError;
        static const ydk::Enum::YLeaf receiveShort;
        static const ydk::Enum::YLeaf receiveLong;
        static const ydk::Enum::YLeaf illegalAddress;
        static const ydk::Enum::YLeaf unknownAddress;
        static const ydk::Enum::YLeaf dlcmiProtoErr;
        static const ydk::Enum::YLeaf dlcmiUnknownIE;
        static const ydk::Enum::YLeaf dlcmiSequenceErr;
        static const ydk::Enum::YLeaf dlcmiUnknownRpt;
        static const ydk::Enum::YLeaf noErrorSinceReset;

};


}
}

#endif /* _FRAME_RELAY_DTE_MIB_ */

