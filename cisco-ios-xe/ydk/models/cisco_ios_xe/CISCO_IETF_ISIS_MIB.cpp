
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_ISIS_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_ISIS_MIB {

CiscoIetfIsisMib::CiscoIetfIsisMib()
    :
    ciiareaaddrtable(std::make_shared<CiscoIetfIsisMib::Ciiareaaddrtable>())
	,ciicirc(std::make_shared<CiscoIetfIsisMib::Ciicirc>())
	,ciicircleveltable(std::make_shared<CiscoIetfIsisMib::Ciicircleveltable>())
	,ciicirctable(std::make_shared<CiscoIetfIsisMib::Ciicirctable>())
	,ciicircuitcountertable(std::make_shared<CiscoIetfIsisMib::Ciicircuitcountertable>())
	,ciiipratable(std::make_shared<CiscoIetfIsisMib::Ciiipratable>())
	,ciiisadjareaaddrtable(std::make_shared<CiscoIetfIsisMib::Ciiisadjareaaddrtable>())
	,ciiisadjipaddrtable(std::make_shared<CiscoIetfIsisMib::Ciiisadjipaddrtable>())
	,ciiisadjprotsupptable(std::make_shared<CiscoIetfIsisMib::Ciiisadjprotsupptable>())
	,ciiisadjtable(std::make_shared<CiscoIetfIsisMib::Ciiisadjtable>())
	,ciilspsummarytable(std::make_shared<CiscoIetfIsisMib::Ciilspsummarytable>())
	,ciilsptlvtable(std::make_shared<CiscoIetfIsisMib::Ciilsptlvtable>())
	,ciimanareaaddrtable(std::make_shared<CiscoIetfIsisMib::Ciimanareaaddrtable>())
	,ciipacketcountertable(std::make_shared<CiscoIetfIsisMib::Ciipacketcountertable>())
	,ciiratable(std::make_shared<CiscoIetfIsisMib::Ciiratable>())
	,ciiredistributeaddrtable(std::make_shared<CiscoIetfIsisMib::Ciiredistributeaddrtable>())
	,ciiroutertable(std::make_shared<CiscoIetfIsisMib::Ciiroutertable>())
	,ciisummaddrtable(std::make_shared<CiscoIetfIsisMib::Ciisummaddrtable>())
	,ciisysleveltable(std::make_shared<CiscoIetfIsisMib::Ciisysleveltable>())
	,ciisysobject(std::make_shared<CiscoIetfIsisMib::Ciisysobject>())
	,ciisysprotsupptable(std::make_shared<CiscoIetfIsisMib::Ciisysprotsupptable>())
	,ciisystemcountertable(std::make_shared<CiscoIetfIsisMib::Ciisystemcountertable>())
{
    ciiareaaddrtable->parent = this;

    ciicirc->parent = this;

    ciicircleveltable->parent = this;

    ciicirctable->parent = this;

    ciicircuitcountertable->parent = this;

    ciiipratable->parent = this;

    ciiisadjareaaddrtable->parent = this;

    ciiisadjipaddrtable->parent = this;

    ciiisadjprotsupptable->parent = this;

    ciiisadjtable->parent = this;

    ciilspsummarytable->parent = this;

    ciilsptlvtable->parent = this;

    ciimanareaaddrtable->parent = this;

    ciipacketcountertable->parent = this;

    ciiratable->parent = this;

    ciiredistributeaddrtable->parent = this;

    ciiroutertable->parent = this;

    ciisummaddrtable->parent = this;

    ciisysleveltable->parent = this;

    ciisysobject->parent = this;

    ciisysprotsupptable->parent = this;

    ciisystemcountertable->parent = this;

    yang_name = "CISCO-IETF-ISIS-MIB"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::~CiscoIetfIsisMib()
{
}

bool CiscoIetfIsisMib::has_data() const
{
    return (ciiareaaddrtable !=  nullptr && ciiareaaddrtable->has_data())
	|| (ciicirc !=  nullptr && ciicirc->has_data())
	|| (ciicircleveltable !=  nullptr && ciicircleveltable->has_data())
	|| (ciicirctable !=  nullptr && ciicirctable->has_data())
	|| (ciicircuitcountertable !=  nullptr && ciicircuitcountertable->has_data())
	|| (ciiipratable !=  nullptr && ciiipratable->has_data())
	|| (ciiisadjareaaddrtable !=  nullptr && ciiisadjareaaddrtable->has_data())
	|| (ciiisadjipaddrtable !=  nullptr && ciiisadjipaddrtable->has_data())
	|| (ciiisadjprotsupptable !=  nullptr && ciiisadjprotsupptable->has_data())
	|| (ciiisadjtable !=  nullptr && ciiisadjtable->has_data())
	|| (ciilspsummarytable !=  nullptr && ciilspsummarytable->has_data())
	|| (ciilsptlvtable !=  nullptr && ciilsptlvtable->has_data())
	|| (ciimanareaaddrtable !=  nullptr && ciimanareaaddrtable->has_data())
	|| (ciipacketcountertable !=  nullptr && ciipacketcountertable->has_data())
	|| (ciiratable !=  nullptr && ciiratable->has_data())
	|| (ciiredistributeaddrtable !=  nullptr && ciiredistributeaddrtable->has_data())
	|| (ciiroutertable !=  nullptr && ciiroutertable->has_data())
	|| (ciisummaddrtable !=  nullptr && ciisummaddrtable->has_data())
	|| (ciisysleveltable !=  nullptr && ciisysleveltable->has_data())
	|| (ciisysobject !=  nullptr && ciisysobject->has_data())
	|| (ciisysprotsupptable !=  nullptr && ciisysprotsupptable->has_data())
	|| (ciisystemcountertable !=  nullptr && ciisystemcountertable->has_data());
}

bool CiscoIetfIsisMib::has_operation() const
{
    return is_set(operation)
	|| (ciiareaaddrtable !=  nullptr && ciiareaaddrtable->has_operation())
	|| (ciicirc !=  nullptr && ciicirc->has_operation())
	|| (ciicircleveltable !=  nullptr && ciicircleveltable->has_operation())
	|| (ciicirctable !=  nullptr && ciicirctable->has_operation())
	|| (ciicircuitcountertable !=  nullptr && ciicircuitcountertable->has_operation())
	|| (ciiipratable !=  nullptr && ciiipratable->has_operation())
	|| (ciiisadjareaaddrtable !=  nullptr && ciiisadjareaaddrtable->has_operation())
	|| (ciiisadjipaddrtable !=  nullptr && ciiisadjipaddrtable->has_operation())
	|| (ciiisadjprotsupptable !=  nullptr && ciiisadjprotsupptable->has_operation())
	|| (ciiisadjtable !=  nullptr && ciiisadjtable->has_operation())
	|| (ciilspsummarytable !=  nullptr && ciilspsummarytable->has_operation())
	|| (ciilsptlvtable !=  nullptr && ciilsptlvtable->has_operation())
	|| (ciimanareaaddrtable !=  nullptr && ciimanareaaddrtable->has_operation())
	|| (ciipacketcountertable !=  nullptr && ciipacketcountertable->has_operation())
	|| (ciiratable !=  nullptr && ciiratable->has_operation())
	|| (ciiredistributeaddrtable !=  nullptr && ciiredistributeaddrtable->has_operation())
	|| (ciiroutertable !=  nullptr && ciiroutertable->has_operation())
	|| (ciisummaddrtable !=  nullptr && ciisummaddrtable->has_operation())
	|| (ciisysleveltable !=  nullptr && ciisysleveltable->has_operation())
	|| (ciisysobject !=  nullptr && ciisysobject->has_operation())
	|| (ciisysprotsupptable !=  nullptr && ciisysprotsupptable->has_operation())
	|| (ciisystemcountertable !=  nullptr && ciisystemcountertable->has_operation());
}

std::string CiscoIetfIsisMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfIsisMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiAreaAddrTable")
    {
        if(ciiareaaddrtable == nullptr)
        {
            ciiareaaddrtable = std::make_shared<CiscoIetfIsisMib::Ciiareaaddrtable>();
        }
        return ciiareaaddrtable;
    }

    if(child_yang_name == "ciiCirc")
    {
        if(ciicirc == nullptr)
        {
            ciicirc = std::make_shared<CiscoIetfIsisMib::Ciicirc>();
        }
        return ciicirc;
    }

    if(child_yang_name == "ciiCircLevelTable")
    {
        if(ciicircleveltable == nullptr)
        {
            ciicircleveltable = std::make_shared<CiscoIetfIsisMib::Ciicircleveltable>();
        }
        return ciicircleveltable;
    }

    if(child_yang_name == "ciiCircTable")
    {
        if(ciicirctable == nullptr)
        {
            ciicirctable = std::make_shared<CiscoIetfIsisMib::Ciicirctable>();
        }
        return ciicirctable;
    }

    if(child_yang_name == "ciiCircuitCounterTable")
    {
        if(ciicircuitcountertable == nullptr)
        {
            ciicircuitcountertable = std::make_shared<CiscoIetfIsisMib::Ciicircuitcountertable>();
        }
        return ciicircuitcountertable;
    }

    if(child_yang_name == "ciiIPRATable")
    {
        if(ciiipratable == nullptr)
        {
            ciiipratable = std::make_shared<CiscoIetfIsisMib::Ciiipratable>();
        }
        return ciiipratable;
    }

    if(child_yang_name == "ciiISAdjAreaAddrTable")
    {
        if(ciiisadjareaaddrtable == nullptr)
        {
            ciiisadjareaaddrtable = std::make_shared<CiscoIetfIsisMib::Ciiisadjareaaddrtable>();
        }
        return ciiisadjareaaddrtable;
    }

    if(child_yang_name == "ciiISAdjIPAddrTable")
    {
        if(ciiisadjipaddrtable == nullptr)
        {
            ciiisadjipaddrtable = std::make_shared<CiscoIetfIsisMib::Ciiisadjipaddrtable>();
        }
        return ciiisadjipaddrtable;
    }

    if(child_yang_name == "ciiISAdjProtSuppTable")
    {
        if(ciiisadjprotsupptable == nullptr)
        {
            ciiisadjprotsupptable = std::make_shared<CiscoIetfIsisMib::Ciiisadjprotsupptable>();
        }
        return ciiisadjprotsupptable;
    }

    if(child_yang_name == "ciiISAdjTable")
    {
        if(ciiisadjtable == nullptr)
        {
            ciiisadjtable = std::make_shared<CiscoIetfIsisMib::Ciiisadjtable>();
        }
        return ciiisadjtable;
    }

    if(child_yang_name == "ciiLSPSummaryTable")
    {
        if(ciilspsummarytable == nullptr)
        {
            ciilspsummarytable = std::make_shared<CiscoIetfIsisMib::Ciilspsummarytable>();
        }
        return ciilspsummarytable;
    }

    if(child_yang_name == "ciiLSPTLVTable")
    {
        if(ciilsptlvtable == nullptr)
        {
            ciilsptlvtable = std::make_shared<CiscoIetfIsisMib::Ciilsptlvtable>();
        }
        return ciilsptlvtable;
    }

    if(child_yang_name == "ciiManAreaAddrTable")
    {
        if(ciimanareaaddrtable == nullptr)
        {
            ciimanareaaddrtable = std::make_shared<CiscoIetfIsisMib::Ciimanareaaddrtable>();
        }
        return ciimanareaaddrtable;
    }

    if(child_yang_name == "ciiPacketCounterTable")
    {
        if(ciipacketcountertable == nullptr)
        {
            ciipacketcountertable = std::make_shared<CiscoIetfIsisMib::Ciipacketcountertable>();
        }
        return ciipacketcountertable;
    }

    if(child_yang_name == "ciiRATable")
    {
        if(ciiratable == nullptr)
        {
            ciiratable = std::make_shared<CiscoIetfIsisMib::Ciiratable>();
        }
        return ciiratable;
    }

    if(child_yang_name == "ciiRedistributeAddrTable")
    {
        if(ciiredistributeaddrtable == nullptr)
        {
            ciiredistributeaddrtable = std::make_shared<CiscoIetfIsisMib::Ciiredistributeaddrtable>();
        }
        return ciiredistributeaddrtable;
    }

    if(child_yang_name == "ciiRouterTable")
    {
        if(ciiroutertable == nullptr)
        {
            ciiroutertable = std::make_shared<CiscoIetfIsisMib::Ciiroutertable>();
        }
        return ciiroutertable;
    }

    if(child_yang_name == "ciiSummAddrTable")
    {
        if(ciisummaddrtable == nullptr)
        {
            ciisummaddrtable = std::make_shared<CiscoIetfIsisMib::Ciisummaddrtable>();
        }
        return ciisummaddrtable;
    }

    if(child_yang_name == "ciiSysLevelTable")
    {
        if(ciisysleveltable == nullptr)
        {
            ciisysleveltable = std::make_shared<CiscoIetfIsisMib::Ciisysleveltable>();
        }
        return ciisysleveltable;
    }

    if(child_yang_name == "ciiSysObject")
    {
        if(ciisysobject == nullptr)
        {
            ciisysobject = std::make_shared<CiscoIetfIsisMib::Ciisysobject>();
        }
        return ciisysobject;
    }

    if(child_yang_name == "ciiSysProtSuppTable")
    {
        if(ciisysprotsupptable == nullptr)
        {
            ciisysprotsupptable = std::make_shared<CiscoIetfIsisMib::Ciisysprotsupptable>();
        }
        return ciisysprotsupptable;
    }

    if(child_yang_name == "ciiSystemCounterTable")
    {
        if(ciisystemcountertable == nullptr)
        {
            ciisystemcountertable = std::make_shared<CiscoIetfIsisMib::Ciisystemcountertable>();
        }
        return ciisystemcountertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciiareaaddrtable != nullptr)
    {
        children["ciiAreaAddrTable"] = ciiareaaddrtable;
    }

    if(ciicirc != nullptr)
    {
        children["ciiCirc"] = ciicirc;
    }

    if(ciicircleveltable != nullptr)
    {
        children["ciiCircLevelTable"] = ciicircleveltable;
    }

    if(ciicirctable != nullptr)
    {
        children["ciiCircTable"] = ciicirctable;
    }

    if(ciicircuitcountertable != nullptr)
    {
        children["ciiCircuitCounterTable"] = ciicircuitcountertable;
    }

    if(ciiipratable != nullptr)
    {
        children["ciiIPRATable"] = ciiipratable;
    }

    if(ciiisadjareaaddrtable != nullptr)
    {
        children["ciiISAdjAreaAddrTable"] = ciiisadjareaaddrtable;
    }

    if(ciiisadjipaddrtable != nullptr)
    {
        children["ciiISAdjIPAddrTable"] = ciiisadjipaddrtable;
    }

    if(ciiisadjprotsupptable != nullptr)
    {
        children["ciiISAdjProtSuppTable"] = ciiisadjprotsupptable;
    }

    if(ciiisadjtable != nullptr)
    {
        children["ciiISAdjTable"] = ciiisadjtable;
    }

    if(ciilspsummarytable != nullptr)
    {
        children["ciiLSPSummaryTable"] = ciilspsummarytable;
    }

    if(ciilsptlvtable != nullptr)
    {
        children["ciiLSPTLVTable"] = ciilsptlvtable;
    }

    if(ciimanareaaddrtable != nullptr)
    {
        children["ciiManAreaAddrTable"] = ciimanareaaddrtable;
    }

    if(ciipacketcountertable != nullptr)
    {
        children["ciiPacketCounterTable"] = ciipacketcountertable;
    }

    if(ciiratable != nullptr)
    {
        children["ciiRATable"] = ciiratable;
    }

    if(ciiredistributeaddrtable != nullptr)
    {
        children["ciiRedistributeAddrTable"] = ciiredistributeaddrtable;
    }

    if(ciiroutertable != nullptr)
    {
        children["ciiRouterTable"] = ciiroutertable;
    }

    if(ciisummaddrtable != nullptr)
    {
        children["ciiSummAddrTable"] = ciisummaddrtable;
    }

    if(ciisysleveltable != nullptr)
    {
        children["ciiSysLevelTable"] = ciisysleveltable;
    }

    if(ciisysobject != nullptr)
    {
        children["ciiSysObject"] = ciisysobject;
    }

    if(ciisysprotsupptable != nullptr)
    {
        children["ciiSysProtSuppTable"] = ciisysprotsupptable;
    }

    if(ciisystemcountertable != nullptr)
    {
        children["ciiSystemCounterTable"] = ciisystemcountertable;
    }

    return children;
}

void CiscoIetfIsisMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfIsisMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfIsisMib>();
}

std::string CiscoIetfIsisMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfIsisMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfIsisMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfIsisMib::Ciisysobject::Ciisysobject()
    :
    ciisysadminstate{YType::enumeration, "ciiSysAdminState"},
    ciisysid{YType::str, "ciiSysID"},
    ciisysl2tol1leaking{YType::boolean, "ciiSysL2toL1Leaking"},
    ciisysmaxage{YType::uint32, "ciiSysMaxAge"},
    ciisysmaxlspgenint{YType::int32, "ciiSysMaxLSPGenInt"},
    ciisysmaxpathsplits{YType::int32, "ciiSysMaxPathSplits"},
    ciisyspolleshellorate{YType::uint32, "ciiSysPollESHelloRate"},
    ciisysreceivelspbuffersize{YType::uint32, "ciiSysReceiveLSPBufferSize"},
    ciisystype{YType::enumeration, "ciiSysType"},
    ciisysversion{YType::enumeration, "ciiSysVersion"},
    ciisyswaittime{YType::uint32, "ciiSysWaitTime"}
{
    yang_name = "ciiSysObject"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciisysobject::~Ciisysobject()
{
}

bool CiscoIetfIsisMib::Ciisysobject::has_data() const
{
    return ciisysadminstate.is_set
	|| ciisysid.is_set
	|| ciisysl2tol1leaking.is_set
	|| ciisysmaxage.is_set
	|| ciisysmaxlspgenint.is_set
	|| ciisysmaxpathsplits.is_set
	|| ciisyspolleshellorate.is_set
	|| ciisysreceivelspbuffersize.is_set
	|| ciisystype.is_set
	|| ciisysversion.is_set
	|| ciisyswaittime.is_set;
}

bool CiscoIetfIsisMib::Ciisysobject::has_operation() const
{
    return is_set(operation)
	|| is_set(ciisysadminstate.operation)
	|| is_set(ciisysid.operation)
	|| is_set(ciisysl2tol1leaking.operation)
	|| is_set(ciisysmaxage.operation)
	|| is_set(ciisysmaxlspgenint.operation)
	|| is_set(ciisysmaxpathsplits.operation)
	|| is_set(ciisyspolleshellorate.operation)
	|| is_set(ciisysreceivelspbuffersize.operation)
	|| is_set(ciisystype.operation)
	|| is_set(ciisysversion.operation)
	|| is_set(ciisyswaittime.operation);
}

std::string CiscoIetfIsisMib::Ciisysobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysObject";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisysobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisysadminstate.is_set || is_set(ciisysadminstate.operation)) leaf_name_data.push_back(ciisysadminstate.get_name_leafdata());
    if (ciisysid.is_set || is_set(ciisysid.operation)) leaf_name_data.push_back(ciisysid.get_name_leafdata());
    if (ciisysl2tol1leaking.is_set || is_set(ciisysl2tol1leaking.operation)) leaf_name_data.push_back(ciisysl2tol1leaking.get_name_leafdata());
    if (ciisysmaxage.is_set || is_set(ciisysmaxage.operation)) leaf_name_data.push_back(ciisysmaxage.get_name_leafdata());
    if (ciisysmaxlspgenint.is_set || is_set(ciisysmaxlspgenint.operation)) leaf_name_data.push_back(ciisysmaxlspgenint.get_name_leafdata());
    if (ciisysmaxpathsplits.is_set || is_set(ciisysmaxpathsplits.operation)) leaf_name_data.push_back(ciisysmaxpathsplits.get_name_leafdata());
    if (ciisyspolleshellorate.is_set || is_set(ciisyspolleshellorate.operation)) leaf_name_data.push_back(ciisyspolleshellorate.get_name_leafdata());
    if (ciisysreceivelspbuffersize.is_set || is_set(ciisysreceivelspbuffersize.operation)) leaf_name_data.push_back(ciisysreceivelspbuffersize.get_name_leafdata());
    if (ciisystype.is_set || is_set(ciisystype.operation)) leaf_name_data.push_back(ciisystype.get_name_leafdata());
    if (ciisysversion.is_set || is_set(ciisysversion.operation)) leaf_name_data.push_back(ciisysversion.get_name_leafdata());
    if (ciisyswaittime.is_set || is_set(ciisyswaittime.operation)) leaf_name_data.push_back(ciisyswaittime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisysobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisysobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciisysobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiSysAdminState")
    {
        ciisysadminstate = value;
    }
    if(value_path == "ciiSysID")
    {
        ciisysid = value;
    }
    if(value_path == "ciiSysL2toL1Leaking")
    {
        ciisysl2tol1leaking = value;
    }
    if(value_path == "ciiSysMaxAge")
    {
        ciisysmaxage = value;
    }
    if(value_path == "ciiSysMaxLSPGenInt")
    {
        ciisysmaxlspgenint = value;
    }
    if(value_path == "ciiSysMaxPathSplits")
    {
        ciisysmaxpathsplits = value;
    }
    if(value_path == "ciiSysPollESHelloRate")
    {
        ciisyspolleshellorate = value;
    }
    if(value_path == "ciiSysReceiveLSPBufferSize")
    {
        ciisysreceivelspbuffersize = value;
    }
    if(value_path == "ciiSysType")
    {
        ciisystype = value;
    }
    if(value_path == "ciiSysVersion")
    {
        ciisysversion = value;
    }
    if(value_path == "ciiSysWaitTime")
    {
        ciisyswaittime = value;
    }
}

CiscoIetfIsisMib::Ciicirc::Ciicirc()
    :
    ciinextcircindex{YType::uint32, "ciiNextCircIndex"}
{
    yang_name = "ciiCirc"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciicirc::~Ciicirc()
{
}

bool CiscoIetfIsisMib::Ciicirc::has_data() const
{
    return ciinextcircindex.is_set;
}

bool CiscoIetfIsisMib::Ciicirc::has_operation() const
{
    return is_set(operation)
	|| is_set(ciinextcircindex.operation);
}

std::string CiscoIetfIsisMib::Ciicirc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCirc";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciicirc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciinextcircindex.is_set || is_set(ciinextcircindex.operation)) leaf_name_data.push_back(ciinextcircindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciicirc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciicirc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciicirc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiNextCircIndex")
    {
        ciinextcircindex = value;
    }
}

CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrtable()
{
    yang_name = "ciiManAreaAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciimanareaaddrtable::~Ciimanareaaddrtable()
{
}

bool CiscoIetfIsisMib::Ciimanareaaddrtable::has_data() const
{
    for (std::size_t index=0; index<ciimanareaaddrentry.size(); index++)
    {
        if(ciimanareaaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciimanareaaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ciimanareaaddrentry.size(); index++)
    {
        if(ciimanareaaddrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciimanareaaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiManAreaAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciimanareaaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciimanareaaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiManAreaAddrEntry")
    {
        for(auto const & c : ciimanareaaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry>();
        c->parent = this;
        ciimanareaaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciimanareaaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciimanareaaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciimanareaaddrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::Ciimanareaaddrentry()
    :
    ciimanareaaddr{YType::str, "ciiManAreaAddr"},
    ciimanareaaddrexiststate{YType::enumeration, "ciiManAreaAddrExistState"}
{
    yang_name = "ciiManAreaAddrEntry"; yang_parent_name = "ciiManAreaAddrTable";
}

CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::~Ciimanareaaddrentry()
{
}

bool CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::has_data() const
{
    return ciimanareaaddr.is_set
	|| ciimanareaaddrexiststate.is_set;
}

bool CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciimanareaaddr.operation)
	|| is_set(ciimanareaaddrexiststate.operation);
}

std::string CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiManAreaAddrEntry" <<"[ciiManAreaAddr='" <<ciimanareaaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiManAreaAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciimanareaaddr.is_set || is_set(ciimanareaaddr.operation)) leaf_name_data.push_back(ciimanareaaddr.get_name_leafdata());
    if (ciimanareaaddrexiststate.is_set || is_set(ciimanareaaddrexiststate.operation)) leaf_name_data.push_back(ciimanareaaddrexiststate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiManAreaAddr")
    {
        ciimanareaaddr = value;
    }
    if(value_path == "ciiManAreaAddrExistState")
    {
        ciimanareaaddrexiststate = value;
    }
}

CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrtable()
{
    yang_name = "ciiAreaAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiareaaddrtable::~Ciiareaaddrtable()
{
}

bool CiscoIetfIsisMib::Ciiareaaddrtable::has_data() const
{
    for (std::size_t index=0; index<ciiareaaddrentry.size(); index++)
    {
        if(ciiareaaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiareaaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ciiareaaddrentry.size(); index++)
    {
        if(ciiareaaddrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiareaaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiAreaAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiareaaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiareaaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiAreaAddrEntry")
    {
        for(auto const & c : ciiareaaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry>();
        c->parent = this;
        ciiareaaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiareaaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiareaaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiareaaddrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::Ciiareaaddrentry()
    :
    ciiareaaddr{YType::str, "ciiAreaAddr"}
{
    yang_name = "ciiAreaAddrEntry"; yang_parent_name = "ciiAreaAddrTable";
}

CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::~Ciiareaaddrentry()
{
}

bool CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::has_data() const
{
    return ciiareaaddr.is_set;
}

bool CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciiareaaddr.operation);
}

std::string CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiAreaAddrEntry" <<"[ciiAreaAddr='" <<ciiareaaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiAreaAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiareaaddr.is_set || is_set(ciiareaaddr.operation)) leaf_name_data.push_back(ciiareaaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiAreaAddr")
    {
        ciiareaaddr = value;
    }
}

CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsupptable()
{
    yang_name = "ciiSysProtSuppTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciisysprotsupptable::~Ciisysprotsupptable()
{
}

bool CiscoIetfIsisMib::Ciisysprotsupptable::has_data() const
{
    for (std::size_t index=0; index<ciisysprotsuppentry.size(); index++)
    {
        if(ciisysprotsuppentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciisysprotsupptable::has_operation() const
{
    for (std::size_t index=0; index<ciisysprotsuppentry.size(); index++)
    {
        if(ciisysprotsuppentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciisysprotsupptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysProtSuppTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisysprotsupptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisysprotsupptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSysProtSuppEntry")
    {
        for(auto const & c : ciisysprotsuppentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry>();
        c->parent = this;
        ciisysprotsuppentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisysprotsupptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciisysprotsuppentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciisysprotsupptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::Ciisysprotsuppentry()
    :
    ciisysprotsuppprotocol{YType::enumeration, "ciiSysProtSuppProtocol"},
    ciisysprotsuppexiststate{YType::enumeration, "ciiSysProtSuppExistState"}
{
    yang_name = "ciiSysProtSuppEntry"; yang_parent_name = "ciiSysProtSuppTable";
}

CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::~Ciisysprotsuppentry()
{
}

bool CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::has_data() const
{
    return ciisysprotsuppprotocol.is_set
	|| ciisysprotsuppexiststate.is_set;
}

bool CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciisysprotsuppprotocol.operation)
	|| is_set(ciisysprotsuppexiststate.operation);
}

std::string CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysProtSuppEntry" <<"[ciiSysProtSuppProtocol='" <<ciisysprotsuppprotocol <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSysProtSuppTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisysprotsuppprotocol.is_set || is_set(ciisysprotsuppprotocol.operation)) leaf_name_data.push_back(ciisysprotsuppprotocol.get_name_leafdata());
    if (ciisysprotsuppexiststate.is_set || is_set(ciisysprotsuppexiststate.operation)) leaf_name_data.push_back(ciisysprotsuppexiststate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiSysProtSuppProtocol")
    {
        ciisysprotsuppprotocol = value;
    }
    if(value_path == "ciiSysProtSuppExistState")
    {
        ciisysprotsuppexiststate = value;
    }
}

CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrtable()
{
    yang_name = "ciiSummAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciisummaddrtable::~Ciisummaddrtable()
{
}

bool CiscoIetfIsisMib::Ciisummaddrtable::has_data() const
{
    for (std::size_t index=0; index<ciisummaddrentry.size(); index++)
    {
        if(ciisummaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciisummaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ciisummaddrentry.size(); index++)
    {
        if(ciisummaddrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciisummaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSummAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisummaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisummaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSummAddrEntry")
    {
        for(auto const & c : ciisummaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry>();
        c->parent = this;
        ciisummaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisummaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciisummaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciisummaddrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::Ciisummaddrentry()
    :
    ciisummaddresstype{YType::enumeration, "ciiSummAddressType"},
    ciisummaddress{YType::str, "ciiSummAddress"},
    ciisummaddrprefixlen{YType::uint32, "ciiSummAddrPrefixLen"},
    ciisummaddrexiststate{YType::enumeration, "ciiSummAddrExistState"},
    ciisummaddrfullmetric{YType::uint32, "ciiSummAddrFullMetric"},
    ciisummaddrmetric{YType::int32, "ciiSummAddrMetric"}
{
    yang_name = "ciiSummAddrEntry"; yang_parent_name = "ciiSummAddrTable";
}

CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::~Ciisummaddrentry()
{
}

bool CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::has_data() const
{
    return ciisummaddresstype.is_set
	|| ciisummaddress.is_set
	|| ciisummaddrprefixlen.is_set
	|| ciisummaddrexiststate.is_set
	|| ciisummaddrfullmetric.is_set
	|| ciisummaddrmetric.is_set;
}

bool CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciisummaddresstype.operation)
	|| is_set(ciisummaddress.operation)
	|| is_set(ciisummaddrprefixlen.operation)
	|| is_set(ciisummaddrexiststate.operation)
	|| is_set(ciisummaddrfullmetric.operation)
	|| is_set(ciisummaddrmetric.operation);
}

std::string CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSummAddrEntry" <<"[ciiSummAddressType='" <<ciisummaddresstype <<"']" <<"[ciiSummAddress='" <<ciisummaddress <<"']" <<"[ciiSummAddrPrefixLen='" <<ciisummaddrprefixlen <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSummAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisummaddresstype.is_set || is_set(ciisummaddresstype.operation)) leaf_name_data.push_back(ciisummaddresstype.get_name_leafdata());
    if (ciisummaddress.is_set || is_set(ciisummaddress.operation)) leaf_name_data.push_back(ciisummaddress.get_name_leafdata());
    if (ciisummaddrprefixlen.is_set || is_set(ciisummaddrprefixlen.operation)) leaf_name_data.push_back(ciisummaddrprefixlen.get_name_leafdata());
    if (ciisummaddrexiststate.is_set || is_set(ciisummaddrexiststate.operation)) leaf_name_data.push_back(ciisummaddrexiststate.get_name_leafdata());
    if (ciisummaddrfullmetric.is_set || is_set(ciisummaddrfullmetric.operation)) leaf_name_data.push_back(ciisummaddrfullmetric.get_name_leafdata());
    if (ciisummaddrmetric.is_set || is_set(ciisummaddrmetric.operation)) leaf_name_data.push_back(ciisummaddrmetric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiSummAddressType")
    {
        ciisummaddresstype = value;
    }
    if(value_path == "ciiSummAddress")
    {
        ciisummaddress = value;
    }
    if(value_path == "ciiSummAddrPrefixLen")
    {
        ciisummaddrprefixlen = value;
    }
    if(value_path == "ciiSummAddrExistState")
    {
        ciisummaddrexiststate = value;
    }
    if(value_path == "ciiSummAddrFullMetric")
    {
        ciisummaddrfullmetric = value;
    }
    if(value_path == "ciiSummAddrMetric")
    {
        ciisummaddrmetric = value;
    }
}

CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrtable()
{
    yang_name = "ciiRedistributeAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiredistributeaddrtable::~Ciiredistributeaddrtable()
{
}

bool CiscoIetfIsisMib::Ciiredistributeaddrtable::has_data() const
{
    for (std::size_t index=0; index<ciiredistributeaddrentry.size(); index++)
    {
        if(ciiredistributeaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiredistributeaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ciiredistributeaddrentry.size(); index++)
    {
        if(ciiredistributeaddrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiredistributeaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRedistributeAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiredistributeaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiredistributeaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiRedistributeAddrEntry")
    {
        for(auto const & c : ciiredistributeaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry>();
        c->parent = this;
        ciiredistributeaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiredistributeaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiredistributeaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiredistributeaddrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::Ciiredistributeaddrentry()
    :
    ciiredistributeaddrtype{YType::enumeration, "ciiRedistributeAddrType"},
    ciiredistributeaddraddress{YType::str, "ciiRedistributeAddrAddress"},
    ciiredistributeaddrprefixlen{YType::uint32, "ciiRedistributeAddrPrefixLen"},
    ciiredistributeaddrexiststate{YType::enumeration, "ciiRedistributeAddrExistState"}
{
    yang_name = "ciiRedistributeAddrEntry"; yang_parent_name = "ciiRedistributeAddrTable";
}

CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::~Ciiredistributeaddrentry()
{
}

bool CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::has_data() const
{
    return ciiredistributeaddrtype.is_set
	|| ciiredistributeaddraddress.is_set
	|| ciiredistributeaddrprefixlen.is_set
	|| ciiredistributeaddrexiststate.is_set;
}

bool CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciiredistributeaddrtype.operation)
	|| is_set(ciiredistributeaddraddress.operation)
	|| is_set(ciiredistributeaddrprefixlen.operation)
	|| is_set(ciiredistributeaddrexiststate.operation);
}

std::string CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRedistributeAddrEntry" <<"[ciiRedistributeAddrType='" <<ciiredistributeaddrtype <<"']" <<"[ciiRedistributeAddrAddress='" <<ciiredistributeaddraddress <<"']" <<"[ciiRedistributeAddrPrefixLen='" <<ciiredistributeaddrprefixlen <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiRedistributeAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiredistributeaddrtype.is_set || is_set(ciiredistributeaddrtype.operation)) leaf_name_data.push_back(ciiredistributeaddrtype.get_name_leafdata());
    if (ciiredistributeaddraddress.is_set || is_set(ciiredistributeaddraddress.operation)) leaf_name_data.push_back(ciiredistributeaddraddress.get_name_leafdata());
    if (ciiredistributeaddrprefixlen.is_set || is_set(ciiredistributeaddrprefixlen.operation)) leaf_name_data.push_back(ciiredistributeaddrprefixlen.get_name_leafdata());
    if (ciiredistributeaddrexiststate.is_set || is_set(ciiredistributeaddrexiststate.operation)) leaf_name_data.push_back(ciiredistributeaddrexiststate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiRedistributeAddrType")
    {
        ciiredistributeaddrtype = value;
    }
    if(value_path == "ciiRedistributeAddrAddress")
    {
        ciiredistributeaddraddress = value;
    }
    if(value_path == "ciiRedistributeAddrPrefixLen")
    {
        ciiredistributeaddrprefixlen = value;
    }
    if(value_path == "ciiRedistributeAddrExistState")
    {
        ciiredistributeaddrexiststate = value;
    }
}

CiscoIetfIsisMib::Ciiroutertable::Ciiroutertable()
{
    yang_name = "ciiRouterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiroutertable::~Ciiroutertable()
{
}

bool CiscoIetfIsisMib::Ciiroutertable::has_data() const
{
    for (std::size_t index=0; index<ciirouterentry.size(); index++)
    {
        if(ciirouterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiroutertable::has_operation() const
{
    for (std::size_t index=0; index<ciirouterentry.size(); index++)
    {
        if(ciirouterentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiroutertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRouterTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiroutertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiroutertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiRouterEntry")
    {
        for(auto const & c : ciirouterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry>();
        c->parent = this;
        ciirouterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiroutertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciirouterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiroutertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::Ciirouterentry()
    :
    ciiroutersysid{YType::str, "ciiRouterSysID"},
    ciirouterlevel{YType::enumeration, "ciiRouterLevel"},
    ciirouterhostname{YType::str, "ciiRouterHostName"},
    ciirouterid{YType::uint32, "ciiRouterID"}
{
    yang_name = "ciiRouterEntry"; yang_parent_name = "ciiRouterTable";
}

CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::~Ciirouterentry()
{
}

bool CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::has_data() const
{
    return ciiroutersysid.is_set
	|| ciirouterlevel.is_set
	|| ciirouterhostname.is_set
	|| ciirouterid.is_set;
}

bool CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciiroutersysid.operation)
	|| is_set(ciirouterlevel.operation)
	|| is_set(ciirouterhostname.operation)
	|| is_set(ciirouterid.operation);
}

std::string CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRouterEntry" <<"[ciiRouterSysID='" <<ciiroutersysid <<"']" <<"[ciiRouterLevel='" <<ciirouterlevel <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiRouterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiroutersysid.is_set || is_set(ciiroutersysid.operation)) leaf_name_data.push_back(ciiroutersysid.get_name_leafdata());
    if (ciirouterlevel.is_set || is_set(ciirouterlevel.operation)) leaf_name_data.push_back(ciirouterlevel.get_name_leafdata());
    if (ciirouterhostname.is_set || is_set(ciirouterhostname.operation)) leaf_name_data.push_back(ciirouterhostname.get_name_leafdata());
    if (ciirouterid.is_set || is_set(ciirouterid.operation)) leaf_name_data.push_back(ciirouterid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiRouterSysID")
    {
        ciiroutersysid = value;
    }
    if(value_path == "ciiRouterLevel")
    {
        ciirouterlevel = value;
    }
    if(value_path == "ciiRouterHostName")
    {
        ciirouterhostname = value;
    }
    if(value_path == "ciiRouterID")
    {
        ciirouterid = value;
    }
}

CiscoIetfIsisMib::Ciisysleveltable::Ciisysleveltable()
{
    yang_name = "ciiSysLevelTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciisysleveltable::~Ciisysleveltable()
{
}

bool CiscoIetfIsisMib::Ciisysleveltable::has_data() const
{
    for (std::size_t index=0; index<ciisyslevelentry.size(); index++)
    {
        if(ciisyslevelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciisysleveltable::has_operation() const
{
    for (std::size_t index=0; index<ciisyslevelentry.size(); index++)
    {
        if(ciisyslevelentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciisysleveltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysLevelTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisysleveltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisysleveltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSysLevelEntry")
    {
        for(auto const & c : ciisyslevelentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry>();
        c->parent = this;
        ciisyslevelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisysleveltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciisyslevelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciisysleveltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::Ciisyslevelentry()
    :
    ciisyslevelindex{YType::enumeration, "ciiSysLevelIndex"},
    ciisyslevelmetricstyle{YType::enumeration, "ciiSysLevelMetricStyle"},
    ciisyslevelminlspgenint{YType::uint32, "ciiSysLevelMinLSPGenInt"},
    ciisysleveloriglspbuffsize{YType::int32, "ciiSysLevelOrigLSPBuffSize"},
    ciisysleveloverloadstate{YType::enumeration, "ciiSysLevelOverloadState"},
    ciisyslevelsetoverload{YType::boolean, "ciiSysLevelSetOverload"},
    ciisyslevelsetoverloaduntil{YType::uint32, "ciiSysLevelSetOverloadUntil"},
    ciisyslevelspfconsiders{YType::enumeration, "ciiSysLevelSPFConsiders"},
    ciisyslevelteenabled{YType::boolean, "ciiSysLevelTEEnabled"}
{
    yang_name = "ciiSysLevelEntry"; yang_parent_name = "ciiSysLevelTable";
}

CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::~Ciisyslevelentry()
{
}

bool CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::has_data() const
{
    return ciisyslevelindex.is_set
	|| ciisyslevelmetricstyle.is_set
	|| ciisyslevelminlspgenint.is_set
	|| ciisysleveloriglspbuffsize.is_set
	|| ciisysleveloverloadstate.is_set
	|| ciisyslevelsetoverload.is_set
	|| ciisyslevelsetoverloaduntil.is_set
	|| ciisyslevelspfconsiders.is_set
	|| ciisyslevelteenabled.is_set;
}

bool CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciisyslevelindex.operation)
	|| is_set(ciisyslevelmetricstyle.operation)
	|| is_set(ciisyslevelminlspgenint.operation)
	|| is_set(ciisysleveloriglspbuffsize.operation)
	|| is_set(ciisysleveloverloadstate.operation)
	|| is_set(ciisyslevelsetoverload.operation)
	|| is_set(ciisyslevelsetoverloaduntil.operation)
	|| is_set(ciisyslevelspfconsiders.operation)
	|| is_set(ciisyslevelteenabled.operation);
}

std::string CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysLevelEntry" <<"[ciiSysLevelIndex='" <<ciisyslevelindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSysLevelTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisyslevelindex.is_set || is_set(ciisyslevelindex.operation)) leaf_name_data.push_back(ciisyslevelindex.get_name_leafdata());
    if (ciisyslevelmetricstyle.is_set || is_set(ciisyslevelmetricstyle.operation)) leaf_name_data.push_back(ciisyslevelmetricstyle.get_name_leafdata());
    if (ciisyslevelminlspgenint.is_set || is_set(ciisyslevelminlspgenint.operation)) leaf_name_data.push_back(ciisyslevelminlspgenint.get_name_leafdata());
    if (ciisysleveloriglspbuffsize.is_set || is_set(ciisysleveloriglspbuffsize.operation)) leaf_name_data.push_back(ciisysleveloriglspbuffsize.get_name_leafdata());
    if (ciisysleveloverloadstate.is_set || is_set(ciisysleveloverloadstate.operation)) leaf_name_data.push_back(ciisysleveloverloadstate.get_name_leafdata());
    if (ciisyslevelsetoverload.is_set || is_set(ciisyslevelsetoverload.operation)) leaf_name_data.push_back(ciisyslevelsetoverload.get_name_leafdata());
    if (ciisyslevelsetoverloaduntil.is_set || is_set(ciisyslevelsetoverloaduntil.operation)) leaf_name_data.push_back(ciisyslevelsetoverloaduntil.get_name_leafdata());
    if (ciisyslevelspfconsiders.is_set || is_set(ciisyslevelspfconsiders.operation)) leaf_name_data.push_back(ciisyslevelspfconsiders.get_name_leafdata());
    if (ciisyslevelteenabled.is_set || is_set(ciisyslevelteenabled.operation)) leaf_name_data.push_back(ciisyslevelteenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiSysLevelIndex")
    {
        ciisyslevelindex = value;
    }
    if(value_path == "ciiSysLevelMetricStyle")
    {
        ciisyslevelmetricstyle = value;
    }
    if(value_path == "ciiSysLevelMinLSPGenInt")
    {
        ciisyslevelminlspgenint = value;
    }
    if(value_path == "ciiSysLevelOrigLSPBuffSize")
    {
        ciisysleveloriglspbuffsize = value;
    }
    if(value_path == "ciiSysLevelOverloadState")
    {
        ciisysleveloverloadstate = value;
    }
    if(value_path == "ciiSysLevelSetOverload")
    {
        ciisyslevelsetoverload = value;
    }
    if(value_path == "ciiSysLevelSetOverloadUntil")
    {
        ciisyslevelsetoverloaduntil = value;
    }
    if(value_path == "ciiSysLevelSPFConsiders")
    {
        ciisyslevelspfconsiders = value;
    }
    if(value_path == "ciiSysLevelTEEnabled")
    {
        ciisyslevelteenabled = value;
    }
}

CiscoIetfIsisMib::Ciicirctable::Ciicirctable()
{
    yang_name = "ciiCircTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciicirctable::~Ciicirctable()
{
}

bool CiscoIetfIsisMib::Ciicirctable::has_data() const
{
    for (std::size_t index=0; index<ciicircentry.size(); index++)
    {
        if(ciicircentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciicirctable::has_operation() const
{
    for (std::size_t index=0; index<ciicircentry.size(); index++)
    {
        if(ciicircentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciicirctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciicirctable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciicirctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiCircEntry")
    {
        for(auto const & c : ciicircentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciicirctable::Ciicircentry>();
        c->parent = this;
        ciicircentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciicirctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciicircentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciicirctable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicircentry()
    :
    ciicircindex{YType::int32, "ciiCircIndex"},
    ciicirc3wayenabled{YType::boolean, "ciiCirc3WayEnabled"},
    ciicircadminstate{YType::enumeration, "ciiCircAdminState"},
    ciicircexiststate{YType::enumeration, "ciiCircExistState"},
    ciicircextdomain{YType::boolean, "ciiCircExtDomain"},
    ciicircextendedcircid{YType::uint32, "ciiCircExtendedCircID"},
    ciicircifindex{YType::int32, "ciiCircIfIndex"},
    ciicircifsubindex{YType::int32, "ciiCircIfSubIndex"},
    ciicirclastuptime{YType::uint32, "ciiCircLastUpTime"},
    ciicirclevel{YType::enumeration, "ciiCircLevel"},
    ciicircmeshgroup{YType::uint32, "ciiCircMeshGroup"},
    ciicircmeshgroupenabled{YType::enumeration, "ciiCircMeshGroupEnabled"},
    ciicircpassivecircuit{YType::boolean, "ciiCircPassiveCircuit"},
    ciicircsmallhellos{YType::boolean, "ciiCircSmallHellos"},
    ciicirctype{YType::enumeration, "ciiCircType"}
{
    yang_name = "ciiCircEntry"; yang_parent_name = "ciiCircTable";
}

CiscoIetfIsisMib::Ciicirctable::Ciicircentry::~Ciicircentry()
{
}

bool CiscoIetfIsisMib::Ciicirctable::Ciicircentry::has_data() const
{
    return ciicircindex.is_set
	|| ciicirc3wayenabled.is_set
	|| ciicircadminstate.is_set
	|| ciicircexiststate.is_set
	|| ciicircextdomain.is_set
	|| ciicircextendedcircid.is_set
	|| ciicircifindex.is_set
	|| ciicircifsubindex.is_set
	|| ciicirclastuptime.is_set
	|| ciicirclevel.is_set
	|| ciicircmeshgroup.is_set
	|| ciicircmeshgroupenabled.is_set
	|| ciicircpassivecircuit.is_set
	|| ciicircsmallhellos.is_set
	|| ciicirctype.is_set;
}

bool CiscoIetfIsisMib::Ciicirctable::Ciicircentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciicirc3wayenabled.operation)
	|| is_set(ciicircadminstate.operation)
	|| is_set(ciicircexiststate.operation)
	|| is_set(ciicircextdomain.operation)
	|| is_set(ciicircextendedcircid.operation)
	|| is_set(ciicircifindex.operation)
	|| is_set(ciicircifsubindex.operation)
	|| is_set(ciicirclastuptime.operation)
	|| is_set(ciicirclevel.operation)
	|| is_set(ciicircmeshgroup.operation)
	|| is_set(ciicircmeshgroupenabled.operation)
	|| is_set(ciicircpassivecircuit.operation)
	|| is_set(ciicircsmallhellos.operation)
	|| is_set(ciicirctype.operation);
}

std::string CiscoIetfIsisMib::Ciicirctable::Ciicircentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciicirctable::Ciicircentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiCircTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicirc3wayenabled.is_set || is_set(ciicirc3wayenabled.operation)) leaf_name_data.push_back(ciicirc3wayenabled.get_name_leafdata());
    if (ciicircadminstate.is_set || is_set(ciicircadminstate.operation)) leaf_name_data.push_back(ciicircadminstate.get_name_leafdata());
    if (ciicircexiststate.is_set || is_set(ciicircexiststate.operation)) leaf_name_data.push_back(ciicircexiststate.get_name_leafdata());
    if (ciicircextdomain.is_set || is_set(ciicircextdomain.operation)) leaf_name_data.push_back(ciicircextdomain.get_name_leafdata());
    if (ciicircextendedcircid.is_set || is_set(ciicircextendedcircid.operation)) leaf_name_data.push_back(ciicircextendedcircid.get_name_leafdata());
    if (ciicircifindex.is_set || is_set(ciicircifindex.operation)) leaf_name_data.push_back(ciicircifindex.get_name_leafdata());
    if (ciicircifsubindex.is_set || is_set(ciicircifsubindex.operation)) leaf_name_data.push_back(ciicircifsubindex.get_name_leafdata());
    if (ciicirclastuptime.is_set || is_set(ciicirclastuptime.operation)) leaf_name_data.push_back(ciicirclastuptime.get_name_leafdata());
    if (ciicirclevel.is_set || is_set(ciicirclevel.operation)) leaf_name_data.push_back(ciicirclevel.get_name_leafdata());
    if (ciicircmeshgroup.is_set || is_set(ciicircmeshgroup.operation)) leaf_name_data.push_back(ciicircmeshgroup.get_name_leafdata());
    if (ciicircmeshgroupenabled.is_set || is_set(ciicircmeshgroupenabled.operation)) leaf_name_data.push_back(ciicircmeshgroupenabled.get_name_leafdata());
    if (ciicircpassivecircuit.is_set || is_set(ciicircpassivecircuit.operation)) leaf_name_data.push_back(ciicircpassivecircuit.get_name_leafdata());
    if (ciicircsmallhellos.is_set || is_set(ciicircsmallhellos.operation)) leaf_name_data.push_back(ciicircsmallhellos.get_name_leafdata());
    if (ciicirctype.is_set || is_set(ciicirctype.operation)) leaf_name_data.push_back(ciicirctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciicirctable::Ciicircentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciicirctable::Ciicircentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciicirctable::Ciicircentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiCirc3WayEnabled")
    {
        ciicirc3wayenabled = value;
    }
    if(value_path == "ciiCircAdminState")
    {
        ciicircadminstate = value;
    }
    if(value_path == "ciiCircExistState")
    {
        ciicircexiststate = value;
    }
    if(value_path == "ciiCircExtDomain")
    {
        ciicircextdomain = value;
    }
    if(value_path == "ciiCircExtendedCircID")
    {
        ciicircextendedcircid = value;
    }
    if(value_path == "ciiCircIfIndex")
    {
        ciicircifindex = value;
    }
    if(value_path == "ciiCircIfSubIndex")
    {
        ciicircifsubindex = value;
    }
    if(value_path == "ciiCircLastUpTime")
    {
        ciicirclastuptime = value;
    }
    if(value_path == "ciiCircLevel")
    {
        ciicirclevel = value;
    }
    if(value_path == "ciiCircMeshGroup")
    {
        ciicircmeshgroup = value;
    }
    if(value_path == "ciiCircMeshGroupEnabled")
    {
        ciicircmeshgroupenabled = value;
    }
    if(value_path == "ciiCircPassiveCircuit")
    {
        ciicircpassivecircuit = value;
    }
    if(value_path == "ciiCircSmallHellos")
    {
        ciicircsmallhellos = value;
    }
    if(value_path == "ciiCircType")
    {
        ciicirctype = value;
    }
}

CiscoIetfIsisMib::Ciicircleveltable::Ciicircleveltable()
{
    yang_name = "ciiCircLevelTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciicircleveltable::~Ciicircleveltable()
{
}

bool CiscoIetfIsisMib::Ciicircleveltable::has_data() const
{
    for (std::size_t index=0; index<ciicirclevelentry.size(); index++)
    {
        if(ciicirclevelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciicircleveltable::has_operation() const
{
    for (std::size_t index=0; index<ciicirclevelentry.size(); index++)
    {
        if(ciicirclevelentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciicircleveltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircLevelTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciicircleveltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciicircleveltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiCircLevelEntry")
    {
        for(auto const & c : ciicirclevelentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry>();
        c->parent = this;
        ciicirclevelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciicircleveltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciicirclevelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciicircleveltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::Ciicirclevelentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciicirclevelindex{YType::enumeration, "ciiCircLevelIndex"},
    ciicirclevelcsnpinterval{YType::int32, "ciiCircLevelCSNPInterval"},
    ciicircleveldesis{YType::str, "ciiCircLevelDesIS"},
    ciicircleveldrhellotimer{YType::int32, "ciiCircLevelDRHelloTimer"},
    ciicirclevelhellomultiplier{YType::int32, "ciiCircLevelHelloMultiplier"},
    ciicirclevelhellotimer{YType::int32, "ciiCircLevelHelloTimer"},
    ciicirclevelid{YType::str, "ciiCircLevelID"},
    ciicirclevelidoctet{YType::int32, "ciiCircLevelIDOctet"},
    ciicirclevelispriority{YType::int32, "ciiCircLevelISPriority"},
    ciicirclevellspthrottle{YType::uint32, "ciiCircLevelLSPThrottle"},
    ciicirclevelmetric{YType::int32, "ciiCircLevelMetric"},
    ciicirclevelminlspretransint{YType::int32, "ciiCircLevelMinLSPRetransInt"},
    ciicirclevelpartsnpinterval{YType::int32, "ciiCircLevelPartSNPInterval"},
    ciicirclevelwidemetric{YType::uint32, "ciiCircLevelWideMetric"}
{
    yang_name = "ciiCircLevelEntry"; yang_parent_name = "ciiCircLevelTable";
}

CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::~Ciicirclevelentry()
{
}

bool CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::has_data() const
{
    return ciicircindex.is_set
	|| ciicirclevelindex.is_set
	|| ciicirclevelcsnpinterval.is_set
	|| ciicircleveldesis.is_set
	|| ciicircleveldrhellotimer.is_set
	|| ciicirclevelhellomultiplier.is_set
	|| ciicirclevelhellotimer.is_set
	|| ciicirclevelid.is_set
	|| ciicirclevelidoctet.is_set
	|| ciicirclevelispriority.is_set
	|| ciicirclevellspthrottle.is_set
	|| ciicirclevelmetric.is_set
	|| ciicirclevelminlspretransint.is_set
	|| ciicirclevelpartsnpinterval.is_set
	|| ciicirclevelwidemetric.is_set;
}

bool CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciicirclevelindex.operation)
	|| is_set(ciicirclevelcsnpinterval.operation)
	|| is_set(ciicircleveldesis.operation)
	|| is_set(ciicircleveldrhellotimer.operation)
	|| is_set(ciicirclevelhellomultiplier.operation)
	|| is_set(ciicirclevelhellotimer.operation)
	|| is_set(ciicirclevelid.operation)
	|| is_set(ciicirclevelidoctet.operation)
	|| is_set(ciicirclevelispriority.operation)
	|| is_set(ciicirclevellspthrottle.operation)
	|| is_set(ciicirclevelmetric.operation)
	|| is_set(ciicirclevelminlspretransint.operation)
	|| is_set(ciicirclevelpartsnpinterval.operation)
	|| is_set(ciicirclevelwidemetric.operation);
}

std::string CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircLevelEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiCircLevelIndex='" <<ciicirclevelindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiCircLevelTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicirclevelindex.is_set || is_set(ciicirclevelindex.operation)) leaf_name_data.push_back(ciicirclevelindex.get_name_leafdata());
    if (ciicirclevelcsnpinterval.is_set || is_set(ciicirclevelcsnpinterval.operation)) leaf_name_data.push_back(ciicirclevelcsnpinterval.get_name_leafdata());
    if (ciicircleveldesis.is_set || is_set(ciicircleveldesis.operation)) leaf_name_data.push_back(ciicircleveldesis.get_name_leafdata());
    if (ciicircleveldrhellotimer.is_set || is_set(ciicircleveldrhellotimer.operation)) leaf_name_data.push_back(ciicircleveldrhellotimer.get_name_leafdata());
    if (ciicirclevelhellomultiplier.is_set || is_set(ciicirclevelhellomultiplier.operation)) leaf_name_data.push_back(ciicirclevelhellomultiplier.get_name_leafdata());
    if (ciicirclevelhellotimer.is_set || is_set(ciicirclevelhellotimer.operation)) leaf_name_data.push_back(ciicirclevelhellotimer.get_name_leafdata());
    if (ciicirclevelid.is_set || is_set(ciicirclevelid.operation)) leaf_name_data.push_back(ciicirclevelid.get_name_leafdata());
    if (ciicirclevelidoctet.is_set || is_set(ciicirclevelidoctet.operation)) leaf_name_data.push_back(ciicirclevelidoctet.get_name_leafdata());
    if (ciicirclevelispriority.is_set || is_set(ciicirclevelispriority.operation)) leaf_name_data.push_back(ciicirclevelispriority.get_name_leafdata());
    if (ciicirclevellspthrottle.is_set || is_set(ciicirclevellspthrottle.operation)) leaf_name_data.push_back(ciicirclevellspthrottle.get_name_leafdata());
    if (ciicirclevelmetric.is_set || is_set(ciicirclevelmetric.operation)) leaf_name_data.push_back(ciicirclevelmetric.get_name_leafdata());
    if (ciicirclevelminlspretransint.is_set || is_set(ciicirclevelminlspretransint.operation)) leaf_name_data.push_back(ciicirclevelminlspretransint.get_name_leafdata());
    if (ciicirclevelpartsnpinterval.is_set || is_set(ciicirclevelpartsnpinterval.operation)) leaf_name_data.push_back(ciicirclevelpartsnpinterval.get_name_leafdata());
    if (ciicirclevelwidemetric.is_set || is_set(ciicirclevelwidemetric.operation)) leaf_name_data.push_back(ciicirclevelwidemetric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiCircLevelIndex")
    {
        ciicirclevelindex = value;
    }
    if(value_path == "ciiCircLevelCSNPInterval")
    {
        ciicirclevelcsnpinterval = value;
    }
    if(value_path == "ciiCircLevelDesIS")
    {
        ciicircleveldesis = value;
    }
    if(value_path == "ciiCircLevelDRHelloTimer")
    {
        ciicircleveldrhellotimer = value;
    }
    if(value_path == "ciiCircLevelHelloMultiplier")
    {
        ciicirclevelhellomultiplier = value;
    }
    if(value_path == "ciiCircLevelHelloTimer")
    {
        ciicirclevelhellotimer = value;
    }
    if(value_path == "ciiCircLevelID")
    {
        ciicirclevelid = value;
    }
    if(value_path == "ciiCircLevelIDOctet")
    {
        ciicirclevelidoctet = value;
    }
    if(value_path == "ciiCircLevelISPriority")
    {
        ciicirclevelispriority = value;
    }
    if(value_path == "ciiCircLevelLSPThrottle")
    {
        ciicirclevellspthrottle = value;
    }
    if(value_path == "ciiCircLevelMetric")
    {
        ciicirclevelmetric = value;
    }
    if(value_path == "ciiCircLevelMinLSPRetransInt")
    {
        ciicirclevelminlspretransint = value;
    }
    if(value_path == "ciiCircLevelPartSNPInterval")
    {
        ciicirclevelpartsnpinterval = value;
    }
    if(value_path == "ciiCircLevelWideMetric")
    {
        ciicirclevelwidemetric = value;
    }
}

CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcountertable()
{
    yang_name = "ciiSystemCounterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciisystemcountertable::~Ciisystemcountertable()
{
}

bool CiscoIetfIsisMib::Ciisystemcountertable::has_data() const
{
    for (std::size_t index=0; index<ciisystemcounterentry.size(); index++)
    {
        if(ciisystemcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciisystemcountertable::has_operation() const
{
    for (std::size_t index=0; index<ciisystemcounterentry.size(); index++)
    {
        if(ciisystemcounterentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciisystemcountertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSystemCounterTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisystemcountertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisystemcountertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSystemCounterEntry")
    {
        for(auto const & c : ciisystemcounterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry>();
        c->parent = this;
        ciisystemcounterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisystemcountertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciisystemcounterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciisystemcountertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::Ciisystemcounterentry()
    :
    ciisysstatlevel{YType::enumeration, "ciiSysStatLevel"},
    ciisysstatattmpttoexmaxseqnums{YType::uint32, "ciiSysStatAttmptToExMaxSeqNums"},
    ciisysstatauthfails{YType::uint32, "ciiSysStatAuthFails"},
    ciisysstatauthtypefails{YType::uint32, "ciiSysStatAuthTypeFails"},
    ciisysstatcorrlsps{YType::uint32, "ciiSysStatCorrLSPs"},
    ciisysstatidfieldlenmismatches{YType::uint32, "ciiSysStatIDFieldLenMismatches"},
    ciisysstatlspdbaseoloads{YType::uint32, "ciiSysStatLSPDbaseOloads"},
    ciisysstatlsperrors{YType::uint32, "ciiSysStatLSPErrors"},
    ciisysstatmanaddrdropfromareas{YType::uint32, "ciiSysStatManAddrDropFromAreas"},
    ciisysstatownlsppurges{YType::uint32, "ciiSysStatOwnLSPPurges"},
    ciisysstatpartchanges{YType::uint32, "ciiSysStatPartChanges"},
    ciisysstatseqnumskips{YType::uint32, "ciiSysStatSeqNumSkips"},
    ciisysstatspfruns{YType::uint32, "ciiSysStatSPFRuns"}
{
    yang_name = "ciiSystemCounterEntry"; yang_parent_name = "ciiSystemCounterTable";
}

CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::~Ciisystemcounterentry()
{
}

bool CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::has_data() const
{
    return ciisysstatlevel.is_set
	|| ciisysstatattmpttoexmaxseqnums.is_set
	|| ciisysstatauthfails.is_set
	|| ciisysstatauthtypefails.is_set
	|| ciisysstatcorrlsps.is_set
	|| ciisysstatidfieldlenmismatches.is_set
	|| ciisysstatlspdbaseoloads.is_set
	|| ciisysstatlsperrors.is_set
	|| ciisysstatmanaddrdropfromareas.is_set
	|| ciisysstatownlsppurges.is_set
	|| ciisysstatpartchanges.is_set
	|| ciisysstatseqnumskips.is_set
	|| ciisysstatspfruns.is_set;
}

bool CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciisysstatlevel.operation)
	|| is_set(ciisysstatattmpttoexmaxseqnums.operation)
	|| is_set(ciisysstatauthfails.operation)
	|| is_set(ciisysstatauthtypefails.operation)
	|| is_set(ciisysstatcorrlsps.operation)
	|| is_set(ciisysstatidfieldlenmismatches.operation)
	|| is_set(ciisysstatlspdbaseoloads.operation)
	|| is_set(ciisysstatlsperrors.operation)
	|| is_set(ciisysstatmanaddrdropfromareas.operation)
	|| is_set(ciisysstatownlsppurges.operation)
	|| is_set(ciisysstatpartchanges.operation)
	|| is_set(ciisysstatseqnumskips.operation)
	|| is_set(ciisysstatspfruns.operation);
}

std::string CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSystemCounterEntry" <<"[ciiSysStatLevel='" <<ciisysstatlevel <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSystemCounterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisysstatlevel.is_set || is_set(ciisysstatlevel.operation)) leaf_name_data.push_back(ciisysstatlevel.get_name_leafdata());
    if (ciisysstatattmpttoexmaxseqnums.is_set || is_set(ciisysstatattmpttoexmaxseqnums.operation)) leaf_name_data.push_back(ciisysstatattmpttoexmaxseqnums.get_name_leafdata());
    if (ciisysstatauthfails.is_set || is_set(ciisysstatauthfails.operation)) leaf_name_data.push_back(ciisysstatauthfails.get_name_leafdata());
    if (ciisysstatauthtypefails.is_set || is_set(ciisysstatauthtypefails.operation)) leaf_name_data.push_back(ciisysstatauthtypefails.get_name_leafdata());
    if (ciisysstatcorrlsps.is_set || is_set(ciisysstatcorrlsps.operation)) leaf_name_data.push_back(ciisysstatcorrlsps.get_name_leafdata());
    if (ciisysstatidfieldlenmismatches.is_set || is_set(ciisysstatidfieldlenmismatches.operation)) leaf_name_data.push_back(ciisysstatidfieldlenmismatches.get_name_leafdata());
    if (ciisysstatlspdbaseoloads.is_set || is_set(ciisysstatlspdbaseoloads.operation)) leaf_name_data.push_back(ciisysstatlspdbaseoloads.get_name_leafdata());
    if (ciisysstatlsperrors.is_set || is_set(ciisysstatlsperrors.operation)) leaf_name_data.push_back(ciisysstatlsperrors.get_name_leafdata());
    if (ciisysstatmanaddrdropfromareas.is_set || is_set(ciisysstatmanaddrdropfromareas.operation)) leaf_name_data.push_back(ciisysstatmanaddrdropfromareas.get_name_leafdata());
    if (ciisysstatownlsppurges.is_set || is_set(ciisysstatownlsppurges.operation)) leaf_name_data.push_back(ciisysstatownlsppurges.get_name_leafdata());
    if (ciisysstatpartchanges.is_set || is_set(ciisysstatpartchanges.operation)) leaf_name_data.push_back(ciisysstatpartchanges.get_name_leafdata());
    if (ciisysstatseqnumskips.is_set || is_set(ciisysstatseqnumskips.operation)) leaf_name_data.push_back(ciisysstatseqnumskips.get_name_leafdata());
    if (ciisysstatspfruns.is_set || is_set(ciisysstatspfruns.operation)) leaf_name_data.push_back(ciisysstatspfruns.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiSysStatLevel")
    {
        ciisysstatlevel = value;
    }
    if(value_path == "ciiSysStatAttmptToExMaxSeqNums")
    {
        ciisysstatattmpttoexmaxseqnums = value;
    }
    if(value_path == "ciiSysStatAuthFails")
    {
        ciisysstatauthfails = value;
    }
    if(value_path == "ciiSysStatAuthTypeFails")
    {
        ciisysstatauthtypefails = value;
    }
    if(value_path == "ciiSysStatCorrLSPs")
    {
        ciisysstatcorrlsps = value;
    }
    if(value_path == "ciiSysStatIDFieldLenMismatches")
    {
        ciisysstatidfieldlenmismatches = value;
    }
    if(value_path == "ciiSysStatLSPDbaseOloads")
    {
        ciisysstatlspdbaseoloads = value;
    }
    if(value_path == "ciiSysStatLSPErrors")
    {
        ciisysstatlsperrors = value;
    }
    if(value_path == "ciiSysStatManAddrDropFromAreas")
    {
        ciisysstatmanaddrdropfromareas = value;
    }
    if(value_path == "ciiSysStatOwnLSPPurges")
    {
        ciisysstatownlsppurges = value;
    }
    if(value_path == "ciiSysStatPartChanges")
    {
        ciisysstatpartchanges = value;
    }
    if(value_path == "ciiSysStatSeqNumSkips")
    {
        ciisysstatseqnumskips = value;
    }
    if(value_path == "ciiSysStatSPFRuns")
    {
        ciisysstatspfruns = value;
    }
}

CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcountertable()
{
    yang_name = "ciiCircuitCounterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciicircuitcountertable::~Ciicircuitcountertable()
{
}

bool CiscoIetfIsisMib::Ciicircuitcountertable::has_data() const
{
    for (std::size_t index=0; index<ciicircuitcounterentry.size(); index++)
    {
        if(ciicircuitcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciicircuitcountertable::has_operation() const
{
    for (std::size_t index=0; index<ciicircuitcounterentry.size(); index++)
    {
        if(ciicircuitcounterentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciicircuitcountertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircuitCounterTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciicircuitcountertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciicircuitcountertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiCircuitCounterEntry")
    {
        for(auto const & c : ciicircuitcounterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry>();
        c->parent = this;
        ciicircuitcounterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciicircuitcountertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciicircuitcounterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciicircuitcountertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::Ciicircuitcounterentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciicircuittype{YType::enumeration, "ciiCircuitType"},
    ciicircadjchanges{YType::uint32, "ciiCircAdjChanges"},
    ciicircauthfails{YType::uint32, "ciiCircAuthFails"},
    ciicircauthtypefails{YType::uint32, "ciiCircAuthTypeFails"},
    ciicircidfieldlenmismatches{YType::uint32, "ciiCircIDFieldLenMismatches"},
    ciicircinitfails{YType::uint32, "ciiCircInitFails"},
    ciicirclandesischanges{YType::uint32, "ciiCircLANDesISChanges"},
    ciicircmaxareaaddrmismatches{YType::uint32, "ciiCircMaxAreaAddrMismatches"},
    ciicircnumadj{YType::uint32, "ciiCircNumAdj"},
    ciicircrejadjs{YType::uint32, "ciiCircRejAdjs"}
{
    yang_name = "ciiCircuitCounterEntry"; yang_parent_name = "ciiCircuitCounterTable";
}

CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::~Ciicircuitcounterentry()
{
}

bool CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::has_data() const
{
    return ciicircindex.is_set
	|| ciicircuittype.is_set
	|| ciicircadjchanges.is_set
	|| ciicircauthfails.is_set
	|| ciicircauthtypefails.is_set
	|| ciicircidfieldlenmismatches.is_set
	|| ciicircinitfails.is_set
	|| ciicirclandesischanges.is_set
	|| ciicircmaxareaaddrmismatches.is_set
	|| ciicircnumadj.is_set
	|| ciicircrejadjs.is_set;
}

bool CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciicircuittype.operation)
	|| is_set(ciicircadjchanges.operation)
	|| is_set(ciicircauthfails.operation)
	|| is_set(ciicircauthtypefails.operation)
	|| is_set(ciicircidfieldlenmismatches.operation)
	|| is_set(ciicircinitfails.operation)
	|| is_set(ciicirclandesischanges.operation)
	|| is_set(ciicircmaxareaaddrmismatches.operation)
	|| is_set(ciicircnumadj.operation)
	|| is_set(ciicircrejadjs.operation);
}

std::string CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircuitCounterEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiCircuitType='" <<ciicircuittype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiCircuitCounterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicircuittype.is_set || is_set(ciicircuittype.operation)) leaf_name_data.push_back(ciicircuittype.get_name_leafdata());
    if (ciicircadjchanges.is_set || is_set(ciicircadjchanges.operation)) leaf_name_data.push_back(ciicircadjchanges.get_name_leafdata());
    if (ciicircauthfails.is_set || is_set(ciicircauthfails.operation)) leaf_name_data.push_back(ciicircauthfails.get_name_leafdata());
    if (ciicircauthtypefails.is_set || is_set(ciicircauthtypefails.operation)) leaf_name_data.push_back(ciicircauthtypefails.get_name_leafdata());
    if (ciicircidfieldlenmismatches.is_set || is_set(ciicircidfieldlenmismatches.operation)) leaf_name_data.push_back(ciicircidfieldlenmismatches.get_name_leafdata());
    if (ciicircinitfails.is_set || is_set(ciicircinitfails.operation)) leaf_name_data.push_back(ciicircinitfails.get_name_leafdata());
    if (ciicirclandesischanges.is_set || is_set(ciicirclandesischanges.operation)) leaf_name_data.push_back(ciicirclandesischanges.get_name_leafdata());
    if (ciicircmaxareaaddrmismatches.is_set || is_set(ciicircmaxareaaddrmismatches.operation)) leaf_name_data.push_back(ciicircmaxareaaddrmismatches.get_name_leafdata());
    if (ciicircnumadj.is_set || is_set(ciicircnumadj.operation)) leaf_name_data.push_back(ciicircnumadj.get_name_leafdata());
    if (ciicircrejadjs.is_set || is_set(ciicircrejadjs.operation)) leaf_name_data.push_back(ciicircrejadjs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiCircuitType")
    {
        ciicircuittype = value;
    }
    if(value_path == "ciiCircAdjChanges")
    {
        ciicircadjchanges = value;
    }
    if(value_path == "ciiCircAuthFails")
    {
        ciicircauthfails = value;
    }
    if(value_path == "ciiCircAuthTypeFails")
    {
        ciicircauthtypefails = value;
    }
    if(value_path == "ciiCircIDFieldLenMismatches")
    {
        ciicircidfieldlenmismatches = value;
    }
    if(value_path == "ciiCircInitFails")
    {
        ciicircinitfails = value;
    }
    if(value_path == "ciiCircLANDesISChanges")
    {
        ciicirclandesischanges = value;
    }
    if(value_path == "ciiCircMaxAreaAddrMismatches")
    {
        ciicircmaxareaaddrmismatches = value;
    }
    if(value_path == "ciiCircNumAdj")
    {
        ciicircnumadj = value;
    }
    if(value_path == "ciiCircRejAdjs")
    {
        ciicircrejadjs = value;
    }
}

CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcountertable()
{
    yang_name = "ciiPacketCounterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciipacketcountertable::~Ciipacketcountertable()
{
}

bool CiscoIetfIsisMib::Ciipacketcountertable::has_data() const
{
    for (std::size_t index=0; index<ciipacketcounterentry.size(); index++)
    {
        if(ciipacketcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciipacketcountertable::has_operation() const
{
    for (std::size_t index=0; index<ciipacketcounterentry.size(); index++)
    {
        if(ciipacketcounterentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciipacketcountertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiPacketCounterTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciipacketcountertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciipacketcountertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiPacketCounterEntry")
    {
        for(auto const & c : ciipacketcounterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry>();
        c->parent = this;
        ciipacketcounterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciipacketcountertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciipacketcounterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciipacketcountertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcounterentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciipacketcountlevel{YType::enumeration, "ciiPacketCountLevel"},
    ciipacketcountdirection{YType::enumeration, "ciiPacketCountDirection"},
    ciipacketcountcsnps{YType::uint32, "ciiPacketCountCSNPs"},
    ciipacketcounteshellos{YType::uint32, "ciiPacketCountESHellos"},
    ciipacketcountiihellos{YType::uint32, "ciiPacketCountIIHellos"},
    ciipacketcountishellos{YType::uint32, "ciiPacketCountISHellos"},
    ciipacketcountlsps{YType::uint32, "ciiPacketCountLSPs"},
    ciipacketcountpsnps{YType::uint32, "ciiPacketCountPSNPs"},
    ciipacketcountunknowns{YType::uint32, "ciiPacketCountUnknowns"}
{
    yang_name = "ciiPacketCounterEntry"; yang_parent_name = "ciiPacketCounterTable";
}

CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::~Ciipacketcounterentry()
{
}

bool CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::has_data() const
{
    return ciicircindex.is_set
	|| ciipacketcountlevel.is_set
	|| ciipacketcountdirection.is_set
	|| ciipacketcountcsnps.is_set
	|| ciipacketcounteshellos.is_set
	|| ciipacketcountiihellos.is_set
	|| ciipacketcountishellos.is_set
	|| ciipacketcountlsps.is_set
	|| ciipacketcountpsnps.is_set
	|| ciipacketcountunknowns.is_set;
}

bool CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciipacketcountlevel.operation)
	|| is_set(ciipacketcountdirection.operation)
	|| is_set(ciipacketcountcsnps.operation)
	|| is_set(ciipacketcounteshellos.operation)
	|| is_set(ciipacketcountiihellos.operation)
	|| is_set(ciipacketcountishellos.operation)
	|| is_set(ciipacketcountlsps.operation)
	|| is_set(ciipacketcountpsnps.operation)
	|| is_set(ciipacketcountunknowns.operation);
}

std::string CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiPacketCounterEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiPacketCountLevel='" <<ciipacketcountlevel <<"']" <<"[ciiPacketCountDirection='" <<ciipacketcountdirection <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiPacketCounterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciipacketcountlevel.is_set || is_set(ciipacketcountlevel.operation)) leaf_name_data.push_back(ciipacketcountlevel.get_name_leafdata());
    if (ciipacketcountdirection.is_set || is_set(ciipacketcountdirection.operation)) leaf_name_data.push_back(ciipacketcountdirection.get_name_leafdata());
    if (ciipacketcountcsnps.is_set || is_set(ciipacketcountcsnps.operation)) leaf_name_data.push_back(ciipacketcountcsnps.get_name_leafdata());
    if (ciipacketcounteshellos.is_set || is_set(ciipacketcounteshellos.operation)) leaf_name_data.push_back(ciipacketcounteshellos.get_name_leafdata());
    if (ciipacketcountiihellos.is_set || is_set(ciipacketcountiihellos.operation)) leaf_name_data.push_back(ciipacketcountiihellos.get_name_leafdata());
    if (ciipacketcountishellos.is_set || is_set(ciipacketcountishellos.operation)) leaf_name_data.push_back(ciipacketcountishellos.get_name_leafdata());
    if (ciipacketcountlsps.is_set || is_set(ciipacketcountlsps.operation)) leaf_name_data.push_back(ciipacketcountlsps.get_name_leafdata());
    if (ciipacketcountpsnps.is_set || is_set(ciipacketcountpsnps.operation)) leaf_name_data.push_back(ciipacketcountpsnps.get_name_leafdata());
    if (ciipacketcountunknowns.is_set || is_set(ciipacketcountunknowns.operation)) leaf_name_data.push_back(ciipacketcountunknowns.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiPacketCountLevel")
    {
        ciipacketcountlevel = value;
    }
    if(value_path == "ciiPacketCountDirection")
    {
        ciipacketcountdirection = value;
    }
    if(value_path == "ciiPacketCountCSNPs")
    {
        ciipacketcountcsnps = value;
    }
    if(value_path == "ciiPacketCountESHellos")
    {
        ciipacketcounteshellos = value;
    }
    if(value_path == "ciiPacketCountIIHellos")
    {
        ciipacketcountiihellos = value;
    }
    if(value_path == "ciiPacketCountISHellos")
    {
        ciipacketcountishellos = value;
    }
    if(value_path == "ciiPacketCountLSPs")
    {
        ciipacketcountlsps = value;
    }
    if(value_path == "ciiPacketCountPSNPs")
    {
        ciipacketcountpsnps = value;
    }
    if(value_path == "ciiPacketCountUnknowns")
    {
        ciipacketcountunknowns = value;
    }
}

CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjtable()
{
    yang_name = "ciiISAdjTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiisadjtable::~Ciiisadjtable()
{
}

bool CiscoIetfIsisMib::Ciiisadjtable::has_data() const
{
    for (std::size_t index=0; index<ciiisadjentry.size(); index++)
    {
        if(ciiisadjentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiisadjtable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjentry.size(); index++)
    {
        if(ciiisadjentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiisadjtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjEntry")
    {
        for(auto const & c : ciiisadjentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry>();
        c->parent = this;
        ciiisadjentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiisadjentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiisadjtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::int32, "ciiISAdjIndex"},
    ciiisadj3waystate{YType::enumeration, "ciiISAdj3WayState"},
    ciiisadjholdtimer{YType::uint32, "ciiISAdjHoldTimer"},
    ciiisadjlastuptime{YType::uint32, "ciiISAdjLastUpTime"},
    ciiisadjnbrextendedcircid{YType::uint32, "ciiISAdjNbrExtendedCircID"},
    ciiisadjneighpriority{YType::int32, "ciiISAdjNeighPriority"},
    ciiisadjneighsnpaaddress{YType::str, "ciiISAdjNeighSNPAAddress"},
    ciiisadjneighsysid{YType::str, "ciiISAdjNeighSysID"},
    ciiisadjneighsystype{YType::enumeration, "ciiISAdjNeighSysType"},
    ciiisadjstate{YType::enumeration, "ciiISAdjState"},
    ciiisadjusage{YType::enumeration, "ciiISAdjUsage"}
{
    yang_name = "ciiISAdjEntry"; yang_parent_name = "ciiISAdjTable";
}

CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::~Ciiisadjentry()
{
}

bool CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::has_data() const
{
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadj3waystate.is_set
	|| ciiisadjholdtimer.is_set
	|| ciiisadjlastuptime.is_set
	|| ciiisadjnbrextendedcircid.is_set
	|| ciiisadjneighpriority.is_set
	|| ciiisadjneighsnpaaddress.is_set
	|| ciiisadjneighsysid.is_set
	|| ciiisadjneighsystype.is_set
	|| ciiisadjstate.is_set
	|| ciiisadjusage.is_set;
}

bool CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciiisadjindex.operation)
	|| is_set(ciiisadj3waystate.operation)
	|| is_set(ciiisadjholdtimer.operation)
	|| is_set(ciiisadjlastuptime.operation)
	|| is_set(ciiisadjnbrextendedcircid.operation)
	|| is_set(ciiisadjneighpriority.operation)
	|| is_set(ciiisadjneighsnpaaddress.operation)
	|| is_set(ciiisadjneighsysid.operation)
	|| is_set(ciiisadjneighsystype.operation)
	|| is_set(ciiisadjstate.operation)
	|| is_set(ciiisadjusage.operation);
}

std::string CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiISAdjIndex='" <<ciiisadjindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.operation)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadj3waystate.is_set || is_set(ciiisadj3waystate.operation)) leaf_name_data.push_back(ciiisadj3waystate.get_name_leafdata());
    if (ciiisadjholdtimer.is_set || is_set(ciiisadjholdtimer.operation)) leaf_name_data.push_back(ciiisadjholdtimer.get_name_leafdata());
    if (ciiisadjlastuptime.is_set || is_set(ciiisadjlastuptime.operation)) leaf_name_data.push_back(ciiisadjlastuptime.get_name_leafdata());
    if (ciiisadjnbrextendedcircid.is_set || is_set(ciiisadjnbrextendedcircid.operation)) leaf_name_data.push_back(ciiisadjnbrextendedcircid.get_name_leafdata());
    if (ciiisadjneighpriority.is_set || is_set(ciiisadjneighpriority.operation)) leaf_name_data.push_back(ciiisadjneighpriority.get_name_leafdata());
    if (ciiisadjneighsnpaaddress.is_set || is_set(ciiisadjneighsnpaaddress.operation)) leaf_name_data.push_back(ciiisadjneighsnpaaddress.get_name_leafdata());
    if (ciiisadjneighsysid.is_set || is_set(ciiisadjneighsysid.operation)) leaf_name_data.push_back(ciiisadjneighsysid.get_name_leafdata());
    if (ciiisadjneighsystype.is_set || is_set(ciiisadjneighsystype.operation)) leaf_name_data.push_back(ciiisadjneighsystype.get_name_leafdata());
    if (ciiisadjstate.is_set || is_set(ciiisadjstate.operation)) leaf_name_data.push_back(ciiisadjstate.get_name_leafdata());
    if (ciiisadjusage.is_set || is_set(ciiisadjusage.operation)) leaf_name_data.push_back(ciiisadjusage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
    }
    if(value_path == "ciiISAdj3WayState")
    {
        ciiisadj3waystate = value;
    }
    if(value_path == "ciiISAdjHoldTimer")
    {
        ciiisadjholdtimer = value;
    }
    if(value_path == "ciiISAdjLastUpTime")
    {
        ciiisadjlastuptime = value;
    }
    if(value_path == "ciiISAdjNbrExtendedCircID")
    {
        ciiisadjnbrextendedcircid = value;
    }
    if(value_path == "ciiISAdjNeighPriority")
    {
        ciiisadjneighpriority = value;
    }
    if(value_path == "ciiISAdjNeighSNPAAddress")
    {
        ciiisadjneighsnpaaddress = value;
    }
    if(value_path == "ciiISAdjNeighSysID")
    {
        ciiisadjneighsysid = value;
    }
    if(value_path == "ciiISAdjNeighSysType")
    {
        ciiisadjneighsystype = value;
    }
    if(value_path == "ciiISAdjState")
    {
        ciiisadjstate = value;
    }
    if(value_path == "ciiISAdjUsage")
    {
        ciiisadjusage = value;
    }
}

CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrtable()
{
    yang_name = "ciiISAdjAreaAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiisadjareaaddrtable::~Ciiisadjareaaddrtable()
{
}

bool CiscoIetfIsisMib::Ciiisadjareaaddrtable::has_data() const
{
    for (std::size_t index=0; index<ciiisadjareaaddrentry.size(); index++)
    {
        if(ciiisadjareaaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiisadjareaaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjareaaddrentry.size(); index++)
    {
        if(ciiisadjareaaddrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiisadjareaaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjAreaAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjareaaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjareaaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjAreaAddrEntry")
    {
        for(auto const & c : ciiisadjareaaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry>();
        c->parent = this;
        ciiisadjareaaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjareaaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiisadjareaaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiisadjareaaddrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::Ciiisadjareaaddrentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::str, "ciiISAdjIndex"},
    ciiisadjareaaddrindex{YType::int32, "ciiISAdjAreaAddrIndex"},
    ciiisadjareaaddress{YType::str, "ciiISAdjAreaAddress"}
{
    yang_name = "ciiISAdjAreaAddrEntry"; yang_parent_name = "ciiISAdjAreaAddrTable";
}

CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::~Ciiisadjareaaddrentry()
{
}

bool CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::has_data() const
{
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadjareaaddrindex.is_set
	|| ciiisadjareaaddress.is_set;
}

bool CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciiisadjindex.operation)
	|| is_set(ciiisadjareaaddrindex.operation)
	|| is_set(ciiisadjareaaddress.operation);
}

std::string CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjAreaAddrEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiISAdjIndex='" <<ciiisadjindex <<"']" <<"[ciiISAdjAreaAddrIndex='" <<ciiisadjareaaddrindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjAreaAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.operation)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjareaaddrindex.is_set || is_set(ciiisadjareaaddrindex.operation)) leaf_name_data.push_back(ciiisadjareaaddrindex.get_name_leafdata());
    if (ciiisadjareaaddress.is_set || is_set(ciiisadjareaaddress.operation)) leaf_name_data.push_back(ciiisadjareaaddress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
    }
    if(value_path == "ciiISAdjAreaAddrIndex")
    {
        ciiisadjareaaddrindex = value;
    }
    if(value_path == "ciiISAdjAreaAddress")
    {
        ciiisadjareaaddress = value;
    }
}

CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrtable()
{
    yang_name = "ciiISAdjIPAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiisadjipaddrtable::~Ciiisadjipaddrtable()
{
}

bool CiscoIetfIsisMib::Ciiisadjipaddrtable::has_data() const
{
    for (std::size_t index=0; index<ciiisadjipaddrentry.size(); index++)
    {
        if(ciiisadjipaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiisadjipaddrtable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjipaddrentry.size(); index++)
    {
        if(ciiisadjipaddrentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiisadjipaddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjIPAddrTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjipaddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjipaddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjIPAddrEntry")
    {
        for(auto const & c : ciiisadjipaddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry>();
        c->parent = this;
        ciiisadjipaddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjipaddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiisadjipaddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiisadjipaddrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::Ciiisadjipaddrentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::str, "ciiISAdjIndex"},
    ciiisadjipaddrindex{YType::int32, "ciiISAdjIPAddrIndex"},
    ciiisadjipaddraddress{YType::str, "ciiISAdjIPAddrAddress"},
    ciiisadjipaddrtype{YType::enumeration, "ciiISAdjIPAddrType"}
{
    yang_name = "ciiISAdjIPAddrEntry"; yang_parent_name = "ciiISAdjIPAddrTable";
}

CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::~Ciiisadjipaddrentry()
{
}

bool CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::has_data() const
{
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadjipaddrindex.is_set
	|| ciiisadjipaddraddress.is_set
	|| ciiisadjipaddrtype.is_set;
}

bool CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciiisadjindex.operation)
	|| is_set(ciiisadjipaddrindex.operation)
	|| is_set(ciiisadjipaddraddress.operation)
	|| is_set(ciiisadjipaddrtype.operation);
}

std::string CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjIPAddrEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiISAdjIndex='" <<ciiisadjindex <<"']" <<"[ciiISAdjIPAddrIndex='" <<ciiisadjipaddrindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjIPAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.operation)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjipaddrindex.is_set || is_set(ciiisadjipaddrindex.operation)) leaf_name_data.push_back(ciiisadjipaddrindex.get_name_leafdata());
    if (ciiisadjipaddraddress.is_set || is_set(ciiisadjipaddraddress.operation)) leaf_name_data.push_back(ciiisadjipaddraddress.get_name_leafdata());
    if (ciiisadjipaddrtype.is_set || is_set(ciiisadjipaddrtype.operation)) leaf_name_data.push_back(ciiisadjipaddrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
    }
    if(value_path == "ciiISAdjIPAddrIndex")
    {
        ciiisadjipaddrindex = value;
    }
    if(value_path == "ciiISAdjIPAddrAddress")
    {
        ciiisadjipaddraddress = value;
    }
    if(value_path == "ciiISAdjIPAddrType")
    {
        ciiisadjipaddrtype = value;
    }
}

CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsupptable()
{
    yang_name = "ciiISAdjProtSuppTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiisadjprotsupptable::~Ciiisadjprotsupptable()
{
}

bool CiscoIetfIsisMib::Ciiisadjprotsupptable::has_data() const
{
    for (std::size_t index=0; index<ciiisadjprotsuppentry.size(); index++)
    {
        if(ciiisadjprotsuppentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiisadjprotsupptable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjprotsuppentry.size(); index++)
    {
        if(ciiisadjprotsuppentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiisadjprotsupptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjProtSuppTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjprotsupptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjprotsupptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjProtSuppEntry")
    {
        for(auto const & c : ciiisadjprotsuppentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry>();
        c->parent = this;
        ciiisadjprotsuppentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjprotsupptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiisadjprotsuppentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiisadjprotsupptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::Ciiisadjprotsuppentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::str, "ciiISAdjIndex"},
    ciiisadjprotsuppprotocol{YType::enumeration, "ciiISAdjProtSuppProtocol"}
{
    yang_name = "ciiISAdjProtSuppEntry"; yang_parent_name = "ciiISAdjProtSuppTable";
}

CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::~Ciiisadjprotsuppentry()
{
}

bool CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::has_data() const
{
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadjprotsuppprotocol.is_set;
}

bool CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciiisadjindex.operation)
	|| is_set(ciiisadjprotsuppprotocol.operation);
}

std::string CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjProtSuppEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiISAdjIndex='" <<ciiisadjindex <<"']" <<"[ciiISAdjProtSuppProtocol='" <<ciiisadjprotsuppprotocol <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjProtSuppTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.operation)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjprotsuppprotocol.is_set || is_set(ciiisadjprotsuppprotocol.operation)) leaf_name_data.push_back(ciiisadjprotsuppprotocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
    }
    if(value_path == "ciiISAdjProtSuppProtocol")
    {
        ciiisadjprotsuppprotocol = value;
    }
}

CiscoIetfIsisMib::Ciiratable::Ciiratable()
{
    yang_name = "ciiRATable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiratable::~Ciiratable()
{
}

bool CiscoIetfIsisMib::Ciiratable::has_data() const
{
    for (std::size_t index=0; index<ciiraentry.size(); index++)
    {
        if(ciiraentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiratable::has_operation() const
{
    for (std::size_t index=0; index<ciiraentry.size(); index++)
    {
        if(ciiraentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiratable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRATable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiratable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiratable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiRAEntry")
    {
        for(auto const & c : ciiraentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiratable::Ciiraentry>();
        c->parent = this;
        ciiraentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiratable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiraentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiratable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiraentry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiraindex{YType::int32, "ciiRAIndex"},
    ciiraaddrprefix{YType::str, "ciiRAAddrPrefix"},
    ciiraadminstate{YType::enumeration, "ciiRAAdminState"},
    ciiraexiststate{YType::enumeration, "ciiRAExistState"},
    ciiramaptype{YType::enumeration, "ciiRAMapType"},
    ciirametric{YType::int32, "ciiRAMetric"},
    ciirametrictype{YType::enumeration, "ciiRAMetricType"},
    ciirasnpaaddress{YType::str, "ciiRASNPAAddress"},
    ciirasnpamask{YType::str, "ciiRASNPAMask"},
    ciirasnpaprefix{YType::str, "ciiRASNPAPrefix"},
    ciiratype{YType::enumeration, "ciiRAType"}
{
    yang_name = "ciiRAEntry"; yang_parent_name = "ciiRATable";
}

CiscoIetfIsisMib::Ciiratable::Ciiraentry::~Ciiraentry()
{
}

bool CiscoIetfIsisMib::Ciiratable::Ciiraentry::has_data() const
{
    return ciicircindex.is_set
	|| ciiraindex.is_set
	|| ciiraaddrprefix.is_set
	|| ciiraadminstate.is_set
	|| ciiraexiststate.is_set
	|| ciiramaptype.is_set
	|| ciirametric.is_set
	|| ciirametrictype.is_set
	|| ciirasnpaaddress.is_set
	|| ciirasnpamask.is_set
	|| ciirasnpaprefix.is_set
	|| ciiratype.is_set;
}

bool CiscoIetfIsisMib::Ciiratable::Ciiraentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciicircindex.operation)
	|| is_set(ciiraindex.operation)
	|| is_set(ciiraaddrprefix.operation)
	|| is_set(ciiraadminstate.operation)
	|| is_set(ciiraexiststate.operation)
	|| is_set(ciiramaptype.operation)
	|| is_set(ciirametric.operation)
	|| is_set(ciirametrictype.operation)
	|| is_set(ciirasnpaaddress.operation)
	|| is_set(ciirasnpamask.operation)
	|| is_set(ciirasnpaprefix.operation)
	|| is_set(ciiratype.operation);
}

std::string CiscoIetfIsisMib::Ciiratable::Ciiraentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRAEntry" <<"[ciiCircIndex='" <<ciicircindex <<"']" <<"[ciiRAIndex='" <<ciiraindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiratable::Ciiraentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiRATable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.operation)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiraindex.is_set || is_set(ciiraindex.operation)) leaf_name_data.push_back(ciiraindex.get_name_leafdata());
    if (ciiraaddrprefix.is_set || is_set(ciiraaddrprefix.operation)) leaf_name_data.push_back(ciiraaddrprefix.get_name_leafdata());
    if (ciiraadminstate.is_set || is_set(ciiraadminstate.operation)) leaf_name_data.push_back(ciiraadminstate.get_name_leafdata());
    if (ciiraexiststate.is_set || is_set(ciiraexiststate.operation)) leaf_name_data.push_back(ciiraexiststate.get_name_leafdata());
    if (ciiramaptype.is_set || is_set(ciiramaptype.operation)) leaf_name_data.push_back(ciiramaptype.get_name_leafdata());
    if (ciirametric.is_set || is_set(ciirametric.operation)) leaf_name_data.push_back(ciirametric.get_name_leafdata());
    if (ciirametrictype.is_set || is_set(ciirametrictype.operation)) leaf_name_data.push_back(ciirametrictype.get_name_leafdata());
    if (ciirasnpaaddress.is_set || is_set(ciirasnpaaddress.operation)) leaf_name_data.push_back(ciirasnpaaddress.get_name_leafdata());
    if (ciirasnpamask.is_set || is_set(ciirasnpamask.operation)) leaf_name_data.push_back(ciirasnpamask.get_name_leafdata());
    if (ciirasnpaprefix.is_set || is_set(ciirasnpaprefix.operation)) leaf_name_data.push_back(ciirasnpaprefix.get_name_leafdata());
    if (ciiratype.is_set || is_set(ciiratype.operation)) leaf_name_data.push_back(ciiratype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiratable::Ciiraentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiratable::Ciiraentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiratable::Ciiraentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
    }
    if(value_path == "ciiRAIndex")
    {
        ciiraindex = value;
    }
    if(value_path == "ciiRAAddrPrefix")
    {
        ciiraaddrprefix = value;
    }
    if(value_path == "ciiRAAdminState")
    {
        ciiraadminstate = value;
    }
    if(value_path == "ciiRAExistState")
    {
        ciiraexiststate = value;
    }
    if(value_path == "ciiRAMapType")
    {
        ciiramaptype = value;
    }
    if(value_path == "ciiRAMetric")
    {
        ciirametric = value;
    }
    if(value_path == "ciiRAMetricType")
    {
        ciirametrictype = value;
    }
    if(value_path == "ciiRASNPAAddress")
    {
        ciirasnpaaddress = value;
    }
    if(value_path == "ciiRASNPAMask")
    {
        ciirasnpamask = value;
    }
    if(value_path == "ciiRASNPAPrefix")
    {
        ciirasnpaprefix = value;
    }
    if(value_path == "ciiRAType")
    {
        ciiratype = value;
    }
}

CiscoIetfIsisMib::Ciiipratable::Ciiipratable()
{
    yang_name = "ciiIPRATable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciiipratable::~Ciiipratable()
{
}

bool CiscoIetfIsisMib::Ciiipratable::has_data() const
{
    for (std::size_t index=0; index<ciiipraentry.size(); index++)
    {
        if(ciiipraentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciiipratable::has_operation() const
{
    for (std::size_t index=0; index<ciiipraentry.size(); index++)
    {
        if(ciiipraentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciiipratable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiIPRATable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiipratable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiipratable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiIPRAEntry")
    {
        for(auto const & c : ciiipraentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciiipratable::Ciiipraentry>();
        c->parent = this;
        ciiipraentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiipratable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciiipraentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciiipratable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiipraentry()
    :
    ciiipradesttype{YType::enumeration, "ciiIPRADestType"},
    ciiipradest{YType::str, "ciiIPRADest"},
    ciiipradestprefixlen{YType::uint32, "ciiIPRADestPrefixLen"},
    ciiipranexthopindex{YType::int32, "ciiIPRANextHopIndex"},
    ciiipraadminstate{YType::enumeration, "ciiIPRAAdminState"},
    ciiipraexiststate{YType::enumeration, "ciiIPRAExistState"},
    ciiiprafullmetric{YType::uint32, "ciiIPRAFullMetric"},
    ciiiprametric{YType::int32, "ciiIPRAMetric"},
    ciiiprametrictype{YType::enumeration, "ciiIPRAMetricType"},
    ciiipranexthop{YType::str, "ciiIPRANextHop"},
    ciiipranexthoptype{YType::enumeration, "ciiIPRANextHopType"},
    ciiiprasnpaaddress{YType::str, "ciiIPRASNPAAddress"},
    ciiiprasourcetype{YType::enumeration, "ciiIPRASourceType"},
    ciiipratype{YType::enumeration, "ciiIPRAType"}
{
    yang_name = "ciiIPRAEntry"; yang_parent_name = "ciiIPRATable";
}

CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::~Ciiipraentry()
{
}

bool CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::has_data() const
{
    return ciiipradesttype.is_set
	|| ciiipradest.is_set
	|| ciiipradestprefixlen.is_set
	|| ciiipranexthopindex.is_set
	|| ciiipraadminstate.is_set
	|| ciiipraexiststate.is_set
	|| ciiiprafullmetric.is_set
	|| ciiiprametric.is_set
	|| ciiiprametrictype.is_set
	|| ciiipranexthop.is_set
	|| ciiipranexthoptype.is_set
	|| ciiiprasnpaaddress.is_set
	|| ciiiprasourcetype.is_set
	|| ciiipratype.is_set;
}

bool CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciiipradesttype.operation)
	|| is_set(ciiipradest.operation)
	|| is_set(ciiipradestprefixlen.operation)
	|| is_set(ciiipranexthopindex.operation)
	|| is_set(ciiipraadminstate.operation)
	|| is_set(ciiipraexiststate.operation)
	|| is_set(ciiiprafullmetric.operation)
	|| is_set(ciiiprametric.operation)
	|| is_set(ciiiprametrictype.operation)
	|| is_set(ciiipranexthop.operation)
	|| is_set(ciiipranexthoptype.operation)
	|| is_set(ciiiprasnpaaddress.operation)
	|| is_set(ciiiprasourcetype.operation)
	|| is_set(ciiipratype.operation);
}

std::string CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiIPRAEntry" <<"[ciiIPRADestType='" <<ciiipradesttype <<"']" <<"[ciiIPRADest='" <<ciiipradest <<"']" <<"[ciiIPRADestPrefixLen='" <<ciiipradestprefixlen <<"']" <<"[ciiIPRANextHopIndex='" <<ciiipranexthopindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiIPRATable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiipradesttype.is_set || is_set(ciiipradesttype.operation)) leaf_name_data.push_back(ciiipradesttype.get_name_leafdata());
    if (ciiipradest.is_set || is_set(ciiipradest.operation)) leaf_name_data.push_back(ciiipradest.get_name_leafdata());
    if (ciiipradestprefixlen.is_set || is_set(ciiipradestprefixlen.operation)) leaf_name_data.push_back(ciiipradestprefixlen.get_name_leafdata());
    if (ciiipranexthopindex.is_set || is_set(ciiipranexthopindex.operation)) leaf_name_data.push_back(ciiipranexthopindex.get_name_leafdata());
    if (ciiipraadminstate.is_set || is_set(ciiipraadminstate.operation)) leaf_name_data.push_back(ciiipraadminstate.get_name_leafdata());
    if (ciiipraexiststate.is_set || is_set(ciiipraexiststate.operation)) leaf_name_data.push_back(ciiipraexiststate.get_name_leafdata());
    if (ciiiprafullmetric.is_set || is_set(ciiiprafullmetric.operation)) leaf_name_data.push_back(ciiiprafullmetric.get_name_leafdata());
    if (ciiiprametric.is_set || is_set(ciiiprametric.operation)) leaf_name_data.push_back(ciiiprametric.get_name_leafdata());
    if (ciiiprametrictype.is_set || is_set(ciiiprametrictype.operation)) leaf_name_data.push_back(ciiiprametrictype.get_name_leafdata());
    if (ciiipranexthop.is_set || is_set(ciiipranexthop.operation)) leaf_name_data.push_back(ciiipranexthop.get_name_leafdata());
    if (ciiipranexthoptype.is_set || is_set(ciiipranexthoptype.operation)) leaf_name_data.push_back(ciiipranexthoptype.get_name_leafdata());
    if (ciiiprasnpaaddress.is_set || is_set(ciiiprasnpaaddress.operation)) leaf_name_data.push_back(ciiiprasnpaaddress.get_name_leafdata());
    if (ciiiprasourcetype.is_set || is_set(ciiiprasourcetype.operation)) leaf_name_data.push_back(ciiiprasourcetype.get_name_leafdata());
    if (ciiipratype.is_set || is_set(ciiipratype.operation)) leaf_name_data.push_back(ciiipratype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiIPRADestType")
    {
        ciiipradesttype = value;
    }
    if(value_path == "ciiIPRADest")
    {
        ciiipradest = value;
    }
    if(value_path == "ciiIPRADestPrefixLen")
    {
        ciiipradestprefixlen = value;
    }
    if(value_path == "ciiIPRANextHopIndex")
    {
        ciiipranexthopindex = value;
    }
    if(value_path == "ciiIPRAAdminState")
    {
        ciiipraadminstate = value;
    }
    if(value_path == "ciiIPRAExistState")
    {
        ciiipraexiststate = value;
    }
    if(value_path == "ciiIPRAFullMetric")
    {
        ciiiprafullmetric = value;
    }
    if(value_path == "ciiIPRAMetric")
    {
        ciiiprametric = value;
    }
    if(value_path == "ciiIPRAMetricType")
    {
        ciiiprametrictype = value;
    }
    if(value_path == "ciiIPRANextHop")
    {
        ciiipranexthop = value;
    }
    if(value_path == "ciiIPRANextHopType")
    {
        ciiipranexthoptype = value;
    }
    if(value_path == "ciiIPRASNPAAddress")
    {
        ciiiprasnpaaddress = value;
    }
    if(value_path == "ciiIPRASourceType")
    {
        ciiiprasourcetype = value;
    }
    if(value_path == "ciiIPRAType")
    {
        ciiipratype = value;
    }
}

CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummarytable()
{
    yang_name = "ciiLSPSummaryTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciilspsummarytable::~Ciilspsummarytable()
{
}

bool CiscoIetfIsisMib::Ciilspsummarytable::has_data() const
{
    for (std::size_t index=0; index<ciilspsummaryentry.size(); index++)
    {
        if(ciilspsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciilspsummarytable::has_operation() const
{
    for (std::size_t index=0; index<ciilspsummaryentry.size(); index++)
    {
        if(ciilspsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciilspsummarytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPSummaryTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciilspsummarytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciilspsummarytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiLSPSummaryEntry")
    {
        for(auto const & c : ciilspsummaryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry>();
        c->parent = this;
        ciilspsummaryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciilspsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciilspsummaryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciilspsummarytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::Ciilspsummaryentry()
    :
    ciilsplevel{YType::enumeration, "ciiLSPLevel"},
    ciilspid{YType::str, "ciiLSPID"},
    ciilspattributes{YType::uint32, "ciiLSPAttributes"},
    ciilspchecksum{YType::uint32, "ciiLSPChecksum"},
    ciilsplifetimeremain{YType::uint32, "ciiLSPLifetimeRemain"},
    ciilsppdulength{YType::uint32, "ciiLSPPDULength"},
    ciilspseq{YType::uint32, "ciiLSPSeq"},
    ciilspzerolife{YType::boolean, "ciiLSPZeroLife"}
{
    yang_name = "ciiLSPSummaryEntry"; yang_parent_name = "ciiLSPSummaryTable";
}

CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::~Ciilspsummaryentry()
{
}

bool CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::has_data() const
{
    return ciilsplevel.is_set
	|| ciilspid.is_set
	|| ciilspattributes.is_set
	|| ciilspchecksum.is_set
	|| ciilsplifetimeremain.is_set
	|| ciilsppdulength.is_set
	|| ciilspseq.is_set
	|| ciilspzerolife.is_set;
}

bool CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciilsplevel.operation)
	|| is_set(ciilspid.operation)
	|| is_set(ciilspattributes.operation)
	|| is_set(ciilspchecksum.operation)
	|| is_set(ciilsplifetimeremain.operation)
	|| is_set(ciilsppdulength.operation)
	|| is_set(ciilspseq.operation)
	|| is_set(ciilspzerolife.operation);
}

std::string CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPSummaryEntry" <<"[ciiLSPLevel='" <<ciilsplevel <<"']" <<"[ciiLSPID='" <<ciilspid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiLSPSummaryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciilsplevel.is_set || is_set(ciilsplevel.operation)) leaf_name_data.push_back(ciilsplevel.get_name_leafdata());
    if (ciilspid.is_set || is_set(ciilspid.operation)) leaf_name_data.push_back(ciilspid.get_name_leafdata());
    if (ciilspattributes.is_set || is_set(ciilspattributes.operation)) leaf_name_data.push_back(ciilspattributes.get_name_leafdata());
    if (ciilspchecksum.is_set || is_set(ciilspchecksum.operation)) leaf_name_data.push_back(ciilspchecksum.get_name_leafdata());
    if (ciilsplifetimeremain.is_set || is_set(ciilsplifetimeremain.operation)) leaf_name_data.push_back(ciilsplifetimeremain.get_name_leafdata());
    if (ciilsppdulength.is_set || is_set(ciilsppdulength.operation)) leaf_name_data.push_back(ciilsppdulength.get_name_leafdata());
    if (ciilspseq.is_set || is_set(ciilspseq.operation)) leaf_name_data.push_back(ciilspseq.get_name_leafdata());
    if (ciilspzerolife.is_set || is_set(ciilspzerolife.operation)) leaf_name_data.push_back(ciilspzerolife.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiLSPLevel")
    {
        ciilsplevel = value;
    }
    if(value_path == "ciiLSPID")
    {
        ciilspid = value;
    }
    if(value_path == "ciiLSPAttributes")
    {
        ciilspattributes = value;
    }
    if(value_path == "ciiLSPChecksum")
    {
        ciilspchecksum = value;
    }
    if(value_path == "ciiLSPLifetimeRemain")
    {
        ciilsplifetimeremain = value;
    }
    if(value_path == "ciiLSPPDULength")
    {
        ciilsppdulength = value;
    }
    if(value_path == "ciiLSPSeq")
    {
        ciilspseq = value;
    }
    if(value_path == "ciiLSPZeroLife")
    {
        ciilspzerolife = value;
    }
}

CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlvtable()
{
    yang_name = "ciiLSPTLVTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB";
}

CiscoIetfIsisMib::Ciilsptlvtable::~Ciilsptlvtable()
{
}

bool CiscoIetfIsisMib::Ciilsptlvtable::has_data() const
{
    for (std::size_t index=0; index<ciilsptlventry.size(); index++)
    {
        if(ciilsptlventry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfIsisMib::Ciilsptlvtable::has_operation() const
{
    for (std::size_t index=0; index<ciilsptlventry.size(); index++)
    {
        if(ciilsptlventry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfIsisMib::Ciilsptlvtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPTLVTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciilsptlvtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciilsptlvtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiLSPTLVEntry")
    {
        for(auto const & c : ciilsptlventry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry>();
        c->parent = this;
        ciilsptlventry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciilsptlvtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciilsptlventry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfIsisMib::Ciilsptlvtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::Ciilsptlventry()
    :
    ciilsplevel{YType::enumeration, "ciiLSPLevel"},
    ciilspid{YType::str, "ciiLSPID"},
    ciilsptlvindex{YType::uint32, "ciiLSPTLVIndex"},
    ciilsptlvchecksum{YType::uint32, "ciiLSPTLVChecksum"},
    ciilsptlvlen{YType::uint32, "ciiLSPTLVLen"},
    ciilsptlvseq{YType::uint32, "ciiLSPTLVSeq"},
    ciilsptlvtype{YType::uint32, "ciiLSPTLVType"},
    ciilsptlvvalue{YType::str, "ciiLSPTLVValue"}
{
    yang_name = "ciiLSPTLVEntry"; yang_parent_name = "ciiLSPTLVTable";
}

CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::~Ciilsptlventry()
{
}

bool CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::has_data() const
{
    return ciilsplevel.is_set
	|| ciilspid.is_set
	|| ciilsptlvindex.is_set
	|| ciilsptlvchecksum.is_set
	|| ciilsptlvlen.is_set
	|| ciilsptlvseq.is_set
	|| ciilsptlvtype.is_set
	|| ciilsptlvvalue.is_set;
}

bool CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciilsplevel.operation)
	|| is_set(ciilspid.operation)
	|| is_set(ciilsptlvindex.operation)
	|| is_set(ciilsptlvchecksum.operation)
	|| is_set(ciilsptlvlen.operation)
	|| is_set(ciilsptlvseq.operation)
	|| is_set(ciilsptlvtype.operation)
	|| is_set(ciilsptlvvalue.operation);
}

std::string CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPTLVEntry" <<"[ciiLSPLevel='" <<ciilsplevel <<"']" <<"[ciiLSPID='" <<ciilspid <<"']" <<"[ciiLSPTLVIndex='" <<ciilsptlvindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiLSPTLVTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciilsplevel.is_set || is_set(ciilsplevel.operation)) leaf_name_data.push_back(ciilsplevel.get_name_leafdata());
    if (ciilspid.is_set || is_set(ciilspid.operation)) leaf_name_data.push_back(ciilspid.get_name_leafdata());
    if (ciilsptlvindex.is_set || is_set(ciilsptlvindex.operation)) leaf_name_data.push_back(ciilsptlvindex.get_name_leafdata());
    if (ciilsptlvchecksum.is_set || is_set(ciilsptlvchecksum.operation)) leaf_name_data.push_back(ciilsptlvchecksum.get_name_leafdata());
    if (ciilsptlvlen.is_set || is_set(ciilsptlvlen.operation)) leaf_name_data.push_back(ciilsptlvlen.get_name_leafdata());
    if (ciilsptlvseq.is_set || is_set(ciilsptlvseq.operation)) leaf_name_data.push_back(ciilsptlvseq.get_name_leafdata());
    if (ciilsptlvtype.is_set || is_set(ciilsptlvtype.operation)) leaf_name_data.push_back(ciilsptlvtype.get_name_leafdata());
    if (ciilsptlvvalue.is_set || is_set(ciilsptlvvalue.operation)) leaf_name_data.push_back(ciilsptlvvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciiLSPLevel")
    {
        ciilsplevel = value;
    }
    if(value_path == "ciiLSPID")
    {
        ciilspid = value;
    }
    if(value_path == "ciiLSPTLVIndex")
    {
        ciilsptlvindex = value;
    }
    if(value_path == "ciiLSPTLVChecksum")
    {
        ciilsptlvchecksum = value;
    }
    if(value_path == "ciiLSPTLVLen")
    {
        ciilsptlvlen = value;
    }
    if(value_path == "ciiLSPTLVSeq")
    {
        ciilsptlvseq = value;
    }
    if(value_path == "ciiLSPTLVType")
    {
        ciilsptlvtype = value;
    }
    if(value_path == "ciiLSPTLVValue")
    {
        ciilsptlvvalue = value;
    }
}

const Enum::YLeaf CiimetricstyleEnum::narrow {1, "narrow"};
const Enum::YLeaf CiimetricstyleEnum::wide {2, "wide"};
const Enum::YLeaf CiimetricstyleEnum::both {3, "both"};

const Enum::YLeaf CiilevelstateEnum::off {1, "off"};
const Enum::YLeaf CiilevelstateEnum::on {2, "on"};
const Enum::YLeaf CiilevelstateEnum::waiting {3, "waiting"};
const Enum::YLeaf CiilevelstateEnum::overloaded {4, "overloaded"};

const Enum::YLeaf CiisupportedprotocolEnum::iso8473 {129, "iso8473"};
const Enum::YLeaf CiisupportedprotocolEnum::ipV6 {142, "ipV6"};
const Enum::YLeaf CiisupportedprotocolEnum::ip {204, "ip"};

const Enum::YLeaf CiiadminstateEnum::on {1, "on"};
const Enum::YLeaf CiiadminstateEnum::off {2, "off"};

const Enum::YLeaf CiimetrictypeEnum::internal {1, "internal"};
const Enum::YLeaf CiimetrictypeEnum::external {2, "external"};

const Enum::YLeaf CiiislevelEnum::none {0, "none"};
const Enum::YLeaf CiiislevelEnum::area {1, "area"};
const Enum::YLeaf CiiislevelEnum::domain {2, "domain"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::CiisysversionEnum::unknown {0, "unknown"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::CiisysversionEnum::one {1, "one"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::CiisystypeEnum::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::CiisystypeEnum::level2IS {2, "level2IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::CiisystypeEnum::level1L2IS {3, "level1L2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::CiisyslevelindexEnum::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::CiisyslevelindexEnum::level2IS {2, "level2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirctypeEnum::broadcast {1, "broadcast"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirctypeEnum::ptToPt {2, "ptToPt"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirctypeEnum::staticIn {3, "staticIn"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirctypeEnum::staticOut {4, "staticOut"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirctypeEnum::dA {5, "dA"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirclevelEnum::level1 {1, "level1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirclevelEnum::level2 {2, "level2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirclevelEnum::level1L2 {3, "level1L2"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicircmeshgroupenabledEnum::inactive {1, "inactive"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicircmeshgroupenabledEnum::blocked {2, "blocked"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicircmeshgroupenabledEnum::set {3, "set"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::CiicirclevelindexEnum::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::CiicirclevelindexEnum::level2IS {2, "level2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::CiisysstatlevelEnum::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::CiisysstatlevelEnum::level2IS {2, "level2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::CiicircuittypeEnum::lanlevel1 {1, "lanlevel1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::CiicircuittypeEnum::lanlevel2 {2, "lanlevel2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::CiicircuittypeEnum::p2pcircuit {3, "p2pcircuit"};

const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::CiipacketcountlevelEnum::level1 {1, "level1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::CiipacketcountlevelEnum::level2 {2, "level2"};

const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::CiipacketcountdirectionEnum::sending {1, "sending"};
const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::CiipacketcountdirectionEnum::receiving {2, "receiving"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjstateEnum::down {1, "down"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjstateEnum::initializing {2, "initializing"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjstateEnum::up {3, "up"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjstateEnum::failed {4, "failed"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3WaystateEnum::up {0, "up"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3WaystateEnum::initializing {1, "initializing"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3WaystateEnum::down {2, "down"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3WaystateEnum::failed {3, "failed"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjneighsystypeEnum::l1IntermediateSystem {1, "l1IntermediateSystem"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjneighsystypeEnum::l2IntermediateSystem {2, "l2IntermediateSystem"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjneighsystypeEnum::l1L2IntermediateSystem {3, "l1L2IntermediateSystem"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjneighsystypeEnum::unknown {4, "unknown"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjusageEnum::level1 {1, "level1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjusageEnum::level2 {2, "level2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjusageEnum::level1and2 {3, "level1and2"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiramaptypeEnum::none {1, "none"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiramaptypeEnum::explicit_ {2, "explicit"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiramaptypeEnum::extractIDI {3, "extractIDI"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiramaptypeEnum::extractDSP {4, "extractDSP"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiratypeEnum::manual {1, "manual"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiratypeEnum::automatic {2, "automatic"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiipratypeEnum::manual {1, "manual"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiipratypeEnum::automatic {2, "automatic"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::static_ {1, "static"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::direct {2, "direct"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::ospfv2 {3, "ospfv2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::ospfv3 {4, "ospfv3"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::isis {5, "isis"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::rip {6, "rip"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::igrp {7, "igrp"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::eigrp {8, "eigrp"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::bgp {9, "bgp"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum::other {10, "other"};


}
}

