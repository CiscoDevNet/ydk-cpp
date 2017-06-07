#ifndef _CISCO_OSPF_TRAP_MIB_
#define _CISCO_OSPF_TRAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_OSPF_TRAP_MIB {

class CiscoOspfTrapMib : public Entity
{
    public:
        CiscoOspfTrapMib();
        ~CiscoOspfTrapMib();

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

        class Cospftrapcontrol; //type: CiscoOspfTrapMib::Cospftrapcontrol

        std::shared_ptr<CISCO_OSPF_TRAP_MIB::CiscoOspfTrapMib::Cospftrapcontrol> cospftrapcontrol;
        
}; // CiscoOspfTrapMib


class CiscoOspfTrapMib::Cospftrapcontrol : public Entity
{
    public:
        Cospftrapcontrol();
        ~Cospftrapcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cospfsettrap; //type: Cospfsettrap
        YLeaf cospfconfigerrortype; //type: CospfconfigerrortypeEnum
        YLeaf cospfpackettype; //type: CospfpackettypeEnum
        YLeaf cospfpacketsrc; //type: string
        class CospfconfigerrortypeEnum;
        class CospfpackettypeEnum;

}; // CiscoOspfTrapMib::Cospftrapcontrol

class CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum : public Enum
{
    public:
        static const Enum::YLeaf badVersion;
        static const Enum::YLeaf areaMismatch;
        static const Enum::YLeaf unknownNbmaNbr;
        static const Enum::YLeaf unknownVirtualNbr;
        static const Enum::YLeaf authTypeMismatch;
        static const Enum::YLeaf authFailure;
        static const Enum::YLeaf netMaskMismatch;
        static const Enum::YLeaf helloIntervalMismatch;
        static const Enum::YLeaf deadIntervalMismatch;
        static const Enum::YLeaf optionMismatch;
        static const Enum::YLeaf mtuMismatch;
        static const Enum::YLeaf noError;
        static const Enum::YLeaf unknownShamLinkNbr;

};

class CiscoOspfTrapMib::Cospftrapcontrol::CospfpackettypeEnum : public Enum
{
    public:
        static const Enum::YLeaf hello;
        static const Enum::YLeaf dbDescript;
        static const Enum::YLeaf lsReq;
        static const Enum::YLeaf lsUpdate;
        static const Enum::YLeaf lsAck;
        static const Enum::YLeaf nullPacket;

};


}
}

#endif /* _CISCO_OSPF_TRAP_MIB_ */

