
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DATA_COLLECTION_MIB.hpp"

namespace ydk {
namespace CISCO_DATA_COLLECTION_MIB {

CiscoDataCollectionMib::CiscoDataCollectionMib()
    :
    cdcdgbaseobjecttable_(std::make_shared<CiscoDataCollectionMib::Cdcdgbaseobjecttable>())
	,cdcdginstancetable_(std::make_shared<CiscoDataCollectionMib::Cdcdginstancetable>())
	,cdcdgtable_(std::make_shared<CiscoDataCollectionMib::Cdcdgtable>())
	,cdcfilexferconftable_(std::make_shared<CiscoDataCollectionMib::Cdcfilexferconftable>())
	,cdcvfile_(std::make_shared<CiscoDataCollectionMib::Cdcvfile>())
	,cdcvfilemgmttable_(std::make_shared<CiscoDataCollectionMib::Cdcvfilemgmttable>())
	,cdcvfiletable_(std::make_shared<CiscoDataCollectionMib::Cdcvfiletable>())
{
    cdcdgbaseobjecttable_->parent = this;

    cdcdginstancetable_->parent = this;

    cdcdgtable_->parent = this;

    cdcfilexferconftable_->parent = this;

    cdcvfile_->parent = this;

    cdcvfilemgmttable_->parent = this;

    cdcvfiletable_->parent = this;

    yang_name = "CISCO-DATA-COLLECTION-MIB"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::~CiscoDataCollectionMib()
{
}

bool CiscoDataCollectionMib::has_data() const
{
    return (cdcdgbaseobjecttable_ !=  nullptr && cdcdgbaseobjecttable_->has_data())
	|| (cdcdginstancetable_ !=  nullptr && cdcdginstancetable_->has_data())
	|| (cdcdgtable_ !=  nullptr && cdcdgtable_->has_data())
	|| (cdcfilexferconftable_ !=  nullptr && cdcfilexferconftable_->has_data())
	|| (cdcvfile_ !=  nullptr && cdcvfile_->has_data())
	|| (cdcvfilemgmttable_ !=  nullptr && cdcvfilemgmttable_->has_data())
	|| (cdcvfiletable_ !=  nullptr && cdcvfiletable_->has_data());
}

bool CiscoDataCollectionMib::has_operation() const
{
    return is_set(operation)
	|| (cdcdgbaseobjecttable_ !=  nullptr && cdcdgbaseobjecttable_->has_operation())
	|| (cdcdginstancetable_ !=  nullptr && cdcdginstancetable_->has_operation())
	|| (cdcdgtable_ !=  nullptr && cdcdgtable_->has_operation())
	|| (cdcfilexferconftable_ !=  nullptr && cdcfilexferconftable_->has_operation())
	|| (cdcvfile_ !=  nullptr && cdcvfile_->has_operation())
	|| (cdcvfilemgmttable_ !=  nullptr && cdcvfilemgmttable_->has_operation())
	|| (cdcvfiletable_ !=  nullptr && cdcvfiletable_->has_operation());
}

std::string CiscoDataCollectionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoDataCollectionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGBaseObjectTable")
    {
        if(cdcdgbaseobjecttable_ == nullptr)
        {
            cdcdgbaseobjecttable_ = std::make_shared<CiscoDataCollectionMib::Cdcdgbaseobjecttable>();
        }
        return cdcdgbaseobjecttable_;
    }

    if(child_yang_name == "cdcDGInstanceTable")
    {
        if(cdcdginstancetable_ == nullptr)
        {
            cdcdginstancetable_ = std::make_shared<CiscoDataCollectionMib::Cdcdginstancetable>();
        }
        return cdcdginstancetable_;
    }

    if(child_yang_name == "cdcDGTable")
    {
        if(cdcdgtable_ == nullptr)
        {
            cdcdgtable_ = std::make_shared<CiscoDataCollectionMib::Cdcdgtable>();
        }
        return cdcdgtable_;
    }

    if(child_yang_name == "cdcFileXferConfTable")
    {
        if(cdcfilexferconftable_ == nullptr)
        {
            cdcfilexferconftable_ = std::make_shared<CiscoDataCollectionMib::Cdcfilexferconftable>();
        }
        return cdcfilexferconftable_;
    }

    if(child_yang_name == "cdcVFile")
    {
        if(cdcvfile_ == nullptr)
        {
            cdcvfile_ = std::make_shared<CiscoDataCollectionMib::Cdcvfile>();
        }
        return cdcvfile_;
    }

    if(child_yang_name == "cdcVFileMgmtTable")
    {
        if(cdcvfilemgmttable_ == nullptr)
        {
            cdcvfilemgmttable_ = std::make_shared<CiscoDataCollectionMib::Cdcvfilemgmttable>();
        }
        return cdcvfilemgmttable_;
    }

    if(child_yang_name == "cdcVFileTable")
    {
        if(cdcvfiletable_ == nullptr)
        {
            cdcvfiletable_ = std::make_shared<CiscoDataCollectionMib::Cdcvfiletable>();
        }
        return cdcvfiletable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cdcdgbaseobjecttable_ != nullptr)
    {
        children["cdcDGBaseObjectTable"] = cdcdgbaseobjecttable_;
    }

    if(cdcdginstancetable_ != nullptr)
    {
        children["cdcDGInstanceTable"] = cdcdginstancetable_;
    }

    if(cdcdgtable_ != nullptr)
    {
        children["cdcDGTable"] = cdcdgtable_;
    }

    if(cdcfilexferconftable_ != nullptr)
    {
        children["cdcFileXferConfTable"] = cdcfilexferconftable_;
    }

    if(cdcvfile_ != nullptr)
    {
        children["cdcVFile"] = cdcvfile_;
    }

    if(cdcvfilemgmttable_ != nullptr)
    {
        children["cdcVFileMgmtTable"] = cdcvfilemgmttable_;
    }

    if(cdcvfiletable_ != nullptr)
    {
        children["cdcVFileTable"] = cdcvfiletable_;
    }

    return children;
}

void CiscoDataCollectionMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoDataCollectionMib::clone_ptr() const
{
    return std::make_shared<CiscoDataCollectionMib>();
}

std::string CiscoDataCollectionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoDataCollectionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoDataCollectionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoDataCollectionMib::Cdcvfile::Cdcvfile()
    :
    cdcvfilemaxsizehitslimit{YType::uint32, "cdcVFileMaxSizeHitsLimit"},
    cdcvfilepersistentstorage{YType::boolean, "cdcVFilePersistentStorage"}
{
    yang_name = "cdcVFile"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::Cdcvfile::~Cdcvfile()
{
}

bool CiscoDataCollectionMib::Cdcvfile::has_data() const
{
    return cdcvfilemaxsizehitslimit.is_set
	|| cdcvfilepersistentstorage.is_set;
}

bool CiscoDataCollectionMib::Cdcvfile::has_operation() const
{
    return is_set(operation)
	|| is_set(cdcvfilemaxsizehitslimit.operation)
	|| is_set(cdcvfilepersistentstorage.operation);
}

std::string CiscoDataCollectionMib::Cdcvfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFile";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcvfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfilemaxsizehitslimit.is_set || is_set(cdcvfilemaxsizehitslimit.operation)) leaf_name_data.push_back(cdcvfilemaxsizehitslimit.get_name_leafdata());
    if (cdcvfilepersistentstorage.is_set || is_set(cdcvfilepersistentstorage.operation)) leaf_name_data.push_back(cdcvfilepersistentstorage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcvfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcvfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDataCollectionMib::Cdcvfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdcVFileMaxSizeHitsLimit")
    {
        cdcvfilemaxsizehitslimit = value;
    }
    if(value_path == "cdcVFilePersistentStorage")
    {
        cdcvfilepersistentstorage = value;
    }
}

CiscoDataCollectionMib::Cdcvfiletable::Cdcvfiletable()
{
    yang_name = "cdcVFileTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::Cdcvfiletable::~Cdcvfiletable()
{
}

bool CiscoDataCollectionMib::Cdcvfiletable::has_data() const
{
    for (std::size_t index=0; index<cdcvfileentry_.size(); index++)
    {
        if(cdcvfileentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDataCollectionMib::Cdcvfiletable::has_operation() const
{
    for (std::size_t index=0; index<cdcvfileentry_.size(); index++)
    {
        if(cdcvfileentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDataCollectionMib::Cdcvfiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileTable";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcvfiletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcvfiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFileEntry")
    {
        for(auto const & c : cdcvfileentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry>();
        c->parent = this;
        cdcvfileentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcvfiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdcvfileentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDataCollectionMib::Cdcvfiletable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::Cdcvfileentry()
    :
    cdcvfileindex{YType::uint32, "cdcVFileIndex"},
    cdcvfileadminstatus{YType::enumeration, "cdcVFileAdminStatus"},
    cdcvfilecollectionerrorenable{YType::boolean, "cdcVFileCollectionErrorEnable"},
    cdcvfilecollectionperiod{YType::uint32, "cdcVFileCollectionPeriod"},
    cdcvfilecollectmode{YType::enumeration, "cdcVFileCollectMode"},
    cdcvfilecommand{YType::enumeration, "cdcVFileCommand"},
    cdcvfilecurrentsize{YType::uint32, "cdcVFileCurrentSize"},
    cdcvfiledescription{YType::str, "cdcVFileDescription"},
    cdcvfileerrorcode{YType::enumeration, "cdcVFileErrorCode"},
    cdcvfileformat{YType::enumeration, "cdcVFileFormat"},
    cdcvfilemaxsize{YType::uint32, "cdcVFileMaxSize"},
    cdcvfilename{YType::str, "cdcVFileName"},
    cdcvfileoperstatus{YType::enumeration, "cdcVFileOperStatus"},
    cdcvfileretentionperiod{YType::uint32, "cdcVFileRetentionPeriod"},
    cdcvfilerowstatus{YType::enumeration, "cdcVFileRowStatus"}
{
    yang_name = "cdcVFileEntry"; yang_parent_name = "cdcVFileTable";
}

CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::~Cdcvfileentry()
{
}

bool CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::has_data() const
{
    return cdcvfileindex.is_set
	|| cdcvfileadminstatus.is_set
	|| cdcvfilecollectionerrorenable.is_set
	|| cdcvfilecollectionperiod.is_set
	|| cdcvfilecollectmode.is_set
	|| cdcvfilecommand.is_set
	|| cdcvfilecurrentsize.is_set
	|| cdcvfiledescription.is_set
	|| cdcvfileerrorcode.is_set
	|| cdcvfileformat.is_set
	|| cdcvfilemaxsize.is_set
	|| cdcvfilename.is_set
	|| cdcvfileoperstatus.is_set
	|| cdcvfileretentionperiod.is_set
	|| cdcvfilerowstatus.is_set;
}

bool CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdcvfileindex.operation)
	|| is_set(cdcvfileadminstatus.operation)
	|| is_set(cdcvfilecollectionerrorenable.operation)
	|| is_set(cdcvfilecollectionperiod.operation)
	|| is_set(cdcvfilecollectmode.operation)
	|| is_set(cdcvfilecommand.operation)
	|| is_set(cdcvfilecurrentsize.operation)
	|| is_set(cdcvfiledescription.operation)
	|| is_set(cdcvfileerrorcode.operation)
	|| is_set(cdcvfileformat.operation)
	|| is_set(cdcvfilemaxsize.operation)
	|| is_set(cdcvfilename.operation)
	|| is_set(cdcvfileoperstatus.operation)
	|| is_set(cdcvfileretentionperiod.operation)
	|| is_set(cdcvfilerowstatus.operation);
}

std::string CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileEntry" <<"[cdcVFileIndex='" <<cdcvfileindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcVFileTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfileindex.is_set || is_set(cdcvfileindex.operation)) leaf_name_data.push_back(cdcvfileindex.get_name_leafdata());
    if (cdcvfileadminstatus.is_set || is_set(cdcvfileadminstatus.operation)) leaf_name_data.push_back(cdcvfileadminstatus.get_name_leafdata());
    if (cdcvfilecollectionerrorenable.is_set || is_set(cdcvfilecollectionerrorenable.operation)) leaf_name_data.push_back(cdcvfilecollectionerrorenable.get_name_leafdata());
    if (cdcvfilecollectionperiod.is_set || is_set(cdcvfilecollectionperiod.operation)) leaf_name_data.push_back(cdcvfilecollectionperiod.get_name_leafdata());
    if (cdcvfilecollectmode.is_set || is_set(cdcvfilecollectmode.operation)) leaf_name_data.push_back(cdcvfilecollectmode.get_name_leafdata());
    if (cdcvfilecommand.is_set || is_set(cdcvfilecommand.operation)) leaf_name_data.push_back(cdcvfilecommand.get_name_leafdata());
    if (cdcvfilecurrentsize.is_set || is_set(cdcvfilecurrentsize.operation)) leaf_name_data.push_back(cdcvfilecurrentsize.get_name_leafdata());
    if (cdcvfiledescription.is_set || is_set(cdcvfiledescription.operation)) leaf_name_data.push_back(cdcvfiledescription.get_name_leafdata());
    if (cdcvfileerrorcode.is_set || is_set(cdcvfileerrorcode.operation)) leaf_name_data.push_back(cdcvfileerrorcode.get_name_leafdata());
    if (cdcvfileformat.is_set || is_set(cdcvfileformat.operation)) leaf_name_data.push_back(cdcvfileformat.get_name_leafdata());
    if (cdcvfilemaxsize.is_set || is_set(cdcvfilemaxsize.operation)) leaf_name_data.push_back(cdcvfilemaxsize.get_name_leafdata());
    if (cdcvfilename.is_set || is_set(cdcvfilename.operation)) leaf_name_data.push_back(cdcvfilename.get_name_leafdata());
    if (cdcvfileoperstatus.is_set || is_set(cdcvfileoperstatus.operation)) leaf_name_data.push_back(cdcvfileoperstatus.get_name_leafdata());
    if (cdcvfileretentionperiod.is_set || is_set(cdcvfileretentionperiod.operation)) leaf_name_data.push_back(cdcvfileretentionperiod.get_name_leafdata());
    if (cdcvfilerowstatus.is_set || is_set(cdcvfilerowstatus.operation)) leaf_name_data.push_back(cdcvfilerowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex = value;
    }
    if(value_path == "cdcVFileAdminStatus")
    {
        cdcvfileadminstatus = value;
    }
    if(value_path == "cdcVFileCollectionErrorEnable")
    {
        cdcvfilecollectionerrorenable = value;
    }
    if(value_path == "cdcVFileCollectionPeriod")
    {
        cdcvfilecollectionperiod = value;
    }
    if(value_path == "cdcVFileCollectMode")
    {
        cdcvfilecollectmode = value;
    }
    if(value_path == "cdcVFileCommand")
    {
        cdcvfilecommand = value;
    }
    if(value_path == "cdcVFileCurrentSize")
    {
        cdcvfilecurrentsize = value;
    }
    if(value_path == "cdcVFileDescription")
    {
        cdcvfiledescription = value;
    }
    if(value_path == "cdcVFileErrorCode")
    {
        cdcvfileerrorcode = value;
    }
    if(value_path == "cdcVFileFormat")
    {
        cdcvfileformat = value;
    }
    if(value_path == "cdcVFileMaxSize")
    {
        cdcvfilemaxsize = value;
    }
    if(value_path == "cdcVFileName")
    {
        cdcvfilename = value;
    }
    if(value_path == "cdcVFileOperStatus")
    {
        cdcvfileoperstatus = value;
    }
    if(value_path == "cdcVFileRetentionPeriod")
    {
        cdcvfileretentionperiod = value;
    }
    if(value_path == "cdcVFileRowStatus")
    {
        cdcvfilerowstatus = value;
    }
}

CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmttable()
{
    yang_name = "cdcVFileMgmtTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::Cdcvfilemgmttable::~Cdcvfilemgmttable()
{
}

bool CiscoDataCollectionMib::Cdcvfilemgmttable::has_data() const
{
    for (std::size_t index=0; index<cdcvfilemgmtentry_.size(); index++)
    {
        if(cdcvfilemgmtentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDataCollectionMib::Cdcvfilemgmttable::has_operation() const
{
    for (std::size_t index=0; index<cdcvfilemgmtentry_.size(); index++)
    {
        if(cdcvfilemgmtentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDataCollectionMib::Cdcvfilemgmttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileMgmtTable";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcvfilemgmttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcvfilemgmttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFileMgmtEntry")
    {
        for(auto const & c : cdcvfilemgmtentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry>();
        c->parent = this;
        cdcvfilemgmtentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcvfilemgmttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdcvfilemgmtentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDataCollectionMib::Cdcvfilemgmttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::Cdcvfilemgmtentry()
    :
    cdcvfileindex{YType::str, "cdcVFileIndex"},
    cdcvfilemgmtindex{YType::uint32, "cdcVFileMgmtIndex"},
    cdcvfilemgmtcommand{YType::enumeration, "cdcVFileMgmtCommand"},
    cdcvfilemgmtlastxferstatus{YType::enumeration, "cdcVFileMgmtLastXferStatus"},
    cdcvfilemgmtlastxferurl{YType::str, "cdcVFileMgmtLastXferURL"},
    cdcvfilemgmtname{YType::str, "cdcVFileMgmtName"},
    cdcvfilemgmttimestamp{YType::str, "cdcVFileMgmtTimestamp"},
    cdcvfilemgmttimetolive{YType::uint32, "cdcVFileMgmtTimeToLive"},
    cdcvfilemgmtxferurl{YType::str, "cdcVFileMgmtXferURL"}
{
    yang_name = "cdcVFileMgmtEntry"; yang_parent_name = "cdcVFileMgmtTable";
}

CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::~Cdcvfilemgmtentry()
{
}

bool CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::has_data() const
{
    return cdcvfileindex.is_set
	|| cdcvfilemgmtindex.is_set
	|| cdcvfilemgmtcommand.is_set
	|| cdcvfilemgmtlastxferstatus.is_set
	|| cdcvfilemgmtlastxferurl.is_set
	|| cdcvfilemgmtname.is_set
	|| cdcvfilemgmttimestamp.is_set
	|| cdcvfilemgmttimetolive.is_set
	|| cdcvfilemgmtxferurl.is_set;
}

bool CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdcvfileindex.operation)
	|| is_set(cdcvfilemgmtindex.operation)
	|| is_set(cdcvfilemgmtcommand.operation)
	|| is_set(cdcvfilemgmtlastxferstatus.operation)
	|| is_set(cdcvfilemgmtlastxferurl.operation)
	|| is_set(cdcvfilemgmtname.operation)
	|| is_set(cdcvfilemgmttimestamp.operation)
	|| is_set(cdcvfilemgmttimetolive.operation)
	|| is_set(cdcvfilemgmtxferurl.operation);
}

std::string CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileMgmtEntry" <<"[cdcVFileIndex='" <<cdcvfileindex <<"']" <<"[cdcVFileMgmtIndex='" <<cdcvfilemgmtindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcVFileMgmtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfileindex.is_set || is_set(cdcvfileindex.operation)) leaf_name_data.push_back(cdcvfileindex.get_name_leafdata());
    if (cdcvfilemgmtindex.is_set || is_set(cdcvfilemgmtindex.operation)) leaf_name_data.push_back(cdcvfilemgmtindex.get_name_leafdata());
    if (cdcvfilemgmtcommand.is_set || is_set(cdcvfilemgmtcommand.operation)) leaf_name_data.push_back(cdcvfilemgmtcommand.get_name_leafdata());
    if (cdcvfilemgmtlastxferstatus.is_set || is_set(cdcvfilemgmtlastxferstatus.operation)) leaf_name_data.push_back(cdcvfilemgmtlastxferstatus.get_name_leafdata());
    if (cdcvfilemgmtlastxferurl.is_set || is_set(cdcvfilemgmtlastxferurl.operation)) leaf_name_data.push_back(cdcvfilemgmtlastxferurl.get_name_leafdata());
    if (cdcvfilemgmtname.is_set || is_set(cdcvfilemgmtname.operation)) leaf_name_data.push_back(cdcvfilemgmtname.get_name_leafdata());
    if (cdcvfilemgmttimestamp.is_set || is_set(cdcvfilemgmttimestamp.operation)) leaf_name_data.push_back(cdcvfilemgmttimestamp.get_name_leafdata());
    if (cdcvfilemgmttimetolive.is_set || is_set(cdcvfilemgmttimetolive.operation)) leaf_name_data.push_back(cdcvfilemgmttimetolive.get_name_leafdata());
    if (cdcvfilemgmtxferurl.is_set || is_set(cdcvfilemgmtxferurl.operation)) leaf_name_data.push_back(cdcvfilemgmtxferurl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex = value;
    }
    if(value_path == "cdcVFileMgmtIndex")
    {
        cdcvfilemgmtindex = value;
    }
    if(value_path == "cdcVFileMgmtCommand")
    {
        cdcvfilemgmtcommand = value;
    }
    if(value_path == "cdcVFileMgmtLastXferStatus")
    {
        cdcvfilemgmtlastxferstatus = value;
    }
    if(value_path == "cdcVFileMgmtLastXferURL")
    {
        cdcvfilemgmtlastxferurl = value;
    }
    if(value_path == "cdcVFileMgmtName")
    {
        cdcvfilemgmtname = value;
    }
    if(value_path == "cdcVFileMgmtTimestamp")
    {
        cdcvfilemgmttimestamp = value;
    }
    if(value_path == "cdcVFileMgmtTimeToLive")
    {
        cdcvfilemgmttimetolive = value;
    }
    if(value_path == "cdcVFileMgmtXferURL")
    {
        cdcvfilemgmtxferurl = value;
    }
}

CiscoDataCollectionMib::Cdcdgtable::Cdcdgtable()
{
    yang_name = "cdcDGTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::Cdcdgtable::~Cdcdgtable()
{
}

bool CiscoDataCollectionMib::Cdcdgtable::has_data() const
{
    for (std::size_t index=0; index<cdcdgentry_.size(); index++)
    {
        if(cdcdgentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDataCollectionMib::Cdcdgtable::has_operation() const
{
    for (std::size_t index=0; index<cdcdgentry_.size(); index++)
    {
        if(cdcdgentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDataCollectionMib::Cdcdgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGTable";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcdgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcdgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGEntry")
    {
        for(auto const & c : cdcdgentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry>();
        c->parent = this;
        cdcdgentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcdgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdcdgentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDataCollectionMib::Cdcdgtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::Cdcdgentry()
    :
    cdcdgindex{YType::uint32, "cdcDGIndex"},
    cdcdgcomment{YType::str, "cdcDGComment"},
    cdcdgcontextname{YType::str, "cdcDGContextName"},
    cdcdginstgrpindex{YType::uint32, "cdcDGInstGrpIndex"},
    cdcdgobject{YType::str, "cdcDGObject"},
    cdcdgobjectgrpindex{YType::uint32, "cdcDGObjectGrpIndex"},
    cdcdgpollperiod{YType::uint32, "cdcDGPollPeriod"},
    cdcdgrowstatus{YType::enumeration, "cdcDGRowStatus"},
    cdcdgtargettag{YType::str, "cdcDGTargetTag"},
    cdcdgtype{YType::enumeration, "cdcDGType"},
    cdcdgvfileindex{YType::uint32, "cdcDGVFileIndex"}
{
    yang_name = "cdcDGEntry"; yang_parent_name = "cdcDGTable";
}

CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::~Cdcdgentry()
{
}

bool CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::has_data() const
{
    return cdcdgindex.is_set
	|| cdcdgcomment.is_set
	|| cdcdgcontextname.is_set
	|| cdcdginstgrpindex.is_set
	|| cdcdgobject.is_set
	|| cdcdgobjectgrpindex.is_set
	|| cdcdgpollperiod.is_set
	|| cdcdgrowstatus.is_set
	|| cdcdgtargettag.is_set
	|| cdcdgtype.is_set
	|| cdcdgvfileindex.is_set;
}

bool CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdcdgindex.operation)
	|| is_set(cdcdgcomment.operation)
	|| is_set(cdcdgcontextname.operation)
	|| is_set(cdcdginstgrpindex.operation)
	|| is_set(cdcdgobject.operation)
	|| is_set(cdcdgobjectgrpindex.operation)
	|| is_set(cdcdgpollperiod.operation)
	|| is_set(cdcdgrowstatus.operation)
	|| is_set(cdcdgtargettag.operation)
	|| is_set(cdcdgtype.operation)
	|| is_set(cdcdgvfileindex.operation);
}

std::string CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGEntry" <<"[cdcDGIndex='" <<cdcdgindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcdgindex.is_set || is_set(cdcdgindex.operation)) leaf_name_data.push_back(cdcdgindex.get_name_leafdata());
    if (cdcdgcomment.is_set || is_set(cdcdgcomment.operation)) leaf_name_data.push_back(cdcdgcomment.get_name_leafdata());
    if (cdcdgcontextname.is_set || is_set(cdcdgcontextname.operation)) leaf_name_data.push_back(cdcdgcontextname.get_name_leafdata());
    if (cdcdginstgrpindex.is_set || is_set(cdcdginstgrpindex.operation)) leaf_name_data.push_back(cdcdginstgrpindex.get_name_leafdata());
    if (cdcdgobject.is_set || is_set(cdcdgobject.operation)) leaf_name_data.push_back(cdcdgobject.get_name_leafdata());
    if (cdcdgobjectgrpindex.is_set || is_set(cdcdgobjectgrpindex.operation)) leaf_name_data.push_back(cdcdgobjectgrpindex.get_name_leafdata());
    if (cdcdgpollperiod.is_set || is_set(cdcdgpollperiod.operation)) leaf_name_data.push_back(cdcdgpollperiod.get_name_leafdata());
    if (cdcdgrowstatus.is_set || is_set(cdcdgrowstatus.operation)) leaf_name_data.push_back(cdcdgrowstatus.get_name_leafdata());
    if (cdcdgtargettag.is_set || is_set(cdcdgtargettag.operation)) leaf_name_data.push_back(cdcdgtargettag.get_name_leafdata());
    if (cdcdgtype.is_set || is_set(cdcdgtype.operation)) leaf_name_data.push_back(cdcdgtype.get_name_leafdata());
    if (cdcdgvfileindex.is_set || is_set(cdcdgvfileindex.operation)) leaf_name_data.push_back(cdcdgvfileindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdcDGIndex")
    {
        cdcdgindex = value;
    }
    if(value_path == "cdcDGComment")
    {
        cdcdgcomment = value;
    }
    if(value_path == "cdcDGContextName")
    {
        cdcdgcontextname = value;
    }
    if(value_path == "cdcDGInstGrpIndex")
    {
        cdcdginstgrpindex = value;
    }
    if(value_path == "cdcDGObject")
    {
        cdcdgobject = value;
    }
    if(value_path == "cdcDGObjectGrpIndex")
    {
        cdcdgobjectgrpindex = value;
    }
    if(value_path == "cdcDGPollPeriod")
    {
        cdcdgpollperiod = value;
    }
    if(value_path == "cdcDGRowStatus")
    {
        cdcdgrowstatus = value;
    }
    if(value_path == "cdcDGTargetTag")
    {
        cdcdgtargettag = value;
    }
    if(value_path == "cdcDGType")
    {
        cdcdgtype = value;
    }
    if(value_path == "cdcDGVFileIndex")
    {
        cdcdgvfileindex = value;
    }
}

CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjecttable()
{
    yang_name = "cdcDGBaseObjectTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::Cdcdgbaseobjecttable::~Cdcdgbaseobjecttable()
{
}

bool CiscoDataCollectionMib::Cdcdgbaseobjecttable::has_data() const
{
    for (std::size_t index=0; index<cdcdgbaseobjectentry_.size(); index++)
    {
        if(cdcdgbaseobjectentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDataCollectionMib::Cdcdgbaseobjecttable::has_operation() const
{
    for (std::size_t index=0; index<cdcdgbaseobjectentry_.size(); index++)
    {
        if(cdcdgbaseobjectentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDataCollectionMib::Cdcdgbaseobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGBaseObjectTable";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcdgbaseobjecttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcdgbaseobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGBaseObjectEntry")
    {
        for(auto const & c : cdcdgbaseobjectentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry>();
        c->parent = this;
        cdcdgbaseobjectentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcdgbaseobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdcdgbaseobjectentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDataCollectionMib::Cdcdgbaseobjecttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::Cdcdgbaseobjectentry()
    :
    cdcdgbaseobjectgrpindex{YType::uint32, "cdcDGBaseObjectGrpIndex"},
    cdcdgbaseobjectindex{YType::uint32, "cdcDGBaseObjectIndex"},
    cdcdgbaseobjectlist{YType::str, "cdcDGBaseObjectList"},
    cdcdgbaseobjectrowstatus{YType::enumeration, "cdcDGBaseObjectRowStatus"},
    cdcdgbaseobjectsubtree{YType::str, "cdcDGBaseObjectSubtree"}
{
    yang_name = "cdcDGBaseObjectEntry"; yang_parent_name = "cdcDGBaseObjectTable";
}

CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::~Cdcdgbaseobjectentry()
{
}

bool CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::has_data() const
{
    return cdcdgbaseobjectgrpindex.is_set
	|| cdcdgbaseobjectindex.is_set
	|| cdcdgbaseobjectlist.is_set
	|| cdcdgbaseobjectrowstatus.is_set
	|| cdcdgbaseobjectsubtree.is_set;
}

bool CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdcdgbaseobjectgrpindex.operation)
	|| is_set(cdcdgbaseobjectindex.operation)
	|| is_set(cdcdgbaseobjectlist.operation)
	|| is_set(cdcdgbaseobjectrowstatus.operation)
	|| is_set(cdcdgbaseobjectsubtree.operation);
}

std::string CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGBaseObjectEntry" <<"[cdcDGBaseObjectGrpIndex='" <<cdcdgbaseobjectgrpindex <<"']" <<"[cdcDGBaseObjectIndex='" <<cdcdgbaseobjectindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGBaseObjectTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcdgbaseobjectgrpindex.is_set || is_set(cdcdgbaseobjectgrpindex.operation)) leaf_name_data.push_back(cdcdgbaseobjectgrpindex.get_name_leafdata());
    if (cdcdgbaseobjectindex.is_set || is_set(cdcdgbaseobjectindex.operation)) leaf_name_data.push_back(cdcdgbaseobjectindex.get_name_leafdata());
    if (cdcdgbaseobjectlist.is_set || is_set(cdcdgbaseobjectlist.operation)) leaf_name_data.push_back(cdcdgbaseobjectlist.get_name_leafdata());
    if (cdcdgbaseobjectrowstatus.is_set || is_set(cdcdgbaseobjectrowstatus.operation)) leaf_name_data.push_back(cdcdgbaseobjectrowstatus.get_name_leafdata());
    if (cdcdgbaseobjectsubtree.is_set || is_set(cdcdgbaseobjectsubtree.operation)) leaf_name_data.push_back(cdcdgbaseobjectsubtree.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDataCollectionMib::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdcDGBaseObjectGrpIndex")
    {
        cdcdgbaseobjectgrpindex = value;
    }
    if(value_path == "cdcDGBaseObjectIndex")
    {
        cdcdgbaseobjectindex = value;
    }
    if(value_path == "cdcDGBaseObjectList")
    {
        cdcdgbaseobjectlist = value;
    }
    if(value_path == "cdcDGBaseObjectRowStatus")
    {
        cdcdgbaseobjectrowstatus = value;
    }
    if(value_path == "cdcDGBaseObjectSubtree")
    {
        cdcdgbaseobjectsubtree = value;
    }
}

CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstancetable()
{
    yang_name = "cdcDGInstanceTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::Cdcdginstancetable::~Cdcdginstancetable()
{
}

bool CiscoDataCollectionMib::Cdcdginstancetable::has_data() const
{
    for (std::size_t index=0; index<cdcdginstanceentry_.size(); index++)
    {
        if(cdcdginstanceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDataCollectionMib::Cdcdginstancetable::has_operation() const
{
    for (std::size_t index=0; index<cdcdginstanceentry_.size(); index++)
    {
        if(cdcdginstanceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDataCollectionMib::Cdcdginstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGInstanceTable";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcdginstancetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcdginstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGInstanceEntry")
    {
        for(auto const & c : cdcdginstanceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry>();
        c->parent = this;
        cdcdginstanceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcdginstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdcdginstanceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDataCollectionMib::Cdcdginstancetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstanceentry()
    :
    cdcdginstancegrpindex{YType::uint32, "cdcDGInstanceGrpIndex"},
    cdcdginstanceindex{YType::uint32, "cdcDGInstanceIndex"},
    cdcdginstancenumrepititions{YType::uint32, "cdcDGInstanceNumRepititions"},
    cdcdginstanceoid{YType::str, "cdcDGInstanceOid"},
    cdcdginstanceoidend{YType::str, "cdcDGInstanceOidEnd"},
    cdcdginstanceotherptr{YType::str, "cdcDGInstanceOtherPtr"},
    cdcdginstancerowstatus{YType::enumeration, "cdcDGInstanceRowStatus"},
    cdcdginstancetype{YType::enumeration, "cdcDGInstanceType"}
{
    yang_name = "cdcDGInstanceEntry"; yang_parent_name = "cdcDGInstanceTable";
}

CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::~Cdcdginstanceentry()
{
}

bool CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::has_data() const
{
    return cdcdginstancegrpindex.is_set
	|| cdcdginstanceindex.is_set
	|| cdcdginstancenumrepititions.is_set
	|| cdcdginstanceoid.is_set
	|| cdcdginstanceoidend.is_set
	|| cdcdginstanceotherptr.is_set
	|| cdcdginstancerowstatus.is_set
	|| cdcdginstancetype.is_set;
}

bool CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdcdginstancegrpindex.operation)
	|| is_set(cdcdginstanceindex.operation)
	|| is_set(cdcdginstancenumrepititions.operation)
	|| is_set(cdcdginstanceoid.operation)
	|| is_set(cdcdginstanceoidend.operation)
	|| is_set(cdcdginstanceotherptr.operation)
	|| is_set(cdcdginstancerowstatus.operation)
	|| is_set(cdcdginstancetype.operation);
}

std::string CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGInstanceEntry" <<"[cdcDGInstanceGrpIndex='" <<cdcdginstancegrpindex <<"']" <<"[cdcDGInstanceIndex='" <<cdcdginstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGInstanceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcdginstancegrpindex.is_set || is_set(cdcdginstancegrpindex.operation)) leaf_name_data.push_back(cdcdginstancegrpindex.get_name_leafdata());
    if (cdcdginstanceindex.is_set || is_set(cdcdginstanceindex.operation)) leaf_name_data.push_back(cdcdginstanceindex.get_name_leafdata());
    if (cdcdginstancenumrepititions.is_set || is_set(cdcdginstancenumrepititions.operation)) leaf_name_data.push_back(cdcdginstancenumrepititions.get_name_leafdata());
    if (cdcdginstanceoid.is_set || is_set(cdcdginstanceoid.operation)) leaf_name_data.push_back(cdcdginstanceoid.get_name_leafdata());
    if (cdcdginstanceoidend.is_set || is_set(cdcdginstanceoidend.operation)) leaf_name_data.push_back(cdcdginstanceoidend.get_name_leafdata());
    if (cdcdginstanceotherptr.is_set || is_set(cdcdginstanceotherptr.operation)) leaf_name_data.push_back(cdcdginstanceotherptr.get_name_leafdata());
    if (cdcdginstancerowstatus.is_set || is_set(cdcdginstancerowstatus.operation)) leaf_name_data.push_back(cdcdginstancerowstatus.get_name_leafdata());
    if (cdcdginstancetype.is_set || is_set(cdcdginstancetype.operation)) leaf_name_data.push_back(cdcdginstancetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdcDGInstanceGrpIndex")
    {
        cdcdginstancegrpindex = value;
    }
    if(value_path == "cdcDGInstanceIndex")
    {
        cdcdginstanceindex = value;
    }
    if(value_path == "cdcDGInstanceNumRepititions")
    {
        cdcdginstancenumrepititions = value;
    }
    if(value_path == "cdcDGInstanceOid")
    {
        cdcdginstanceoid = value;
    }
    if(value_path == "cdcDGInstanceOidEnd")
    {
        cdcdginstanceoidend = value;
    }
    if(value_path == "cdcDGInstanceOtherPtr")
    {
        cdcdginstanceotherptr = value;
    }
    if(value_path == "cdcDGInstanceRowStatus")
    {
        cdcdginstancerowstatus = value;
    }
    if(value_path == "cdcDGInstanceType")
    {
        cdcdginstancetype = value;
    }
}

CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconftable()
{
    yang_name = "cdcFileXferConfTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB";
}

CiscoDataCollectionMib::Cdcfilexferconftable::~Cdcfilexferconftable()
{
}

bool CiscoDataCollectionMib::Cdcfilexferconftable::has_data() const
{
    for (std::size_t index=0; index<cdcfilexferconfentry_.size(); index++)
    {
        if(cdcfilexferconfentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDataCollectionMib::Cdcfilexferconftable::has_operation() const
{
    for (std::size_t index=0; index<cdcfilexferconfentry_.size(); index++)
    {
        if(cdcfilexferconfentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDataCollectionMib::Cdcfilexferconftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcFileXferConfTable";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcfilexferconftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcfilexferconftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcFileXferConfEntry")
    {
        for(auto const & c : cdcfilexferconfentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry>();
        c->parent = this;
        cdcfilexferconfentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcfilexferconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdcfilexferconfentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDataCollectionMib::Cdcfilexferconftable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::Cdcfilexferconfentry()
    :
    cdcvfileindex{YType::str, "cdcVFileIndex"},
    cdcfilexferconffailureenable{YType::boolean, "cdcFileXferConfFailureEnable"},
    cdcfilexferconfpriurl{YType::str, "cdcFileXferConfPriUrl"},
    cdcfilexferconfretrycount{YType::uint32, "cdcFileXferConfRetryCount"},
    cdcfilexferconfretryperiod{YType::uint32, "cdcFileXferConfRetryPeriod"},
    cdcfilexferconfsecurl{YType::str, "cdcFileXferConfSecUrl"},
    cdcfilexferconfsuccessenable{YType::boolean, "cdcFileXferConfSuccessEnable"}
{
    yang_name = "cdcFileXferConfEntry"; yang_parent_name = "cdcFileXferConfTable";
}

CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::~Cdcfilexferconfentry()
{
}

bool CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::has_data() const
{
    return cdcvfileindex.is_set
	|| cdcfilexferconffailureenable.is_set
	|| cdcfilexferconfpriurl.is_set
	|| cdcfilexferconfretrycount.is_set
	|| cdcfilexferconfretryperiod.is_set
	|| cdcfilexferconfsecurl.is_set
	|| cdcfilexferconfsuccessenable.is_set;
}

bool CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cdcvfileindex.operation)
	|| is_set(cdcfilexferconffailureenable.operation)
	|| is_set(cdcfilexferconfpriurl.operation)
	|| is_set(cdcfilexferconfretrycount.operation)
	|| is_set(cdcfilexferconfretryperiod.operation)
	|| is_set(cdcfilexferconfsecurl.operation)
	|| is_set(cdcfilexferconfsuccessenable.operation);
}

std::string CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcFileXferConfEntry" <<"[cdcVFileIndex='" <<cdcvfileindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcFileXferConfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfileindex.is_set || is_set(cdcvfileindex.operation)) leaf_name_data.push_back(cdcvfileindex.get_name_leafdata());
    if (cdcfilexferconffailureenable.is_set || is_set(cdcfilexferconffailureenable.operation)) leaf_name_data.push_back(cdcfilexferconffailureenable.get_name_leafdata());
    if (cdcfilexferconfpriurl.is_set || is_set(cdcfilexferconfpriurl.operation)) leaf_name_data.push_back(cdcfilexferconfpriurl.get_name_leafdata());
    if (cdcfilexferconfretrycount.is_set || is_set(cdcfilexferconfretrycount.operation)) leaf_name_data.push_back(cdcfilexferconfretrycount.get_name_leafdata());
    if (cdcfilexferconfretryperiod.is_set || is_set(cdcfilexferconfretryperiod.operation)) leaf_name_data.push_back(cdcfilexferconfretryperiod.get_name_leafdata());
    if (cdcfilexferconfsecurl.is_set || is_set(cdcfilexferconfsecurl.operation)) leaf_name_data.push_back(cdcfilexferconfsecurl.get_name_leafdata());
    if (cdcfilexferconfsuccessenable.is_set || is_set(cdcfilexferconfsuccessenable.operation)) leaf_name_data.push_back(cdcfilexferconfsuccessenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDataCollectionMib::Cdcfilexferconftable::Cdcfilexferconfentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex = value;
    }
    if(value_path == "cdcFileXferConfFailureEnable")
    {
        cdcfilexferconffailureenable = value;
    }
    if(value_path == "cdcFileXferConfPriUrl")
    {
        cdcfilexferconfpriurl = value;
    }
    if(value_path == "cdcFileXferConfRetryCount")
    {
        cdcfilexferconfretrycount = value;
    }
    if(value_path == "cdcFileXferConfRetryPeriod")
    {
        cdcfilexferconfretryperiod = value;
    }
    if(value_path == "cdcFileXferConfSecUrl")
    {
        cdcfilexferconfsecurl = value;
    }
    if(value_path == "cdcFileXferConfSuccessEnable")
    {
        cdcfilexferconfsuccessenable = value;
    }
}

const Enum::YLeaf CdcfilexferstatusEnum::notStarted {1, "notStarted"};
const Enum::YLeaf CdcfilexferstatusEnum::success {2, "success"};
const Enum::YLeaf CdcfilexferstatusEnum::aborted {3, "aborted"};
const Enum::YLeaf CdcfilexferstatusEnum::fileOpenFailRemote {4, "fileOpenFailRemote"};
const Enum::YLeaf CdcfilexferstatusEnum::badDomainName {5, "badDomainName"};
const Enum::YLeaf CdcfilexferstatusEnum::unreachableIpAddress {6, "unreachableIpAddress"};
const Enum::YLeaf CdcfilexferstatusEnum::networkFailed {7, "networkFailed"};
const Enum::YLeaf CdcfilexferstatusEnum::fileWriteFailed {8, "fileWriteFailed"};
const Enum::YLeaf CdcfilexferstatusEnum::authFailed {9, "authFailed"};

const Enum::YLeaf CdcfileformatEnum::cdcBulkASCII {1, "cdcBulkASCII"};
const Enum::YLeaf CdcfileformatEnum::cdcBulkBinary {2, "cdcBulkBinary"};
const Enum::YLeaf CdcfileformatEnum::cdcSchemaASCII {3, "cdcSchemaASCII"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfilecommandEnum::idle {1, "idle"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfilecommandEnum::swapToNewFile {2, "swapToNewFile"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfilecommandEnum::collectNow {3, "collectNow"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfilecollectmodeEnum::auto_ {1, "auto"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfilecollectmodeEnum::manual {2, "manual"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileadminstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileadminstatusEnum::disabled {2, "disabled"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileoperstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileoperstatusEnum::disabled {2, "disabled"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileoperstatusEnum::error {3, "error"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum::noError {1, "noError"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum::otherError {2, "otherError"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum::noSpace {3, "noSpace"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum::openError {4, "openError"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum::tooSmallMaxSize {5, "tooSmallMaxSize"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum::tooManyMaxSizeHits {6, "tooManyMaxSizeHits"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfiletable::Cdcvfileentry::CdcvfileerrorcodeEnum::noResource {7, "noResource"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::CdcvfilemgmtcommandEnum::idle {1, "idle"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::CdcvfilemgmtcommandEnum::delete_ {2, "delete"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::CdcvfilemgmtcommandEnum::transfer {3, "transfer"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcvfilemgmttable::Cdcvfilemgmtentry::CdcvfilemgmtcommandEnum::abortTransfer {4, "abortTransfer"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::CdcdgtypeEnum::object {1, "object"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcdgtable::Cdcdgentry::CdcdgtypeEnum::table {2, "table"};

const Enum::YLeaf CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::CdcdginstancetypeEnum::individual {1, "individual"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::CdcdginstancetypeEnum::range {2, "range"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::CdcdginstancetypeEnum::repititions {3, "repititions"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::CdcdginstancetypeEnum::subTree {4, "subTree"};
const Enum::YLeaf CiscoDataCollectionMib::Cdcdginstancetable::Cdcdginstanceentry::CdcdginstancetypeEnum::other {5, "other"};


}
}

