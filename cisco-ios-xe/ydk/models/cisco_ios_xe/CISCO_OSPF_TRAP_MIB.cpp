
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_OSPF_TRAP_MIB.hpp"

namespace ydk {
namespace CISCO_OSPF_TRAP_MIB {

CiscoOspfTrapMib::CiscoOspfTrapMib()
    :
    cospftrapcontrol(std::make_shared<CiscoOspfTrapMib::Cospftrapcontrol>())
{
    cospftrapcontrol->parent = this;

    yang_name = "CISCO-OSPF-TRAP-MIB"; yang_parent_name = "CISCO-OSPF-TRAP-MIB";
}

CiscoOspfTrapMib::~CiscoOspfTrapMib()
{
}

bool CiscoOspfTrapMib::has_data() const
{
    return (cospftrapcontrol !=  nullptr && cospftrapcontrol->has_data());
}

bool CiscoOspfTrapMib::has_operation() const
{
    return is_set(operation)
	|| (cospftrapcontrol !=  nullptr && cospftrapcontrol->has_operation());
}

std::string CiscoOspfTrapMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-TRAP-MIB:CISCO-OSPF-TRAP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoOspfTrapMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfTrapMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfTrapControl")
    {
        if(cospftrapcontrol == nullptr)
        {
            cospftrapcontrol = std::make_shared<CiscoOspfTrapMib::Cospftrapcontrol>();
        }
        return cospftrapcontrol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfTrapMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cospftrapcontrol != nullptr)
    {
        children["cospfTrapControl"] = cospftrapcontrol;
    }

    return children;
}

void CiscoOspfTrapMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoOspfTrapMib::clone_ptr() const
{
    return std::make_shared<CiscoOspfTrapMib>();
}

std::string CiscoOspfTrapMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoOspfTrapMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoOspfTrapMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoOspfTrapMib::Cospftrapcontrol::Cospftrapcontrol()
    :
    cospfconfigerrortype{YType::enumeration, "cospfConfigErrorType"},
    cospfpacketsrc{YType::str, "cospfPacketSrc"},
    cospfpackettype{YType::enumeration, "cospfPacketType"},
    cospfsettrap{YType::bits, "cospfSetTrap"}
{
    yang_name = "cospfTrapControl"; yang_parent_name = "CISCO-OSPF-TRAP-MIB";
}

CiscoOspfTrapMib::Cospftrapcontrol::~Cospftrapcontrol()
{
}

bool CiscoOspfTrapMib::Cospftrapcontrol::has_data() const
{
    return cospfconfigerrortype.is_set
	|| cospfpacketsrc.is_set
	|| cospfpackettype.is_set
	|| cospfsettrap.is_set;
}

bool CiscoOspfTrapMib::Cospftrapcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(cospfconfigerrortype.operation)
	|| is_set(cospfpacketsrc.operation)
	|| is_set(cospfpackettype.operation)
	|| is_set(cospfsettrap.operation);
}

std::string CiscoOspfTrapMib::Cospftrapcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfTrapControl";

    return path_buffer.str();

}

const EntityPath CiscoOspfTrapMib::Cospftrapcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-TRAP-MIB:CISCO-OSPF-TRAP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfconfigerrortype.is_set || is_set(cospfconfigerrortype.operation)) leaf_name_data.push_back(cospfconfigerrortype.get_name_leafdata());
    if (cospfpacketsrc.is_set || is_set(cospfpacketsrc.operation)) leaf_name_data.push_back(cospfpacketsrc.get_name_leafdata());
    if (cospfpackettype.is_set || is_set(cospfpackettype.operation)) leaf_name_data.push_back(cospfpackettype.get_name_leafdata());
    if (cospfsettrap.is_set || is_set(cospfsettrap.operation)) leaf_name_data.push_back(cospfsettrap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfTrapMib::Cospftrapcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfTrapMib::Cospftrapcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfTrapMib::Cospftrapcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cospfConfigErrorType")
    {
        cospfconfigerrortype = value;
    }
    if(value_path == "cospfPacketSrc")
    {
        cospfpacketsrc = value;
    }
    if(value_path == "cospfPacketType")
    {
        cospfpackettype = value;
    }
    if(value_path == "cospfSetTrap")
    {
        cospfsettrap[value] = true;
    }
}

const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::badVersion {1, "badVersion"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::areaMismatch {2, "areaMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::unknownNbmaNbr {3, "unknownNbmaNbr"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::unknownVirtualNbr {4, "unknownVirtualNbr"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::authTypeMismatch {5, "authTypeMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::authFailure {6, "authFailure"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::netMaskMismatch {7, "netMaskMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::helloIntervalMismatch {8, "helloIntervalMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::deadIntervalMismatch {9, "deadIntervalMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::optionMismatch {10, "optionMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::mtuMismatch {11, "mtuMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::noError {12, "noError"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfconfigerrortypeEnum::unknownShamLinkNbr {13, "unknownShamLinkNbr"};

const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfpackettypeEnum::hello {1, "hello"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfpackettypeEnum::dbDescript {2, "dbDescript"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfpackettypeEnum::lsReq {3, "lsReq"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfpackettypeEnum::lsUpdate {4, "lsUpdate"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfpackettypeEnum::lsAck {5, "lsAck"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::CospfpackettypeEnum::nullPacket {6, "nullPacket"};


}
}

