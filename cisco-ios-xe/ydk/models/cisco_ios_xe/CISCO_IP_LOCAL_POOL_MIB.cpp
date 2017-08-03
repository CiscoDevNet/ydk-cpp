
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_LOCAL_POOL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IP_LOCAL_POOL_MIB {

CiscoIpLocalPoolMib::CiscoIpLocalPoolMib()
    :
    ciplocalpoolalloctable(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolalloctable>())
	,ciplocalpoolconfig(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfig>())
	,ciplocalpoolconfigtable(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfigtable>())
	,ciplocalpoolgroupcontainstable(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable>())
	,ciplocalpoolgrouptable(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgrouptable>())
	,ciplocalpoolstatstable(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolstatstable>())
{
    ciplocalpoolalloctable->parent = this;

    ciplocalpoolconfig->parent = this;

    ciplocalpoolconfigtable->parent = this;

    ciplocalpoolgroupcontainstable->parent = this;

    ciplocalpoolgrouptable->parent = this;

    ciplocalpoolstatstable->parent = this;

    yang_name = "CISCO-IP-LOCAL-POOL-MIB"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::~CiscoIpLocalPoolMib()
{
}

bool CiscoIpLocalPoolMib::has_data() const
{
    return (ciplocalpoolalloctable !=  nullptr && ciplocalpoolalloctable->has_data())
	|| (ciplocalpoolconfig !=  nullptr && ciplocalpoolconfig->has_data())
	|| (ciplocalpoolconfigtable !=  nullptr && ciplocalpoolconfigtable->has_data())
	|| (ciplocalpoolgroupcontainstable !=  nullptr && ciplocalpoolgroupcontainstable->has_data())
	|| (ciplocalpoolgrouptable !=  nullptr && ciplocalpoolgrouptable->has_data())
	|| (ciplocalpoolstatstable !=  nullptr && ciplocalpoolstatstable->has_data());
}

bool CiscoIpLocalPoolMib::has_operation() const
{
    return is_set(yfilter)
	|| (ciplocalpoolalloctable !=  nullptr && ciplocalpoolalloctable->has_operation())
	|| (ciplocalpoolconfig !=  nullptr && ciplocalpoolconfig->has_operation())
	|| (ciplocalpoolconfigtable !=  nullptr && ciplocalpoolconfigtable->has_operation())
	|| (ciplocalpoolgroupcontainstable !=  nullptr && ciplocalpoolgroupcontainstable->has_operation())
	|| (ciplocalpoolgrouptable !=  nullptr && ciplocalpoolgrouptable->has_operation())
	|| (ciplocalpoolstatstable !=  nullptr && ciplocalpoolstatstable->has_operation());
}

std::string CiscoIpLocalPoolMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpLocalPoolMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolAllocTable")
    {
        if(ciplocalpoolalloctable == nullptr)
        {
            ciplocalpoolalloctable = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolalloctable>();
        }
        return ciplocalpoolalloctable;
    }

    if(child_yang_name == "cIpLocalPoolConfig")
    {
        if(ciplocalpoolconfig == nullptr)
        {
            ciplocalpoolconfig = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfig>();
        }
        return ciplocalpoolconfig;
    }

    if(child_yang_name == "cIpLocalPoolConfigTable")
    {
        if(ciplocalpoolconfigtable == nullptr)
        {
            ciplocalpoolconfigtable = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfigtable>();
        }
        return ciplocalpoolconfigtable;
    }

    if(child_yang_name == "cIpLocalPoolGroupContainsTable")
    {
        if(ciplocalpoolgroupcontainstable == nullptr)
        {
            ciplocalpoolgroupcontainstable = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable>();
        }
        return ciplocalpoolgroupcontainstable;
    }

    if(child_yang_name == "cIpLocalPoolGroupTable")
    {
        if(ciplocalpoolgrouptable == nullptr)
        {
            ciplocalpoolgrouptable = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgrouptable>();
        }
        return ciplocalpoolgrouptable;
    }

    if(child_yang_name == "cIpLocalPoolStatsTable")
    {
        if(ciplocalpoolstatstable == nullptr)
        {
            ciplocalpoolstatstable = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolstatstable>();
        }
        return ciplocalpoolstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciplocalpoolalloctable != nullptr)
    {
        children["cIpLocalPoolAllocTable"] = ciplocalpoolalloctable;
    }

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

    return children;
}

void CiscoIpLocalPoolMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpLocalPoolMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::clone_ptr() const
{
    return std::make_shared<CiscoIpLocalPoolMib>();
}

std::string CiscoIpLocalPoolMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpLocalPoolMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpLocalPoolMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIpLocalPoolMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIpLocalPoolMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolAllocTable" || name == "cIpLocalPoolConfig" || name == "cIpLocalPoolConfigTable" || name == "cIpLocalPoolGroupContainsTable" || name == "cIpLocalPoolGroupTable" || name == "cIpLocalPoolStatsTable")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolconfig::Ciplocalpoolconfig()
    :
    ciplocalpoolnotificationsenable{YType::boolean, "cIpLocalPoolNotificationsEnable"}
{
    yang_name = "cIpLocalPoolConfig"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::Ciplocalpoolconfig::~Ciplocalpoolconfig()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfig::has_data() const
{
    return ciplocalpoolnotificationsenable.is_set;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolnotificationsenable.yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolConfig";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolnotificationsenable.is_set || is_set(ciplocalpoolnotificationsenable.yfilter)) leaf_name_data.push_back(ciplocalpoolnotificationsenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolNotificationsEnable")
    {
        ciplocalpoolnotificationsenable = value;
        ciplocalpoolnotificationsenable.value_namespace = name_space;
        ciplocalpoolnotificationsenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpLocalPoolMib::Ciplocalpoolconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolNotificationsEnable")
    {
        ciplocalpoolnotificationsenable.yfilter = yfilter;
    }
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolNotificationsEnable")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigtable()
{
    yang_name = "cIpLocalPoolConfigTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::~Ciplocalpoolconfigtable()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::has_data() const
{
    for (std::size_t index=0; index<ciplocalpoolconfigentry.size(); index++)
    {
        if(ciplocalpoolconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolconfigentry.size(); index++)
    {
        if(ciplocalpoolconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolConfigEntry")
    {
        for(auto const & c : ciplocalpoolconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry>();
        c->parent = this;
        ciplocalpoolconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolConfigEntry")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::Ciplocalpoolconfigentry()
    :
    ciplocalpoolname{YType::str, "cIpLocalPoolName"},
    ciplocalpooladdrtype{YType::enumeration, "cIpLocalPoolAddrType"},
    ciplocalpooladdresslo{YType::str, "cIpLocalPoolAddressLo"},
    ciplocalpooladdresshi{YType::str, "cIpLocalPoolAddressHi"},
    ciplocalpoolfreeaddrs{YType::uint32, "cIpLocalPoolFreeAddrs"},
    ciplocalpoolgroupcontainedin{YType::str, "cIpLocalPoolGroupContainedIn"},
    ciplocalpoolinuseaddrs{YType::uint32, "cIpLocalPoolInUseAddrs"},
    ciplocalpoolpriority{YType::uint32, "cIpLocalPoolPriority"},
    ciplocalpoolrowstatus{YType::enumeration, "cIpLocalPoolRowStatus"}
{
    yang_name = "cIpLocalPoolConfigEntry"; yang_parent_name = "cIpLocalPoolConfigTable";
}

CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::~Ciplocalpoolconfigentry()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::has_data() const
{
    return ciplocalpoolname.is_set
	|| ciplocalpooladdrtype.is_set
	|| ciplocalpooladdresslo.is_set
	|| ciplocalpooladdresshi.is_set
	|| ciplocalpoolfreeaddrs.is_set
	|| ciplocalpoolgroupcontainedin.is_set
	|| ciplocalpoolinuseaddrs.is_set
	|| ciplocalpoolpriority.is_set
	|| ciplocalpoolrowstatus.is_set;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolname.yfilter)
	|| ydk::is_set(ciplocalpooladdrtype.yfilter)
	|| ydk::is_set(ciplocalpooladdresslo.yfilter)
	|| ydk::is_set(ciplocalpooladdresshi.yfilter)
	|| ydk::is_set(ciplocalpoolfreeaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolgroupcontainedin.yfilter)
	|| ydk::is_set(ciplocalpoolinuseaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolpriority.yfilter)
	|| ydk::is_set(ciplocalpoolrowstatus.yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolConfigEntry" <<"[cIpLocalPoolName='" <<ciplocalpoolname <<"']" <<"[cIpLocalPoolAddrType='" <<ciplocalpooladdrtype <<"']" <<"[cIpLocalPoolAddressLo='" <<ciplocalpooladdresslo <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.yfilter)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpooladdrtype.is_set || is_set(ciplocalpooladdrtype.yfilter)) leaf_name_data.push_back(ciplocalpooladdrtype.get_name_leafdata());
    if (ciplocalpooladdresslo.is_set || is_set(ciplocalpooladdresslo.yfilter)) leaf_name_data.push_back(ciplocalpooladdresslo.get_name_leafdata());
    if (ciplocalpooladdresshi.is_set || is_set(ciplocalpooladdresshi.yfilter)) leaf_name_data.push_back(ciplocalpooladdresshi.get_name_leafdata());
    if (ciplocalpoolfreeaddrs.is_set || is_set(ciplocalpoolfreeaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolfreeaddrs.get_name_leafdata());
    if (ciplocalpoolgroupcontainedin.is_set || is_set(ciplocalpoolgroupcontainedin.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupcontainedin.get_name_leafdata());
    if (ciplocalpoolinuseaddrs.is_set || is_set(ciplocalpoolinuseaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolinuseaddrs.get_name_leafdata());
    if (ciplocalpoolpriority.is_set || is_set(ciplocalpoolpriority.yfilter)) leaf_name_data.push_back(ciplocalpoolpriority.get_name_leafdata());
    if (ciplocalpoolrowstatus.is_set || is_set(ciplocalpoolrowstatus.yfilter)) leaf_name_data.push_back(ciplocalpoolrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cIpLocalPoolGroupContainedIn")
    {
        ciplocalpoolgroupcontainedin = value;
        ciplocalpoolgroupcontainedin.value_namespace = name_space;
        ciplocalpoolgroupcontainedin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolInUseAddrs")
    {
        ciplocalpoolinuseaddrs = value;
        ciplocalpoolinuseaddrs.value_namespace = name_space;
        ciplocalpoolinuseaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolPriority")
    {
        ciplocalpoolpriority = value;
        ciplocalpoolpriority.value_namespace = name_space;
        ciplocalpoolpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolRowStatus")
    {
        ciplocalpoolrowstatus = value;
        ciplocalpoolrowstatus.value_namespace = name_space;
        ciplocalpoolrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cIpLocalPoolGroupContainedIn")
    {
        ciplocalpoolgroupcontainedin.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolInUseAddrs")
    {
        ciplocalpoolinuseaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolPriority")
    {
        ciplocalpoolpriority.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolRowStatus")
    {
        ciplocalpoolrowstatus.yfilter = yfilter;
    }
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolName" || name == "cIpLocalPoolAddrType" || name == "cIpLocalPoolAddressLo" || name == "cIpLocalPoolAddressHi" || name == "cIpLocalPoolFreeAddrs" || name == "cIpLocalPoolGroupContainedIn" || name == "cIpLocalPoolInUseAddrs" || name == "cIpLocalPoolPriority" || name == "cIpLocalPoolRowStatus")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainstable()
{
    yang_name = "cIpLocalPoolGroupContainsTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::~Ciplocalpoolgroupcontainstable()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::has_data() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupcontainsentry.size(); index++)
    {
        if(ciplocalpoolgroupcontainsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupcontainsentry.size(); index++)
    {
        if(ciplocalpoolgroupcontainsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupContainsTable";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolGroupContainsEntry")
    {
        for(auto const & c : ciplocalpoolgroupcontainsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry>();
        c->parent = this;
        ciplocalpoolgroupcontainsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolgroupcontainsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupContainsEntry")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::Ciplocalpoolgroupcontainsentry()
    :
    ciplocalpoolgroupname{YType::str, "cIpLocalPoolGroupName"},
    ciplocalpoolchildindex{YType::str, "cIpLocalPoolChildIndex"}
{
    yang_name = "cIpLocalPoolGroupContainsEntry"; yang_parent_name = "cIpLocalPoolGroupContainsTable";
}

CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::~Ciplocalpoolgroupcontainsentry()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::has_data() const
{
    return ciplocalpoolgroupname.is_set
	|| ciplocalpoolchildindex.is_set;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolgroupname.yfilter)
	|| ydk::is_set(ciplocalpoolchildindex.yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupContainsEntry" <<"[cIpLocalPoolGroupName='" <<ciplocalpoolgroupname <<"']" <<"[cIpLocalPoolChildIndex='" <<ciplocalpoolchildindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolGroupContainsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolgroupname.is_set || is_set(ciplocalpoolgroupname.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupname.get_name_leafdata());
    if (ciplocalpoolchildindex.is_set || is_set(ciplocalpoolchildindex.yfilter)) leaf_name_data.push_back(ciplocalpoolchildindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupName" || name == "cIpLocalPoolChildIndex")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgrouptable()
{
    yang_name = "cIpLocalPoolGroupTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::~Ciplocalpoolgrouptable()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::has_data() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupentry.size(); index++)
    {
        if(ciplocalpoolgroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupentry.size(); index++)
    {
        if(ciplocalpoolgroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupTable";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolGroupEntry")
    {
        for(auto const & c : ciplocalpoolgroupentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry>();
        c->parent = this;
        ciplocalpoolgroupentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolgroupentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupEntry")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::Ciplocalpoolgroupentry()
    :
    ciplocalpoolgroupname{YType::str, "cIpLocalPoolGroupName"},
    ciplocalpoolgroupfreeaddrs{YType::uint32, "cIpLocalPoolGroupFreeAddrs"},
    ciplocalpoolgroupinuseaddrs{YType::uint32, "cIpLocalPoolGroupInUseAddrs"}
{
    yang_name = "cIpLocalPoolGroupEntry"; yang_parent_name = "cIpLocalPoolGroupTable";
}

CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::~Ciplocalpoolgroupentry()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::has_data() const
{
    return ciplocalpoolgroupname.is_set
	|| ciplocalpoolgroupfreeaddrs.is_set
	|| ciplocalpoolgroupinuseaddrs.is_set;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolgroupname.yfilter)
	|| ydk::is_set(ciplocalpoolgroupfreeaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolgroupinuseaddrs.yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolGroupEntry" <<"[cIpLocalPoolGroupName='" <<ciplocalpoolgroupname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolGroupTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolgroupname.is_set || is_set(ciplocalpoolgroupname.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupname.get_name_leafdata());
    if (ciplocalpoolgroupfreeaddrs.is_set || is_set(ciplocalpoolgroupfreeaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupfreeaddrs.get_name_leafdata());
    if (ciplocalpoolgroupinuseaddrs.is_set || is_set(ciplocalpoolgroupinuseaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolgroupinuseaddrs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolGroupName" || name == "cIpLocalPoolGroupFreeAddrs" || name == "cIpLocalPoolGroupInUseAddrs")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatstable()
{
    yang_name = "cIpLocalPoolStatsTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::Ciplocalpoolstatstable::~Ciplocalpoolstatstable()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolstatstable::has_data() const
{
    for (std::size_t index=0; index<ciplocalpoolstatsentry.size(); index++)
    {
        if(ciplocalpoolstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolstatstable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolstatsentry.size(); index++)
    {
        if(ciplocalpoolstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolStatsEntry")
    {
        for(auto const & c : ciplocalpoolstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry>();
        c->parent = this;
        ciplocalpoolstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpLocalPoolMib::Ciplocalpoolstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolStatsEntry")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::Ciplocalpoolstatsentry()
    :
    ciplocalpoolname{YType::str, "cIpLocalPoolName"},
    ciplocalpoolpercentaddrthldhi{YType::uint32, "cIpLocalPoolPercentAddrThldHi"},
    ciplocalpoolpercentaddrthldlo{YType::uint32, "cIpLocalPoolPercentAddrThldLo"},
    ciplocalpoolstatfreeaddrs{YType::uint32, "cIpLocalPoolStatFreeAddrs"},
    ciplocalpoolstathiwaterusedaddrs{YType::uint32, "cIpLocalPoolStatHiWaterUsedAddrs"},
    ciplocalpoolstatinuseaddrs{YType::uint32, "cIpLocalPoolStatInUseAddrs"},
    ciplocalpoolstatinuseaddrthldhi{YType::uint32, "cIpLocalPoolStatInUseAddrThldHi"},
    ciplocalpoolstatinuseaddrthldlo{YType::uint32, "cIpLocalPoolStatInUseAddrThldLo"}
{
    yang_name = "cIpLocalPoolStatsEntry"; yang_parent_name = "cIpLocalPoolStatsTable";
}

CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::~Ciplocalpoolstatsentry()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::has_data() const
{
    return ciplocalpoolname.is_set
	|| ciplocalpoolpercentaddrthldhi.is_set
	|| ciplocalpoolpercentaddrthldlo.is_set
	|| ciplocalpoolstatfreeaddrs.is_set
	|| ciplocalpoolstathiwaterusedaddrs.is_set
	|| ciplocalpoolstatinuseaddrs.is_set
	|| ciplocalpoolstatinuseaddrthldhi.is_set
	|| ciplocalpoolstatinuseaddrthldlo.is_set;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolname.yfilter)
	|| ydk::is_set(ciplocalpoolpercentaddrthldhi.yfilter)
	|| ydk::is_set(ciplocalpoolpercentaddrthldlo.yfilter)
	|| ydk::is_set(ciplocalpoolstatfreeaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolstathiwaterusedaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolstatinuseaddrs.yfilter)
	|| ydk::is_set(ciplocalpoolstatinuseaddrthldhi.yfilter)
	|| ydk::is_set(ciplocalpoolstatinuseaddrthldlo.yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolStatsEntry" <<"[cIpLocalPoolName='" <<ciplocalpoolname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.yfilter)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpoolpercentaddrthldhi.is_set || is_set(ciplocalpoolpercentaddrthldhi.yfilter)) leaf_name_data.push_back(ciplocalpoolpercentaddrthldhi.get_name_leafdata());
    if (ciplocalpoolpercentaddrthldlo.is_set || is_set(ciplocalpoolpercentaddrthldlo.yfilter)) leaf_name_data.push_back(ciplocalpoolpercentaddrthldlo.get_name_leafdata());
    if (ciplocalpoolstatfreeaddrs.is_set || is_set(ciplocalpoolstatfreeaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolstatfreeaddrs.get_name_leafdata());
    if (ciplocalpoolstathiwaterusedaddrs.is_set || is_set(ciplocalpoolstathiwaterusedaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolstathiwaterusedaddrs.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrs.is_set || is_set(ciplocalpoolstatinuseaddrs.yfilter)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrs.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrthldhi.is_set || is_set(ciplocalpoolstatinuseaddrthldhi.yfilter)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrthldhi.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrthldlo.is_set || is_set(ciplocalpoolstatinuseaddrthldlo.yfilter)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrthldlo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname = value;
        ciplocalpoolname.value_namespace = name_space;
        ciplocalpoolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldHi")
    {
        ciplocalpoolpercentaddrthldhi = value;
        ciplocalpoolpercentaddrthldhi.value_namespace = name_space;
        ciplocalpoolpercentaddrthldhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldLo")
    {
        ciplocalpoolpercentaddrthldlo = value;
        ciplocalpoolpercentaddrthldlo.value_namespace = name_space;
        ciplocalpoolpercentaddrthldlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatFreeAddrs")
    {
        ciplocalpoolstatfreeaddrs = value;
        ciplocalpoolstatfreeaddrs.value_namespace = name_space;
        ciplocalpoolstatfreeaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatHiWaterUsedAddrs")
    {
        ciplocalpoolstathiwaterusedaddrs = value;
        ciplocalpoolstathiwaterusedaddrs.value_namespace = name_space;
        ciplocalpoolstathiwaterusedaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrs")
    {
        ciplocalpoolstatinuseaddrs = value;
        ciplocalpoolstatinuseaddrs.value_namespace = name_space;
        ciplocalpoolstatinuseaddrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldHi")
    {
        ciplocalpoolstatinuseaddrthldhi = value;
        ciplocalpoolstatinuseaddrthldhi.value_namespace = name_space;
        ciplocalpoolstatinuseaddrthldhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldLo")
    {
        ciplocalpoolstatinuseaddrthldlo = value;
        ciplocalpoolstatinuseaddrthldlo.value_namespace = name_space;
        ciplocalpoolstatinuseaddrthldlo.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldHi")
    {
        ciplocalpoolpercentaddrthldhi.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldLo")
    {
        ciplocalpoolpercentaddrthldlo.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatFreeAddrs")
    {
        ciplocalpoolstatfreeaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatHiWaterUsedAddrs")
    {
        ciplocalpoolstathiwaterusedaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrs")
    {
        ciplocalpoolstatinuseaddrs.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldHi")
    {
        ciplocalpoolstatinuseaddrthldhi.yfilter = yfilter;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldLo")
    {
        ciplocalpoolstatinuseaddrthldlo.yfilter = yfilter;
    }
}

bool CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolName" || name == "cIpLocalPoolPercentAddrThldHi" || name == "cIpLocalPoolPercentAddrThldLo" || name == "cIpLocalPoolStatFreeAddrs" || name == "cIpLocalPoolStatHiWaterUsedAddrs" || name == "cIpLocalPoolStatInUseAddrs" || name == "cIpLocalPoolStatInUseAddrThldHi" || name == "cIpLocalPoolStatInUseAddrThldLo")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolalloctable()
{
    yang_name = "cIpLocalPoolAllocTable"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::Ciplocalpoolalloctable::~Ciplocalpoolalloctable()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolalloctable::has_data() const
{
    for (std::size_t index=0; index<ciplocalpoolallocentry.size(); index++)
    {
        if(ciplocalpoolallocentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolalloctable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolallocentry.size(); index++)
    {
        if(ciplocalpoolallocentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolalloctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolAllocTable";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolalloctable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolalloctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIpLocalPoolAllocEntry")
    {
        for(auto const & c : ciplocalpoolallocentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry>();
        c->parent = this;
        ciplocalpoolallocentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolalloctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolallocentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolalloctable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpLocalPoolMib::Ciplocalpoolalloctable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolalloctable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolAllocEntry")
        return true;
    return false;
}

CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::Ciplocalpoolallocentry()
    :
    ciplocalpoolname{YType::str, "cIpLocalPoolName"},
    ciplocalpoolallocaddrtype{YType::enumeration, "cIpLocalPoolAllocAddrType"},
    ciplocalpoolallocaddr{YType::str, "cIpLocalPoolAllocAddr"},
    ciplocalpoolallocifindex{YType::int32, "cIpLocalPoolAllocIfIndex"},
    ciplocalpoolallocuser{YType::str, "cIpLocalPoolAllocUser"}
{
    yang_name = "cIpLocalPoolAllocEntry"; yang_parent_name = "cIpLocalPoolAllocTable";
}

CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::~Ciplocalpoolallocentry()
{
}

bool CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::has_data() const
{
    return ciplocalpoolname.is_set
	|| ciplocalpoolallocaddrtype.is_set
	|| ciplocalpoolallocaddr.is_set
	|| ciplocalpoolallocifindex.is_set
	|| ciplocalpoolallocuser.is_set;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciplocalpoolname.yfilter)
	|| ydk::is_set(ciplocalpoolallocaddrtype.yfilter)
	|| ydk::is_set(ciplocalpoolallocaddr.yfilter)
	|| ydk::is_set(ciplocalpoolallocifindex.yfilter)
	|| ydk::is_set(ciplocalpoolallocuser.yfilter);
}

std::string CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIpLocalPoolAllocEntry" <<"[cIpLocalPoolName='" <<ciplocalpoolname <<"']" <<"[cIpLocalPoolAllocAddrType='" <<ciplocalpoolallocaddrtype <<"']" <<"[cIpLocalPoolAllocAddr='" <<ciplocalpoolallocaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IP-LOCAL-POOL-MIB:CISCO-IP-LOCAL-POOL-MIB/cIpLocalPoolAllocTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.yfilter)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpoolallocaddrtype.is_set || is_set(ciplocalpoolallocaddrtype.yfilter)) leaf_name_data.push_back(ciplocalpoolallocaddrtype.get_name_leafdata());
    if (ciplocalpoolallocaddr.is_set || is_set(ciplocalpoolallocaddr.yfilter)) leaf_name_data.push_back(ciplocalpoolallocaddr.get_name_leafdata());
    if (ciplocalpoolallocifindex.is_set || is_set(ciplocalpoolallocifindex.yfilter)) leaf_name_data.push_back(ciplocalpoolallocifindex.get_name_leafdata());
    if (ciplocalpoolallocuser.is_set || is_set(ciplocalpoolallocuser.yfilter)) leaf_name_data.push_back(ciplocalpoolallocuser.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIpLocalPoolName" || name == "cIpLocalPoolAllocAddrType" || name == "cIpLocalPoolAllocAddr" || name == "cIpLocalPoolAllocIfIndex" || name == "cIpLocalPoolAllocUser")
        return true;
    return false;
}


}
}

