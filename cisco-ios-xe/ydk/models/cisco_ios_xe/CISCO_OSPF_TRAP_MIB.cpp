
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_OSPF_TRAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_OSPF_TRAP_MIB {

CISCOOSPFTRAPMIB::CISCOOSPFTRAPMIB()
    :
    cospftrapcontrol(std::make_shared<CISCOOSPFTRAPMIB::Cospftrapcontrol>())
{
    cospftrapcontrol->parent = this;

    yang_name = "CISCO-OSPF-TRAP-MIB"; yang_parent_name = "CISCO-OSPF-TRAP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOOSPFTRAPMIB::~CISCOOSPFTRAPMIB()
{
}

bool CISCOOSPFTRAPMIB::has_data() const
{
    return (cospftrapcontrol !=  nullptr && cospftrapcontrol->has_data());
}

bool CISCOOSPFTRAPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cospftrapcontrol !=  nullptr && cospftrapcontrol->has_operation());
}

std::string CISCOOSPFTRAPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-TRAP-MIB:CISCO-OSPF-TRAP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFTRAPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOOSPFTRAPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfTrapControl")
    {
        if(cospftrapcontrol == nullptr)
        {
            cospftrapcontrol = std::make_shared<CISCOOSPFTRAPMIB::Cospftrapcontrol>();
        }
        return cospftrapcontrol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOOSPFTRAPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cospftrapcontrol != nullptr)
    {
        children["cospfTrapControl"] = cospftrapcontrol;
    }

    return children;
}

void CISCOOSPFTRAPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOOSPFTRAPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOOSPFTRAPMIB::clone_ptr() const
{
    return std::make_shared<CISCOOSPFTRAPMIB>();
}

std::string CISCOOSPFTRAPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOOSPFTRAPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOOSPFTRAPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOOSPFTRAPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOOSPFTRAPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfTrapControl")
        return true;
    return false;
}

CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospftrapcontrol()
    :
    cospfsettrap{YType::bits, "cospfSetTrap"},
    cospfconfigerrortype{YType::enumeration, "cospfConfigErrorType"},
    cospfpackettype{YType::enumeration, "cospfPacketType"},
    cospfpacketsrc{YType::str, "cospfPacketSrc"}
{

    yang_name = "cospfTrapControl"; yang_parent_name = "CISCO-OSPF-TRAP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOOSPFTRAPMIB::Cospftrapcontrol::~Cospftrapcontrol()
{
}

bool CISCOOSPFTRAPMIB::Cospftrapcontrol::has_data() const
{
    return cospfsettrap.is_set
	|| cospfconfigerrortype.is_set
	|| cospfpackettype.is_set
	|| cospfpacketsrc.is_set;
}

bool CISCOOSPFTRAPMIB::Cospftrapcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cospfsettrap.yfilter)
	|| ydk::is_set(cospfconfigerrortype.yfilter)
	|| ydk::is_set(cospfpackettype.yfilter)
	|| ydk::is_set(cospfpacketsrc.yfilter);
}

std::string CISCOOSPFTRAPMIB::Cospftrapcontrol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-TRAP-MIB:CISCO-OSPF-TRAP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOOSPFTRAPMIB::Cospftrapcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfTrapControl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOOSPFTRAPMIB::Cospftrapcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfsettrap.is_set || is_set(cospfsettrap.yfilter)) leaf_name_data.push_back(cospfsettrap.get_name_leafdata());
    if (cospfconfigerrortype.is_set || is_set(cospfconfigerrortype.yfilter)) leaf_name_data.push_back(cospfconfigerrortype.get_name_leafdata());
    if (cospfpackettype.is_set || is_set(cospfpackettype.yfilter)) leaf_name_data.push_back(cospfpackettype.get_name_leafdata());
    if (cospfpacketsrc.is_set || is_set(cospfpacketsrc.yfilter)) leaf_name_data.push_back(cospfpacketsrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOOSPFTRAPMIB::Cospftrapcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOOSPFTRAPMIB::Cospftrapcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOOSPFTRAPMIB::Cospftrapcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfSetTrap")
    {
        cospfsettrap[value] = true;
    }
    if(value_path == "cospfConfigErrorType")
    {
        cospfconfigerrortype = value;
        cospfconfigerrortype.value_namespace = name_space;
        cospfconfigerrortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfPacketType")
    {
        cospfpackettype = value;
        cospfpackettype.value_namespace = name_space;
        cospfpackettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfPacketSrc")
    {
        cospfpacketsrc = value;
        cospfpacketsrc.value_namespace = name_space;
        cospfpacketsrc.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOOSPFTRAPMIB::Cospftrapcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfSetTrap")
    {
        cospfsettrap.yfilter = yfilter;
    }
    if(value_path == "cospfConfigErrorType")
    {
        cospfconfigerrortype.yfilter = yfilter;
    }
    if(value_path == "cospfPacketType")
    {
        cospfpackettype.yfilter = yfilter;
    }
    if(value_path == "cospfPacketSrc")
    {
        cospfpacketsrc.yfilter = yfilter;
    }
}

bool CISCOOSPFTRAPMIB::Cospftrapcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfSetTrap" || name == "cospfConfigErrorType" || name == "cospfPacketType" || name == "cospfPacketSrc")
        return true;
    return false;
}

const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::badVersion {1, "badVersion"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::areaMismatch {2, "areaMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::unknownNbmaNbr {3, "unknownNbmaNbr"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::unknownVirtualNbr {4, "unknownVirtualNbr"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::authTypeMismatch {5, "authTypeMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::authFailure {6, "authFailure"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::netMaskMismatch {7, "netMaskMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::helloIntervalMismatch {8, "helloIntervalMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::deadIntervalMismatch {9, "deadIntervalMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::optionMismatch {10, "optionMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::mtuMismatch {11, "mtuMismatch"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::noError {12, "noError"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfconfigerrortype::unknownShamLinkNbr {13, "unknownShamLinkNbr"};

const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfpackettype::hello {1, "hello"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfpackettype::dbDescript {2, "dbDescript"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfpackettype::lsReq {3, "lsReq"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfpackettype::lsUpdate {4, "lsUpdate"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfpackettype::lsAck {5, "lsAck"};
const Enum::YLeaf CISCOOSPFTRAPMIB::Cospftrapcontrol::Cospfpackettype::nullPacket {6, "nullPacket"};


}
}

