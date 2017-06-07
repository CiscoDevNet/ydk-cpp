
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_ENET_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_PW_ENET_MIB {

CiscoIetfPwEnetMib::CiscoIetfPwEnetMib()
    :
    cpwvcenetmplsprimappingtable(std::make_shared<CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable>())
	,cpwvcenetstatstable(std::make_shared<CiscoIetfPwEnetMib::Cpwvcenetstatstable>())
	,cpwvcenettable(std::make_shared<CiscoIetfPwEnetMib::Cpwvcenettable>())
{
    cpwvcenetmplsprimappingtable->parent = this;

    cpwvcenetstatstable->parent = this;

    cpwvcenettable->parent = this;

    yang_name = "CISCO-IETF-PW-ENET-MIB"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB";
}

CiscoIetfPwEnetMib::~CiscoIetfPwEnetMib()
{
}

bool CiscoIetfPwEnetMib::has_data() const
{
    return (cpwvcenetmplsprimappingtable !=  nullptr && cpwvcenetmplsprimappingtable->has_data())
	|| (cpwvcenetstatstable !=  nullptr && cpwvcenetstatstable->has_data())
	|| (cpwvcenettable !=  nullptr && cpwvcenettable->has_data());
}

bool CiscoIetfPwEnetMib::has_operation() const
{
    return is_set(operation)
	|| (cpwvcenetmplsprimappingtable !=  nullptr && cpwvcenetmplsprimappingtable->has_operation())
	|| (cpwvcenetstatstable !=  nullptr && cpwvcenetstatstable->has_operation())
	|| (cpwvcenettable !=  nullptr && cpwvcenettable->has_operation());
}

std::string CiscoIetfPwEnetMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwEnetMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfPwEnetMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetMplsPriMappingTable")
    {
        if(cpwvcenetmplsprimappingtable == nullptr)
        {
            cpwvcenetmplsprimappingtable = std::make_shared<CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable>();
        }
        return cpwvcenetmplsprimappingtable;
    }

    if(child_yang_name == "cpwVcEnetStatsTable")
    {
        if(cpwvcenetstatstable == nullptr)
        {
            cpwvcenetstatstable = std::make_shared<CiscoIetfPwEnetMib::Cpwvcenetstatstable>();
        }
        return cpwvcenetstatstable;
    }

    if(child_yang_name == "cpwVcEnetTable")
    {
        if(cpwvcenettable == nullptr)
        {
            cpwvcenettable = std::make_shared<CiscoIetfPwEnetMib::Cpwvcenettable>();
        }
        return cpwvcenettable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwEnetMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwvcenetmplsprimappingtable != nullptr)
    {
        children["cpwVcEnetMplsPriMappingTable"] = cpwvcenetmplsprimappingtable;
    }

    if(cpwvcenetstatstable != nullptr)
    {
        children["cpwVcEnetStatsTable"] = cpwvcenetstatstable;
    }

    if(cpwvcenettable != nullptr)
    {
        children["cpwVcEnetTable"] = cpwvcenettable;
    }

    return children;
}

void CiscoIetfPwEnetMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfPwEnetMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfPwEnetMib>();
}

std::string CiscoIetfPwEnetMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfPwEnetMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfPwEnetMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenettable()
{
    yang_name = "cpwVcEnetTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB";
}

CiscoIetfPwEnetMib::Cpwvcenettable::~Cpwvcenettable()
{
}

bool CiscoIetfPwEnetMib::Cpwvcenettable::has_data() const
{
    for (std::size_t index=0; index<cpwvcenetentry.size(); index++)
    {
        if(cpwvcenetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwEnetMib::Cpwvcenettable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetentry.size(); index++)
    {
        if(cpwvcenetentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwEnetMib::Cpwvcenettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwEnetMib::Cpwvcenettable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwEnetMib::Cpwvcenettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetEntry")
    {
        for(auto const & c : cpwvcenetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry>();
        c->parent = this;
        cpwvcenetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwEnetMib::Cpwvcenettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcenetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwEnetMib::Cpwvcenettable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::Cpwvcenetentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetpwvlan{YType::int32, "cpwVcEnetPwVlan"},
    cpwvcenetportifindex{YType::int32, "cpwVcEnetPortIfIndex"},
    cpwvcenetportvlan{YType::int32, "cpwVcEnetPortVlan"},
    cpwvcenetrowstatus{YType::enumeration, "cpwVcEnetRowStatus"},
    cpwvcenetstoragetype{YType::enumeration, "cpwVcEnetStorageType"},
    cpwvcenetvcifindex{YType::int32, "cpwVcEnetVcIfIndex"},
    cpwvcenetvlanmode{YType::enumeration, "cpwVcEnetVlanMode"}
{
    yang_name = "cpwVcEnetEntry"; yang_parent_name = "cpwVcEnetTable";
}

CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::~Cpwvcenetentry()
{
}

bool CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcenetpwvlan.is_set
	|| cpwvcenetportifindex.is_set
	|| cpwvcenetportvlan.is_set
	|| cpwvcenetrowstatus.is_set
	|| cpwvcenetstoragetype.is_set
	|| cpwvcenetvcifindex.is_set
	|| cpwvcenetvlanmode.is_set;
}

bool CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcenetpwvlan.operation)
	|| is_set(cpwvcenetportifindex.operation)
	|| is_set(cpwvcenetportvlan.operation)
	|| is_set(cpwvcenetrowstatus.operation)
	|| is_set(cpwvcenetstoragetype.operation)
	|| is_set(cpwvcenetvcifindex.operation)
	|| is_set(cpwvcenetvlanmode.operation);
}

std::string CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']" <<"[cpwVcEnetPwVlan='" <<cpwvcenetpwvlan <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetpwvlan.is_set || is_set(cpwvcenetpwvlan.operation)) leaf_name_data.push_back(cpwvcenetpwvlan.get_name_leafdata());
    if (cpwvcenetportifindex.is_set || is_set(cpwvcenetportifindex.operation)) leaf_name_data.push_back(cpwvcenetportifindex.get_name_leafdata());
    if (cpwvcenetportvlan.is_set || is_set(cpwvcenetportvlan.operation)) leaf_name_data.push_back(cpwvcenetportvlan.get_name_leafdata());
    if (cpwvcenetrowstatus.is_set || is_set(cpwvcenetrowstatus.operation)) leaf_name_data.push_back(cpwvcenetrowstatus.get_name_leafdata());
    if (cpwvcenetstoragetype.is_set || is_set(cpwvcenetstoragetype.operation)) leaf_name_data.push_back(cpwvcenetstoragetype.get_name_leafdata());
    if (cpwvcenetvcifindex.is_set || is_set(cpwvcenetvcifindex.operation)) leaf_name_data.push_back(cpwvcenetvcifindex.get_name_leafdata());
    if (cpwvcenetvlanmode.is_set || is_set(cpwvcenetvlanmode.operation)) leaf_name_data.push_back(cpwvcenetvlanmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcEnetPwVlan")
    {
        cpwvcenetpwvlan = value;
    }
    if(value_path == "cpwVcEnetPortIfIndex")
    {
        cpwvcenetportifindex = value;
    }
    if(value_path == "cpwVcEnetPortVlan")
    {
        cpwvcenetportvlan = value;
    }
    if(value_path == "cpwVcEnetRowStatus")
    {
        cpwvcenetrowstatus = value;
    }
    if(value_path == "cpwVcEnetStorageType")
    {
        cpwvcenetstoragetype = value;
    }
    if(value_path == "cpwVcEnetVcIfIndex")
    {
        cpwvcenetvcifindex = value;
    }
    if(value_path == "cpwVcEnetVlanMode")
    {
        cpwvcenetvlanmode = value;
    }
}

CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtable()
{
    yang_name = "cpwVcEnetMplsPriMappingTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB";
}

CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::~Cpwvcenetmplsprimappingtable()
{
}

bool CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcenetmplsprimappingtableentry.size(); index++)
    {
        if(cpwvcenetmplsprimappingtableentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetmplsprimappingtableentry.size(); index++)
    {
        if(cpwvcenetmplsprimappingtableentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetMplsPriMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetMplsPriMappingTableEntry")
    {
        for(auto const & c : cpwvcenetmplsprimappingtableentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry>();
        c->parent = this;
        cpwvcenetmplsprimappingtableentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcenetmplsprimappingtableentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::Cpwvcenetmplsprimappingtableentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetmplsprimapping{YType::bits, "cpwVcEnetMplsPriMapping"},
    cpwvcenetmplsprimappingrowstatus{YType::enumeration, "cpwVcEnetMplsPriMappingRowStatus"},
    cpwvcenetmplsprimappingstoragetype{YType::enumeration, "cpwVcEnetMplsPriMappingStorageType"}
{
    yang_name = "cpwVcEnetMplsPriMappingTableEntry"; yang_parent_name = "cpwVcEnetMplsPriMappingTable";
}

CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::~Cpwvcenetmplsprimappingtableentry()
{
}

bool CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcenetmplsprimapping.is_set
	|| cpwvcenetmplsprimappingrowstatus.is_set
	|| cpwvcenetmplsprimappingstoragetype.is_set;
}

bool CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcenetmplsprimapping.operation)
	|| is_set(cpwvcenetmplsprimappingrowstatus.operation)
	|| is_set(cpwvcenetmplsprimappingstoragetype.operation);
}

std::string CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetMplsPriMappingTableEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetMplsPriMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetmplsprimapping.is_set || is_set(cpwvcenetmplsprimapping.operation)) leaf_name_data.push_back(cpwvcenetmplsprimapping.get_name_leafdata());
    if (cpwvcenetmplsprimappingrowstatus.is_set || is_set(cpwvcenetmplsprimappingrowstatus.operation)) leaf_name_data.push_back(cpwvcenetmplsprimappingrowstatus.get_name_leafdata());
    if (cpwvcenetmplsprimappingstoragetype.is_set || is_set(cpwvcenetmplsprimappingstoragetype.operation)) leaf_name_data.push_back(cpwvcenetmplsprimappingstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwEnetMib::Cpwvcenetmplsprimappingtable::Cpwvcenetmplsprimappingtableentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcEnetMplsPriMapping")
    {
        cpwvcenetmplsprimapping[value] = true;
    }
    if(value_path == "cpwVcEnetMplsPriMappingRowStatus")
    {
        cpwvcenetmplsprimappingrowstatus = value;
    }
    if(value_path == "cpwVcEnetMplsPriMappingStorageType")
    {
        cpwvcenetmplsprimappingstoragetype = value;
    }
}

CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatstable()
{
    yang_name = "cpwVcEnetStatsTable"; yang_parent_name = "CISCO-IETF-PW-ENET-MIB";
}

CiscoIetfPwEnetMib::Cpwvcenetstatstable::~Cpwvcenetstatstable()
{
}

bool CiscoIetfPwEnetMib::Cpwvcenetstatstable::has_data() const
{
    for (std::size_t index=0; index<cpwvcenetstatsentry.size(); index++)
    {
        if(cpwvcenetstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwEnetMib::Cpwvcenetstatstable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcenetstatsentry.size(); index++)
    {
        if(cpwvcenetstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwEnetMib::Cpwvcenetstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwEnetMib::Cpwvcenetstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwEnetMib::Cpwvcenetstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcEnetStatsEntry")
    {
        for(auto const & c : cpwvcenetstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry>();
        c->parent = this;
        cpwvcenetstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwEnetMib::Cpwvcenetstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcenetstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwEnetMib::Cpwvcenetstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::Cpwvcenetstatsentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcenetstatsillegallength{YType::uint64, "cpwVcEnetStatsIllegalLength"},
    cpwvcenetstatsillegalvlan{YType::uint64, "cpwVcEnetStatsIllegalVlan"}
{
    yang_name = "cpwVcEnetStatsEntry"; yang_parent_name = "cpwVcEnetStatsTable";
}

CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::~Cpwvcenetstatsentry()
{
}

bool CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwvcenetstatsillegallength.is_set
	|| cpwvcenetstatsillegalvlan.is_set;
}

bool CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwvcenetstatsillegallength.operation)
	|| is_set(cpwvcenetstatsillegalvlan.operation);
}

std::string CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcEnetStatsEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ENET-MIB:CISCO-IETF-PW-ENET-MIB/cpwVcEnetStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcenetstatsillegallength.is_set || is_set(cpwvcenetstatsillegallength.operation)) leaf_name_data.push_back(cpwvcenetstatsillegallength.get_name_leafdata());
    if (cpwvcenetstatsillegalvlan.is_set || is_set(cpwvcenetstatsillegalvlan.operation)) leaf_name_data.push_back(cpwvcenetstatsillegalvlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwEnetMib::Cpwvcenetstatstable::Cpwvcenetstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwVcEnetStatsIllegalLength")
    {
        cpwvcenetstatsillegallength = value;
    }
    if(value_path == "cpwVcEnetStatsIllegalVlan")
    {
        cpwvcenetstatsillegalvlan = value;
    }
}

const Enum::YLeaf CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::CpwvcenetvlanmodeEnum::other {0, "other"};
const Enum::YLeaf CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::CpwvcenetvlanmodeEnum::portBased {1, "portBased"};
const Enum::YLeaf CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::CpwvcenetvlanmodeEnum::noChange {2, "noChange"};
const Enum::YLeaf CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::CpwvcenetvlanmodeEnum::changeVlan {3, "changeVlan"};
const Enum::YLeaf CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::CpwvcenetvlanmodeEnum::addVlan {4, "addVlan"};
const Enum::YLeaf CiscoIetfPwEnetMib::Cpwvcenettable::Cpwvcenetentry::CpwvcenetvlanmodeEnum::removeVlan {5, "removeVlan"};


}
}

