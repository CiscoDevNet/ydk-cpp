
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DATA_COLLECTION_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_DATA_COLLECTION_MIB {

CISCODATACOLLECTIONMIB::CISCODATACOLLECTIONMIB()
    :
    cdcvfile(std::make_shared<CISCODATACOLLECTIONMIB::CdcVFile>())
    , cdcvfiletable(std::make_shared<CISCODATACOLLECTIONMIB::CdcVFileTable>())
    , cdcvfilemgmttable(std::make_shared<CISCODATACOLLECTIONMIB::CdcVFileMgmtTable>())
    , cdcdgtable(std::make_shared<CISCODATACOLLECTIONMIB::CdcDGTable>())
    , cdcdgbaseobjecttable(std::make_shared<CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable>())
    , cdcdginstancetable(std::make_shared<CISCODATACOLLECTIONMIB::CdcDGInstanceTable>())
    , cdcfilexferconftable(std::make_shared<CISCODATACOLLECTIONMIB::CdcFileXferConfTable>())
{
    cdcvfile->parent = this;
    cdcvfiletable->parent = this;
    cdcvfilemgmttable->parent = this;
    cdcdgtable->parent = this;
    cdcdgbaseobjecttable->parent = this;
    cdcdginstancetable->parent = this;
    cdcfilexferconftable->parent = this;

    yang_name = "CISCO-DATA-COLLECTION-MIB"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::~CISCODATACOLLECTIONMIB()
{
}

bool CISCODATACOLLECTIONMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cdcvfile !=  nullptr && cdcvfile->has_data())
	|| (cdcvfiletable !=  nullptr && cdcvfiletable->has_data())
	|| (cdcvfilemgmttable !=  nullptr && cdcvfilemgmttable->has_data())
	|| (cdcdgtable !=  nullptr && cdcdgtable->has_data())
	|| (cdcdgbaseobjecttable !=  nullptr && cdcdgbaseobjecttable->has_data())
	|| (cdcdginstancetable !=  nullptr && cdcdginstancetable->has_data())
	|| (cdcfilexferconftable !=  nullptr && cdcfilexferconftable->has_data());
}

bool CISCODATACOLLECTIONMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cdcvfile !=  nullptr && cdcvfile->has_operation())
	|| (cdcvfiletable !=  nullptr && cdcvfiletable->has_operation())
	|| (cdcvfilemgmttable !=  nullptr && cdcvfilemgmttable->has_operation())
	|| (cdcdgtable !=  nullptr && cdcdgtable->has_operation())
	|| (cdcdgbaseobjecttable !=  nullptr && cdcdgbaseobjecttable->has_operation())
	|| (cdcdginstancetable !=  nullptr && cdcdginstancetable->has_operation())
	|| (cdcfilexferconftable !=  nullptr && cdcfilexferconftable->has_operation());
}

std::string CISCODATACOLLECTIONMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFile")
    {
        if(cdcvfile == nullptr)
        {
            cdcvfile = std::make_shared<CISCODATACOLLECTIONMIB::CdcVFile>();
        }
        return cdcvfile;
    }

    if(child_yang_name == "cdcVFileTable")
    {
        if(cdcvfiletable == nullptr)
        {
            cdcvfiletable = std::make_shared<CISCODATACOLLECTIONMIB::CdcVFileTable>();
        }
        return cdcvfiletable;
    }

    if(child_yang_name == "cdcVFileMgmtTable")
    {
        if(cdcvfilemgmttable == nullptr)
        {
            cdcvfilemgmttable = std::make_shared<CISCODATACOLLECTIONMIB::CdcVFileMgmtTable>();
        }
        return cdcvfilemgmttable;
    }

    if(child_yang_name == "cdcDGTable")
    {
        if(cdcdgtable == nullptr)
        {
            cdcdgtable = std::make_shared<CISCODATACOLLECTIONMIB::CdcDGTable>();
        }
        return cdcdgtable;
    }

    if(child_yang_name == "cdcDGBaseObjectTable")
    {
        if(cdcdgbaseobjecttable == nullptr)
        {
            cdcdgbaseobjecttable = std::make_shared<CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable>();
        }
        return cdcdgbaseobjecttable;
    }

    if(child_yang_name == "cdcDGInstanceTable")
    {
        if(cdcdginstancetable == nullptr)
        {
            cdcdginstancetable = std::make_shared<CISCODATACOLLECTIONMIB::CdcDGInstanceTable>();
        }
        return cdcdginstancetable;
    }

    if(child_yang_name == "cdcFileXferConfTable")
    {
        if(cdcfilexferconftable == nullptr)
        {
            cdcfilexferconftable = std::make_shared<CISCODATACOLLECTIONMIB::CdcFileXferConfTable>();
        }
        return cdcfilexferconftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cdcvfile != nullptr)
    {
        _children["cdcVFile"] = cdcvfile;
    }

    if(cdcvfiletable != nullptr)
    {
        _children["cdcVFileTable"] = cdcvfiletable;
    }

    if(cdcvfilemgmttable != nullptr)
    {
        _children["cdcVFileMgmtTable"] = cdcvfilemgmttable;
    }

    if(cdcdgtable != nullptr)
    {
        _children["cdcDGTable"] = cdcdgtable;
    }

    if(cdcdgbaseobjecttable != nullptr)
    {
        _children["cdcDGBaseObjectTable"] = cdcdgbaseobjecttable;
    }

    if(cdcdginstancetable != nullptr)
    {
        _children["cdcDGInstanceTable"] = cdcdginstancetable;
    }

    if(cdcfilexferconftable != nullptr)
    {
        _children["cdcFileXferConfTable"] = cdcfilexferconftable;
    }

    return _children;
}

void CISCODATACOLLECTIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::clone_ptr() const
{
    return std::make_shared<CISCODATACOLLECTIONMIB>();
}

std::string CISCODATACOLLECTIONMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCODATACOLLECTIONMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCODATACOLLECTIONMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCODATACOLLECTIONMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCODATACOLLECTIONMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFile" || name == "cdcVFileTable" || name == "cdcVFileMgmtTable" || name == "cdcDGTable" || name == "cdcDGBaseObjectTable" || name == "cdcDGInstanceTable" || name == "cdcFileXferConfTable")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcVFile::CdcVFile()
    :
    cdcvfilepersistentstorage{YType::boolean, "cdcVFilePersistentStorage"},
    cdcvfilemaxsizehitslimit{YType::uint32, "cdcVFileMaxSizeHitsLimit"}
{

    yang_name = "cdcVFile"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcVFile::~CdcVFile()
{
}

bool CISCODATACOLLECTIONMIB::CdcVFile::has_data() const
{
    if (is_presence_container) return true;
    return cdcvfilepersistentstorage.is_set
	|| cdcvfilemaxsizehitslimit.is_set;
}

bool CISCODATACOLLECTIONMIB::CdcVFile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcvfilepersistentstorage.yfilter)
	|| ydk::is_set(cdcvfilemaxsizehitslimit.yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcVFile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcVFile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcVFile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfilepersistentstorage.is_set || is_set(cdcvfilepersistentstorage.yfilter)) leaf_name_data.push_back(cdcvfilepersistentstorage.get_name_leafdata());
    if (cdcvfilemaxsizehitslimit.is_set || is_set(cdcvfilemaxsizehitslimit.yfilter)) leaf_name_data.push_back(cdcvfilemaxsizehitslimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcVFile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcVFile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODATACOLLECTIONMIB::CdcVFile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdcVFilePersistentStorage")
    {
        cdcvfilepersistentstorage = value;
        cdcvfilepersistentstorage.value_namespace = name_space;
        cdcvfilepersistentstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMaxSizeHitsLimit")
    {
        cdcvfilemaxsizehitslimit = value;
        cdcvfilemaxsizehitslimit.value_namespace = name_space;
        cdcvfilemaxsizehitslimit.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODATACOLLECTIONMIB::CdcVFile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdcVFilePersistentStorage")
    {
        cdcvfilepersistentstorage.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMaxSizeHitsLimit")
    {
        cdcvfilemaxsizehitslimit.yfilter = yfilter;
    }
}

bool CISCODATACOLLECTIONMIB::CdcVFile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFilePersistentStorage" || name == "cdcVFileMaxSizeHitsLimit")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileTable()
    :
    cdcvfileentry(this, {"cdcvfileindex"})
{

    yang_name = "cdcVFileTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcVFileTable::~CdcVFileTable()
{
}

bool CISCODATACOLLECTIONMIB::CdcVFileTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdcvfileentry.len(); index++)
    {
        if(cdcvfileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::CdcVFileTable::has_operation() const
{
    for (std::size_t index=0; index<cdcvfileentry.len(); index++)
    {
        if(cdcvfileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcVFileTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcVFileTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcVFileTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcVFileTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFileEntry")
    {
        auto ent_ = std::make_shared<CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry>();
        ent_->parent = this;
        cdcvfileentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcVFileTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdcvfileentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODATACOLLECTIONMIB::CdcVFileTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::CdcVFileTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::CdcVFileTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileEntry()
    :
    cdcvfileindex{YType::uint32, "cdcVFileIndex"},
    cdcvfilename{YType::str, "cdcVFileName"},
    cdcvfiledescription{YType::str, "cdcVFileDescription"},
    cdcvfilecommand{YType::enumeration, "cdcVFileCommand"},
    cdcvfilemaxsize{YType::uint32, "cdcVFileMaxSize"},
    cdcvfilecurrentsize{YType::uint32, "cdcVFileCurrentSize"},
    cdcvfileformat{YType::enumeration, "cdcVFileFormat"},
    cdcvfilecollectmode{YType::enumeration, "cdcVFileCollectMode"},
    cdcvfilecollectionperiod{YType::uint32, "cdcVFileCollectionPeriod"},
    cdcvfileretentionperiod{YType::uint32, "cdcVFileRetentionPeriod"},
    cdcvfileadminstatus{YType::enumeration, "cdcVFileAdminStatus"},
    cdcvfileoperstatus{YType::enumeration, "cdcVFileOperStatus"},
    cdcvfileerrorcode{YType::enumeration, "cdcVFileErrorCode"},
    cdcvfilecollectionerrorenable{YType::boolean, "cdcVFileCollectionErrorEnable"},
    cdcvfilerowstatus{YType::enumeration, "cdcVFileRowStatus"}
{

    yang_name = "cdcVFileEntry"; yang_parent_name = "cdcVFileTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::~CdcVFileEntry()
{
}

bool CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdcvfileindex.is_set
	|| cdcvfilename.is_set
	|| cdcvfiledescription.is_set
	|| cdcvfilecommand.is_set
	|| cdcvfilemaxsize.is_set
	|| cdcvfilecurrentsize.is_set
	|| cdcvfileformat.is_set
	|| cdcvfilecollectmode.is_set
	|| cdcvfilecollectionperiod.is_set
	|| cdcvfileretentionperiod.is_set
	|| cdcvfileadminstatus.is_set
	|| cdcvfileoperstatus.is_set
	|| cdcvfileerrorcode.is_set
	|| cdcvfilecollectionerrorenable.is_set
	|| cdcvfilerowstatus.is_set;
}

bool CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcvfileindex.yfilter)
	|| ydk::is_set(cdcvfilename.yfilter)
	|| ydk::is_set(cdcvfiledescription.yfilter)
	|| ydk::is_set(cdcvfilecommand.yfilter)
	|| ydk::is_set(cdcvfilemaxsize.yfilter)
	|| ydk::is_set(cdcvfilecurrentsize.yfilter)
	|| ydk::is_set(cdcvfileformat.yfilter)
	|| ydk::is_set(cdcvfilecollectmode.yfilter)
	|| ydk::is_set(cdcvfilecollectionperiod.yfilter)
	|| ydk::is_set(cdcvfileretentionperiod.yfilter)
	|| ydk::is_set(cdcvfileadminstatus.yfilter)
	|| ydk::is_set(cdcvfileoperstatus.yfilter)
	|| ydk::is_set(cdcvfileerrorcode.yfilter)
	|| ydk::is_set(cdcvfilecollectionerrorenable.yfilter)
	|| ydk::is_set(cdcvfilerowstatus.yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcVFileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileEntry";
    ADD_KEY_TOKEN(cdcvfileindex, "cdcVFileIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfileindex.is_set || is_set(cdcvfileindex.yfilter)) leaf_name_data.push_back(cdcvfileindex.get_name_leafdata());
    if (cdcvfilename.is_set || is_set(cdcvfilename.yfilter)) leaf_name_data.push_back(cdcvfilename.get_name_leafdata());
    if (cdcvfiledescription.is_set || is_set(cdcvfiledescription.yfilter)) leaf_name_data.push_back(cdcvfiledescription.get_name_leafdata());
    if (cdcvfilecommand.is_set || is_set(cdcvfilecommand.yfilter)) leaf_name_data.push_back(cdcvfilecommand.get_name_leafdata());
    if (cdcvfilemaxsize.is_set || is_set(cdcvfilemaxsize.yfilter)) leaf_name_data.push_back(cdcvfilemaxsize.get_name_leafdata());
    if (cdcvfilecurrentsize.is_set || is_set(cdcvfilecurrentsize.yfilter)) leaf_name_data.push_back(cdcvfilecurrentsize.get_name_leafdata());
    if (cdcvfileformat.is_set || is_set(cdcvfileformat.yfilter)) leaf_name_data.push_back(cdcvfileformat.get_name_leafdata());
    if (cdcvfilecollectmode.is_set || is_set(cdcvfilecollectmode.yfilter)) leaf_name_data.push_back(cdcvfilecollectmode.get_name_leafdata());
    if (cdcvfilecollectionperiod.is_set || is_set(cdcvfilecollectionperiod.yfilter)) leaf_name_data.push_back(cdcvfilecollectionperiod.get_name_leafdata());
    if (cdcvfileretentionperiod.is_set || is_set(cdcvfileretentionperiod.yfilter)) leaf_name_data.push_back(cdcvfileretentionperiod.get_name_leafdata());
    if (cdcvfileadminstatus.is_set || is_set(cdcvfileadminstatus.yfilter)) leaf_name_data.push_back(cdcvfileadminstatus.get_name_leafdata());
    if (cdcvfileoperstatus.is_set || is_set(cdcvfileoperstatus.yfilter)) leaf_name_data.push_back(cdcvfileoperstatus.get_name_leafdata());
    if (cdcvfileerrorcode.is_set || is_set(cdcvfileerrorcode.yfilter)) leaf_name_data.push_back(cdcvfileerrorcode.get_name_leafdata());
    if (cdcvfilecollectionerrorenable.is_set || is_set(cdcvfilecollectionerrorenable.yfilter)) leaf_name_data.push_back(cdcvfilecollectionerrorenable.get_name_leafdata());
    if (cdcvfilerowstatus.is_set || is_set(cdcvfilerowstatus.yfilter)) leaf_name_data.push_back(cdcvfilerowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex = value;
        cdcvfileindex.value_namespace = name_space;
        cdcvfileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileName")
    {
        cdcvfilename = value;
        cdcvfilename.value_namespace = name_space;
        cdcvfilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileDescription")
    {
        cdcvfiledescription = value;
        cdcvfiledescription.value_namespace = name_space;
        cdcvfiledescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileCommand")
    {
        cdcvfilecommand = value;
        cdcvfilecommand.value_namespace = name_space;
        cdcvfilecommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMaxSize")
    {
        cdcvfilemaxsize = value;
        cdcvfilemaxsize.value_namespace = name_space;
        cdcvfilemaxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileCurrentSize")
    {
        cdcvfilecurrentsize = value;
        cdcvfilecurrentsize.value_namespace = name_space;
        cdcvfilecurrentsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileFormat")
    {
        cdcvfileformat = value;
        cdcvfileformat.value_namespace = name_space;
        cdcvfileformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileCollectMode")
    {
        cdcvfilecollectmode = value;
        cdcvfilecollectmode.value_namespace = name_space;
        cdcvfilecollectmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileCollectionPeriod")
    {
        cdcvfilecollectionperiod = value;
        cdcvfilecollectionperiod.value_namespace = name_space;
        cdcvfilecollectionperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileRetentionPeriod")
    {
        cdcvfileretentionperiod = value;
        cdcvfileretentionperiod.value_namespace = name_space;
        cdcvfileretentionperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileAdminStatus")
    {
        cdcvfileadminstatus = value;
        cdcvfileadminstatus.value_namespace = name_space;
        cdcvfileadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileOperStatus")
    {
        cdcvfileoperstatus = value;
        cdcvfileoperstatus.value_namespace = name_space;
        cdcvfileoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileErrorCode")
    {
        cdcvfileerrorcode = value;
        cdcvfileerrorcode.value_namespace = name_space;
        cdcvfileerrorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileCollectionErrorEnable")
    {
        cdcvfilecollectionerrorenable = value;
        cdcvfilecollectionerrorenable.value_namespace = name_space;
        cdcvfilecollectionerrorenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileRowStatus")
    {
        cdcvfilerowstatus = value;
        cdcvfilerowstatus.value_namespace = name_space;
        cdcvfilerowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex.yfilter = yfilter;
    }
    if(value_path == "cdcVFileName")
    {
        cdcvfilename.yfilter = yfilter;
    }
    if(value_path == "cdcVFileDescription")
    {
        cdcvfiledescription.yfilter = yfilter;
    }
    if(value_path == "cdcVFileCommand")
    {
        cdcvfilecommand.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMaxSize")
    {
        cdcvfilemaxsize.yfilter = yfilter;
    }
    if(value_path == "cdcVFileCurrentSize")
    {
        cdcvfilecurrentsize.yfilter = yfilter;
    }
    if(value_path == "cdcVFileFormat")
    {
        cdcvfileformat.yfilter = yfilter;
    }
    if(value_path == "cdcVFileCollectMode")
    {
        cdcvfilecollectmode.yfilter = yfilter;
    }
    if(value_path == "cdcVFileCollectionPeriod")
    {
        cdcvfilecollectionperiod.yfilter = yfilter;
    }
    if(value_path == "cdcVFileRetentionPeriod")
    {
        cdcvfileretentionperiod.yfilter = yfilter;
    }
    if(value_path == "cdcVFileAdminStatus")
    {
        cdcvfileadminstatus.yfilter = yfilter;
    }
    if(value_path == "cdcVFileOperStatus")
    {
        cdcvfileoperstatus.yfilter = yfilter;
    }
    if(value_path == "cdcVFileErrorCode")
    {
        cdcvfileerrorcode.yfilter = yfilter;
    }
    if(value_path == "cdcVFileCollectionErrorEnable")
    {
        cdcvfilecollectionerrorenable.yfilter = yfilter;
    }
    if(value_path == "cdcVFileRowStatus")
    {
        cdcvfilerowstatus.yfilter = yfilter;
    }
}

bool CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileIndex" || name == "cdcVFileName" || name == "cdcVFileDescription" || name == "cdcVFileCommand" || name == "cdcVFileMaxSize" || name == "cdcVFileCurrentSize" || name == "cdcVFileFormat" || name == "cdcVFileCollectMode" || name == "cdcVFileCollectionPeriod" || name == "cdcVFileRetentionPeriod" || name == "cdcVFileAdminStatus" || name == "cdcVFileOperStatus" || name == "cdcVFileErrorCode" || name == "cdcVFileCollectionErrorEnable" || name == "cdcVFileRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtTable()
    :
    cdcvfilemgmtentry(this, {"cdcvfileindex", "cdcvfilemgmtindex"})
{

    yang_name = "cdcVFileMgmtTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::~CdcVFileMgmtTable()
{
}

bool CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdcvfilemgmtentry.len(); index++)
    {
        if(cdcvfilemgmtentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::has_operation() const
{
    for (std::size_t index=0; index<cdcvfilemgmtentry.len(); index++)
    {
        if(cdcvfilemgmtentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileMgmtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFileMgmtEntry")
    {
        auto ent_ = std::make_shared<CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry>();
        ent_->parent = this;
        cdcvfilemgmtentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdcvfilemgmtentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileMgmtEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::CdcVFileMgmtEntry()
    :
    cdcvfileindex{YType::str, "cdcVFileIndex"},
    cdcvfilemgmtindex{YType::uint32, "cdcVFileMgmtIndex"},
    cdcvfilemgmtname{YType::str, "cdcVFileMgmtName"},
    cdcvfilemgmttimestamp{YType::str, "cdcVFileMgmtTimestamp"},
    cdcvfilemgmttimetolive{YType::uint32, "cdcVFileMgmtTimeToLive"},
    cdcvfilemgmtcommand{YType::enumeration, "cdcVFileMgmtCommand"},
    cdcvfilemgmtxferurl{YType::str, "cdcVFileMgmtXferURL"},
    cdcvfilemgmtlastxferstatus{YType::enumeration, "cdcVFileMgmtLastXferStatus"},
    cdcvfilemgmtlastxferurl{YType::str, "cdcVFileMgmtLastXferURL"}
{

    yang_name = "cdcVFileMgmtEntry"; yang_parent_name = "cdcVFileMgmtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::~CdcVFileMgmtEntry()
{
}

bool CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdcvfileindex.is_set
	|| cdcvfilemgmtindex.is_set
	|| cdcvfilemgmtname.is_set
	|| cdcvfilemgmttimestamp.is_set
	|| cdcvfilemgmttimetolive.is_set
	|| cdcvfilemgmtcommand.is_set
	|| cdcvfilemgmtxferurl.is_set
	|| cdcvfilemgmtlastxferstatus.is_set
	|| cdcvfilemgmtlastxferurl.is_set;
}

bool CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcvfileindex.yfilter)
	|| ydk::is_set(cdcvfilemgmtindex.yfilter)
	|| ydk::is_set(cdcvfilemgmtname.yfilter)
	|| ydk::is_set(cdcvfilemgmttimestamp.yfilter)
	|| ydk::is_set(cdcvfilemgmttimetolive.yfilter)
	|| ydk::is_set(cdcvfilemgmtcommand.yfilter)
	|| ydk::is_set(cdcvfilemgmtxferurl.yfilter)
	|| ydk::is_set(cdcvfilemgmtlastxferstatus.yfilter)
	|| ydk::is_set(cdcvfilemgmtlastxferurl.yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcVFileMgmtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileMgmtEntry";
    ADD_KEY_TOKEN(cdcvfileindex, "cdcVFileIndex");
    ADD_KEY_TOKEN(cdcvfilemgmtindex, "cdcVFileMgmtIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfileindex.is_set || is_set(cdcvfileindex.yfilter)) leaf_name_data.push_back(cdcvfileindex.get_name_leafdata());
    if (cdcvfilemgmtindex.is_set || is_set(cdcvfilemgmtindex.yfilter)) leaf_name_data.push_back(cdcvfilemgmtindex.get_name_leafdata());
    if (cdcvfilemgmtname.is_set || is_set(cdcvfilemgmtname.yfilter)) leaf_name_data.push_back(cdcvfilemgmtname.get_name_leafdata());
    if (cdcvfilemgmttimestamp.is_set || is_set(cdcvfilemgmttimestamp.yfilter)) leaf_name_data.push_back(cdcvfilemgmttimestamp.get_name_leafdata());
    if (cdcvfilemgmttimetolive.is_set || is_set(cdcvfilemgmttimetolive.yfilter)) leaf_name_data.push_back(cdcvfilemgmttimetolive.get_name_leafdata());
    if (cdcvfilemgmtcommand.is_set || is_set(cdcvfilemgmtcommand.yfilter)) leaf_name_data.push_back(cdcvfilemgmtcommand.get_name_leafdata());
    if (cdcvfilemgmtxferurl.is_set || is_set(cdcvfilemgmtxferurl.yfilter)) leaf_name_data.push_back(cdcvfilemgmtxferurl.get_name_leafdata());
    if (cdcvfilemgmtlastxferstatus.is_set || is_set(cdcvfilemgmtlastxferstatus.yfilter)) leaf_name_data.push_back(cdcvfilemgmtlastxferstatus.get_name_leafdata());
    if (cdcvfilemgmtlastxferurl.is_set || is_set(cdcvfilemgmtlastxferurl.yfilter)) leaf_name_data.push_back(cdcvfilemgmtlastxferurl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex = value;
        cdcvfileindex.value_namespace = name_space;
        cdcvfileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtIndex")
    {
        cdcvfilemgmtindex = value;
        cdcvfilemgmtindex.value_namespace = name_space;
        cdcvfilemgmtindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtName")
    {
        cdcvfilemgmtname = value;
        cdcvfilemgmtname.value_namespace = name_space;
        cdcvfilemgmtname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtTimestamp")
    {
        cdcvfilemgmttimestamp = value;
        cdcvfilemgmttimestamp.value_namespace = name_space;
        cdcvfilemgmttimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtTimeToLive")
    {
        cdcvfilemgmttimetolive = value;
        cdcvfilemgmttimetolive.value_namespace = name_space;
        cdcvfilemgmttimetolive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtCommand")
    {
        cdcvfilemgmtcommand = value;
        cdcvfilemgmtcommand.value_namespace = name_space;
        cdcvfilemgmtcommand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtXferURL")
    {
        cdcvfilemgmtxferurl = value;
        cdcvfilemgmtxferurl.value_namespace = name_space;
        cdcvfilemgmtxferurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtLastXferStatus")
    {
        cdcvfilemgmtlastxferstatus = value;
        cdcvfilemgmtlastxferstatus.value_namespace = name_space;
        cdcvfilemgmtlastxferstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcVFileMgmtLastXferURL")
    {
        cdcvfilemgmtlastxferurl = value;
        cdcvfilemgmtlastxferurl.value_namespace = name_space;
        cdcvfilemgmtlastxferurl.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtIndex")
    {
        cdcvfilemgmtindex.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtName")
    {
        cdcvfilemgmtname.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtTimestamp")
    {
        cdcvfilemgmttimestamp.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtTimeToLive")
    {
        cdcvfilemgmttimetolive.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtCommand")
    {
        cdcvfilemgmtcommand.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtXferURL")
    {
        cdcvfilemgmtxferurl.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtLastXferStatus")
    {
        cdcvfilemgmtlastxferstatus.yfilter = yfilter;
    }
    if(value_path == "cdcVFileMgmtLastXferURL")
    {
        cdcvfilemgmtlastxferurl.yfilter = yfilter;
    }
}

bool CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileIndex" || name == "cdcVFileMgmtIndex" || name == "cdcVFileMgmtName" || name == "cdcVFileMgmtTimestamp" || name == "cdcVFileMgmtTimeToLive" || name == "cdcVFileMgmtCommand" || name == "cdcVFileMgmtXferURL" || name == "cdcVFileMgmtLastXferStatus" || name == "cdcVFileMgmtLastXferURL")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGTable()
    :
    cdcdgentry(this, {"cdcdgindex"})
{

    yang_name = "cdcDGTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcDGTable::~CdcDGTable()
{
}

bool CISCODATACOLLECTIONMIB::CdcDGTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdcdgentry.len(); index++)
    {
        if(cdcdgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::CdcDGTable::has_operation() const
{
    for (std::size_t index=0; index<cdcdgentry.len(); index++)
    {
        if(cdcdgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcDGTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcDGTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcDGTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcDGTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGEntry")
    {
        auto ent_ = std::make_shared<CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry>();
        ent_->parent = this;
        cdcdgentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcDGTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdcdgentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODATACOLLECTIONMIB::CdcDGTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::CdcDGTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::CdcDGTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::CdcDGEntry()
    :
    cdcdgindex{YType::uint32, "cdcDGIndex"},
    cdcdgcomment{YType::str, "cdcDGComment"},
    cdcdgtype{YType::enumeration, "cdcDGType"},
    cdcdgvfileindex{YType::uint32, "cdcDGVFileIndex"},
    cdcdgtargettag{YType::str, "cdcDGTargetTag"},
    cdcdgcontextname{YType::str, "cdcDGContextName"},
    cdcdgobject{YType::str, "cdcDGObject"},
    cdcdgobjectgrpindex{YType::uint32, "cdcDGObjectGrpIndex"},
    cdcdginstgrpindex{YType::uint32, "cdcDGInstGrpIndex"},
    cdcdgpollperiod{YType::uint32, "cdcDGPollPeriod"},
    cdcdgrowstatus{YType::enumeration, "cdcDGRowStatus"}
{

    yang_name = "cdcDGEntry"; yang_parent_name = "cdcDGTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::~CdcDGEntry()
{
}

bool CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdcdgindex.is_set
	|| cdcdgcomment.is_set
	|| cdcdgtype.is_set
	|| cdcdgvfileindex.is_set
	|| cdcdgtargettag.is_set
	|| cdcdgcontextname.is_set
	|| cdcdgobject.is_set
	|| cdcdgobjectgrpindex.is_set
	|| cdcdginstgrpindex.is_set
	|| cdcdgpollperiod.is_set
	|| cdcdgrowstatus.is_set;
}

bool CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcdgindex.yfilter)
	|| ydk::is_set(cdcdgcomment.yfilter)
	|| ydk::is_set(cdcdgtype.yfilter)
	|| ydk::is_set(cdcdgvfileindex.yfilter)
	|| ydk::is_set(cdcdgtargettag.yfilter)
	|| ydk::is_set(cdcdgcontextname.yfilter)
	|| ydk::is_set(cdcdgobject.yfilter)
	|| ydk::is_set(cdcdgobjectgrpindex.yfilter)
	|| ydk::is_set(cdcdginstgrpindex.yfilter)
	|| ydk::is_set(cdcdgpollperiod.yfilter)
	|| ydk::is_set(cdcdgrowstatus.yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGEntry";
    ADD_KEY_TOKEN(cdcdgindex, "cdcDGIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcdgindex.is_set || is_set(cdcdgindex.yfilter)) leaf_name_data.push_back(cdcdgindex.get_name_leafdata());
    if (cdcdgcomment.is_set || is_set(cdcdgcomment.yfilter)) leaf_name_data.push_back(cdcdgcomment.get_name_leafdata());
    if (cdcdgtype.is_set || is_set(cdcdgtype.yfilter)) leaf_name_data.push_back(cdcdgtype.get_name_leafdata());
    if (cdcdgvfileindex.is_set || is_set(cdcdgvfileindex.yfilter)) leaf_name_data.push_back(cdcdgvfileindex.get_name_leafdata());
    if (cdcdgtargettag.is_set || is_set(cdcdgtargettag.yfilter)) leaf_name_data.push_back(cdcdgtargettag.get_name_leafdata());
    if (cdcdgcontextname.is_set || is_set(cdcdgcontextname.yfilter)) leaf_name_data.push_back(cdcdgcontextname.get_name_leafdata());
    if (cdcdgobject.is_set || is_set(cdcdgobject.yfilter)) leaf_name_data.push_back(cdcdgobject.get_name_leafdata());
    if (cdcdgobjectgrpindex.is_set || is_set(cdcdgobjectgrpindex.yfilter)) leaf_name_data.push_back(cdcdgobjectgrpindex.get_name_leafdata());
    if (cdcdginstgrpindex.is_set || is_set(cdcdginstgrpindex.yfilter)) leaf_name_data.push_back(cdcdginstgrpindex.get_name_leafdata());
    if (cdcdgpollperiod.is_set || is_set(cdcdgpollperiod.yfilter)) leaf_name_data.push_back(cdcdgpollperiod.get_name_leafdata());
    if (cdcdgrowstatus.is_set || is_set(cdcdgrowstatus.yfilter)) leaf_name_data.push_back(cdcdgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdcDGIndex")
    {
        cdcdgindex = value;
        cdcdgindex.value_namespace = name_space;
        cdcdgindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGComment")
    {
        cdcdgcomment = value;
        cdcdgcomment.value_namespace = name_space;
        cdcdgcomment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGType")
    {
        cdcdgtype = value;
        cdcdgtype.value_namespace = name_space;
        cdcdgtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGVFileIndex")
    {
        cdcdgvfileindex = value;
        cdcdgvfileindex.value_namespace = name_space;
        cdcdgvfileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGTargetTag")
    {
        cdcdgtargettag = value;
        cdcdgtargettag.value_namespace = name_space;
        cdcdgtargettag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGContextName")
    {
        cdcdgcontextname = value;
        cdcdgcontextname.value_namespace = name_space;
        cdcdgcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGObject")
    {
        cdcdgobject = value;
        cdcdgobject.value_namespace = name_space;
        cdcdgobject.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGObjectGrpIndex")
    {
        cdcdgobjectgrpindex = value;
        cdcdgobjectgrpindex.value_namespace = name_space;
        cdcdgobjectgrpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstGrpIndex")
    {
        cdcdginstgrpindex = value;
        cdcdginstgrpindex.value_namespace = name_space;
        cdcdginstgrpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGPollPeriod")
    {
        cdcdgpollperiod = value;
        cdcdgpollperiod.value_namespace = name_space;
        cdcdgpollperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGRowStatus")
    {
        cdcdgrowstatus = value;
        cdcdgrowstatus.value_namespace = name_space;
        cdcdgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdcDGIndex")
    {
        cdcdgindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGComment")
    {
        cdcdgcomment.yfilter = yfilter;
    }
    if(value_path == "cdcDGType")
    {
        cdcdgtype.yfilter = yfilter;
    }
    if(value_path == "cdcDGVFileIndex")
    {
        cdcdgvfileindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGTargetTag")
    {
        cdcdgtargettag.yfilter = yfilter;
    }
    if(value_path == "cdcDGContextName")
    {
        cdcdgcontextname.yfilter = yfilter;
    }
    if(value_path == "cdcDGObject")
    {
        cdcdgobject.yfilter = yfilter;
    }
    if(value_path == "cdcDGObjectGrpIndex")
    {
        cdcdgobjectgrpindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstGrpIndex")
    {
        cdcdginstgrpindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGPollPeriod")
    {
        cdcdgpollperiod.yfilter = yfilter;
    }
    if(value_path == "cdcDGRowStatus")
    {
        cdcdgrowstatus.yfilter = yfilter;
    }
}

bool CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGIndex" || name == "cdcDGComment" || name == "cdcDGType" || name == "cdcDGVFileIndex" || name == "cdcDGTargetTag" || name == "cdcDGContextName" || name == "cdcDGObject" || name == "cdcDGObjectGrpIndex" || name == "cdcDGInstGrpIndex" || name == "cdcDGPollPeriod" || name == "cdcDGRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectTable()
    :
    cdcdgbaseobjectentry(this, {"cdcdgbaseobjectgrpindex", "cdcdgbaseobjectindex"})
{

    yang_name = "cdcDGBaseObjectTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::~CdcDGBaseObjectTable()
{
}

bool CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdcdgbaseobjectentry.len(); index++)
    {
        if(cdcdgbaseobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::has_operation() const
{
    for (std::size_t index=0; index<cdcdgbaseobjectentry.len(); index++)
    {
        if(cdcdgbaseobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGBaseObjectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGBaseObjectEntry")
    {
        auto ent_ = std::make_shared<CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry>();
        ent_->parent = this;
        cdcdgbaseobjectentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdcdgbaseobjectentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGBaseObjectEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::CdcDGBaseObjectEntry()
    :
    cdcdgbaseobjectgrpindex{YType::uint32, "cdcDGBaseObjectGrpIndex"},
    cdcdgbaseobjectindex{YType::uint32, "cdcDGBaseObjectIndex"},
    cdcdgbaseobjectsubtree{YType::str, "cdcDGBaseObjectSubtree"},
    cdcdgbaseobjectlist{YType::str, "cdcDGBaseObjectList"},
    cdcdgbaseobjectrowstatus{YType::enumeration, "cdcDGBaseObjectRowStatus"}
{

    yang_name = "cdcDGBaseObjectEntry"; yang_parent_name = "cdcDGBaseObjectTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::~CdcDGBaseObjectEntry()
{
}

bool CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdcdgbaseobjectgrpindex.is_set
	|| cdcdgbaseobjectindex.is_set
	|| cdcdgbaseobjectsubtree.is_set
	|| cdcdgbaseobjectlist.is_set
	|| cdcdgbaseobjectrowstatus.is_set;
}

bool CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcdgbaseobjectgrpindex.yfilter)
	|| ydk::is_set(cdcdgbaseobjectindex.yfilter)
	|| ydk::is_set(cdcdgbaseobjectsubtree.yfilter)
	|| ydk::is_set(cdcdgbaseobjectlist.yfilter)
	|| ydk::is_set(cdcdgbaseobjectrowstatus.yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGBaseObjectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGBaseObjectEntry";
    ADD_KEY_TOKEN(cdcdgbaseobjectgrpindex, "cdcDGBaseObjectGrpIndex");
    ADD_KEY_TOKEN(cdcdgbaseobjectindex, "cdcDGBaseObjectIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcdgbaseobjectgrpindex.is_set || is_set(cdcdgbaseobjectgrpindex.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectgrpindex.get_name_leafdata());
    if (cdcdgbaseobjectindex.is_set || is_set(cdcdgbaseobjectindex.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectindex.get_name_leafdata());
    if (cdcdgbaseobjectsubtree.is_set || is_set(cdcdgbaseobjectsubtree.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectsubtree.get_name_leafdata());
    if (cdcdgbaseobjectlist.is_set || is_set(cdcdgbaseobjectlist.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectlist.get_name_leafdata());
    if (cdcdgbaseobjectrowstatus.is_set || is_set(cdcdgbaseobjectrowstatus.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdcDGBaseObjectGrpIndex")
    {
        cdcdgbaseobjectgrpindex = value;
        cdcdgbaseobjectgrpindex.value_namespace = name_space;
        cdcdgbaseobjectgrpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGBaseObjectIndex")
    {
        cdcdgbaseobjectindex = value;
        cdcdgbaseobjectindex.value_namespace = name_space;
        cdcdgbaseobjectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGBaseObjectSubtree")
    {
        cdcdgbaseobjectsubtree = value;
        cdcdgbaseobjectsubtree.value_namespace = name_space;
        cdcdgbaseobjectsubtree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGBaseObjectList")
    {
        cdcdgbaseobjectlist = value;
        cdcdgbaseobjectlist.value_namespace = name_space;
        cdcdgbaseobjectlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGBaseObjectRowStatus")
    {
        cdcdgbaseobjectrowstatus = value;
        cdcdgbaseobjectrowstatus.value_namespace = name_space;
        cdcdgbaseobjectrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdcDGBaseObjectGrpIndex")
    {
        cdcdgbaseobjectgrpindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGBaseObjectIndex")
    {
        cdcdgbaseobjectindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGBaseObjectSubtree")
    {
        cdcdgbaseobjectsubtree.yfilter = yfilter;
    }
    if(value_path == "cdcDGBaseObjectList")
    {
        cdcdgbaseobjectlist.yfilter = yfilter;
    }
    if(value_path == "cdcDGBaseObjectRowStatus")
    {
        cdcdgbaseobjectrowstatus.yfilter = yfilter;
    }
}

bool CISCODATACOLLECTIONMIB::CdcDGBaseObjectTable::CdcDGBaseObjectEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGBaseObjectGrpIndex" || name == "cdcDGBaseObjectIndex" || name == "cdcDGBaseObjectSubtree" || name == "cdcDGBaseObjectList" || name == "cdcDGBaseObjectRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceTable()
    :
    cdcdginstanceentry(this, {"cdcdginstancegrpindex", "cdcdginstanceindex"})
{

    yang_name = "cdcDGInstanceTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcDGInstanceTable::~CdcDGInstanceTable()
{
}

bool CISCODATACOLLECTIONMIB::CdcDGInstanceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdcdginstanceentry.len(); index++)
    {
        if(cdcdginstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::CdcDGInstanceTable::has_operation() const
{
    for (std::size_t index=0; index<cdcdginstanceentry.len(); index++)
    {
        if(cdcdginstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcDGInstanceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcDGInstanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcDGInstanceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcDGInstanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGInstanceEntry")
    {
        auto ent_ = std::make_shared<CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry>();
        ent_->parent = this;
        cdcdginstanceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcDGInstanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdcdginstanceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODATACOLLECTIONMIB::CdcDGInstanceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::CdcDGInstanceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::CdcDGInstanceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGInstanceEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::CdcDGInstanceEntry()
    :
    cdcdginstancegrpindex{YType::uint32, "cdcDGInstanceGrpIndex"},
    cdcdginstanceindex{YType::uint32, "cdcDGInstanceIndex"},
    cdcdginstancetype{YType::enumeration, "cdcDGInstanceType"},
    cdcdginstanceoid{YType::str, "cdcDGInstanceOid"},
    cdcdginstanceoidend{YType::str, "cdcDGInstanceOidEnd"},
    cdcdginstancenumrepititions{YType::uint32, "cdcDGInstanceNumRepititions"},
    cdcdginstanceotherptr{YType::str, "cdcDGInstanceOtherPtr"},
    cdcdginstancerowstatus{YType::enumeration, "cdcDGInstanceRowStatus"}
{

    yang_name = "cdcDGInstanceEntry"; yang_parent_name = "cdcDGInstanceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::~CdcDGInstanceEntry()
{
}

bool CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdcdginstancegrpindex.is_set
	|| cdcdginstanceindex.is_set
	|| cdcdginstancetype.is_set
	|| cdcdginstanceoid.is_set
	|| cdcdginstanceoidend.is_set
	|| cdcdginstancenumrepititions.is_set
	|| cdcdginstanceotherptr.is_set
	|| cdcdginstancerowstatus.is_set;
}

bool CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcdginstancegrpindex.yfilter)
	|| ydk::is_set(cdcdginstanceindex.yfilter)
	|| ydk::is_set(cdcdginstancetype.yfilter)
	|| ydk::is_set(cdcdginstanceoid.yfilter)
	|| ydk::is_set(cdcdginstanceoidend.yfilter)
	|| ydk::is_set(cdcdginstancenumrepititions.yfilter)
	|| ydk::is_set(cdcdginstanceotherptr.yfilter)
	|| ydk::is_set(cdcdginstancerowstatus.yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGInstanceEntry";
    ADD_KEY_TOKEN(cdcdginstancegrpindex, "cdcDGInstanceGrpIndex");
    ADD_KEY_TOKEN(cdcdginstanceindex, "cdcDGInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcdginstancegrpindex.is_set || is_set(cdcdginstancegrpindex.yfilter)) leaf_name_data.push_back(cdcdginstancegrpindex.get_name_leafdata());
    if (cdcdginstanceindex.is_set || is_set(cdcdginstanceindex.yfilter)) leaf_name_data.push_back(cdcdginstanceindex.get_name_leafdata());
    if (cdcdginstancetype.is_set || is_set(cdcdginstancetype.yfilter)) leaf_name_data.push_back(cdcdginstancetype.get_name_leafdata());
    if (cdcdginstanceoid.is_set || is_set(cdcdginstanceoid.yfilter)) leaf_name_data.push_back(cdcdginstanceoid.get_name_leafdata());
    if (cdcdginstanceoidend.is_set || is_set(cdcdginstanceoidend.yfilter)) leaf_name_data.push_back(cdcdginstanceoidend.get_name_leafdata());
    if (cdcdginstancenumrepititions.is_set || is_set(cdcdginstancenumrepititions.yfilter)) leaf_name_data.push_back(cdcdginstancenumrepititions.get_name_leafdata());
    if (cdcdginstanceotherptr.is_set || is_set(cdcdginstanceotherptr.yfilter)) leaf_name_data.push_back(cdcdginstanceotherptr.get_name_leafdata());
    if (cdcdginstancerowstatus.is_set || is_set(cdcdginstancerowstatus.yfilter)) leaf_name_data.push_back(cdcdginstancerowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdcDGInstanceGrpIndex")
    {
        cdcdginstancegrpindex = value;
        cdcdginstancegrpindex.value_namespace = name_space;
        cdcdginstancegrpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstanceIndex")
    {
        cdcdginstanceindex = value;
        cdcdginstanceindex.value_namespace = name_space;
        cdcdginstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstanceType")
    {
        cdcdginstancetype = value;
        cdcdginstancetype.value_namespace = name_space;
        cdcdginstancetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstanceOid")
    {
        cdcdginstanceoid = value;
        cdcdginstanceoid.value_namespace = name_space;
        cdcdginstanceoid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstanceOidEnd")
    {
        cdcdginstanceoidend = value;
        cdcdginstanceoidend.value_namespace = name_space;
        cdcdginstanceoidend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstanceNumRepititions")
    {
        cdcdginstancenumrepititions = value;
        cdcdginstancenumrepititions.value_namespace = name_space;
        cdcdginstancenumrepititions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstanceOtherPtr")
    {
        cdcdginstanceotherptr = value;
        cdcdginstanceotherptr.value_namespace = name_space;
        cdcdginstanceotherptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcDGInstanceRowStatus")
    {
        cdcdginstancerowstatus = value;
        cdcdginstancerowstatus.value_namespace = name_space;
        cdcdginstancerowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdcDGInstanceGrpIndex")
    {
        cdcdginstancegrpindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstanceIndex")
    {
        cdcdginstanceindex.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstanceType")
    {
        cdcdginstancetype.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstanceOid")
    {
        cdcdginstanceoid.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstanceOidEnd")
    {
        cdcdginstanceoidend.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstanceNumRepititions")
    {
        cdcdginstancenumrepititions.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstanceOtherPtr")
    {
        cdcdginstanceotherptr.yfilter = yfilter;
    }
    if(value_path == "cdcDGInstanceRowStatus")
    {
        cdcdginstancerowstatus.yfilter = yfilter;
    }
}

bool CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGInstanceGrpIndex" || name == "cdcDGInstanceIndex" || name == "cdcDGInstanceType" || name == "cdcDGInstanceOid" || name == "cdcDGInstanceOidEnd" || name == "cdcDGInstanceNumRepititions" || name == "cdcDGInstanceOtherPtr" || name == "cdcDGInstanceRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfTable()
    :
    cdcfilexferconfentry(this, {"cdcvfileindex"})
{

    yang_name = "cdcFileXferConfTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcFileXferConfTable::~CdcFileXferConfTable()
{
}

bool CISCODATACOLLECTIONMIB::CdcFileXferConfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdcfilexferconfentry.len(); index++)
    {
        if(cdcfilexferconfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::CdcFileXferConfTable::has_operation() const
{
    for (std::size_t index=0; index<cdcfilexferconfentry.len(); index++)
    {
        if(cdcfilexferconfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcFileXferConfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcFileXferConfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcFileXferConfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcFileXferConfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcFileXferConfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcFileXferConfEntry")
    {
        auto ent_ = std::make_shared<CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry>();
        ent_->parent = this;
        cdcfilexferconfentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcFileXferConfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdcfilexferconfentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODATACOLLECTIONMIB::CdcFileXferConfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::CdcFileXferConfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::CdcFileXferConfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcFileXferConfEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::CdcFileXferConfEntry()
    :
    cdcvfileindex{YType::str, "cdcVFileIndex"},
    cdcfilexferconfpriurl{YType::str, "cdcFileXferConfPriUrl"},
    cdcfilexferconfsecurl{YType::str, "cdcFileXferConfSecUrl"},
    cdcfilexferconfretryperiod{YType::uint32, "cdcFileXferConfRetryPeriod"},
    cdcfilexferconfretrycount{YType::uint32, "cdcFileXferConfRetryCount"},
    cdcfilexferconfsuccessenable{YType::boolean, "cdcFileXferConfSuccessEnable"},
    cdcfilexferconffailureenable{YType::boolean, "cdcFileXferConfFailureEnable"}
{

    yang_name = "cdcFileXferConfEntry"; yang_parent_name = "cdcFileXferConfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::~CdcFileXferConfEntry()
{
}

bool CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdcvfileindex.is_set
	|| cdcfilexferconfpriurl.is_set
	|| cdcfilexferconfsecurl.is_set
	|| cdcfilexferconfretryperiod.is_set
	|| cdcfilexferconfretrycount.is_set
	|| cdcfilexferconfsuccessenable.is_set
	|| cdcfilexferconffailureenable.is_set;
}

bool CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcvfileindex.yfilter)
	|| ydk::is_set(cdcfilexferconfpriurl.yfilter)
	|| ydk::is_set(cdcfilexferconfsecurl.yfilter)
	|| ydk::is_set(cdcfilexferconfretryperiod.yfilter)
	|| ydk::is_set(cdcfilexferconfretrycount.yfilter)
	|| ydk::is_set(cdcfilexferconfsuccessenable.yfilter)
	|| ydk::is_set(cdcfilexferconffailureenable.yfilter);
}

std::string CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcFileXferConfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcFileXferConfEntry";
    ADD_KEY_TOKEN(cdcvfileindex, "cdcVFileIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfileindex.is_set || is_set(cdcvfileindex.yfilter)) leaf_name_data.push_back(cdcvfileindex.get_name_leafdata());
    if (cdcfilexferconfpriurl.is_set || is_set(cdcfilexferconfpriurl.yfilter)) leaf_name_data.push_back(cdcfilexferconfpriurl.get_name_leafdata());
    if (cdcfilexferconfsecurl.is_set || is_set(cdcfilexferconfsecurl.yfilter)) leaf_name_data.push_back(cdcfilexferconfsecurl.get_name_leafdata());
    if (cdcfilexferconfretryperiod.is_set || is_set(cdcfilexferconfretryperiod.yfilter)) leaf_name_data.push_back(cdcfilexferconfretryperiod.get_name_leafdata());
    if (cdcfilexferconfretrycount.is_set || is_set(cdcfilexferconfretrycount.yfilter)) leaf_name_data.push_back(cdcfilexferconfretrycount.get_name_leafdata());
    if (cdcfilexferconfsuccessenable.is_set || is_set(cdcfilexferconfsuccessenable.yfilter)) leaf_name_data.push_back(cdcfilexferconfsuccessenable.get_name_leafdata());
    if (cdcfilexferconffailureenable.is_set || is_set(cdcfilexferconffailureenable.yfilter)) leaf_name_data.push_back(cdcfilexferconffailureenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex = value;
        cdcvfileindex.value_namespace = name_space;
        cdcvfileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcFileXferConfPriUrl")
    {
        cdcfilexferconfpriurl = value;
        cdcfilexferconfpriurl.value_namespace = name_space;
        cdcfilexferconfpriurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcFileXferConfSecUrl")
    {
        cdcfilexferconfsecurl = value;
        cdcfilexferconfsecurl.value_namespace = name_space;
        cdcfilexferconfsecurl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcFileXferConfRetryPeriod")
    {
        cdcfilexferconfretryperiod = value;
        cdcfilexferconfretryperiod.value_namespace = name_space;
        cdcfilexferconfretryperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcFileXferConfRetryCount")
    {
        cdcfilexferconfretrycount = value;
        cdcfilexferconfretrycount.value_namespace = name_space;
        cdcfilexferconfretrycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcFileXferConfSuccessEnable")
    {
        cdcfilexferconfsuccessenable = value;
        cdcfilexferconfsuccessenable.value_namespace = name_space;
        cdcfilexferconfsuccessenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdcFileXferConfFailureEnable")
    {
        cdcfilexferconffailureenable = value;
        cdcfilexferconffailureenable.value_namespace = name_space;
        cdcfilexferconffailureenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdcVFileIndex")
    {
        cdcvfileindex.yfilter = yfilter;
    }
    if(value_path == "cdcFileXferConfPriUrl")
    {
        cdcfilexferconfpriurl.yfilter = yfilter;
    }
    if(value_path == "cdcFileXferConfSecUrl")
    {
        cdcfilexferconfsecurl.yfilter = yfilter;
    }
    if(value_path == "cdcFileXferConfRetryPeriod")
    {
        cdcfilexferconfretryperiod.yfilter = yfilter;
    }
    if(value_path == "cdcFileXferConfRetryCount")
    {
        cdcfilexferconfretrycount.yfilter = yfilter;
    }
    if(value_path == "cdcFileXferConfSuccessEnable")
    {
        cdcfilexferconfsuccessenable.yfilter = yfilter;
    }
    if(value_path == "cdcFileXferConfFailureEnable")
    {
        cdcfilexferconffailureenable.yfilter = yfilter;
    }
}

bool CISCODATACOLLECTIONMIB::CdcFileXferConfTable::CdcFileXferConfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileIndex" || name == "cdcFileXferConfPriUrl" || name == "cdcFileXferConfSecUrl" || name == "cdcFileXferConfRetryPeriod" || name == "cdcFileXferConfRetryCount" || name == "cdcFileXferConfSuccessEnable" || name == "cdcFileXferConfFailureEnable")
        return true;
    return false;
}

const Enum::YLeaf CdcFileXferStatus::notStarted {1, "notStarted"};
const Enum::YLeaf CdcFileXferStatus::success {2, "success"};
const Enum::YLeaf CdcFileXferStatus::aborted {3, "aborted"};
const Enum::YLeaf CdcFileXferStatus::fileOpenFailRemote {4, "fileOpenFailRemote"};
const Enum::YLeaf CdcFileXferStatus::badDomainName {5, "badDomainName"};
const Enum::YLeaf CdcFileXferStatus::unreachableIpAddress {6, "unreachableIpAddress"};
const Enum::YLeaf CdcFileXferStatus::networkFailed {7, "networkFailed"};
const Enum::YLeaf CdcFileXferStatus::fileWriteFailed {8, "fileWriteFailed"};
const Enum::YLeaf CdcFileXferStatus::authFailed {9, "authFailed"};

const Enum::YLeaf CdcFileFormat::cdcBulkASCII {1, "cdcBulkASCII"};
const Enum::YLeaf CdcFileFormat::cdcBulkBinary {2, "cdcBulkBinary"};
const Enum::YLeaf CdcFileFormat::cdcSchemaASCII {3, "cdcSchemaASCII"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileCommand::idle {1, "idle"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileCommand::swapToNewFile {2, "swapToNewFile"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileCommand::collectNow {3, "collectNow"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileCollectMode::auto_ {1, "auto"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileCollectMode::manual {2, "manual"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileAdminStatus::enabled {1, "enabled"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileAdminStatus::disabled {2, "disabled"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileOperStatus::enabled {1, "enabled"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileOperStatus::disabled {2, "disabled"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileOperStatus::error {3, "error"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode::noError {1, "noError"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode::otherError {2, "otherError"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode::noSpace {3, "noSpace"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode::openError {4, "openError"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode::tooSmallMaxSize {5, "tooSmallMaxSize"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode::tooManyMaxSizeHits {6, "tooManyMaxSizeHits"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileTable::CdcVFileEntry::CdcVFileErrorCode::noResource {7, "noResource"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::CdcVFileMgmtCommand::idle {1, "idle"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::CdcVFileMgmtCommand::delete_ {2, "delete"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::CdcVFileMgmtCommand::transfer {3, "transfer"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcVFileMgmtTable::CdcVFileMgmtEntry::CdcVFileMgmtCommand::abortTransfer {4, "abortTransfer"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::CdcDGType::object {1, "object"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcDGTable::CdcDGEntry::CdcDGType::table {2, "table"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::CdcDGInstanceType::individual {1, "individual"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::CdcDGInstanceType::range {2, "range"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::CdcDGInstanceType::repititions {3, "repititions"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::CdcDGInstanceType::subTree {4, "subTree"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::CdcDGInstanceTable::CdcDGInstanceEntry::CdcDGInstanceType::other {5, "other"};


}
}

