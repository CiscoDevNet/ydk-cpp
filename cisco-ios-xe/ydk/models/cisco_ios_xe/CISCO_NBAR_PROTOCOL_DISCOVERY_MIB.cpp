
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_NBAR_PROTOCOL_DISCOVERY_MIB.hpp"

namespace ydk {
namespace CISCO_NBAR_PROTOCOL_DISCOVERY_MIB {

CiscoNbarProtocolDiscoveryMib::CiscoNbarProtocolDiscoveryMib()
    :
    cnpdallstatstable(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable>())
	,cnpdnotificationsconfig(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig>())
	,cnpdstatustable(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdstatustable>())
	,cnpdsupportedprotocolstable(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable>())
	,cnpdthresholdconfigtable(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable>())
	,cnpdthresholdhistorytable(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable>())
	,cnpdtopnconfigtable(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable>())
	,cnpdtopnstatstable(std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable>())
{
    cnpdallstatstable->parent = this;

    cnpdnotificationsconfig->parent = this;

    cnpdstatustable->parent = this;

    cnpdsupportedprotocolstable->parent = this;

    cnpdthresholdconfigtable->parent = this;

    cnpdthresholdhistorytable->parent = this;

    cnpdtopnconfigtable->parent = this;

    cnpdtopnstatstable->parent = this;

    yang_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::~CiscoNbarProtocolDiscoveryMib()
{
}

bool CiscoNbarProtocolDiscoveryMib::has_data() const
{
    return (cnpdallstatstable !=  nullptr && cnpdallstatstable->has_data())
	|| (cnpdnotificationsconfig !=  nullptr && cnpdnotificationsconfig->has_data())
	|| (cnpdstatustable !=  nullptr && cnpdstatustable->has_data())
	|| (cnpdsupportedprotocolstable !=  nullptr && cnpdsupportedprotocolstable->has_data())
	|| (cnpdthresholdconfigtable !=  nullptr && cnpdthresholdconfigtable->has_data())
	|| (cnpdthresholdhistorytable !=  nullptr && cnpdthresholdhistorytable->has_data())
	|| (cnpdtopnconfigtable !=  nullptr && cnpdtopnconfigtable->has_data())
	|| (cnpdtopnstatstable !=  nullptr && cnpdtopnstatstable->has_data());
}

bool CiscoNbarProtocolDiscoveryMib::has_operation() const
{
    return is_set(operation)
	|| (cnpdallstatstable !=  nullptr && cnpdallstatstable->has_operation())
	|| (cnpdnotificationsconfig !=  nullptr && cnpdnotificationsconfig->has_operation())
	|| (cnpdstatustable !=  nullptr && cnpdstatustable->has_operation())
	|| (cnpdsupportedprotocolstable !=  nullptr && cnpdsupportedprotocolstable->has_operation())
	|| (cnpdthresholdconfigtable !=  nullptr && cnpdthresholdconfigtable->has_operation())
	|| (cnpdthresholdhistorytable !=  nullptr && cnpdthresholdhistorytable->has_operation())
	|| (cnpdtopnconfigtable !=  nullptr && cnpdtopnconfigtable->has_operation())
	|| (cnpdtopnstatstable !=  nullptr && cnpdtopnstatstable->has_operation());
}

std::string CiscoNbarProtocolDiscoveryMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdAllStatsTable")
    {
        if(cnpdallstatstable == nullptr)
        {
            cnpdallstatstable = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable>();
        }
        return cnpdallstatstable;
    }

    if(child_yang_name == "cnpdNotificationsConfig")
    {
        if(cnpdnotificationsconfig == nullptr)
        {
            cnpdnotificationsconfig = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig>();
        }
        return cnpdnotificationsconfig;
    }

    if(child_yang_name == "cnpdStatusTable")
    {
        if(cnpdstatustable == nullptr)
        {
            cnpdstatustable = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdstatustable>();
        }
        return cnpdstatustable;
    }

    if(child_yang_name == "cnpdSupportedProtocolsTable")
    {
        if(cnpdsupportedprotocolstable == nullptr)
        {
            cnpdsupportedprotocolstable = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable>();
        }
        return cnpdsupportedprotocolstable;
    }

    if(child_yang_name == "cnpdThresholdConfigTable")
    {
        if(cnpdthresholdconfigtable == nullptr)
        {
            cnpdthresholdconfigtable = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable>();
        }
        return cnpdthresholdconfigtable;
    }

    if(child_yang_name == "cnpdThresholdHistoryTable")
    {
        if(cnpdthresholdhistorytable == nullptr)
        {
            cnpdthresholdhistorytable = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable>();
        }
        return cnpdthresholdhistorytable;
    }

    if(child_yang_name == "cnpdTopNConfigTable")
    {
        if(cnpdtopnconfigtable == nullptr)
        {
            cnpdtopnconfigtable = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable>();
        }
        return cnpdtopnconfigtable;
    }

    if(child_yang_name == "cnpdTopNStatsTable")
    {
        if(cnpdtopnstatstable == nullptr)
        {
            cnpdtopnstatstable = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable>();
        }
        return cnpdtopnstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cnpdallstatstable != nullptr)
    {
        children["cnpdAllStatsTable"] = cnpdallstatstable;
    }

    if(cnpdnotificationsconfig != nullptr)
    {
        children["cnpdNotificationsConfig"] = cnpdnotificationsconfig;
    }

    if(cnpdstatustable != nullptr)
    {
        children["cnpdStatusTable"] = cnpdstatustable;
    }

    if(cnpdsupportedprotocolstable != nullptr)
    {
        children["cnpdSupportedProtocolsTable"] = cnpdsupportedprotocolstable;
    }

    if(cnpdthresholdconfigtable != nullptr)
    {
        children["cnpdThresholdConfigTable"] = cnpdthresholdconfigtable;
    }

    if(cnpdthresholdhistorytable != nullptr)
    {
        children["cnpdThresholdHistoryTable"] = cnpdthresholdhistorytable;
    }

    if(cnpdtopnconfigtable != nullptr)
    {
        children["cnpdTopNConfigTable"] = cnpdtopnconfigtable;
    }

    if(cnpdtopnstatstable != nullptr)
    {
        children["cnpdTopNStatsTable"] = cnpdtopnstatstable;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::clone_ptr() const
{
    return std::make_shared<CiscoNbarProtocolDiscoveryMib>();
}

std::string CiscoNbarProtocolDiscoveryMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoNbarProtocolDiscoveryMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoNbarProtocolDiscoveryMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::Cnpdnotificationsconfig()
    :
    cnpdnotificationsenable{YType::boolean, "cnpdNotificationsEnable"}
{
    yang_name = "cnpdNotificationsConfig"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::~Cnpdnotificationsconfig()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::has_data() const
{
    return cnpdnotificationsenable.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(cnpdnotificationsenable.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdNotificationsConfig";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdnotificationsenable.is_set || is_set(cnpdnotificationsenable.operation)) leaf_name_data.push_back(cnpdnotificationsenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdnotificationsconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnpdNotificationsEnable")
    {
        cnpdnotificationsenable = value;
    }
}

CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatustable()
{
    yang_name = "cnpdStatusTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::~Cnpdstatustable()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::has_data() const
{
    for (std::size_t index=0; index<cnpdstatusentry.size(); index++)
    {
        if(cnpdstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::has_operation() const
{
    for (std::size_t index=0; index<cnpdstatusentry.size(); index++)
    {
        if(cnpdstatusentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdStatusTable";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdStatusEntry")
    {
        for(auto const & c : cnpdstatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry>();
        c->parent = this;
        cnpdstatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdstatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::Cnpdstatusentry()
    :
    ifindex{YType::str, "ifIndex"},
    cnpdstatuslastupdatetime{YType::uint32, "cnpdStatusLastUpdateTime"},
    cnpdstatuspdenable{YType::boolean, "cnpdStatusPdEnable"}
{
    yang_name = "cnpdStatusEntry"; yang_parent_name = "cnpdStatusTable";
}

CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::~Cnpdstatusentry()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::has_data() const
{
    return ifindex.is_set
	|| cnpdstatuslastupdatetime.is_set
	|| cnpdstatuspdenable.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cnpdstatuslastupdatetime.operation)
	|| is_set(cnpdstatuspdenable.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdStatusEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdStatusTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cnpdstatuslastupdatetime.is_set || is_set(cnpdstatuslastupdatetime.operation)) leaf_name_data.push_back(cnpdstatuslastupdatetime.get_name_leafdata());
    if (cnpdstatuspdenable.is_set || is_set(cnpdstatuspdenable.operation)) leaf_name_data.push_back(cnpdstatuspdenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdstatustable::Cnpdstatusentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cnpdStatusLastUpdateTime")
    {
        cnpdstatuslastupdatetime = value;
    }
    if(value_path == "cnpdStatusPdEnable")
    {
        cnpdstatuspdenable = value;
    }
}

CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatstable()
{
    yang_name = "cnpdAllStatsTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::~Cnpdallstatstable()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::has_data() const
{
    for (std::size_t index=0; index<cnpdallstatsentry.size(); index++)
    {
        if(cnpdallstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::has_operation() const
{
    for (std::size_t index=0; index<cnpdallstatsentry.size(); index++)
    {
        if(cnpdallstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdAllStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdAllStatsEntry")
    {
        for(auto const & c : cnpdallstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry>();
        c->parent = this;
        cnpdallstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdallstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::Cnpdallstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cnpdallstatsprotocolsindex{YType::uint32, "cnpdAllStatsProtocolsIndex"},
    cnpdallstatshcinbytes{YType::uint64, "cnpdAllStatsHCInBytes"},
    cnpdallstatshcinpkts{YType::uint64, "cnpdAllStatsHCInPkts"},
    cnpdallstatshcoutbytes{YType::uint64, "cnpdAllStatsHCOutBytes"},
    cnpdallstatshcoutpkts{YType::uint64, "cnpdAllStatsHCOutPkts"},
    cnpdallstatsinbitrate{YType::uint32, "cnpdAllStatsInBitRate"},
    cnpdallstatsinbytes{YType::uint32, "cnpdAllStatsInBytes"},
    cnpdallstatsinpkts{YType::uint32, "cnpdAllStatsInPkts"},
    cnpdallstatsoutbitrate{YType::uint32, "cnpdAllStatsOutBitRate"},
    cnpdallstatsoutbytes{YType::uint32, "cnpdAllStatsOutBytes"},
    cnpdallstatsoutpkts{YType::uint32, "cnpdAllStatsOutPkts"},
    cnpdallstatsprotocolname{YType::str, "cnpdAllStatsProtocolName"}
{
    yang_name = "cnpdAllStatsEntry"; yang_parent_name = "cnpdAllStatsTable";
}

CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::~Cnpdallstatsentry()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::has_data() const
{
    return ifindex.is_set
	|| cnpdallstatsprotocolsindex.is_set
	|| cnpdallstatshcinbytes.is_set
	|| cnpdallstatshcinpkts.is_set
	|| cnpdallstatshcoutbytes.is_set
	|| cnpdallstatshcoutpkts.is_set
	|| cnpdallstatsinbitrate.is_set
	|| cnpdallstatsinbytes.is_set
	|| cnpdallstatsinpkts.is_set
	|| cnpdallstatsoutbitrate.is_set
	|| cnpdallstatsoutbytes.is_set
	|| cnpdallstatsoutpkts.is_set
	|| cnpdallstatsprotocolname.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cnpdallstatsprotocolsindex.operation)
	|| is_set(cnpdallstatshcinbytes.operation)
	|| is_set(cnpdallstatshcinpkts.operation)
	|| is_set(cnpdallstatshcoutbytes.operation)
	|| is_set(cnpdallstatshcoutpkts.operation)
	|| is_set(cnpdallstatsinbitrate.operation)
	|| is_set(cnpdallstatsinbytes.operation)
	|| is_set(cnpdallstatsinpkts.operation)
	|| is_set(cnpdallstatsoutbitrate.operation)
	|| is_set(cnpdallstatsoutbytes.operation)
	|| is_set(cnpdallstatsoutpkts.operation)
	|| is_set(cnpdallstatsprotocolname.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdAllStatsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cnpdAllStatsProtocolsIndex='" <<cnpdallstatsprotocolsindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdAllStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cnpdallstatsprotocolsindex.is_set || is_set(cnpdallstatsprotocolsindex.operation)) leaf_name_data.push_back(cnpdallstatsprotocolsindex.get_name_leafdata());
    if (cnpdallstatshcinbytes.is_set || is_set(cnpdallstatshcinbytes.operation)) leaf_name_data.push_back(cnpdallstatshcinbytes.get_name_leafdata());
    if (cnpdallstatshcinpkts.is_set || is_set(cnpdallstatshcinpkts.operation)) leaf_name_data.push_back(cnpdallstatshcinpkts.get_name_leafdata());
    if (cnpdallstatshcoutbytes.is_set || is_set(cnpdallstatshcoutbytes.operation)) leaf_name_data.push_back(cnpdallstatshcoutbytes.get_name_leafdata());
    if (cnpdallstatshcoutpkts.is_set || is_set(cnpdallstatshcoutpkts.operation)) leaf_name_data.push_back(cnpdallstatshcoutpkts.get_name_leafdata());
    if (cnpdallstatsinbitrate.is_set || is_set(cnpdallstatsinbitrate.operation)) leaf_name_data.push_back(cnpdallstatsinbitrate.get_name_leafdata());
    if (cnpdallstatsinbytes.is_set || is_set(cnpdallstatsinbytes.operation)) leaf_name_data.push_back(cnpdallstatsinbytes.get_name_leafdata());
    if (cnpdallstatsinpkts.is_set || is_set(cnpdallstatsinpkts.operation)) leaf_name_data.push_back(cnpdallstatsinpkts.get_name_leafdata());
    if (cnpdallstatsoutbitrate.is_set || is_set(cnpdallstatsoutbitrate.operation)) leaf_name_data.push_back(cnpdallstatsoutbitrate.get_name_leafdata());
    if (cnpdallstatsoutbytes.is_set || is_set(cnpdallstatsoutbytes.operation)) leaf_name_data.push_back(cnpdallstatsoutbytes.get_name_leafdata());
    if (cnpdallstatsoutpkts.is_set || is_set(cnpdallstatsoutpkts.operation)) leaf_name_data.push_back(cnpdallstatsoutpkts.get_name_leafdata());
    if (cnpdallstatsprotocolname.is_set || is_set(cnpdallstatsprotocolname.operation)) leaf_name_data.push_back(cnpdallstatsprotocolname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdallstatstable::Cnpdallstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cnpdAllStatsProtocolsIndex")
    {
        cnpdallstatsprotocolsindex = value;
    }
    if(value_path == "cnpdAllStatsHCInBytes")
    {
        cnpdallstatshcinbytes = value;
    }
    if(value_path == "cnpdAllStatsHCInPkts")
    {
        cnpdallstatshcinpkts = value;
    }
    if(value_path == "cnpdAllStatsHCOutBytes")
    {
        cnpdallstatshcoutbytes = value;
    }
    if(value_path == "cnpdAllStatsHCOutPkts")
    {
        cnpdallstatshcoutpkts = value;
    }
    if(value_path == "cnpdAllStatsInBitRate")
    {
        cnpdallstatsinbitrate = value;
    }
    if(value_path == "cnpdAllStatsInBytes")
    {
        cnpdallstatsinbytes = value;
    }
    if(value_path == "cnpdAllStatsInPkts")
    {
        cnpdallstatsinpkts = value;
    }
    if(value_path == "cnpdAllStatsOutBitRate")
    {
        cnpdallstatsoutbitrate = value;
    }
    if(value_path == "cnpdAllStatsOutBytes")
    {
        cnpdallstatsoutbytes = value;
    }
    if(value_path == "cnpdAllStatsOutPkts")
    {
        cnpdallstatsoutpkts = value;
    }
    if(value_path == "cnpdAllStatsProtocolName")
    {
        cnpdallstatsprotocolname = value;
    }
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigtable()
{
    yang_name = "cnpdTopNConfigTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::~Cnpdtopnconfigtable()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::has_data() const
{
    for (std::size_t index=0; index<cnpdtopnconfigentry.size(); index++)
    {
        if(cnpdtopnconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cnpdtopnconfigentry.size(); index++)
    {
        if(cnpdtopnconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdTopNConfigEntry")
    {
        for(auto const & c : cnpdtopnconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry>();
        c->parent = this;
        cnpdtopnconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdtopnconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::Cnpdtopnconfigentry()
    :
    cnpdtopnconfigindex{YType::uint32, "cnpdTopNConfigIndex"},
    cnpdtopnconfiggrantedsize{YType::uint32, "cnpdTopNConfigGrantedSize"},
    cnpdtopnconfigifindex{YType::int32, "cnpdTopNConfigIfIndex"},
    cnpdtopnconfigrequestedsize{YType::uint32, "cnpdTopNConfigRequestedSize"},
    cnpdtopnconfigsampletime{YType::uint32, "cnpdTopNConfigSampleTime"},
    cnpdtopnconfigstatsselect{YType::enumeration, "cnpdTopNConfigStatsSelect"},
    cnpdtopnconfigstatus{YType::enumeration, "cnpdTopNConfigStatus"},
    cnpdtopnconfigtime{YType::uint32, "cnpdTopNConfigTime"}
{
    yang_name = "cnpdTopNConfigEntry"; yang_parent_name = "cnpdTopNConfigTable";
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::~Cnpdtopnconfigentry()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::has_data() const
{
    return cnpdtopnconfigindex.is_set
	|| cnpdtopnconfiggrantedsize.is_set
	|| cnpdtopnconfigifindex.is_set
	|| cnpdtopnconfigrequestedsize.is_set
	|| cnpdtopnconfigsampletime.is_set
	|| cnpdtopnconfigstatsselect.is_set
	|| cnpdtopnconfigstatus.is_set
	|| cnpdtopnconfigtime.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnpdtopnconfigindex.operation)
	|| is_set(cnpdtopnconfiggrantedsize.operation)
	|| is_set(cnpdtopnconfigifindex.operation)
	|| is_set(cnpdtopnconfigrequestedsize.operation)
	|| is_set(cnpdtopnconfigsampletime.operation)
	|| is_set(cnpdtopnconfigstatsselect.operation)
	|| is_set(cnpdtopnconfigstatus.operation)
	|| is_set(cnpdtopnconfigtime.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNConfigEntry" <<"[cnpdTopNConfigIndex='" <<cnpdtopnconfigindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdTopNConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdtopnconfigindex.is_set || is_set(cnpdtopnconfigindex.operation)) leaf_name_data.push_back(cnpdtopnconfigindex.get_name_leafdata());
    if (cnpdtopnconfiggrantedsize.is_set || is_set(cnpdtopnconfiggrantedsize.operation)) leaf_name_data.push_back(cnpdtopnconfiggrantedsize.get_name_leafdata());
    if (cnpdtopnconfigifindex.is_set || is_set(cnpdtopnconfigifindex.operation)) leaf_name_data.push_back(cnpdtopnconfigifindex.get_name_leafdata());
    if (cnpdtopnconfigrequestedsize.is_set || is_set(cnpdtopnconfigrequestedsize.operation)) leaf_name_data.push_back(cnpdtopnconfigrequestedsize.get_name_leafdata());
    if (cnpdtopnconfigsampletime.is_set || is_set(cnpdtopnconfigsampletime.operation)) leaf_name_data.push_back(cnpdtopnconfigsampletime.get_name_leafdata());
    if (cnpdtopnconfigstatsselect.is_set || is_set(cnpdtopnconfigstatsselect.operation)) leaf_name_data.push_back(cnpdtopnconfigstatsselect.get_name_leafdata());
    if (cnpdtopnconfigstatus.is_set || is_set(cnpdtopnconfigstatus.operation)) leaf_name_data.push_back(cnpdtopnconfigstatus.get_name_leafdata());
    if (cnpdtopnconfigtime.is_set || is_set(cnpdtopnconfigtime.operation)) leaf_name_data.push_back(cnpdtopnconfigtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdtopnconfigtable::Cnpdtopnconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnpdTopNConfigIndex")
    {
        cnpdtopnconfigindex = value;
    }
    if(value_path == "cnpdTopNConfigGrantedSize")
    {
        cnpdtopnconfiggrantedsize = value;
    }
    if(value_path == "cnpdTopNConfigIfIndex")
    {
        cnpdtopnconfigifindex = value;
    }
    if(value_path == "cnpdTopNConfigRequestedSize")
    {
        cnpdtopnconfigrequestedsize = value;
    }
    if(value_path == "cnpdTopNConfigSampleTime")
    {
        cnpdtopnconfigsampletime = value;
    }
    if(value_path == "cnpdTopNConfigStatsSelect")
    {
        cnpdtopnconfigstatsselect = value;
    }
    if(value_path == "cnpdTopNConfigStatus")
    {
        cnpdtopnconfigstatus = value;
    }
    if(value_path == "cnpdTopNConfigTime")
    {
        cnpdtopnconfigtime = value;
    }
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatstable()
{
    yang_name = "cnpdTopNStatsTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::~Cnpdtopnstatstable()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::has_data() const
{
    for (std::size_t index=0; index<cnpdtopnstatsentry.size(); index++)
    {
        if(cnpdtopnstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::has_operation() const
{
    for (std::size_t index=0; index<cnpdtopnstatsentry.size(); index++)
    {
        if(cnpdtopnstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdTopNStatsEntry")
    {
        for(auto const & c : cnpdtopnstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry>();
        c->parent = this;
        cnpdtopnstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdtopnstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::Cnpdtopnstatsentry()
    :
    cnpdtopnconfigindex{YType::str, "cnpdTopNConfigIndex"},
    cnpdtopnstatsindex{YType::uint32, "cnpdTopNStatsIndex"},
    cnpdtopnstatshcrate{YType::uint64, "cnpdTopNStatsHCRate"},
    cnpdtopnstatsprotocolname{YType::str, "cnpdTopNStatsProtocolName"},
    cnpdtopnstatsrate{YType::uint32, "cnpdTopNStatsRate"}
{
    yang_name = "cnpdTopNStatsEntry"; yang_parent_name = "cnpdTopNStatsTable";
}

CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::~Cnpdtopnstatsentry()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::has_data() const
{
    return cnpdtopnconfigindex.is_set
	|| cnpdtopnstatsindex.is_set
	|| cnpdtopnstatshcrate.is_set
	|| cnpdtopnstatsprotocolname.is_set
	|| cnpdtopnstatsrate.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnpdtopnconfigindex.operation)
	|| is_set(cnpdtopnstatsindex.operation)
	|| is_set(cnpdtopnstatshcrate.operation)
	|| is_set(cnpdtopnstatsprotocolname.operation)
	|| is_set(cnpdtopnstatsrate.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNStatsEntry" <<"[cnpdTopNConfigIndex='" <<cnpdtopnconfigindex <<"']" <<"[cnpdTopNStatsIndex='" <<cnpdtopnstatsindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdTopNStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdtopnconfigindex.is_set || is_set(cnpdtopnconfigindex.operation)) leaf_name_data.push_back(cnpdtopnconfigindex.get_name_leafdata());
    if (cnpdtopnstatsindex.is_set || is_set(cnpdtopnstatsindex.operation)) leaf_name_data.push_back(cnpdtopnstatsindex.get_name_leafdata());
    if (cnpdtopnstatshcrate.is_set || is_set(cnpdtopnstatshcrate.operation)) leaf_name_data.push_back(cnpdtopnstatshcrate.get_name_leafdata());
    if (cnpdtopnstatsprotocolname.is_set || is_set(cnpdtopnstatsprotocolname.operation)) leaf_name_data.push_back(cnpdtopnstatsprotocolname.get_name_leafdata());
    if (cnpdtopnstatsrate.is_set || is_set(cnpdtopnstatsrate.operation)) leaf_name_data.push_back(cnpdtopnstatsrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdtopnstatstable::Cnpdtopnstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnpdTopNConfigIndex")
    {
        cnpdtopnconfigindex = value;
    }
    if(value_path == "cnpdTopNStatsIndex")
    {
        cnpdtopnstatsindex = value;
    }
    if(value_path == "cnpdTopNStatsHCRate")
    {
        cnpdtopnstatshcrate = value;
    }
    if(value_path == "cnpdTopNStatsProtocolName")
    {
        cnpdtopnstatsprotocolname = value;
    }
    if(value_path == "cnpdTopNStatsRate")
    {
        cnpdtopnstatsrate = value;
    }
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigtable()
{
    yang_name = "cnpdThresholdConfigTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::~Cnpdthresholdconfigtable()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::has_data() const
{
    for (std::size_t index=0; index<cnpdthresholdconfigentry.size(); index++)
    {
        if(cnpdthresholdconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cnpdthresholdconfigentry.size(); index++)
    {
        if(cnpdthresholdconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdThresholdConfigEntry")
    {
        for(auto const & c : cnpdthresholdconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry>();
        c->parent = this;
        cnpdthresholdconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdthresholdconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigentry()
    :
    cnpdthresholdconfigindex{YType::uint32, "cnpdThresholdConfigIndex"},
    cnpdthresholdconfigfalling{YType::uint32, "cnpdThresholdConfigFalling"},
    cnpdthresholdconfigifindex{YType::int32, "cnpdThresholdConfigIfIndex"},
    cnpdthresholdconfiginterval{YType::uint32, "cnpdThresholdConfigInterval"},
    cnpdthresholdconfigprotocol{YType::uint32, "cnpdThresholdConfigProtocol"},
    cnpdthresholdconfigprotocolany{YType::boolean, "cnpdThresholdConfigProtocolAny"},
    cnpdthresholdconfigrising{YType::uint32, "cnpdThresholdConfigRising"},
    cnpdthresholdconfigsampletype{YType::enumeration, "cnpdThresholdConfigSampleType"},
    cnpdthresholdconfigstartup{YType::enumeration, "cnpdThresholdConfigStartup"},
    cnpdthresholdconfigstatsselect{YType::enumeration, "cnpdThresholdConfigStatsSelect"},
    cnpdthresholdconfigstatus{YType::enumeration, "cnpdThresholdConfigStatus"}
{
    yang_name = "cnpdThresholdConfigEntry"; yang_parent_name = "cnpdThresholdConfigTable";
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::~Cnpdthresholdconfigentry()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::has_data() const
{
    return cnpdthresholdconfigindex.is_set
	|| cnpdthresholdconfigfalling.is_set
	|| cnpdthresholdconfigifindex.is_set
	|| cnpdthresholdconfiginterval.is_set
	|| cnpdthresholdconfigprotocol.is_set
	|| cnpdthresholdconfigprotocolany.is_set
	|| cnpdthresholdconfigrising.is_set
	|| cnpdthresholdconfigsampletype.is_set
	|| cnpdthresholdconfigstartup.is_set
	|| cnpdthresholdconfigstatsselect.is_set
	|| cnpdthresholdconfigstatus.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnpdthresholdconfigindex.operation)
	|| is_set(cnpdthresholdconfigfalling.operation)
	|| is_set(cnpdthresholdconfigifindex.operation)
	|| is_set(cnpdthresholdconfiginterval.operation)
	|| is_set(cnpdthresholdconfigprotocol.operation)
	|| is_set(cnpdthresholdconfigprotocolany.operation)
	|| is_set(cnpdthresholdconfigrising.operation)
	|| is_set(cnpdthresholdconfigsampletype.operation)
	|| is_set(cnpdthresholdconfigstartup.operation)
	|| is_set(cnpdthresholdconfigstatsselect.operation)
	|| is_set(cnpdthresholdconfigstatus.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdConfigEntry" <<"[cnpdThresholdConfigIndex='" <<cnpdthresholdconfigindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdThresholdConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdthresholdconfigindex.is_set || is_set(cnpdthresholdconfigindex.operation)) leaf_name_data.push_back(cnpdthresholdconfigindex.get_name_leafdata());
    if (cnpdthresholdconfigfalling.is_set || is_set(cnpdthresholdconfigfalling.operation)) leaf_name_data.push_back(cnpdthresholdconfigfalling.get_name_leafdata());
    if (cnpdthresholdconfigifindex.is_set || is_set(cnpdthresholdconfigifindex.operation)) leaf_name_data.push_back(cnpdthresholdconfigifindex.get_name_leafdata());
    if (cnpdthresholdconfiginterval.is_set || is_set(cnpdthresholdconfiginterval.operation)) leaf_name_data.push_back(cnpdthresholdconfiginterval.get_name_leafdata());
    if (cnpdthresholdconfigprotocol.is_set || is_set(cnpdthresholdconfigprotocol.operation)) leaf_name_data.push_back(cnpdthresholdconfigprotocol.get_name_leafdata());
    if (cnpdthresholdconfigprotocolany.is_set || is_set(cnpdthresholdconfigprotocolany.operation)) leaf_name_data.push_back(cnpdthresholdconfigprotocolany.get_name_leafdata());
    if (cnpdthresholdconfigrising.is_set || is_set(cnpdthresholdconfigrising.operation)) leaf_name_data.push_back(cnpdthresholdconfigrising.get_name_leafdata());
    if (cnpdthresholdconfigsampletype.is_set || is_set(cnpdthresholdconfigsampletype.operation)) leaf_name_data.push_back(cnpdthresholdconfigsampletype.get_name_leafdata());
    if (cnpdthresholdconfigstartup.is_set || is_set(cnpdthresholdconfigstartup.operation)) leaf_name_data.push_back(cnpdthresholdconfigstartup.get_name_leafdata());
    if (cnpdthresholdconfigstatsselect.is_set || is_set(cnpdthresholdconfigstatsselect.operation)) leaf_name_data.push_back(cnpdthresholdconfigstatsselect.get_name_leafdata());
    if (cnpdthresholdconfigstatus.is_set || is_set(cnpdthresholdconfigstatus.operation)) leaf_name_data.push_back(cnpdthresholdconfigstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnpdThresholdConfigIndex")
    {
        cnpdthresholdconfigindex = value;
    }
    if(value_path == "cnpdThresholdConfigFalling")
    {
        cnpdthresholdconfigfalling = value;
    }
    if(value_path == "cnpdThresholdConfigIfIndex")
    {
        cnpdthresholdconfigifindex = value;
    }
    if(value_path == "cnpdThresholdConfigInterval")
    {
        cnpdthresholdconfiginterval = value;
    }
    if(value_path == "cnpdThresholdConfigProtocol")
    {
        cnpdthresholdconfigprotocol = value;
    }
    if(value_path == "cnpdThresholdConfigProtocolAny")
    {
        cnpdthresholdconfigprotocolany = value;
    }
    if(value_path == "cnpdThresholdConfigRising")
    {
        cnpdthresholdconfigrising = value;
    }
    if(value_path == "cnpdThresholdConfigSampleType")
    {
        cnpdthresholdconfigsampletype = value;
    }
    if(value_path == "cnpdThresholdConfigStartup")
    {
        cnpdthresholdconfigstartup = value;
    }
    if(value_path == "cnpdThresholdConfigStatsSelect")
    {
        cnpdthresholdconfigstatsselect = value;
    }
    if(value_path == "cnpdThresholdConfigStatus")
    {
        cnpdthresholdconfigstatus = value;
    }
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistorytable()
{
    yang_name = "cnpdThresholdHistoryTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::~Cnpdthresholdhistorytable()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::has_data() const
{
    for (std::size_t index=0; index<cnpdthresholdhistoryentry.size(); index++)
    {
        if(cnpdthresholdhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cnpdthresholdhistoryentry.size(); index++)
    {
        if(cnpdthresholdhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdHistoryTable";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdThresholdHistoryEntry")
    {
        for(auto const & c : cnpdthresholdhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry>();
        c->parent = this;
        cnpdthresholdhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdthresholdhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::Cnpdthresholdhistoryentry()
    :
    cnpdthresholdhistoryindex{YType::uint32, "cnpdThresholdHistoryIndex"},
    cnpdthresholdhistoryconfigindex{YType::uint32, "cnpdThresholdHistoryConfigIndex"},
    cnpdthresholdhistoryprotocol{YType::uint32, "cnpdThresholdHistoryProtocol"},
    cnpdthresholdhistorystatsselect{YType::enumeration, "cnpdThresholdHistoryStatsSelect"},
    cnpdthresholdhistorytime{YType::uint32, "cnpdThresholdHistoryTime"},
    cnpdthresholdhistorytype{YType::enumeration, "cnpdThresholdHistoryType"},
    cnpdthresholdhistoryvalue{YType::uint32, "cnpdThresholdHistoryValue"}
{
    yang_name = "cnpdThresholdHistoryEntry"; yang_parent_name = "cnpdThresholdHistoryTable";
}

CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::~Cnpdthresholdhistoryentry()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::has_data() const
{
    return cnpdthresholdhistoryindex.is_set
	|| cnpdthresholdhistoryconfigindex.is_set
	|| cnpdthresholdhistoryprotocol.is_set
	|| cnpdthresholdhistorystatsselect.is_set
	|| cnpdthresholdhistorytime.is_set
	|| cnpdthresholdhistorytype.is_set
	|| cnpdthresholdhistoryvalue.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnpdthresholdhistoryindex.operation)
	|| is_set(cnpdthresholdhistoryconfigindex.operation)
	|| is_set(cnpdthresholdhistoryprotocol.operation)
	|| is_set(cnpdthresholdhistorystatsselect.operation)
	|| is_set(cnpdthresholdhistorytime.operation)
	|| is_set(cnpdthresholdhistorytype.operation)
	|| is_set(cnpdthresholdhistoryvalue.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdHistoryEntry" <<"[cnpdThresholdHistoryIndex='" <<cnpdthresholdhistoryindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdThresholdHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdthresholdhistoryindex.is_set || is_set(cnpdthresholdhistoryindex.operation)) leaf_name_data.push_back(cnpdthresholdhistoryindex.get_name_leafdata());
    if (cnpdthresholdhistoryconfigindex.is_set || is_set(cnpdthresholdhistoryconfigindex.operation)) leaf_name_data.push_back(cnpdthresholdhistoryconfigindex.get_name_leafdata());
    if (cnpdthresholdhistoryprotocol.is_set || is_set(cnpdthresholdhistoryprotocol.operation)) leaf_name_data.push_back(cnpdthresholdhistoryprotocol.get_name_leafdata());
    if (cnpdthresholdhistorystatsselect.is_set || is_set(cnpdthresholdhistorystatsselect.operation)) leaf_name_data.push_back(cnpdthresholdhistorystatsselect.get_name_leafdata());
    if (cnpdthresholdhistorytime.is_set || is_set(cnpdthresholdhistorytime.operation)) leaf_name_data.push_back(cnpdthresholdhistorytime.get_name_leafdata());
    if (cnpdthresholdhistorytype.is_set || is_set(cnpdthresholdhistorytype.operation)) leaf_name_data.push_back(cnpdthresholdhistorytype.get_name_leafdata());
    if (cnpdthresholdhistoryvalue.is_set || is_set(cnpdthresholdhistoryvalue.operation)) leaf_name_data.push_back(cnpdthresholdhistoryvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnpdThresholdHistoryIndex")
    {
        cnpdthresholdhistoryindex = value;
    }
    if(value_path == "cnpdThresholdHistoryConfigIndex")
    {
        cnpdthresholdhistoryconfigindex = value;
    }
    if(value_path == "cnpdThresholdHistoryProtocol")
    {
        cnpdthresholdhistoryprotocol = value;
    }
    if(value_path == "cnpdThresholdHistoryStatsSelect")
    {
        cnpdthresholdhistorystatsselect = value;
    }
    if(value_path == "cnpdThresholdHistoryTime")
    {
        cnpdthresholdhistorytime = value;
    }
    if(value_path == "cnpdThresholdHistoryType")
    {
        cnpdthresholdhistorytype = value;
    }
    if(value_path == "cnpdThresholdHistoryValue")
    {
        cnpdthresholdhistoryvalue = value;
    }
}

CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolstable()
{
    yang_name = "cnpdSupportedProtocolsTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
}

CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::~Cnpdsupportedprotocolstable()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::has_data() const
{
    for (std::size_t index=0; index<cnpdsupportedprotocolsentry.size(); index++)
    {
        if(cnpdsupportedprotocolsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::has_operation() const
{
    for (std::size_t index=0; index<cnpdsupportedprotocolsentry.size(); index++)
    {
        if(cnpdsupportedprotocolsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdSupportedProtocolsTable";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdSupportedProtocolsEntry")
    {
        for(auto const & c : cnpdsupportedprotocolsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry>();
        c->parent = this;
        cnpdsupportedprotocolsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdsupportedprotocolsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::Cnpdsupportedprotocolsentry()
    :
    cnpdsupportedprotocolsindex{YType::uint32, "cnpdSupportedProtocolsIndex"},
    cnpdsupportedprotocolsname{YType::str, "cnpdSupportedProtocolsName"}
{
    yang_name = "cnpdSupportedProtocolsEntry"; yang_parent_name = "cnpdSupportedProtocolsTable";
}

CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::~Cnpdsupportedprotocolsentry()
{
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::has_data() const
{
    return cnpdsupportedprotocolsindex.is_set
	|| cnpdsupportedprotocolsname.is_set;
}

bool CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnpdsupportedprotocolsindex.operation)
	|| is_set(cnpdsupportedprotocolsname.operation);
}

std::string CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdSupportedProtocolsEntry" <<"[cnpdSupportedProtocolsIndex='" <<cnpdsupportedprotocolsindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdSupportedProtocolsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdsupportedprotocolsindex.is_set || is_set(cnpdsupportedprotocolsindex.operation)) leaf_name_data.push_back(cnpdsupportedprotocolsindex.get_name_leafdata());
    if (cnpdsupportedprotocolsname.is_set || is_set(cnpdsupportedprotocolsname.operation)) leaf_name_data.push_back(cnpdsupportedprotocolsname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNbarProtocolDiscoveryMib::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnpdSupportedProtocolsIndex")
    {
        cnpdsupportedprotocolsindex = value;
    }
    if(value_path == "cnpdSupportedProtocolsName")
    {
        cnpdsupportedprotocolsname = value;
    }
}

const Enum::YLeaf CiscopddatatypeEnum::bitRateIn {1, "bitRateIn"};
const Enum::YLeaf CiscopddatatypeEnum::bitRateOut {2, "bitRateOut"};
const Enum::YLeaf CiscopddatatypeEnum::bitRateSum {3, "bitRateSum"};
const Enum::YLeaf CiscopddatatypeEnum::byteCountIn {4, "byteCountIn"};
const Enum::YLeaf CiscopddatatypeEnum::byteCountOut {5, "byteCountOut"};
const Enum::YLeaf CiscopddatatypeEnum::byteCountSum {6, "byteCountSum"};
const Enum::YLeaf CiscopddatatypeEnum::packetCountIn {7, "packetCountIn"};
const Enum::YLeaf CiscopddatatypeEnum::packetCountOut {8, "packetCountOut"};
const Enum::YLeaf CiscopddatatypeEnum::packetCountSum {9, "packetCountSum"};

const Enum::YLeaf CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::CnpdthresholdconfigsampletypeEnum::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::CnpdthresholdconfigsampletypeEnum::deltaValue {2, "deltaValue"};

const Enum::YLeaf CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::CnpdthresholdconfigstartupEnum::rising {1, "rising"};
const Enum::YLeaf CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::CnpdthresholdconfigstartupEnum::falling {2, "falling"};
const Enum::YLeaf CiscoNbarProtocolDiscoveryMib::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::CnpdthresholdconfigstartupEnum::risingOrFalling {3, "risingOrFalling"};

const Enum::YLeaf CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::CnpdthresholdhistorytypeEnum::risingBreach {1, "risingBreach"};
const Enum::YLeaf CiscoNbarProtocolDiscoveryMib::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::CnpdthresholdhistorytypeEnum::fallingBreach {2, "fallingBreach"};


}
}

