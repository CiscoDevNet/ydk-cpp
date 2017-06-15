
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VOICE_COMMON_DIAL_CONTROL_MIB.hpp"

namespace ydk {
namespace CISCO_VOICE_COMMON_DIAL_CONTROL_MIB {

CiscoVoiceCommonDialControlMib::CiscoVoiceCommonDialControlMib()
    :
    cvcommondccallactivetable_(std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable>())
	,cvcommondccallhistorytable_(std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable>())
{
    cvcommondccallactivetable_->parent = this;

    cvcommondccallhistorytable_->parent = this;

    yang_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB";
}

CiscoVoiceCommonDialControlMib::~CiscoVoiceCommonDialControlMib()
{
}

bool CiscoVoiceCommonDialControlMib::has_data() const
{
    return (cvcommondccallactivetable_ !=  nullptr && cvcommondccallactivetable_->has_data())
	|| (cvcommondccallhistorytable_ !=  nullptr && cvcommondccallhistorytable_->has_data());
}

bool CiscoVoiceCommonDialControlMib::has_operation() const
{
    return is_set(operation)
	|| (cvcommondccallactivetable_ !=  nullptr && cvcommondccallactivetable_->has_operation())
	|| (cvcommondccallhistorytable_ !=  nullptr && cvcommondccallhistorytable_->has_operation());
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
        if(cvcommondccallactivetable_ == nullptr)
        {
            cvcommondccallactivetable_ = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable>();
        }
        return cvcommondccallactivetable_;
    }

    if(child_yang_name == "cvCommonDcCallHistoryTable")
    {
        if(cvcommondccallhistorytable_ == nullptr)
        {
            cvcommondccallhistorytable_ = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable>();
        }
        return cvcommondccallhistorytable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cvcommondccallactivetable_ != nullptr)
    {
        children["cvCommonDcCallActiveTable"] = cvcommondccallactivetable_;
    }

    if(cvcommondccallhistorytable_ != nullptr)
    {
        children["cvCommonDcCallHistoryTable"] = cvcommondccallhistorytable_;
    }

    return children;
}

void CiscoVoiceCommonDialControlMib::set_value(const std::string & value_path, std::string value)
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

CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactivetable()
{
    yang_name = "cvCommonDcCallActiveTable"; yang_parent_name = "CISCO-VOICE-COMMON-DIAL-CONTROL-MIB";
}

CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::~Cvcommondccallactivetable()
{
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::has_data() const
{
    for (std::size_t index=0; index<cvcommondccallactiveentry_.size(); index++)
    {
        if(cvcommondccallactiveentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::has_operation() const
{
    for (std::size_t index=0; index<cvcommondccallactiveentry_.size(); index++)
    {
        if(cvcommondccallactiveentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cvcommondccallactiveentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry>();
        c->parent = this;
        cvcommondccallactiveentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcommondccallactiveentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(callactivesetuptime.operation)
	|| is_set(callactiveindex.operation)
	|| is_set(cvcommondccallactivecalleridblock.operation)
	|| is_set(cvcommondccallactivecallingname.operation)
	|| is_set(cvcommondccallactivecodecbytes.operation)
	|| is_set(cvcommondccallactivecodertyperate.operation)
	|| is_set(cvcommondccallactiveconnectionid.operation)
	|| is_set(cvcommondccallactiveinbandsignaling.operation)
	|| is_set(cvcommondccallactivevadenable.operation);
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

    if (callactivesetuptime.is_set || is_set(callactivesetuptime.operation)) leaf_name_data.push_back(callactivesetuptime.get_name_leafdata());
    if (callactiveindex.is_set || is_set(callactiveindex.operation)) leaf_name_data.push_back(callactiveindex.get_name_leafdata());
    if (cvcommondccallactivecalleridblock.is_set || is_set(cvcommondccallactivecalleridblock.operation)) leaf_name_data.push_back(cvcommondccallactivecalleridblock.get_name_leafdata());
    if (cvcommondccallactivecallingname.is_set || is_set(cvcommondccallactivecallingname.operation)) leaf_name_data.push_back(cvcommondccallactivecallingname.get_name_leafdata());
    if (cvcommondccallactivecodecbytes.is_set || is_set(cvcommondccallactivecodecbytes.operation)) leaf_name_data.push_back(cvcommondccallactivecodecbytes.get_name_leafdata());
    if (cvcommondccallactivecodertyperate.is_set || is_set(cvcommondccallactivecodertyperate.operation)) leaf_name_data.push_back(cvcommondccallactivecodertyperate.get_name_leafdata());
    if (cvcommondccallactiveconnectionid.is_set || is_set(cvcommondccallactiveconnectionid.operation)) leaf_name_data.push_back(cvcommondccallactiveconnectionid.get_name_leafdata());
    if (cvcommondccallactiveinbandsignaling.is_set || is_set(cvcommondccallactiveinbandsignaling.operation)) leaf_name_data.push_back(cvcommondccallactiveinbandsignaling.get_name_leafdata());
    if (cvcommondccallactivevadenable.is_set || is_set(cvcommondccallactivevadenable.operation)) leaf_name_data.push_back(cvcommondccallactivevadenable.get_name_leafdata());


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

void CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "callActiveSetupTime")
    {
        callactivesetuptime = value;
    }
    if(value_path == "callActiveIndex")
    {
        callactiveindex = value;
    }
    if(value_path == "cvCommonDcCallActiveCallerIDBlock")
    {
        cvcommondccallactivecalleridblock = value;
    }
    if(value_path == "cvCommonDcCallActiveCallingName")
    {
        cvcommondccallactivecallingname = value;
    }
    if(value_path == "cvCommonDcCallActiveCodecBytes")
    {
        cvcommondccallactivecodecbytes = value;
    }
    if(value_path == "cvCommonDcCallActiveCoderTypeRate")
    {
        cvcommondccallactivecodertyperate = value;
    }
    if(value_path == "cvCommonDcCallActiveConnectionId")
    {
        cvcommondccallactiveconnectionid = value;
    }
    if(value_path == "cvCommonDcCallActiveInBandSignaling")
    {
        cvcommondccallactiveinbandsignaling = value;
    }
    if(value_path == "cvCommonDcCallActiveVADEnable")
    {
        cvcommondccallactivevadenable = value;
    }
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
    for (std::size_t index=0; index<cvcommondccallhistoryentry_.size(); index++)
    {
        if(cvcommondccallhistoryentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cvcommondccallhistoryentry_.size(); index++)
    {
        if(cvcommondccallhistoryentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cvcommondccallhistoryentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry>();
        c->parent = this;
        cvcommondccallhistoryentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cvcommondccallhistoryentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ccallhistoryindex.operation)
	|| is_set(cvcommondccallhistorycalleridblock.operation)
	|| is_set(cvcommondccallhistorycallingname.operation)
	|| is_set(cvcommondccallhistorycodecbytes.operation)
	|| is_set(cvcommondccallhistorycodertyperate.operation)
	|| is_set(cvcommondccallhistoryconnectionid.operation)
	|| is_set(cvcommondccallhistoryinbandsignaling.operation)
	|| is_set(cvcommondccallhistoryvadenable.operation);
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

    if (ccallhistoryindex.is_set || is_set(ccallhistoryindex.operation)) leaf_name_data.push_back(ccallhistoryindex.get_name_leafdata());
    if (cvcommondccallhistorycalleridblock.is_set || is_set(cvcommondccallhistorycalleridblock.operation)) leaf_name_data.push_back(cvcommondccallhistorycalleridblock.get_name_leafdata());
    if (cvcommondccallhistorycallingname.is_set || is_set(cvcommondccallhistorycallingname.operation)) leaf_name_data.push_back(cvcommondccallhistorycallingname.get_name_leafdata());
    if (cvcommondccallhistorycodecbytes.is_set || is_set(cvcommondccallhistorycodecbytes.operation)) leaf_name_data.push_back(cvcommondccallhistorycodecbytes.get_name_leafdata());
    if (cvcommondccallhistorycodertyperate.is_set || is_set(cvcommondccallhistorycodertyperate.operation)) leaf_name_data.push_back(cvcommondccallhistorycodertyperate.get_name_leafdata());
    if (cvcommondccallhistoryconnectionid.is_set || is_set(cvcommondccallhistoryconnectionid.operation)) leaf_name_data.push_back(cvcommondccallhistoryconnectionid.get_name_leafdata());
    if (cvcommondccallhistoryinbandsignaling.is_set || is_set(cvcommondccallhistoryinbandsignaling.operation)) leaf_name_data.push_back(cvcommondccallhistoryinbandsignaling.get_name_leafdata());
    if (cvcommondccallhistoryvadenable.is_set || is_set(cvcommondccallhistoryvadenable.operation)) leaf_name_data.push_back(cvcommondccallhistoryvadenable.get_name_leafdata());


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

void CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cCallHistoryIndex")
    {
        ccallhistoryindex = value;
    }
    if(value_path == "cvCommonDcCallHistoryCallerIDBlock")
    {
        cvcommondccallhistorycalleridblock = value;
    }
    if(value_path == "cvCommonDcCallHistoryCallingName")
    {
        cvcommondccallhistorycallingname = value;
    }
    if(value_path == "cvCommonDcCallHistoryCodecBytes")
    {
        cvcommondccallhistorycodecbytes = value;
    }
    if(value_path == "cvCommonDcCallHistoryCoderTypeRate")
    {
        cvcommondccallhistorycodertyperate = value;
    }
    if(value_path == "cvCommonDcCallHistoryConnectionId")
    {
        cvcommondccallhistoryconnectionid = value;
    }
    if(value_path == "cvCommonDcCallHistoryInBandSignaling")
    {
        cvcommondccallhistoryinbandsignaling = value;
    }
    if(value_path == "cvCommonDcCallHistoryVADEnable")
    {
        cvcommondccallhistoryvadenable = value;
    }
}

const Enum::YLeaf CvcinbandsignalingEnum::cas {1, "cas"};
const Enum::YLeaf CvcinbandsignalingEnum::none {2, "none"};
const Enum::YLeaf CvcinbandsignalingEnum::cept {3, "cept"};
const Enum::YLeaf CvcinbandsignalingEnum::transparent {4, "transparent"};
const Enum::YLeaf CvcinbandsignalingEnum::gr303 {5, "gr303"};

const Enum::YLeaf CvccodertyperateEnum::other {1, "other"};
const Enum::YLeaf CvccodertyperateEnum::fax2400 {2, "fax2400"};
const Enum::YLeaf CvccodertyperateEnum::fax4800 {3, "fax4800"};
const Enum::YLeaf CvccodertyperateEnum::fax7200 {4, "fax7200"};
const Enum::YLeaf CvccodertyperateEnum::fax9600 {5, "fax9600"};
const Enum::YLeaf CvccodertyperateEnum::fax14400 {6, "fax14400"};
const Enum::YLeaf CvccodertyperateEnum::fax12000 {7, "fax12000"};
const Enum::YLeaf CvccodertyperateEnum::g729r8000 {10, "g729r8000"};
const Enum::YLeaf CvccodertyperateEnum::g729Ar8000 {11, "g729Ar8000"};
const Enum::YLeaf CvccodertyperateEnum::g726r16000 {12, "g726r16000"};
const Enum::YLeaf CvccodertyperateEnum::g726r24000 {13, "g726r24000"};
const Enum::YLeaf CvccodertyperateEnum::g726r32000 {14, "g726r32000"};
const Enum::YLeaf CvccodertyperateEnum::g711ulawr64000 {15, "g711ulawr64000"};
const Enum::YLeaf CvccodertyperateEnum::g711Alawr64000 {16, "g711Alawr64000"};
const Enum::YLeaf CvccodertyperateEnum::g728r16000 {17, "g728r16000"};
const Enum::YLeaf CvccodertyperateEnum::g723r6300 {18, "g723r6300"};
const Enum::YLeaf CvccodertyperateEnum::g723r5300 {19, "g723r5300"};
const Enum::YLeaf CvccodertyperateEnum::gsmr13200 {20, "gsmr13200"};
const Enum::YLeaf CvccodertyperateEnum::g729Br8000 {21, "g729Br8000"};
const Enum::YLeaf CvccodertyperateEnum::g729ABr8000 {22, "g729ABr8000"};
const Enum::YLeaf CvccodertyperateEnum::g723Ar6300 {23, "g723Ar6300"};
const Enum::YLeaf CvccodertyperateEnum::g723Ar5300 {24, "g723Ar5300"};
const Enum::YLeaf CvccodertyperateEnum::ietfg729r8000 {25, "ietfg729r8000"};
const Enum::YLeaf CvccodertyperateEnum::gsmeEr12200 {26, "gsmeEr12200"};
const Enum::YLeaf CvccodertyperateEnum::clearChannel {27, "clearChannel"};
const Enum::YLeaf CvccodertyperateEnum::g726r40000 {28, "g726r40000"};
const Enum::YLeaf CvccodertyperateEnum::llcc {29, "llcc"};
const Enum::YLeaf CvccodertyperateEnum::gsmAmrNb {30, "gsmAmrNb"};
const Enum::YLeaf CvccodertyperateEnum::g722 {31, "g722"};
const Enum::YLeaf CvccodertyperateEnum::iLBC {32, "iLBC"};
const Enum::YLeaf CvccodertyperateEnum::iLBCr15200 {33, "iLBCr15200"};
const Enum::YLeaf CvccodertyperateEnum::iLBCr13330 {34, "iLBCr13330"};
const Enum::YLeaf CvccodertyperateEnum::g722r4800 {35, "g722r4800"};
const Enum::YLeaf CvccodertyperateEnum::g722r5600 {36, "g722r5600"};
const Enum::YLeaf CvccodertyperateEnum::g722r6400 {37, "g722r6400"};
const Enum::YLeaf CvccodertyperateEnum::iSAC {38, "iSAC"};
const Enum::YLeaf CvccodertyperateEnum::aaclc {39, "aaclc"};
const Enum::YLeaf CvccodertyperateEnum::aacld {40, "aacld"};

const Enum::YLeaf CvcvideocoderrateEnum::none {0, "none"};
const Enum::YLeaf CvcvideocoderrateEnum::h261 {1, "h261"};
const Enum::YLeaf CvcvideocoderrateEnum::h263 {2, "h263"};
const Enum::YLeaf CvcvideocoderrateEnum::h263plus {3, "h263plus"};
const Enum::YLeaf CvcvideocoderrateEnum::h264 {4, "h264"};

const Enum::YLeaf Cvch320CalltypeEnum::none {0, "none"};
const Enum::YLeaf Cvch320CalltypeEnum::primary {1, "primary"};
const Enum::YLeaf Cvch320CalltypeEnum::secondary {2, "secondary"};

const Enum::YLeaf CvcspeechcoderrateEnum::g729r8000 {1, "g729r8000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g729Ar8000 {2, "g729Ar8000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g726r16000 {3, "g726r16000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g726r24000 {4, "g726r24000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g726r32000 {5, "g726r32000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g711ulawr64000 {6, "g711ulawr64000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g711Alawr64000 {7, "g711Alawr64000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g728r16000 {8, "g728r16000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g723r6300 {9, "g723r6300"};
const Enum::YLeaf CvcspeechcoderrateEnum::g723r5300 {10, "g723r5300"};
const Enum::YLeaf CvcspeechcoderrateEnum::gsmr13200 {11, "gsmr13200"};
const Enum::YLeaf CvcspeechcoderrateEnum::g729Br8000 {12, "g729Br8000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g729ABr8000 {13, "g729ABr8000"};
const Enum::YLeaf CvcspeechcoderrateEnum::g723Ar6300 {14, "g723Ar6300"};
const Enum::YLeaf CvcspeechcoderrateEnum::g723Ar5300 {15, "g723Ar5300"};
const Enum::YLeaf CvcspeechcoderrateEnum::g729IETFr8000 {16, "g729IETFr8000"};
const Enum::YLeaf CvcspeechcoderrateEnum::gsmeEr12200 {17, "gsmeEr12200"};
const Enum::YLeaf CvcspeechcoderrateEnum::clearChannel {18, "clearChannel"};
const Enum::YLeaf CvcspeechcoderrateEnum::g726r40000 {19, "g726r40000"};
const Enum::YLeaf CvcspeechcoderrateEnum::llcc {20, "llcc"};
const Enum::YLeaf CvcspeechcoderrateEnum::gsmAmrNb {21, "gsmAmrNb"};
const Enum::YLeaf CvcspeechcoderrateEnum::iLBC {22, "iLBC"};
const Enum::YLeaf CvcspeechcoderrateEnum::iLBCr15200 {23, "iLBCr15200"};
const Enum::YLeaf CvcspeechcoderrateEnum::iLBCr13330 {24, "iLBCr13330"};
const Enum::YLeaf CvcspeechcoderrateEnum::g722r4800 {25, "g722r4800"};
const Enum::YLeaf CvcspeechcoderrateEnum::g722r5600 {26, "g722r5600"};
const Enum::YLeaf CvcspeechcoderrateEnum::g722r6400 {27, "g722r6400"};
const Enum::YLeaf CvcspeechcoderrateEnum::iSAC {28, "iSAC"};
const Enum::YLeaf CvcspeechcoderrateEnum::aaclc {29, "aaclc"};
const Enum::YLeaf CvcspeechcoderrateEnum::aacld {30, "aacld"};

const Enum::YLeaf CvcfaxtransmitrateEnum::none {1, "none"};
const Enum::YLeaf CvcfaxtransmitrateEnum::voiceRate {2, "voiceRate"};
const Enum::YLeaf CvcfaxtransmitrateEnum::fax2400 {3, "fax2400"};
const Enum::YLeaf CvcfaxtransmitrateEnum::fax4800 {4, "fax4800"};
const Enum::YLeaf CvcfaxtransmitrateEnum::fax7200 {5, "fax7200"};
const Enum::YLeaf CvcfaxtransmitrateEnum::fax9600 {6, "fax9600"};
const Enum::YLeaf CvcfaxtransmitrateEnum::fax14400 {7, "fax14400"};
const Enum::YLeaf CvcfaxtransmitrateEnum::fax12000 {8, "fax12000"};


}
}

