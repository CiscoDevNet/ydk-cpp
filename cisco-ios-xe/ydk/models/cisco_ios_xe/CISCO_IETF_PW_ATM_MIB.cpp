
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_ATM_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_PW_ATM_MIB {

CiscoIetfPwAtmMib::CiscoIetfPwAtmMib()
    :
    cpwvcatmtable(std::make_shared<CiscoIetfPwAtmMib::Cpwvcatmtable>())
{
    cpwvcatmtable->parent = this;

    yang_name = "CISCO-IETF-PW-ATM-MIB"; yang_parent_name = "CISCO-IETF-PW-ATM-MIB";
}

CiscoIetfPwAtmMib::~CiscoIetfPwAtmMib()
{
}

bool CiscoIetfPwAtmMib::has_data() const
{
    return (cpwvcatmtable !=  nullptr && cpwvcatmtable->has_data());
}

bool CiscoIetfPwAtmMib::has_operation() const
{
    return is_set(operation)
	|| (cpwvcatmtable !=  nullptr && cpwvcatmtable->has_operation());
}

std::string CiscoIetfPwAtmMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwAtmMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfPwAtmMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcAtmTable")
    {
        if(cpwvcatmtable == nullptr)
        {
            cpwvcatmtable = std::make_shared<CiscoIetfPwAtmMib::Cpwvcatmtable>();
        }
        return cpwvcatmtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwAtmMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cpwvcatmtable != nullptr)
    {
        children["cpwVcAtmTable"] = cpwvcatmtable;
    }

    return children;
}

void CiscoIetfPwAtmMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfPwAtmMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfPwAtmMib>();
}

std::string CiscoIetfPwAtmMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfPwAtmMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfPwAtmMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmtable()
{
    yang_name = "cpwVcAtmTable"; yang_parent_name = "CISCO-IETF-PW-ATM-MIB";
}

CiscoIetfPwAtmMib::Cpwvcatmtable::~Cpwvcatmtable()
{
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcatmentry.size(); index++)
    {
        if(cpwvcatmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcatmentry.size(); index++)
    {
        if(cpwvcatmentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfPwAtmMib::Cpwvcatmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcAtmTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwAtmMib::Cpwvcatmtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwAtmMib::Cpwvcatmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcAtmEntry")
    {
        for(auto const & c : cpwvcatmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry>();
        c->parent = this;
        cpwvcatmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwAtmMib::Cpwvcatmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cpwvcatmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfPwAtmMib::Cpwvcatmtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::Cpwvcatmentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwatmavgcellspacked{YType::uint32, "cpwAtmAvgCellsPacked"},
    cpwatmcellpacking{YType::boolean, "cpwAtmCellPacking"},
    cpwatmcellsreceived{YType::uint32, "cpwAtmCellsReceived"},
    cpwatmcellsrejected{YType::uint32, "cpwAtmCellsRejected"},
    cpwatmcellssent{YType::uint32, "cpwAtmCellsSent"},
    cpwatmcellstagged{YType::uint32, "cpwAtmCellsTagged"},
    cpwatmclpqosmapping{YType::boolean, "cpwAtmClpQosMapping"},
    cpwatmencap{YType::enumeration, "cpwAtmEncap"},
    cpwatmhccellsreceived{YType::uint64, "cpwAtmHCCellsReceived"},
    cpwatmhccellsrejected{YType::uint64, "cpwAtmHCCellsRejected"},
    cpwatmhccellstagged{YType::uint64, "cpwAtmHCCellsTagged"},
    cpwatmif{YType::int32, "cpwAtmIf"},
    cpwatmmcpttimeout{YType::int32, "cpwAtmMcptTimeout"},
    cpwatmmncp{YType::int32, "cpwAtmMncp"},
    cpwatmoamcellsupported{YType::boolean, "cpwAtmOamCellSupported"},
    cpwatmpeermncp{YType::int32, "cpwAtmPeerMncp"},
    cpwatmpktsreceived{YType::uint32, "cpwAtmPktsReceived"},
    cpwatmpktsrejected{YType::uint32, "cpwAtmPktsRejected"},
    cpwatmpktssent{YType::uint32, "cpwAtmPktsSent"},
    cpwatmqosscalingfactor{YType::int32, "cpwAtmQosScalingFactor"},
    cpwatmrowstatus{YType::enumeration, "cpwAtmRowStatus"},
    cpwatmvci{YType::int32, "cpwAtmVci"},
    cpwatmvpi{YType::int32, "cpwAtmVpi"}
{
    yang_name = "cpwVcAtmEntry"; yang_parent_name = "cpwVcAtmTable";
}

CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::~Cpwvcatmentry()
{
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwatmavgcellspacked.is_set
	|| cpwatmcellpacking.is_set
	|| cpwatmcellsreceived.is_set
	|| cpwatmcellsrejected.is_set
	|| cpwatmcellssent.is_set
	|| cpwatmcellstagged.is_set
	|| cpwatmclpqosmapping.is_set
	|| cpwatmencap.is_set
	|| cpwatmhccellsreceived.is_set
	|| cpwatmhccellsrejected.is_set
	|| cpwatmhccellstagged.is_set
	|| cpwatmif.is_set
	|| cpwatmmcpttimeout.is_set
	|| cpwatmmncp.is_set
	|| cpwatmoamcellsupported.is_set
	|| cpwatmpeermncp.is_set
	|| cpwatmpktsreceived.is_set
	|| cpwatmpktsrejected.is_set
	|| cpwatmpktssent.is_set
	|| cpwatmqosscalingfactor.is_set
	|| cpwatmrowstatus.is_set
	|| cpwatmvci.is_set
	|| cpwatmvpi.is_set;
}

bool CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cpwvcindex.operation)
	|| is_set(cpwatmavgcellspacked.operation)
	|| is_set(cpwatmcellpacking.operation)
	|| is_set(cpwatmcellsreceived.operation)
	|| is_set(cpwatmcellsrejected.operation)
	|| is_set(cpwatmcellssent.operation)
	|| is_set(cpwatmcellstagged.operation)
	|| is_set(cpwatmclpqosmapping.operation)
	|| is_set(cpwatmencap.operation)
	|| is_set(cpwatmhccellsreceived.operation)
	|| is_set(cpwatmhccellsrejected.operation)
	|| is_set(cpwatmhccellstagged.operation)
	|| is_set(cpwatmif.operation)
	|| is_set(cpwatmmcpttimeout.operation)
	|| is_set(cpwatmmncp.operation)
	|| is_set(cpwatmoamcellsupported.operation)
	|| is_set(cpwatmpeermncp.operation)
	|| is_set(cpwatmpktsreceived.operation)
	|| is_set(cpwatmpktsrejected.operation)
	|| is_set(cpwatmpktssent.operation)
	|| is_set(cpwatmqosscalingfactor.operation)
	|| is_set(cpwatmrowstatus.operation)
	|| is_set(cpwatmvci.operation)
	|| is_set(cpwatmvpi.operation);
}

std::string CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcAtmEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB/cpwVcAtmTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.operation)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwatmavgcellspacked.is_set || is_set(cpwatmavgcellspacked.operation)) leaf_name_data.push_back(cpwatmavgcellspacked.get_name_leafdata());
    if (cpwatmcellpacking.is_set || is_set(cpwatmcellpacking.operation)) leaf_name_data.push_back(cpwatmcellpacking.get_name_leafdata());
    if (cpwatmcellsreceived.is_set || is_set(cpwatmcellsreceived.operation)) leaf_name_data.push_back(cpwatmcellsreceived.get_name_leafdata());
    if (cpwatmcellsrejected.is_set || is_set(cpwatmcellsrejected.operation)) leaf_name_data.push_back(cpwatmcellsrejected.get_name_leafdata());
    if (cpwatmcellssent.is_set || is_set(cpwatmcellssent.operation)) leaf_name_data.push_back(cpwatmcellssent.get_name_leafdata());
    if (cpwatmcellstagged.is_set || is_set(cpwatmcellstagged.operation)) leaf_name_data.push_back(cpwatmcellstagged.get_name_leafdata());
    if (cpwatmclpqosmapping.is_set || is_set(cpwatmclpqosmapping.operation)) leaf_name_data.push_back(cpwatmclpqosmapping.get_name_leafdata());
    if (cpwatmencap.is_set || is_set(cpwatmencap.operation)) leaf_name_data.push_back(cpwatmencap.get_name_leafdata());
    if (cpwatmhccellsreceived.is_set || is_set(cpwatmhccellsreceived.operation)) leaf_name_data.push_back(cpwatmhccellsreceived.get_name_leafdata());
    if (cpwatmhccellsrejected.is_set || is_set(cpwatmhccellsrejected.operation)) leaf_name_data.push_back(cpwatmhccellsrejected.get_name_leafdata());
    if (cpwatmhccellstagged.is_set || is_set(cpwatmhccellstagged.operation)) leaf_name_data.push_back(cpwatmhccellstagged.get_name_leafdata());
    if (cpwatmif.is_set || is_set(cpwatmif.operation)) leaf_name_data.push_back(cpwatmif.get_name_leafdata());
    if (cpwatmmcpttimeout.is_set || is_set(cpwatmmcpttimeout.operation)) leaf_name_data.push_back(cpwatmmcpttimeout.get_name_leafdata());
    if (cpwatmmncp.is_set || is_set(cpwatmmncp.operation)) leaf_name_data.push_back(cpwatmmncp.get_name_leafdata());
    if (cpwatmoamcellsupported.is_set || is_set(cpwatmoamcellsupported.operation)) leaf_name_data.push_back(cpwatmoamcellsupported.get_name_leafdata());
    if (cpwatmpeermncp.is_set || is_set(cpwatmpeermncp.operation)) leaf_name_data.push_back(cpwatmpeermncp.get_name_leafdata());
    if (cpwatmpktsreceived.is_set || is_set(cpwatmpktsreceived.operation)) leaf_name_data.push_back(cpwatmpktsreceived.get_name_leafdata());
    if (cpwatmpktsrejected.is_set || is_set(cpwatmpktsrejected.operation)) leaf_name_data.push_back(cpwatmpktsrejected.get_name_leafdata());
    if (cpwatmpktssent.is_set || is_set(cpwatmpktssent.operation)) leaf_name_data.push_back(cpwatmpktssent.get_name_leafdata());
    if (cpwatmqosscalingfactor.is_set || is_set(cpwatmqosscalingfactor.operation)) leaf_name_data.push_back(cpwatmqosscalingfactor.get_name_leafdata());
    if (cpwatmrowstatus.is_set || is_set(cpwatmrowstatus.operation)) leaf_name_data.push_back(cpwatmrowstatus.get_name_leafdata());
    if (cpwatmvci.is_set || is_set(cpwatmvci.operation)) leaf_name_data.push_back(cpwatmvci.get_name_leafdata());
    if (cpwatmvpi.is_set || is_set(cpwatmvpi.operation)) leaf_name_data.push_back(cpwatmvpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
    }
    if(value_path == "cpwAtmAvgCellsPacked")
    {
        cpwatmavgcellspacked = value;
    }
    if(value_path == "cpwAtmCellPacking")
    {
        cpwatmcellpacking = value;
    }
    if(value_path == "cpwAtmCellsReceived")
    {
        cpwatmcellsreceived = value;
    }
    if(value_path == "cpwAtmCellsRejected")
    {
        cpwatmcellsrejected = value;
    }
    if(value_path == "cpwAtmCellsSent")
    {
        cpwatmcellssent = value;
    }
    if(value_path == "cpwAtmCellsTagged")
    {
        cpwatmcellstagged = value;
    }
    if(value_path == "cpwAtmClpQosMapping")
    {
        cpwatmclpqosmapping = value;
    }
    if(value_path == "cpwAtmEncap")
    {
        cpwatmencap = value;
    }
    if(value_path == "cpwAtmHCCellsReceived")
    {
        cpwatmhccellsreceived = value;
    }
    if(value_path == "cpwAtmHCCellsRejected")
    {
        cpwatmhccellsrejected = value;
    }
    if(value_path == "cpwAtmHCCellsTagged")
    {
        cpwatmhccellstagged = value;
    }
    if(value_path == "cpwAtmIf")
    {
        cpwatmif = value;
    }
    if(value_path == "cpwAtmMcptTimeout")
    {
        cpwatmmcpttimeout = value;
    }
    if(value_path == "cpwAtmMncp")
    {
        cpwatmmncp = value;
    }
    if(value_path == "cpwAtmOamCellSupported")
    {
        cpwatmoamcellsupported = value;
    }
    if(value_path == "cpwAtmPeerMncp")
    {
        cpwatmpeermncp = value;
    }
    if(value_path == "cpwAtmPktsReceived")
    {
        cpwatmpktsreceived = value;
    }
    if(value_path == "cpwAtmPktsRejected")
    {
        cpwatmpktsrejected = value;
    }
    if(value_path == "cpwAtmPktsSent")
    {
        cpwatmpktssent = value;
    }
    if(value_path == "cpwAtmQosScalingFactor")
    {
        cpwatmqosscalingfactor = value;
    }
    if(value_path == "cpwAtmRowStatus")
    {
        cpwatmrowstatus = value;
    }
    if(value_path == "cpwAtmVci")
    {
        cpwatmvci = value;
    }
    if(value_path == "cpwAtmVpi")
    {
        cpwatmvpi = value;
    }
}

const Enum::YLeaf CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::CpwatmencapEnum::mpls {1, "mpls"};
const Enum::YLeaf CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::CpwatmencapEnum::l2tpv3 {2, "l2tpv3"};
const Enum::YLeaf CiscoIetfPwAtmMib::Cpwvcatmtable::Cpwvcatmentry::CpwatmencapEnum::unknown {3, "unknown"};


}
}

