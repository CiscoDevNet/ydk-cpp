
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IP_LOCAL_POOL_MIB.hpp"

namespace ydk {
namespace CISCO_IP_LOCAL_POOL_MIB {

CiscoIpLocalPoolMib::CiscoIpLocalPoolMib()
    :
    ciplocalpoolalloctable_(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolalloctable>())
	,ciplocalpoolconfig_(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfig>())
	,ciplocalpoolconfigtable_(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfigtable>())
	,ciplocalpoolgroupcontainstable_(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable>())
	,ciplocalpoolgrouptable_(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgrouptable>())
	,ciplocalpoolstatstable_(std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolstatstable>())
{
    ciplocalpoolalloctable_->parent = this;

    ciplocalpoolconfig_->parent = this;

    ciplocalpoolconfigtable_->parent = this;

    ciplocalpoolgroupcontainstable_->parent = this;

    ciplocalpoolgrouptable_->parent = this;

    ciplocalpoolstatstable_->parent = this;

    yang_name = "CISCO-IP-LOCAL-POOL-MIB"; yang_parent_name = "CISCO-IP-LOCAL-POOL-MIB";
}

CiscoIpLocalPoolMib::~CiscoIpLocalPoolMib()
{
}

bool CiscoIpLocalPoolMib::has_data() const
{
    return (ciplocalpoolalloctable_ !=  nullptr && ciplocalpoolalloctable_->has_data())
	|| (ciplocalpoolconfig_ !=  nullptr && ciplocalpoolconfig_->has_data())
	|| (ciplocalpoolconfigtable_ !=  nullptr && ciplocalpoolconfigtable_->has_data())
	|| (ciplocalpoolgroupcontainstable_ !=  nullptr && ciplocalpoolgroupcontainstable_->has_data())
	|| (ciplocalpoolgrouptable_ !=  nullptr && ciplocalpoolgrouptable_->has_data())
	|| (ciplocalpoolstatstable_ !=  nullptr && ciplocalpoolstatstable_->has_data());
}

bool CiscoIpLocalPoolMib::has_operation() const
{
    return is_set(operation)
	|| (ciplocalpoolalloctable_ !=  nullptr && ciplocalpoolalloctable_->has_operation())
	|| (ciplocalpoolconfig_ !=  nullptr && ciplocalpoolconfig_->has_operation())
	|| (ciplocalpoolconfigtable_ !=  nullptr && ciplocalpoolconfigtable_->has_operation())
	|| (ciplocalpoolgroupcontainstable_ !=  nullptr && ciplocalpoolgroupcontainstable_->has_operation())
	|| (ciplocalpoolgrouptable_ !=  nullptr && ciplocalpoolgrouptable_->has_operation())
	|| (ciplocalpoolstatstable_ !=  nullptr && ciplocalpoolstatstable_->has_operation());
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
        if(ciplocalpoolalloctable_ == nullptr)
        {
            ciplocalpoolalloctable_ = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolalloctable>();
        }
        return ciplocalpoolalloctable_;
    }

    if(child_yang_name == "cIpLocalPoolConfig")
    {
        if(ciplocalpoolconfig_ == nullptr)
        {
            ciplocalpoolconfig_ = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfig>();
        }
        return ciplocalpoolconfig_;
    }

    if(child_yang_name == "cIpLocalPoolConfigTable")
    {
        if(ciplocalpoolconfigtable_ == nullptr)
        {
            ciplocalpoolconfigtable_ = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfigtable>();
        }
        return ciplocalpoolconfigtable_;
    }

    if(child_yang_name == "cIpLocalPoolGroupContainsTable")
    {
        if(ciplocalpoolgroupcontainstable_ == nullptr)
        {
            ciplocalpoolgroupcontainstable_ = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable>();
        }
        return ciplocalpoolgroupcontainstable_;
    }

    if(child_yang_name == "cIpLocalPoolGroupTable")
    {
        if(ciplocalpoolgrouptable_ == nullptr)
        {
            ciplocalpoolgrouptable_ = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgrouptable>();
        }
        return ciplocalpoolgrouptable_;
    }

    if(child_yang_name == "cIpLocalPoolStatsTable")
    {
        if(ciplocalpoolstatstable_ == nullptr)
        {
            ciplocalpoolstatstable_ = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolstatstable>();
        }
        return ciplocalpoolstatstable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciplocalpoolalloctable_ != nullptr)
    {
        children["cIpLocalPoolAllocTable"] = ciplocalpoolalloctable_;
    }

    if(ciplocalpoolconfig_ != nullptr)
    {
        children["cIpLocalPoolConfig"] = ciplocalpoolconfig_;
    }

    if(ciplocalpoolconfigtable_ != nullptr)
    {
        children["cIpLocalPoolConfigTable"] = ciplocalpoolconfigtable_;
    }

    if(ciplocalpoolgroupcontainstable_ != nullptr)
    {
        children["cIpLocalPoolGroupContainsTable"] = ciplocalpoolgroupcontainstable_;
    }

    if(ciplocalpoolgrouptable_ != nullptr)
    {
        children["cIpLocalPoolGroupTable"] = ciplocalpoolgrouptable_;
    }

    if(ciplocalpoolstatstable_ != nullptr)
    {
        children["cIpLocalPoolStatsTable"] = ciplocalpoolstatstable_;
    }

    return children;
}

void CiscoIpLocalPoolMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(ciplocalpoolnotificationsenable.operation);
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

    if (ciplocalpoolnotificationsenable.is_set || is_set(ciplocalpoolnotificationsenable.operation)) leaf_name_data.push_back(ciplocalpoolnotificationsenable.get_name_leafdata());


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

void CiscoIpLocalPoolMib::Ciplocalpoolconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIpLocalPoolNotificationsEnable")
    {
        ciplocalpoolnotificationsenable = value;
    }
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
    for (std::size_t index=0; index<ciplocalpoolconfigentry_.size(); index++)
    {
        if(ciplocalpoolconfigentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolconfigentry_.size(); index++)
    {
        if(ciplocalpoolconfigentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciplocalpoolconfigentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry>();
        c->parent = this;
        ciplocalpoolconfigentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolconfigentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciplocalpoolname.operation)
	|| is_set(ciplocalpooladdrtype.operation)
	|| is_set(ciplocalpooladdresslo.operation)
	|| is_set(ciplocalpooladdresshi.operation)
	|| is_set(ciplocalpoolfreeaddrs.operation)
	|| is_set(ciplocalpoolgroupcontainedin.operation)
	|| is_set(ciplocalpoolinuseaddrs.operation)
	|| is_set(ciplocalpoolpriority.operation)
	|| is_set(ciplocalpoolrowstatus.operation);
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

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.operation)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpooladdrtype.is_set || is_set(ciplocalpooladdrtype.operation)) leaf_name_data.push_back(ciplocalpooladdrtype.get_name_leafdata());
    if (ciplocalpooladdresslo.is_set || is_set(ciplocalpooladdresslo.operation)) leaf_name_data.push_back(ciplocalpooladdresslo.get_name_leafdata());
    if (ciplocalpooladdresshi.is_set || is_set(ciplocalpooladdresshi.operation)) leaf_name_data.push_back(ciplocalpooladdresshi.get_name_leafdata());
    if (ciplocalpoolfreeaddrs.is_set || is_set(ciplocalpoolfreeaddrs.operation)) leaf_name_data.push_back(ciplocalpoolfreeaddrs.get_name_leafdata());
    if (ciplocalpoolgroupcontainedin.is_set || is_set(ciplocalpoolgroupcontainedin.operation)) leaf_name_data.push_back(ciplocalpoolgroupcontainedin.get_name_leafdata());
    if (ciplocalpoolinuseaddrs.is_set || is_set(ciplocalpoolinuseaddrs.operation)) leaf_name_data.push_back(ciplocalpoolinuseaddrs.get_name_leafdata());
    if (ciplocalpoolpriority.is_set || is_set(ciplocalpoolpriority.operation)) leaf_name_data.push_back(ciplocalpoolpriority.get_name_leafdata());
    if (ciplocalpoolrowstatus.is_set || is_set(ciplocalpoolrowstatus.operation)) leaf_name_data.push_back(ciplocalpoolrowstatus.get_name_leafdata());


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

void CiscoIpLocalPoolMib::Ciplocalpoolconfigtable::Ciplocalpoolconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname = value;
    }
    if(value_path == "cIpLocalPoolAddrType")
    {
        ciplocalpooladdrtype = value;
    }
    if(value_path == "cIpLocalPoolAddressLo")
    {
        ciplocalpooladdresslo = value;
    }
    if(value_path == "cIpLocalPoolAddressHi")
    {
        ciplocalpooladdresshi = value;
    }
    if(value_path == "cIpLocalPoolFreeAddrs")
    {
        ciplocalpoolfreeaddrs = value;
    }
    if(value_path == "cIpLocalPoolGroupContainedIn")
    {
        ciplocalpoolgroupcontainedin = value;
    }
    if(value_path == "cIpLocalPoolInUseAddrs")
    {
        ciplocalpoolinuseaddrs = value;
    }
    if(value_path == "cIpLocalPoolPriority")
    {
        ciplocalpoolpriority = value;
    }
    if(value_path == "cIpLocalPoolRowStatus")
    {
        ciplocalpoolrowstatus = value;
    }
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
    for (std::size_t index=0; index<ciplocalpoolgroupcontainsentry_.size(); index++)
    {
        if(ciplocalpoolgroupcontainsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupcontainsentry_.size(); index++)
    {
        if(ciplocalpoolgroupcontainsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciplocalpoolgroupcontainsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry>();
        c->parent = this;
        ciplocalpoolgroupcontainsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolgroupcontainsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciplocalpoolgroupname.operation)
	|| is_set(ciplocalpoolchildindex.operation);
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

    if (ciplocalpoolgroupname.is_set || is_set(ciplocalpoolgroupname.operation)) leaf_name_data.push_back(ciplocalpoolgroupname.get_name_leafdata());
    if (ciplocalpoolchildindex.is_set || is_set(ciplocalpoolchildindex.operation)) leaf_name_data.push_back(ciplocalpoolchildindex.get_name_leafdata());


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

void CiscoIpLocalPoolMib::Ciplocalpoolgroupcontainstable::Ciplocalpoolgroupcontainsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIpLocalPoolGroupName")
    {
        ciplocalpoolgroupname = value;
    }
    if(value_path == "cIpLocalPoolChildIndex")
    {
        ciplocalpoolchildindex = value;
    }
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
    for (std::size_t index=0; index<ciplocalpoolgroupentry_.size(); index++)
    {
        if(ciplocalpoolgroupentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolgroupentry_.size(); index++)
    {
        if(ciplocalpoolgroupentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciplocalpoolgroupentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry>();
        c->parent = this;
        ciplocalpoolgroupentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolgroupentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciplocalpoolgroupname.operation)
	|| is_set(ciplocalpoolgroupfreeaddrs.operation)
	|| is_set(ciplocalpoolgroupinuseaddrs.operation);
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

    if (ciplocalpoolgroupname.is_set || is_set(ciplocalpoolgroupname.operation)) leaf_name_data.push_back(ciplocalpoolgroupname.get_name_leafdata());
    if (ciplocalpoolgroupfreeaddrs.is_set || is_set(ciplocalpoolgroupfreeaddrs.operation)) leaf_name_data.push_back(ciplocalpoolgroupfreeaddrs.get_name_leafdata());
    if (ciplocalpoolgroupinuseaddrs.is_set || is_set(ciplocalpoolgroupinuseaddrs.operation)) leaf_name_data.push_back(ciplocalpoolgroupinuseaddrs.get_name_leafdata());


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

void CiscoIpLocalPoolMib::Ciplocalpoolgrouptable::Ciplocalpoolgroupentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIpLocalPoolGroupName")
    {
        ciplocalpoolgroupname = value;
    }
    if(value_path == "cIpLocalPoolGroupFreeAddrs")
    {
        ciplocalpoolgroupfreeaddrs = value;
    }
    if(value_path == "cIpLocalPoolGroupInUseAddrs")
    {
        ciplocalpoolgroupinuseaddrs = value;
    }
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
    for (std::size_t index=0; index<ciplocalpoolstatsentry_.size(); index++)
    {
        if(ciplocalpoolstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolstatstable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolstatsentry_.size(); index++)
    {
        if(ciplocalpoolstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciplocalpoolstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry>();
        c->parent = this;
        ciplocalpoolstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolstatstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciplocalpoolname.operation)
	|| is_set(ciplocalpoolpercentaddrthldhi.operation)
	|| is_set(ciplocalpoolpercentaddrthldlo.operation)
	|| is_set(ciplocalpoolstatfreeaddrs.operation)
	|| is_set(ciplocalpoolstathiwaterusedaddrs.operation)
	|| is_set(ciplocalpoolstatinuseaddrs.operation)
	|| is_set(ciplocalpoolstatinuseaddrthldhi.operation)
	|| is_set(ciplocalpoolstatinuseaddrthldlo.operation);
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

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.operation)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpoolpercentaddrthldhi.is_set || is_set(ciplocalpoolpercentaddrthldhi.operation)) leaf_name_data.push_back(ciplocalpoolpercentaddrthldhi.get_name_leafdata());
    if (ciplocalpoolpercentaddrthldlo.is_set || is_set(ciplocalpoolpercentaddrthldlo.operation)) leaf_name_data.push_back(ciplocalpoolpercentaddrthldlo.get_name_leafdata());
    if (ciplocalpoolstatfreeaddrs.is_set || is_set(ciplocalpoolstatfreeaddrs.operation)) leaf_name_data.push_back(ciplocalpoolstatfreeaddrs.get_name_leafdata());
    if (ciplocalpoolstathiwaterusedaddrs.is_set || is_set(ciplocalpoolstathiwaterusedaddrs.operation)) leaf_name_data.push_back(ciplocalpoolstathiwaterusedaddrs.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrs.is_set || is_set(ciplocalpoolstatinuseaddrs.operation)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrs.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrthldhi.is_set || is_set(ciplocalpoolstatinuseaddrthldhi.operation)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrthldhi.get_name_leafdata());
    if (ciplocalpoolstatinuseaddrthldlo.is_set || is_set(ciplocalpoolstatinuseaddrthldlo.operation)) leaf_name_data.push_back(ciplocalpoolstatinuseaddrthldlo.get_name_leafdata());


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

void CiscoIpLocalPoolMib::Ciplocalpoolstatstable::Ciplocalpoolstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname = value;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldHi")
    {
        ciplocalpoolpercentaddrthldhi = value;
    }
    if(value_path == "cIpLocalPoolPercentAddrThldLo")
    {
        ciplocalpoolpercentaddrthldlo = value;
    }
    if(value_path == "cIpLocalPoolStatFreeAddrs")
    {
        ciplocalpoolstatfreeaddrs = value;
    }
    if(value_path == "cIpLocalPoolStatHiWaterUsedAddrs")
    {
        ciplocalpoolstathiwaterusedaddrs = value;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrs")
    {
        ciplocalpoolstatinuseaddrs = value;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldHi")
    {
        ciplocalpoolstatinuseaddrthldhi = value;
    }
    if(value_path == "cIpLocalPoolStatInUseAddrThldLo")
    {
        ciplocalpoolstatinuseaddrthldlo = value;
    }
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
    for (std::size_t index=0; index<ciplocalpoolallocentry_.size(); index++)
    {
        if(ciplocalpoolallocentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpLocalPoolMib::Ciplocalpoolalloctable::has_operation() const
{
    for (std::size_t index=0; index<ciplocalpoolallocentry_.size(); index++)
    {
        if(ciplocalpoolallocentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciplocalpoolallocentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry>();
        c->parent = this;
        ciplocalpoolallocentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpLocalPoolMib::Ciplocalpoolalloctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciplocalpoolallocentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpLocalPoolMib::Ciplocalpoolalloctable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciplocalpoolname.operation)
	|| is_set(ciplocalpoolallocaddrtype.operation)
	|| is_set(ciplocalpoolallocaddr.operation)
	|| is_set(ciplocalpoolallocifindex.operation)
	|| is_set(ciplocalpoolallocuser.operation);
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

    if (ciplocalpoolname.is_set || is_set(ciplocalpoolname.operation)) leaf_name_data.push_back(ciplocalpoolname.get_name_leafdata());
    if (ciplocalpoolallocaddrtype.is_set || is_set(ciplocalpoolallocaddrtype.operation)) leaf_name_data.push_back(ciplocalpoolallocaddrtype.get_name_leafdata());
    if (ciplocalpoolallocaddr.is_set || is_set(ciplocalpoolallocaddr.operation)) leaf_name_data.push_back(ciplocalpoolallocaddr.get_name_leafdata());
    if (ciplocalpoolallocifindex.is_set || is_set(ciplocalpoolallocifindex.operation)) leaf_name_data.push_back(ciplocalpoolallocifindex.get_name_leafdata());
    if (ciplocalpoolallocuser.is_set || is_set(ciplocalpoolallocuser.operation)) leaf_name_data.push_back(ciplocalpoolallocuser.get_name_leafdata());


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

void CiscoIpLocalPoolMib::Ciplocalpoolalloctable::Ciplocalpoolallocentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cIpLocalPoolName")
    {
        ciplocalpoolname = value;
    }
    if(value_path == "cIpLocalPoolAllocAddrType")
    {
        ciplocalpoolallocaddrtype = value;
    }
    if(value_path == "cIpLocalPoolAllocAddr")
    {
        ciplocalpoolallocaddr = value;
    }
    if(value_path == "cIpLocalPoolAllocIfIndex")
    {
        ciplocalpoolallocifindex = value;
    }
    if(value_path == "cIpLocalPoolAllocUser")
    {
        ciplocalpoolallocuser = value;
    }
}


}
}

