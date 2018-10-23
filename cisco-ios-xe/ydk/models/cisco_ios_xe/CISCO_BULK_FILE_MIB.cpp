
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BULK_FILE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_BULK_FILE_MIB {

CISCOBULKFILEMIB::CISCOBULKFILEMIB()
    :
    cbfdefine(std::make_shared<CISCOBULKFILEMIB::CbfDefine>())
    , cbfstatus(std::make_shared<CISCOBULKFILEMIB::CbfStatus>())
    , cbfdefinefiletable(std::make_shared<CISCOBULKFILEMIB::CbfDefineFileTable>())
    , cbfdefineobjecttable(std::make_shared<CISCOBULKFILEMIB::CbfDefineObjectTable>())
    , cbfstatusfiletable(std::make_shared<CISCOBULKFILEMIB::CbfStatusFileTable>())
{
    cbfdefine->parent = this;
    cbfstatus->parent = this;
    cbfdefinefiletable->parent = this;
    cbfdefineobjecttable->parent = this;
    cbfstatusfiletable->parent = this;

    yang_name = "CISCO-BULK-FILE-MIB"; yang_parent_name = "CISCO-BULK-FILE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::~CISCOBULKFILEMIB()
{
}

bool CISCOBULKFILEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cbfdefine !=  nullptr && cbfdefine->has_data())
	|| (cbfstatus !=  nullptr && cbfstatus->has_data())
	|| (cbfdefinefiletable !=  nullptr && cbfdefinefiletable->has_data())
	|| (cbfdefineobjecttable !=  nullptr && cbfdefineobjecttable->has_data())
	|| (cbfstatusfiletable !=  nullptr && cbfstatusfiletable->has_data());
}

bool CISCOBULKFILEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cbfdefine !=  nullptr && cbfdefine->has_operation())
	|| (cbfstatus !=  nullptr && cbfstatus->has_operation())
	|| (cbfdefinefiletable !=  nullptr && cbfdefinefiletable->has_operation())
	|| (cbfdefineobjecttable !=  nullptr && cbfdefineobjecttable->has_operation())
	|| (cbfstatusfiletable !=  nullptr && cbfstatusfiletable->has_operation());
}

std::string CISCOBULKFILEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfDefine")
    {
        if(cbfdefine == nullptr)
        {
            cbfdefine = std::make_shared<CISCOBULKFILEMIB::CbfDefine>();
        }
        return cbfdefine;
    }

    if(child_yang_name == "cbfStatus")
    {
        if(cbfstatus == nullptr)
        {
            cbfstatus = std::make_shared<CISCOBULKFILEMIB::CbfStatus>();
        }
        return cbfstatus;
    }

    if(child_yang_name == "cbfDefineFileTable")
    {
        if(cbfdefinefiletable == nullptr)
        {
            cbfdefinefiletable = std::make_shared<CISCOBULKFILEMIB::CbfDefineFileTable>();
        }
        return cbfdefinefiletable;
    }

    if(child_yang_name == "cbfDefineObjectTable")
    {
        if(cbfdefineobjecttable == nullptr)
        {
            cbfdefineobjecttable = std::make_shared<CISCOBULKFILEMIB::CbfDefineObjectTable>();
        }
        return cbfdefineobjecttable;
    }

    if(child_yang_name == "cbfStatusFileTable")
    {
        if(cbfstatusfiletable == nullptr)
        {
            cbfstatusfiletable = std::make_shared<CISCOBULKFILEMIB::CbfStatusFileTable>();
        }
        return cbfstatusfiletable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cbfdefine != nullptr)
    {
        _children["cbfDefine"] = cbfdefine;
    }

    if(cbfstatus != nullptr)
    {
        _children["cbfStatus"] = cbfstatus;
    }

    if(cbfdefinefiletable != nullptr)
    {
        _children["cbfDefineFileTable"] = cbfdefinefiletable;
    }

    if(cbfdefineobjecttable != nullptr)
    {
        _children["cbfDefineObjectTable"] = cbfdefineobjecttable;
    }

    if(cbfstatusfiletable != nullptr)
    {
        _children["cbfStatusFileTable"] = cbfstatusfiletable;
    }

    return _children;
}

void CISCOBULKFILEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBULKFILEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::clone_ptr() const
{
    return std::make_shared<CISCOBULKFILEMIB>();
}

std::string CISCOBULKFILEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOBULKFILEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOBULKFILEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOBULKFILEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOBULKFILEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefine" || name == "cbfStatus" || name == "cbfDefineFileTable" || name == "cbfDefineObjectTable" || name == "cbfStatusFileTable")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfDefine::CbfDefine()
    :
    cbfdefinemaxfiles{YType::uint32, "cbfDefineMaxFiles"},
    cbfdefinefiles{YType::uint32, "cbfDefineFiles"},
    cbfdefinehighfiles{YType::uint32, "cbfDefineHighFiles"},
    cbfdefinefilesrefused{YType::uint32, "cbfDefineFilesRefused"},
    cbfdefinemaxobjects{YType::uint32, "cbfDefineMaxObjects"},
    cbfdefineobjects{YType::uint32, "cbfDefineObjects"},
    cbfdefinehighobjects{YType::uint32, "cbfDefineHighObjects"},
    cbfdefineobjectsrefused{YType::uint32, "cbfDefineObjectsRefused"}
{

    yang_name = "cbfDefine"; yang_parent_name = "CISCO-BULK-FILE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfDefine::~CbfDefine()
{
}

bool CISCOBULKFILEMIB::CbfDefine::has_data() const
{
    if (is_presence_container) return true;
    return cbfdefinemaxfiles.is_set
	|| cbfdefinefiles.is_set
	|| cbfdefinehighfiles.is_set
	|| cbfdefinefilesrefused.is_set
	|| cbfdefinemaxobjects.is_set
	|| cbfdefineobjects.is_set
	|| cbfdefinehighobjects.is_set
	|| cbfdefineobjectsrefused.is_set;
}

bool CISCOBULKFILEMIB::CbfDefine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinemaxfiles.yfilter)
	|| ydk::is_set(cbfdefinefiles.yfilter)
	|| ydk::is_set(cbfdefinehighfiles.yfilter)
	|| ydk::is_set(cbfdefinefilesrefused.yfilter)
	|| ydk::is_set(cbfdefinemaxobjects.yfilter)
	|| ydk::is_set(cbfdefineobjects.yfilter)
	|| ydk::is_set(cbfdefinehighobjects.yfilter)
	|| ydk::is_set(cbfdefineobjectsrefused.yfilter);
}

std::string CISCOBULKFILEMIB::CbfDefine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfDefine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfDefine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinemaxfiles.is_set || is_set(cbfdefinemaxfiles.yfilter)) leaf_name_data.push_back(cbfdefinemaxfiles.get_name_leafdata());
    if (cbfdefinefiles.is_set || is_set(cbfdefinefiles.yfilter)) leaf_name_data.push_back(cbfdefinefiles.get_name_leafdata());
    if (cbfdefinehighfiles.is_set || is_set(cbfdefinehighfiles.yfilter)) leaf_name_data.push_back(cbfdefinehighfiles.get_name_leafdata());
    if (cbfdefinefilesrefused.is_set || is_set(cbfdefinefilesrefused.yfilter)) leaf_name_data.push_back(cbfdefinefilesrefused.get_name_leafdata());
    if (cbfdefinemaxobjects.is_set || is_set(cbfdefinemaxobjects.yfilter)) leaf_name_data.push_back(cbfdefinemaxobjects.get_name_leafdata());
    if (cbfdefineobjects.is_set || is_set(cbfdefineobjects.yfilter)) leaf_name_data.push_back(cbfdefineobjects.get_name_leafdata());
    if (cbfdefinehighobjects.is_set || is_set(cbfdefinehighobjects.yfilter)) leaf_name_data.push_back(cbfdefinehighobjects.get_name_leafdata());
    if (cbfdefineobjectsrefused.is_set || is_set(cbfdefineobjectsrefused.yfilter)) leaf_name_data.push_back(cbfdefineobjectsrefused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfDefine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfDefine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOBULKFILEMIB::CbfDefine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfDefineMaxFiles")
    {
        cbfdefinemaxfiles = value;
        cbfdefinemaxfiles.value_namespace = name_space;
        cbfdefinemaxfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFiles")
    {
        cbfdefinefiles = value;
        cbfdefinefiles.value_namespace = name_space;
        cbfdefinefiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineHighFiles")
    {
        cbfdefinehighfiles = value;
        cbfdefinehighfiles.value_namespace = name_space;
        cbfdefinehighfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFilesRefused")
    {
        cbfdefinefilesrefused = value;
        cbfdefinefilesrefused.value_namespace = name_space;
        cbfdefinefilesrefused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineMaxObjects")
    {
        cbfdefinemaxobjects = value;
        cbfdefinemaxobjects.value_namespace = name_space;
        cbfdefinemaxobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjects")
    {
        cbfdefineobjects = value;
        cbfdefineobjects.value_namespace = name_space;
        cbfdefineobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineHighObjects")
    {
        cbfdefinehighobjects = value;
        cbfdefinehighobjects.value_namespace = name_space;
        cbfdefinehighobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectsRefused")
    {
        cbfdefineobjectsrefused = value;
        cbfdefineobjectsrefused.value_namespace = name_space;
        cbfdefineobjectsrefused.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBULKFILEMIB::CbfDefine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfDefineMaxFiles")
    {
        cbfdefinemaxfiles.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFiles")
    {
        cbfdefinefiles.yfilter = yfilter;
    }
    if(value_path == "cbfDefineHighFiles")
    {
        cbfdefinehighfiles.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFilesRefused")
    {
        cbfdefinefilesrefused.yfilter = yfilter;
    }
    if(value_path == "cbfDefineMaxObjects")
    {
        cbfdefinemaxobjects.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjects")
    {
        cbfdefineobjects.yfilter = yfilter;
    }
    if(value_path == "cbfDefineHighObjects")
    {
        cbfdefinehighobjects.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectsRefused")
    {
        cbfdefineobjectsrefused.yfilter = yfilter;
    }
}

bool CISCOBULKFILEMIB::CbfDefine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineMaxFiles" || name == "cbfDefineFiles" || name == "cbfDefineHighFiles" || name == "cbfDefineFilesRefused" || name == "cbfDefineMaxObjects" || name == "cbfDefineObjects" || name == "cbfDefineHighObjects" || name == "cbfDefineObjectsRefused")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfStatus::CbfStatus()
    :
    cbfstatusmaxfiles{YType::uint32, "cbfStatusMaxFiles"},
    cbfstatusfiles{YType::uint32, "cbfStatusFiles"},
    cbfstatushighfiles{YType::uint32, "cbfStatusHighFiles"},
    cbfstatusfilesbumped{YType::uint32, "cbfStatusFilesBumped"}
{

    yang_name = "cbfStatus"; yang_parent_name = "CISCO-BULK-FILE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfStatus::~CbfStatus()
{
}

bool CISCOBULKFILEMIB::CbfStatus::has_data() const
{
    if (is_presence_container) return true;
    return cbfstatusmaxfiles.is_set
	|| cbfstatusfiles.is_set
	|| cbfstatushighfiles.is_set
	|| cbfstatusfilesbumped.is_set;
}

bool CISCOBULKFILEMIB::CbfStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfstatusmaxfiles.yfilter)
	|| ydk::is_set(cbfstatusfiles.yfilter)
	|| ydk::is_set(cbfstatushighfiles.yfilter)
	|| ydk::is_set(cbfstatusfilesbumped.yfilter);
}

std::string CISCOBULKFILEMIB::CbfStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfStatus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfstatusmaxfiles.is_set || is_set(cbfstatusmaxfiles.yfilter)) leaf_name_data.push_back(cbfstatusmaxfiles.get_name_leafdata());
    if (cbfstatusfiles.is_set || is_set(cbfstatusfiles.yfilter)) leaf_name_data.push_back(cbfstatusfiles.get_name_leafdata());
    if (cbfstatushighfiles.is_set || is_set(cbfstatushighfiles.yfilter)) leaf_name_data.push_back(cbfstatushighfiles.get_name_leafdata());
    if (cbfstatusfilesbumped.is_set || is_set(cbfstatusfilesbumped.yfilter)) leaf_name_data.push_back(cbfstatusfilesbumped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOBULKFILEMIB::CbfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfStatusMaxFiles")
    {
        cbfstatusmaxfiles = value;
        cbfstatusmaxfiles.value_namespace = name_space;
        cbfstatusmaxfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusFiles")
    {
        cbfstatusfiles = value;
        cbfstatusfiles.value_namespace = name_space;
        cbfstatusfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusHighFiles")
    {
        cbfstatushighfiles = value;
        cbfstatushighfiles.value_namespace = name_space;
        cbfstatushighfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusFilesBumped")
    {
        cbfstatusfilesbumped = value;
        cbfstatusfilesbumped.value_namespace = name_space;
        cbfstatusfilesbumped.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBULKFILEMIB::CbfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfStatusMaxFiles")
    {
        cbfstatusmaxfiles.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFiles")
    {
        cbfstatusfiles.yfilter = yfilter;
    }
    if(value_path == "cbfStatusHighFiles")
    {
        cbfstatushighfiles.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFilesBumped")
    {
        cbfstatusfilesbumped.yfilter = yfilter;
    }
}

bool CISCOBULKFILEMIB::CbfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfStatusMaxFiles" || name == "cbfStatusFiles" || name == "cbfStatusHighFiles" || name == "cbfStatusFilesBumped")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileTable()
    :
    cbfdefinefileentry(this, {"cbfdefinefileindex"})
{

    yang_name = "cbfDefineFileTable"; yang_parent_name = "CISCO-BULK-FILE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfDefineFileTable::~CbfDefineFileTable()
{
}

bool CISCOBULKFILEMIB::CbfDefineFileTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbfdefinefileentry.len(); index++)
    {
        if(cbfdefinefileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBULKFILEMIB::CbfDefineFileTable::has_operation() const
{
    for (std::size_t index=0; index<cbfdefinefileentry.len(); index++)
    {
        if(cbfdefinefileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBULKFILEMIB::CbfDefineFileTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfDefineFileTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineFileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfDefineFileTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfDefineFileTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfDefineFileEntry")
    {
        auto ent_ = std::make_shared<CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry>();
        ent_->parent = this;
        cbfdefinefileentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfDefineFileTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cbfdefinefileentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOBULKFILEMIB::CbfDefineFileTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBULKFILEMIB::CbfDefineFileTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBULKFILEMIB::CbfDefineFileTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileEntry")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileEntry()
    :
    cbfdefinefileindex{YType::uint32, "cbfDefineFileIndex"},
    cbfdefinefilename{YType::str, "cbfDefineFileName"},
    cbfdefinefilestorage{YType::enumeration, "cbfDefineFileStorage"},
    cbfdefinefileformat{YType::enumeration, "cbfDefineFileFormat"},
    cbfdefinefilenow{YType::enumeration, "cbfDefineFileNow"},
    cbfdefinefileentrystatus{YType::enumeration, "cbfDefineFileEntryStatus"},
    cbfdefinefilenotifyoncompletion{YType::boolean, "cbfDefineFileNotifyOnCompletion"}
{

    yang_name = "cbfDefineFileEntry"; yang_parent_name = "cbfDefineFileTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::~CbfDefineFileEntry()
{
}

bool CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::has_data() const
{
    if (is_presence_container) return true;
    return cbfdefinefileindex.is_set
	|| cbfdefinefilename.is_set
	|| cbfdefinefilestorage.is_set
	|| cbfdefinefileformat.is_set
	|| cbfdefinefilenow.is_set
	|| cbfdefinefileentrystatus.is_set
	|| cbfdefinefilenotifyoncompletion.is_set;
}

bool CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinefileindex.yfilter)
	|| ydk::is_set(cbfdefinefilename.yfilter)
	|| ydk::is_set(cbfdefinefilestorage.yfilter)
	|| ydk::is_set(cbfdefinefileformat.yfilter)
	|| ydk::is_set(cbfdefinefilenow.yfilter)
	|| ydk::is_set(cbfdefinefileentrystatus.yfilter)
	|| ydk::is_set(cbfdefinefilenotifyoncompletion.yfilter);
}

std::string CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/cbfDefineFileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineFileEntry";
    ADD_KEY_TOKEN(cbfdefinefileindex, "cbfDefineFileIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.yfilter)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfdefinefilename.is_set || is_set(cbfdefinefilename.yfilter)) leaf_name_data.push_back(cbfdefinefilename.get_name_leafdata());
    if (cbfdefinefilestorage.is_set || is_set(cbfdefinefilestorage.yfilter)) leaf_name_data.push_back(cbfdefinefilestorage.get_name_leafdata());
    if (cbfdefinefileformat.is_set || is_set(cbfdefinefileformat.yfilter)) leaf_name_data.push_back(cbfdefinefileformat.get_name_leafdata());
    if (cbfdefinefilenow.is_set || is_set(cbfdefinefilenow.yfilter)) leaf_name_data.push_back(cbfdefinefilenow.get_name_leafdata());
    if (cbfdefinefileentrystatus.is_set || is_set(cbfdefinefileentrystatus.yfilter)) leaf_name_data.push_back(cbfdefinefileentrystatus.get_name_leafdata());
    if (cbfdefinefilenotifyoncompletion.is_set || is_set(cbfdefinefilenotifyoncompletion.yfilter)) leaf_name_data.push_back(cbfdefinefilenotifyoncompletion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex = value;
        cbfdefinefileindex.value_namespace = name_space;
        cbfdefinefileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileName")
    {
        cbfdefinefilename = value;
        cbfdefinefilename.value_namespace = name_space;
        cbfdefinefilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileStorage")
    {
        cbfdefinefilestorage = value;
        cbfdefinefilestorage.value_namespace = name_space;
        cbfdefinefilestorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileFormat")
    {
        cbfdefinefileformat = value;
        cbfdefinefileformat.value_namespace = name_space;
        cbfdefinefileformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileNow")
    {
        cbfdefinefilenow = value;
        cbfdefinefilenow.value_namespace = name_space;
        cbfdefinefilenow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileEntryStatus")
    {
        cbfdefinefileentrystatus = value;
        cbfdefinefileentrystatus.value_namespace = name_space;
        cbfdefinefileentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileNotifyOnCompletion")
    {
        cbfdefinefilenotifyoncompletion = value;
        cbfdefinefilenotifyoncompletion.value_namespace = name_space;
        cbfdefinefilenotifyoncompletion.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileName")
    {
        cbfdefinefilename.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileStorage")
    {
        cbfdefinefilestorage.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileFormat")
    {
        cbfdefinefileformat.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileNow")
    {
        cbfdefinefilenow.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileEntryStatus")
    {
        cbfdefinefileentrystatus.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileNotifyOnCompletion")
    {
        cbfdefinefilenotifyoncompletion.yfilter = yfilter;
    }
}

bool CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileIndex" || name == "cbfDefineFileName" || name == "cbfDefineFileStorage" || name == "cbfDefineFileFormat" || name == "cbfDefineFileNow" || name == "cbfDefineFileEntryStatus" || name == "cbfDefineFileNotifyOnCompletion")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectTable()
    :
    cbfdefineobjectentry(this, {"cbfdefinefileindex", "cbfdefineobjectindex"})
{

    yang_name = "cbfDefineObjectTable"; yang_parent_name = "CISCO-BULK-FILE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfDefineObjectTable::~CbfDefineObjectTable()
{
}

bool CISCOBULKFILEMIB::CbfDefineObjectTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbfdefineobjectentry.len(); index++)
    {
        if(cbfdefineobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBULKFILEMIB::CbfDefineObjectTable::has_operation() const
{
    for (std::size_t index=0; index<cbfdefineobjectentry.len(); index++)
    {
        if(cbfdefineobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBULKFILEMIB::CbfDefineObjectTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfDefineObjectTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineObjectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfDefineObjectTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfDefineObjectTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfDefineObjectEntry")
    {
        auto ent_ = std::make_shared<CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry>();
        ent_->parent = this;
        cbfdefineobjectentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfDefineObjectTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cbfdefineobjectentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOBULKFILEMIB::CbfDefineObjectTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBULKFILEMIB::CbfDefineObjectTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBULKFILEMIB::CbfDefineObjectTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineObjectEntry")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::CbfDefineObjectEntry()
    :
    cbfdefinefileindex{YType::str, "cbfDefineFileIndex"},
    cbfdefineobjectindex{YType::uint32, "cbfDefineObjectIndex"},
    cbfdefineobjectclass{YType::enumeration, "cbfDefineObjectClass"},
    cbfdefineobjectid{YType::str, "cbfDefineObjectID"},
    cbfdefineobjectentrystatus{YType::enumeration, "cbfDefineObjectEntryStatus"},
    cbfdefineobjecttableinstance{YType::str, "cbfDefineObjectTableInstance"},
    cbfdefineobjectnumentries{YType::uint32, "cbfDefineObjectNumEntries"},
    cbfdefineobjectlastpolledinst{YType::str, "cbfDefineObjectLastPolledInst"}
{

    yang_name = "cbfDefineObjectEntry"; yang_parent_name = "cbfDefineObjectTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::~CbfDefineObjectEntry()
{
}

bool CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::has_data() const
{
    if (is_presence_container) return true;
    return cbfdefinefileindex.is_set
	|| cbfdefineobjectindex.is_set
	|| cbfdefineobjectclass.is_set
	|| cbfdefineobjectid.is_set
	|| cbfdefineobjectentrystatus.is_set
	|| cbfdefineobjecttableinstance.is_set
	|| cbfdefineobjectnumentries.is_set
	|| cbfdefineobjectlastpolledinst.is_set;
}

bool CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinefileindex.yfilter)
	|| ydk::is_set(cbfdefineobjectindex.yfilter)
	|| ydk::is_set(cbfdefineobjectclass.yfilter)
	|| ydk::is_set(cbfdefineobjectid.yfilter)
	|| ydk::is_set(cbfdefineobjectentrystatus.yfilter)
	|| ydk::is_set(cbfdefineobjecttableinstance.yfilter)
	|| ydk::is_set(cbfdefineobjectnumentries.yfilter)
	|| ydk::is_set(cbfdefineobjectlastpolledinst.yfilter);
}

std::string CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/cbfDefineObjectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineObjectEntry";
    ADD_KEY_TOKEN(cbfdefinefileindex, "cbfDefineFileIndex");
    ADD_KEY_TOKEN(cbfdefineobjectindex, "cbfDefineObjectIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.yfilter)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfdefineobjectindex.is_set || is_set(cbfdefineobjectindex.yfilter)) leaf_name_data.push_back(cbfdefineobjectindex.get_name_leafdata());
    if (cbfdefineobjectclass.is_set || is_set(cbfdefineobjectclass.yfilter)) leaf_name_data.push_back(cbfdefineobjectclass.get_name_leafdata());
    if (cbfdefineobjectid.is_set || is_set(cbfdefineobjectid.yfilter)) leaf_name_data.push_back(cbfdefineobjectid.get_name_leafdata());
    if (cbfdefineobjectentrystatus.is_set || is_set(cbfdefineobjectentrystatus.yfilter)) leaf_name_data.push_back(cbfdefineobjectentrystatus.get_name_leafdata());
    if (cbfdefineobjecttableinstance.is_set || is_set(cbfdefineobjecttableinstance.yfilter)) leaf_name_data.push_back(cbfdefineobjecttableinstance.get_name_leafdata());
    if (cbfdefineobjectnumentries.is_set || is_set(cbfdefineobjectnumentries.yfilter)) leaf_name_data.push_back(cbfdefineobjectnumentries.get_name_leafdata());
    if (cbfdefineobjectlastpolledinst.is_set || is_set(cbfdefineobjectlastpolledinst.yfilter)) leaf_name_data.push_back(cbfdefineobjectlastpolledinst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex = value;
        cbfdefinefileindex.value_namespace = name_space;
        cbfdefinefileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectIndex")
    {
        cbfdefineobjectindex = value;
        cbfdefineobjectindex.value_namespace = name_space;
        cbfdefineobjectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectClass")
    {
        cbfdefineobjectclass = value;
        cbfdefineobjectclass.value_namespace = name_space;
        cbfdefineobjectclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectID")
    {
        cbfdefineobjectid = value;
        cbfdefineobjectid.value_namespace = name_space;
        cbfdefineobjectid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectEntryStatus")
    {
        cbfdefineobjectentrystatus = value;
        cbfdefineobjectentrystatus.value_namespace = name_space;
        cbfdefineobjectentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectTableInstance")
    {
        cbfdefineobjecttableinstance = value;
        cbfdefineobjecttableinstance.value_namespace = name_space;
        cbfdefineobjecttableinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectNumEntries")
    {
        cbfdefineobjectnumentries = value;
        cbfdefineobjectnumentries.value_namespace = name_space;
        cbfdefineobjectnumentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectLastPolledInst")
    {
        cbfdefineobjectlastpolledinst = value;
        cbfdefineobjectlastpolledinst.value_namespace = name_space;
        cbfdefineobjectlastpolledinst.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectIndex")
    {
        cbfdefineobjectindex.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectClass")
    {
        cbfdefineobjectclass.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectID")
    {
        cbfdefineobjectid.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectEntryStatus")
    {
        cbfdefineobjectentrystatus.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectTableInstance")
    {
        cbfdefineobjecttableinstance.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectNumEntries")
    {
        cbfdefineobjectnumentries.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectLastPolledInst")
    {
        cbfdefineobjectlastpolledinst.yfilter = yfilter;
    }
}

bool CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileIndex" || name == "cbfDefineObjectIndex" || name == "cbfDefineObjectClass" || name == "cbfDefineObjectID" || name == "cbfDefineObjectEntryStatus" || name == "cbfDefineObjectTableInstance" || name == "cbfDefineObjectNumEntries" || name == "cbfDefineObjectLastPolledInst")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileTable()
    :
    cbfstatusfileentry(this, {"cbfdefinefileindex", "cbfstatusfileindex"})
{

    yang_name = "cbfStatusFileTable"; yang_parent_name = "CISCO-BULK-FILE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfStatusFileTable::~CbfStatusFileTable()
{
}

bool CISCOBULKFILEMIB::CbfStatusFileTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cbfstatusfileentry.len(); index++)
    {
        if(cbfstatusfileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBULKFILEMIB::CbfStatusFileTable::has_operation() const
{
    for (std::size_t index=0; index<cbfstatusfileentry.len(); index++)
    {
        if(cbfstatusfileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBULKFILEMIB::CbfStatusFileTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfStatusFileTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfStatusFileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfStatusFileTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfStatusFileTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfStatusFileEntry")
    {
        auto ent_ = std::make_shared<CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry>();
        ent_->parent = this;
        cbfstatusfileentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfStatusFileTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cbfstatusfileentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOBULKFILEMIB::CbfStatusFileTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBULKFILEMIB::CbfStatusFileTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBULKFILEMIB::CbfStatusFileTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfStatusFileEntry")
        return true;
    return false;
}

CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileEntry()
    :
    cbfdefinefileindex{YType::str, "cbfDefineFileIndex"},
    cbfstatusfileindex{YType::uint32, "cbfStatusFileIndex"},
    cbfstatusfilestate{YType::enumeration, "cbfStatusFileState"},
    cbfstatusfilecompletiontime{YType::uint32, "cbfStatusFileCompletionTime"},
    cbfstatusfileentrystatus{YType::enumeration, "cbfStatusFileEntryStatus"}
{

    yang_name = "cbfStatusFileEntry"; yang_parent_name = "cbfStatusFileTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::~CbfStatusFileEntry()
{
}

bool CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::has_data() const
{
    if (is_presence_container) return true;
    return cbfdefinefileindex.is_set
	|| cbfstatusfileindex.is_set
	|| cbfstatusfilestate.is_set
	|| cbfstatusfilecompletiontime.is_set
	|| cbfstatusfileentrystatus.is_set;
}

bool CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinefileindex.yfilter)
	|| ydk::is_set(cbfstatusfileindex.yfilter)
	|| ydk::is_set(cbfstatusfilestate.yfilter)
	|| ydk::is_set(cbfstatusfilecompletiontime.yfilter)
	|| ydk::is_set(cbfstatusfileentrystatus.yfilter);
}

std::string CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/cbfStatusFileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfStatusFileEntry";
    ADD_KEY_TOKEN(cbfdefinefileindex, "cbfDefineFileIndex");
    ADD_KEY_TOKEN(cbfstatusfileindex, "cbfStatusFileIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.yfilter)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfstatusfileindex.is_set || is_set(cbfstatusfileindex.yfilter)) leaf_name_data.push_back(cbfstatusfileindex.get_name_leafdata());
    if (cbfstatusfilestate.is_set || is_set(cbfstatusfilestate.yfilter)) leaf_name_data.push_back(cbfstatusfilestate.get_name_leafdata());
    if (cbfstatusfilecompletiontime.is_set || is_set(cbfstatusfilecompletiontime.yfilter)) leaf_name_data.push_back(cbfstatusfilecompletiontime.get_name_leafdata());
    if (cbfstatusfileentrystatus.is_set || is_set(cbfstatusfileentrystatus.yfilter)) leaf_name_data.push_back(cbfstatusfileentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex = value;
        cbfdefinefileindex.value_namespace = name_space;
        cbfdefinefileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusFileIndex")
    {
        cbfstatusfileindex = value;
        cbfstatusfileindex.value_namespace = name_space;
        cbfstatusfileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusFileState")
    {
        cbfstatusfilestate = value;
        cbfstatusfilestate.value_namespace = name_space;
        cbfstatusfilestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusFileCompletionTime")
    {
        cbfstatusfilecompletiontime = value;
        cbfstatusfilecompletiontime.value_namespace = name_space;
        cbfstatusfilecompletiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusFileEntryStatus")
    {
        cbfstatusfileentrystatus = value;
        cbfstatusfileentrystatus.value_namespace = name_space;
        cbfstatusfileentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileIndex")
    {
        cbfstatusfileindex.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileState")
    {
        cbfstatusfilestate.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileCompletionTime")
    {
        cbfstatusfilecompletiontime.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileEntryStatus")
    {
        cbfstatusfileentrystatus.yfilter = yfilter;
    }
}

bool CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileIndex" || name == "cbfStatusFileIndex" || name == "cbfStatusFileState" || name == "cbfStatusFileCompletionTime" || name == "cbfStatusFileEntryStatus")
        return true;
    return false;
}

const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileStorage::ephemeral {1, "ephemeral"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileStorage::volatile_ {2, "volatile"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileStorage::permanent {3, "permanent"};

const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileFormat::standardBER {1, "standardBER"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileFormat::bulkBinary {2, "bulkBinary"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileFormat::bulkASCII {3, "bulkASCII"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileFormat::variantBERWithCksum {4, "variantBERWithCksum"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileFormat::variantBinWithCksum {5, "variantBinWithCksum"};

const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileNow::notActive {1, "notActive"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileNow::ready {2, "ready"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileNow::create {3, "create"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileNow::running {4, "running"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineFileTable::CbfDefineFileEntry::CbfDefineFileNow::forcedCreate {5, "forcedCreate"};

const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::CbfDefineObjectClass::object {1, "object"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::CbfDefineObjectClass::lexicalTable {2, "lexicalTable"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfDefineObjectTable::CbfDefineObjectEntry::CbfDefineObjectClass::leastCpuTable {3, "leastCpuTable"};

const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::running {1, "running"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::ready {2, "ready"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::emptied {3, "emptied"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::noSpace {4, "noSpace"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::badName {5, "badName"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::writeErr {6, "writeErr"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::noMem {7, "noMem"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::buffErr {8, "buffErr"};
const Enum::YLeaf CISCOBULKFILEMIB::CbfStatusFileTable::CbfStatusFileEntry::CbfStatusFileState::aborted {9, "aborted"};


}
}

