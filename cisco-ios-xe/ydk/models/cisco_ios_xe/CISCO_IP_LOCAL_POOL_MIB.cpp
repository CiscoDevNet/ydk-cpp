
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_LOCAL_POOL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IP_LOCAL_POOL_MIB {

CISCOIPLOCALPOOLMIB::CISCOIPLOCALPOOLMIB()
    :
    ciplocalpoolconfig(std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig>())
    , ciplocalpoolconfigtable(std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable>())
    , ciplocalpoolgroupcontainstable(std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable>())
    , ciplocalpoolgrouptable(std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable>())
    , ciplocalpoolstatstable(std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable>())
    , ciplocalpoolalloctable(std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable>())
{
    ciplocalpoolconfig->parent = this;
    ciplocalpoolconfigtable->parent = this;
    ciplocalpoolgroupcontainstable->parent = this;
    ciplocalpoolgrouptable->parent = this;
    ciplocalpoolstatstable->parent = this;
    ciplocalpoolalloctable->parent = this;

    yang_name = "CISCO-IP-LOCAL-POOL-MIB"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::~CISCOIPLOCALPOOLMIB()
{
}

bool CISCOIPLOCALPOOLMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciplocalpoolconfig !=  nullptr && ciplocalpoolconfig->has_data())
	|| (ciplocalpoolconfigtable !=  nullptr && ciplocalpoolconfigtable->has_data())
	|| (ciplocalpoolgroupcontainstable !=  nullptr && ciplocalpoolgroupcontainstable->has_data())
	|| (ciplocalpoolgrouptable !=  nullptr && ciplocalpoolgrouptable->has_data())
	|| (ciplocalpoolstatstable !=  nullptr && ciplocalpoolstatstable->has_data())
	|| (ciplocalpoolalloctable !=  nullptr && ciplocalpoolalloctable->has_data());
}

bool CISCOIPLOCALPOOLMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciplocalpoolconfig !=  nullptr && ciplocalpoolconfig->has_operation())
	|| (ciplocalpoolconfigtable !=  nullptr && ciplocalpoolconfigtable->has_operation())
	|| (ciplocalpoolgroupcontainstable !=  nullptr && ciplocalpoolgroupcontainstable->has_operation())
	|| (ciplocalpoolgrouptable !=  nullptr && ciplocalpoolgrouptable->has_operation())
	|| (ciplocalpoolstatstable !=  nullptr && ciplocalpoolstatstable->has_operation())
	|| (ciplocalpoolalloctable !=  nullptr && ciplocalpoolalloctable->has_operation());
}

std::string CISCOIPLOCALPOOLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolConfig")
    {
        if(ciplocalpoolconfig == nullptr)
        {
            ciplocalpoolconfig = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig>();
        }
        return ciplocalpoolconfig;
    }

    if(child_yang_name == "cIpLocalPoolConfigTable")
    {
        if(ciplocalpoolconfigtable == nullptr)
        {
            ciplocalpoolconfigtable = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable>();
        }
        return ciplocalpoolconfigtable;
    }

    if(child_yang_name == "cIpLocalPoolGroupContainsTable")
    {
        if(ciplocalpoolgroupcontainstable == nullptr)
        {
            ciplocalpoolgroupcontainstable = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable>();
        }
        return ciplocalpoolgroupcontainstable;
    }

    if(child_yang_name == "cIpLocalPoolGroupTable")
    {
        if(ciplocalpoolgrouptable == nullptr)
        {
            ciplocalpoolgrouptable = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable>();
        }
        return ciplocalpoolgrouptable;
    }

    if(child_yang_name == "cIpLocalPoolStatsTable")
    {
        if(ciplocalpoolstatstable == nullptr)
        {
            ciplocalpoolstatstable = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable>();
        }
        return ciplocalpoolstatstable;
    }

    if(child_yang_name == "cIpLocalPoolAllocTable")
    {
        if(ciplocalpoolalloctable == nullptr)
        {
            ciplocalpoolalloctable = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable>();
        }
        return ciplocalpoolalloctable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciplocalpoolconfig != nullptr)
    {
        children["cIpLocalPoolConfig"] = ciplocalpoolconfig;
    }

    if(ciplocalpoolconfigtable != nullptr)
    {
        children["cIpLocalPoolConfigTable"] = ciplocalpoolconfigtable;
    }

    if(ciplocalpoolgroupcontainstable != nullptr)
    {
        children["cIpLocalPoolGroupContainsTable"] = ciplocalpoolgroupcontainstable;
    }

    if(ciplocalpoolgrouptable != nullptr)
    {
        children["cIpLocalPoolGroupTable"] = ciplocalpoolgrouptable;
    }

    if(ciplocalpoolstatstable != nullptr)
    {
        children["cIpLocalPoolStatsTable"] = ciplocalpoolstatstable;
    }

    if(ciplocalpoolalloctable != nullptr)
    {
        children["cIpLocalPoolAllocTable"] = ciplocalpoolalloctable;
    }

    return children;
}

void CISCOIPLOCALPOOLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPLOCALPOOLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPLOCALPOOLMIB>();
}

std::string CISCOIPLOCALPOOLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPLOCALPOOLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPLOCALPOOLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPLOCALPOOLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPLOCALPOOLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolConfig" || name == "cIpLocalPoolConfigTable" || name == "cIpLocalPoolGroupContainsTable" || name == "cIpLocalPoolGroupTable" || name == "cIpLocalPoolStatsTable" || name == "cIpLocalPoolAllocTable")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::CIpLocalPoolConfig()
    :
    ciplocalpoolnotificationsenable{YType::boolean, "cIpLocalPoolNotificationsEnable"}
{

    yang_name = "cIpLocalPoolConfig"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::~CIpLocalPoolConfig()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::has_data() const
{
    if (is_presence_container) return true;
    return ciplocalpoolnotificationsenable.is_set;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolnotificationsenable.yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolnotificationsenable.is_set || is_set(ciplocalpoolnotificationsenable.yfilter)) leaf_name_data.push_back(ciplocalpoolnotificationsenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolNotificationsEnable")
    {
        ciplocalpoolnotificationsenable = value;
        ciplocalpoolnotificationsenable.value_namespace = name_space;
        ciplocalpoolnotificationsenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolNotificationsEnable")
    {
        ciplocalpoolnotificationsenable.yfilter = yfilter;
    }
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolNotificationsEnable")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigTable()
    :
    ciplocalpoolconfigentry(this, {"ciplocalpoolname", "ciplocalpooladdrtype", "ciplocalpooladdresslo"})
{

    yang_name = "cIpLocalPoolConfigTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::~CIpLocalPoolConfigTable()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciplocalpoolconfigentry.len(); index++)
    {
        if(ciplocalpoolconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolconfigentry.len(); index++)
    {
        if(ciplocalpoolconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolConfigEntry")
    {
        auto c = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry>();
        c->parent = this;
        ciplocalpoolconfigentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciplocalpoolconfigentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolConfigEntry")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::CIpLocalPoolConfigEntry()
    :
    ciplocalpoolname{YType::str, "cIpLocalPoolName"},
    ciplocalpooladdrtype{YType::enumeration, "cIpLocalPoolAddrType"},
    ciplocalpooladdresslo{YType::str, "cIpLocalPoolAddressLo"},
    ciplocalpooladdresshi{YType::str, "cIpLocalPoolAddressHi"},
    ciplocalpoolfreeaddrs{YType::uint32, "cIpLocalPoolFreeAddrs"},
    ciplocalpoolinuseaddrs{YType::uint32, "cIpLocalPoolInUseAddrs"},
    ciplocalpoolgroupcontainedin{YType::str, "cIpLocalPoolGroupContainedIn"},
    ciplocalpoolrowstatus{YType::enumeration, "cIpLocalPoolRowStatus"},
    ciplocalpoolpriority{YType::uint32, "cIpLocalPoolPriority"}
{

    yang_name = "cIpLocalPoolConfigEntry"; yang_parent_name = "cIpLocalPoolConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::~CIpLocalPoolConfigEntry()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciplocalpoolname.is_set
	|| ciplocalpooladdrtype.is_set
	|| ciplocalpooladdresslo.is_set
	|| ciplocalpooladdresshi.is_set
	|| ciplocalpoolfreeaddrs.is_set
	|| ciplocalpoolinuseaddrs.is_set
	|| ciplocalpoolgroupcontainedin.is_set
	|| ciplocalpoolrowstatus.is_set
	|| ciplocalpoolpriority.is_set;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolname.yfilter)
	|| ydk::is_set(ciplocalpooladdrtype.yfilter)
	|| ydk::is_set(ciplocalpooladdresslo.yfilter)
	|| ydk::is_set(ciplocalpooladdresshi.yfilter)
	|| ydk::is_set(ciplocalpoolfreeaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolinuseaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolgroupcontainedin.yfilter)
	|| ydk::is_set(ciplocalpoolrowstatus.yfilter)
	|| ydk::is_set(ciplocalpoolpriority.yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolConfigEntry";
    ADD_KEY_TOKEN(ciplocalpoolname, "cIpLocalPoolName");
    ADD_KEY_TOKEN(ciplocalpooladdrtype, "cIpLocalPoolAddrType");
    ADD_KEY_TOKEN(ciplocalpooladdresslo, "cIpLocalPoolAddressLo");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.yfilter)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpooladdrtype.is_set || is_set(ciplocalpooladdrtype.yfilter)) leaf_name_data.push_back(ciplocalpooladdrtype.get_name_leafdata());
    if (ciplocalpooladdresslo.is_set || is_set(ciplocalpooladdresslo.yfilter)) leaf_name_data.push_back(ciplocalpooladdresslo.get_name_leafdata());
    if (ciplocalpooladdresshi.is_set || is_set(ciplocalpooladdresshi.yfilter)) leaf_name_data.push_back(ciplocalpooladdresshi.get_name_leafdata());
    if (ciplocalpoolfreeaddrs.is_set || is_set(ciplocalpoolfreeaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolfreeaddrs.get_name_leafdata());
    if (ciplocalpoolinuseaddrs.is_set || is_set(ciplocalpoolinuseaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolinuseaddrs.get_name_leafdata());
    if (ciplocalpoolgroupcontainedin.is_set || is_set(ciplocalpoolgroupcontainedin.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupcontainedin.get_name_leafdata());
    if (ciplocalpoolrowstatus.is_set || is_set(ciplocalpoolrowstatus.yfilter)) leaf_name_data.push_back(ciplocalpoolrowstatus.get_name_leafdata());
    if (ciplocalpoolpriority.is_set || is_set(ciplocalpoolpriority.yfilter)) leaf_name_data.push_back(ciplocalpoolpriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname = value;
        ciplocalpoolname.value_namespace = name_space;
        ciplocalpoolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolAddrType")
    {
        ciplocalpooladdrtype = value;
        ciplocalpooladdrtype.value_namespace = name_space;
        ciplocalpooladdrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolAddressLo")
    {
        ciplocalpooladdresslo = value;
        ciplocalpooladdresslo.value_namespace = name_space;
        ciplocalpooladdresslo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolAddressHi")
    {
        ciplocalpooladdresshi = value;
        ciplocalpooladdresshi.value_namespace = name_space;
        ciplocalpooladdresshi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolFreeAddrs")
    {
        ciplocalpoolfreeaddrs = value;
        ciplocalpoolfreeaddrs.value_namespace = name_space;
        ciplocalpoolfreeaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolInUseAddrs")
    {
        ciplocalpoolinuseaddrs = value;
        ciplocalpoolinuseaddrs.value_namespace = name_space;
        ciplocalpoolinuseaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolGroupContainedIn")
    {
        ciplocalpoolgroupcontainedin = value;
        ciplocalpoolgroupcontainedin.value_namespace = name_space;
        ciplocalpoolgroupcontainedin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolRowStatus")
    {
        ciplocalpoolrowstatus = value;
        ciplocalpoolrowstatus.value_namespace = name_space;
        ciplocalpoolrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolPriority")
    {
        ciplocalpoolpriority = value;
        ciplocalpoolpriority.value_namespace = name_space;
        ciplocalpoolpriority.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolAddrType")
    {
        ciplocalpooladdrtype.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolAddressLo")
    {
        ciplocalpooladdresslo.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolAddressHi")
    {
        ciplocalpooladdresshi.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolFreeAddrs")
    {
        ciplocalpoolfreeaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolInUseAddrs")
    {
        ciplocalpoolinuseaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolGroupContainedIn")
    {
        ciplocalpoolgroupcontainedin.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolRowStatus")
    {
        ciplocalpoolrowstatus.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolPriority")
    {
        ciplocalpoolpriority.yfilter = yfilter;
    }
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolConfigTable::CIpLocalPoolConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolName" || name == "cIpLocalPoolAddrType" || name == "cIpLocalPoolAddressLo" || name == "cIpLocalPoolAddressHi" || name == "cIpLocalPoolFreeAddrs" || name == "cIpLocalPoolInUseAddrs" || name == "cIpLocalPoolGroupContainedIn" || name == "cIpLocalPoolRowStatus" || name == "cIpLocalPoolPriority")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsTable()
    :
    ciplocalpoolgroupcontainsentry(this, {"ciplocalpoolgroupname", "ciplocalpoolchildindex"})
{

    yang_name = "cIpLocalPoolGroupContainsTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::~CIpLocalPoolGroupContainsTable()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciplocalpoolgroupcontainsentry.len(); index++)
    {
        if(ciplocalpoolgroupcontainsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupcontainsentry.len(); index++)
    {
        if(ciplocalpoolgroupcontainsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupContainsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolGroupContainsEntry")
    {
        auto c = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry>();
        c->parent = this;
        ciplocalpoolgroupcontainsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciplocalpoolgroupcontainsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupContainsEntry")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::CIpLocalPoolGroupContainsEntry()
    :
    ciplocalpoolgroupname{YType::str, "cIpLocalPoolGroupName"},
    ciplocalpoolchildindex{YType::str, "cIpLocalPoolChildIndex"}
{

    yang_name = "cIpLocalPoolGroupContainsEntry"; yang_parent_name = "cIpLocalPoolGroupContainsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::~CIpLocalPoolGroupContainsEntry()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciplocalpoolgroupname.is_set
	|| ciplocalpoolchildindex.is_set;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolgroupname.yfilter)
	|| ydk::is_set(ciplocalpoolchildindex.yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolGroupContainsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupContainsEntry";
    ADD_KEY_TOKEN(ciplocalpoolgroupname, "cIpLocalPoolGroupName");
    ADD_KEY_TOKEN(ciplocalpoolchildindex, "cIpLocalPoolChildIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolgroupname.is_set || is_set(ciplocalpoolgroupname.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupname.get_name_leafdata());
    if (ciplocalpoolchildindex.is_set || is_set(ciplocalpoolchildindex.yfilter)) leaf_name_data.push_back(ciplocalpoolchildindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolGroupName")
    {
        ciplocalpoolgroupname = value;
        ciplocalpoolgroupname.value_namespace = name_space;
        ciplocalpoolgroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolChildIndex")
    {
        ciplocalpoolchildindex = value;
        ciplocalpoolchildindex.value_namespace = name_space;
        ciplocalpoolchildindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolGroupName")
    {
        ciplocalpoolgroupname.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolChildIndex")
    {
        ciplocalpoolchildindex.yfilter = yfilter;
    }
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupContainsTable::CIpLocalPoolGroupContainsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupName" || name == "cIpLocalPoolChildIndex")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupTable()
    :
    ciplocalpoolgroupentry(this, {"ciplocalpoolgroupname"})
{

    yang_name = "cIpLocalPoolGroupTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::~CIpLocalPoolGroupTable()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciplocalpoolgroupentry.len(); index++)
    {
        if(ciplocalpoolgroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupentry.len(); index++)
    {
        if(ciplocalpoolgroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolGroupEntry")
    {
        auto c = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry>();
        c->parent = this;
        ciplocalpoolgroupentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciplocalpoolgroupentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupEntry")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::CIpLocalPoolGroupEntry()
    :
    ciplocalpoolgroupname{YType::str, "cIpLocalPoolGroupName"},
    ciplocalpoolgroupfreeaddrs{YType::uint32, "cIpLocalPoolGroupFreeAddrs"},
    ciplocalpoolgroupinuseaddrs{YType::uint32, "cIpLocalPoolGroupInUseAddrs"}
{

    yang_name = "cIpLocalPoolGroupEntry"; yang_parent_name = "cIpLocalPoolGroupTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::~CIpLocalPoolGroupEntry()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciplocalpoolgroupname.is_set
	|| ciplocalpoolgroupfreeaddrs.is_set
	|| ciplocalpoolgroupinuseaddrs.is_set;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolgroupname.yfilter)
	|| ydk::is_set(ciplocalpoolgroupfreeaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolgroupinuseaddrs.yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupEntry";
    ADD_KEY_TOKEN(ciplocalpoolgroupname, "cIpLocalPoolGroupName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolgroupname.is_set || is_set(ciplocalpoolgroupname.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupname.get_name_leafdata());
    if (ciplocalpoolgroupfreeaddrs.is_set || is_set(ciplocalpoolgroupfreeaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupfreeaddrs.get_name_leafdata());
    if (ciplocalpoolgroupinuseaddrs.is_set || is_set(ciplocalpoolgroupinuseaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupinuseaddrs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolGroupName")
    {
        ciplocalpoolgroupname = value;
        ciplocalpoolgroupname.value_namespace = name_space;
        ciplocalpoolgroupname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolGroupFreeAddrs")
    {
        ciplocalpoolgroupfreeaddrs = value;
        ciplocalpoolgroupfreeaddrs.value_namespace = name_space;
        ciplocalpoolgroupfreeaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolGroupInUseAddrs")
    {
        ciplocalpoolgroupinuseaddrs = value;
        ciplocalpoolgroupinuseaddrs.value_namespace = name_space;
        ciplocalpoolgroupinuseaddrs.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolGroupName")
    {
        ciplocalpoolgroupname.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolGroupFreeAddrs")
    {
        ciplocalpoolgroupfreeaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolGroupInUseAddrs")
    {
        ciplocalpoolgroupinuseaddrs.yfilter = yfilter;
    }
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolGroupTable::CIpLocalPoolGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupName" || name == "cIpLocalPoolGroupFreeAddrs" || name == "cIpLocalPoolGroupInUseAddrs")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsTable()
    :
    ciplocalpoolstatsentry(this, {"ciplocalpoolname"})
{

    yang_name = "cIpLocalPoolStatsTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::~CIpLocalPoolStatsTable()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciplocalpoolstatsentry.len(); index++)
    {
        if(ciplocalpoolstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolstatsentry.len(); index++)
    {
        if(ciplocalpoolstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolStatsEntry")
    {
        auto c = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry>();
        c->parent = this;
        ciplocalpoolstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciplocalpoolstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolStatsEntry")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::CIpLocalPoolStatsEntry()
    :
    ciplocalpoolname{YType::str, "cIpLocalPoolName"},
    ciplocalpoolstatfreeaddrs{YType::uint32, "cIpLocalPoolStatFreeAddrs"},
    ciplocalpoolstatinuseaddrs{YType::uint32, "cIpLocalPoolStatInUseAddrs"},
    ciplocalpoolstathiwaterusedaddrs{YType::uint32, "cIpLocalPoolStatHiWaterUsedAddrs"},
    ciplocalpoolstatinuseaddrthldlo{YType::uint32, "cIpLocalPoolStatInUseAddrThldLo"},
    ciplocalpoolstatinuseaddrthldhi{YType::uint32, "cIpLocalPoolStatInUseAddrThldHi"},
    ciplocalpoolpercentaddrthldlo{YType::uint32, "cIpLocalPoolPercentAddrThldLo"},
    ciplocalpoolpercentaddrthldhi{YType::uint32, "cIpLocalPoolPercentAddrThldHi"}
{

    yang_name = "cIpLocalPoolStatsEntry"; yang_parent_name = "cIpLocalPoolStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::~CIpLocalPoolStatsEntry()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciplocalpoolname.is_set
	|| ciplocalpoolstatfreeaddrs.is_set
	|| ciplocalpoolstatinuseaddrs.is_set
	|| ciplocalpoolstathiwaterusedaddrs.is_set
	|| ciplocalpoolstatinuseaddrthldlo.is_set
	|| ciplocalpoolstatinuseaddrthldhi.is_set
	|| ciplocalpoolpercentaddrthldlo.is_set
	|| ciplocalpoolpercentaddrthldhi.is_set;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolname.yfilter)
	|| ydk::is_set(ciplocalpoolstatfreeaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolstatinuseaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolstathiwaterusedaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolstatinuseaddrthldlo.yfilter)
	|| ydk::is_set(ciplocalpoolstatinuseaddrthldhi.yfilter)
	|| ydk::is_set(ciplocalpoolpercentaddrthldlo.yfilter)
	|| ydk::is_set(ciplocalpoolpercentaddrthldhi.yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolStatsEntry";
    ADD_KEY_TOKEN(ciplocalpoolname, "cIpLocalPoolName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.yfilter)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpoolstatfreeaddrs.is_set || is_set(ciplocalpoolstatfreeaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolstatfreeaddrs.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrs.is_set || is_set(ciplocalpoolstatinuseaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrs.get_name_leafdata());
    if (ciplocalpoolstathiwaterusedaddrs.is_set || is_set(ciplocalpoolstathiwaterusedaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolstathiwaterusedaddrs.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrthldlo.is_set || is_set(ciplocalpoolstatinuseaddrthldlo.yfilter)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrthldlo.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrthldhi.is_set || is_set(ciplocalpoolstatinuseaddrthldhi.yfilter)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrthldhi.get_name_leafdata());
    if (ciplocalpoolpercentaddrthldlo.is_set || is_set(ciplocalpoolpercentaddrthldlo.yfilter)) leaf_name_data.push_back(ciplocalpoolpercentaddrthldlo.get_name_leafdata());
    if (ciplocalpoolpercentaddrthldhi.is_set || is_set(ciplocalpoolpercentaddrthldhi.yfilter)) leaf_name_data.push_back(ciplocalpoolpercentaddrthldhi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname = value;
        ciplocalpoolname.value_namespace = name_space;
        ciplocalpoolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatFreeAddrs")
    {
        ciplocalpoolstatfreeaddrs = value;
        ciplocalpoolstatfreeaddrs.value_namespace = name_space;
        ciplocalpoolstatfreeaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrs")
    {
        ciplocalpoolstatinuseaddrs = value;
        ciplocalpoolstatinuseaddrs.value_namespace = name_space;
        ciplocalpoolstatinuseaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatHiWaterUsedAddrs")
    {
        ciplocalpoolstathiwaterusedaddrs = value;
        ciplocalpoolstathiwaterusedaddrs.value_namespace = name_space;
        ciplocalpoolstathiwaterusedaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldLo")
    {
        ciplocalpoolstatinuseaddrthldlo = value;
        ciplocalpoolstatinuseaddrthldlo.value_namespace = name_space;
        ciplocalpoolstatinuseaddrthldlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldHi")
    {
        ciplocalpoolstatinuseaddrthldhi = value;
        ciplocalpoolstatinuseaddrthldhi.value_namespace = name_space;
        ciplocalpoolstatinuseaddrthldhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldLo")
    {
        ciplocalpoolpercentaddrthldlo = value;
        ciplocalpoolpercentaddrthldlo.value_namespace = name_space;
        ciplocalpoolpercentaddrthldlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldHi")
    {
        ciplocalpoolpercentaddrthldhi = value;
        ciplocalpoolpercentaddrthldhi.value_namespace = name_space;
        ciplocalpoolpercentaddrthldhi.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatFreeAddrs")
    {
        ciplocalpoolstatfreeaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrs")
    {
        ciplocalpoolstatinuseaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatHiWaterUsedAddrs")
    {
        ciplocalpoolstathiwaterusedaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldLo")
    {
        ciplocalpoolstatinuseaddrthldlo.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldHi")
    {
        ciplocalpoolstatinuseaddrthldhi.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldLo")
    {
        ciplocalpoolpercentaddrthldlo.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldHi")
    {
        ciplocalpoolpercentaddrthldhi.yfilter = yfilter;
    }
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolStatsTable::CIpLocalPoolStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolName" || name == "cIpLocalPoolStatFreeAddrs" || name == "cIpLocalPoolStatInUseAddrs" || name == "cIpLocalPoolStatHiWaterUsedAddrs" || name == "cIpLocalPoolStatInUseAddrThldLo" || name == "cIpLocalPoolStatInUseAddrThldHi" || name == "cIpLocalPoolPercentAddrThldLo" || name == "cIpLocalPoolPercentAddrThldHi")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocTable()
    :
    ciplocalpoolallocentry(this, {"ciplocalpoolname", "ciplocalpoolallocaddrtype", "ciplocalpoolallocaddr"})
{

    yang_name = "cIpLocalPoolAllocTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::~CIpLocalPoolAllocTable()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciplocalpoolallocentry.len(); index++)
    {
        if(ciplocalpoolallocentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolallocentry.len(); index++)
    {
        if(ciplocalpoolallocentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolAllocTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolAllocEntry")
    {
        auto c = std::make_shared<CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry>();
        c->parent = this;
        ciplocalpoolallocentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciplocalpoolallocentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolAllocEntry")
        return true;
    return false;
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::CIpLocalPoolAllocEntry()
    :
    ciplocalpoolname{YType::str, "cIpLocalPoolName"},
    ciplocalpoolallocaddrtype{YType::enumeration, "cIpLocalPoolAllocAddrType"},
    ciplocalpoolallocaddr{YType::str, "cIpLocalPoolAllocAddr"},
    ciplocalpoolallocifindex{YType::int32, "cIpLocalPoolAllocIfIndex"},
    ciplocalpoolallocuser{YType::str, "cIpLocalPoolAllocUser"}
{

    yang_name = "cIpLocalPoolAllocEntry"; yang_parent_name = "cIpLocalPoolAllocTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::~CIpLocalPoolAllocEntry()
{
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciplocalpoolname.is_set
	|| ciplocalpoolallocaddrtype.is_set
	|| ciplocalpoolallocaddr.is_set
	|| ciplocalpoolallocifindex.is_set
	|| ciplocalpoolallocuser.is_set;
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolname.yfilter)
	|| ydk::is_set(ciplocalpoolallocaddrtype.yfilter)
	|| ydk::is_set(ciplocalpoolallocaddr.yfilter)
	|| ydk::is_set(ciplocalpoolallocifindex.yfilter)
	|| ydk::is_set(ciplocalpoolallocuser.yfilter);
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolAllocTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolAllocEntry";
    ADD_KEY_TOKEN(ciplocalpoolname, "cIpLocalPoolName");
    ADD_KEY_TOKEN(ciplocalpoolallocaddrtype, "cIpLocalPoolAllocAddrType");
    ADD_KEY_TOKEN(ciplocalpoolallocaddr, "cIpLocalPoolAllocAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.yfilter)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpoolallocaddrtype.is_set || is_set(ciplocalpoolallocaddrtype.yfilter)) leaf_name_data.push_back(ciplocalpoolallocaddrtype.get_name_leafdata());
    if (ciplocalpoolallocaddr.is_set || is_set(ciplocalpoolallocaddr.yfilter)) leaf_name_data.push_back(ciplocalpoolallocaddr.get_name_leafdata());
    if (ciplocalpoolallocifindex.is_set || is_set(ciplocalpoolallocifindex.yfilter)) leaf_name_data.push_back(ciplocalpoolallocifindex.get_name_leafdata());
    if (ciplocalpoolallocuser.is_set || is_set(ciplocalpoolallocuser.yfilter)) leaf_name_data.push_back(ciplocalpoolallocuser.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname = value;
        ciplocalpoolname.value_namespace = name_space;
        ciplocalpoolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolAllocAddrType")
    {
        ciplocalpoolallocaddrtype = value;
        ciplocalpoolallocaddrtype.value_namespace = name_space;
        ciplocalpoolallocaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolAllocAddr")
    {
        ciplocalpoolallocaddr = value;
        ciplocalpoolallocaddr.value_namespace = name_space;
        ciplocalpoolallocaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolAllocIfIndex")
    {
        ciplocalpoolallocifindex = value;
        ciplocalpoolallocifindex.value_namespace = name_space;
        ciplocalpoolallocifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolAllocUser")
    {
        ciplocalpoolallocuser = value;
        ciplocalpoolallocuser.value_namespace = name_space;
        ciplocalpoolallocuser.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolAllocAddrType")
    {
        ciplocalpoolallocaddrtype.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolAllocAddr")
    {
        ciplocalpoolallocaddr.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolAllocIfIndex")
    {
        ciplocalpoolallocifindex.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolAllocUser")
    {
        ciplocalpoolallocuser.yfilter = yfilter;
    }
}

bool CISCOIPLOCALPOOLMIB::CIpLocalPoolAllocTable::CIpLocalPoolAllocEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolName" || name == "cIpLocalPoolAllocAddrType" || name == "cIpLocalPoolAllocAddr" || name == "cIpLocalPoolAllocIfIndex" || name == "cIpLocalPoolAllocUser")
        return true;
    return false;
}


}
}

