
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_COMMON_DIAL_CONTROL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VOICE_COMMON_DIAL_CONTROL_MIB {

CISCOVOICECOMMONDIALCONTROLMIB::CISCOVOICECOMMONDIALCONTROLMIB()
    :
    cvcommondccallactivetable(std::make_shared<CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable>())
	,cvcommondccallhistorytable(std::make_shared<CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable>())
{
    cvcommondccallactivetable->parent = this;
    cvcommondccallhistorytable->parent = this;

    yang_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOVOICECOMMONDIALCONTROLMIB::~CISCOVOICECOMMONDIALCONTROLMIB()
{
}

bool CISCOVOICECOMMONDIALCONTROLMIB::has_data() const
{
    return (cvcommondccallactivetable !=  nullptr && cvcommondccallactivetable->has_data())
	|| (cvcommondccallhistorytable !=  nullptr && cvcommondccallhistorytable->has_data());
}

bool CISCOVOICECOMMONDIALCONTROLMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cvcommondccallactivetable !=  nullptr && cvcommondccallactivetable->has_operation())
	|| (cvcommondccallhistorytable !=  nullptr && cvcommondccallhistorytable->has_operation());
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICECOMMONDIALCONTROLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICECOMMONDIALCONTROLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cvCommonDcCallActiveTable")
    {
        if(cvcommondccallactivetable == nullptr)
        {
            cvcommondccallactivetable = std::make_shared<CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable>();
        }
        return cvcommondccallactivetable;
    }

    if(child_yang_name == "cvCommonDcCallHistoryTable")
    {
        if(cvcommondccallhistorytable == nullptr)
        {
            cvcommondccallhistorytable = std::make_shared<CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable>();
        }
        return cvcommondccallhistorytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICECOMMONDIALCONTROLMIB::get_children() const
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

void CISCOVOICECOMMONDIALCONTROLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICECOMMONDIALCONTROLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOVOICECOMMONDIALCONTROLMIB::clone_ptr() const
{
    return std::make_shared<CISCOVOICECOMMONDIALCONTROLMIB>();
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVOICECOMMONDIALCONTROLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVOICECOMMONDIALCONTROLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVOICECOMMONDIALCONTROLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCommonDcCallActiveTable" || name == "cvCommonDcCallHistoryTable")
        return true;
    return false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactivetable()
{

    yang_name = "cvCommonDcCallActiveTable"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::~Cvcommondccallactivetable()
{
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::has_data() const
{
    for (std::size_t index=0; index<cvcommondccallactiveentry.size(); index++)
    {
        if(cvcommondccallactiveentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::has_operation() const
{
    for (std::size_t index=0; index<cvcommondccallactiveentry.size(); index++)
    {
        if(cvcommondccallactiveentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallActiveTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry>();
        c->parent = this;
        cvcommondccallactiveentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcommondccallactiveentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCommonDcCallActiveEntry")
        return true;
    return false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::Cvcommondccallactiveentry()
    :
    callactivesetuptime{YType::str, "callActiveSetupTime"},
    callactiveindex{YType::str, "callActiveIndex"},
    cvcommondccallactiveconnectionid{YType::str, "cvCommonDcCallActiveConnectionId"},
    cvcommondccallactivevadenable{YType::boolean, "cvCommonDcCallActiveVADEnable"},
    cvcommondccallactivecodertyperate{YType::enumeration, "cvCommonDcCallActiveCoderTypeRate"},
    cvcommondccallactivecodecbytes{YType::int32, "cvCommonDcCallActiveCodecBytes"},
    cvcommondccallactiveinbandsignaling{YType::enumeration, "cvCommonDcCallActiveInBandSignaling"},
    cvcommondccallactivecallingname{YType::str, "cvCommonDcCallActiveCallingName"},
    cvcommondccallactivecalleridblock{YType::boolean, "cvCommonDcCallActiveCallerIDBlock"}
{

    yang_name = "cvCommonDcCallActiveEntry"; yang_parent_name = "cvCommonDcCallActiveTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::~Cvcommondccallactiveentry()
{
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::has_data() const
{
    return callactivesetuptime.is_set
	|| callactiveindex.is_set
	|| cvcommondccallactiveconnectionid.is_set
	|| cvcommondccallactivevadenable.is_set
	|| cvcommondccallactivecodertyperate.is_set
	|| cvcommondccallactivecodecbytes.is_set
	|| cvcommondccallactiveinbandsignaling.is_set
	|| cvcommondccallactivecallingname.is_set
	|| cvcommondccallactivecalleridblock.is_set;
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(callactivesetuptime.yfilter)
	|| ydk::is_set(callactiveindex.yfilter)
	|| ydk::is_set(cvcommondccallactiveconnectionid.yfilter)
	|| ydk::is_set(cvcommondccallactivevadenable.yfilter)
	|| ydk::is_set(cvcommondccallactivecodertyperate.yfilter)
	|| ydk::is_set(cvcommondccallactivecodecbytes.yfilter)
	|| ydk::is_set(cvcommondccallactiveinbandsignaling.yfilter)
	|| ydk::is_set(cvcommondccallactivecallingname.yfilter)
	|| ydk::is_set(cvcommondccallactivecalleridblock.yfilter);
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/cvCommonDcCallActiveTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallActiveEntry" <<"[callActiveSetupTime='" <<callactivesetuptime <<"']" <<"[callActiveIndex='" <<callactiveindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.yfilter)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.yfilter)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (cvcommondccallactiveconnectionid.is_set || is_set(cvcommondccallactiveconnectionid.yfilter)) leaf_name_data.push_back(cvcommondccallactiveconnectionid.get_name_leafdata());
    if (cvcommondccallactivevadenable.is_set || is_set(cvcommondccallactivevadenable.yfilter)) leaf_name_data.push_back(cvcommondccallactivevadenable.get_name_leafdata());
    if (cvcommondccallactivecodertyperate.is_set || is_set(cvcommondccallactivecodertyperate.yfilter)) leaf_name_data.push_back(cvcommondccallactivecodertyperate.get_name_leafdata());
    if (cvcommondccallactivecodecbytes.is_set || is_set(cvcommondccallactivecodecbytes.yfilter)) leaf_name_data.push_back(cvcommondccallactivecodecbytes.get_name_leafdata());
    if (cvcommondccallactiveinbandsignaling.is_set || is_set(cvcommondccallactiveinbandsignaling.yfilter)) leaf_name_data.push_back(cvcommondccallactiveinbandsignaling.get_name_leafdata());
    if (cvcommondccallactivecallingname.is_set || is_set(cvcommondccallactivecallingname.yfilter)) leaf_name_data.push_back(cvcommondccallactivecallingname.get_name_leafdata());
    if (cvcommondccallactivecalleridblock.is_set || is_set(cvcommondccallactivecalleridblock.yfilter)) leaf_name_data.push_back(cvcommondccallactivecalleridblock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cvCommonDcCallActiveConnectionId")
    {
        cvcommondccallactiveconnectionid = value;
        cvcommondccallactiveconnectionid.value_namespace = name_space;
        cvcommondccallactiveconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveVADEnable")
    {
        cvcommondccallactivevadenable = value;
        cvcommondccallactivevadenable.value_namespace = name_space;
        cvcommondccallactivevadenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCoderTypeRate")
    {
        cvcommondccallactivecodertyperate = value;
        cvcommondccallactivecodertyperate.value_namespace = name_space;
        cvcommondccallactivecodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCodecBytes")
    {
        cvcommondccallactivecodecbytes = value;
        cvcommondccallactivecodecbytes.value_namespace = name_space;
        cvcommondccallactivecodecbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveInBandSignaling")
    {
        cvcommondccallactiveinbandsignaling = value;
        cvcommondccallactiveinbandsignaling.value_namespace = name_space;
        cvcommondccallactiveinbandsignaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCallingName")
    {
        cvcommondccallactivecallingname = value;
        cvcommondccallactivecallingname.value_namespace = name_space;
        cvcommondccallactivecallingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallActiveCallerIDBlock")
    {
        cvcommondccallactivecalleridblock = value;
        cvcommondccallactivecalleridblock.value_namespace = name_space;
        cvcommondccallactivecalleridblock.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime.yfilter = yfilter;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveConnectionId")
    {
        cvcommondccallactiveconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveVADEnable")
    {
        cvcommondccallactivevadenable.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCoderTypeRate")
    {
        cvcommondccallactivecodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCodecBytes")
    {
        cvcommondccallactivecodecbytes.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveInBandSignaling")
    {
        cvcommondccallactiveinbandsignaling.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCallingName")
    {
        cvcommondccallactivecallingname.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallActiveCallerIDBlock")
    {
        cvcommondccallactivecalleridblock.yfilter = yfilter;
    }
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallactivetable::Cvcommondccallactiveentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "callActiveSetupTime" || name == "callActiveIndex" || name == "cvCommonDcCallActiveConnectionId" || name == "cvCommonDcCallActiveVADEnable" || name == "cvCommonDcCallActiveCoderTypeRate" || name == "cvCommonDcCallActiveCodecBytes" || name == "cvCommonDcCallActiveInBandSignaling" || name == "cvCommonDcCallActiveCallingName" || name == "cvCommonDcCallActiveCallerIDBlock")
        return true;
    return false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistorytable()
{

    yang_name = "cvCommonDcCallHistoryTable"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::~Cvcommondccallhistorytable()
{
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::has_data() const
{
    for (std::size_t index=0; index<cvcommondccallhistoryentry.size(); index++)
    {
        if(cvcommondccallhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cvcommondccallhistoryentry.size(); index++)
    {
        if(cvcommondccallhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry>();
        c->parent = this;
        cvcommondccallhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcommondccallhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cvCommonDcCallHistoryEntry")
        return true;
    return false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::Cvcommondccallhistoryentry()
    :
    ccallhistoryindex{YType::str, "cCallHistoryIndex"},
    cvcommondccallhistoryconnectionid{YType::str, "cvCommonDcCallHistoryConnectionId"},
    cvcommondccallhistoryvadenable{YType::boolean, "cvCommonDcCallHistoryVADEnable"},
    cvcommondccallhistorycodertyperate{YType::enumeration, "cvCommonDcCallHistoryCoderTypeRate"},
    cvcommondccallhistorycodecbytes{YType::int32, "cvCommonDcCallHistoryCodecBytes"},
    cvcommondccallhistoryinbandsignaling{YType::enumeration, "cvCommonDcCallHistoryInBandSignaling"},
    cvcommondccallhistorycallingname{YType::str, "cvCommonDcCallHistoryCallingName"},
    cvcommondccallhistorycalleridblock{YType::boolean, "cvCommonDcCallHistoryCallerIDBlock"}
{

    yang_name = "cvCommonDcCallHistoryEntry"; yang_parent_name = "cvCommonDcCallHistoryTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::~Cvcommondccallhistoryentry()
{
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::has_data() const
{
    return ccallhistoryindex.is_set
	|| cvcommondccallhistoryconnectionid.is_set
	|| cvcommondccallhistoryvadenable.is_set
	|| cvcommondccallhistorycodertyperate.is_set
	|| cvcommondccallhistorycodecbytes.is_set
	|| cvcommondccallhistoryinbandsignaling.is_set
	|| cvcommondccallhistorycallingname.is_set
	|| cvcommondccallhistorycalleridblock.is_set;
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccallhistoryindex.yfilter)
	|| ydk::is_set(cvcommondccallhistoryconnectionid.yfilter)
	|| ydk::is_set(cvcommondccallhistoryvadenable.yfilter)
	|| ydk::is_set(cvcommondccallhistorycodertyperate.yfilter)
	|| ydk::is_set(cvcommondccallhistorycodecbytes.yfilter)
	|| ydk::is_set(cvcommondccallhistoryinbandsignaling.yfilter)
	|| ydk::is_set(cvcommondccallhistorycallingname.yfilter)
	|| ydk::is_set(cvcommondccallhistorycalleridblock.yfilter);
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB:CISCO-VOICE-COMMON-DIAL-CONTROL-MIB/cvCommonDcCallHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cvCommonDcCallHistoryEntry" <<"[cCallHistoryIndex='" <<ccallhistoryindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.yfilter)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (cvcommondccallhistoryconnectionid.is_set || is_set(cvcommondccallhistoryconnectionid.yfilter)) leaf_name_data.push_back(cvcommondccallhistoryconnectionid.get_name_leafdata());
    if (cvcommondccallhistoryvadenable.is_set || is_set(cvcommondccallhistoryvadenable.yfilter)) leaf_name_data.push_back(cvcommondccallhistoryvadenable.get_name_leafdata());
    if (cvcommondccallhistorycodertyperate.is_set || is_set(cvcommondccallhistorycodertyperate.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycodertyperate.get_name_leafdata());
    if (cvcommondccallhistorycodecbytes.is_set || is_set(cvcommondccallhistorycodecbytes.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycodecbytes.get_name_leafdata());
    if (cvcommondccallhistoryinbandsignaling.is_set || is_set(cvcommondccallhistoryinbandsignaling.yfilter)) leaf_name_data.push_back(cvcommondccallhistoryinbandsignaling.get_name_leafdata());
    if (cvcommondccallhistorycallingname.is_set || is_set(cvcommondccallhistorycallingname.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycallingname.get_name_leafdata());
    if (cvcommondccallhistorycalleridblock.is_set || is_set(cvcommondccallhistorycalleridblock.yfilter)) leaf_name_data.push_back(cvcommondccallhistorycalleridblock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
        ccallhistoryindex.value_namespace = name_space;
        ccallhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryConnectionId")
    {
        cvcommondccallhistoryconnectionid = value;
        cvcommondccallhistoryconnectionid.value_namespace = name_space;
        cvcommondccallhistoryconnectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryVADEnable")
    {
        cvcommondccallhistoryvadenable = value;
        cvcommondccallhistoryvadenable.value_namespace = name_space;
        cvcommondccallhistoryvadenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCoderTypeRate")
    {
        cvcommondccallhistorycodertyperate = value;
        cvcommondccallhistorycodertyperate.value_namespace = name_space;
        cvcommondccallhistorycodertyperate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCodecBytes")
    {
        cvcommondccallhistorycodecbytes = value;
        cvcommondccallhistorycodecbytes.value_namespace = name_space;
        cvcommondccallhistorycodecbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryInBandSignaling")
    {
        cvcommondccallhistoryinbandsignaling = value;
        cvcommondccallhistoryinbandsignaling.value_namespace = name_space;
        cvcommondccallhistoryinbandsignaling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCallingName")
    {
        cvcommondccallhistorycallingname = value;
        cvcommondccallhistorycallingname.value_namespace = name_space;
        cvcommondccallhistorycallingname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cvCommonDcCallHistoryCallerIDBlock")
    {
        cvcommondccallhistorycalleridblock = value;
        cvcommondccallhistorycalleridblock.value_namespace = name_space;
        cvcommondccallhistorycalleridblock.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryConnectionId")
    {
        cvcommondccallhistoryconnectionid.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryVADEnable")
    {
        cvcommondccallhistoryvadenable.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCoderTypeRate")
    {
        cvcommondccallhistorycodertyperate.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCodecBytes")
    {
        cvcommondccallhistorycodecbytes.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryInBandSignaling")
    {
        cvcommondccallhistoryinbandsignaling.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCallingName")
    {
        cvcommondccallhistorycallingname.yfilter = yfilter;
    }
    if(value_path == "cvCommonDcCallHistoryCallerIDBlock")
    {
        cvcommondccallhistorycalleridblock.yfilter = yfilter;
    }
}

bool CISCOVOICECOMMONDIALCONTROLMIB::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cCallHistoryIndex" || name == "cvCommonDcCallHistoryConnectionId" || name == "cvCommonDcCallHistoryVADEnable" || name == "cvCommonDcCallHistoryCoderTypeRate" || name == "cvCommonDcCallHistoryCodecBytes" || name == "cvCommonDcCallHistoryInBandSignaling" || name == "cvCommonDcCallHistoryCallingName" || name == "cvCommonDcCallHistoryCallerIDBlock")
        return true;
    return false;
}

const Enum::YLeaf CvcSpeechCoderRate::g729r8000 {1, "g729r8000"};
const Enum::YLeaf CvcSpeechCoderRate::g729Ar8000 {2, "g729Ar8000"};
const Enum::YLeaf CvcSpeechCoderRate::g726r16000 {3, "g726r16000"};
const Enum::YLeaf CvcSpeechCoderRate::g726r24000 {4, "g726r24000"};
const Enum::YLeaf CvcSpeechCoderRate::g726r32000 {5, "g726r32000"};
const Enum::YLeaf CvcSpeechCoderRate::g711ulawr64000 {6, "g711ulawr64000"};
const Enum::YLeaf CvcSpeechCoderRate::g711Alawr64000 {7, "g711Alawr64000"};
const Enum::YLeaf CvcSpeechCoderRate::g728r16000 {8, "g728r16000"};
const Enum::YLeaf CvcSpeechCoderRate::g723r6300 {9, "g723r6300"};
const Enum::YLeaf CvcSpeechCoderRate::g723r5300 {10, "g723r5300"};
const Enum::YLeaf CvcSpeechCoderRate::gsmr13200 {11, "gsmr13200"};
const Enum::YLeaf CvcSpeechCoderRate::g729Br8000 {12, "g729Br8000"};
const Enum::YLeaf CvcSpeechCoderRate::g729ABr8000 {13, "g729ABr8000"};
const Enum::YLeaf CvcSpeechCoderRate::g723Ar6300 {14, "g723Ar6300"};
const Enum::YLeaf CvcSpeechCoderRate::g723Ar5300 {15, "g723Ar5300"};
const Enum::YLeaf CvcSpeechCoderRate::g729IETFr8000 {16, "g729IETFr8000"};
const Enum::YLeaf CvcSpeechCoderRate::gsmeEr12200 {17, "gsmeEr12200"};
const Enum::YLeaf CvcSpeechCoderRate::clearChannel {18, "clearChannel"};
const Enum::YLeaf CvcSpeechCoderRate::g726r40000 {19, "g726r40000"};
const Enum::YLeaf CvcSpeechCoderRate::llcc {20, "llcc"};
const Enum::YLeaf CvcSpeechCoderRate::gsmAmrNb {21, "gsmAmrNb"};
const Enum::YLeaf CvcSpeechCoderRate::iLBC {22, "iLBC"};
const Enum::YLeaf CvcSpeechCoderRate::iLBCr15200 {23, "iLBCr15200"};
const Enum::YLeaf CvcSpeechCoderRate::iLBCr13330 {24, "iLBCr13330"};
const Enum::YLeaf CvcSpeechCoderRate::g722r4800 {25, "g722r4800"};
const Enum::YLeaf CvcSpeechCoderRate::g722r5600 {26, "g722r5600"};
const Enum::YLeaf CvcSpeechCoderRate::g722r6400 {27, "g722r6400"};
const Enum::YLeaf CvcSpeechCoderRate::iSAC {28, "iSAC"};
const Enum::YLeaf CvcSpeechCoderRate::aaclc {29, "aaclc"};
const Enum::YLeaf CvcSpeechCoderRate::aacld {30, "aacld"};

const Enum::YLeaf CvcFaxTransmitRate::none {1, "none"};
const Enum::YLeaf CvcFaxTransmitRate::voiceRate {2, "voiceRate"};
const Enum::YLeaf CvcFaxTransmitRate::fax2400 {3, "fax2400"};
const Enum::YLeaf CvcFaxTransmitRate::fax4800 {4, "fax4800"};
const Enum::YLeaf CvcFaxTransmitRate::fax7200 {5, "fax7200"};
const Enum::YLeaf CvcFaxTransmitRate::fax9600 {6, "fax9600"};
const Enum::YLeaf CvcFaxTransmitRate::fax14400 {7, "fax14400"};
const Enum::YLeaf CvcFaxTransmitRate::fax12000 {8, "fax12000"};

const Enum::YLeaf CvcCoderTypeRate::other {1, "other"};
const Enum::YLeaf CvcCoderTypeRate::fax2400 {2, "fax2400"};
const Enum::YLeaf CvcCoderTypeRate::fax4800 {3, "fax4800"};
const Enum::YLeaf CvcCoderTypeRate::fax7200 {4, "fax7200"};
const Enum::YLeaf CvcCoderTypeRate::fax9600 {5, "fax9600"};
const Enum::YLeaf CvcCoderTypeRate::fax14400 {6, "fax14400"};
const Enum::YLeaf CvcCoderTypeRate::fax12000 {7, "fax12000"};
const Enum::YLeaf CvcCoderTypeRate::g729r8000 {10, "g729r8000"};
const Enum::YLeaf CvcCoderTypeRate::g729Ar8000 {11, "g729Ar8000"};
const Enum::YLeaf CvcCoderTypeRate::g726r16000 {12, "g726r16000"};
const Enum::YLeaf CvcCoderTypeRate::g726r24000 {13, "g726r24000"};
const Enum::YLeaf CvcCoderTypeRate::g726r32000 {14, "g726r32000"};
const Enum::YLeaf CvcCoderTypeRate::g711ulawr64000 {15, "g711ulawr64000"};
const Enum::YLeaf CvcCoderTypeRate::g711Alawr64000 {16, "g711Alawr64000"};
const Enum::YLeaf CvcCoderTypeRate::g728r16000 {17, "g728r16000"};
const Enum::YLeaf CvcCoderTypeRate::g723r6300 {18, "g723r6300"};
const Enum::YLeaf CvcCoderTypeRate::g723r5300 {19, "g723r5300"};
const Enum::YLeaf CvcCoderTypeRate::gsmr13200 {20, "gsmr13200"};
const Enum::YLeaf CvcCoderTypeRate::g729Br8000 {21, "g729Br8000"};
const Enum::YLeaf CvcCoderTypeRate::g729ABr8000 {22, "g729ABr8000"};
const Enum::YLeaf CvcCoderTypeRate::g723Ar6300 {23, "g723Ar6300"};
const Enum::YLeaf CvcCoderTypeRate::g723Ar5300 {24, "g723Ar5300"};
const Enum::YLeaf CvcCoderTypeRate::ietfg729r8000 {25, "ietfg729r8000"};
const Enum::YLeaf CvcCoderTypeRate::gsmeEr12200 {26, "gsmeEr12200"};
const Enum::YLeaf CvcCoderTypeRate::clearChannel {27, "clearChannel"};
const Enum::YLeaf CvcCoderTypeRate::g726r40000 {28, "g726r40000"};
const Enum::YLeaf CvcCoderTypeRate::llcc {29, "llcc"};
const Enum::YLeaf CvcCoderTypeRate::gsmAmrNb {30, "gsmAmrNb"};
const Enum::YLeaf CvcCoderTypeRate::g722 {31, "g722"};
const Enum::YLeaf CvcCoderTypeRate::iLBC {32, "iLBC"};
const Enum::YLeaf CvcCoderTypeRate::iLBCr15200 {33, "iLBCr15200"};
const Enum::YLeaf CvcCoderTypeRate::iLBCr13330 {34, "iLBCr13330"};
const Enum::YLeaf CvcCoderTypeRate::g722r4800 {35, "g722r4800"};
const Enum::YLeaf CvcCoderTypeRate::g722r5600 {36, "g722r5600"};
const Enum::YLeaf CvcCoderTypeRate::g722r6400 {37, "g722r6400"};
const Enum::YLeaf CvcCoderTypeRate::iSAC {38, "iSAC"};
const Enum::YLeaf CvcCoderTypeRate::aaclc {39, "aaclc"};
const Enum::YLeaf CvcCoderTypeRate::aacld {40, "aacld"};

const Enum::YLeaf CvcInBandSignaling::cas {1, "cas"};
const Enum::YLeaf CvcInBandSignaling::none {2, "none"};
const Enum::YLeaf CvcInBandSignaling::cept {3, "cept"};
const Enum::YLeaf CvcInBandSignaling::transparent {4, "transparent"};
const Enum::YLeaf CvcInBandSignaling::gr303 {5, "gr303"};

const Enum::YLeaf CvcH320CallType::none {0, "none"};
const Enum::YLeaf CvcH320CallType::primary {1, "primary"};
const Enum::YLeaf CvcH320CallType::secondary {2, "secondary"};

const Enum::YLeaf CvcVideoCoderRate::none {0, "none"};
const Enum::YLeaf CvcVideoCoderRate::h261 {1, "h261"};
const Enum::YLeaf CvcVideoCoderRate::h263 {2, "h263"};
const Enum::YLeaf CvcVideoCoderRate::h263plus {3, "h263plus"};
const Enum::YLeaf CvcVideoCoderRate::h264 {4, "h264"};


}
}

