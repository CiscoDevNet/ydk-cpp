
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "OSPF_TRAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace OSPF_TRAP_MIB {

OSPFTRAPMIB::OSPFTRAPMIB()
    :
    ospftrapcontrol(std::make_shared<OSPFTRAPMIB::Ospftrapcontrol>())
{
    ospftrapcontrol->parent = this;

    yang_name = "OSPF-TRAP-MIB"; yang_parent_name = "OSPF-TRAP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

OSPFTRAPMIB::~OSPFTRAPMIB()
{
}

bool OSPFTRAPMIB::has_data() const
{
    return (ospftrapcontrol !=  nullptr && ospftrapcontrol->has_data());
}

bool OSPFTRAPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ospftrapcontrol !=  nullptr && ospftrapcontrol->has_operation());
}

std::string OSPFTRAPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-TRAP-MIB:OSPF-TRAP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFTRAPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFTRAPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfTrapControl")
    {
        if(ospftrapcontrol == nullptr)
        {
            ospftrapcontrol = std::make_shared<OSPFTRAPMIB::Ospftrapcontrol>();
        }
        return ospftrapcontrol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFTRAPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospftrapcontrol != nullptr)
    {
        children["ospfTrapControl"] = ospftrapcontrol;
    }

    return children;
}

void OSPFTRAPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFTRAPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OSPFTRAPMIB::clone_ptr() const
{
    return std::make_shared<OSPFTRAPMIB>();
}

std::string OSPFTRAPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string OSPFTRAPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function OSPFTRAPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OSPFTRAPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool OSPFTRAPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfTrapControl")
        return true;
    return false;
}

OSPFTRAPMIB::Ospftrapcontrol::Ospftrapcontrol()
    :
    ospfconfigerrortype{YType::enumeration, "ospfConfigErrorType"},
    ospfpacketsrc{YType::str, "ospfPacketSrc"},
    ospfpackettype{YType::enumeration, "ospfPacketType"},
    ospfsettrap{YType::str, "ospfSetTrap"}
{

    yang_name = "ospfTrapControl"; yang_parent_name = "OSPF-TRAP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFTRAPMIB::Ospftrapcontrol::~Ospftrapcontrol()
{
}

bool OSPFTRAPMIB::Ospftrapcontrol::has_data() const
{
    return ospfconfigerrortype.is_set
	|| ospfpacketsrc.is_set
	|| ospfpackettype.is_set
	|| ospfsettrap.is_set;
}

bool OSPFTRAPMIB::Ospftrapcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfconfigerrortype.yfilter)
	|| ydk::is_set(ospfpacketsrc.yfilter)
	|| ydk::is_set(ospfpackettype.yfilter)
	|| ydk::is_set(ospfsettrap.yfilter);
}

std::string OSPFTRAPMIB::Ospftrapcontrol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-TRAP-MIB:OSPF-TRAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFTRAPMIB::Ospftrapcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfTrapControl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFTRAPMIB::Ospftrapcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfconfigerrortype.is_set || is_set(ospfconfigerrortype.yfilter)) leaf_name_data.push_back(ospfconfigerrortype.get_name_leafdata());
    if (ospfpacketsrc.is_set || is_set(ospfpacketsrc.yfilter)) leaf_name_data.push_back(ospfpacketsrc.get_name_leafdata());
    if (ospfpackettype.is_set || is_set(ospfpackettype.yfilter)) leaf_name_data.push_back(ospfpackettype.get_name_leafdata());
    if (ospfsettrap.is_set || is_set(ospfsettrap.yfilter)) leaf_name_data.push_back(ospfsettrap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFTRAPMIB::Ospftrapcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFTRAPMIB::Ospftrapcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OSPFTRAPMIB::Ospftrapcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfConfigErrorType")
    {
        ospfconfigerrortype = value;
        ospfconfigerrortype.value_namespace = name_space;
        ospfconfigerrortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfPacketSrc")
    {
        ospfpacketsrc = value;
        ospfpacketsrc.value_namespace = name_space;
        ospfpacketsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfPacketType")
    {
        ospfpackettype = value;
        ospfpackettype.value_namespace = name_space;
        ospfpackettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfSetTrap")
    {
        ospfsettrap = value;
        ospfsettrap.value_namespace = name_space;
        ospfsettrap.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFTRAPMIB::Ospftrapcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfConfigErrorType")
    {
        ospfconfigerrortype.yfilter = yfilter;
    }
    if(value_path == "ospfPacketSrc")
    {
        ospfpacketsrc.yfilter = yfilter;
    }
    if(value_path == "ospfPacketType")
    {
        ospfpackettype.yfilter = yfilter;
    }
    if(value_path == "ospfSetTrap")
    {
        ospfsettrap.yfilter = yfilter;
    }
}

bool OSPFTRAPMIB::Ospftrapcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfConfigErrorType" || name == "ospfPacketSrc" || name == "ospfPacketType" || name == "ospfSetTrap")
        return true;
    return false;
}

const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::badVersion {1, "badVersion"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::areaMismatch {2, "areaMismatch"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::unknownNbmaNbr {3, "unknownNbmaNbr"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::unknownVirtualNbr {4, "unknownVirtualNbr"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::authTypeMismatch {5, "authTypeMismatch"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::authFailure {6, "authFailure"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::netMaskMismatch {7, "netMaskMismatch"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::helloIntervalMismatch {8, "helloIntervalMismatch"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::deadIntervalMismatch {9, "deadIntervalMismatch"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::optionMismatch {10, "optionMismatch"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::mtuMismatch {11, "mtuMismatch"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::duplicateRouterId {12, "duplicateRouterId"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfconfigerrortype::noError {13, "noError"};

const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfpackettype::hello {1, "hello"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfpackettype::dbDescript {2, "dbDescript"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfpackettype::lsReq {3, "lsReq"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfpackettype::lsUpdate {4, "lsUpdate"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfpackettype::lsAck {5, "lsAck"};
const Enum::YLeaf OSPFTRAPMIB::Ospftrapcontrol::Ospfpackettype::nullPacket {6, "nullPacket"};


}
}

