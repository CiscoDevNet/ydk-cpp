#ifndef _OSPF_TRAP_MIB_
#define _OSPF_TRAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace OSPF_TRAP_MIB {

class OspfTrapMib : public ydk::Entity
{
    public:
        OspfTrapMib();
        ~OspfTrapMib();

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

        class Ospftrapcontrol; //type: OspfTrapMib::Ospftrapcontrol

        std::shared_ptr<OSPF_TRAP_MIB::OspfTrapMib::Ospftrapcontrol> ospftrapcontrol;
        
}; // OspfTrapMib


class OspfTrapMib::Ospftrapcontrol : public ydk::Entity
{
    public:
        Ospftrapcontrol();
        ~Ospftrapcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfsettrap; //type: binary
        ydk::YLeaf ospfconfigerrortype; //type: Ospfconfigerrortype
        ydk::YLeaf ospfpackettype; //type: Ospfpackettype
        ydk::YLeaf ospfpacketsrc; //type: string
        class Ospfconfigerrortype;
        class Ospfpackettype;

}; // OspfTrapMib::Ospftrapcontrol

class OspfTrapMib::Ospftrapcontrol::Ospfconfigerrortype : public ydk::Enum
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

};

class OspfTrapMib::Ospftrapcontrol::Ospfpackettype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf dbDescript;
        static const ydk::Enum::YLeaf lsReq;
        static const ydk::Enum::YLeaf lsUpdate;
        static const ydk::Enum::YLeaf lsAck;
        static const ydk::Enum::YLeaf nullPacket;

};


}
}

#endif /* _OSPF_TRAP_MIB_ */

