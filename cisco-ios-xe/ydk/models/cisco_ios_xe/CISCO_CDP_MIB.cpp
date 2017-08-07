
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CDP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CDP_MIB {

CiscoCdpMib::CiscoCdpMib()
    :
    cdpcachetable(std::make_shared<CiscoCdpMib::Cdpcachetable>())
	,cdpctaddresstable(std::make_shared<CiscoCdpMib::Cdpctaddresstable>())
	,cdpglobal(std::make_shared<CiscoCdpMib::Cdpglobal>())
	,cdpinterfaceexttable(std::make_shared<CiscoCdpMib::Cdpinterfaceexttable>())
	,cdpinterfacetable(std::make_shared<CiscoCdpMib::Cdpinterfacetable>())
{
    cdpcachetable->parent = this;

    cdpctaddresstable->parent = this;

    cdpglobal->parent = this;

    cdpinterfaceexttable->parent = this;

    cdpinterfacetable->parent = this;

    yang_name = "CISCO-CDP-MIB"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::~CiscoCdpMib()
{
}

bool CiscoCdpMib::has_data() const
{
    return (cdpcachetable !=  nullptr && cdpcachetable->has_data())
	|| (cdpctaddresstable !=  nullptr && cdpctaddresstable->has_data())
	|| (cdpglobal !=  nullptr && cdpglobal->has_data())
	|| (cdpinterfaceexttable !=  nullptr && cdpinterfaceexttable->has_data())
	|| (cdpinterfacetable !=  nullptr && cdpinterfacetable->has_data());
}

bool CiscoCdpMib::has_operation() const
{
    return is_set(yfilter)
	|| (cdpcachetable !=  nullptr && cdpcachetable->has_operation())
	|| (cdpctaddresstable !=  nullptr && cdpctaddresstable->has_operation())
	|| (cdpglobal !=  nullptr && cdpglobal->has_operation())
	|| (cdpinterfaceexttable !=  nullptr && cdpinterfaceexttable->has_operation())
	|| (cdpinterfacetable !=  nullptr && cdpinterfacetable->has_operation());
}

std::string CiscoCdpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoCdpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCacheTable")
    {
        if(cdpcachetable == nullptr)
        {
            cdpcachetable = std::make_shared<CiscoCdpMib::Cdpcachetable>();
        }
        return cdpcachetable;
    }

    if(child_yang_name == "cdpCtAddressTable")
    {
        if(cdpctaddresstable == nullptr)
        {
            cdpctaddresstable = std::make_shared<CiscoCdpMib::Cdpctaddresstable>();
        }
        return cdpctaddresstable;
    }

    if(child_yang_name == "cdpGlobal")
    {
        if(cdpglobal == nullptr)
        {
            cdpglobal = std::make_shared<CiscoCdpMib::Cdpglobal>();
        }
        return cdpglobal;
    }

    if(child_yang_name == "cdpInterfaceExtTable")
    {
        if(cdpinterfaceexttable == nullptr)
        {
            cdpinterfaceexttable = std::make_shared<CiscoCdpMib::Cdpinterfaceexttable>();
        }
        return cdpinterfaceexttable;
    }

    if(child_yang_name == "cdpInterfaceTable")
    {
        if(cdpinterfacetable == nullptr)
        {
            cdpinterfacetable = std::make_shared<CiscoCdpMib::Cdpinterfacetable>();
        }
        return cdpinterfacetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cdpcachetable != nullptr)
    {
        children["cdpCacheTable"] = cdpcachetable;
    }

    if(cdpctaddresstable != nullptr)
    {
        children["cdpCtAddressTable"] = cdpctaddresstable;
    }

    if(cdpglobal != nullptr)
    {
        children["cdpGlobal"] = cdpglobal;
    }

    if(cdpinterfaceexttable != nullptr)
    {
        children["cdpInterfaceExtTable"] = cdpinterfaceexttable;
    }

    if(cdpinterfacetable != nullptr)
    {
        children["cdpInterfaceTable"] = cdpinterfacetable;
    }

    return children;
}

void CiscoCdpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCdpMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoCdpMib::clone_ptr() const
{
    return std::make_shared<CiscoCdpMib>();
}

std::string CiscoCdpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoCdpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoCdpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoCdpMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoCdpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCacheTable" || name == "cdpCtAddressTable" || name == "cdpGlobal" || name == "cdpInterfaceExtTable" || name == "cdpInterfaceTable")
        return true;
    return false;
}

CiscoCdpMib::Cdpglobal::Cdpglobal()
    :
    cdpglobaldeviceid{YType::str, "cdpGlobalDeviceId"},
    cdpglobaldeviceidformat{YType::enumeration, "cdpGlobalDeviceIdFormat"},
    cdpglobaldeviceidformatcpb{YType::bits, "cdpGlobalDeviceIdFormatCpb"},
    cdpglobalholdtime{YType::int32, "cdpGlobalHoldTime"},
    cdpgloballastchange{YType::uint32, "cdpGlobalLastChange"},
    cdpglobalmessageinterval{YType::int32, "cdpGlobalMessageInterval"},
    cdpglobalrun{YType::boolean, "cdpGlobalRun"}
{
    yang_name = "cdpGlobal"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpglobal::~Cdpglobal()
{
}

bool CiscoCdpMib::Cdpglobal::has_data() const
{
    return cdpglobaldeviceid.is_set
	|| cdpglobaldeviceidformat.is_set
	|| cdpglobaldeviceidformatcpb.is_set
	|| cdpglobalholdtime.is_set
	|| cdpgloballastchange.is_set
	|| cdpglobalmessageinterval.is_set
	|| cdpglobalrun.is_set;
}

bool CiscoCdpMib::Cdpglobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpglobaldeviceid.yfilter)
	|| ydk::is_set(cdpglobaldeviceidformat.yfilter)
	|| ydk::is_set(cdpglobaldeviceidformatcpb.yfilter)
	|| ydk::is_set(cdpglobalholdtime.yfilter)
	|| ydk::is_set(cdpgloballastchange.yfilter)
	|| ydk::is_set(cdpglobalmessageinterval.yfilter)
	|| ydk::is_set(cdpglobalrun.yfilter);
}

std::string CiscoCdpMib::Cdpglobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpGlobal";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpglobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpglobaldeviceid.is_set || is_set(cdpglobaldeviceid.yfilter)) leaf_name_data.push_back(cdpglobaldeviceid.get_name_leafdata());
    if (cdpglobaldeviceidformat.is_set || is_set(cdpglobaldeviceidformat.yfilter)) leaf_name_data.push_back(cdpglobaldeviceidformat.get_name_leafdata());
    if (cdpglobaldeviceidformatcpb.is_set || is_set(cdpglobaldeviceidformatcpb.yfilter)) leaf_name_data.push_back(cdpglobaldeviceidformatcpb.get_name_leafdata());
    if (cdpglobalholdtime.is_set || is_set(cdpglobalholdtime.yfilter)) leaf_name_data.push_back(cdpglobalholdtime.get_name_leafdata());
    if (cdpgloballastchange.is_set || is_set(cdpgloballastchange.yfilter)) leaf_name_data.push_back(cdpgloballastchange.get_name_leafdata());
    if (cdpglobalmessageinterval.is_set || is_set(cdpglobalmessageinterval.yfilter)) leaf_name_data.push_back(cdpglobalmessageinterval.get_name_leafdata());
    if (cdpglobalrun.is_set || is_set(cdpglobalrun.yfilter)) leaf_name_data.push_back(cdpglobalrun.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpglobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpglobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpglobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdpGlobalDeviceId")
    {
        cdpglobaldeviceid = value;
        cdpglobaldeviceid.value_namespace = name_space;
        cdpglobaldeviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalDeviceIdFormat")
    {
        cdpglobaldeviceidformat = value;
        cdpglobaldeviceidformat.value_namespace = name_space;
        cdpglobaldeviceidformat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalDeviceIdFormatCpb")
    {
        cdpglobaldeviceidformatcpb[value] = true;
    }
    if(value_path == "cdpGlobalHoldTime")
    {
        cdpglobalholdtime = value;
        cdpglobalholdtime.value_namespace = name_space;
        cdpglobalholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalLastChange")
    {
        cdpgloballastchange = value;
        cdpgloballastchange.value_namespace = name_space;
        cdpgloballastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalMessageInterval")
    {
        cdpglobalmessageinterval = value;
        cdpglobalmessageinterval.value_namespace = name_space;
        cdpglobalmessageinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpGlobalRun")
    {
        cdpglobalrun = value;
        cdpglobalrun.value_namespace = name_space;
        cdpglobalrun.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCdpMib::Cdpglobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdpGlobalDeviceId")
    {
        cdpglobaldeviceid.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalDeviceIdFormat")
    {
        cdpglobaldeviceidformat.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalDeviceIdFormatCpb")
    {
        cdpglobaldeviceidformatcpb.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalHoldTime")
    {
        cdpglobalholdtime.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalLastChange")
    {
        cdpgloballastchange.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalMessageInterval")
    {
        cdpglobalmessageinterval.yfilter = yfilter;
    }
    if(value_path == "cdpGlobalRun")
    {
        cdpglobalrun.yfilter = yfilter;
    }
}

bool CiscoCdpMib::Cdpglobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpGlobalDeviceId" || name == "cdpGlobalDeviceIdFormat" || name == "cdpGlobalDeviceIdFormatCpb" || name == "cdpGlobalHoldTime" || name == "cdpGlobalLastChange" || name == "cdpGlobalMessageInterval" || name == "cdpGlobalRun")
        return true;
    return false;
}

CiscoCdpMib::Cdpinterfacetable::Cdpinterfacetable()
{
    yang_name = "cdpInterfaceTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpinterfacetable::~Cdpinterfacetable()
{
}

bool CiscoCdpMib::Cdpinterfacetable::has_data() const
{
    for (std::size_t index=0; index<cdpinterfaceentry.size(); index++)
    {
        if(cdpinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<cdpinterfaceentry.size(); index++)
    {
        if(cdpinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCdpMib::Cdpinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpInterfaceEntry")
    {
        for(auto const & c : cdpinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry>();
        c->parent = this;
        cdpinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCdpMib::Cdpinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCdpMib::Cdpinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpInterfaceEntry")
        return true;
    return false;
}

CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::Cdpinterfaceentry()
    :
    cdpinterfaceifindex{YType::int32, "cdpInterfaceIfIndex"},
    cdpinterfaceenable{YType::boolean, "cdpInterfaceEnable"},
    cdpinterfacegroup{YType::int32, "cdpInterfaceGroup"},
    cdpinterfacemessageinterval{YType::int32, "cdpInterfaceMessageInterval"},
    cdpinterfacename{YType::str, "cdpInterfaceName"},
    cdpinterfaceport{YType::int32, "cdpInterfacePort"}
{
    yang_name = "cdpInterfaceEntry"; yang_parent_name = "cdpInterfaceTable";
}

CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::~Cdpinterfaceentry()
{
}

bool CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::has_data() const
{
    return cdpinterfaceifindex.is_set
	|| cdpinterfaceenable.is_set
	|| cdpinterfacegroup.is_set
	|| cdpinterfacemessageinterval.is_set
	|| cdpinterfacename.is_set
	|| cdpinterfaceport.is_set;
}

bool CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpinterfaceifindex.yfilter)
	|| ydk::is_set(cdpinterfaceenable.yfilter)
	|| ydk::is_set(cdpinterfacegroup.yfilter)
	|| ydk::is_set(cdpinterfacemessageinterval.yfilter)
	|| ydk::is_set(cdpinterfacename.yfilter)
	|| ydk::is_set(cdpinterfaceport.yfilter);
}

std::string CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceEntry" <<"[cdpInterfaceIfIndex='" <<cdpinterfaceifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpinterfaceifindex.is_set || is_set(cdpinterfaceifindex.yfilter)) leaf_name_data.push_back(cdpinterfaceifindex.get_name_leafdata());
    if (cdpinterfaceenable.is_set || is_set(cdpinterfaceenable.yfilter)) leaf_name_data.push_back(cdpinterfaceenable.get_name_leafdata());
    if (cdpinterfacegroup.is_set || is_set(cdpinterfacegroup.yfilter)) leaf_name_data.push_back(cdpinterfacegroup.get_name_leafdata());
    if (cdpinterfacemessageinterval.is_set || is_set(cdpinterfacemessageinterval.yfilter)) leaf_name_data.push_back(cdpinterfacemessageinterval.get_name_leafdata());
    if (cdpinterfacename.is_set || is_set(cdpinterfacename.yfilter)) leaf_name_data.push_back(cdpinterfacename.get_name_leafdata());
    if (cdpinterfaceport.is_set || is_set(cdpinterfaceport.yfilter)) leaf_name_data.push_back(cdpinterfaceport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cdpInterfaceGroup")
    {
        cdpinterfacegroup = value;
        cdpinterfacegroup.value_namespace = name_space;
        cdpinterfacegroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceMessageInterval")
    {
        cdpinterfacemessageinterval = value;
        cdpinterfacemessageinterval.value_namespace = name_space;
        cdpinterfacemessageinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceName")
    {
        cdpinterfacename = value;
        cdpinterfacename.value_namespace = name_space;
        cdpinterfacename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfacePort")
    {
        cdpinterfaceport = value;
        cdpinterfaceport.value_namespace = name_space;
        cdpinterfaceport.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdpInterfaceIfIndex")
    {
        cdpinterfaceifindex.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceEnable")
    {
        cdpinterfaceenable.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceGroup")
    {
        cdpinterfacegroup.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceMessageInterval")
    {
        cdpinterfacemessageinterval.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceName")
    {
        cdpinterfacename.yfilter = yfilter;
    }
    if(value_path == "cdpInterfacePort")
    {
        cdpinterfaceport.yfilter = yfilter;
    }
}

bool CiscoCdpMib::Cdpinterfacetable::Cdpinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpInterfaceIfIndex" || name == "cdpInterfaceEnable" || name == "cdpInterfaceGroup" || name == "cdpInterfaceMessageInterval" || name == "cdpInterfaceName" || name == "cdpInterfacePort")
        return true;
    return false;
}

CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceexttable()
{
    yang_name = "cdpInterfaceExtTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpinterfaceexttable::~Cdpinterfaceexttable()
{
}

bool CiscoCdpMib::Cdpinterfaceexttable::has_data() const
{
    for (std::size_t index=0; index<cdpinterfaceextentry.size(); index++)
    {
        if(cdpinterfaceextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpinterfaceexttable::has_operation() const
{
    for (std::size_t index=0; index<cdpinterfaceextentry.size(); index++)
    {
        if(cdpinterfaceextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCdpMib::Cdpinterfaceexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceExtTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfaceexttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfaceexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpInterfaceExtEntry")
    {
        for(auto const & c : cdpinterfaceextentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry>();
        c->parent = this;
        cdpinterfaceextentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfaceexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpinterfaceextentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpinterfaceexttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCdpMib::Cdpinterfaceexttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCdpMib::Cdpinterfaceexttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpInterfaceExtEntry")
        return true;
    return false;
}

CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::Cdpinterfaceextentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdpinterfacecosforuntrustedport{YType::uint32, "cdpInterfaceCosForUntrustedPort"},
    cdpinterfaceextendedtrust{YType::enumeration, "cdpInterfaceExtendedTrust"}
{
    yang_name = "cdpInterfaceExtEntry"; yang_parent_name = "cdpInterfaceExtTable";
}

CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::~Cdpinterfaceextentry()
{
}

bool CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::has_data() const
{
    return ifindex.is_set
	|| cdpinterfacecosforuntrustedport.is_set
	|| cdpinterfaceextendedtrust.is_set;
}

bool CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdpinterfacecosforuntrustedport.yfilter)
	|| ydk::is_set(cdpinterfaceextendedtrust.yfilter);
}

std::string CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpInterfaceExtEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpInterfaceExtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdpinterfacecosforuntrustedport.is_set || is_set(cdpinterfacecosforuntrustedport.yfilter)) leaf_name_data.push_back(cdpinterfacecosforuntrustedport.get_name_leafdata());
    if (cdpinterfaceextendedtrust.is_set || is_set(cdpinterfaceextendedtrust.yfilter)) leaf_name_data.push_back(cdpinterfaceextendedtrust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceCosForUntrustedPort")
    {
        cdpinterfacecosforuntrustedport = value;
        cdpinterfacecosforuntrustedport.value_namespace = name_space;
        cdpinterfacecosforuntrustedport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpInterfaceExtendedTrust")
    {
        cdpinterfaceextendedtrust = value;
        cdpinterfaceextendedtrust.value_namespace = name_space;
        cdpinterfaceextendedtrust.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceCosForUntrustedPort")
    {
        cdpinterfacecosforuntrustedport.yfilter = yfilter;
    }
    if(value_path == "cdpInterfaceExtendedTrust")
    {
        cdpinterfaceextendedtrust.yfilter = yfilter;
    }
}

bool CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdpInterfaceCosForUntrustedPort" || name == "cdpInterfaceExtendedTrust")
        return true;
    return false;
}

CiscoCdpMib::Cdpcachetable::Cdpcachetable()
{
    yang_name = "cdpCacheTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpcachetable::~Cdpcachetable()
{
}

bool CiscoCdpMib::Cdpcachetable::has_data() const
{
    for (std::size_t index=0; index<cdpcacheentry.size(); index++)
    {
        if(cdpcacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpcachetable::has_operation() const
{
    for (std::size_t index=0; index<cdpcacheentry.size(); index++)
    {
        if(cdpcacheentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCdpMib::Cdpcachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCacheTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpcachetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpcachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCacheEntry")
    {
        for(auto const & c : cdpcacheentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpcachetable::Cdpcacheentry>();
        c->parent = this;
        cdpcacheentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpcachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpcacheentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpcachetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCdpMib::Cdpcachetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCdpMib::Cdpcachetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCacheEntry")
        return true;
    return false;
}

CiscoCdpMib::Cdpcachetable::Cdpcacheentry::Cdpcacheentry()
    :
    cdpcacheifindex{YType::int32, "cdpCacheIfIndex"},
    cdpcachedeviceindex{YType::int32, "cdpCacheDeviceIndex"},
    cdpcacheaddress{YType::str, "cdpCacheAddress"},
    cdpcacheaddresstype{YType::enumeration, "cdpCacheAddressType"},
    cdpcacheapplianceid{YType::uint32, "cdpCacheApplianceID"},
    cdpcachecapabilities{YType::str, "cdpCacheCapabilities"},
    cdpcachedeviceid{YType::str, "cdpCacheDeviceId"},
    cdpcachedeviceport{YType::str, "cdpCacheDevicePort"},
    cdpcacheduplex{YType::enumeration, "cdpCacheDuplex"},
    cdpcachelastchange{YType::uint32, "cdpCacheLastChange"},
    cdpcachemtu{YType::uint32, "cdpCacheMTU"},
    cdpcachenativevlan{YType::int32, "cdpCacheNativeVLAN"},
    cdpcachephyslocation{YType::str, "cdpCachePhysLocation"},
    cdpcacheplatform{YType::str, "cdpCachePlatform"},
    cdpcachepowerconsumption{YType::uint32, "cdpCachePowerConsumption"},
    cdpcacheprimarymgmtaddr{YType::str, "cdpCachePrimaryMgmtAddr"},
    cdpcacheprimarymgmtaddrtype{YType::enumeration, "cdpCachePrimaryMgmtAddrType"},
    cdpcachesecondarymgmtaddr{YType::str, "cdpCacheSecondaryMgmtAddr"},
    cdpcachesecondarymgmtaddrtype{YType::enumeration, "cdpCacheSecondaryMgmtAddrType"},
    cdpcachesysname{YType::str, "cdpCacheSysName"},
    cdpcachesysobjectid{YType::str, "cdpCacheSysObjectID"},
    cdpcacheversion{YType::str, "cdpCacheVersion"},
    cdpcachevlanid{YType::uint32, "cdpCacheVlanID"},
    cdpcachevtpmgmtdomain{YType::str, "cdpCacheVTPMgmtDomain"}
{
    yang_name = "cdpCacheEntry"; yang_parent_name = "cdpCacheTable";
}

CiscoCdpMib::Cdpcachetable::Cdpcacheentry::~Cdpcacheentry()
{
}

bool CiscoCdpMib::Cdpcachetable::Cdpcacheentry::has_data() const
{
    return cdpcacheifindex.is_set
	|| cdpcachedeviceindex.is_set
	|| cdpcacheaddress.is_set
	|| cdpcacheaddresstype.is_set
	|| cdpcacheapplianceid.is_set
	|| cdpcachecapabilities.is_set
	|| cdpcachedeviceid.is_set
	|| cdpcachedeviceport.is_set
	|| cdpcacheduplex.is_set
	|| cdpcachelastchange.is_set
	|| cdpcachemtu.is_set
	|| cdpcachenativevlan.is_set
	|| cdpcachephyslocation.is_set
	|| cdpcacheplatform.is_set
	|| cdpcachepowerconsumption.is_set
	|| cdpcacheprimarymgmtaddr.is_set
	|| cdpcacheprimarymgmtaddrtype.is_set
	|| cdpcachesecondarymgmtaddr.is_set
	|| cdpcachesecondarymgmtaddrtype.is_set
	|| cdpcachesysname.is_set
	|| cdpcachesysobjectid.is_set
	|| cdpcacheversion.is_set
	|| cdpcachevlanid.is_set
	|| cdpcachevtpmgmtdomain.is_set;
}

bool CiscoCdpMib::Cdpcachetable::Cdpcacheentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpcacheifindex.yfilter)
	|| ydk::is_set(cdpcachedeviceindex.yfilter)
	|| ydk::is_set(cdpcacheaddress.yfilter)
	|| ydk::is_set(cdpcacheaddresstype.yfilter)
	|| ydk::is_set(cdpcacheapplianceid.yfilter)
	|| ydk::is_set(cdpcachecapabilities.yfilter)
	|| ydk::is_set(cdpcachedeviceid.yfilter)
	|| ydk::is_set(cdpcachedeviceport.yfilter)
	|| ydk::is_set(cdpcacheduplex.yfilter)
	|| ydk::is_set(cdpcachelastchange.yfilter)
	|| ydk::is_set(cdpcachemtu.yfilter)
	|| ydk::is_set(cdpcachenativevlan.yfilter)
	|| ydk::is_set(cdpcachephyslocation.yfilter)
	|| ydk::is_set(cdpcacheplatform.yfilter)
	|| ydk::is_set(cdpcachepowerconsumption.yfilter)
	|| ydk::is_set(cdpcacheprimarymgmtaddr.yfilter)
	|| ydk::is_set(cdpcacheprimarymgmtaddrtype.yfilter)
	|| ydk::is_set(cdpcachesecondarymgmtaddr.yfilter)
	|| ydk::is_set(cdpcachesecondarymgmtaddrtype.yfilter)
	|| ydk::is_set(cdpcachesysname.yfilter)
	|| ydk::is_set(cdpcachesysobjectid.yfilter)
	|| ydk::is_set(cdpcacheversion.yfilter)
	|| ydk::is_set(cdpcachevlanid.yfilter)
	|| ydk::is_set(cdpcachevtpmgmtdomain.yfilter);
}

std::string CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCacheEntry" <<"[cdpCacheIfIndex='" <<cdpcacheifindex <<"']" <<"[cdpCacheDeviceIndex='" <<cdpcachedeviceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpCacheTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpcacheifindex.is_set || is_set(cdpcacheifindex.yfilter)) leaf_name_data.push_back(cdpcacheifindex.get_name_leafdata());
    if (cdpcachedeviceindex.is_set || is_set(cdpcachedeviceindex.yfilter)) leaf_name_data.push_back(cdpcachedeviceindex.get_name_leafdata());
    if (cdpcacheaddress.is_set || is_set(cdpcacheaddress.yfilter)) leaf_name_data.push_back(cdpcacheaddress.get_name_leafdata());
    if (cdpcacheaddresstype.is_set || is_set(cdpcacheaddresstype.yfilter)) leaf_name_data.push_back(cdpcacheaddresstype.get_name_leafdata());
    if (cdpcacheapplianceid.is_set || is_set(cdpcacheapplianceid.yfilter)) leaf_name_data.push_back(cdpcacheapplianceid.get_name_leafdata());
    if (cdpcachecapabilities.is_set || is_set(cdpcachecapabilities.yfilter)) leaf_name_data.push_back(cdpcachecapabilities.get_name_leafdata());
    if (cdpcachedeviceid.is_set || is_set(cdpcachedeviceid.yfilter)) leaf_name_data.push_back(cdpcachedeviceid.get_name_leafdata());
    if (cdpcachedeviceport.is_set || is_set(cdpcachedeviceport.yfilter)) leaf_name_data.push_back(cdpcachedeviceport.get_name_leafdata());
    if (cdpcacheduplex.is_set || is_set(cdpcacheduplex.yfilter)) leaf_name_data.push_back(cdpcacheduplex.get_name_leafdata());
    if (cdpcachelastchange.is_set || is_set(cdpcachelastchange.yfilter)) leaf_name_data.push_back(cdpcachelastchange.get_name_leafdata());
    if (cdpcachemtu.is_set || is_set(cdpcachemtu.yfilter)) leaf_name_data.push_back(cdpcachemtu.get_name_leafdata());
    if (cdpcachenativevlan.is_set || is_set(cdpcachenativevlan.yfilter)) leaf_name_data.push_back(cdpcachenativevlan.get_name_leafdata());
    if (cdpcachephyslocation.is_set || is_set(cdpcachephyslocation.yfilter)) leaf_name_data.push_back(cdpcachephyslocation.get_name_leafdata());
    if (cdpcacheplatform.is_set || is_set(cdpcacheplatform.yfilter)) leaf_name_data.push_back(cdpcacheplatform.get_name_leafdata());
    if (cdpcachepowerconsumption.is_set || is_set(cdpcachepowerconsumption.yfilter)) leaf_name_data.push_back(cdpcachepowerconsumption.get_name_leafdata());
    if (cdpcacheprimarymgmtaddr.is_set || is_set(cdpcacheprimarymgmtaddr.yfilter)) leaf_name_data.push_back(cdpcacheprimarymgmtaddr.get_name_leafdata());
    if (cdpcacheprimarymgmtaddrtype.is_set || is_set(cdpcacheprimarymgmtaddrtype.yfilter)) leaf_name_data.push_back(cdpcacheprimarymgmtaddrtype.get_name_leafdata());
    if (cdpcachesecondarymgmtaddr.is_set || is_set(cdpcachesecondarymgmtaddr.yfilter)) leaf_name_data.push_back(cdpcachesecondarymgmtaddr.get_name_leafdata());
    if (cdpcachesecondarymgmtaddrtype.is_set || is_set(cdpcachesecondarymgmtaddrtype.yfilter)) leaf_name_data.push_back(cdpcachesecondarymgmtaddrtype.get_name_leafdata());
    if (cdpcachesysname.is_set || is_set(cdpcachesysname.yfilter)) leaf_name_data.push_back(cdpcachesysname.get_name_leafdata());
    if (cdpcachesysobjectid.is_set || is_set(cdpcachesysobjectid.yfilter)) leaf_name_data.push_back(cdpcachesysobjectid.get_name_leafdata());
    if (cdpcacheversion.is_set || is_set(cdpcacheversion.yfilter)) leaf_name_data.push_back(cdpcacheversion.get_name_leafdata());
    if (cdpcachevlanid.is_set || is_set(cdpcachevlanid.yfilter)) leaf_name_data.push_back(cdpcachevlanid.get_name_leafdata());
    if (cdpcachevtpmgmtdomain.is_set || is_set(cdpcachevtpmgmtdomain.yfilter)) leaf_name_data.push_back(cdpcachevtpmgmtdomain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpcachetable::Cdpcacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpcachetable::Cdpcacheentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cdpCacheAddress")
    {
        cdpcacheaddress = value;
        cdpcacheaddress.value_namespace = name_space;
        cdpcacheaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheAddressType")
    {
        cdpcacheaddresstype = value;
        cdpcacheaddresstype.value_namespace = name_space;
        cdpcacheaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheApplianceID")
    {
        cdpcacheapplianceid = value;
        cdpcacheapplianceid.value_namespace = name_space;
        cdpcacheapplianceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheCapabilities")
    {
        cdpcachecapabilities = value;
        cdpcachecapabilities.value_namespace = name_space;
        cdpcachecapabilities.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cdpCacheDuplex")
    {
        cdpcacheduplex = value;
        cdpcacheduplex.value_namespace = name_space;
        cdpcacheduplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheLastChange")
    {
        cdpcachelastchange = value;
        cdpcachelastchange.value_namespace = name_space;
        cdpcachelastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheMTU")
    {
        cdpcachemtu = value;
        cdpcachemtu.value_namespace = name_space;
        cdpcachemtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheNativeVLAN")
    {
        cdpcachenativevlan = value;
        cdpcachenativevlan.value_namespace = name_space;
        cdpcachenativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePhysLocation")
    {
        cdpcachephyslocation = value;
        cdpcachephyslocation.value_namespace = name_space;
        cdpcachephyslocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePlatform")
    {
        cdpcacheplatform = value;
        cdpcacheplatform.value_namespace = name_space;
        cdpcacheplatform.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePowerConsumption")
    {
        cdpcachepowerconsumption = value;
        cdpcachepowerconsumption.value_namespace = name_space;
        cdpcachepowerconsumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePrimaryMgmtAddr")
    {
        cdpcacheprimarymgmtaddr = value;
        cdpcacheprimarymgmtaddr.value_namespace = name_space;
        cdpcacheprimarymgmtaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCachePrimaryMgmtAddrType")
    {
        cdpcacheprimarymgmtaddrtype = value;
        cdpcacheprimarymgmtaddrtype.value_namespace = name_space;
        cdpcacheprimarymgmtaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddr")
    {
        cdpcachesecondarymgmtaddr = value;
        cdpcachesecondarymgmtaddr.value_namespace = name_space;
        cdpcachesecondarymgmtaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddrType")
    {
        cdpcachesecondarymgmtaddrtype = value;
        cdpcachesecondarymgmtaddrtype.value_namespace = name_space;
        cdpcachesecondarymgmtaddrtype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cdpCacheVersion")
    {
        cdpcacheversion = value;
        cdpcacheversion.value_namespace = name_space;
        cdpcacheversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheVlanID")
    {
        cdpcachevlanid = value;
        cdpcachevlanid.value_namespace = name_space;
        cdpcachevlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCacheVTPMgmtDomain")
    {
        cdpcachevtpmgmtdomain = value;
        cdpcachevtpmgmtdomain.value_namespace = name_space;
        cdpcachevtpmgmtdomain.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCdpMib::Cdpcachetable::Cdpcacheentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdpCacheIfIndex")
    {
        cdpcacheifindex.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDeviceIndex")
    {
        cdpcachedeviceindex.yfilter = yfilter;
    }
    if(value_path == "cdpCacheAddress")
    {
        cdpcacheaddress.yfilter = yfilter;
    }
    if(value_path == "cdpCacheAddressType")
    {
        cdpcacheaddresstype.yfilter = yfilter;
    }
    if(value_path == "cdpCacheApplianceID")
    {
        cdpcacheapplianceid.yfilter = yfilter;
    }
    if(value_path == "cdpCacheCapabilities")
    {
        cdpcachecapabilities.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDeviceId")
    {
        cdpcachedeviceid.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDevicePort")
    {
        cdpcachedeviceport.yfilter = yfilter;
    }
    if(value_path == "cdpCacheDuplex")
    {
        cdpcacheduplex.yfilter = yfilter;
    }
    if(value_path == "cdpCacheLastChange")
    {
        cdpcachelastchange.yfilter = yfilter;
    }
    if(value_path == "cdpCacheMTU")
    {
        cdpcachemtu.yfilter = yfilter;
    }
    if(value_path == "cdpCacheNativeVLAN")
    {
        cdpcachenativevlan.yfilter = yfilter;
    }
    if(value_path == "cdpCachePhysLocation")
    {
        cdpcachephyslocation.yfilter = yfilter;
    }
    if(value_path == "cdpCachePlatform")
    {
        cdpcacheplatform.yfilter = yfilter;
    }
    if(value_path == "cdpCachePowerConsumption")
    {
        cdpcachepowerconsumption.yfilter = yfilter;
    }
    if(value_path == "cdpCachePrimaryMgmtAddr")
    {
        cdpcacheprimarymgmtaddr.yfilter = yfilter;
    }
    if(value_path == "cdpCachePrimaryMgmtAddrType")
    {
        cdpcacheprimarymgmtaddrtype.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddr")
    {
        cdpcachesecondarymgmtaddr.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSecondaryMgmtAddrType")
    {
        cdpcachesecondarymgmtaddrtype.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSysName")
    {
        cdpcachesysname.yfilter = yfilter;
    }
    if(value_path == "cdpCacheSysObjectID")
    {
        cdpcachesysobjectid.yfilter = yfilter;
    }
    if(value_path == "cdpCacheVersion")
    {
        cdpcacheversion.yfilter = yfilter;
    }
    if(value_path == "cdpCacheVlanID")
    {
        cdpcachevlanid.yfilter = yfilter;
    }
    if(value_path == "cdpCacheVTPMgmtDomain")
    {
        cdpcachevtpmgmtdomain.yfilter = yfilter;
    }
}

bool CiscoCdpMib::Cdpcachetable::Cdpcacheentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCacheIfIndex" || name == "cdpCacheDeviceIndex" || name == "cdpCacheAddress" || name == "cdpCacheAddressType" || name == "cdpCacheApplianceID" || name == "cdpCacheCapabilities" || name == "cdpCacheDeviceId" || name == "cdpCacheDevicePort" || name == "cdpCacheDuplex" || name == "cdpCacheLastChange" || name == "cdpCacheMTU" || name == "cdpCacheNativeVLAN" || name == "cdpCachePhysLocation" || name == "cdpCachePlatform" || name == "cdpCachePowerConsumption" || name == "cdpCachePrimaryMgmtAddr" || name == "cdpCachePrimaryMgmtAddrType" || name == "cdpCacheSecondaryMgmtAddr" || name == "cdpCacheSecondaryMgmtAddrType" || name == "cdpCacheSysName" || name == "cdpCacheSysObjectID" || name == "cdpCacheVersion" || name == "cdpCacheVlanID" || name == "cdpCacheVTPMgmtDomain")
        return true;
    return false;
}

CiscoCdpMib::Cdpctaddresstable::Cdpctaddresstable()
{
    yang_name = "cdpCtAddressTable"; yang_parent_name = "CISCO-CDP-MIB";
}

CiscoCdpMib::Cdpctaddresstable::~Cdpctaddresstable()
{
}

bool CiscoCdpMib::Cdpctaddresstable::has_data() const
{
    for (std::size_t index=0; index<cdpctaddressentry.size(); index++)
    {
        if(cdpctaddressentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCdpMib::Cdpctaddresstable::has_operation() const
{
    for (std::size_t index=0; index<cdpctaddressentry.size(); index++)
    {
        if(cdpctaddressentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCdpMib::Cdpctaddresstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCtAddressTable";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpctaddresstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpctaddresstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdpCtAddressEntry")
    {
        for(auto const & c : cdpctaddressentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry>();
        c->parent = this;
        cdpctaddressentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpctaddresstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdpctaddressentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCdpMib::Cdpctaddresstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCdpMib::Cdpctaddresstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCdpMib::Cdpctaddresstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCtAddressEntry")
        return true;
    return false;
}

CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::Cdpctaddressentry()
    :
    cdpcacheifindex{YType::str, "cdpCacheIfIndex"},
    cdpcachedeviceindex{YType::str, "cdpCacheDeviceIndex"},
    cdpctaddressindex{YType::int32, "cdpCtAddressIndex"},
    cdpctaddress{YType::str, "cdpCtAddress"},
    cdpctaddresstype{YType::enumeration, "cdpCtAddressType"}
{
    yang_name = "cdpCtAddressEntry"; yang_parent_name = "cdpCtAddressTable";
}

CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::~Cdpctaddressentry()
{
}

bool CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::has_data() const
{
    return cdpcacheifindex.is_set
	|| cdpcachedeviceindex.is_set
	|| cdpctaddressindex.is_set
	|| cdpctaddress.is_set
	|| cdpctaddresstype.is_set;
}

bool CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdpcacheifindex.yfilter)
	|| ydk::is_set(cdpcachedeviceindex.yfilter)
	|| ydk::is_set(cdpctaddressindex.yfilter)
	|| ydk::is_set(cdpctaddress.yfilter)
	|| ydk::is_set(cdpctaddresstype.yfilter);
}

std::string CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdpCtAddressEntry" <<"[cdpCacheIfIndex='" <<cdpcacheifindex <<"']" <<"[cdpCacheDeviceIndex='" <<cdpcachedeviceindex <<"']" <<"[cdpCtAddressIndex='" <<cdpctaddressindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CDP-MIB:CISCO-CDP-MIB/cdpCtAddressTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdpcacheifindex.is_set || is_set(cdpcacheifindex.yfilter)) leaf_name_data.push_back(cdpcacheifindex.get_name_leafdata());
    if (cdpcachedeviceindex.is_set || is_set(cdpcachedeviceindex.yfilter)) leaf_name_data.push_back(cdpcachedeviceindex.get_name_leafdata());
    if (cdpctaddressindex.is_set || is_set(cdpctaddressindex.yfilter)) leaf_name_data.push_back(cdpctaddressindex.get_name_leafdata());
    if (cdpctaddress.is_set || is_set(cdpctaddress.yfilter)) leaf_name_data.push_back(cdpctaddress.get_name_leafdata());
    if (cdpctaddresstype.is_set || is_set(cdpctaddresstype.yfilter)) leaf_name_data.push_back(cdpctaddresstype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cdpCtAddress")
    {
        cdpctaddress = value;
        cdpctaddress.value_namespace = name_space;
        cdpctaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdpCtAddressType")
    {
        cdpctaddresstype = value;
        cdpctaddresstype.value_namespace = name_space;
        cdpctaddresstype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cdpCtAddress")
    {
        cdpctaddress.yfilter = yfilter;
    }
    if(value_path == "cdpCtAddressType")
    {
        cdpctaddresstype.yfilter = yfilter;
    }
}

bool CiscoCdpMib::Cdpctaddresstable::Cdpctaddressentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdpCacheIfIndex" || name == "cdpCacheDeviceIndex" || name == "cdpCtAddressIndex" || name == "cdpCtAddress" || name == "cdpCtAddressType")
        return true;
    return false;
}

const Enum::YLeaf CiscoCdpMib::Cdpglobal::Cdpglobaldeviceidformat::serialNumber {1, "serialNumber"};
const Enum::YLeaf CiscoCdpMib::Cdpglobal::Cdpglobaldeviceidformat::macAddress {2, "macAddress"};
const Enum::YLeaf CiscoCdpMib::Cdpglobal::Cdpglobaldeviceidformat::other {3, "other"};

const Enum::YLeaf CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::Cdpinterfaceextendedtrust::trusted {1, "trusted"};
const Enum::YLeaf CiscoCdpMib::Cdpinterfaceexttable::Cdpinterfaceextentry::Cdpinterfaceextendedtrust::noTrust {2, "noTrust"};

const Enum::YLeaf CiscoCdpMib::Cdpcachetable::Cdpcacheentry::Cdpcacheduplex::unknown {1, "unknown"};
const Enum::YLeaf CiscoCdpMib::Cdpcachetable::Cdpcacheentry::Cdpcacheduplex::halfduplex {2, "halfduplex"};
const Enum::YLeaf CiscoCdpMib::Cdpcachetable::Cdpcacheentry::Cdpcacheduplex::fullduplex {3, "fullduplex"};


}
}

