
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
    ospftrapcontrol(std::make_shared<OSPFTRAPMIB::OspfTrapControl>())
{
    ospftrapcontrol->parent = this;

    yang_name = "OSPF-TRAP-MIB"; yang_parent_name = "OSPF-TRAP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

OSPFTRAPMIB::~OSPFTRAPMIB()
{
}

bool OSPFTRAPMIB::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> OSPFTRAPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfTrapControl")
    {
        if(ospftrapcontrol == nullptr)
        {
            ospftrapcontrol = std::make_shared<OSPFTRAPMIB::OspfTrapControl>();
        }
        return ospftrapcontrol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OSPFTRAPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ospftrapcontrol != nullptr)
    {
        _children["ospfTrapControl"] = ospftrapcontrol;
    }

    return _children;
}

void OSPFTRAPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFTRAPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> OSPFTRAPMIB::clone_ptr() const
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

OSPFTRAPMIB::OspfTrapControl::OspfTrapControl()
    :
    ospfsettrap{YType::str, "ospfSetTrap"},
    ospfconfigerrortype{YType::enumeration, "ospfConfigErrorType"},
    ospfpackettype{YType::enumeration, "ospfPacketType"},
    ospfpacketsrc{YType::str, "ospfPacketSrc"}
{

    yang_name = "ospfTrapControl"; yang_parent_name = "OSPF-TRAP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFTRAPMIB::OspfTrapControl::~OspfTrapControl()
{
}

bool OSPFTRAPMIB::OspfTrapControl::has_data() const
{
    if (is_presence_container) return true;
    return ospfsettrap.is_set
	|| ospfconfigerrortype.is_set
	|| ospfpackettype.is_set
	|| ospfpacketsrc.is_set;
}

bool OSPFTRAPMIB::OspfTrapControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfsettrap.yfilter)
	|| ydk::is_set(ospfconfigerrortype.yfilter)
	|| ydk::is_set(ospfpackettype.yfilter)
	|| ydk::is_set(ospfpacketsrc.yfilter);
}

std::string OSPFTRAPMIB::OspfTrapControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-TRAP-MIB:OSPF-TRAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFTRAPMIB::OspfTrapControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfTrapControl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFTRAPMIB::OspfTrapControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfsettrap.is_set || is_set(ospfsettrap.yfilter)) leaf_name_data.push_back(ospfsettrap.get_name_leafdata());
    if (ospfconfigerrortype.is_set || is_set(ospfconfigerrortype.yfilter)) leaf_name_data.push_back(ospfconfigerrortype.get_name_leafdata());
    if (ospfpackettype.is_set || is_set(ospfpackettype.yfilter)) leaf_name_data.push_back(ospfpackettype.get_name_leafdata());
    if (ospfpacketsrc.is_set || is_set(ospfpacketsrc.yfilter)) leaf_name_data.push_back(ospfpacketsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> OSPFTRAPMIB::OspfTrapControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> OSPFTRAPMIB::OspfTrapControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void OSPFTRAPMIB::OspfTrapControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfSetTrap")
    {
        ospfsettrap = value;
        ospfsettrap.value_namespace = name_space;
        ospfsettrap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfConfigErrorType")
    {
        ospfconfigerrortype = value;
        ospfconfigerrortype.value_namespace = name_space;
        ospfconfigerrortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfPacketType")
    {
        ospfpackettype = value;
        ospfpackettype.value_namespace = name_space;
        ospfpackettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfPacketSrc")
    {
        ospfpacketsrc = value;
        ospfpacketsrc.value_namespace = name_space;
        ospfpacketsrc.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFTRAPMIB::OspfTrapControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfSetTrap")
    {
        ospfsettrap.yfilter = yfilter;
    }
    if(value_path == "ospfConfigErrorType")
    {
        ospfconfigerrortype.yfilter = yfilter;
    }
    if(value_path == "ospfPacketType")
    {
        ospfpackettype.yfilter = yfilter;
    }
    if(value_path == "ospfPacketSrc")
    {
        ospfpacketsrc.yfilter = yfilter;
    }
}

bool OSPFTRAPMIB::OspfTrapControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfSetTrap" || name == "ospfConfigErrorType" || name == "ospfPacketType" || name == "ospfPacketSrc")
        return true;
    return false;
}

const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::badVersion {1, "badVersion"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::areaMismatch {2, "areaMismatch"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::unknownNbmaNbr {3, "unknownNbmaNbr"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::unknownVirtualNbr {4, "unknownVirtualNbr"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::authTypeMismatch {5, "authTypeMismatch"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::authFailure {6, "authFailure"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::netMaskMismatch {7, "netMaskMismatch"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::helloIntervalMismatch {8, "helloIntervalMismatch"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::deadIntervalMismatch {9, "deadIntervalMismatch"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::optionMismatch {10, "optionMismatch"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::mtuMismatch {11, "mtuMismatch"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::duplicateRouterId {12, "duplicateRouterId"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfConfigErrorType::noError {13, "noError"};

const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfPacketType::hello {1, "hello"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfPacketType::dbDescript {2, "dbDescript"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfPacketType::lsReq {3, "lsReq"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfPacketType::lsUpdate {4, "lsUpdate"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfPacketType::lsAck {5, "lsAck"};
const Enum::YLeaf OSPFTRAPMIB::OspfTrapControl::OspfPacketType::nullPacket {6, "nullPacket"};


}
}

