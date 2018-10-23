
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CDP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CDP_MIB {

CISCOCDPMIB::CISCOCDPMIB()
    :
    cdpglobal(std::make_shared<CISCOCDPMIB::CdpGlobal>())
    , cdpinterfacetable(std::make_shared<CISCOCDPMIB::CdpInterfaceTable>())
    , cdpinterfaceexttable(std::make_shared<CISCOCDPMIB::CdpInterfaceExtTable>())
    , cdpcachetable(std::make_shared<CISCOCDPMIB::CdpCacheTable>())
    , cdpctaddresstable(std::make_shared<CISCOCDPMIB::CdpCtAddressTable>())
{
    cdpglobal->parent = this;
    cdpinterfacetable->parent = this;
    cdpinterfaceexttable->parent = this;
    cdpcachetable->parent = this;
    cdpctaddresstable->parent = this;

    yang_name = "CISCO-CDP-MIB"; yang_parent_name = "CISCO-CDP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCDPMIB::~CISCOCDPMIB()
{
}

bool CISCOCDPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cdpglobal !=  nullptr && cdpglobal->has_data())
	|| (cdpinterfacetable !=  nullptr && cdpinterfacetable->has_data())
	|| (cdpinterfaceexttable !=  nullptr && cdpinterfaceexttable->has_data())
	|| (cdpcachetable !=  nullptr && cdpcachetable->has_data())
	|| (cdpctaddresstable !=  nullptr && cdpctaddresstable->has_data());
}

bool CISCOCDPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cdpglobal !=  nullptr && cdpglobal->has_operation())
	|| (cdpinterfacetable !=  nullptr && cdpinterfacetable->has_operation())
	|| (cdpinterfaceexttable !=  nullptr && cdpinterfaceexttable->has_operation())
	|| (cdpcachetable !=  nullptr && cdpcachetable->has_operation())
	|| (cdpctaddresstable !=  nullptr && cdpctaddresstable->has_operation());
}

std::string CISCOCDPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpGlobal")
    {
        if(cdpglobal == nullptr)
        {
            cdpglobal = std::make_shared<CISCOCDPMIB::CdpGlobal>();
        }
        return cdpglobal;
    }

    if(child_yang_name == "cdpInterfaceTable")
    {
        if(cdpinterfacetable == nullptr)
        {
            cdpinterfacetable = std::make_shared<CISCOCDPMIB::CdpInterfaceTable>();
        }
        return cdpinterfacetable;
    }

    if(child_yang_name == "cdpInterfaceExtTable")
    {
        if(cdpinterfaceexttable == nullptr)
        {
            cdpinterfaceexttable = std::make_shared<CISCOCDPMIB::CdpInterfaceExtTable>();
        }
        return cdpinterfaceexttable;
    }

    if(child_yang_name == "cdpCacheTable")
    {
        if(cdpcachetable == nullptr)
        {
            cdpcachetable = std::make_shared<CISCOCDPMIB::CdpCacheTable>();
        }
        return cdpcachetable;
    }

    if(child_yang_name == "cdpCtAddressTable")
    {
        if(cdpctaddresstable == nullptr)
        {
            cdpctaddresstable = std::make_shared<CISCOCDPMIB::CdpCtAddressTable>();
        }
        return cdpctaddresstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cdpglobal != nullptr)
    {
        _children["cdpGlobal"] = cdpglobal;
    }

    if(cdpinterfacetable != nullptr)
    {
        _children["cdpInterfaceTable"] = cdpinterfacetable;
    }

    if(cdpinterfaceexttable != nullptr)
    {
        _children["cdpInterfaceExtTable"] = cdpinterfaceexttable;
    }

    if(cdpcachetable != nullptr)
    {
        _children["cdpCacheTable"] = cdpcachetable;
    }

    if(cdpctaddresstable != nullptr)
    {
        _children["cdpCtAddressTable"] = cdpctaddresstable;
    }

    return _children;
}

void CISCOCDPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCDPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::clone_ptr() const
{
    return std::make_shared<CISCOCDPMIB>();
}

std::string CISCOCDPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCDPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCDPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCDPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCDPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpGlobal" || name == "cdpInterfaceTable" || name == "cdpInterfaceExtTable" || name == "cdpCacheTable" || name == "cdpCtAddressTable")
        return true;
    return false;
}

CISCOCDPMIB::CdpGlobal::CdpGlobal()
    :
    cdpglobalrun{YType::boolean, "cdpGlobalRun"},
    cdpglobalmessageinterval{YType::int32, "cdpGlobalMessageInterval"},
    cdpglobalholdtime{YType::int32, "cdpGlobalHoldTime"},
    cdpglobaldeviceid{YType::str, "cdpGlobalDeviceId"},
    cdpgloballastchange{YType::uint32, "cdpGlobalLastChange"},
    cdpglobaldeviceidformatcpb{YType::bits, "cdpGlobalDeviceIdFormatCpb"},
    cdpglobaldeviceidformat{YType::enumeration, "cdpGlobalDeviceIdFormat"}
{

    yang_name = "cdpGlobal"; yang_parent_name = "CISCO-CDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpGlobal::~CdpGlobal()
{
}

bool CISCOCDPMIB::CdpGlobal::has_data() const
{
    if (is_presence_container) return true;
    return cdpglobalrun.is_set
	|| cdpglobalmessageinterval.is_set
	|| cdpglobalholdtime.is_set
	|| cdpglobaldeviceid.is_set
	|| cdpgloballastchange.is_set
	|| cdpglobaldeviceidformatcpb.is_set
	|| cdpglobaldeviceidformat.is_set;
}

bool CISCOCDPMIB::CdpGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpglobalrun.yfilter)
	|| ydk::is_set(cdpglobalmessageinterval.yfilter)
	|| ydk::is_set(cdpglobalholdtime.yfilter)
	|| ydk::is_set(cdpglobaldeviceid.yfilter)
	|| ydk::is_set(cdpgloballastchange.yfilter)
	|| ydk::is_set(cdpglobaldeviceidformatcpb.yfilter)
	|| ydk::is_set(cdpglobaldeviceidformat.yfilter);
}

std::string CISCOCDPMIB::CdpGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpGlobal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpglobalrun.is_set || is_set(cdpglobalrun.yfilter)) leaf_name_data.push_back(cdpglobalrun.get_name_leafdata());
    if (cdpglobalmessageinterval.is_set || is_set(cdpglobalmessageinterval.yfilter)) leaf_name_data.push_back(cdpglobalmessageinterval.get_name_leafdata());
    if (cdpglobalholdtime.is_set || is_set(cdpglobalholdtime.yfilter)) leaf_name_data.push_back(cdpglobalholdtime.get_name_leafdata());
    if (cdpglobaldeviceid.is_set || is_set(cdpglobaldeviceid.yfilter)) leaf_name_data.push_back(cdpglobaldeviceid.get_name_leafdata());
    if (cdpgloballastchange.is_set || is_set(cdpgloballastchange.yfilter)) leaf_name_data.push_back(cdpgloballastchange.get_name_leafdata());
    if (cdpglobaldeviceidformatcpb.is_set || is_set(cdpglobaldeviceidformatcpb.yfilter)) leaf_name_data.push_back(cdpglobaldeviceidformatcpb.get_name_leafdata());
    if (cdpglobaldeviceidformat.is_set || is_set(cdpglobaldeviceidformat.yfilter)) leaf_name_data.push_back(cdpglobaldeviceidformat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCDPMIB::CdpGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdpGlobalRun")
    {
        cdpglobalrun = value;
        cdpglobalrun.value_namespace = name_space;
        cdpglobalrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalMessageInterval")
    {
        cdpglobalmessageinterval = value;
        cdpglobalmessageinterval.value_namespace = name_space;
        cdpglobalmessageinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalHoldTime")
    {
        cdpglobalholdtime = value;
        cdpglobalholdtime.value_namespace = name_space;
        cdpglobalholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalDeviceId")
    {
        cdpglobaldeviceid = value;
        cdpglobaldeviceid.value_namespace = name_space;
        cdpglobaldeviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalLastChange")
    {
        cdpgloballastchange = value;
        cdpgloballastchange.value_namespace = name_space;
        cdpgloballastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalDeviceIdFormatCpb")
    {
        cdpglobaldeviceidformatcpb[value] = true;
    }
    if(value_path == "cdpGlobalDeviceIdFormat")
    {
        cdpglobaldeviceidformat = value;
        cdpglobaldeviceidformat.value_namespace = name_space;
        cdpglobaldeviceidformat.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCDPMIB::CdpGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdpGlobalRun")
    {
        cdpglobalrun.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalMessageInterval")
    {
        cdpglobalmessageinterval.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalHoldTime")
    {
        cdpglobalholdtime.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalDeviceId")
    {
        cdpglobaldeviceid.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalLastChange")
    {
        cdpgloballastchange.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalDeviceIdFormatCpb")
    {
        cdpglobaldeviceidformatcpb.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalDeviceIdFormat")
    {
        cdpglobaldeviceidformat.yfilter = yfilter;
    }
}

bool CISCOCDPMIB::CdpGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpGlobalRun" || name == "cdpGlobalMessageInterval" || name == "cdpGlobalHoldTime" || name == "cdpGlobalDeviceId" || name == "cdpGlobalLastChange" || name == "cdpGlobalDeviceIdFormatCpb" || name == "cdpGlobalDeviceIdFormat")
        return true;
    return false;
}

CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceTable()
    :
    cdpinterfaceentry(this, {"cdpinterfaceifindex"})
{

    yang_name = "cdpInterfaceTable"; yang_parent_name = "CISCO-CDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpInterfaceTable::~CdpInterfaceTable()
{
}

bool CISCOCDPMIB::CdpInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdpinterfaceentry.len(); index++)
    {
        if(cdpinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCDPMIB::CdpInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<cdpinterfaceentry.len(); index++)
    {
        if(cdpinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCDPMIB::CdpInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpInterfaceEntry")
    {
        auto ent_ = std::make_shared<CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry>();
        ent_->parent = this;
        cdpinterfaceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdpinterfaceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCDPMIB::CdpInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCDPMIB::CdpInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCDPMIB::CdpInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpInterfaceEntry")
        return true;
    return false;
}

CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::CdpInterfaceEntry()
    :
    cdpinterfaceifindex{YType::int32, "cdpInterfaceIfIndex"},
    cdpinterfaceenable{YType::boolean, "cdpInterfaceEnable"},
    cdpinterfacemessageinterval{YType::int32, "cdpInterfaceMessageInterval"},
    cdpinterfacegroup{YType::int32, "cdpInterfaceGroup"},
    cdpinterfaceport{YType::int32, "cdpInterfacePort"},
    cdpinterfacename{YType::str, "cdpInterfaceName"}
{

    yang_name = "cdpInterfaceEntry"; yang_parent_name = "cdpInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::~CdpInterfaceEntry()
{
}

bool CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdpinterfaceifindex.is_set
	|| cdpinterfaceenable.is_set
	|| cdpinterfacemessageinterval.is_set
	|| cdpinterfacegroup.is_set
	|| cdpinterfaceport.is_set
	|| cdpinterfacename.is_set;
}

bool CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpinterfaceifindex.yfilter)
	|| ydk::is_set(cdpinterfaceenable.yfilter)
	|| ydk::is_set(cdpinterfacemessageinterval.yfilter)
	|| ydk::is_set(cdpinterfacegroup.yfilter)
	|| ydk::is_set(cdpinterfaceport.yfilter)
	|| ydk::is_set(cdpinterfacename.yfilter);
}

std::string CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceEntry";
    ADD_KEY_TOKEN(cdpinterfaceifindex, "cdpInterfaceIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpinterfaceifindex.is_set || is_set(cdpinterfaceifindex.yfilter)) leaf_name_data.push_back(cdpinterfaceifindex.get_name_leafdata());
    if (cdpinterfaceenable.is_set || is_set(cdpinterfaceenable.yfilter)) leaf_name_data.push_back(cdpinterfaceenable.get_name_leafdata());
    if (cdpinterfacemessageinterval.is_set || is_set(cdpinterfacemessageinterval.yfilter)) leaf_name_data.push_back(cdpinterfacemessageinterval.get_name_leafdata());
    if (cdpinterfacegroup.is_set || is_set(cdpinterfacegroup.yfilter)) leaf_name_data.push_back(cdpinterfacegroup.get_name_leafdata());
    if (cdpinterfaceport.is_set || is_set(cdpinterfaceport.yfilter)) leaf_name_data.push_back(cdpinterfaceport.get_name_leafdata());
    if (cdpinterfacename.is_set || is_set(cdpinterfacename.yfilter)) leaf_name_data.push_back(cdpinterfacename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdpInterfaceIfIndex")
    {
        cdpinterfaceifindex = value;
        cdpinterfaceifindex.value_namespace = name_space;
        cdpinterfaceifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceEnable")
    {
        cdpinterfaceenable = value;
        cdpinterfaceenable.value_namespace = name_space;
        cdpinterfaceenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceMessageInterval")
    {
        cdpinterfacemessageinterval = value;
        cdpinterfacemessageinterval.value_namespace = name_space;
        cdpinterfacemessageinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceGroup")
    {
        cdpinterfacegroup = value;
        cdpinterfacegroup.value_namespace = name_space;
        cdpinterfacegroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfacePort")
    {
        cdpinterfaceport = value;
        cdpinterfaceport.value_namespace = name_space;
        cdpinterfaceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceName")
    {
        cdpinterfacename = value;
        cdpinterfacename.value_namespace = name_space;
        cdpinterfacename.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdpInterfaceIfIndex")
    {
        cdpinterfaceifindex.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceEnable")
    {
        cdpinterfaceenable.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceMessageInterval")
    {
        cdpinterfacemessageinterval.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceGroup")
    {
        cdpinterfacegroup.yfilter = yfilter;
    }
    if(value_path == "cdpInterfacePort")
    {
        cdpinterfaceport.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceName")
    {
        cdpinterfacename.yfilter = yfilter;
    }
}

bool CISCOCDPMIB::CdpInterfaceTable::CdpInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpInterfaceIfIndex" || name == "cdpInterfaceEnable" || name == "cdpInterfaceMessageInterval" || name == "cdpInterfaceGroup" || name == "cdpInterfacePort" || name == "cdpInterfaceName")
        return true;
    return false;
}

CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtTable()
    :
    cdpinterfaceextentry(this, {"ifindex"})
{

    yang_name = "cdpInterfaceExtTable"; yang_parent_name = "CISCO-CDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpInterfaceExtTable::~CdpInterfaceExtTable()
{
}

bool CISCOCDPMIB::CdpInterfaceExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdpinterfaceextentry.len(); index++)
    {
        if(cdpinterfaceextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCDPMIB::CdpInterfaceExtTable::has_operation() const
{
    for (std::size_t index=0; index<cdpinterfaceextentry.len(); index++)
    {
        if(cdpinterfaceextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCDPMIB::CdpInterfaceExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpInterfaceExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpInterfaceExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpInterfaceExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpInterfaceExtEntry")
    {
        auto ent_ = std::make_shared<CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry>();
        ent_->parent = this;
        cdpinterfaceextentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpInterfaceExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdpinterfaceextentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCDPMIB::CdpInterfaceExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCDPMIB::CdpInterfaceExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCDPMIB::CdpInterfaceExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpInterfaceExtEntry")
        return true;
    return false;
}

CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::CdpInterfaceExtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdpinterfaceextendedtrust{YType::enumeration, "cdpInterfaceExtendedTrust"},
    cdpinterfacecosforuntrustedport{YType::uint32, "cdpInterfaceCosForUntrustedPort"}
{

    yang_name = "cdpInterfaceExtEntry"; yang_parent_name = "cdpInterfaceExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::~CdpInterfaceExtEntry()
{
}

bool CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdpinterfaceextendedtrust.is_set
	|| cdpinterfacecosforuntrustedport.is_set;
}

bool CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdpinterfaceextendedtrust.yfilter)
	|| ydk::is_set(cdpinterfacecosforuntrustedport.yfilter);
}

std::string CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpInterfaceExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceExtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdpinterfaceextendedtrust.is_set || is_set(cdpinterfaceextendedtrust.yfilter)) leaf_name_data.push_back(cdpinterfaceextendedtrust.get_name_leafdata());
    if (cdpinterfacecosforuntrustedport.is_set || is_set(cdpinterfacecosforuntrustedport.yfilter)) leaf_name_data.push_back(cdpinterfacecosforuntrustedport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceExtendedTrust")
    {
        cdpinterfaceextendedtrust = value;
        cdpinterfaceextendedtrust.value_namespace = name_space;
        cdpinterfaceextendedtrust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceCosForUntrustedPort")
    {
        cdpinterfacecosforuntrustedport = value;
        cdpinterfacecosforuntrustedport.value_namespace = name_space;
        cdpinterfacecosforuntrustedport.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceExtendedTrust")
    {
        cdpinterfaceextendedtrust.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceCosForUntrustedPort")
    {
        cdpinterfacecosforuntrustedport.yfilter = yfilter;
    }
}

bool CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdpInterfaceExtendedTrust" || name == "cdpInterfaceCosForUntrustedPort")
        return true;
    return false;
}

CISCOCDPMIB::CdpCacheTable::CdpCacheTable()
    :
    cdpcacheentry(this, {"cdpcacheifindex", "cdpcachedeviceindex"})
{

    yang_name = "cdpCacheTable"; yang_parent_name = "CISCO-CDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpCacheTable::~CdpCacheTable()
{
}

bool CISCOCDPMIB::CdpCacheTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdpcacheentry.len(); index++)
    {
        if(cdpcacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCDPMIB::CdpCacheTable::has_operation() const
{
    for (std::size_t index=0; index<cdpcacheentry.len(); index++)
    {
        if(cdpcacheentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCDPMIB::CdpCacheTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpCacheTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCacheTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpCacheTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpCacheTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCacheEntry")
    {
        auto ent_ = std::make_shared<CISCOCDPMIB::CdpCacheTable::CdpCacheEntry>();
        ent_->parent = this;
        cdpcacheentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpCacheTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdpcacheentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCDPMIB::CdpCacheTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCDPMIB::CdpCacheTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCDPMIB::CdpCacheTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCacheEntry")
        return true;
    return false;
}

CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::CdpCacheEntry()
    :
    cdpcacheifindex{YType::int32, "cdpCacheIfIndex"},
    cdpcachedeviceindex{YType::int32, "cdpCacheDeviceIndex"},
    cdpcacheaddresstype{YType::enumeration, "cdpCacheAddressType"},
    cdpcacheaddress{YType::str, "cdpCacheAddress"},
    cdpcacheversion{YType::str, "cdpCacheVersion"},
    cdpcachedeviceid{YType::str, "cdpCacheDeviceId"},
    cdpcachedeviceport{YType::str, "cdpCacheDevicePort"},
    cdpcacheplatform{YType::str, "cdpCachePlatform"},
    cdpcachecapabilities{YType::str, "cdpCacheCapabilities"},
    cdpcachevtpmgmtdomain{YType::str, "cdpCacheVTPMgmtDomain"},
    cdpcachenativevlan{YType::int32, "cdpCacheNativeVLAN"},
    cdpcacheduplex{YType::enumeration, "cdpCacheDuplex"},
    cdpcacheapplianceid{YType::uint32, "cdpCacheApplianceID"},
    cdpcachevlanid{YType::uint32, "cdpCacheVlanID"},
    cdpcachepowerconsumption{YType::uint32, "cdpCachePowerConsumption"},
    cdpcachemtu{YType::uint32, "cdpCacheMTU"},
    cdpcachesysname{YType::str, "cdpCacheSysName"},
    cdpcachesysobjectid{YType::str, "cdpCacheSysObjectID"},
    cdpcacheprimarymgmtaddrtype{YType::enumeration, "cdpCachePrimaryMgmtAddrType"},
    cdpcacheprimarymgmtaddr{YType::str, "cdpCachePrimaryMgmtAddr"},
    cdpcachesecondarymgmtaddrtype{YType::enumeration, "cdpCacheSecondaryMgmtAddrType"},
    cdpcachesecondarymgmtaddr{YType::str, "cdpCacheSecondaryMgmtAddr"},
    cdpcachephyslocation{YType::str, "cdpCachePhysLocation"},
    cdpcachelastchange{YType::uint32, "cdpCacheLastChange"}
{

    yang_name = "cdpCacheEntry"; yang_parent_name = "cdpCacheTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::~CdpCacheEntry()
{
}

bool CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdpcacheifindex.is_set
	|| cdpcachedeviceindex.is_set
	|| cdpcacheaddresstype.is_set
	|| cdpcacheaddress.is_set
	|| cdpcacheversion.is_set
	|| cdpcachedeviceid.is_set
	|| cdpcachedeviceport.is_set
	|| cdpcacheplatform.is_set
	|| cdpcachecapabilities.is_set
	|| cdpcachevtpmgmtdomain.is_set
	|| cdpcachenativevlan.is_set
	|| cdpcacheduplex.is_set
	|| cdpcacheapplianceid.is_set
	|| cdpcachevlanid.is_set
	|| cdpcachepowerconsumption.is_set
	|| cdpcachemtu.is_set
	|| cdpcachesysname.is_set
	|| cdpcachesysobjectid.is_set
	|| cdpcacheprimarymgmtaddrtype.is_set
	|| cdpcacheprimarymgmtaddr.is_set
	|| cdpcachesecondarymgmtaddrtype.is_set
	|| cdpcachesecondarymgmtaddr.is_set
	|| cdpcachephyslocation.is_set
	|| cdpcachelastchange.is_set;
}

bool CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpcacheifindex.yfilter)
	|| ydk::is_set(cdpcachedeviceindex.yfilter)
	|| ydk::is_set(cdpcacheaddresstype.yfilter)
	|| ydk::is_set(cdpcacheaddress.yfilter)
	|| ydk::is_set(cdpcacheversion.yfilter)
	|| ydk::is_set(cdpcachedeviceid.yfilter)
	|| ydk::is_set(cdpcachedeviceport.yfilter)
	|| ydk::is_set(cdpcacheplatform.yfilter)
	|| ydk::is_set(cdpcachecapabilities.yfilter)
	|| ydk::is_set(cdpcachevtpmgmtdomain.yfilter)
	|| ydk::is_set(cdpcachenativevlan.yfilter)
	|| ydk::is_set(cdpcacheduplex.yfilter)
	|| ydk::is_set(cdpcacheapplianceid.yfilter)
	|| ydk::is_set(cdpcachevlanid.yfilter)
	|| ydk::is_set(cdpcachepowerconsumption.yfilter)
	|| ydk::is_set(cdpcachemtu.yfilter)
	|| ydk::is_set(cdpcachesysname.yfilter)
	|| ydk::is_set(cdpcachesysobjectid.yfilter)
	|| ydk::is_set(cdpcacheprimarymgmtaddrtype.yfilter)
	|| ydk::is_set(cdpcacheprimarymgmtaddr.yfilter)
	|| ydk::is_set(cdpcachesecondarymgmtaddrtype.yfilter)
	|| ydk::is_set(cdpcachesecondarymgmtaddr.yfilter)
	|| ydk::is_set(cdpcachephyslocation.yfilter)
	|| ydk::is_set(cdpcachelastchange.yfilter);
}

std::string CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpCacheTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCacheEntry";
    ADD_KEY_TOKEN(cdpcacheifindex, "cdpCacheIfIndex");
    ADD_KEY_TOKEN(cdpcachedeviceindex, "cdpCacheDeviceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpcacheifindex.is_set || is_set(cdpcacheifindex.yfilter)) leaf_name_data.push_back(cdpcacheifindex.get_name_leafdata());
    if (cdpcachedeviceindex.is_set || is_set(cdpcachedeviceindex.yfilter)) leaf_name_data.push_back(cdpcachedeviceindex.get_name_leafdata());
    if (cdpcacheaddresstype.is_set || is_set(cdpcacheaddresstype.yfilter)) leaf_name_data.push_back(cdpcacheaddresstype.get_name_leafdata());
    if (cdpcacheaddress.is_set || is_set(cdpcacheaddress.yfilter)) leaf_name_data.push_back(cdpcacheaddress.get_name_leafdata());
    if (cdpcacheversion.is_set || is_set(cdpcacheversion.yfilter)) leaf_name_data.push_back(cdpcacheversion.get_name_leafdata());
    if (cdpcachedeviceid.is_set || is_set(cdpcachedeviceid.yfilter)) leaf_name_data.push_back(cdpcachedeviceid.get_name_leafdata());
    if (cdpcachedeviceport.is_set || is_set(cdpcachedeviceport.yfilter)) leaf_name_data.push_back(cdpcachedeviceport.get_name_leafdata());
    if (cdpcacheplatform.is_set || is_set(cdpcacheplatform.yfilter)) leaf_name_data.push_back(cdpcacheplatform.get_name_leafdata());
    if (cdpcachecapabilities.is_set || is_set(cdpcachecapabilities.yfilter)) leaf_name_data.push_back(cdpcachecapabilities.get_name_leafdata());
    if (cdpcachevtpmgmtdomain.is_set || is_set(cdpcachevtpmgmtdomain.yfilter)) leaf_name_data.push_back(cdpcachevtpmgmtdomain.get_name_leafdata());
    if (cdpcachenativevlan.is_set || is_set(cdpcachenativevlan.yfilter)) leaf_name_data.push_back(cdpcachenativevlan.get_name_leafdata());
    if (cdpcacheduplex.is_set || is_set(cdpcacheduplex.yfilter)) leaf_name_data.push_back(cdpcacheduplex.get_name_leafdata());
    if (cdpcacheapplianceid.is_set || is_set(cdpcacheapplianceid.yfilter)) leaf_name_data.push_back(cdpcacheapplianceid.get_name_leafdata());
    if (cdpcachevlanid.is_set || is_set(cdpcachevlanid.yfilter)) leaf_name_data.push_back(cdpcachevlanid.get_name_leafdata());
    if (cdpcachepowerconsumption.is_set || is_set(cdpcachepowerconsumption.yfilter)) leaf_name_data.push_back(cdpcachepowerconsumption.get_name_leafdata());
    if (cdpcachemtu.is_set || is_set(cdpcachemtu.yfilter)) leaf_name_data.push_back(cdpcachemtu.get_name_leafdata());
    if (cdpcachesysname.is_set || is_set(cdpcachesysname.yfilter)) leaf_name_data.push_back(cdpcachesysname.get_name_leafdata());
    if (cdpcachesysobjectid.is_set || is_set(cdpcachesysobjectid.yfilter)) leaf_name_data.push_back(cdpcachesysobjectid.get_name_leafdata());
    if (cdpcacheprimarymgmtaddrtype.is_set || is_set(cdpcacheprimarymgmtaddrtype.yfilter)) leaf_name_data.push_back(cdpcacheprimarymgmtaddrtype.get_name_leafdata());
    if (cdpcacheprimarymgmtaddr.is_set || is_set(cdpcacheprimarymgmtaddr.yfilter)) leaf_name_data.push_back(cdpcacheprimarymgmtaddr.get_name_leafdata());
    if (cdpcachesecondarymgmtaddrtype.is_set || is_set(cdpcachesecondarymgmtaddrtype.yfilter)) leaf_name_data.push_back(cdpcachesecondarymgmtaddrtype.get_name_leafdata());
    if (cdpcachesecondarymgmtaddr.is_set || is_set(cdpcachesecondarymgmtaddr.yfilter)) leaf_name_data.push_back(cdpcachesecondarymgmtaddr.get_name_leafdata());
    if (cdpcachephyslocation.is_set || is_set(cdpcachephyslocation.yfilter)) leaf_name_data.push_back(cdpcachephyslocation.get_name_leafdata());
    if (cdpcachelastchange.is_set || is_set(cdpcachelastchange.yfilter)) leaf_name_data.push_back(cdpcachelastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdpCacheIfIndex")
    {
        cdpcacheifindex = value;
        cdpcacheifindex.value_namespace = name_space;
        cdpcacheifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheDeviceIndex")
    {
        cdpcachedeviceindex = value;
        cdpcachedeviceindex.value_namespace = name_space;
        cdpcachedeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheAddressType")
    {
        cdpcacheaddresstype = value;
        cdpcacheaddresstype.value_namespace = name_space;
        cdpcacheaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheAddress")
    {
        cdpcacheaddress = value;
        cdpcacheaddress.value_namespace = name_space;
        cdpcacheaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheVersion")
    {
        cdpcacheversion = value;
        cdpcacheversion.value_namespace = name_space;
        cdpcacheversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheDeviceId")
    {
        cdpcachedeviceid = value;
        cdpcachedeviceid.value_namespace = name_space;
        cdpcachedeviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheDevicePort")
    {
        cdpcachedeviceport = value;
        cdpcachedeviceport.value_namespace = name_space;
        cdpcachedeviceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePlatform")
    {
        cdpcacheplatform = value;
        cdpcacheplatform.value_namespace = name_space;
        cdpcacheplatform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheCapabilities")
    {
        cdpcachecapabilities = value;
        cdpcachecapabilities.value_namespace = name_space;
        cdpcachecapabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheVTPMgmtDomain")
    {
        cdpcachevtpmgmtdomain = value;
        cdpcachevtpmgmtdomain.value_namespace = name_space;
        cdpcachevtpmgmtdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheNativeVLAN")
    {
        cdpcachenativevlan = value;
        cdpcachenativevlan.value_namespace = name_space;
        cdpcachenativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheDuplex")
    {
        cdpcacheduplex = value;
        cdpcacheduplex.value_namespace = name_space;
        cdpcacheduplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheApplianceID")
    {
        cdpcacheapplianceid = value;
        cdpcacheapplianceid.value_namespace = name_space;
        cdpcacheapplianceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheVlanID")
    {
        cdpcachevlanid = value;
        cdpcachevlanid.value_namespace = name_space;
        cdpcachevlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePowerConsumption")
    {
        cdpcachepowerconsumption = value;
        cdpcachepowerconsumption.value_namespace = name_space;
        cdpcachepowerconsumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheMTU")
    {
        cdpcachemtu = value;
        cdpcachemtu.value_namespace = name_space;
        cdpcachemtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheSysName")
    {
        cdpcachesysname = value;
        cdpcachesysname.value_namespace = name_space;
        cdpcachesysname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheSysObjectID")
    {
        cdpcachesysobjectid = value;
        cdpcachesysobjectid.value_namespace = name_space;
        cdpcachesysobjectid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePrimaryMgmtAddrType")
    {
        cdpcacheprimarymgmtaddrtype = value;
        cdpcacheprimarymgmtaddrtype.value_namespace = name_space;
        cdpcacheprimarymgmtaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePrimaryMgmtAddr")
    {
        cdpcacheprimarymgmtaddr = value;
        cdpcacheprimarymgmtaddr.value_namespace = name_space;
        cdpcacheprimarymgmtaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddrType")
    {
        cdpcachesecondarymgmtaddrtype = value;
        cdpcachesecondarymgmtaddrtype.value_namespace = name_space;
        cdpcachesecondarymgmtaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddr")
    {
        cdpcachesecondarymgmtaddr = value;
        cdpcachesecondarymgmtaddr.value_namespace = name_space;
        cdpcachesecondarymgmtaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePhysLocation")
    {
        cdpcachephyslocation = value;
        cdpcachephyslocation.value_namespace = name_space;
        cdpcachephyslocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheLastChange")
    {
        cdpcachelastchange = value;
        cdpcachelastchange.value_namespace = name_space;
        cdpcachelastchange.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdpCacheIfIndex")
    {
        cdpcacheifindex.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDeviceIndex")
    {
        cdpcachedeviceindex.yfilter = yfilter;
    }
    if(value_path == "cdpCacheAddressType")
    {
        cdpcacheaddresstype.yfilter = yfilter;
    }
    if(value_path == "cdpCacheAddress")
    {
        cdpcacheaddress.yfilter = yfilter;
    }
    if(value_path == "cdpCacheVersion")
    {
        cdpcacheversion.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDeviceId")
    {
        cdpcachedeviceid.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDevicePort")
    {
        cdpcachedeviceport.yfilter = yfilter;
    }
    if(value_path == "cdpCachePlatform")
    {
        cdpcacheplatform.yfilter = yfilter;
    }
    if(value_path == "cdpCacheCapabilities")
    {
        cdpcachecapabilities.yfilter = yfilter;
    }
    if(value_path == "cdpCacheVTPMgmtDomain")
    {
        cdpcachevtpmgmtdomain.yfilter = yfilter;
    }
    if(value_path == "cdpCacheNativeVLAN")
    {
        cdpcachenativevlan.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDuplex")
    {
        cdpcacheduplex.yfilter = yfilter;
    }
    if(value_path == "cdpCacheApplianceID")
    {
        cdpcacheapplianceid.yfilter = yfilter;
    }
    if(value_path == "cdpCacheVlanID")
    {
        cdpcachevlanid.yfilter = yfilter;
    }
    if(value_path == "cdpCachePowerConsumption")
    {
        cdpcachepowerconsumption.yfilter = yfilter;
    }
    if(value_path == "cdpCacheMTU")
    {
        cdpcachemtu.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSysName")
    {
        cdpcachesysname.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSysObjectID")
    {
        cdpcachesysobjectid.yfilter = yfilter;
    }
    if(value_path == "cdpCachePrimaryMgmtAddrType")
    {
        cdpcacheprimarymgmtaddrtype.yfilter = yfilter;
    }
    if(value_path == "cdpCachePrimaryMgmtAddr")
    {
        cdpcacheprimarymgmtaddr.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddrType")
    {
        cdpcachesecondarymgmtaddrtype.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddr")
    {
        cdpcachesecondarymgmtaddr.yfilter = yfilter;
    }
    if(value_path == "cdpCachePhysLocation")
    {
        cdpcachephyslocation.yfilter = yfilter;
    }
    if(value_path == "cdpCacheLastChange")
    {
        cdpcachelastchange.yfilter = yfilter;
    }
}

bool CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCacheIfIndex" || name == "cdpCacheDeviceIndex" || name == "cdpCacheAddressType" || name == "cdpCacheAddress" || name == "cdpCacheVersion" || name == "cdpCacheDeviceId" || name == "cdpCacheDevicePort" || name == "cdpCachePlatform" || name == "cdpCacheCapabilities" || name == "cdpCacheVTPMgmtDomain" || name == "cdpCacheNativeVLAN" || name == "cdpCacheDuplex" || name == "cdpCacheApplianceID" || name == "cdpCacheVlanID" || name == "cdpCachePowerConsumption" || name == "cdpCacheMTU" || name == "cdpCacheSysName" || name == "cdpCacheSysObjectID" || name == "cdpCachePrimaryMgmtAddrType" || name == "cdpCachePrimaryMgmtAddr" || name == "cdpCacheSecondaryMgmtAddrType" || name == "cdpCacheSecondaryMgmtAddr" || name == "cdpCachePhysLocation" || name == "cdpCacheLastChange")
        return true;
    return false;
}

CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressTable()
    :
    cdpctaddressentry(this, {"cdpcacheifindex", "cdpcachedeviceindex", "cdpctaddressindex"})
{

    yang_name = "cdpCtAddressTable"; yang_parent_name = "CISCO-CDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpCtAddressTable::~CdpCtAddressTable()
{
}

bool CISCOCDPMIB::CdpCtAddressTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdpctaddressentry.len(); index++)
    {
        if(cdpctaddressentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCDPMIB::CdpCtAddressTable::has_operation() const
{
    for (std::size_t index=0; index<cdpctaddressentry.len(); index++)
    {
        if(cdpctaddressentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCDPMIB::CdpCtAddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpCtAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCtAddressTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpCtAddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpCtAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCtAddressEntry")
    {
        auto ent_ = std::make_shared<CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry>();
        ent_->parent = this;
        cdpctaddressentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpCtAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdpctaddressentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCDPMIB::CdpCtAddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCDPMIB::CdpCtAddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCDPMIB::CdpCtAddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCtAddressEntry")
        return true;
    return false;
}

CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::CdpCtAddressEntry()
    :
    cdpcacheifindex{YType::str, "cdpCacheIfIndex"},
    cdpcachedeviceindex{YType::str, "cdpCacheDeviceIndex"},
    cdpctaddressindex{YType::int32, "cdpCtAddressIndex"},
    cdpctaddresstype{YType::enumeration, "cdpCtAddressType"},
    cdpctaddress{YType::str, "cdpCtAddress"}
{

    yang_name = "cdpCtAddressEntry"; yang_parent_name = "cdpCtAddressTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::~CdpCtAddressEntry()
{
}

bool CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdpcacheifindex.is_set
	|| cdpcachedeviceindex.is_set
	|| cdpctaddressindex.is_set
	|| cdpctaddresstype.is_set
	|| cdpctaddress.is_set;
}

bool CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpcacheifindex.yfilter)
	|| ydk::is_set(cdpcachedeviceindex.yfilter)
	|| ydk::is_set(cdpctaddressindex.yfilter)
	|| ydk::is_set(cdpctaddresstype.yfilter)
	|| ydk::is_set(cdpctaddress.yfilter);
}

std::string CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpCtAddressTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCtAddressEntry";
    ADD_KEY_TOKEN(cdpcacheifindex, "cdpCacheIfIndex");
    ADD_KEY_TOKEN(cdpcachedeviceindex, "cdpCacheDeviceIndex");
    ADD_KEY_TOKEN(cdpctaddressindex, "cdpCtAddressIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpcacheifindex.is_set || is_set(cdpcacheifindex.yfilter)) leaf_name_data.push_back(cdpcacheifindex.get_name_leafdata());
    if (cdpcachedeviceindex.is_set || is_set(cdpcachedeviceindex.yfilter)) leaf_name_data.push_back(cdpcachedeviceindex.get_name_leafdata());
    if (cdpctaddressindex.is_set || is_set(cdpctaddressindex.yfilter)) leaf_name_data.push_back(cdpctaddressindex.get_name_leafdata());
    if (cdpctaddresstype.is_set || is_set(cdpctaddresstype.yfilter)) leaf_name_data.push_back(cdpctaddresstype.get_name_leafdata());
    if (cdpctaddress.is_set || is_set(cdpctaddress.yfilter)) leaf_name_data.push_back(cdpctaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdpCacheIfIndex")
    {
        cdpcacheifindex = value;
        cdpcacheifindex.value_namespace = name_space;
        cdpcacheifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheDeviceIndex")
    {
        cdpcachedeviceindex = value;
        cdpcachedeviceindex.value_namespace = name_space;
        cdpcachedeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCtAddressIndex")
    {
        cdpctaddressindex = value;
        cdpctaddressindex.value_namespace = name_space;
        cdpctaddressindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCtAddressType")
    {
        cdpctaddresstype = value;
        cdpctaddresstype.value_namespace = name_space;
        cdpctaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCtAddress")
    {
        cdpctaddress = value;
        cdpctaddress.value_namespace = name_space;
        cdpctaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdpCacheIfIndex")
    {
        cdpcacheifindex.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDeviceIndex")
    {
        cdpcachedeviceindex.yfilter = yfilter;
    }
    if(value_path == "cdpCtAddressIndex")
    {
        cdpctaddressindex.yfilter = yfilter;
    }
    if(value_path == "cdpCtAddressType")
    {
        cdpctaddresstype.yfilter = yfilter;
    }
    if(value_path == "cdpCtAddress")
    {
        cdpctaddress.yfilter = yfilter;
    }
}

bool CISCOCDPMIB::CdpCtAddressTable::CdpCtAddressEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCacheIfIndex" || name == "cdpCacheDeviceIndex" || name == "cdpCtAddressIndex" || name == "cdpCtAddressType" || name == "cdpCtAddress")
        return true;
    return false;
}

const Enum::YLeaf CISCOCDPMIB::CdpGlobal::CdpGlobalDeviceIdFormat::serialNumber {1, "serialNumber"};
const Enum::YLeaf CISCOCDPMIB::CdpGlobal::CdpGlobalDeviceIdFormat::macAddress {2, "macAddress"};
const Enum::YLeaf CISCOCDPMIB::CdpGlobal::CdpGlobalDeviceIdFormat::other {3, "other"};

const Enum::YLeaf CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::CdpInterfaceExtendedTrust::trusted {1, "trusted"};
const Enum::YLeaf CISCOCDPMIB::CdpInterfaceExtTable::CdpInterfaceExtEntry::CdpInterfaceExtendedTrust::noTrust {2, "noTrust"};

const Enum::YLeaf CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::CdpCacheDuplex::unknown {1, "unknown"};
const Enum::YLeaf CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::CdpCacheDuplex::halfduplex {2, "halfduplex"};
const Enum::YLeaf CISCOCDPMIB::CdpCacheTable::CdpCacheEntry::CdpCacheDuplex::fullduplex {3, "fullduplex"};


}
}

