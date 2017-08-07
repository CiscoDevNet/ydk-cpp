
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BULK_FILE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_BULK_FILE_MIB {

CiscoBulkFileMib::CiscoBulkFileMib()
    :
    cbfdefine(std::make_shared<CiscoBulkFileMib::Cbfdefine>())
	,cbfdefinefiletable(std::make_shared<CiscoBulkFileMib::Cbfdefinefiletable>())
	,cbfdefineobjecttable(std::make_shared<CiscoBulkFileMib::Cbfdefineobjecttable>())
	,cbfstatus(std::make_shared<CiscoBulkFileMib::Cbfstatus>())
	,cbfstatusfiletable(std::make_shared<CiscoBulkFileMib::Cbfstatusfiletable>())
{
    cbfdefine->parent = this;

    cbfdefinefiletable->parent = this;

    cbfdefineobjecttable->parent = this;

    cbfstatus->parent = this;

    cbfstatusfiletable->parent = this;

    yang_name = "CISCO-BULK-FILE-MIB"; yang_parent_name = "CISCO-BULK-FILE-MIB";
}

CiscoBulkFileMib::~CiscoBulkFileMib()
{
}

bool CiscoBulkFileMib::has_data() const
{
    return (cbfdefine !=  nullptr && cbfdefine->has_data())
	|| (cbfdefinefiletable !=  nullptr && cbfdefinefiletable->has_data())
	|| (cbfdefineobjecttable !=  nullptr && cbfdefineobjecttable->has_data())
	|| (cbfstatus !=  nullptr && cbfstatus->has_data())
	|| (cbfstatusfiletable !=  nullptr && cbfstatusfiletable->has_data());
}

bool CiscoBulkFileMib::has_operation() const
{
    return is_set(yfilter)
	|| (cbfdefine !=  nullptr && cbfdefine->has_operation())
	|| (cbfdefinefiletable !=  nullptr && cbfdefinefiletable->has_operation())
	|| (cbfdefineobjecttable !=  nullptr && cbfdefineobjecttable->has_operation())
	|| (cbfstatus !=  nullptr && cbfstatus->has_operation())
	|| (cbfstatusfiletable !=  nullptr && cbfstatusfiletable->has_operation());
}

std::string CiscoBulkFileMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoBulkFileMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfDefine")
    {
        if(cbfdefine == nullptr)
        {
            cbfdefine = std::make_shared<CiscoBulkFileMib::Cbfdefine>();
        }
        return cbfdefine;
    }

    if(child_yang_name == "cbfDefineFileTable")
    {
        if(cbfdefinefiletable == nullptr)
        {
            cbfdefinefiletable = std::make_shared<CiscoBulkFileMib::Cbfdefinefiletable>();
        }
        return cbfdefinefiletable;
    }

    if(child_yang_name == "cbfDefineObjectTable")
    {
        if(cbfdefineobjecttable == nullptr)
        {
            cbfdefineobjecttable = std::make_shared<CiscoBulkFileMib::Cbfdefineobjecttable>();
        }
        return cbfdefineobjecttable;
    }

    if(child_yang_name == "cbfStatus")
    {
        if(cbfstatus == nullptr)
        {
            cbfstatus = std::make_shared<CiscoBulkFileMib::Cbfstatus>();
        }
        return cbfstatus;
    }

    if(child_yang_name == "cbfStatusFileTable")
    {
        if(cbfstatusfiletable == nullptr)
        {
            cbfstatusfiletable = std::make_shared<CiscoBulkFileMib::Cbfstatusfiletable>();
        }
        return cbfstatusfiletable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbfdefine != nullptr)
    {
        children["cbfDefine"] = cbfdefine;
    }

    if(cbfdefinefiletable != nullptr)
    {
        children["cbfDefineFileTable"] = cbfdefinefiletable;
    }

    if(cbfdefineobjecttable != nullptr)
    {
        children["cbfDefineObjectTable"] = cbfdefineobjecttable;
    }

    if(cbfstatus != nullptr)
    {
        children["cbfStatus"] = cbfstatus;
    }

    if(cbfstatusfiletable != nullptr)
    {
        children["cbfStatusFileTable"] = cbfstatusfiletable;
    }

    return children;
}

void CiscoBulkFileMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoBulkFileMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoBulkFileMib::clone_ptr() const
{
    return std::make_shared<CiscoBulkFileMib>();
}

std::string CiscoBulkFileMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoBulkFileMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoBulkFileMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoBulkFileMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoBulkFileMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefine" || name == "cbfDefineFileTable" || name == "cbfDefineObjectTable" || name == "cbfStatus" || name == "cbfStatusFileTable")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfdefine::Cbfdefine()
    :
    cbfdefinefiles{YType::uint32, "cbfDefineFiles"},
    cbfdefinefilesrefused{YType::uint32, "cbfDefineFilesRefused"},
    cbfdefinehighfiles{YType::uint32, "cbfDefineHighFiles"},
    cbfdefinehighobjects{YType::uint32, "cbfDefineHighObjects"},
    cbfdefinemaxfiles{YType::uint32, "cbfDefineMaxFiles"},
    cbfdefinemaxobjects{YType::uint32, "cbfDefineMaxObjects"},
    cbfdefineobjects{YType::uint32, "cbfDefineObjects"},
    cbfdefineobjectsrefused{YType::uint32, "cbfDefineObjectsRefused"}
{
    yang_name = "cbfDefine"; yang_parent_name = "CISCO-BULK-FILE-MIB";
}

CiscoBulkFileMib::Cbfdefine::~Cbfdefine()
{
}

bool CiscoBulkFileMib::Cbfdefine::has_data() const
{
    return cbfdefinefiles.is_set
	|| cbfdefinefilesrefused.is_set
	|| cbfdefinehighfiles.is_set
	|| cbfdefinehighobjects.is_set
	|| cbfdefinemaxfiles.is_set
	|| cbfdefinemaxobjects.is_set
	|| cbfdefineobjects.is_set
	|| cbfdefineobjectsrefused.is_set;
}

bool CiscoBulkFileMib::Cbfdefine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinefiles.yfilter)
	|| ydk::is_set(cbfdefinefilesrefused.yfilter)
	|| ydk::is_set(cbfdefinehighfiles.yfilter)
	|| ydk::is_set(cbfdefinehighobjects.yfilter)
	|| ydk::is_set(cbfdefinemaxfiles.yfilter)
	|| ydk::is_set(cbfdefinemaxobjects.yfilter)
	|| ydk::is_set(cbfdefineobjects.yfilter)
	|| ydk::is_set(cbfdefineobjectsrefused.yfilter);
}

std::string CiscoBulkFileMib::Cbfdefine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefine";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfdefine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinefiles.is_set || is_set(cbfdefinefiles.yfilter)) leaf_name_data.push_back(cbfdefinefiles.get_name_leafdata());
    if (cbfdefinefilesrefused.is_set || is_set(cbfdefinefilesrefused.yfilter)) leaf_name_data.push_back(cbfdefinefilesrefused.get_name_leafdata());
    if (cbfdefinehighfiles.is_set || is_set(cbfdefinehighfiles.yfilter)) leaf_name_data.push_back(cbfdefinehighfiles.get_name_leafdata());
    if (cbfdefinehighobjects.is_set || is_set(cbfdefinehighobjects.yfilter)) leaf_name_data.push_back(cbfdefinehighobjects.get_name_leafdata());
    if (cbfdefinemaxfiles.is_set || is_set(cbfdefinemaxfiles.yfilter)) leaf_name_data.push_back(cbfdefinemaxfiles.get_name_leafdata());
    if (cbfdefinemaxobjects.is_set || is_set(cbfdefinemaxobjects.yfilter)) leaf_name_data.push_back(cbfdefinemaxobjects.get_name_leafdata());
    if (cbfdefineobjects.is_set || is_set(cbfdefineobjects.yfilter)) leaf_name_data.push_back(cbfdefineobjects.get_name_leafdata());
    if (cbfdefineobjectsrefused.is_set || is_set(cbfdefineobjectsrefused.yfilter)) leaf_name_data.push_back(cbfdefineobjectsrefused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfdefine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfdefine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBulkFileMib::Cbfdefine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfDefineFiles")
    {
        cbfdefinefiles = value;
        cbfdefinefiles.value_namespace = name_space;
        cbfdefinefiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFilesRefused")
    {
        cbfdefinefilesrefused = value;
        cbfdefinefilesrefused.value_namespace = name_space;
        cbfdefinefilesrefused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineHighFiles")
    {
        cbfdefinehighfiles = value;
        cbfdefinehighfiles.value_namespace = name_space;
        cbfdefinehighfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineHighObjects")
    {
        cbfdefinehighobjects = value;
        cbfdefinehighobjects.value_namespace = name_space;
        cbfdefinehighobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineMaxFiles")
    {
        cbfdefinemaxfiles = value;
        cbfdefinemaxfiles.value_namespace = name_space;
        cbfdefinemaxfiles.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cbfDefineObjectsRefused")
    {
        cbfdefineobjectsrefused = value;
        cbfdefineobjectsrefused.value_namespace = name_space;
        cbfdefineobjectsrefused.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoBulkFileMib::Cbfdefine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfDefineFiles")
    {
        cbfdefinefiles.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFilesRefused")
    {
        cbfdefinefilesrefused.yfilter = yfilter;
    }
    if(value_path == "cbfDefineHighFiles")
    {
        cbfdefinehighfiles.yfilter = yfilter;
    }
    if(value_path == "cbfDefineHighObjects")
    {
        cbfdefinehighobjects.yfilter = yfilter;
    }
    if(value_path == "cbfDefineMaxFiles")
    {
        cbfdefinemaxfiles.yfilter = yfilter;
    }
    if(value_path == "cbfDefineMaxObjects")
    {
        cbfdefinemaxobjects.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjects")
    {
        cbfdefineobjects.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectsRefused")
    {
        cbfdefineobjectsrefused.yfilter = yfilter;
    }
}

bool CiscoBulkFileMib::Cbfdefine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFiles" || name == "cbfDefineFilesRefused" || name == "cbfDefineHighFiles" || name == "cbfDefineHighObjects" || name == "cbfDefineMaxFiles" || name == "cbfDefineMaxObjects" || name == "cbfDefineObjects" || name == "cbfDefineObjectsRefused")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfstatus::Cbfstatus()
    :
    cbfstatusfiles{YType::uint32, "cbfStatusFiles"},
    cbfstatusfilesbumped{YType::uint32, "cbfStatusFilesBumped"},
    cbfstatushighfiles{YType::uint32, "cbfStatusHighFiles"},
    cbfstatusmaxfiles{YType::uint32, "cbfStatusMaxFiles"}
{
    yang_name = "cbfStatus"; yang_parent_name = "CISCO-BULK-FILE-MIB";
}

CiscoBulkFileMib::Cbfstatus::~Cbfstatus()
{
}

bool CiscoBulkFileMib::Cbfstatus::has_data() const
{
    return cbfstatusfiles.is_set
	|| cbfstatusfilesbumped.is_set
	|| cbfstatushighfiles.is_set
	|| cbfstatusmaxfiles.is_set;
}

bool CiscoBulkFileMib::Cbfstatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfstatusfiles.yfilter)
	|| ydk::is_set(cbfstatusfilesbumped.yfilter)
	|| ydk::is_set(cbfstatushighfiles.yfilter)
	|| ydk::is_set(cbfstatusmaxfiles.yfilter);
}

std::string CiscoBulkFileMib::Cbfstatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfStatus";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfstatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfstatusfiles.is_set || is_set(cbfstatusfiles.yfilter)) leaf_name_data.push_back(cbfstatusfiles.get_name_leafdata());
    if (cbfstatusfilesbumped.is_set || is_set(cbfstatusfilesbumped.yfilter)) leaf_name_data.push_back(cbfstatusfilesbumped.get_name_leafdata());
    if (cbfstatushighfiles.is_set || is_set(cbfstatushighfiles.yfilter)) leaf_name_data.push_back(cbfstatushighfiles.get_name_leafdata());
    if (cbfstatusmaxfiles.is_set || is_set(cbfstatusmaxfiles.yfilter)) leaf_name_data.push_back(cbfstatusmaxfiles.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfstatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfstatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBulkFileMib::Cbfstatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfStatusFiles")
    {
        cbfstatusfiles = value;
        cbfstatusfiles.value_namespace = name_space;
        cbfstatusfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusFilesBumped")
    {
        cbfstatusfilesbumped = value;
        cbfstatusfilesbumped.value_namespace = name_space;
        cbfstatusfilesbumped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusHighFiles")
    {
        cbfstatushighfiles = value;
        cbfstatushighfiles.value_namespace = name_space;
        cbfstatushighfiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfStatusMaxFiles")
    {
        cbfstatusmaxfiles = value;
        cbfstatusmaxfiles.value_namespace = name_space;
        cbfstatusmaxfiles.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoBulkFileMib::Cbfstatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfStatusFiles")
    {
        cbfstatusfiles.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFilesBumped")
    {
        cbfstatusfilesbumped.yfilter = yfilter;
    }
    if(value_path == "cbfStatusHighFiles")
    {
        cbfstatushighfiles.yfilter = yfilter;
    }
    if(value_path == "cbfStatusMaxFiles")
    {
        cbfstatusmaxfiles.yfilter = yfilter;
    }
}

bool CiscoBulkFileMib::Cbfstatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfStatusFiles" || name == "cbfStatusFilesBumped" || name == "cbfStatusHighFiles" || name == "cbfStatusMaxFiles")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefiletable()
{
    yang_name = "cbfDefineFileTable"; yang_parent_name = "CISCO-BULK-FILE-MIB";
}

CiscoBulkFileMib::Cbfdefinefiletable::~Cbfdefinefiletable()
{
}

bool CiscoBulkFileMib::Cbfdefinefiletable::has_data() const
{
    for (std::size_t index=0; index<cbfdefinefileentry.size(); index++)
    {
        if(cbfdefinefileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBulkFileMib::Cbfdefinefiletable::has_operation() const
{
    for (std::size_t index=0; index<cbfdefinefileentry.size(); index++)
    {
        if(cbfdefinefileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoBulkFileMib::Cbfdefinefiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineFileTable";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfdefinefiletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfdefinefiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfDefineFileEntry")
    {
        for(auto const & c : cbfdefinefileentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry>();
        c->parent = this;
        cbfdefinefileentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfdefinefiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbfdefinefileentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBulkFileMib::Cbfdefinefiletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoBulkFileMib::Cbfdefinefiletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoBulkFileMib::Cbfdefinefiletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileEntry")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefileentry()
    :
    cbfdefinefileindex{YType::uint32, "cbfDefineFileIndex"},
    cbfdefinefileentrystatus{YType::enumeration, "cbfDefineFileEntryStatus"},
    cbfdefinefileformat{YType::enumeration, "cbfDefineFileFormat"},
    cbfdefinefilename{YType::str, "cbfDefineFileName"},
    cbfdefinefilenotifyoncompletion{YType::boolean, "cbfDefineFileNotifyOnCompletion"},
    cbfdefinefilenow{YType::enumeration, "cbfDefineFileNow"},
    cbfdefinefilestorage{YType::enumeration, "cbfDefineFileStorage"}
{
    yang_name = "cbfDefineFileEntry"; yang_parent_name = "cbfDefineFileTable";
}

CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::~Cbfdefinefileentry()
{
}

bool CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::has_data() const
{
    return cbfdefinefileindex.is_set
	|| cbfdefinefileentrystatus.is_set
	|| cbfdefinefileformat.is_set
	|| cbfdefinefilename.is_set
	|| cbfdefinefilenotifyoncompletion.is_set
	|| cbfdefinefilenow.is_set
	|| cbfdefinefilestorage.is_set;
}

bool CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinefileindex.yfilter)
	|| ydk::is_set(cbfdefinefileentrystatus.yfilter)
	|| ydk::is_set(cbfdefinefileformat.yfilter)
	|| ydk::is_set(cbfdefinefilename.yfilter)
	|| ydk::is_set(cbfdefinefilenotifyoncompletion.yfilter)
	|| ydk::is_set(cbfdefinefilenow.yfilter)
	|| ydk::is_set(cbfdefinefilestorage.yfilter);
}

std::string CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineFileEntry" <<"[cbfDefineFileIndex='" <<cbfdefinefileindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/cbfDefineFileTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.yfilter)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfdefinefileentrystatus.is_set || is_set(cbfdefinefileentrystatus.yfilter)) leaf_name_data.push_back(cbfdefinefileentrystatus.get_name_leafdata());
    if (cbfdefinefileformat.is_set || is_set(cbfdefinefileformat.yfilter)) leaf_name_data.push_back(cbfdefinefileformat.get_name_leafdata());
    if (cbfdefinefilename.is_set || is_set(cbfdefinefilename.yfilter)) leaf_name_data.push_back(cbfdefinefilename.get_name_leafdata());
    if (cbfdefinefilenotifyoncompletion.is_set || is_set(cbfdefinefilenotifyoncompletion.yfilter)) leaf_name_data.push_back(cbfdefinefilenotifyoncompletion.get_name_leafdata());
    if (cbfdefinefilenow.is_set || is_set(cbfdefinefilenow.yfilter)) leaf_name_data.push_back(cbfdefinefilenow.get_name_leafdata());
    if (cbfdefinefilestorage.is_set || is_set(cbfdefinefilestorage.yfilter)) leaf_name_data.push_back(cbfdefinefilestorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex = value;
        cbfdefinefileindex.value_namespace = name_space;
        cbfdefinefileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileEntryStatus")
    {
        cbfdefinefileentrystatus = value;
        cbfdefinefileentrystatus.value_namespace = name_space;
        cbfdefinefileentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileFormat")
    {
        cbfdefinefileformat = value;
        cbfdefinefileformat.value_namespace = name_space;
        cbfdefinefileformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileName")
    {
        cbfdefinefilename = value;
        cbfdefinefilename.value_namespace = name_space;
        cbfdefinefilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileNotifyOnCompletion")
    {
        cbfdefinefilenotifyoncompletion = value;
        cbfdefinefilenotifyoncompletion.value_namespace = name_space;
        cbfdefinefilenotifyoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileNow")
    {
        cbfdefinefilenow = value;
        cbfdefinefilenow.value_namespace = name_space;
        cbfdefinefilenow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineFileStorage")
    {
        cbfdefinefilestorage = value;
        cbfdefinefilestorage.value_namespace = name_space;
        cbfdefinefilestorage.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileEntryStatus")
    {
        cbfdefinefileentrystatus.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileFormat")
    {
        cbfdefinefileformat.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileName")
    {
        cbfdefinefilename.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileNotifyOnCompletion")
    {
        cbfdefinefilenotifyoncompletion.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileNow")
    {
        cbfdefinefilenow.yfilter = yfilter;
    }
    if(value_path == "cbfDefineFileStorage")
    {
        cbfdefinefilestorage.yfilter = yfilter;
    }
}

bool CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileIndex" || name == "cbfDefineFileEntryStatus" || name == "cbfDefineFileFormat" || name == "cbfDefineFileName" || name == "cbfDefineFileNotifyOnCompletion" || name == "cbfDefineFileNow" || name == "cbfDefineFileStorage")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjecttable()
{
    yang_name = "cbfDefineObjectTable"; yang_parent_name = "CISCO-BULK-FILE-MIB";
}

CiscoBulkFileMib::Cbfdefineobjecttable::~Cbfdefineobjecttable()
{
}

bool CiscoBulkFileMib::Cbfdefineobjecttable::has_data() const
{
    for (std::size_t index=0; index<cbfdefineobjectentry.size(); index++)
    {
        if(cbfdefineobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBulkFileMib::Cbfdefineobjecttable::has_operation() const
{
    for (std::size_t index=0; index<cbfdefineobjectentry.size(); index++)
    {
        if(cbfdefineobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoBulkFileMib::Cbfdefineobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineObjectTable";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfdefineobjecttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfdefineobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfDefineObjectEntry")
    {
        for(auto const & c : cbfdefineobjectentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry>();
        c->parent = this;
        cbfdefineobjectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfdefineobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbfdefineobjectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBulkFileMib::Cbfdefineobjecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoBulkFileMib::Cbfdefineobjecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoBulkFileMib::Cbfdefineobjecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineObjectEntry")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::Cbfdefineobjectentry()
    :
    cbfdefinefileindex{YType::str, "cbfDefineFileIndex"},
    cbfdefineobjectindex{YType::uint32, "cbfDefineObjectIndex"},
    cbfdefineobjectclass{YType::enumeration, "cbfDefineObjectClass"},
    cbfdefineobjectentrystatus{YType::enumeration, "cbfDefineObjectEntryStatus"},
    cbfdefineobjectid{YType::str, "cbfDefineObjectID"},
    cbfdefineobjectlastpolledinst{YType::str, "cbfDefineObjectLastPolledInst"},
    cbfdefineobjectnumentries{YType::uint32, "cbfDefineObjectNumEntries"},
    cbfdefineobjecttableinstance{YType::str, "cbfDefineObjectTableInstance"}
{
    yang_name = "cbfDefineObjectEntry"; yang_parent_name = "cbfDefineObjectTable";
}

CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::~Cbfdefineobjectentry()
{
}

bool CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::has_data() const
{
    return cbfdefinefileindex.is_set
	|| cbfdefineobjectindex.is_set
	|| cbfdefineobjectclass.is_set
	|| cbfdefineobjectentrystatus.is_set
	|| cbfdefineobjectid.is_set
	|| cbfdefineobjectlastpolledinst.is_set
	|| cbfdefineobjectnumentries.is_set
	|| cbfdefineobjecttableinstance.is_set;
}

bool CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinefileindex.yfilter)
	|| ydk::is_set(cbfdefineobjectindex.yfilter)
	|| ydk::is_set(cbfdefineobjectclass.yfilter)
	|| ydk::is_set(cbfdefineobjectentrystatus.yfilter)
	|| ydk::is_set(cbfdefineobjectid.yfilter)
	|| ydk::is_set(cbfdefineobjectlastpolledinst.yfilter)
	|| ydk::is_set(cbfdefineobjectnumentries.yfilter)
	|| ydk::is_set(cbfdefineobjecttableinstance.yfilter);
}

std::string CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfDefineObjectEntry" <<"[cbfDefineFileIndex='" <<cbfdefinefileindex <<"']" <<"[cbfDefineObjectIndex='" <<cbfdefineobjectindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/cbfDefineObjectTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.yfilter)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfdefineobjectindex.is_set || is_set(cbfdefineobjectindex.yfilter)) leaf_name_data.push_back(cbfdefineobjectindex.get_name_leafdata());
    if (cbfdefineobjectclass.is_set || is_set(cbfdefineobjectclass.yfilter)) leaf_name_data.push_back(cbfdefineobjectclass.get_name_leafdata());
    if (cbfdefineobjectentrystatus.is_set || is_set(cbfdefineobjectentrystatus.yfilter)) leaf_name_data.push_back(cbfdefineobjectentrystatus.get_name_leafdata());
    if (cbfdefineobjectid.is_set || is_set(cbfdefineobjectid.yfilter)) leaf_name_data.push_back(cbfdefineobjectid.get_name_leafdata());
    if (cbfdefineobjectlastpolledinst.is_set || is_set(cbfdefineobjectlastpolledinst.yfilter)) leaf_name_data.push_back(cbfdefineobjectlastpolledinst.get_name_leafdata());
    if (cbfdefineobjectnumentries.is_set || is_set(cbfdefineobjectnumentries.yfilter)) leaf_name_data.push_back(cbfdefineobjectnumentries.get_name_leafdata());
    if (cbfdefineobjecttableinstance.is_set || is_set(cbfdefineobjecttableinstance.yfilter)) leaf_name_data.push_back(cbfdefineobjecttableinstance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cbfDefineObjectEntryStatus")
    {
        cbfdefineobjectentrystatus = value;
        cbfdefineobjectentrystatus.value_namespace = name_space;
        cbfdefineobjectentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectID")
    {
        cbfdefineobjectid = value;
        cbfdefineobjectid.value_namespace = name_space;
        cbfdefineobjectid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectLastPolledInst")
    {
        cbfdefineobjectlastpolledinst = value;
        cbfdefineobjectlastpolledinst.value_namespace = name_space;
        cbfdefineobjectlastpolledinst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectNumEntries")
    {
        cbfdefineobjectnumentries = value;
        cbfdefineobjectnumentries.value_namespace = name_space;
        cbfdefineobjectnumentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbfDefineObjectTableInstance")
    {
        cbfdefineobjecttableinstance = value;
        cbfdefineobjecttableinstance.value_namespace = name_space;
        cbfdefineobjecttableinstance.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cbfDefineObjectEntryStatus")
    {
        cbfdefineobjectentrystatus.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectID")
    {
        cbfdefineobjectid.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectLastPolledInst")
    {
        cbfdefineobjectlastpolledinst.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectNumEntries")
    {
        cbfdefineobjectnumentries.yfilter = yfilter;
    }
    if(value_path == "cbfDefineObjectTableInstance")
    {
        cbfdefineobjecttableinstance.yfilter = yfilter;
    }
}

bool CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileIndex" || name == "cbfDefineObjectIndex" || name == "cbfDefineObjectClass" || name == "cbfDefineObjectEntryStatus" || name == "cbfDefineObjectID" || name == "cbfDefineObjectLastPolledInst" || name == "cbfDefineObjectNumEntries" || name == "cbfDefineObjectTableInstance")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfiletable()
{
    yang_name = "cbfStatusFileTable"; yang_parent_name = "CISCO-BULK-FILE-MIB";
}

CiscoBulkFileMib::Cbfstatusfiletable::~Cbfstatusfiletable()
{
}

bool CiscoBulkFileMib::Cbfstatusfiletable::has_data() const
{
    for (std::size_t index=0; index<cbfstatusfileentry.size(); index++)
    {
        if(cbfstatusfileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBulkFileMib::Cbfstatusfiletable::has_operation() const
{
    for (std::size_t index=0; index<cbfstatusfileentry.size(); index++)
    {
        if(cbfstatusfileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoBulkFileMib::Cbfstatusfiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfStatusFileTable";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfstatusfiletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfstatusfiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbfStatusFileEntry")
    {
        for(auto const & c : cbfstatusfileentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry>();
        c->parent = this;
        cbfstatusfileentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfstatusfiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbfstatusfileentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBulkFileMib::Cbfstatusfiletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoBulkFileMib::Cbfstatusfiletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoBulkFileMib::Cbfstatusfiletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfStatusFileEntry")
        return true;
    return false;
}

CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfileentry()
    :
    cbfdefinefileindex{YType::str, "cbfDefineFileIndex"},
    cbfstatusfileindex{YType::uint32, "cbfStatusFileIndex"},
    cbfstatusfilecompletiontime{YType::uint32, "cbfStatusFileCompletionTime"},
    cbfstatusfileentrystatus{YType::enumeration, "cbfStatusFileEntryStatus"},
    cbfstatusfilestate{YType::enumeration, "cbfStatusFileState"}
{
    yang_name = "cbfStatusFileEntry"; yang_parent_name = "cbfStatusFileTable";
}

CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::~Cbfstatusfileentry()
{
}

bool CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::has_data() const
{
    return cbfdefinefileindex.is_set
	|| cbfstatusfileindex.is_set
	|| cbfstatusfilecompletiontime.is_set
	|| cbfstatusfileentrystatus.is_set
	|| cbfstatusfilestate.is_set;
}

bool CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cbfdefinefileindex.yfilter)
	|| ydk::is_set(cbfstatusfileindex.yfilter)
	|| ydk::is_set(cbfstatusfilecompletiontime.yfilter)
	|| ydk::is_set(cbfstatusfileentrystatus.yfilter)
	|| ydk::is_set(cbfstatusfilestate.yfilter);
}

std::string CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbfStatusFileEntry" <<"[cbfDefineFileIndex='" <<cbfdefinefileindex <<"']" <<"[cbfStatusFileIndex='" <<cbfstatusfileindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BULK-FILE-MIB:CISCO-BULK-FILE-MIB/cbfStatusFileTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.yfilter)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfstatusfileindex.is_set || is_set(cbfstatusfileindex.yfilter)) leaf_name_data.push_back(cbfstatusfileindex.get_name_leafdata());
    if (cbfstatusfilecompletiontime.is_set || is_set(cbfstatusfilecompletiontime.yfilter)) leaf_name_data.push_back(cbfstatusfilecompletiontime.get_name_leafdata());
    if (cbfstatusfileentrystatus.is_set || is_set(cbfstatusfileentrystatus.yfilter)) leaf_name_data.push_back(cbfstatusfileentrystatus.get_name_leafdata());
    if (cbfstatusfilestate.is_set || is_set(cbfstatusfilestate.yfilter)) leaf_name_data.push_back(cbfstatusfilestate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cbfStatusFileState")
    {
        cbfstatusfilestate = value;
        cbfstatusfilestate.value_namespace = name_space;
        cbfstatusfilestate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileIndex")
    {
        cbfstatusfileindex.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileCompletionTime")
    {
        cbfstatusfilecompletiontime.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileEntryStatus")
    {
        cbfstatusfileentrystatus.yfilter = yfilter;
    }
    if(value_path == "cbfStatusFileState")
    {
        cbfstatusfilestate.yfilter = yfilter;
    }
}

bool CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbfDefineFileIndex" || name == "cbfStatusFileIndex" || name == "cbfStatusFileCompletionTime" || name == "cbfStatusFileEntryStatus" || name == "cbfStatusFileState")
        return true;
    return false;
}

const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilestorage::ephemeral {1, "ephemeral"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilestorage::volatile_ {2, "volatile"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilestorage::permanent {3, "permanent"};

const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefileformat::standardBER {1, "standardBER"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefileformat::bulkBinary {2, "bulkBinary"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefileformat::bulkASCII {3, "bulkASCII"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefileformat::variantBERWithCksum {4, "variantBERWithCksum"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefileformat::variantBinWithCksum {5, "variantBinWithCksum"};

const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilenow::notActive {1, "notActive"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilenow::ready {2, "ready"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilenow::create {3, "create"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilenow::running {4, "running"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilenow::forcedCreate {5, "forcedCreate"};

const Enum::YLeaf CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::Cbfdefineobjectclass::object {1, "object"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::Cbfdefineobjectclass::lexicalTable {2, "lexicalTable"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::Cbfdefineobjectclass::leastCpuTable {3, "leastCpuTable"};

const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::running {1, "running"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::ready {2, "ready"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::emptied {3, "emptied"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::noSpace {4, "noSpace"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::badName {5, "badName"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::writeErr {6, "writeErr"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::noMem {7, "noMem"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::buffErr {8, "buffErr"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate::aborted {9, "aborted"};


}
}

