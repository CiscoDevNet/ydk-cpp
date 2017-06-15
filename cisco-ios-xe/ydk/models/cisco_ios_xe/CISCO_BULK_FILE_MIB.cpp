
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BULK_FILE_MIB.hpp"

namespace ydk {
namespace CISCO_BULK_FILE_MIB {

CiscoBulkFileMib::CiscoBulkFileMib()
    :
    cbfdefine_(std::make_shared<CiscoBulkFileMib::Cbfdefine>())
	,cbfdefinefiletable_(std::make_shared<CiscoBulkFileMib::Cbfdefinefiletable>())
	,cbfdefineobjecttable_(std::make_shared<CiscoBulkFileMib::Cbfdefineobjecttable>())
	,cbfstatus_(std::make_shared<CiscoBulkFileMib::Cbfstatus>())
	,cbfstatusfiletable_(std::make_shared<CiscoBulkFileMib::Cbfstatusfiletable>())
{
    cbfdefine_->parent = this;

    cbfdefinefiletable_->parent = this;

    cbfdefineobjecttable_->parent = this;

    cbfstatus_->parent = this;

    cbfstatusfiletable_->parent = this;

    yang_name = "CISCO-BULK-FILE-MIB"; yang_parent_name = "CISCO-BULK-FILE-MIB";
}

CiscoBulkFileMib::~CiscoBulkFileMib()
{
}

bool CiscoBulkFileMib::has_data() const
{
    return (cbfdefine_ !=  nullptr && cbfdefine_->has_data())
	|| (cbfdefinefiletable_ !=  nullptr && cbfdefinefiletable_->has_data())
	|| (cbfdefineobjecttable_ !=  nullptr && cbfdefineobjecttable_->has_data())
	|| (cbfstatus_ !=  nullptr && cbfstatus_->has_data())
	|| (cbfstatusfiletable_ !=  nullptr && cbfstatusfiletable_->has_data());
}

bool CiscoBulkFileMib::has_operation() const
{
    return is_set(operation)
	|| (cbfdefine_ !=  nullptr && cbfdefine_->has_operation())
	|| (cbfdefinefiletable_ !=  nullptr && cbfdefinefiletable_->has_operation())
	|| (cbfdefineobjecttable_ !=  nullptr && cbfdefineobjecttable_->has_operation())
	|| (cbfstatus_ !=  nullptr && cbfstatus_->has_operation())
	|| (cbfstatusfiletable_ !=  nullptr && cbfstatusfiletable_->has_operation());
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
        if(cbfdefine_ == nullptr)
        {
            cbfdefine_ = std::make_shared<CiscoBulkFileMib::Cbfdefine>();
        }
        return cbfdefine_;
    }

    if(child_yang_name == "cbfDefineFileTable")
    {
        if(cbfdefinefiletable_ == nullptr)
        {
            cbfdefinefiletable_ = std::make_shared<CiscoBulkFileMib::Cbfdefinefiletable>();
        }
        return cbfdefinefiletable_;
    }

    if(child_yang_name == "cbfDefineObjectTable")
    {
        if(cbfdefineobjecttable_ == nullptr)
        {
            cbfdefineobjecttable_ = std::make_shared<CiscoBulkFileMib::Cbfdefineobjecttable>();
        }
        return cbfdefineobjecttable_;
    }

    if(child_yang_name == "cbfStatus")
    {
        if(cbfstatus_ == nullptr)
        {
            cbfstatus_ = std::make_shared<CiscoBulkFileMib::Cbfstatus>();
        }
        return cbfstatus_;
    }

    if(child_yang_name == "cbfStatusFileTable")
    {
        if(cbfstatusfiletable_ == nullptr)
        {
            cbfstatusfiletable_ = std::make_shared<CiscoBulkFileMib::Cbfstatusfiletable>();
        }
        return cbfstatusfiletable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbfdefine_ != nullptr)
    {
        children["cbfDefine"] = cbfdefine_;
    }

    if(cbfdefinefiletable_ != nullptr)
    {
        children["cbfDefineFileTable"] = cbfdefinefiletable_;
    }

    if(cbfdefineobjecttable_ != nullptr)
    {
        children["cbfDefineObjectTable"] = cbfdefineobjecttable_;
    }

    if(cbfstatus_ != nullptr)
    {
        children["cbfStatus"] = cbfstatus_;
    }

    if(cbfstatusfiletable_ != nullptr)
    {
        children["cbfStatusFileTable"] = cbfstatusfiletable_;
    }

    return children;
}

void CiscoBulkFileMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(cbfdefinefiles.operation)
	|| is_set(cbfdefinefilesrefused.operation)
	|| is_set(cbfdefinehighfiles.operation)
	|| is_set(cbfdefinehighobjects.operation)
	|| is_set(cbfdefinemaxfiles.operation)
	|| is_set(cbfdefinemaxobjects.operation)
	|| is_set(cbfdefineobjects.operation)
	|| is_set(cbfdefineobjectsrefused.operation);
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

    if (cbfdefinefiles.is_set || is_set(cbfdefinefiles.operation)) leaf_name_data.push_back(cbfdefinefiles.get_name_leafdata());
    if (cbfdefinefilesrefused.is_set || is_set(cbfdefinefilesrefused.operation)) leaf_name_data.push_back(cbfdefinefilesrefused.get_name_leafdata());
    if (cbfdefinehighfiles.is_set || is_set(cbfdefinehighfiles.operation)) leaf_name_data.push_back(cbfdefinehighfiles.get_name_leafdata());
    if (cbfdefinehighobjects.is_set || is_set(cbfdefinehighobjects.operation)) leaf_name_data.push_back(cbfdefinehighobjects.get_name_leafdata());
    if (cbfdefinemaxfiles.is_set || is_set(cbfdefinemaxfiles.operation)) leaf_name_data.push_back(cbfdefinemaxfiles.get_name_leafdata());
    if (cbfdefinemaxobjects.is_set || is_set(cbfdefinemaxobjects.operation)) leaf_name_data.push_back(cbfdefinemaxobjects.get_name_leafdata());
    if (cbfdefineobjects.is_set || is_set(cbfdefineobjects.operation)) leaf_name_data.push_back(cbfdefineobjects.get_name_leafdata());
    if (cbfdefineobjectsrefused.is_set || is_set(cbfdefineobjectsrefused.operation)) leaf_name_data.push_back(cbfdefineobjectsrefused.get_name_leafdata());


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

void CiscoBulkFileMib::Cbfdefine::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbfDefineFiles")
    {
        cbfdefinefiles = value;
    }
    if(value_path == "cbfDefineFilesRefused")
    {
        cbfdefinefilesrefused = value;
    }
    if(value_path == "cbfDefineHighFiles")
    {
        cbfdefinehighfiles = value;
    }
    if(value_path == "cbfDefineHighObjects")
    {
        cbfdefinehighobjects = value;
    }
    if(value_path == "cbfDefineMaxFiles")
    {
        cbfdefinemaxfiles = value;
    }
    if(value_path == "cbfDefineMaxObjects")
    {
        cbfdefinemaxobjects = value;
    }
    if(value_path == "cbfDefineObjects")
    {
        cbfdefineobjects = value;
    }
    if(value_path == "cbfDefineObjectsRefused")
    {
        cbfdefineobjectsrefused = value;
    }
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
    return is_set(operation)
	|| is_set(cbfstatusfiles.operation)
	|| is_set(cbfstatusfilesbumped.operation)
	|| is_set(cbfstatushighfiles.operation)
	|| is_set(cbfstatusmaxfiles.operation);
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

    if (cbfstatusfiles.is_set || is_set(cbfstatusfiles.operation)) leaf_name_data.push_back(cbfstatusfiles.get_name_leafdata());
    if (cbfstatusfilesbumped.is_set || is_set(cbfstatusfilesbumped.operation)) leaf_name_data.push_back(cbfstatusfilesbumped.get_name_leafdata());
    if (cbfstatushighfiles.is_set || is_set(cbfstatushighfiles.operation)) leaf_name_data.push_back(cbfstatushighfiles.get_name_leafdata());
    if (cbfstatusmaxfiles.is_set || is_set(cbfstatusmaxfiles.operation)) leaf_name_data.push_back(cbfstatusmaxfiles.get_name_leafdata());


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

void CiscoBulkFileMib::Cbfstatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbfStatusFiles")
    {
        cbfstatusfiles = value;
    }
    if(value_path == "cbfStatusFilesBumped")
    {
        cbfstatusfilesbumped = value;
    }
    if(value_path == "cbfStatusHighFiles")
    {
        cbfstatushighfiles = value;
    }
    if(value_path == "cbfStatusMaxFiles")
    {
        cbfstatusmaxfiles = value;
    }
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
    for (std::size_t index=0; index<cbfdefinefileentry_.size(); index++)
    {
        if(cbfdefinefileentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBulkFileMib::Cbfdefinefiletable::has_operation() const
{
    for (std::size_t index=0; index<cbfdefinefileentry_.size(); index++)
    {
        if(cbfdefinefileentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cbfdefinefileentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry>();
        c->parent = this;
        cbfdefinefileentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfdefinefiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbfdefinefileentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBulkFileMib::Cbfdefinefiletable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cbfdefinefileindex.operation)
	|| is_set(cbfdefinefileentrystatus.operation)
	|| is_set(cbfdefinefileformat.operation)
	|| is_set(cbfdefinefilename.operation)
	|| is_set(cbfdefinefilenotifyoncompletion.operation)
	|| is_set(cbfdefinefilenow.operation)
	|| is_set(cbfdefinefilestorage.operation);
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

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.operation)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfdefinefileentrystatus.is_set || is_set(cbfdefinefileentrystatus.operation)) leaf_name_data.push_back(cbfdefinefileentrystatus.get_name_leafdata());
    if (cbfdefinefileformat.is_set || is_set(cbfdefinefileformat.operation)) leaf_name_data.push_back(cbfdefinefileformat.get_name_leafdata());
    if (cbfdefinefilename.is_set || is_set(cbfdefinefilename.operation)) leaf_name_data.push_back(cbfdefinefilename.get_name_leafdata());
    if (cbfdefinefilenotifyoncompletion.is_set || is_set(cbfdefinefilenotifyoncompletion.operation)) leaf_name_data.push_back(cbfdefinefilenotifyoncompletion.get_name_leafdata());
    if (cbfdefinefilenow.is_set || is_set(cbfdefinefilenow.operation)) leaf_name_data.push_back(cbfdefinefilenow.get_name_leafdata());
    if (cbfdefinefilestorage.is_set || is_set(cbfdefinefilestorage.operation)) leaf_name_data.push_back(cbfdefinefilestorage.get_name_leafdata());


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

void CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex = value;
    }
    if(value_path == "cbfDefineFileEntryStatus")
    {
        cbfdefinefileentrystatus = value;
    }
    if(value_path == "cbfDefineFileFormat")
    {
        cbfdefinefileformat = value;
    }
    if(value_path == "cbfDefineFileName")
    {
        cbfdefinefilename = value;
    }
    if(value_path == "cbfDefineFileNotifyOnCompletion")
    {
        cbfdefinefilenotifyoncompletion = value;
    }
    if(value_path == "cbfDefineFileNow")
    {
        cbfdefinefilenow = value;
    }
    if(value_path == "cbfDefineFileStorage")
    {
        cbfdefinefilestorage = value;
    }
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
    for (std::size_t index=0; index<cbfdefineobjectentry_.size(); index++)
    {
        if(cbfdefineobjectentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBulkFileMib::Cbfdefineobjecttable::has_operation() const
{
    for (std::size_t index=0; index<cbfdefineobjectentry_.size(); index++)
    {
        if(cbfdefineobjectentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cbfdefineobjectentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry>();
        c->parent = this;
        cbfdefineobjectentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfdefineobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbfdefineobjectentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBulkFileMib::Cbfdefineobjecttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cbfdefinefileindex.operation)
	|| is_set(cbfdefineobjectindex.operation)
	|| is_set(cbfdefineobjectclass.operation)
	|| is_set(cbfdefineobjectentrystatus.operation)
	|| is_set(cbfdefineobjectid.operation)
	|| is_set(cbfdefineobjectlastpolledinst.operation)
	|| is_set(cbfdefineobjectnumentries.operation)
	|| is_set(cbfdefineobjecttableinstance.operation);
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

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.operation)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfdefineobjectindex.is_set || is_set(cbfdefineobjectindex.operation)) leaf_name_data.push_back(cbfdefineobjectindex.get_name_leafdata());
    if (cbfdefineobjectclass.is_set || is_set(cbfdefineobjectclass.operation)) leaf_name_data.push_back(cbfdefineobjectclass.get_name_leafdata());
    if (cbfdefineobjectentrystatus.is_set || is_set(cbfdefineobjectentrystatus.operation)) leaf_name_data.push_back(cbfdefineobjectentrystatus.get_name_leafdata());
    if (cbfdefineobjectid.is_set || is_set(cbfdefineobjectid.operation)) leaf_name_data.push_back(cbfdefineobjectid.get_name_leafdata());
    if (cbfdefineobjectlastpolledinst.is_set || is_set(cbfdefineobjectlastpolledinst.operation)) leaf_name_data.push_back(cbfdefineobjectlastpolledinst.get_name_leafdata());
    if (cbfdefineobjectnumentries.is_set || is_set(cbfdefineobjectnumentries.operation)) leaf_name_data.push_back(cbfdefineobjectnumentries.get_name_leafdata());
    if (cbfdefineobjecttableinstance.is_set || is_set(cbfdefineobjecttableinstance.operation)) leaf_name_data.push_back(cbfdefineobjecttableinstance.get_name_leafdata());


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

void CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex = value;
    }
    if(value_path == "cbfDefineObjectIndex")
    {
        cbfdefineobjectindex = value;
    }
    if(value_path == "cbfDefineObjectClass")
    {
        cbfdefineobjectclass = value;
    }
    if(value_path == "cbfDefineObjectEntryStatus")
    {
        cbfdefineobjectentrystatus = value;
    }
    if(value_path == "cbfDefineObjectID")
    {
        cbfdefineobjectid = value;
    }
    if(value_path == "cbfDefineObjectLastPolledInst")
    {
        cbfdefineobjectlastpolledinst = value;
    }
    if(value_path == "cbfDefineObjectNumEntries")
    {
        cbfdefineobjectnumentries = value;
    }
    if(value_path == "cbfDefineObjectTableInstance")
    {
        cbfdefineobjecttableinstance = value;
    }
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
    for (std::size_t index=0; index<cbfstatusfileentry_.size(); index++)
    {
        if(cbfstatusfileentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBulkFileMib::Cbfstatusfiletable::has_operation() const
{
    for (std::size_t index=0; index<cbfstatusfileentry_.size(); index++)
    {
        if(cbfstatusfileentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cbfstatusfileentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry>();
        c->parent = this;
        cbfstatusfileentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBulkFileMib::Cbfstatusfiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbfstatusfileentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBulkFileMib::Cbfstatusfiletable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cbfdefinefileindex.operation)
	|| is_set(cbfstatusfileindex.operation)
	|| is_set(cbfstatusfilecompletiontime.operation)
	|| is_set(cbfstatusfileentrystatus.operation)
	|| is_set(cbfstatusfilestate.operation);
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

    if (cbfdefinefileindex.is_set || is_set(cbfdefinefileindex.operation)) leaf_name_data.push_back(cbfdefinefileindex.get_name_leafdata());
    if (cbfstatusfileindex.is_set || is_set(cbfstatusfileindex.operation)) leaf_name_data.push_back(cbfstatusfileindex.get_name_leafdata());
    if (cbfstatusfilecompletiontime.is_set || is_set(cbfstatusfilecompletiontime.operation)) leaf_name_data.push_back(cbfstatusfilecompletiontime.get_name_leafdata());
    if (cbfstatusfileentrystatus.is_set || is_set(cbfstatusfileentrystatus.operation)) leaf_name_data.push_back(cbfstatusfileentrystatus.get_name_leafdata());
    if (cbfstatusfilestate.is_set || is_set(cbfstatusfilestate.operation)) leaf_name_data.push_back(cbfstatusfilestate.get_name_leafdata());


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

void CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbfDefineFileIndex")
    {
        cbfdefinefileindex = value;
    }
    if(value_path == "cbfStatusFileIndex")
    {
        cbfstatusfileindex = value;
    }
    if(value_path == "cbfStatusFileCompletionTime")
    {
        cbfstatusfilecompletiontime = value;
    }
    if(value_path == "cbfStatusFileEntryStatus")
    {
        cbfstatusfileentrystatus = value;
    }
    if(value_path == "cbfStatusFileState")
    {
        cbfstatusfilestate = value;
    }
}

const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilestorageEnum::ephemeral {1, "ephemeral"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilestorageEnum::volatile_ {2, "volatile"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilestorageEnum::permanent {3, "permanent"};

const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefileformatEnum::standardBER {1, "standardBER"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefileformatEnum::bulkBinary {2, "bulkBinary"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefileformatEnum::bulkASCII {3, "bulkASCII"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefileformatEnum::variantBERWithCksum {4, "variantBERWithCksum"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefileformatEnum::variantBinWithCksum {5, "variantBinWithCksum"};

const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilenowEnum::notActive {1, "notActive"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilenowEnum::ready {2, "ready"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilenowEnum::create {3, "create"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilenowEnum::running {4, "running"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefinefiletable::Cbfdefinefileentry::CbfdefinefilenowEnum::forcedCreate {5, "forcedCreate"};

const Enum::YLeaf CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::CbfdefineobjectclassEnum::object {1, "object"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::CbfdefineobjectclassEnum::lexicalTable {2, "lexicalTable"};
const Enum::YLeaf CiscoBulkFileMib::Cbfdefineobjecttable::Cbfdefineobjectentry::CbfdefineobjectclassEnum::leastCpuTable {3, "leastCpuTable"};

const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::running {1, "running"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::ready {2, "ready"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::emptied {3, "emptied"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::noSpace {4, "noSpace"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::badName {5, "badName"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::writeErr {6, "writeErr"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::noMem {7, "noMem"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::buffErr {8, "buffErr"};
const Enum::YLeaf CiscoBulkFileMib::Cbfstatusfiletable::Cbfstatusfileentry::CbfstatusfilestateEnum::aborted {9, "aborted"};


}
}

