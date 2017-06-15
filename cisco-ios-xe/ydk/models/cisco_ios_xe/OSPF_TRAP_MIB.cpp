
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "OSPF_TRAP_MIB.hpp"

namespace ydk {
namespace OSPF_TRAP_MIB {

OspfTrapMib::OspfTrapMib()
    :
    ospftrapcontrol_(std::make_shared<OspfTrapMib::Ospftrapcontrol>())
{
    ospftrapcontrol_->parent = this;

    yang_name = "OSPF-TRAP-MIB"; yang_parent_name = "OSPF-TRAP-MIB";
}

OspfTrapMib::~OspfTrapMib()
{
}

bool OspfTrapMib::has_data() const
{
    return (ospftrapcontrol_ !=  nullptr && ospftrapcontrol_->has_data());
}

bool OspfTrapMib::has_operation() const
{
    return is_set(operation)
	|| (ospftrapcontrol_ !=  nullptr && ospftrapcontrol_->has_operation());
}

std::string OspfTrapMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-TRAP-MIB:OSPF-TRAP-MIB";

    return path_buffer.str();

}

const EntityPath OspfTrapMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> OspfTrapMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfTrapControl")
    {
        if(ospftrapcontrol_ == nullptr)
        {
            ospftrapcontrol_ = std::make_shared<OspfTrapMib::Ospftrapcontrol>();
        }
        return ospftrapcontrol_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfTrapMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospftrapcontrol_ != nullptr)
    {
        children["ospfTrapControl"] = ospftrapcontrol_;
    }

    return children;
}

void OspfTrapMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> OspfTrapMib::clone_ptr() const
{
    return std::make_shared<OspfTrapMib>();
}

std::string OspfTrapMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string OspfTrapMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function OspfTrapMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

OspfTrapMib::Ospftrapcontrol::Ospftrapcontrol()
    :
    ospfconfigerrortype{YType::enumeration, "ospfConfigErrorType"},
    ospfpacketsrc{YType::str, "ospfPacketSrc"},
    ospfpackettype{YType::enumeration, "ospfPacketType"},
    ospfsettrap{YType::str, "ospfSetTrap"}
{
    yang_name = "ospfTrapControl"; yang_parent_name = "OSPF-TRAP-MIB";
}

OspfTrapMib::Ospftrapcontrol::~Ospftrapcontrol()
{
}

bool OspfTrapMib::Ospftrapcontrol::has_data() const
{
    return ospfconfigerrortype.is_set
	|| ospfpacketsrc.is_set
	|| ospfpackettype.is_set
	|| ospfsettrap.is_set;
}

bool OspfTrapMib::Ospftrapcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfconfigerrortype.operation)
	|| is_set(ospfpacketsrc.operation)
	|| is_set(ospfpackettype.operation)
	|| is_set(ospfsettrap.operation);
}

std::string OspfTrapMib::Ospftrapcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfTrapControl";

    return path_buffer.str();

}

const EntityPath OspfTrapMib::Ospftrapcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-TRAP-MIB:OSPF-TRAP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfconfigerrortype.is_set || is_set(ospfconfigerrortype.operation)) leaf_name_data.push_back(ospfconfigerrortype.get_name_leafdata());
    if (ospfpacketsrc.is_set || is_set(ospfpacketsrc.operation)) leaf_name_data.push_back(ospfpacketsrc.get_name_leafdata());
    if (ospfpackettype.is_set || is_set(ospfpackettype.operation)) leaf_name_data.push_back(ospfpackettype.get_name_leafdata());
    if (ospfsettrap.is_set || is_set(ospfsettrap.operation)) leaf_name_data.push_back(ospfsettrap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfTrapMib::Ospftrapcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfTrapMib::Ospftrapcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfTrapMib::Ospftrapcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfConfigErrorType")
    {
        ospfconfigerrortype = value;
    }
    if(value_path == "ospfPacketSrc")
    {
        ospfpacketsrc = value;
    }
    if(value_path == "ospfPacketType")
    {
        ospfpackettype = value;
    }
    if(value_path == "ospfSetTrap")
    {
        ospfsettrap = value;
    }
}

const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::badVersion {1, "badVersion"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::areaMismatch {2, "areaMismatch"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::unknownNbmaNbr {3, "unknownNbmaNbr"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::unknownVirtualNbr {4, "unknownVirtualNbr"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::authTypeMismatch {5, "authTypeMismatch"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::authFailure {6, "authFailure"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::netMaskMismatch {7, "netMaskMismatch"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::helloIntervalMismatch {8, "helloIntervalMismatch"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::deadIntervalMismatch {9, "deadIntervalMismatch"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::optionMismatch {10, "optionMismatch"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::mtuMismatch {11, "mtuMismatch"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::duplicateRouterId {12, "duplicateRouterId"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfconfigerrortypeEnum::noError {13, "noError"};

const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfpackettypeEnum::hello {1, "hello"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfpackettypeEnum::dbDescript {2, "dbDescript"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfpackettypeEnum::lsReq {3, "lsReq"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfpackettypeEnum::lsUpdate {4, "lsUpdate"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfpackettypeEnum::lsAck {5, "lsAck"};
const Enum::YLeaf OspfTrapMib::Ospftrapcontrol::OspfpackettypeEnum::nullPacket {6, "nullPacket"};


}
}

