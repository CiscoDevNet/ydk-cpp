#ifndef _RFC1315_MIB_
#define _RFC1315_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace RFC1315_MIB {

class RFC1315MIB : public ydk::Entity
{
    public:
        RFC1315MIB();
        ~RFC1315MIB();

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

        class FrameRelayGlobals; //type: RFC1315MIB::FrameRelayGlobals
        class FrDlcmiTable; //type: RFC1315MIB::FrDlcmiTable
        class FrCircuitTable; //type: RFC1315MIB::FrCircuitTable
        class FrErrTable; //type: RFC1315MIB::FrErrTable

        std::shared_ptr<cisco_ios_xe::RFC1315_MIB::RFC1315MIB::FrameRelayGlobals> frame_relay_globals;
        std::shared_ptr<cisco_ios_xe::RFC1315_MIB::RFC1315MIB::FrDlcmiTable> frdlcmitable;
        std::shared_ptr<cisco_ios_xe::RFC1315_MIB::RFC1315MIB::FrCircuitTable> frcircuittable;
        std::shared_ptr<cisco_ios_xe::RFC1315_MIB::RFC1315MIB::FrErrTable> frerrtable;
        
}; // RFC1315MIB


class RFC1315MIB::FrameRelayGlobals : public ydk::Entity
{
    public:
        FrameRelayGlobals();
        ~FrameRelayGlobals();

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
        class FrTrapState;

}; // RFC1315MIB::FrameRelayGlobals


class RFC1315MIB::FrDlcmiTable : public ydk::Entity
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

        class FrDlcmiEntry; //type: RFC1315MIB::FrDlcmiTable::FrDlcmiEntry

        ydk::YList frdlcmientry;
        
}; // RFC1315MIB::FrDlcmiTable


class RFC1315MIB::FrDlcmiTable::FrDlcmiEntry : public ydk::Entity
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
        class FrDlcmiState;
        class FrDlcmiAddress;
        class FrDlcmiAddressLen;
        class FrDlcmiMulticast;

}; // RFC1315MIB::FrDlcmiTable::FrDlcmiEntry


class RFC1315MIB::FrCircuitTable : public ydk::Entity
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

        class FrCircuitEntry; //type: RFC1315MIB::FrCircuitTable::FrCircuitEntry

        ydk::YList frcircuitentry;
        
}; // RFC1315MIB::FrCircuitTable


class RFC1315MIB::FrCircuitTable::FrCircuitEntry : public ydk::Entity
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
        class FrCircuitState;

}; // RFC1315MIB::FrCircuitTable::FrCircuitEntry


class RFC1315MIB::FrErrTable : public ydk::Entity
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

        class FrErrEntry; //type: RFC1315MIB::FrErrTable::FrErrEntry

        ydk::YList frerrentry;
        
}; // RFC1315MIB::FrErrTable


class RFC1315MIB::FrErrTable::FrErrEntry : public ydk::Entity
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
        class FrErrType;

}; // RFC1315MIB::FrErrTable::FrErrEntry

class RFC1315MIB::FrameRelayGlobals::FrTrapState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noLmiConfigured;
        static const ydk::Enum::YLeaf lmiRev1;
        static const ydk::Enum::YLeaf ansiT1_617_D;
        static const ydk::Enum::YLeaf ansiT1_617_B;

        static int get_enum_value(const std::string & name) {
            if (name == "noLmiConfigured") return 1;
            if (name == "lmiRev1") return 2;
            if (name == "ansiT1-617-D") return 3;
            if (name == "ansiT1-617-B") return 4;
            return -1;
        }
};

class RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddress : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf q921;
        static const ydk::Enum::YLeaf q922March90;
        static const ydk::Enum::YLeaf q922November90;
        static const ydk::Enum::YLeaf q922;

        static int get_enum_value(const std::string & name) {
            if (name == "q921") return 1;
            if (name == "q922March90") return 2;
            if (name == "q922November90") return 3;
            if (name == "q922") return 4;
            return -1;
        }
};

class RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiAddressLen : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf two_octets;
        static const ydk::Enum::YLeaf three_octets;
        static const ydk::Enum::YLeaf four_octets;

        static int get_enum_value(const std::string & name) {
            if (name == "two-octets") return 2;
            if (name == "three-octets") return 3;
            if (name == "four-octets") return 4;
            return -1;
        }
};

class RFC1315MIB::FrDlcmiTable::FrDlcmiEntry::FrDlcmiMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonBroadcast;
        static const ydk::Enum::YLeaf broadcast;

        static int get_enum_value(const std::string & name) {
            if (name == "nonBroadcast") return 1;
            if (name == "broadcast") return 2;
            return -1;
        }
};

class RFC1315MIB::FrCircuitTable::FrCircuitEntry::FrCircuitState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

        static int get_enum_value(const std::string & name) {
            if (name == "invalid") return 1;
            if (name == "active") return 2;
            if (name == "inactive") return 3;
            return -1;
        }
};

class RFC1315MIB::FrErrTable::FrErrEntry::FrErrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknownError;
        static const ydk::Enum::YLeaf receiveShort;
        static const ydk::Enum::YLeaf receiveLong;
        static const ydk::Enum::YLeaf illegalDLCI;
        static const ydk::Enum::YLeaf unknownDLCI;
        static const ydk::Enum::YLeaf dlcmiProtoErr;
        static const ydk::Enum::YLeaf dlcmiUnknownIE;
        static const ydk::Enum::YLeaf dlcmiSequenceErr;
        static const ydk::Enum::YLeaf dlcmiUnknownRpt;
        static const ydk::Enum::YLeaf noErrorSinceReset;

        static int get_enum_value(const std::string & name) {
            if (name == "unknownError") return 1;
            if (name == "receiveShort") return 2;
            if (name == "receiveLong") return 3;
            if (name == "illegalDLCI") return 4;
            if (name == "unknownDLCI") return 5;
            if (name == "dlcmiProtoErr") return 6;
            if (name == "dlcmiUnknownIE") return 7;
            if (name == "dlcmiSequenceErr") return 8;
            if (name == "dlcmiUnknownRpt") return 9;
            if (name == "noErrorSinceReset") return 10;
            return -1;
        }
};


}
}

#endif /* _RFC1315_MIB_ */

