
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CBP_TARGET_MIB.hpp"

namespace ydk {
namespace CISCO_CBP_TARGET_MIB {

CiscoCbpTargetMib::CiscoCbpTargetMib()
    :
    ccbpttargetattachcfg_(std::make_shared<CiscoCbpTargetMib::Ccbpttargetattachcfg>())
	,ccbpttargettable_(std::make_shared<CiscoCbpTargetMib::Ccbpttargettable>())
{
    ccbpttargetattachcfg_->parent = this;

    ccbpttargettable_->parent = this;

    yang_name = "CISCO-CBP-TARGET-MIB"; yang_parent_name = "CISCO-CBP-TARGET-MIB";
}

CiscoCbpTargetMib::~CiscoCbpTargetMib()
{
}

bool CiscoCbpTargetMib::has_data() const
{
    return (ccbpttargetattachcfg_ !=  nullptr && ccbpttargetattachcfg_->has_data())
	|| (ccbpttargettable_ !=  nullptr && ccbpttargettable_->has_data());
}

bool CiscoCbpTargetMib::has_operation() const
{
    return is_set(operation)
	|| (ccbpttargetattachcfg_ !=  nullptr && ccbpttargetattachcfg_->has_operation())
	|| (ccbpttargettable_ !=  nullptr && ccbpttargettable_->has_operation());
}

std::string CiscoCbpTargetMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB";

    return path_buffer.str();

}

const EntityPath CiscoCbpTargetMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoCbpTargetMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccbptTargetAttachCfg")
    {
        if(ccbpttargetattachcfg_ == nullptr)
        {
            ccbpttargetattachcfg_ = std::make_shared<CiscoCbpTargetMib::Ccbpttargetattachcfg>();
        }
        return ccbpttargetattachcfg_;
    }

    if(child_yang_name == "ccbptTargetTable")
    {
        if(ccbpttargettable_ == nullptr)
        {
            ccbpttargettable_ = std::make_shared<CiscoCbpTargetMib::Ccbpttargettable>();
        }
        return ccbpttargettable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCbpTargetMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ccbpttargetattachcfg_ != nullptr)
    {
        children["ccbptTargetAttachCfg"] = ccbpttargetattachcfg_;
    }

    if(ccbpttargettable_ != nullptr)
    {
        children["ccbptTargetTable"] = ccbpttargettable_;
    }

    return children;
}

void CiscoCbpTargetMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoCbpTargetMib::clone_ptr() const
{
    return std::make_shared<CiscoCbpTargetMib>();
}

std::string CiscoCbpTargetMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoCbpTargetMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoCbpTargetMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoCbpTargetMib::Ccbpttargetattachcfg::Ccbpttargetattachcfg()
    :
    ccbptpolicyidnext{YType::uint32, "ccbptPolicyIdNext"},
    ccbpttargettablelastchange{YType::uint32, "ccbptTargetTableLastChange"}
{
    yang_name = "ccbptTargetAttachCfg"; yang_parent_name = "CISCO-CBP-TARGET-MIB";
}

CiscoCbpTargetMib::Ccbpttargetattachcfg::~Ccbpttargetattachcfg()
{
}

bool CiscoCbpTargetMib::Ccbpttargetattachcfg::has_data() const
{
    return ccbptpolicyidnext.is_set
	|| ccbpttargettablelastchange.is_set;
}

bool CiscoCbpTargetMib::Ccbpttargetattachcfg::has_operation() const
{
    return is_set(operation)
	|| is_set(ccbptpolicyidnext.operation)
	|| is_set(ccbpttargettablelastchange.operation);
}

std::string CiscoCbpTargetMib::Ccbpttargetattachcfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccbptTargetAttachCfg";

    return path_buffer.str();

}

const EntityPath CiscoCbpTargetMib::Ccbpttargetattachcfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccbptpolicyidnext.is_set || is_set(ccbptpolicyidnext.operation)) leaf_name_data.push_back(ccbptpolicyidnext.get_name_leafdata());
    if (ccbpttargettablelastchange.is_set || is_set(ccbpttargettablelastchange.operation)) leaf_name_data.push_back(ccbpttargettablelastchange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCbpTargetMib::Ccbpttargetattachcfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCbpTargetMib::Ccbpttargetattachcfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCbpTargetMib::Ccbpttargetattachcfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccbptPolicyIdNext")
    {
        ccbptpolicyidnext = value;
    }
    if(value_path == "ccbptTargetTableLastChange")
    {
        ccbpttargettablelastchange = value;
    }
}

CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargettable()
{
    yang_name = "ccbptTargetTable"; yang_parent_name = "CISCO-CBP-TARGET-MIB";
}

CiscoCbpTargetMib::Ccbpttargettable::~Ccbpttargettable()
{
}

bool CiscoCbpTargetMib::Ccbpttargettable::has_data() const
{
    for (std::size_t index=0; index<ccbpttargetentry_.size(); index++)
    {
        if(ccbpttargetentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCbpTargetMib::Ccbpttargettable::has_operation() const
{
    for (std::size_t index=0; index<ccbpttargetentry_.size(); index++)
    {
        if(ccbpttargetentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoCbpTargetMib::Ccbpttargettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccbptTargetTable";

    return path_buffer.str();

}

const EntityPath CiscoCbpTargetMib::Ccbpttargettable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCbpTargetMib::Ccbpttargettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccbptTargetEntry")
    {
        for(auto const & c : ccbpttargetentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry>();
        c->parent = this;
        ccbpttargetentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCbpTargetMib::Ccbpttargettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccbpttargetentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCbpTargetMib::Ccbpttargettable::set_value(const std::string & value_path, std::string value)
{
}

CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::Ccbpttargetentry()
    :
    ccbpttargettype{YType::enumeration, "ccbptTargetType"},
    ccbpttargetid{YType::str, "ccbptTargetId"},
    ccbpttargetdir{YType::enumeration, "ccbptTargetDir"},
    ccbptpolicysourcetype{YType::enumeration, "ccbptPolicySourceType"},
    ccbptpolicyid{YType::uint32, "ccbptPolicyId"},
    ccbptpolicyattachtime{YType::uint32, "ccbptPolicyAttachTime"},
    ccbptpolicyinstance{YType::str, "ccbptPolicyInstance"},
    ccbptpolicymap{YType::str, "ccbptPolicyMap"},
    ccbpttargetstatus{YType::enumeration, "ccbptTargetStatus"},
    ccbpttargetstoragetype{YType::enumeration, "ccbptTargetStorageType"}
{
    yang_name = "ccbptTargetEntry"; yang_parent_name = "ccbptTargetTable";
}

CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::~Ccbpttargetentry()
{
}

bool CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::has_data() const
{
    return ccbpttargettype.is_set
	|| ccbpttargetid.is_set
	|| ccbpttargetdir.is_set
	|| ccbptpolicysourcetype.is_set
	|| ccbptpolicyid.is_set
	|| ccbptpolicyattachtime.is_set
	|| ccbptpolicyinstance.is_set
	|| ccbptpolicymap.is_set
	|| ccbpttargetstatus.is_set
	|| ccbpttargetstoragetype.is_set;
}

bool CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ccbpttargettype.operation)
	|| is_set(ccbpttargetid.operation)
	|| is_set(ccbpttargetdir.operation)
	|| is_set(ccbptpolicysourcetype.operation)
	|| is_set(ccbptpolicyid.operation)
	|| is_set(ccbptpolicyattachtime.operation)
	|| is_set(ccbptpolicyinstance.operation)
	|| is_set(ccbptpolicymap.operation)
	|| is_set(ccbpttargetstatus.operation)
	|| is_set(ccbpttargetstoragetype.operation);
}

std::string CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccbptTargetEntry" <<"[ccbptTargetType='" <<ccbpttargettype <<"']" <<"[ccbptTargetId='" <<ccbpttargetid <<"']" <<"[ccbptTargetDir='" <<ccbpttargetdir <<"']" <<"[ccbptPolicySourceType='" <<ccbptpolicysourcetype <<"']" <<"[ccbptPolicyId='" <<ccbptpolicyid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB/ccbptTargetTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccbpttargettype.is_set || is_set(ccbpttargettype.operation)) leaf_name_data.push_back(ccbpttargettype.get_name_leafdata());
    if (ccbpttargetid.is_set || is_set(ccbpttargetid.operation)) leaf_name_data.push_back(ccbpttargetid.get_name_leafdata());
    if (ccbpttargetdir.is_set || is_set(ccbpttargetdir.operation)) leaf_name_data.push_back(ccbpttargetdir.get_name_leafdata());
    if (ccbptpolicysourcetype.is_set || is_set(ccbptpolicysourcetype.operation)) leaf_name_data.push_back(ccbptpolicysourcetype.get_name_leafdata());
    if (ccbptpolicyid.is_set || is_set(ccbptpolicyid.operation)) leaf_name_data.push_back(ccbptpolicyid.get_name_leafdata());
    if (ccbptpolicyattachtime.is_set || is_set(ccbptpolicyattachtime.operation)) leaf_name_data.push_back(ccbptpolicyattachtime.get_name_leafdata());
    if (ccbptpolicyinstance.is_set || is_set(ccbptpolicyinstance.operation)) leaf_name_data.push_back(ccbptpolicyinstance.get_name_leafdata());
    if (ccbptpolicymap.is_set || is_set(ccbptpolicymap.operation)) leaf_name_data.push_back(ccbptpolicymap.get_name_leafdata());
    if (ccbpttargetstatus.is_set || is_set(ccbpttargetstatus.operation)) leaf_name_data.push_back(ccbpttargetstatus.get_name_leafdata());
    if (ccbpttargetstoragetype.is_set || is_set(ccbpttargetstoragetype.operation)) leaf_name_data.push_back(ccbpttargetstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccbptTargetType")
    {
        ccbpttargettype = value;
    }
    if(value_path == "ccbptTargetId")
    {
        ccbpttargetid = value;
    }
    if(value_path == "ccbptTargetDir")
    {
        ccbpttargetdir = value;
    }
    if(value_path == "ccbptPolicySourceType")
    {
        ccbptpolicysourcetype = value;
    }
    if(value_path == "ccbptPolicyId")
    {
        ccbptpolicyid = value;
    }
    if(value_path == "ccbptPolicyAttachTime")
    {
        ccbptpolicyattachtime = value;
    }
    if(value_path == "ccbptPolicyInstance")
    {
        ccbptpolicyinstance = value;
    }
    if(value_path == "ccbptPolicyMap")
    {
        ccbptpolicymap = value;
    }
    if(value_path == "ccbptTargetStatus")
    {
        ccbpttargetstatus = value;
    }
    if(value_path == "ccbptTargetStorageType")
    {
        ccbpttargetstoragetype = value;
    }
}


}
}

