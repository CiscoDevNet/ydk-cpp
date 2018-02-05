
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
    cdcvfile(std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfile>())
	,cdcvfiletable(std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfiletable>())
	,cdcvfilemgmttable(std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfilemgmttable>())
	,cdcdgtable(std::make_shared<CISCODATACOLLECTIONMIB::Cdcdgtable>())
	,cdcdgbaseobjecttable(std::make_shared<CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable>())
	,cdcdginstancetable(std::make_shared<CISCODATACOLLECTIONMIB::Cdcdginstancetable>())
	,cdcfilexferconftable(std::make_shared<CISCODATACOLLECTIONMIB::Cdcfilexferconftable>())
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

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFile")
    {
        if(cdcvfile == nullptr)
        {
            cdcvfile = std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfile>();
        }
        return cdcvfile;
    }

    if(child_yang_name == "cdcVFileTable")
    {
        if(cdcvfiletable == nullptr)
        {
            cdcvfiletable = std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfiletable>();
        }
        return cdcvfiletable;
    }

    if(child_yang_name == "cdcVFileMgmtTable")
    {
        if(cdcvfilemgmttable == nullptr)
        {
            cdcvfilemgmttable = std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfilemgmttable>();
        }
        return cdcvfilemgmttable;
    }

    if(child_yang_name == "cdcDGTable")
    {
        if(cdcdgtable == nullptr)
        {
            cdcdgtable = std::make_shared<CISCODATACOLLECTIONMIB::Cdcdgtable>();
        }
        return cdcdgtable;
    }

    if(child_yang_name == "cdcDGBaseObjectTable")
    {
        if(cdcdgbaseobjecttable == nullptr)
        {
            cdcdgbaseobjecttable = std::make_shared<CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable>();
        }
        return cdcdgbaseobjecttable;
    }

    if(child_yang_name == "cdcDGInstanceTable")
    {
        if(cdcdginstancetable == nullptr)
        {
            cdcdginstancetable = std::make_shared<CISCODATACOLLECTIONMIB::Cdcdginstancetable>();
        }
        return cdcdginstancetable;
    }

    if(child_yang_name == "cdcFileXferConfTable")
    {
        if(cdcfilexferconftable == nullptr)
        {
            cdcfilexferconftable = std::make_shared<CISCODATACOLLECTIONMIB::Cdcfilexferconftable>();
        }
        return cdcfilexferconftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cdcvfile != nullptr)
    {
        children["cdcVFile"] = cdcvfile;
    }

    if(cdcvfiletable != nullptr)
    {
        children["cdcVFileTable"] = cdcvfiletable;
    }

    if(cdcvfilemgmttable != nullptr)
    {
        children["cdcVFileMgmtTable"] = cdcvfilemgmttable;
    }

    if(cdcdgtable != nullptr)
    {
        children["cdcDGTable"] = cdcdgtable;
    }

    if(cdcdgbaseobjecttable != nullptr)
    {
        children["cdcDGBaseObjectTable"] = cdcdgbaseobjecttable;
    }

    if(cdcdginstancetable != nullptr)
    {
        children["cdcDGInstanceTable"] = cdcdginstancetable;
    }

    if(cdcfilexferconftable != nullptr)
    {
        children["cdcFileXferConfTable"] = cdcfilexferconftable;
    }

    return children;
}

void CISCODATACOLLECTIONMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::clone_ptr() const
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

CISCODATACOLLECTIONMIB::Cdcvfile::Cdcvfile()
    :
    cdcvfilepersistentstorage{YType::boolean, "cdcVFilePersistentStorage"},
    cdcvfilemaxsizehitslimit{YType::uint32, "cdcVFileMaxSizeHitsLimit"}
{

    yang_name = "cdcVFile"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcvfile::~Cdcvfile()
{
}

bool CISCODATACOLLECTIONMIB::Cdcvfile::has_data() const
{
    return cdcvfilepersistentstorage.is_set
	|| cdcvfilemaxsizehitslimit.is_set;
}

bool CISCODATACOLLECTIONMIB::Cdcvfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcvfilepersistentstorage.yfilter)
	|| ydk::is_set(cdcvfilemaxsizehitslimit.yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcvfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcvfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcvfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcvfilepersistentstorage.is_set || is_set(cdcvfilepersistentstorage.yfilter)) leaf_name_data.push_back(cdcvfilepersistentstorage.get_name_leafdata());
    if (cdcvfilemaxsizehitslimit.is_set || is_set(cdcvfilemaxsizehitslimit.yfilter)) leaf_name_data.push_back(cdcvfilemaxsizehitslimit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcvfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcvfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODATACOLLECTIONMIB::Cdcvfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODATACOLLECTIONMIB::Cdcvfile::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODATACOLLECTIONMIB::Cdcvfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFilePersistentStorage" || name == "cdcVFileMaxSizeHitsLimit")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfiletable()
{

    yang_name = "cdcVFileTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcvfiletable::~Cdcvfiletable()
{
}

bool CISCODATACOLLECTIONMIB::Cdcvfiletable::has_data() const
{
    for (std::size_t index=0; index<cdcvfileentry.size(); index++)
    {
        if(cdcvfileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::Cdcvfiletable::has_operation() const
{
    for (std::size_t index=0; index<cdcvfileentry.size(); index++)
    {
        if(cdcvfileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcvfiletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcvfiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcvfiletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcvfiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFileEntry")
    {
        auto c = std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry>();
        c->parent = this;
        cdcvfileentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcvfiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cdcvfileentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODATACOLLECTIONMIB::Cdcvfiletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::Cdcvfiletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::Cdcvfiletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileentry()
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

CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::~Cdcvfileentry()
{
}

bool CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::has_data() const
{
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

bool CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::has_operation() const
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

std::string CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcVFileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileEntry" <<"[cdcVFileIndex='" <<cdcvfileindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileIndex" || name == "cdcVFileName" || name == "cdcVFileDescription" || name == "cdcVFileCommand" || name == "cdcVFileMaxSize" || name == "cdcVFileCurrentSize" || name == "cdcVFileFormat" || name == "cdcVFileCollectMode" || name == "cdcVFileCollectionPeriod" || name == "cdcVFileRetentionPeriod" || name == "cdcVFileAdminStatus" || name == "cdcVFileOperStatus" || name == "cdcVFileErrorCode" || name == "cdcVFileCollectionErrorEnable" || name == "cdcVFileRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmttable()
{

    yang_name = "cdcVFileMgmtTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::~Cdcvfilemgmttable()
{
}

bool CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::has_data() const
{
    for (std::size_t index=0; index<cdcvfilemgmtentry.size(); index++)
    {
        if(cdcvfilemgmtentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::has_operation() const
{
    for (std::size_t index=0; index<cdcvfilemgmtentry.size(); index++)
    {
        if(cdcvfilemgmtentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileMgmtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcVFileMgmtEntry")
    {
        auto c = std::make_shared<CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry>();
        c->parent = this;
        cdcvfilemgmtentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cdcvfilemgmtentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileMgmtEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::Cdcvfilemgmtentry()
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

CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::~Cdcvfilemgmtentry()
{
}

bool CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::has_data() const
{
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

bool CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::has_operation() const
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

std::string CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcVFileMgmtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcVFileMgmtEntry" <<"[cdcVFileIndex='" <<cdcvfileindex <<"']" <<"[cdcVFileMgmtIndex='" <<cdcvfilemgmtindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileIndex" || name == "cdcVFileMgmtIndex" || name == "cdcVFileMgmtName" || name == "cdcVFileMgmtTimestamp" || name == "cdcVFileMgmtTimeToLive" || name == "cdcVFileMgmtCommand" || name == "cdcVFileMgmtXferURL" || name == "cdcVFileMgmtLastXferStatus" || name == "cdcVFileMgmtLastXferURL")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgtable()
{

    yang_name = "cdcDGTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcdgtable::~Cdcdgtable()
{
}

bool CISCODATACOLLECTIONMIB::Cdcdgtable::has_data() const
{
    for (std::size_t index=0; index<cdcdgentry.size(); index++)
    {
        if(cdcdgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::Cdcdgtable::has_operation() const
{
    for (std::size_t index=0; index<cdcdgentry.size(); index++)
    {
        if(cdcdgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcdgtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcdgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcdgtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcdgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGEntry")
    {
        auto c = std::make_shared<CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry>();
        c->parent = this;
        cdcdgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcdgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cdcdgentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODATACOLLECTIONMIB::Cdcdgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::Cdcdgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::Cdcdgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::Cdcdgentry()
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

CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::~Cdcdgentry()
{
}

bool CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::has_data() const
{
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

bool CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::has_operation() const
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

std::string CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGEntry" <<"[cdcDGIndex='" <<cdcdgindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGIndex" || name == "cdcDGComment" || name == "cdcDGType" || name == "cdcDGVFileIndex" || name == "cdcDGTargetTag" || name == "cdcDGContextName" || name == "cdcDGObject" || name == "cdcDGObjectGrpIndex" || name == "cdcDGInstGrpIndex" || name == "cdcDGPollPeriod" || name == "cdcDGRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjecttable()
{

    yang_name = "cdcDGBaseObjectTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::~Cdcdgbaseobjecttable()
{
}

bool CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::has_data() const
{
    for (std::size_t index=0; index<cdcdgbaseobjectentry.size(); index++)
    {
        if(cdcdgbaseobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::has_operation() const
{
    for (std::size_t index=0; index<cdcdgbaseobjectentry.size(); index++)
    {
        if(cdcdgbaseobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGBaseObjectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGBaseObjectEntry")
    {
        auto c = std::make_shared<CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry>();
        c->parent = this;
        cdcdgbaseobjectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cdcdgbaseobjectentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGBaseObjectEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::Cdcdgbaseobjectentry()
    :
    cdcdgbaseobjectgrpindex{YType::uint32, "cdcDGBaseObjectGrpIndex"},
    cdcdgbaseobjectindex{YType::uint32, "cdcDGBaseObjectIndex"},
    cdcdgbaseobjectsubtree{YType::str, "cdcDGBaseObjectSubtree"},
    cdcdgbaseobjectlist{YType::str, "cdcDGBaseObjectList"},
    cdcdgbaseobjectrowstatus{YType::enumeration, "cdcDGBaseObjectRowStatus"}
{

    yang_name = "cdcDGBaseObjectEntry"; yang_parent_name = "cdcDGBaseObjectTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::~Cdcdgbaseobjectentry()
{
}

bool CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::has_data() const
{
    return cdcdgbaseobjectgrpindex.is_set
	|| cdcdgbaseobjectindex.is_set
	|| cdcdgbaseobjectsubtree.is_set
	|| cdcdgbaseobjectlist.is_set
	|| cdcdgbaseobjectrowstatus.is_set;
}

bool CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdcdgbaseobjectgrpindex.yfilter)
	|| ydk::is_set(cdcdgbaseobjectindex.yfilter)
	|| ydk::is_set(cdcdgbaseobjectsubtree.yfilter)
	|| ydk::is_set(cdcdgbaseobjectlist.yfilter)
	|| ydk::is_set(cdcdgbaseobjectrowstatus.yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGBaseObjectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGBaseObjectEntry" <<"[cdcDGBaseObjectGrpIndex='" <<cdcdgbaseobjectgrpindex <<"']" <<"[cdcDGBaseObjectIndex='" <<cdcdgbaseobjectindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdcdgbaseobjectgrpindex.is_set || is_set(cdcdgbaseobjectgrpindex.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectgrpindex.get_name_leafdata());
    if (cdcdgbaseobjectindex.is_set || is_set(cdcdgbaseobjectindex.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectindex.get_name_leafdata());
    if (cdcdgbaseobjectsubtree.is_set || is_set(cdcdgbaseobjectsubtree.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectsubtree.get_name_leafdata());
    if (cdcdgbaseobjectlist.is_set || is_set(cdcdgbaseobjectlist.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectlist.get_name_leafdata());
    if (cdcdgbaseobjectrowstatus.is_set || is_set(cdcdgbaseobjectrowstatus.yfilter)) leaf_name_data.push_back(cdcdgbaseobjectrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODATACOLLECTIONMIB::Cdcdgbaseobjecttable::Cdcdgbaseobjectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGBaseObjectGrpIndex" || name == "cdcDGBaseObjectIndex" || name == "cdcDGBaseObjectSubtree" || name == "cdcDGBaseObjectList" || name == "cdcDGBaseObjectRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstancetable()
{

    yang_name = "cdcDGInstanceTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcdginstancetable::~Cdcdginstancetable()
{
}

bool CISCODATACOLLECTIONMIB::Cdcdginstancetable::has_data() const
{
    for (std::size_t index=0; index<cdcdginstanceentry.size(); index++)
    {
        if(cdcdginstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::Cdcdginstancetable::has_operation() const
{
    for (std::size_t index=0; index<cdcdginstanceentry.size(); index++)
    {
        if(cdcdginstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcdginstancetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcdginstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcdginstancetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcdginstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcDGInstanceEntry")
    {
        auto c = std::make_shared<CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry>();
        c->parent = this;
        cdcdginstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcdginstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cdcdginstanceentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODATACOLLECTIONMIB::Cdcdginstancetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::Cdcdginstancetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::Cdcdginstancetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGInstanceEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstanceentry()
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

CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::~Cdcdginstanceentry()
{
}

bool CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::has_data() const
{
    return cdcdginstancegrpindex.is_set
	|| cdcdginstanceindex.is_set
	|| cdcdginstancetype.is_set
	|| cdcdginstanceoid.is_set
	|| cdcdginstanceoidend.is_set
	|| cdcdginstancenumrepititions.is_set
	|| cdcdginstanceotherptr.is_set
	|| cdcdginstancerowstatus.is_set;
}

bool CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::has_operation() const
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

std::string CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcDGInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcDGInstanceEntry" <<"[cdcDGInstanceGrpIndex='" <<cdcdginstancegrpindex <<"']" <<"[cdcDGInstanceIndex='" <<cdcdginstanceindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcDGInstanceGrpIndex" || name == "cdcDGInstanceIndex" || name == "cdcDGInstanceType" || name == "cdcDGInstanceOid" || name == "cdcDGInstanceOidEnd" || name == "cdcDGInstanceNumRepititions" || name == "cdcDGInstanceOtherPtr" || name == "cdcDGInstanceRowStatus")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconftable()
{

    yang_name = "cdcFileXferConfTable"; yang_parent_name = "CISCO-DATA-COLLECTION-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCODATACOLLECTIONMIB::Cdcfilexferconftable::~Cdcfilexferconftable()
{
}

bool CISCODATACOLLECTIONMIB::Cdcfilexferconftable::has_data() const
{
    for (std::size_t index=0; index<cdcfilexferconfentry.size(); index++)
    {
        if(cdcfilexferconfentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODATACOLLECTIONMIB::Cdcfilexferconftable::has_operation() const
{
    for (std::size_t index=0; index<cdcfilexferconfentry.size(); index++)
    {
        if(cdcfilexferconfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODATACOLLECTIONMIB::Cdcfilexferconftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcfilexferconftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcFileXferConfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcfilexferconftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcfilexferconftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdcFileXferConfEntry")
    {
        auto c = std::make_shared<CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry>();
        c->parent = this;
        cdcfilexferconfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcfilexferconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cdcfilexferconfentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODATACOLLECTIONMIB::Cdcfilexferconftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODATACOLLECTIONMIB::Cdcfilexferconftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODATACOLLECTIONMIB::Cdcfilexferconftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcFileXferConfEntry")
        return true;
    return false;
}

CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::Cdcfilexferconfentry()
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

CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::~Cdcfilexferconfentry()
{
}

bool CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::has_data() const
{
    return cdcvfileindex.is_set
	|| cdcfilexferconfpriurl.is_set
	|| cdcfilexferconfsecurl.is_set
	|| cdcfilexferconfretryperiod.is_set
	|| cdcfilexferconfretrycount.is_set
	|| cdcfilexferconfsuccessenable.is_set
	|| cdcfilexferconffailureenable.is_set;
}

bool CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::has_operation() const
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

std::string CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DATA-COLLECTION-MIB:CISCO-DATA-COLLECTION-MIB/cdcFileXferConfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdcFileXferConfEntry" <<"[cdcVFileIndex='" <<cdcvfileindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCODATACOLLECTIONMIB::Cdcfilexferconftable::Cdcfilexferconfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdcVFileIndex" || name == "cdcFileXferConfPriUrl" || name == "cdcFileXferConfSecUrl" || name == "cdcFileXferConfRetryPeriod" || name == "cdcFileXferConfRetryCount" || name == "cdcFileXferConfSuccessEnable" || name == "cdcFileXferConfFailureEnable")
        return true;
    return false;
}

const Enum::YLeaf CdcFileFormat::cdcBulkASCII {1, "cdcBulkASCII"};
const Enum::YLeaf CdcFileFormat::cdcBulkBinary {2, "cdcBulkBinary"};
const Enum::YLeaf CdcFileFormat::cdcSchemaASCII {3, "cdcSchemaASCII"};

const Enum::YLeaf CdcFileXferStatus::notStarted {1, "notStarted"};
const Enum::YLeaf CdcFileXferStatus::success {2, "success"};
const Enum::YLeaf CdcFileXferStatus::aborted {3, "aborted"};
const Enum::YLeaf CdcFileXferStatus::fileOpenFailRemote {4, "fileOpenFailRemote"};
const Enum::YLeaf CdcFileXferStatus::badDomainName {5, "badDomainName"};
const Enum::YLeaf CdcFileXferStatus::unreachableIpAddress {6, "unreachableIpAddress"};
const Enum::YLeaf CdcFileXferStatus::networkFailed {7, "networkFailed"};
const Enum::YLeaf CdcFileXferStatus::fileWriteFailed {8, "fileWriteFailed"};
const Enum::YLeaf CdcFileXferStatus::authFailed {9, "authFailed"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfilecommand::idle {1, "idle"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfilecommand::swapToNewFile {2, "swapToNewFile"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfilecommand::collectNow {3, "collectNow"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfilecollectmode::auto_ {1, "auto"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfilecollectmode::manual {2, "manual"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileadminstatus::enabled {1, "enabled"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileadminstatus::disabled {2, "disabled"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileoperstatus::enabled {1, "enabled"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileoperstatus::disabled {2, "disabled"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileoperstatus::error {3, "error"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode::noError {1, "noError"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode::otherError {2, "otherError"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode::noSpace {3, "noSpace"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode::openError {4, "openError"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode::tooSmallMaxSize {5, "tooSmallMaxSize"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode::tooManyMaxSizeHits {6, "tooManyMaxSizeHits"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfiletable::Cdcvfileentry::Cdcvfileerrorcode::noResource {7, "noResource"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::Cdcvfilemgmtcommand::idle {1, "idle"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::Cdcvfilemgmtcommand::delete_ {2, "delete"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::Cdcvfilemgmtcommand::transfer {3, "transfer"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcvfilemgmttable::Cdcvfilemgmtentry::Cdcvfilemgmtcommand::abortTransfer {4, "abortTransfer"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::Cdcdgtype::object {1, "object"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcdgtable::Cdcdgentry::Cdcdgtype::table {2, "table"};

const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstancetype::individual {1, "individual"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstancetype::range {2, "range"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstancetype::repititions {3, "repititions"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstancetype::subTree {4, "subTree"};
const Enum::YLeaf CISCODATACOLLECTIONMIB::Cdcdginstancetable::Cdcdginstanceentry::Cdcdginstancetype::other {5, "other"};


}
}

