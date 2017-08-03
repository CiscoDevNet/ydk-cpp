
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_COMMON_DIAL_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VOICE_COMMON_DIAL_CONTROL_MIB {

CiscoVoiceCommonDialControlMib::CiscoVoiceCommonDialControlMib()
    :
    cvcommondccallactivetable(std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable>())
	,cvcommondccallhistorytable(std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable>())
{
    cvcommondccallactivetable->parent = this;

    cvcommondccallhistorytable->parent = this;

    yang_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB";
}

CiscoVoiceCommonDialControlMib::~CiscoVoiceCommonDialControlMib()
{
}

bool CiscoVoiceCommonDialControlMib::has_data() const
{
    return (cvcommondccallactivetable !=  nullptr && cvcommondccallactivetable->has_data())
	|| (cvcommondccallhistorytable !=  nullptr && cvcommondccallhistorytable->has_data());
}

bool CiscoVoiceCommonDialControlMib::has_operation() const
{
    return is_set(yfilter)
	|| (cvcommondccallactivetable !=  nullptr && cvcommondccallactivetable->has_operation())
	|| (cvcommondccallhistorytable !=  nullptr && cvcommondccallhistorytable->has_operation());
}

std::string CiscoVoiceCommonDialControlMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB";

    return path_buffer.str();

}

const EntityPath CiscoVoiceCommonDialControlMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoVoiceCommonDialControlMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCommonDcCallActiveTable")
    {
        if(cvcommondccallactivetable == nullptr)
        {
            cvcommondccallactivetable = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable>();
        }
        return cvcommondccallactivetable;
    }

    if(child_yang_name == "cvCommonDcCallHistoryTable")
    {
        if(cvcommondccallhistorytable == nullptr)
        {
            cvcommondccallhistorytable = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable>();
        }
        return cvcommondccallhistorytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cvcommondccallactivetable != nullptr)
    {
        children["cvCommonDcCallActiveTable"] = cvcommondccallactivetable;
    }

    if(cvcommondccallhistorytable != nullptr)
    {
        children["cvCommonDcCallHistoryTable"] = cvcommondccallhistorytable;
    }

    return children;
}

void CiscoVoiceCommonDialControlMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVoiceCommonDialControlMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoVoiceCommonDialControlMib::clone_ptr() const
{
    return std::make_shared<CiscoVoiceCommonDialControlMib>();
}

std::string CiscoVoiceCommonDialControlMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoVoiceCommonDialControlMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoVoiceCommonDialControlMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoVoiceCommonDialControlMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoVoiceCommonDialControlMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCommonDcCallActiveTable" || name == "cvCommonDcCallHistoryTable")
        return true;
    return false;
}

CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactivetable()
{
    yang_name = "cvCommonDcCallActiveTable"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB";
}

CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::~Cvcommondccallactivetable()
{
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::has_data() const
{
    for (std::size_t index=0; index<cvcommondccallactiveentry.size(); index++)
    {
        if(cvcommondccallactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::has_operation() const
{
    for (std::size_t index=0; index<cvcommondccallactiveentry.size(); index++)
    {
        if(cvcommondccallactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallActiveTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCommonDcCallActiveEntry")
    {
        for(auto const & c : cvcommondccallactiveentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry>();
        c->parent = this;
        cvcommondccallactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcommondccallactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCommonDcCallActiveEntry")
        return true;
    return false;
}

CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::Cvcommondccallactiveentry()
    :
    callactivesetuptime{YType::str, "callActiveSetupTime"},
    callactiveindex{YType::str, "callActiveIndex"},
    cvcommondccallactivecalleridblock{YType::boolean, "cvCommonDcCallActiveCallerIDBlock"},
    cvcommondccallactivecallingname{YType::str, "cvCommonDcCallActiveCallingName"},
    cvcommondccallactivecodecbytes{YType::int32, "cvCommonDcCallActiveCodecBytes"},
    cvcommondccallactivecodertyperate{YType::enumeration, "cvCommonDcCallActiveCoderTypeRate"},
    cvcommondccallactiveconnectionid{YType::str, "cvCommonDcCallActiveConnectionId"},
    cvcommondccallactiveinbandsignaling{YType::enumeration, "cvCommonDcCallActiveInBandSignaling"},
    cvcommondccallactivevadenable{YType::boolean, "cvCommonDcCallActiveVADEnable"}
{
    yang_name = "cvCommonDcCallActiveEntry"; yang_parent_name = "cvCommonDcCallActiveTable";
}

CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::~Cvcommondccallactiveentry()
{
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::has_data() const
{
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| cvcommondccallactivecalleridblock.is_set
	|| cvcommondccallactivecallingname.is_set
	|| cvcommondccallactivecodecbytes.is_set
	|| cvcommondccallactivecodertyperate.is_set
	|| cvcommondccallactiveconnectionid.is_set
	|| cvcommondccallactiveinbandsignaling.is_set
	|| cvcommondccallactivevadenable.is_set;
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(cvcommondccallactivecalleridblock.yfilter)
	|| ydk::is_set(cvcommondccallactivecallingname.yfilter)
	|| ydk::is_set(cvcommondccallactivecodecbytes.yfilter)
	|| ydk::is_set(cvcommondccallactivecodertyperate.yfilter)
	|| ydk::is_set(cvcommondccallactiveconnectionid.yfilter)
	|| ydk::is_set(cvcommondccallactiveinbandsignaling.yfilter)
	|| ydk::is_set(cvcommondccallactivevadenable.yfilter);
}

std::string CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallActiveEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/cvCommonDcCallActiveTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (cvcommondccallactivecalleridblock.is_set || is_set(cvcommondccallactivecalleridblock.yfilter)) leaf_name_data.push_back(cvcommondccallactivecalleridblock.get_name_leafdata());
    if (cvcommondccallactivecallingname.is_set || is_set(cvcommondccallactivecallingname.yfilter)) leaf_name_data.push_back(cvcommondccallactivecallingname.get_name_leafdata());
    if (cvcommondccallactivecodecbytes.is_set || is_set(cvcommondccallactivecodecbytes.yfilter)) leaf_name_data.push_back(cvcommondccallactivecodecbytes.get_name_leafdata());
    if (cvcommondccallactivecodertyperate.is_set || is_set(cvcommondccallactivecodertyperate.yfilter)) leaf_name_data.push_back(cvcommondccallactivecodertyperate.get_name_leafdata());
    if (cvcommondccallactiveconnectionid.is_set || is_set(cvcommondccallactiveconnectionid.yfilter)) leaf_name_data.push_back(cvcommondccallactiveconnectionid.get_name_leafdata());
    if (cvcommondccallactiveinbandsignaling.is_set || is_set(cvcommondccallactiveinbandsignaling.yfilter)) leaf_name_data.push_back(cvcommondccallactiveinbandsignaling.get_name_leafdata());
    if (cvcommondccallactivevadenable.is_set || is_set(cvcommondccallactivevadenable.yfilter)) leaf_name_data.push_back(cvcommondccallactivevadenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
        callactivesetuptime.value_namespace = name_space;
        callactivesetuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
        callactiveindex.value_namespace = name_space;
        callactiveindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCallerIDBlock")
    {
        cvcommondccallactivecalleridblock = value;
        cvcommondccallactivecalleridblock.value_namespace = name_space;
        cvcommondccallactivecalleridblock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCallingName")
    {
        cvcommondccallactivecallingname = value;
        cvcommondccallactivecallingname.value_namespace = name_space;
        cvcommondccallactivecallingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCodecBytes")
    {
        cvcommondccallactivecodecbytes = value;
        cvcommondccallactivecodecbytes.value_namespace = name_space;
        cvcommondccallactivecodecbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCoderTypeRate")
    {
        cvcommondccallactivecodertyperate = value;
        cvcommondccallactivecodertyperate.value_namespace = name_space;
        cvcommondccallactivecodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveConnectionId")
    {
        cvcommondccallactiveconnectionid = value;
        cvcommondccallactiveconnectionid.value_namespace = name_space;
        cvcommondccallactiveconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveInBandSignaling")
    {
        cvcommondccallactiveinbandsignaling = value;
        cvcommondccallactiveinbandsignaling.value_namespace = name_space;
        cvcommondccallactiveinbandsignaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveVADEnable")
    {
        cvcommondccallactivevadenable = value;
        cvcommondccallactivevadenable.value_namespace = name_space;
        cvcommondccallactivevadenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCallerIDBlock")
    {
        cvcommondccallactivecalleridblock.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCallingName")
    {
        cvcommondccallactivecallingname.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCodecBytes")
    {
        cvcommondccallactivecodecbytes.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCoderTypeRate")
    {
        cvcommondccallactivecodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveConnectionId")
    {
        cvcommondccallactiveconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveInBandSignaling")
    {
        cvcommondccallactiveinbandsignaling.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveVADEnable")
    {
        cvcommondccallactivevadenable.yfilter = yfilter;
    }
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "cvCommonDcCallActiveCallerIDBlock" || name == "cvCommonDcCallActiveCallingName" || name == "cvCommonDcCallActiveCodecBytes" || name == "cvCommonDcCallActiveCoderTypeRate" || name == "cvCommonDcCallActiveConnectionId" || name == "cvCommonDcCallActiveInBandSignaling" || name == "cvCommonDcCallActiveVADEnable")
        return true;
    return false;
}

CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistorytable()
{
    yang_name = "cvCommonDcCallHistoryTable"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB";
}

CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::~Cvcommondccallhistorytable()
{
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::has_data() const
{
    for (std::size_t index=0; index<cvcommondccallhistoryentry.size(); index++)
    {
        if(cvcommondccallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cvcommondccallhistoryentry.size(); index++)
    {
        if(cvcommondccallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallHistoryTable";

    return path_buffer.str();

}

const EntityPath CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCommonDcCallHistoryEntry")
    {
        for(auto const & c : cvcommondccallhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry>();
        c->parent = this;
        cvcommondccallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcommondccallhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCommonDcCallHistoryEntry")
        return true;
    return false;
}

CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::Cvcommondccallhistoryentry()
    :
    ccallhistoryindex{YType::str, "cCallHistoryIndex"},
    cvcommondccallhistorycalleridblock{YType::boolean, "cvCommonDcCallHistoryCallerIDBlock"},
    cvcommondccallhistorycallingname{YType::str, "cvCommonDcCallHistoryCallingName"},
    cvcommondccallhistorycodecbytes{YType::int32, "cvCommonDcCallHistoryCodecBytes"},
    cvcommondccallhistorycodertyperate{YType::enumeration, "cvCommonDcCallHistoryCoderTypeRate"},
    cvcommondccallhistoryconnectionid{YType::str, "cvCommonDcCallHistoryConnectionId"},
    cvcommondccallhistoryinbandsignaling{YType::enumeration, "cvCommonDcCallHistoryInBandSignaling"},
    cvcommondccallhistoryvadenable{YType::boolean, "cvCommonDcCallHistoryVADEnable"}
{
    yang_name = "cvCommonDcCallHistoryEntry"; yang_parent_name = "cvCommonDcCallHistoryTable";
}

CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::~Cvcommondccallhistoryentry()
{
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| cvcommondccallhistorycalleridblock.is_set
	|| cvcommondccallhistorycallingname.is_set
	|| cvcommondccallhistorycodecbytes.is_set
	|| cvcommondccallhistorycodertyperate.is_set
	|| cvcommondccallhistoryconnectionid.is_set
	|| cvcommondccallhistoryinbandsignaling.is_set
	|| cvcommondccallhistoryvadenable.is_set;
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(cvcommondccallhistorycalleridblock.yfilter)
	|| ydk::is_set(cvcommondccallhistorycallingname.yfilter)
	|| ydk::is_set(cvcommondccallhistorycodecbytes.yfilter)
	|| ydk::is_set(cvcommondccallhistorycodertyperate.yfilter)
	|| ydk::is_set(cvcommondccallhistoryconnectionid.yfilter)
	|| ydk::is_set(cvcommondccallhistoryinbandsignaling.yfilter)
	|| ydk::is_set(cvcommondccallhistoryvadenable.yfilter);
}

std::string CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/cvCommonDcCallHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (cvcommondccallhistorycalleridblock.is_set || is_set(cvcommondccallhistorycalleridblock.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycalleridblock.get_name_leafdata());
    if (cvcommondccallhistorycallingname.is_set || is_set(cvcommondccallhistorycallingname.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycallingname.get_name_leafdata());
    if (cvcommondccallhistorycodecbytes.is_set || is_set(cvcommondccallhistorycodecbytes.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycodecbytes.get_name_leafdata());
    if (cvcommondccallhistorycodertyperate.is_set || is_set(cvcommondccallhistorycodertyperate.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycodertyperate.get_name_leafdata());
    if (cvcommondccallhistoryconnectionid.is_set || is_set(cvcommondccallhistoryconnectionid.yfilter)) leaf_name_data.push_back(cvcommondccallhistoryconnectionid.get_name_leafdata());
    if (cvcommondccallhistoryinbandsignaling.is_set || is_set(cvcommondccallhistoryinbandsignaling.yfilter)) leaf_name_data.push_back(cvcommondccallhistoryinbandsignaling.get_name_leafdata());
    if (cvcommondccallhistoryvadenable.is_set || is_set(cvcommondccallhistoryvadenable.yfilter)) leaf_name_data.push_back(cvcommondccallhistoryvadenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
        ccallhistoryindex.value_namespace = name_space;
        ccallhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCallerIDBlock")
    {
        cvcommondccallhistorycalleridblock = value;
        cvcommondccallhistorycalleridblock.value_namespace = name_space;
        cvcommondccallhistorycalleridblock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCallingName")
    {
        cvcommondccallhistorycallingname = value;
        cvcommondccallhistorycallingname.value_namespace = name_space;
        cvcommondccallhistorycallingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCodecBytes")
    {
        cvcommondccallhistorycodecbytes = value;
        cvcommondccallhistorycodecbytes.value_namespace = name_space;
        cvcommondccallhistorycodecbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCoderTypeRate")
    {
        cvcommondccallhistorycodertyperate = value;
        cvcommondccallhistorycodertyperate.value_namespace = name_space;
        cvcommondccallhistorycodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryConnectionId")
    {
        cvcommondccallhistoryconnectionid = value;
        cvcommondccallhistoryconnectionid.value_namespace = name_space;
        cvcommondccallhistoryconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryInBandSignaling")
    {
        cvcommondccallhistoryinbandsignaling = value;
        cvcommondccallhistoryinbandsignaling.value_namespace = name_space;
        cvcommondccallhistoryinbandsignaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryVADEnable")
    {
        cvcommondccallhistoryvadenable = value;
        cvcommondccallhistoryvadenable.value_namespace = name_space;
        cvcommondccallhistoryvadenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCallerIDBlock")
    {
        cvcommondccallhistorycalleridblock.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCallingName")
    {
        cvcommondccallhistorycallingname.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCodecBytes")
    {
        cvcommondccallhistorycodecbytes.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCoderTypeRate")
    {
        cvcommondccallhistorycodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryConnectionId")
    {
        cvcommondccallhistoryconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryInBandSignaling")
    {
        cvcommondccallhistoryinbandsignaling.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryVADEnable")
    {
        cvcommondccallhistoryvadenable.yfilter = yfilter;
    }
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cvCommonDcCallHistoryCallerIDBlock" || name == "cvCommonDcCallHistoryCallingName" || name == "cvCommonDcCallHistoryCodecBytes" || name == "cvCommonDcCallHistoryCoderTypeRate" || name == "cvCommonDcCallHistoryConnectionId" || name == "cvCommonDcCallHistoryInBandSignaling" || name == "cvCommonDcCallHistoryVADEnable")
        return true;
    return false;
}

const Enum::YLeaf Cvcspeechcoderrate::g729r8000 {1, "g729r8000"};
const Enum::YLeaf Cvcspeechcoderrate::g729Ar8000 {2, "g729Ar8000"};
const Enum::YLeaf Cvcspeechcoderrate::g726r16000 {3, "g726r16000"};
const Enum::YLeaf Cvcspeechcoderrate::g726r24000 {4, "g726r24000"};
const Enum::YLeaf Cvcspeechcoderrate::g726r32000 {5, "g726r32000"};
const Enum::YLeaf Cvcspeechcoderrate::g711ulawr64000 {6, "g711ulawr64000"};
const Enum::YLeaf Cvcspeechcoderrate::g711Alawr64000 {7, "g711Alawr64000"};
const Enum::YLeaf Cvcspeechcoderrate::g728r16000 {8, "g728r16000"};
const Enum::YLeaf Cvcspeechcoderrate::g723r6300 {9, "g723r6300"};
const Enum::YLeaf Cvcspeechcoderrate::g723r5300 {10, "g723r5300"};
const Enum::YLeaf Cvcspeechcoderrate::gsmr13200 {11, "gsmr13200"};
const Enum::YLeaf Cvcspeechcoderrate::g729Br8000 {12, "g729Br8000"};
const Enum::YLeaf Cvcspeechcoderrate::g729ABr8000 {13, "g729ABr8000"};
const Enum::YLeaf Cvcspeechcoderrate::g723Ar6300 {14, "g723Ar6300"};
const Enum::YLeaf Cvcspeechcoderrate::g723Ar5300 {15, "g723Ar5300"};
const Enum::YLeaf Cvcspeechcoderrate::g729IETFr8000 {16, "g729IETFr8000"};
const Enum::YLeaf Cvcspeechcoderrate::gsmeEr12200 {17, "gsmeEr12200"};
const Enum::YLeaf Cvcspeechcoderrate::clearChannel {18, "clearChannel"};
const Enum::YLeaf Cvcspeechcoderrate::g726r40000 {19, "g726r40000"};
const Enum::YLeaf Cvcspeechcoderrate::llcc {20, "llcc"};
const Enum::YLeaf Cvcspeechcoderrate::gsmAmrNb {21, "gsmAmrNb"};
const Enum::YLeaf Cvcspeechcoderrate::iLBC {22, "iLBC"};
const Enum::YLeaf Cvcspeechcoderrate::iLBCr15200 {23, "iLBCr15200"};
const Enum::YLeaf Cvcspeechcoderrate::iLBCr13330 {24, "iLBCr13330"};
const Enum::YLeaf Cvcspeechcoderrate::g722r4800 {25, "g722r4800"};
const Enum::YLeaf Cvcspeechcoderrate::g722r5600 {26, "g722r5600"};
const Enum::YLeaf Cvcspeechcoderrate::g722r6400 {27, "g722r6400"};
const Enum::YLeaf Cvcspeechcoderrate::iSAC {28, "iSAC"};
const Enum::YLeaf Cvcspeechcoderrate::aaclc {29, "aaclc"};
const Enum::YLeaf Cvcspeechcoderrate::aacld {30, "aacld"};

const Enum::YLeaf Cvch320Calltype::none {0, "none"};
const Enum::YLeaf Cvch320Calltype::primary {1, "primary"};
const Enum::YLeaf Cvch320Calltype::secondary {2, "secondary"};

const Enum::YLeaf Cvccodertyperate::other {1, "other"};
const Enum::YLeaf Cvccodertyperate::fax2400 {2, "fax2400"};
const Enum::YLeaf Cvccodertyperate::fax4800 {3, "fax4800"};
const Enum::YLeaf Cvccodertyperate::fax7200 {4, "fax7200"};
const Enum::YLeaf Cvccodertyperate::fax9600 {5, "fax9600"};
const Enum::YLeaf Cvccodertyperate::fax14400 {6, "fax14400"};
const Enum::YLeaf Cvccodertyperate::fax12000 {7, "fax12000"};
const Enum::YLeaf Cvccodertyperate::g729r8000 {10, "g729r8000"};
const Enum::YLeaf Cvccodertyperate::g729Ar8000 {11, "g729Ar8000"};
const Enum::YLeaf Cvccodertyperate::g726r16000 {12, "g726r16000"};
const Enum::YLeaf Cvccodertyperate::g726r24000 {13, "g726r24000"};
const Enum::YLeaf Cvccodertyperate::g726r32000 {14, "g726r32000"};
const Enum::YLeaf Cvccodertyperate::g711ulawr64000 {15, "g711ulawr64000"};
const Enum::YLeaf Cvccodertyperate::g711Alawr64000 {16, "g711Alawr64000"};
const Enum::YLeaf Cvccodertyperate::g728r16000 {17, "g728r16000"};
const Enum::YLeaf Cvccodertyperate::g723r6300 {18, "g723r6300"};
const Enum::YLeaf Cvccodertyperate::g723r5300 {19, "g723r5300"};
const Enum::YLeaf Cvccodertyperate::gsmr13200 {20, "gsmr13200"};
const Enum::YLeaf Cvccodertyperate::g729Br8000 {21, "g729Br8000"};
const Enum::YLeaf Cvccodertyperate::g729ABr8000 {22, "g729ABr8000"};
const Enum::YLeaf Cvccodertyperate::g723Ar6300 {23, "g723Ar6300"};
const Enum::YLeaf Cvccodertyperate::g723Ar5300 {24, "g723Ar5300"};
const Enum::YLeaf Cvccodertyperate::ietfg729r8000 {25, "ietfg729r8000"};
const Enum::YLeaf Cvccodertyperate::gsmeEr12200 {26, "gsmeEr12200"};
const Enum::YLeaf Cvccodertyperate::clearChannel {27, "clearChannel"};
const Enum::YLeaf Cvccodertyperate::g726r40000 {28, "g726r40000"};
const Enum::YLeaf Cvccodertyperate::llcc {29, "llcc"};
const Enum::YLeaf Cvccodertyperate::gsmAmrNb {30, "gsmAmrNb"};
const Enum::YLeaf Cvccodertyperate::g722 {31, "g722"};
const Enum::YLeaf Cvccodertyperate::iLBC {32, "iLBC"};
const Enum::YLeaf Cvccodertyperate::iLBCr15200 {33, "iLBCr15200"};
const Enum::YLeaf Cvccodertyperate::iLBCr13330 {34, "iLBCr13330"};
const Enum::YLeaf Cvccodertyperate::g722r4800 {35, "g722r4800"};
const Enum::YLeaf Cvccodertyperate::g722r5600 {36, "g722r5600"};
const Enum::YLeaf Cvccodertyperate::g722r6400 {37, "g722r6400"};
const Enum::YLeaf Cvccodertyperate::iSAC {38, "iSAC"};
const Enum::YLeaf Cvccodertyperate::aaclc {39, "aaclc"};
const Enum::YLeaf Cvccodertyperate::aacld {40, "aacld"};

const Enum::YLeaf Cvcvideocoderrate::none {0, "none"};
const Enum::YLeaf Cvcvideocoderrate::h261 {1, "h261"};
const Enum::YLeaf Cvcvideocoderrate::h263 {2, "h263"};
const Enum::YLeaf Cvcvideocoderrate::h263plus {3, "h263plus"};
const Enum::YLeaf Cvcvideocoderrate::h264 {4, "h264"};

const Enum::YLeaf Cvcfaxtransmitrate::none {1, "none"};
const Enum::YLeaf Cvcfaxtransmitrate::voiceRate {2, "voiceRate"};
const Enum::YLeaf Cvcfaxtransmitrate::fax2400 {3, "fax2400"};
const Enum::YLeaf Cvcfaxtransmitrate::fax4800 {4, "fax4800"};
const Enum::YLeaf Cvcfaxtransmitrate::fax7200 {5, "fax7200"};
const Enum::YLeaf Cvcfaxtransmitrate::fax9600 {6, "fax9600"};
const Enum::YLeaf Cvcfaxtransmitrate::fax14400 {7, "fax14400"};
const Enum::YLeaf Cvcfaxtransmitrate::fax12000 {8, "fax12000"};

const Enum::YLeaf Cvcinbandsignaling::cas {1, "cas"};
const Enum::YLeaf Cvcinbandsignaling::none {2, "none"};
const Enum::YLeaf Cvcinbandsignaling::cept {3, "cept"};
const Enum::YLeaf Cvcinbandsignaling::transparent {4, "transparent"};
const Enum::YLeaf Cvcinbandsignaling::gr303 {5, "gr303"};


}
}

