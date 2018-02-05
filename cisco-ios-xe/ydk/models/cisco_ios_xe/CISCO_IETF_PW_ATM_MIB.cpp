
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_ATM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_ATM_MIB {

CISCOIETFPWATMMIB::CISCOIETFPWATMMIB()
    :
    cpwvcatmtable(std::make_shared<CISCOIETFPWATMMIB::Cpwvcatmtable>())
{
    cpwvcatmtable->parent = this;

    yang_name = "CISCO-IETF-PW-ATM-MIB"; yang_parent_name = "CISCO-IETF-PW-ATM-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOIETFPWATMMIB::~CISCOIETFPWATMMIB()
{
}

bool CISCOIETFPWATMMIB::has_data() const
{
    return (cpwvcatmtable !=  nullptr && cpwvcatmtable->has_data());
}

bool CISCOIETFPWATMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpwvcatmtable !=  nullptr && cpwvcatmtable->has_operation());
}

std::string CISCOIETFPWATMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWATMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWATMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcAtmTable")
    {
        if(cpwvcatmtable == nullptr)
        {
            cpwvcatmtable = std::make_shared<CISCOIETFPWATMMIB::Cpwvcatmtable>();
        }
        return cpwvcatmtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWATMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpwvcatmtable != nullptr)
    {
        children["cpwVcAtmTable"] = cpwvcatmtable;
    }

    return children;
}

void CISCOIETFPWATMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWATMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFPWATMMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFPWATMMIB>();
}

std::string CISCOIETFPWATMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFPWATMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFPWATMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFPWATMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFPWATMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcAtmTable")
        return true;
    return false;
}

CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmtable()
{

    yang_name = "cpwVcAtmTable"; yang_parent_name = "CISCO-IETF-PW-ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWATMMIB::Cpwvcatmtable::~Cpwvcatmtable()
{
}

bool CISCOIETFPWATMMIB::Cpwvcatmtable::has_data() const
{
    for (std::size_t index=0; index<cpwvcatmentry.size(); index++)
    {
        if(cpwvcatmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWATMMIB::Cpwvcatmtable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcatmentry.size(); index++)
    {
        if(cpwvcatmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWATMMIB::Cpwvcatmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWATMMIB::Cpwvcatmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcAtmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWATMMIB::Cpwvcatmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWATMMIB::Cpwvcatmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcAtmEntry")
    {
        auto c = std::make_shared<CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry>();
        c->parent = this;
        cpwvcatmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWATMMIB::Cpwvcatmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpwvcatmentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFPWATMMIB::Cpwvcatmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWATMMIB::Cpwvcatmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWATMMIB::Cpwvcatmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcAtmEntry")
        return true;
    return false;
}

CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::Cpwvcatmentry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwatmif{YType::int32, "cpwAtmIf"},
    cpwatmvpi{YType::int32, "cpwAtmVpi"},
    cpwatmvci{YType::int32, "cpwAtmVci"},
    cpwatmclpqosmapping{YType::boolean, "cpwAtmClpQosMapping"},
    cpwatmrowstatus{YType::enumeration, "cpwAtmRowStatus"},
    cpwatmoamcellsupported{YType::boolean, "cpwAtmOamCellSupported"},
    cpwatmqosscalingfactor{YType::int32, "cpwAtmQosScalingFactor"},
    cpwatmcellpacking{YType::boolean, "cpwAtmCellPacking"},
    cpwatmmncp{YType::int32, "cpwAtmMncp"},
    cpwatmpeermncp{YType::int32, "cpwAtmPeerMncp"},
    cpwatmencap{YType::enumeration, "cpwAtmEncap"},
    cpwatmmcpttimeout{YType::int32, "cpwAtmMcptTimeout"},
    cpwatmcellsreceived{YType::uint32, "cpwAtmCellsReceived"},
    cpwatmcellssent{YType::uint32, "cpwAtmCellsSent"},
    cpwatmcellsrejected{YType::uint32, "cpwAtmCellsRejected"},
    cpwatmcellstagged{YType::uint32, "cpwAtmCellsTagged"},
    cpwatmhccellsreceived{YType::uint64, "cpwAtmHCCellsReceived"},
    cpwatmhccellsrejected{YType::uint64, "cpwAtmHCCellsRejected"},
    cpwatmhccellstagged{YType::uint64, "cpwAtmHCCellsTagged"},
    cpwatmavgcellspacked{YType::uint32, "cpwAtmAvgCellsPacked"},
    cpwatmpktsreceived{YType::uint32, "cpwAtmPktsReceived"},
    cpwatmpktssent{YType::uint32, "cpwAtmPktsSent"},
    cpwatmpktsrejected{YType::uint32, "cpwAtmPktsRejected"}
{

    yang_name = "cpwVcAtmEntry"; yang_parent_name = "cpwVcAtmTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::~Cpwvcatmentry()
{
}

bool CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::has_data() const
{
    return cpwvcindex.is_set
	|| cpwatmif.is_set
	|| cpwatmvpi.is_set
	|| cpwatmvci.is_set
	|| cpwatmclpqosmapping.is_set
	|| cpwatmrowstatus.is_set
	|| cpwatmoamcellsupported.is_set
	|| cpwatmqosscalingfactor.is_set
	|| cpwatmcellpacking.is_set
	|| cpwatmmncp.is_set
	|| cpwatmpeermncp.is_set
	|| cpwatmencap.is_set
	|| cpwatmmcpttimeout.is_set
	|| cpwatmcellsreceived.is_set
	|| cpwatmcellssent.is_set
	|| cpwatmcellsrejected.is_set
	|| cpwatmcellstagged.is_set
	|| cpwatmhccellsreceived.is_set
	|| cpwatmhccellsrejected.is_set
	|| cpwatmhccellstagged.is_set
	|| cpwatmavgcellspacked.is_set
	|| cpwatmpktsreceived.is_set
	|| cpwatmpktssent.is_set
	|| cpwatmpktsrejected.is_set;
}

bool CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwatmif.yfilter)
	|| ydk::is_set(cpwatmvpi.yfilter)
	|| ydk::is_set(cpwatmvci.yfilter)
	|| ydk::is_set(cpwatmclpqosmapping.yfilter)
	|| ydk::is_set(cpwatmrowstatus.yfilter)
	|| ydk::is_set(cpwatmoamcellsupported.yfilter)
	|| ydk::is_set(cpwatmqosscalingfactor.yfilter)
	|| ydk::is_set(cpwatmcellpacking.yfilter)
	|| ydk::is_set(cpwatmmncp.yfilter)
	|| ydk::is_set(cpwatmpeermncp.yfilter)
	|| ydk::is_set(cpwatmencap.yfilter)
	|| ydk::is_set(cpwatmmcpttimeout.yfilter)
	|| ydk::is_set(cpwatmcellsreceived.yfilter)
	|| ydk::is_set(cpwatmcellssent.yfilter)
	|| ydk::is_set(cpwatmcellsrejected.yfilter)
	|| ydk::is_set(cpwatmcellstagged.yfilter)
	|| ydk::is_set(cpwatmhccellsreceived.yfilter)
	|| ydk::is_set(cpwatmhccellsrejected.yfilter)
	|| ydk::is_set(cpwatmhccellstagged.yfilter)
	|| ydk::is_set(cpwatmavgcellspacked.yfilter)
	|| ydk::is_set(cpwatmpktsreceived.yfilter)
	|| ydk::is_set(cpwatmpktssent.yfilter)
	|| ydk::is_set(cpwatmpktsrejected.yfilter);
}

std::string CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-ATM-MIB:CISCO-IETF-PW-ATM-MIB/cpwVcAtmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcAtmEntry" <<"[cpwVcIndex='" <<cpwvcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwatmif.is_set || is_set(cpwatmif.yfilter)) leaf_name_data.push_back(cpwatmif.get_name_leafdata());
    if (cpwatmvpi.is_set || is_set(cpwatmvpi.yfilter)) leaf_name_data.push_back(cpwatmvpi.get_name_leafdata());
    if (cpwatmvci.is_set || is_set(cpwatmvci.yfilter)) leaf_name_data.push_back(cpwatmvci.get_name_leafdata());
    if (cpwatmclpqosmapping.is_set || is_set(cpwatmclpqosmapping.yfilter)) leaf_name_data.push_back(cpwatmclpqosmapping.get_name_leafdata());
    if (cpwatmrowstatus.is_set || is_set(cpwatmrowstatus.yfilter)) leaf_name_data.push_back(cpwatmrowstatus.get_name_leafdata());
    if (cpwatmoamcellsupported.is_set || is_set(cpwatmoamcellsupported.yfilter)) leaf_name_data.push_back(cpwatmoamcellsupported.get_name_leafdata());
    if (cpwatmqosscalingfactor.is_set || is_set(cpwatmqosscalingfactor.yfilter)) leaf_name_data.push_back(cpwatmqosscalingfactor.get_name_leafdata());
    if (cpwatmcellpacking.is_set || is_set(cpwatmcellpacking.yfilter)) leaf_name_data.push_back(cpwatmcellpacking.get_name_leafdata());
    if (cpwatmmncp.is_set || is_set(cpwatmmncp.yfilter)) leaf_name_data.push_back(cpwatmmncp.get_name_leafdata());
    if (cpwatmpeermncp.is_set || is_set(cpwatmpeermncp.yfilter)) leaf_name_data.push_back(cpwatmpeermncp.get_name_leafdata());
    if (cpwatmencap.is_set || is_set(cpwatmencap.yfilter)) leaf_name_data.push_back(cpwatmencap.get_name_leafdata());
    if (cpwatmmcpttimeout.is_set || is_set(cpwatmmcpttimeout.yfilter)) leaf_name_data.push_back(cpwatmmcpttimeout.get_name_leafdata());
    if (cpwatmcellsreceived.is_set || is_set(cpwatmcellsreceived.yfilter)) leaf_name_data.push_back(cpwatmcellsreceived.get_name_leafdata());
    if (cpwatmcellssent.is_set || is_set(cpwatmcellssent.yfilter)) leaf_name_data.push_back(cpwatmcellssent.get_name_leafdata());
    if (cpwatmcellsrejected.is_set || is_set(cpwatmcellsrejected.yfilter)) leaf_name_data.push_back(cpwatmcellsrejected.get_name_leafdata());
    if (cpwatmcellstagged.is_set || is_set(cpwatmcellstagged.yfilter)) leaf_name_data.push_back(cpwatmcellstagged.get_name_leafdata());
    if (cpwatmhccellsreceived.is_set || is_set(cpwatmhccellsreceived.yfilter)) leaf_name_data.push_back(cpwatmhccellsreceived.get_name_leafdata());
    if (cpwatmhccellsrejected.is_set || is_set(cpwatmhccellsrejected.yfilter)) leaf_name_data.push_back(cpwatmhccellsrejected.get_name_leafdata());
    if (cpwatmhccellstagged.is_set || is_set(cpwatmhccellstagged.yfilter)) leaf_name_data.push_back(cpwatmhccellstagged.get_name_leafdata());
    if (cpwatmavgcellspacked.is_set || is_set(cpwatmavgcellspacked.yfilter)) leaf_name_data.push_back(cpwatmavgcellspacked.get_name_leafdata());
    if (cpwatmpktsreceived.is_set || is_set(cpwatmpktsreceived.yfilter)) leaf_name_data.push_back(cpwatmpktsreceived.get_name_leafdata());
    if (cpwatmpktssent.is_set || is_set(cpwatmpktssent.yfilter)) leaf_name_data.push_back(cpwatmpktssent.get_name_leafdata());
    if (cpwatmpktsrejected.is_set || is_set(cpwatmpktsrejected.yfilter)) leaf_name_data.push_back(cpwatmpktsrejected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmIf")
    {
        cpwatmif = value;
        cpwatmif.value_namespace = name_space;
        cpwatmif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmVpi")
    {
        cpwatmvpi = value;
        cpwatmvpi.value_namespace = name_space;
        cpwatmvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmVci")
    {
        cpwatmvci = value;
        cpwatmvci.value_namespace = name_space;
        cpwatmvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmClpQosMapping")
    {
        cpwatmclpqosmapping = value;
        cpwatmclpqosmapping.value_namespace = name_space;
        cpwatmclpqosmapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmRowStatus")
    {
        cpwatmrowstatus = value;
        cpwatmrowstatus.value_namespace = name_space;
        cpwatmrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmOamCellSupported")
    {
        cpwatmoamcellsupported = value;
        cpwatmoamcellsupported.value_namespace = name_space;
        cpwatmoamcellsupported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmQosScalingFactor")
    {
        cpwatmqosscalingfactor = value;
        cpwatmqosscalingfactor.value_namespace = name_space;
        cpwatmqosscalingfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellPacking")
    {
        cpwatmcellpacking = value;
        cpwatmcellpacking.value_namespace = name_space;
        cpwatmcellpacking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmMncp")
    {
        cpwatmmncp = value;
        cpwatmmncp.value_namespace = name_space;
        cpwatmmncp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPeerMncp")
    {
        cpwatmpeermncp = value;
        cpwatmpeermncp.value_namespace = name_space;
        cpwatmpeermncp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmEncap")
    {
        cpwatmencap = value;
        cpwatmencap.value_namespace = name_space;
        cpwatmencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmMcptTimeout")
    {
        cpwatmmcpttimeout = value;
        cpwatmmcpttimeout.value_namespace = name_space;
        cpwatmmcpttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsReceived")
    {
        cpwatmcellsreceived = value;
        cpwatmcellsreceived.value_namespace = name_space;
        cpwatmcellsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsSent")
    {
        cpwatmcellssent = value;
        cpwatmcellssent.value_namespace = name_space;
        cpwatmcellssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsRejected")
    {
        cpwatmcellsrejected = value;
        cpwatmcellsrejected.value_namespace = name_space;
        cpwatmcellsrejected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmCellsTagged")
    {
        cpwatmcellstagged = value;
        cpwatmcellstagged.value_namespace = name_space;
        cpwatmcellstagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmHCCellsReceived")
    {
        cpwatmhccellsreceived = value;
        cpwatmhccellsreceived.value_namespace = name_space;
        cpwatmhccellsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmHCCellsRejected")
    {
        cpwatmhccellsrejected = value;
        cpwatmhccellsrejected.value_namespace = name_space;
        cpwatmhccellsrejected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmHCCellsTagged")
    {
        cpwatmhccellstagged = value;
        cpwatmhccellstagged.value_namespace = name_space;
        cpwatmhccellstagged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmAvgCellsPacked")
    {
        cpwatmavgcellspacked = value;
        cpwatmavgcellspacked.value_namespace = name_space;
        cpwatmavgcellspacked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPktsReceived")
    {
        cpwatmpktsreceived = value;
        cpwatmpktsreceived.value_namespace = name_space;
        cpwatmpktsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPktsSent")
    {
        cpwatmpktssent = value;
        cpwatmpktssent.value_namespace = name_space;
        cpwatmpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwAtmPktsRejected")
    {
        cpwatmpktsrejected = value;
        cpwatmpktsrejected.value_namespace = name_space;
        cpwatmpktsrejected.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwAtmIf")
    {
        cpwatmif.yfilter = yfilter;
    }
    if(value_path == "cpwAtmVpi")
    {
        cpwatmvpi.yfilter = yfilter;
    }
    if(value_path == "cpwAtmVci")
    {
        cpwatmvci.yfilter = yfilter;
    }
    if(value_path == "cpwAtmClpQosMapping")
    {
        cpwatmclpqosmapping.yfilter = yfilter;
    }
    if(value_path == "cpwAtmRowStatus")
    {
        cpwatmrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwAtmOamCellSupported")
    {
        cpwatmoamcellsupported.yfilter = yfilter;
    }
    if(value_path == "cpwAtmQosScalingFactor")
    {
        cpwatmqosscalingfactor.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellPacking")
    {
        cpwatmcellpacking.yfilter = yfilter;
    }
    if(value_path == "cpwAtmMncp")
    {
        cpwatmmncp.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPeerMncp")
    {
        cpwatmpeermncp.yfilter = yfilter;
    }
    if(value_path == "cpwAtmEncap")
    {
        cpwatmencap.yfilter = yfilter;
    }
    if(value_path == "cpwAtmMcptTimeout")
    {
        cpwatmmcpttimeout.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsReceived")
    {
        cpwatmcellsreceived.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsSent")
    {
        cpwatmcellssent.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsRejected")
    {
        cpwatmcellsrejected.yfilter = yfilter;
    }
    if(value_path == "cpwAtmCellsTagged")
    {
        cpwatmcellstagged.yfilter = yfilter;
    }
    if(value_path == "cpwAtmHCCellsReceived")
    {
        cpwatmhccellsreceived.yfilter = yfilter;
    }
    if(value_path == "cpwAtmHCCellsRejected")
    {
        cpwatmhccellsrejected.yfilter = yfilter;
    }
    if(value_path == "cpwAtmHCCellsTagged")
    {
        cpwatmhccellstagged.yfilter = yfilter;
    }
    if(value_path == "cpwAtmAvgCellsPacked")
    {
        cpwatmavgcellspacked.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPktsReceived")
    {
        cpwatmpktsreceived.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPktsSent")
    {
        cpwatmpktssent.yfilter = yfilter;
    }
    if(value_path == "cpwAtmPktsRejected")
    {
        cpwatmpktsrejected.yfilter = yfilter;
    }
}

bool CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwAtmIf" || name == "cpwAtmVpi" || name == "cpwAtmVci" || name == "cpwAtmClpQosMapping" || name == "cpwAtmRowStatus" || name == "cpwAtmOamCellSupported" || name == "cpwAtmQosScalingFactor" || name == "cpwAtmCellPacking" || name == "cpwAtmMncp" || name == "cpwAtmPeerMncp" || name == "cpwAtmEncap" || name == "cpwAtmMcptTimeout" || name == "cpwAtmCellsReceived" || name == "cpwAtmCellsSent" || name == "cpwAtmCellsRejected" || name == "cpwAtmCellsTagged" || name == "cpwAtmHCCellsReceived" || name == "cpwAtmHCCellsRejected" || name == "cpwAtmHCCellsTagged" || name == "cpwAtmAvgCellsPacked" || name == "cpwAtmPktsReceived" || name == "cpwAtmPktsSent" || name == "cpwAtmPktsRejected")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::Cpwatmencap::mpls {1, "mpls"};
const Enum::YLeaf CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::Cpwatmencap::l2tpv3 {2, "l2tpv3"};
const Enum::YLeaf CISCOIETFPWATMMIB::Cpwvcatmtable::Cpwvcatmentry::Cpwatmencap::unknown {3, "unknown"};


}
}

