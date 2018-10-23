
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CBP_TARGET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_MIB {

CISCOCBPTARGETMIB::CISCOCBPTARGETMIB()
    :
    ccbpttargetattachcfg(std::make_shared<CISCOCBPTARGETMIB::CcbptTargetAttachCfg>())
    , ccbpttargettable(std::make_shared<CISCOCBPTARGETMIB::CcbptTargetTable>())
{
    ccbpttargetattachcfg->parent = this;
    ccbpttargettable->parent = this;

    yang_name = "CISCO-CBP-TARGET-MIB"; yang_parent_name = "CISCO-CBP-TARGET-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCBPTARGETMIB::~CISCOCBPTARGETMIB()
{
}

bool CISCOCBPTARGETMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ccbpttargetattachcfg !=  nullptr && ccbpttargetattachcfg->has_data())
	|| (ccbpttargettable !=  nullptr && ccbpttargettable->has_data());
}

bool CISCOCBPTARGETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ccbpttargetattachcfg !=  nullptr && ccbpttargetattachcfg->has_operation())
	|| (ccbpttargettable !=  nullptr && ccbpttargettable->has_operation());
}

std::string CISCOCBPTARGETMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCBPTARGETMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCBPTARGETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccbptTargetAttachCfg")
    {
        if(ccbpttargetattachcfg == nullptr)
        {
            ccbpttargetattachcfg = std::make_shared<CISCOCBPTARGETMIB::CcbptTargetAttachCfg>();
        }
        return ccbpttargetattachcfg;
    }

    if(child_yang_name == "ccbptTargetTable")
    {
        if(ccbpttargettable == nullptr)
        {
            ccbpttargettable = std::make_shared<CISCOCBPTARGETMIB::CcbptTargetTable>();
        }
        return ccbpttargettable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCBPTARGETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ccbpttargetattachcfg != nullptr)
    {
        _children["ccbptTargetAttachCfg"] = ccbpttargetattachcfg;
    }

    if(ccbpttargettable != nullptr)
    {
        _children["ccbptTargetTable"] = ccbpttargettable;
    }

    return _children;
}

void CISCOCBPTARGETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCBPTARGETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOCBPTARGETMIB::clone_ptr() const
{
    return std::make_shared<CISCOCBPTARGETMIB>();
}

std::string CISCOCBPTARGETMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCBPTARGETMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCBPTARGETMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCBPTARGETMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCBPTARGETMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptTargetAttachCfg" || name == "ccbptTargetTable")
        return true;
    return false;
}

CISCOCBPTARGETMIB::CcbptTargetAttachCfg::CcbptTargetAttachCfg()
    :
    ccbptpolicyidnext{YType::uint32, "ccbptPolicyIdNext"},
    ccbpttargettablelastchange{YType::uint32, "ccbptTargetTableLastChange"}
{

    yang_name = "ccbptTargetAttachCfg"; yang_parent_name = "CISCO-CBP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCBPTARGETMIB::CcbptTargetAttachCfg::~CcbptTargetAttachCfg()
{
}

bool CISCOCBPTARGETMIB::CcbptTargetAttachCfg::has_data() const
{
    if (is_presence_container) return true;
    return ccbptpolicyidnext.is_set
	|| ccbpttargettablelastchange.is_set;
}

bool CISCOCBPTARGETMIB::CcbptTargetAttachCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccbptpolicyidnext.yfilter)
	|| ydk::is_set(ccbpttargettablelastchange.yfilter);
}

std::string CISCOCBPTARGETMIB::CcbptTargetAttachCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCBPTARGETMIB::CcbptTargetAttachCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccbptTargetAttachCfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCBPTARGETMIB::CcbptTargetAttachCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccbptpolicyidnext.is_set || is_set(ccbptpolicyidnext.yfilter)) leaf_name_data.push_back(ccbptpolicyidnext.get_name_leafdata());
    if (ccbpttargettablelastchange.is_set || is_set(ccbpttargettablelastchange.yfilter)) leaf_name_data.push_back(ccbpttargettablelastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCBPTARGETMIB::CcbptTargetAttachCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCBPTARGETMIB::CcbptTargetAttachCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCBPTARGETMIB::CcbptTargetAttachCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOCBPTARGETMIB::CcbptTargetAttachCfg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOCBPTARGETMIB::CcbptTargetAttachCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptPolicyIdNext" || name == "ccbptTargetTableLastChange")
        return true;
    return false;
}

CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetTable()
    :
    ccbpttargetentry(this, {"ccbpttargettype", "ccbpttargetid", "ccbpttargetdir", "ccbptpolicysourcetype", "ccbptpolicyid"})
{

    yang_name = "ccbptTargetTable"; yang_parent_name = "CISCO-CBP-TARGET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCBPTARGETMIB::CcbptTargetTable::~CcbptTargetTable()
{
}

bool CISCOCBPTARGETMIB::CcbptTargetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccbpttargetentry.len(); index++)
    {
        if(ccbpttargetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCBPTARGETMIB::CcbptTargetTable::has_operation() const
{
    for (std::size_t index=0; index<ccbpttargetentry.len(); index++)
    {
        if(ccbpttargetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCBPTARGETMIB::CcbptTargetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCBPTARGETMIB::CcbptTargetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccbptTargetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCBPTARGETMIB::CcbptTargetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCBPTARGETMIB::CcbptTargetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccbptTargetEntry")
    {
        auto ent_ = std::make_shared<CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry>();
        ent_->parent = this;
        ccbpttargetentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCBPTARGETMIB::CcbptTargetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccbpttargetentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCBPTARGETMIB::CcbptTargetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCBPTARGETMIB::CcbptTargetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCBPTARGETMIB::CcbptTargetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptTargetEntry")
        return true;
    return false;
}

CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::CcbptTargetEntry()
    :
    ccbpttargettype{YType::enumeration, "ccbptTargetType"},
    ccbpttargetid{YType::str, "ccbptTargetId"},
    ccbpttargetdir{YType::enumeration, "ccbptTargetDir"},
    ccbptpolicysourcetype{YType::enumeration, "ccbptPolicySourceType"},
    ccbptpolicyid{YType::uint32, "ccbptPolicyId"},
    ccbpttargetstatus{YType::enumeration, "ccbptTargetStatus"},
    ccbpttargetstoragetype{YType::enumeration, "ccbptTargetStorageType"},
    ccbptpolicymap{YType::str, "ccbptPolicyMap"},
    ccbptpolicyinstance{YType::str, "ccbptPolicyInstance"},
    ccbptpolicyattachtime{YType::uint32, "ccbptPolicyAttachTime"}
{

    yang_name = "ccbptTargetEntry"; yang_parent_name = "ccbptTargetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::~CcbptTargetEntry()
{
}

bool CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccbpttargettype.is_set
	|| ccbpttargetid.is_set
	|| ccbpttargetdir.is_set
	|| ccbptpolicysourcetype.is_set
	|| ccbptpolicyid.is_set
	|| ccbpttargetstatus.is_set
	|| ccbpttargetstoragetype.is_set
	|| ccbptpolicymap.is_set
	|| ccbptpolicyinstance.is_set
	|| ccbptpolicyattachtime.is_set;
}

bool CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccbpttargettype.yfilter)
	|| ydk::is_set(ccbpttargetid.yfilter)
	|| ydk::is_set(ccbpttargetdir.yfilter)
	|| ydk::is_set(ccbptpolicysourcetype.yfilter)
	|| ydk::is_set(ccbptpolicyid.yfilter)
	|| ydk::is_set(ccbpttargetstatus.yfilter)
	|| ydk::is_set(ccbpttargetstoragetype.yfilter)
	|| ydk::is_set(ccbptpolicymap.yfilter)
	|| ydk::is_set(ccbptpolicyinstance.yfilter)
	|| ydk::is_set(ccbptpolicyattachtime.yfilter);
}

std::string CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CBP-TARGET-MIB:CISCO-CBP-TARGET-MIB/ccbptTargetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccbptTargetEntry";
    ADD_KEY_TOKEN(ccbpttargettype, "ccbptTargetType");
    ADD_KEY_TOKEN(ccbpttargetid, "ccbptTargetId");
    ADD_KEY_TOKEN(ccbpttargetdir, "ccbptTargetDir");
    ADD_KEY_TOKEN(ccbptpolicysourcetype, "ccbptPolicySourceType");
    ADD_KEY_TOKEN(ccbptpolicyid, "ccbptPolicyId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccbpttargettype.is_set || is_set(ccbpttargettype.yfilter)) leaf_name_data.push_back(ccbpttargettype.get_name_leafdata());
    if (ccbpttargetid.is_set || is_set(ccbpttargetid.yfilter)) leaf_name_data.push_back(ccbpttargetid.get_name_leafdata());
    if (ccbpttargetdir.is_set || is_set(ccbpttargetdir.yfilter)) leaf_name_data.push_back(ccbpttargetdir.get_name_leafdata());
    if (ccbptpolicysourcetype.is_set || is_set(ccbptpolicysourcetype.yfilter)) leaf_name_data.push_back(ccbptpolicysourcetype.get_name_leafdata());
    if (ccbptpolicyid.is_set || is_set(ccbptpolicyid.yfilter)) leaf_name_data.push_back(ccbptpolicyid.get_name_leafdata());
    if (ccbpttargetstatus.is_set || is_set(ccbpttargetstatus.yfilter)) leaf_name_data.push_back(ccbpttargetstatus.get_name_leafdata());
    if (ccbpttargetstoragetype.is_set || is_set(ccbpttargetstoragetype.yfilter)) leaf_name_data.push_back(ccbpttargetstoragetype.get_name_leafdata());
    if (ccbptpolicymap.is_set || is_set(ccbptpolicymap.yfilter)) leaf_name_data.push_back(ccbptpolicymap.get_name_leafdata());
    if (ccbptpolicyinstance.is_set || is_set(ccbptpolicyinstance.yfilter)) leaf_name_data.push_back(ccbptpolicyinstance.get_name_leafdata());
    if (ccbptpolicyattachtime.is_set || is_set(ccbptpolicyattachtime.yfilter)) leaf_name_data.push_back(ccbptpolicyattachtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ccbptPolicyMap")
    {
        ccbptpolicymap = value;
        ccbptpolicymap.value_namespace = name_space;
        ccbptpolicymap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptPolicyInstance")
    {
        ccbptpolicyinstance = value;
        ccbptpolicyinstance.value_namespace = name_space;
        ccbptpolicyinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccbptPolicyAttachTime")
    {
        ccbptpolicyattachtime = value;
        ccbptpolicyattachtime.value_namespace = name_space;
        ccbptpolicyattachtime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ccbptTargetStatus")
    {
        ccbpttargetstatus.yfilter = yfilter;
    }
    if(value_path == "ccbptTargetStorageType")
    {
        ccbpttargetstoragetype.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicyMap")
    {
        ccbptpolicymap.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicyInstance")
    {
        ccbptpolicyinstance.yfilter = yfilter;
    }
    if(value_path == "ccbptPolicyAttachTime")
    {
        ccbptpolicyattachtime.yfilter = yfilter;
    }
}

bool CISCOCBPTARGETMIB::CcbptTargetTable::CcbptTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccbptTargetType" || name == "ccbptTargetId" || name == "ccbptTargetDir" || name == "ccbptPolicySourceType" || name == "ccbptPolicyId" || name == "ccbptTargetStatus" || name == "ccbptTargetStorageType" || name == "ccbptPolicyMap" || name == "ccbptPolicyInstance" || name == "ccbptPolicyAttachTime")
        return true;
    return false;
}


}
}

