
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CBP_TARGET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_MIB {

CiscoCbpTargetMib::CiscoCbpTargetMib()
    :
    ccbpttargetattachcfg(std::make_shared<CiscoCbpTargetMib::Ccbpttargetattachcfg>())
	,ccbpttargettable(std::make_shared<CiscoCbpTargetMib::Ccbpttargettable>())
{
    ccbpttargetattachcfg->parent = this;

    ccbpttargettable->parent = this;

    yang_name = "CISCO-CBP-TARGET-MIB"; yang_parent_name = "CISCO-CBP-TARGET-MIB";
}

CiscoCbpTargetMib::~CiscoCbpTargetMib()
{
}

bool CiscoCbpTargetMib::has_data() const
{
    return (ccbpttargetattachcfg !=  nullptr && ccbpttargetattachcfg->has_data())
	|| (ccbpttargettable !=  nullptr && ccbpttargettable->has_data());
}

bool CiscoCbpTargetMib::has_operation() const
{
    return is_set(yfilter)
	|| (ccbpttargetattachcfg !=  nullptr && ccbpttargetattachcfg->has_operation())
	|| (ccbpttargettable !=  nullptr && ccbpttargettable->has_operation());
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
        if(ccbpttargetattachcfg == nullptr)
        {
            ccbpttargetattachcfg = std::make_shared<CiscoCbpTargetMib::Ccbpttargetattachcfg>();
        }
        return ccbpttargetattachcfg;
    }

    if(child_yang_name == "ccbptTargetTable")
    {
        if(ccbpttargettable == nullptr)
        {
            ccbpttargettable = std::make_shared<CiscoCbpTargetMib::Ccbpttargettable>();
        }
        return ccbpttargettable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCbpTargetMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ccbpttargetattachcfg != nullptr)
    {
        children["ccbptTargetAttachCfg"] = ccbpttargetattachcfg;
    }

    if(ccbpttargettable != nullptr)
    {
        children["ccbptTargetTable"] = ccbpttargettable;
    }

    return children;
}

void CiscoCbpTargetMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCbpTargetMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoCbpTargetMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoCbpTargetMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptTargetAttachCfg" || name == "ccbptTargetTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ccbptpolicyidnext.yfilter)
	|| ydk::is_set(ccbpttargettablelastchange.yfilter);
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

    if (ccbptpolicyidnext.is_set || is_set(ccbptpolicyidnext.yfilter)) leaf_name_data.push_back(ccbptpolicyidnext.get_name_leafdata());
    if (ccbpttargettablelastchange.is_set || is_set(ccbpttargettablelastchange.yfilter)) leaf_name_data.push_back(ccbpttargettablelastchange.get_name_leafdata());


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

void CiscoCbpTargetMib::Ccbpttargetattachcfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccbptPolicyIdNext")
    {
        ccbptpolicyidnext = value;
        ccbptpolicyidnext.value_namespace = name_space;
        ccbptpolicyidnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptTargetTableLastChange")
    {
        ccbpttargettablelastchange = value;
        ccbpttargettablelastchange.value_namespace = name_space;
        ccbpttargettablelastchange.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCbpTargetMib::Ccbpttargetattachcfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccbptPolicyIdNext")
    {
        ccbptpolicyidnext.yfilter = yfilter;
    }
    if(value_path == "ccbptTargetTableLastChange")
    {
        ccbpttargettablelastchange.yfilter = yfilter;
    }
}

bool CiscoCbpTargetMib::Ccbpttargetattachcfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptPolicyIdNext" || name == "ccbptTargetTableLastChange")
        return true;
    return false;
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
    for (std::size_t index=0; index<ccbpttargetentry.size(); index++)
    {
        if(ccbpttargetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCbpTargetMib::Ccbpttargettable::has_operation() const
{
    for (std::size_t index=0; index<ccbpttargetentry.size(); index++)
    {
        if(ccbpttargetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ccbpttargetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry>();
        c->parent = this;
        ccbpttargetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCbpTargetMib::Ccbpttargettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccbpttargetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCbpTargetMib::Ccbpttargettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCbpTargetMib::Ccbpttargettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCbpTargetMib::Ccbpttargettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptTargetEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ccbpttargettype.yfilter)
	|| ydk::is_set(ccbpttargetid.yfilter)
	|| ydk::is_set(ccbpttargetdir.yfilter)
	|| ydk::is_set(ccbptpolicysourcetype.yfilter)
	|| ydk::is_set(ccbptpolicyid.yfilter)
	|| ydk::is_set(ccbptpolicyattachtime.yfilter)
	|| ydk::is_set(ccbptpolicyinstance.yfilter)
	|| ydk::is_set(ccbptpolicymap.yfilter)
	|| ydk::is_set(ccbpttargetstatus.yfilter)
	|| ydk::is_set(ccbpttargetstoragetype.yfilter);
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

    if (ccbpttargettype.is_set || is_set(ccbpttargettype.yfilter)) leaf_name_data.push_back(ccbpttargettype.get_name_leafdata());
    if (ccbpttargetid.is_set || is_set(ccbpttargetid.yfilter)) leaf_name_data.push_back(ccbpttargetid.get_name_leafdata());
    if (ccbpttargetdir.is_set || is_set(ccbpttargetdir.yfilter)) leaf_name_data.push_back(ccbpttargetdir.get_name_leafdata());
    if (ccbptpolicysourcetype.is_set || is_set(ccbptpolicysourcetype.yfilter)) leaf_name_data.push_back(ccbptpolicysourcetype.get_name_leafdata());
    if (ccbptpolicyid.is_set || is_set(ccbptpolicyid.yfilter)) leaf_name_data.push_back(ccbptpolicyid.get_name_leafdata());
    if (ccbptpolicyattachtime.is_set || is_set(ccbptpolicyattachtime.yfilter)) leaf_name_data.push_back(ccbptpolicyattachtime.get_name_leafdata());
    if (ccbptpolicyinstance.is_set || is_set(ccbptpolicyinstance.yfilter)) leaf_name_data.push_back(ccbptpolicyinstance.get_name_leafdata());
    if (ccbptpolicymap.is_set || is_set(ccbptpolicymap.yfilter)) leaf_name_data.push_back(ccbptpolicymap.get_name_leafdata());
    if (ccbpttargetstatus.is_set || is_set(ccbpttargetstatus.yfilter)) leaf_name_data.push_back(ccbpttargetstatus.get_name_leafdata());
    if (ccbpttargetstoragetype.is_set || is_set(ccbpttargetstoragetype.yfilter)) leaf_name_data.push_back(ccbpttargetstoragetype.get_name_leafdata());


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

void CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccbptTargetType")
    {
        ccbpttargettype = value;
        ccbpttargettype.value_namespace = name_space;
        ccbpttargettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptTargetId")
    {
        ccbpttargetid = value;
        ccbpttargetid.value_namespace = name_space;
        ccbpttargetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptTargetDir")
    {
        ccbpttargetdir = value;
        ccbpttargetdir.value_namespace = name_space;
        ccbpttargetdir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptPolicySourceType")
    {
        ccbptpolicysourcetype = value;
        ccbptpolicysourcetype.value_namespace = name_space;
        ccbptpolicysourcetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptPolicyId")
    {
        ccbptpolicyid = value;
        ccbptpolicyid.value_namespace = name_space;
        ccbptpolicyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptPolicyAttachTime")
    {
        ccbptpolicyattachtime = value;
        ccbptpolicyattachtime.value_namespace = name_space;
        ccbptpolicyattachtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptPolicyInstance")
    {
        ccbptpolicyinstance = value;
        ccbptpolicyinstance.value_namespace = name_space;
        ccbptpolicyinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptPolicyMap")
    {
        ccbptpolicymap = value;
        ccbptpolicymap.value_namespace = name_space;
        ccbptpolicymap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptTargetStatus")
    {
        ccbpttargetstatus = value;
        ccbpttargetstatus.value_namespace = name_space;
        ccbpttargetstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptTargetStorageType")
    {
        ccbpttargetstoragetype = value;
        ccbpttargetstoragetype.value_namespace = name_space;
        ccbpttargetstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccbptTargetType")
    {
        ccbpttargettype.yfilter = yfilter;
    }
    if(value_path == "ccbptTargetId")
    {
        ccbpttargetid.yfilter = yfilter;
    }
    if(value_path == "ccbptTargetDir")
    {
        ccbpttargetdir.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicySourceType")
    {
        ccbptpolicysourcetype.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicyId")
    {
        ccbptpolicyid.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicyAttachTime")
    {
        ccbptpolicyattachtime.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicyInstance")
    {
        ccbptpolicyinstance.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicyMap")
    {
        ccbptpolicymap.yfilter = yfilter;
    }
    if(value_path == "ccbptTargetStatus")
    {
        ccbpttargetstatus.yfilter = yfilter;
    }
    if(value_path == "ccbptTargetStorageType")
    {
        ccbpttargetstoragetype.yfilter = yfilter;
    }
}

bool CiscoCbpTargetMib::Ccbpttargettable::Ccbpttargetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptTargetType" || name == "ccbptTargetId" || name == "ccbptTargetDir" || name == "ccbptPolicySourceType" || name == "ccbptPolicyId" || name == "ccbptPolicyAttachTime" || name == "ccbptPolicyInstance" || name == "ccbptPolicyMap" || name == "ccbptTargetStatus" || name == "ccbptTargetStorageType")
        return true;
    return false;
}


}
}

