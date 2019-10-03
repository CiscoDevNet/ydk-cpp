#ifndef _OSPF_TRAP_MIB_
#define _OSPF_TRAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace OSPF_TRAP_MIB {

class OSPFTRAPMIB : public ydk::Entity
{
    public:
        OSPFTRAPMIB();
        ~OSPFTRAPMIB();

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

        class OspfTrapControl; //type: OSPFTRAPMIB::OspfTrapControl

        std::shared_ptr<cisco_ios_xe::OSPF_TRAP_MIB::OSPFTRAPMIB::OspfTrapControl> ospftrapcontrol;
        
}; // OSPFTRAPMIB


class OSPFTRAPMIB::OspfTrapControl : public ydk::Entity
{
    public:
        OspfTrapControl();
        ~OspfTrapControl();

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

        ydk::YLeaf ospfsettrap; //type: binary
        ydk::YLeaf ospfconfigerrortype; //type: OspfConfigErrorType
        ydk::YLeaf ospfpackettype; //type: OspfPacketType
        ydk::YLeaf ospfpacketsrc; //type: string
        class OspfConfigErrorType;
        class OspfPacketType;

}; // OSPFTRAPMIB::OspfTrapControl

class OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf badVersion;
        static const ydk::Enum::YLeaf areaMismatch;
        static const ydk::Enum::YLeaf unknownNbmaNbr;
        static const ydk::Enum::YLeaf unknownVirtualNbr;
        static const ydk::Enum::YLeaf authTypeMismatch;
        static const ydk::Enum::YLeaf authFailure;
        static const ydk::Enum::YLeaf netMaskMismatch;
        static const ydk::Enum::YLeaf helloIntervalMismatch;
        static const ydk::Enum::YLeaf deadIntervalMismatch;
        static const ydk::Enum::YLeaf optionMismatch;
        static const ydk::Enum::YLeaf mtuMismatch;
        static const ydk::Enum::YLeaf duplicateRouterId;
        static const ydk::Enum::YLeaf noError;

        static int get_enum_value(const std::string & name) {
            if (name == "badVersion") return 1;
            if (name == "areaMismatch") return 2;
            if (name == "unknownNbmaNbr") return 3;
            if (name == "unknownVirtualNbr") return 4;
            if (name == "authTypeMismatch") return 5;
            if (name == "authFailure") return 6;
            if (name == "netMaskMismatch") return 7;
            if (name == "helloIntervalMismatch") return 8;
            if (name == "deadIntervalMismatch") return 9;
            if (name == "optionMismatch") return 10;
            if (name == "mtuMismatch") return 11;
            if (name == "duplicateRouterId") return 12;
            if (name == "noError") return 13;
            return -1;
        }
};

class OSPFTRAPMIB::OspfTrapControl::OspfPacketType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf dbDescript;
        static const ydk::Enum::YLeaf lsReq;
        static const ydk::Enum::YLeaf lsUpdate;
        static const ydk::Enum::YLeaf lsAck;
        static const ydk::Enum::YLeaf nullPacket;

        static int get_enum_value(const std::string & name) {
            if (name == "hello") return 1;
            if (name == "dbDescript") return 2;
            if (name == "lsReq") return 3;
            if (name == "lsUpdate") return 4;
            if (name == "lsAck") return 5;
            if (name == "nullPacket") return 6;
            return -1;
        }
};


}
}

#endif /* _OSPF_TRAP_MIB_ */

