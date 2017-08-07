
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_OSPF_TRAP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void CiscoOspfTrapMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoOspfTrapMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoOspfTrapMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoOspfTrapMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfTrapControl")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cospfconfigerrortype.yfilter)
	|| ydk::is_set(cospfpacketsrc.yfilter)
	|| ydk::is_set(cospfpackettype.yfilter)
	|| ydk::is_set(cospfsettrap.yfilter);
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

    if (cospfconfigerrortype.is_set || is_set(cospfconfigerrortype.yfilter)) leaf_name_data.push_back(cospfconfigerrortype.get_name_leafdata());
    if (cospfpacketsrc.is_set || is_set(cospfpacketsrc.yfilter)) leaf_name_data.push_back(cospfpacketsrc.get_name_leafdata());
    if (cospfpackettype.is_set || is_set(cospfpackettype.yfilter)) leaf_name_data.push_back(cospfpackettype.get_name_leafdata());
    if (cospfsettrap.is_set || is_set(cospfsettrap.yfilter)) leaf_name_data.push_back(cospfsettrap.get_name_leafdata());


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

void CiscoOspfTrapMib::Cospftrapcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cospfConfigErrorType")
    {
        cospfconfigerrortype = value;
        cospfconfigerrortype.value_namespace = name_space;
        cospfconfigerrortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfPacketSrc")
    {
        cospfpacketsrc = value;
        cospfpacketsrc.value_namespace = name_space;
        cospfpacketsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfPacketType")
    {
        cospfpackettype = value;
        cospfpackettype.value_namespace = name_space;
        cospfpackettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cospfSetTrap")
    {
        cospfsettrap[value] = true;
    }
}

void CiscoOspfTrapMib::Cospftrapcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cospfConfigErrorType")
    {
        cospfconfigerrortype.yfilter = yfilter;
    }
    if(value_path == "cospfPacketSrc")
    {
        cospfpacketsrc.yfilter = yfilter;
    }
    if(value_path == "cospfPacketType")
    {
        cospfpackettype.yfilter = yfilter;
    }
    if(value_path == "cospfSetTrap")
    {
        cospfsettrap.yfilter = yfilter;
    }
}

bool CiscoOspfTrapMib::Cospftrapcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cospfConfigErrorType" || name == "cospfPacketSrc" || name == "cospfPacketType" || name == "cospfSetTrap")
        return true;
    return false;
}

const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::badVersion {1, "badVersion"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::areaMismatch {2, "areaMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::unknownNbmaNbr {3, "unknownNbmaNbr"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::unknownVirtualNbr {4, "unknownVirtualNbr"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::authTypeMismatch {5, "authTypeMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::authFailure {6, "authFailure"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::netMaskMismatch {7, "netMaskMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::helloIntervalMismatch {8, "helloIntervalMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::deadIntervalMismatch {9, "deadIntervalMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::optionMismatch {10, "optionMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::mtuMismatch {11, "mtuMismatch"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::noError {12, "noError"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfconfigerrortype::unknownShamLinkNbr {13, "unknownShamLinkNbr"};

const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfpackettype::hello {1, "hello"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfpackettype::dbDescript {2, "dbDescript"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfpackettype::lsReq {3, "lsReq"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfpackettype::lsUpdate {4, "lsUpdate"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfpackettype::lsAck {5, "lsAck"};
const Enum::YLeaf CiscoOspfTrapMib::Cospftrapcontrol::Cospfpackettype::nullPacket {6, "nullPacket"};


}
}

