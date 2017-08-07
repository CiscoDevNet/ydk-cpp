
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_ISIS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void CiscoIetfIsisMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoIetfIsisMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIetfIsisMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiAreaAddrTable" || name == "ciiCirc" || name == "ciiCircLevelTable" || name == "ciiCircTable" || name == "ciiCircuitCounterTable" || name == "ciiIPRATable" || name == "ciiISAdjAreaAddrTable" || name == "ciiISAdjIPAddrTable" || name == "ciiISAdjProtSuppTable" || name == "ciiISAdjTable" || name == "ciiLSPSummaryTable" || name == "ciiLSPTLVTable" || name == "ciiManAreaAddrTable" || name == "ciiPacketCounterTable" || name == "ciiRATable" || name == "ciiRedistributeAddrTable" || name == "ciiRouterTable" || name == "ciiSummAddrTable" || name == "ciiSysLevelTable" || name == "ciiSysObject" || name == "ciiSysProtSuppTable" || name == "ciiSystemCounterTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciisysadminstate.yfilter)
	|| ydk::is_set(ciisysid.yfilter)
	|| ydk::is_set(ciisysl2tol1leaking.yfilter)
	|| ydk::is_set(ciisysmaxage.yfilter)
	|| ydk::is_set(ciisysmaxlspgenint.yfilter)
	|| ydk::is_set(ciisysmaxpathsplits.yfilter)
	|| ydk::is_set(ciisyspolleshellorate.yfilter)
	|| ydk::is_set(ciisysreceivelspbuffersize.yfilter)
	|| ydk::is_set(ciisystype.yfilter)
	|| ydk::is_set(ciisysversion.yfilter)
	|| ydk::is_set(ciisyswaittime.yfilter);
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

    if (ciisysadminstate.is_set || is_set(ciisysadminstate.yfilter)) leaf_name_data.push_back(ciisysadminstate.get_name_leafdata());
    if (ciisysid.is_set || is_set(ciisysid.yfilter)) leaf_name_data.push_back(ciisysid.get_name_leafdata());
    if (ciisysl2tol1leaking.is_set || is_set(ciisysl2tol1leaking.yfilter)) leaf_name_data.push_back(ciisysl2tol1leaking.get_name_leafdata());
    if (ciisysmaxage.is_set || is_set(ciisysmaxage.yfilter)) leaf_name_data.push_back(ciisysmaxage.get_name_leafdata());
    if (ciisysmaxlspgenint.is_set || is_set(ciisysmaxlspgenint.yfilter)) leaf_name_data.push_back(ciisysmaxlspgenint.get_name_leafdata());
    if (ciisysmaxpathsplits.is_set || is_set(ciisysmaxpathsplits.yfilter)) leaf_name_data.push_back(ciisysmaxpathsplits.get_name_leafdata());
    if (ciisyspolleshellorate.is_set || is_set(ciisyspolleshellorate.yfilter)) leaf_name_data.push_back(ciisyspolleshellorate.get_name_leafdata());
    if (ciisysreceivelspbuffersize.is_set || is_set(ciisysreceivelspbuffersize.yfilter)) leaf_name_data.push_back(ciisysreceivelspbuffersize.get_name_leafdata());
    if (ciisystype.is_set || is_set(ciisystype.yfilter)) leaf_name_data.push_back(ciisystype.get_name_leafdata());
    if (ciisysversion.is_set || is_set(ciisysversion.yfilter)) leaf_name_data.push_back(ciisysversion.get_name_leafdata());
    if (ciisyswaittime.is_set || is_set(ciisyswaittime.yfilter)) leaf_name_data.push_back(ciisyswaittime.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciisysobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSysAdminState")
    {
        ciisysadminstate = value;
        ciisysadminstate.value_namespace = name_space;
        ciisysadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysID")
    {
        ciisysid = value;
        ciisysid.value_namespace = name_space;
        ciisysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysL2toL1Leaking")
    {
        ciisysl2tol1leaking = value;
        ciisysl2tol1leaking.value_namespace = name_space;
        ciisysl2tol1leaking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysMaxAge")
    {
        ciisysmaxage = value;
        ciisysmaxage.value_namespace = name_space;
        ciisysmaxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysMaxLSPGenInt")
    {
        ciisysmaxlspgenint = value;
        ciisysmaxlspgenint.value_namespace = name_space;
        ciisysmaxlspgenint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysMaxPathSplits")
    {
        ciisysmaxpathsplits = value;
        ciisysmaxpathsplits.value_namespace = name_space;
        ciisysmaxpathsplits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysPollESHelloRate")
    {
        ciisyspolleshellorate = value;
        ciisyspolleshellorate.value_namespace = name_space;
        ciisyspolleshellorate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysReceiveLSPBufferSize")
    {
        ciisysreceivelspbuffersize = value;
        ciisysreceivelspbuffersize.value_namespace = name_space;
        ciisysreceivelspbuffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysType")
    {
        ciisystype = value;
        ciisystype.value_namespace = name_space;
        ciisystype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysVersion")
    {
        ciisysversion = value;
        ciisysversion.value_namespace = name_space;
        ciisysversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysWaitTime")
    {
        ciisyswaittime = value;
        ciisyswaittime.value_namespace = name_space;
        ciisyswaittime.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciisysobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSysAdminState")
    {
        ciisysadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiSysID")
    {
        ciisysid.yfilter = yfilter;
    }
    if(value_path == "ciiSysL2toL1Leaking")
    {
        ciisysl2tol1leaking.yfilter = yfilter;
    }
    if(value_path == "ciiSysMaxAge")
    {
        ciisysmaxage.yfilter = yfilter;
    }
    if(value_path == "ciiSysMaxLSPGenInt")
    {
        ciisysmaxlspgenint.yfilter = yfilter;
    }
    if(value_path == "ciiSysMaxPathSplits")
    {
        ciisysmaxpathsplits.yfilter = yfilter;
    }
    if(value_path == "ciiSysPollESHelloRate")
    {
        ciisyspolleshellorate.yfilter = yfilter;
    }
    if(value_path == "ciiSysReceiveLSPBufferSize")
    {
        ciisysreceivelspbuffersize.yfilter = yfilter;
    }
    if(value_path == "ciiSysType")
    {
        ciisystype.yfilter = yfilter;
    }
    if(value_path == "ciiSysVersion")
    {
        ciisysversion.yfilter = yfilter;
    }
    if(value_path == "ciiSysWaitTime")
    {
        ciisyswaittime.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciisysobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysAdminState" || name == "ciiSysID" || name == "ciiSysL2toL1Leaking" || name == "ciiSysMaxAge" || name == "ciiSysMaxLSPGenInt" || name == "ciiSysMaxPathSplits" || name == "ciiSysPollESHelloRate" || name == "ciiSysReceiveLSPBufferSize" || name == "ciiSysType" || name == "ciiSysVersion" || name == "ciiSysWaitTime")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciinextcircindex.yfilter);
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

    if (ciinextcircindex.is_set || is_set(ciinextcircindex.yfilter)) leaf_name_data.push_back(ciinextcircindex.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciicirc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiNextCircIndex")
    {
        ciinextcircindex = value;
        ciinextcircindex.value_namespace = name_space;
        ciinextcircindex.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciicirc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiNextCircIndex")
    {
        ciinextcircindex.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciicirc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiNextCircIndex")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciimanareaaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciimanareaaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciimanareaaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiManAreaAddrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciimanareaaddr.yfilter)
	|| ydk::is_set(ciimanareaaddrexiststate.yfilter);
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

    if (ciimanareaaddr.is_set || is_set(ciimanareaaddr.yfilter)) leaf_name_data.push_back(ciimanareaaddr.get_name_leafdata());
    if (ciimanareaaddrexiststate.is_set || is_set(ciimanareaaddrexiststate.yfilter)) leaf_name_data.push_back(ciimanareaaddrexiststate.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiManAreaAddr")
    {
        ciimanareaaddr = value;
        ciimanareaaddr.value_namespace = name_space;
        ciimanareaaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiManAreaAddrExistState")
    {
        ciimanareaaddrexiststate = value;
        ciimanareaaddrexiststate.value_namespace = name_space;
        ciimanareaaddrexiststate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiManAreaAddr")
    {
        ciimanareaaddr.yfilter = yfilter;
    }
    if(value_path == "ciiManAreaAddrExistState")
    {
        ciimanareaaddrexiststate.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiManAreaAddr" || name == "ciiManAreaAddrExistState")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiareaaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiareaaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiareaaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiAreaAddrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciiareaaddr.yfilter);
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

    if (ciiareaaddr.is_set || is_set(ciiareaaddr.yfilter)) leaf_name_data.push_back(ciiareaaddr.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiAreaAddr")
    {
        ciiareaaddr = value;
        ciiareaaddr.value_namespace = name_space;
        ciiareaaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiAreaAddr")
    {
        ciiareaaddr.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiAreaAddr")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciisysprotsupptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciisysprotsupptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciisysprotsupptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysProtSuppEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciisysprotsuppprotocol.yfilter)
	|| ydk::is_set(ciisysprotsuppexiststate.yfilter);
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

    if (ciisysprotsuppprotocol.is_set || is_set(ciisysprotsuppprotocol.yfilter)) leaf_name_data.push_back(ciisysprotsuppprotocol.get_name_leafdata());
    if (ciisysprotsuppexiststate.is_set || is_set(ciisysprotsuppexiststate.yfilter)) leaf_name_data.push_back(ciisysprotsuppexiststate.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSysProtSuppProtocol")
    {
        ciisysprotsuppprotocol = value;
        ciisysprotsuppprotocol.value_namespace = name_space;
        ciisysprotsuppprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysProtSuppExistState")
    {
        ciisysprotsuppexiststate = value;
        ciisysprotsuppexiststate.value_namespace = name_space;
        ciisysprotsuppexiststate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSysProtSuppProtocol")
    {
        ciisysprotsuppprotocol.yfilter = yfilter;
    }
    if(value_path == "ciiSysProtSuppExistState")
    {
        ciisysprotsuppexiststate.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysProtSuppProtocol" || name == "ciiSysProtSuppExistState")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciisummaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciisummaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciisummaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSummAddrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciisummaddresstype.yfilter)
	|| ydk::is_set(ciisummaddress.yfilter)
	|| ydk::is_set(ciisummaddrprefixlen.yfilter)
	|| ydk::is_set(ciisummaddrexiststate.yfilter)
	|| ydk::is_set(ciisummaddrfullmetric.yfilter)
	|| ydk::is_set(ciisummaddrmetric.yfilter);
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

    if (ciisummaddresstype.is_set || is_set(ciisummaddresstype.yfilter)) leaf_name_data.push_back(ciisummaddresstype.get_name_leafdata());
    if (ciisummaddress.is_set || is_set(ciisummaddress.yfilter)) leaf_name_data.push_back(ciisummaddress.get_name_leafdata());
    if (ciisummaddrprefixlen.is_set || is_set(ciisummaddrprefixlen.yfilter)) leaf_name_data.push_back(ciisummaddrprefixlen.get_name_leafdata());
    if (ciisummaddrexiststate.is_set || is_set(ciisummaddrexiststate.yfilter)) leaf_name_data.push_back(ciisummaddrexiststate.get_name_leafdata());
    if (ciisummaddrfullmetric.is_set || is_set(ciisummaddrfullmetric.yfilter)) leaf_name_data.push_back(ciisummaddrfullmetric.get_name_leafdata());
    if (ciisummaddrmetric.is_set || is_set(ciisummaddrmetric.yfilter)) leaf_name_data.push_back(ciisummaddrmetric.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSummAddressType")
    {
        ciisummaddresstype = value;
        ciisummaddresstype.value_namespace = name_space;
        ciisummaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSummAddress")
    {
        ciisummaddress = value;
        ciisummaddress.value_namespace = name_space;
        ciisummaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSummAddrPrefixLen")
    {
        ciisummaddrprefixlen = value;
        ciisummaddrprefixlen.value_namespace = name_space;
        ciisummaddrprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSummAddrExistState")
    {
        ciisummaddrexiststate = value;
        ciisummaddrexiststate.value_namespace = name_space;
        ciisummaddrexiststate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSummAddrFullMetric")
    {
        ciisummaddrfullmetric = value;
        ciisummaddrfullmetric.value_namespace = name_space;
        ciisummaddrfullmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSummAddrMetric")
    {
        ciisummaddrmetric = value;
        ciisummaddrmetric.value_namespace = name_space;
        ciisummaddrmetric.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSummAddressType")
    {
        ciisummaddresstype.yfilter = yfilter;
    }
    if(value_path == "ciiSummAddress")
    {
        ciisummaddress.yfilter = yfilter;
    }
    if(value_path == "ciiSummAddrPrefixLen")
    {
        ciisummaddrprefixlen.yfilter = yfilter;
    }
    if(value_path == "ciiSummAddrExistState")
    {
        ciisummaddrexiststate.yfilter = yfilter;
    }
    if(value_path == "ciiSummAddrFullMetric")
    {
        ciisummaddrfullmetric.yfilter = yfilter;
    }
    if(value_path == "ciiSummAddrMetric")
    {
        ciisummaddrmetric.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSummAddressType" || name == "ciiSummAddress" || name == "ciiSummAddrPrefixLen" || name == "ciiSummAddrExistState" || name == "ciiSummAddrFullMetric" || name == "ciiSummAddrMetric")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiredistributeaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiredistributeaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiredistributeaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRedistributeAddrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciiredistributeaddrtype.yfilter)
	|| ydk::is_set(ciiredistributeaddraddress.yfilter)
	|| ydk::is_set(ciiredistributeaddrprefixlen.yfilter)
	|| ydk::is_set(ciiredistributeaddrexiststate.yfilter);
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

    if (ciiredistributeaddrtype.is_set || is_set(ciiredistributeaddrtype.yfilter)) leaf_name_data.push_back(ciiredistributeaddrtype.get_name_leafdata());
    if (ciiredistributeaddraddress.is_set || is_set(ciiredistributeaddraddress.yfilter)) leaf_name_data.push_back(ciiredistributeaddraddress.get_name_leafdata());
    if (ciiredistributeaddrprefixlen.is_set || is_set(ciiredistributeaddrprefixlen.yfilter)) leaf_name_data.push_back(ciiredistributeaddrprefixlen.get_name_leafdata());
    if (ciiredistributeaddrexiststate.is_set || is_set(ciiredistributeaddrexiststate.yfilter)) leaf_name_data.push_back(ciiredistributeaddrexiststate.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiRedistributeAddrType")
    {
        ciiredistributeaddrtype = value;
        ciiredistributeaddrtype.value_namespace = name_space;
        ciiredistributeaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRedistributeAddrAddress")
    {
        ciiredistributeaddraddress = value;
        ciiredistributeaddraddress.value_namespace = name_space;
        ciiredistributeaddraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRedistributeAddrPrefixLen")
    {
        ciiredistributeaddrprefixlen = value;
        ciiredistributeaddrprefixlen.value_namespace = name_space;
        ciiredistributeaddrprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRedistributeAddrExistState")
    {
        ciiredistributeaddrexiststate = value;
        ciiredistributeaddrexiststate.value_namespace = name_space;
        ciiredistributeaddrexiststate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiRedistributeAddrType")
    {
        ciiredistributeaddrtype.yfilter = yfilter;
    }
    if(value_path == "ciiRedistributeAddrAddress")
    {
        ciiredistributeaddraddress.yfilter = yfilter;
    }
    if(value_path == "ciiRedistributeAddrPrefixLen")
    {
        ciiredistributeaddrprefixlen.yfilter = yfilter;
    }
    if(value_path == "ciiRedistributeAddrExistState")
    {
        ciiredistributeaddrexiststate.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRedistributeAddrType" || name == "ciiRedistributeAddrAddress" || name == "ciiRedistributeAddrPrefixLen" || name == "ciiRedistributeAddrExistState")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiroutertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiroutertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiroutertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRouterEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciiroutersysid.yfilter)
	|| ydk::is_set(ciirouterlevel.yfilter)
	|| ydk::is_set(ciirouterhostname.yfilter)
	|| ydk::is_set(ciirouterid.yfilter);
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

    if (ciiroutersysid.is_set || is_set(ciiroutersysid.yfilter)) leaf_name_data.push_back(ciiroutersysid.get_name_leafdata());
    if (ciirouterlevel.is_set || is_set(ciirouterlevel.yfilter)) leaf_name_data.push_back(ciirouterlevel.get_name_leafdata());
    if (ciirouterhostname.is_set || is_set(ciirouterhostname.yfilter)) leaf_name_data.push_back(ciirouterhostname.get_name_leafdata());
    if (ciirouterid.is_set || is_set(ciirouterid.yfilter)) leaf_name_data.push_back(ciirouterid.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiRouterSysID")
    {
        ciiroutersysid = value;
        ciiroutersysid.value_namespace = name_space;
        ciiroutersysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRouterLevel")
    {
        ciirouterlevel = value;
        ciirouterlevel.value_namespace = name_space;
        ciirouterlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRouterHostName")
    {
        ciirouterhostname = value;
        ciirouterhostname.value_namespace = name_space;
        ciirouterhostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRouterID")
    {
        ciirouterid = value;
        ciirouterid.value_namespace = name_space;
        ciirouterid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiRouterSysID")
    {
        ciiroutersysid.yfilter = yfilter;
    }
    if(value_path == "ciiRouterLevel")
    {
        ciirouterlevel.yfilter = yfilter;
    }
    if(value_path == "ciiRouterHostName")
    {
        ciirouterhostname.yfilter = yfilter;
    }
    if(value_path == "ciiRouterID")
    {
        ciirouterid.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRouterSysID" || name == "ciiRouterLevel" || name == "ciiRouterHostName" || name == "ciiRouterID")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciisysleveltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciisysleveltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciisysleveltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysLevelEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciisyslevelindex.yfilter)
	|| ydk::is_set(ciisyslevelmetricstyle.yfilter)
	|| ydk::is_set(ciisyslevelminlspgenint.yfilter)
	|| ydk::is_set(ciisysleveloriglspbuffsize.yfilter)
	|| ydk::is_set(ciisysleveloverloadstate.yfilter)
	|| ydk::is_set(ciisyslevelsetoverload.yfilter)
	|| ydk::is_set(ciisyslevelsetoverloaduntil.yfilter)
	|| ydk::is_set(ciisyslevelspfconsiders.yfilter)
	|| ydk::is_set(ciisyslevelteenabled.yfilter);
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

    if (ciisyslevelindex.is_set || is_set(ciisyslevelindex.yfilter)) leaf_name_data.push_back(ciisyslevelindex.get_name_leafdata());
    if (ciisyslevelmetricstyle.is_set || is_set(ciisyslevelmetricstyle.yfilter)) leaf_name_data.push_back(ciisyslevelmetricstyle.get_name_leafdata());
    if (ciisyslevelminlspgenint.is_set || is_set(ciisyslevelminlspgenint.yfilter)) leaf_name_data.push_back(ciisyslevelminlspgenint.get_name_leafdata());
    if (ciisysleveloriglspbuffsize.is_set || is_set(ciisysleveloriglspbuffsize.yfilter)) leaf_name_data.push_back(ciisysleveloriglspbuffsize.get_name_leafdata());
    if (ciisysleveloverloadstate.is_set || is_set(ciisysleveloverloadstate.yfilter)) leaf_name_data.push_back(ciisysleveloverloadstate.get_name_leafdata());
    if (ciisyslevelsetoverload.is_set || is_set(ciisyslevelsetoverload.yfilter)) leaf_name_data.push_back(ciisyslevelsetoverload.get_name_leafdata());
    if (ciisyslevelsetoverloaduntil.is_set || is_set(ciisyslevelsetoverloaduntil.yfilter)) leaf_name_data.push_back(ciisyslevelsetoverloaduntil.get_name_leafdata());
    if (ciisyslevelspfconsiders.is_set || is_set(ciisyslevelspfconsiders.yfilter)) leaf_name_data.push_back(ciisyslevelspfconsiders.get_name_leafdata());
    if (ciisyslevelteenabled.is_set || is_set(ciisyslevelteenabled.yfilter)) leaf_name_data.push_back(ciisyslevelteenabled.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSysLevelIndex")
    {
        ciisyslevelindex = value;
        ciisyslevelindex.value_namespace = name_space;
        ciisyslevelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelMetricStyle")
    {
        ciisyslevelmetricstyle = value;
        ciisyslevelmetricstyle.value_namespace = name_space;
        ciisyslevelmetricstyle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelMinLSPGenInt")
    {
        ciisyslevelminlspgenint = value;
        ciisyslevelminlspgenint.value_namespace = name_space;
        ciisyslevelminlspgenint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelOrigLSPBuffSize")
    {
        ciisysleveloriglspbuffsize = value;
        ciisysleveloriglspbuffsize.value_namespace = name_space;
        ciisysleveloriglspbuffsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelOverloadState")
    {
        ciisysleveloverloadstate = value;
        ciisysleveloverloadstate.value_namespace = name_space;
        ciisysleveloverloadstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelSetOverload")
    {
        ciisyslevelsetoverload = value;
        ciisyslevelsetoverload.value_namespace = name_space;
        ciisyslevelsetoverload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelSetOverloadUntil")
    {
        ciisyslevelsetoverloaduntil = value;
        ciisyslevelsetoverloaduntil.value_namespace = name_space;
        ciisyslevelsetoverloaduntil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelSPFConsiders")
    {
        ciisyslevelspfconsiders = value;
        ciisyslevelspfconsiders.value_namespace = name_space;
        ciisyslevelspfconsiders.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelTEEnabled")
    {
        ciisyslevelteenabled = value;
        ciisyslevelteenabled.value_namespace = name_space;
        ciisyslevelteenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSysLevelIndex")
    {
        ciisyslevelindex.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelMetricStyle")
    {
        ciisyslevelmetricstyle.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelMinLSPGenInt")
    {
        ciisyslevelminlspgenint.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelOrigLSPBuffSize")
    {
        ciisysleveloriglspbuffsize.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelOverloadState")
    {
        ciisysleveloverloadstate.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelSetOverload")
    {
        ciisyslevelsetoverload.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelSetOverloadUntil")
    {
        ciisyslevelsetoverloaduntil.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelSPFConsiders")
    {
        ciisyslevelspfconsiders.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelTEEnabled")
    {
        ciisyslevelteenabled.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysLevelIndex" || name == "ciiSysLevelMetricStyle" || name == "ciiSysLevelMinLSPGenInt" || name == "ciiSysLevelOrigLSPBuffSize" || name == "ciiSysLevelOverloadState" || name == "ciiSysLevelSetOverload" || name == "ciiSysLevelSetOverloadUntil" || name == "ciiSysLevelSPFConsiders" || name == "ciiSysLevelTEEnabled")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciicirctable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciicirctable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciicirctable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciicirc3wayenabled.yfilter)
	|| ydk::is_set(ciicircadminstate.yfilter)
	|| ydk::is_set(ciicircexiststate.yfilter)
	|| ydk::is_set(ciicircextdomain.yfilter)
	|| ydk::is_set(ciicircextendedcircid.yfilter)
	|| ydk::is_set(ciicircifindex.yfilter)
	|| ydk::is_set(ciicircifsubindex.yfilter)
	|| ydk::is_set(ciicirclastuptime.yfilter)
	|| ydk::is_set(ciicirclevel.yfilter)
	|| ydk::is_set(ciicircmeshgroup.yfilter)
	|| ydk::is_set(ciicircmeshgroupenabled.yfilter)
	|| ydk::is_set(ciicircpassivecircuit.yfilter)
	|| ydk::is_set(ciicircsmallhellos.yfilter)
	|| ydk::is_set(ciicirctype.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicirc3wayenabled.is_set || is_set(ciicirc3wayenabled.yfilter)) leaf_name_data.push_back(ciicirc3wayenabled.get_name_leafdata());
    if (ciicircadminstate.is_set || is_set(ciicircadminstate.yfilter)) leaf_name_data.push_back(ciicircadminstate.get_name_leafdata());
    if (ciicircexiststate.is_set || is_set(ciicircexiststate.yfilter)) leaf_name_data.push_back(ciicircexiststate.get_name_leafdata());
    if (ciicircextdomain.is_set || is_set(ciicircextdomain.yfilter)) leaf_name_data.push_back(ciicircextdomain.get_name_leafdata());
    if (ciicircextendedcircid.is_set || is_set(ciicircextendedcircid.yfilter)) leaf_name_data.push_back(ciicircextendedcircid.get_name_leafdata());
    if (ciicircifindex.is_set || is_set(ciicircifindex.yfilter)) leaf_name_data.push_back(ciicircifindex.get_name_leafdata());
    if (ciicircifsubindex.is_set || is_set(ciicircifsubindex.yfilter)) leaf_name_data.push_back(ciicircifsubindex.get_name_leafdata());
    if (ciicirclastuptime.is_set || is_set(ciicirclastuptime.yfilter)) leaf_name_data.push_back(ciicirclastuptime.get_name_leafdata());
    if (ciicirclevel.is_set || is_set(ciicirclevel.yfilter)) leaf_name_data.push_back(ciicirclevel.get_name_leafdata());
    if (ciicircmeshgroup.is_set || is_set(ciicircmeshgroup.yfilter)) leaf_name_data.push_back(ciicircmeshgroup.get_name_leafdata());
    if (ciicircmeshgroupenabled.is_set || is_set(ciicircmeshgroupenabled.yfilter)) leaf_name_data.push_back(ciicircmeshgroupenabled.get_name_leafdata());
    if (ciicircpassivecircuit.is_set || is_set(ciicircpassivecircuit.yfilter)) leaf_name_data.push_back(ciicircpassivecircuit.get_name_leafdata());
    if (ciicircsmallhellos.is_set || is_set(ciicircsmallhellos.yfilter)) leaf_name_data.push_back(ciicircsmallhellos.get_name_leafdata());
    if (ciicirctype.is_set || is_set(ciicirctype.yfilter)) leaf_name_data.push_back(ciicirctype.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciicirctable::Ciicircentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCirc3WayEnabled")
    {
        ciicirc3wayenabled = value;
        ciicirc3wayenabled.value_namespace = name_space;
        ciicirc3wayenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircAdminState")
    {
        ciicircadminstate = value;
        ciicircadminstate.value_namespace = name_space;
        ciicircadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircExistState")
    {
        ciicircexiststate = value;
        ciicircexiststate.value_namespace = name_space;
        ciicircexiststate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircExtDomain")
    {
        ciicircextdomain = value;
        ciicircextdomain.value_namespace = name_space;
        ciicircextdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircExtendedCircID")
    {
        ciicircextendedcircid = value;
        ciicircextendedcircid.value_namespace = name_space;
        ciicircextendedcircid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircIfIndex")
    {
        ciicircifindex = value;
        ciicircifindex.value_namespace = name_space;
        ciicircifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircIfSubIndex")
    {
        ciicircifsubindex = value;
        ciicircifsubindex.value_namespace = name_space;
        ciicircifsubindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLastUpTime")
    {
        ciicirclastuptime = value;
        ciicirclastuptime.value_namespace = name_space;
        ciicirclastuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevel")
    {
        ciicirclevel = value;
        ciicirclevel.value_namespace = name_space;
        ciicirclevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircMeshGroup")
    {
        ciicircmeshgroup = value;
        ciicircmeshgroup.value_namespace = name_space;
        ciicircmeshgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircMeshGroupEnabled")
    {
        ciicircmeshgroupenabled = value;
        ciicircmeshgroupenabled.value_namespace = name_space;
        ciicircmeshgroupenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircPassiveCircuit")
    {
        ciicircpassivecircuit = value;
        ciicircpassivecircuit.value_namespace = name_space;
        ciicircpassivecircuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircSmallHellos")
    {
        ciicircsmallhellos = value;
        ciicircsmallhellos.value_namespace = name_space;
        ciicircsmallhellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircType")
    {
        ciicirctype = value;
        ciicirctype.value_namespace = name_space;
        ciicirctype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciicirctable::Ciicircentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiCirc3WayEnabled")
    {
        ciicirc3wayenabled.yfilter = yfilter;
    }
    if(value_path == "ciiCircAdminState")
    {
        ciicircadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiCircExistState")
    {
        ciicircexiststate.yfilter = yfilter;
    }
    if(value_path == "ciiCircExtDomain")
    {
        ciicircextdomain.yfilter = yfilter;
    }
    if(value_path == "ciiCircExtendedCircID")
    {
        ciicircextendedcircid.yfilter = yfilter;
    }
    if(value_path == "ciiCircIfIndex")
    {
        ciicircifindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircIfSubIndex")
    {
        ciicircifsubindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircLastUpTime")
    {
        ciicirclastuptime.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevel")
    {
        ciicirclevel.yfilter = yfilter;
    }
    if(value_path == "ciiCircMeshGroup")
    {
        ciicircmeshgroup.yfilter = yfilter;
    }
    if(value_path == "ciiCircMeshGroupEnabled")
    {
        ciicircmeshgroupenabled.yfilter = yfilter;
    }
    if(value_path == "ciiCircPassiveCircuit")
    {
        ciicircpassivecircuit.yfilter = yfilter;
    }
    if(value_path == "ciiCircSmallHellos")
    {
        ciicircsmallhellos.yfilter = yfilter;
    }
    if(value_path == "ciiCircType")
    {
        ciicirctype.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciicirctable::Ciicircentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiCirc3WayEnabled" || name == "ciiCircAdminState" || name == "ciiCircExistState" || name == "ciiCircExtDomain" || name == "ciiCircExtendedCircID" || name == "ciiCircIfIndex" || name == "ciiCircIfSubIndex" || name == "ciiCircLastUpTime" || name == "ciiCircLevel" || name == "ciiCircMeshGroup" || name == "ciiCircMeshGroupEnabled" || name == "ciiCircPassiveCircuit" || name == "ciiCircSmallHellos" || name == "ciiCircType")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciicircleveltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciicircleveltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciicircleveltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircLevelEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciicirclevelindex.yfilter)
	|| ydk::is_set(ciicirclevelcsnpinterval.yfilter)
	|| ydk::is_set(ciicircleveldesis.yfilter)
	|| ydk::is_set(ciicircleveldrhellotimer.yfilter)
	|| ydk::is_set(ciicirclevelhellomultiplier.yfilter)
	|| ydk::is_set(ciicirclevelhellotimer.yfilter)
	|| ydk::is_set(ciicirclevelid.yfilter)
	|| ydk::is_set(ciicirclevelidoctet.yfilter)
	|| ydk::is_set(ciicirclevelispriority.yfilter)
	|| ydk::is_set(ciicirclevellspthrottle.yfilter)
	|| ydk::is_set(ciicirclevelmetric.yfilter)
	|| ydk::is_set(ciicirclevelminlspretransint.yfilter)
	|| ydk::is_set(ciicirclevelpartsnpinterval.yfilter)
	|| ydk::is_set(ciicirclevelwidemetric.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicirclevelindex.is_set || is_set(ciicirclevelindex.yfilter)) leaf_name_data.push_back(ciicirclevelindex.get_name_leafdata());
    if (ciicirclevelcsnpinterval.is_set || is_set(ciicirclevelcsnpinterval.yfilter)) leaf_name_data.push_back(ciicirclevelcsnpinterval.get_name_leafdata());
    if (ciicircleveldesis.is_set || is_set(ciicircleveldesis.yfilter)) leaf_name_data.push_back(ciicircleveldesis.get_name_leafdata());
    if (ciicircleveldrhellotimer.is_set || is_set(ciicircleveldrhellotimer.yfilter)) leaf_name_data.push_back(ciicircleveldrhellotimer.get_name_leafdata());
    if (ciicirclevelhellomultiplier.is_set || is_set(ciicirclevelhellomultiplier.yfilter)) leaf_name_data.push_back(ciicirclevelhellomultiplier.get_name_leafdata());
    if (ciicirclevelhellotimer.is_set || is_set(ciicirclevelhellotimer.yfilter)) leaf_name_data.push_back(ciicirclevelhellotimer.get_name_leafdata());
    if (ciicirclevelid.is_set || is_set(ciicirclevelid.yfilter)) leaf_name_data.push_back(ciicirclevelid.get_name_leafdata());
    if (ciicirclevelidoctet.is_set || is_set(ciicirclevelidoctet.yfilter)) leaf_name_data.push_back(ciicirclevelidoctet.get_name_leafdata());
    if (ciicirclevelispriority.is_set || is_set(ciicirclevelispriority.yfilter)) leaf_name_data.push_back(ciicirclevelispriority.get_name_leafdata());
    if (ciicirclevellspthrottle.is_set || is_set(ciicirclevellspthrottle.yfilter)) leaf_name_data.push_back(ciicirclevellspthrottle.get_name_leafdata());
    if (ciicirclevelmetric.is_set || is_set(ciicirclevelmetric.yfilter)) leaf_name_data.push_back(ciicirclevelmetric.get_name_leafdata());
    if (ciicirclevelminlspretransint.is_set || is_set(ciicirclevelminlspretransint.yfilter)) leaf_name_data.push_back(ciicirclevelminlspretransint.get_name_leafdata());
    if (ciicirclevelpartsnpinterval.is_set || is_set(ciicirclevelpartsnpinterval.yfilter)) leaf_name_data.push_back(ciicirclevelpartsnpinterval.get_name_leafdata());
    if (ciicirclevelwidemetric.is_set || is_set(ciicirclevelwidemetric.yfilter)) leaf_name_data.push_back(ciicirclevelwidemetric.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelIndex")
    {
        ciicirclevelindex = value;
        ciicirclevelindex.value_namespace = name_space;
        ciicirclevelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelCSNPInterval")
    {
        ciicirclevelcsnpinterval = value;
        ciicirclevelcsnpinterval.value_namespace = name_space;
        ciicirclevelcsnpinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelDesIS")
    {
        ciicircleveldesis = value;
        ciicircleveldesis.value_namespace = name_space;
        ciicircleveldesis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelDRHelloTimer")
    {
        ciicircleveldrhellotimer = value;
        ciicircleveldrhellotimer.value_namespace = name_space;
        ciicircleveldrhellotimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelHelloMultiplier")
    {
        ciicirclevelhellomultiplier = value;
        ciicirclevelhellomultiplier.value_namespace = name_space;
        ciicirclevelhellomultiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelHelloTimer")
    {
        ciicirclevelhellotimer = value;
        ciicirclevelhellotimer.value_namespace = name_space;
        ciicirclevelhellotimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelID")
    {
        ciicirclevelid = value;
        ciicirclevelid.value_namespace = name_space;
        ciicirclevelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelIDOctet")
    {
        ciicirclevelidoctet = value;
        ciicirclevelidoctet.value_namespace = name_space;
        ciicirclevelidoctet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelISPriority")
    {
        ciicirclevelispriority = value;
        ciicirclevelispriority.value_namespace = name_space;
        ciicirclevelispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelLSPThrottle")
    {
        ciicirclevellspthrottle = value;
        ciicirclevellspthrottle.value_namespace = name_space;
        ciicirclevellspthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelMetric")
    {
        ciicirclevelmetric = value;
        ciicirclevelmetric.value_namespace = name_space;
        ciicirclevelmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelMinLSPRetransInt")
    {
        ciicirclevelminlspretransint = value;
        ciicirclevelminlspretransint.value_namespace = name_space;
        ciicirclevelminlspretransint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelPartSNPInterval")
    {
        ciicirclevelpartsnpinterval = value;
        ciicirclevelpartsnpinterval.value_namespace = name_space;
        ciicirclevelpartsnpinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelWideMetric")
    {
        ciicirclevelwidemetric = value;
        ciicirclevelwidemetric.value_namespace = name_space;
        ciicirclevelwidemetric.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelIndex")
    {
        ciicirclevelindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelCSNPInterval")
    {
        ciicirclevelcsnpinterval.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelDesIS")
    {
        ciicircleveldesis.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelDRHelloTimer")
    {
        ciicircleveldrhellotimer.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelHelloMultiplier")
    {
        ciicirclevelhellomultiplier.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelHelloTimer")
    {
        ciicirclevelhellotimer.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelID")
    {
        ciicirclevelid.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelIDOctet")
    {
        ciicirclevelidoctet.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelISPriority")
    {
        ciicirclevelispriority.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelLSPThrottle")
    {
        ciicirclevellspthrottle.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelMetric")
    {
        ciicirclevelmetric.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelMinLSPRetransInt")
    {
        ciicirclevelminlspretransint.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelPartSNPInterval")
    {
        ciicirclevelpartsnpinterval.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelWideMetric")
    {
        ciicirclevelwidemetric.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiCircLevelIndex" || name == "ciiCircLevelCSNPInterval" || name == "ciiCircLevelDesIS" || name == "ciiCircLevelDRHelloTimer" || name == "ciiCircLevelHelloMultiplier" || name == "ciiCircLevelHelloTimer" || name == "ciiCircLevelID" || name == "ciiCircLevelIDOctet" || name == "ciiCircLevelISPriority" || name == "ciiCircLevelLSPThrottle" || name == "ciiCircLevelMetric" || name == "ciiCircLevelMinLSPRetransInt" || name == "ciiCircLevelPartSNPInterval" || name == "ciiCircLevelWideMetric")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciisystemcountertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciisystemcountertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciisystemcountertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSystemCounterEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciisysstatlevel.yfilter)
	|| ydk::is_set(ciisysstatattmpttoexmaxseqnums.yfilter)
	|| ydk::is_set(ciisysstatauthfails.yfilter)
	|| ydk::is_set(ciisysstatauthtypefails.yfilter)
	|| ydk::is_set(ciisysstatcorrlsps.yfilter)
	|| ydk::is_set(ciisysstatidfieldlenmismatches.yfilter)
	|| ydk::is_set(ciisysstatlspdbaseoloads.yfilter)
	|| ydk::is_set(ciisysstatlsperrors.yfilter)
	|| ydk::is_set(ciisysstatmanaddrdropfromareas.yfilter)
	|| ydk::is_set(ciisysstatownlsppurges.yfilter)
	|| ydk::is_set(ciisysstatpartchanges.yfilter)
	|| ydk::is_set(ciisysstatseqnumskips.yfilter)
	|| ydk::is_set(ciisysstatspfruns.yfilter);
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

    if (ciisysstatlevel.is_set || is_set(ciisysstatlevel.yfilter)) leaf_name_data.push_back(ciisysstatlevel.get_name_leafdata());
    if (ciisysstatattmpttoexmaxseqnums.is_set || is_set(ciisysstatattmpttoexmaxseqnums.yfilter)) leaf_name_data.push_back(ciisysstatattmpttoexmaxseqnums.get_name_leafdata());
    if (ciisysstatauthfails.is_set || is_set(ciisysstatauthfails.yfilter)) leaf_name_data.push_back(ciisysstatauthfails.get_name_leafdata());
    if (ciisysstatauthtypefails.is_set || is_set(ciisysstatauthtypefails.yfilter)) leaf_name_data.push_back(ciisysstatauthtypefails.get_name_leafdata());
    if (ciisysstatcorrlsps.is_set || is_set(ciisysstatcorrlsps.yfilter)) leaf_name_data.push_back(ciisysstatcorrlsps.get_name_leafdata());
    if (ciisysstatidfieldlenmismatches.is_set || is_set(ciisysstatidfieldlenmismatches.yfilter)) leaf_name_data.push_back(ciisysstatidfieldlenmismatches.get_name_leafdata());
    if (ciisysstatlspdbaseoloads.is_set || is_set(ciisysstatlspdbaseoloads.yfilter)) leaf_name_data.push_back(ciisysstatlspdbaseoloads.get_name_leafdata());
    if (ciisysstatlsperrors.is_set || is_set(ciisysstatlsperrors.yfilter)) leaf_name_data.push_back(ciisysstatlsperrors.get_name_leafdata());
    if (ciisysstatmanaddrdropfromareas.is_set || is_set(ciisysstatmanaddrdropfromareas.yfilter)) leaf_name_data.push_back(ciisysstatmanaddrdropfromareas.get_name_leafdata());
    if (ciisysstatownlsppurges.is_set || is_set(ciisysstatownlsppurges.yfilter)) leaf_name_data.push_back(ciisysstatownlsppurges.get_name_leafdata());
    if (ciisysstatpartchanges.is_set || is_set(ciisysstatpartchanges.yfilter)) leaf_name_data.push_back(ciisysstatpartchanges.get_name_leafdata());
    if (ciisysstatseqnumskips.is_set || is_set(ciisysstatseqnumskips.yfilter)) leaf_name_data.push_back(ciisysstatseqnumskips.get_name_leafdata());
    if (ciisysstatspfruns.is_set || is_set(ciisysstatspfruns.yfilter)) leaf_name_data.push_back(ciisysstatspfruns.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSysStatLevel")
    {
        ciisysstatlevel = value;
        ciisysstatlevel.value_namespace = name_space;
        ciisysstatlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatAttmptToExMaxSeqNums")
    {
        ciisysstatattmpttoexmaxseqnums = value;
        ciisysstatattmpttoexmaxseqnums.value_namespace = name_space;
        ciisysstatattmpttoexmaxseqnums.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatAuthFails")
    {
        ciisysstatauthfails = value;
        ciisysstatauthfails.value_namespace = name_space;
        ciisysstatauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatAuthTypeFails")
    {
        ciisysstatauthtypefails = value;
        ciisysstatauthtypefails.value_namespace = name_space;
        ciisysstatauthtypefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatCorrLSPs")
    {
        ciisysstatcorrlsps = value;
        ciisysstatcorrlsps.value_namespace = name_space;
        ciisysstatcorrlsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatIDFieldLenMismatches")
    {
        ciisysstatidfieldlenmismatches = value;
        ciisysstatidfieldlenmismatches.value_namespace = name_space;
        ciisysstatidfieldlenmismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatLSPDbaseOloads")
    {
        ciisysstatlspdbaseoloads = value;
        ciisysstatlspdbaseoloads.value_namespace = name_space;
        ciisysstatlspdbaseoloads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatLSPErrors")
    {
        ciisysstatlsperrors = value;
        ciisysstatlsperrors.value_namespace = name_space;
        ciisysstatlsperrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatManAddrDropFromAreas")
    {
        ciisysstatmanaddrdropfromareas = value;
        ciisysstatmanaddrdropfromareas.value_namespace = name_space;
        ciisysstatmanaddrdropfromareas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatOwnLSPPurges")
    {
        ciisysstatownlsppurges = value;
        ciisysstatownlsppurges.value_namespace = name_space;
        ciisysstatownlsppurges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatPartChanges")
    {
        ciisysstatpartchanges = value;
        ciisysstatpartchanges.value_namespace = name_space;
        ciisysstatpartchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatSeqNumSkips")
    {
        ciisysstatseqnumskips = value;
        ciisysstatseqnumskips.value_namespace = name_space;
        ciisysstatseqnumskips.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatSPFRuns")
    {
        ciisysstatspfruns = value;
        ciisysstatspfruns.value_namespace = name_space;
        ciisysstatspfruns.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSysStatLevel")
    {
        ciisysstatlevel.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatAttmptToExMaxSeqNums")
    {
        ciisysstatattmpttoexmaxseqnums.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatAuthFails")
    {
        ciisysstatauthfails.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatAuthTypeFails")
    {
        ciisysstatauthtypefails.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatCorrLSPs")
    {
        ciisysstatcorrlsps.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatIDFieldLenMismatches")
    {
        ciisysstatidfieldlenmismatches.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatLSPDbaseOloads")
    {
        ciisysstatlspdbaseoloads.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatLSPErrors")
    {
        ciisysstatlsperrors.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatManAddrDropFromAreas")
    {
        ciisysstatmanaddrdropfromareas.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatOwnLSPPurges")
    {
        ciisysstatownlsppurges.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatPartChanges")
    {
        ciisysstatpartchanges.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatSeqNumSkips")
    {
        ciisysstatseqnumskips.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatSPFRuns")
    {
        ciisysstatspfruns.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysStatLevel" || name == "ciiSysStatAttmptToExMaxSeqNums" || name == "ciiSysStatAuthFails" || name == "ciiSysStatAuthTypeFails" || name == "ciiSysStatCorrLSPs" || name == "ciiSysStatIDFieldLenMismatches" || name == "ciiSysStatLSPDbaseOloads" || name == "ciiSysStatLSPErrors" || name == "ciiSysStatManAddrDropFromAreas" || name == "ciiSysStatOwnLSPPurges" || name == "ciiSysStatPartChanges" || name == "ciiSysStatSeqNumSkips" || name == "ciiSysStatSPFRuns")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciicircuitcountertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciicircuitcountertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciicircuitcountertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircuitCounterEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciicircuittype.yfilter)
	|| ydk::is_set(ciicircadjchanges.yfilter)
	|| ydk::is_set(ciicircauthfails.yfilter)
	|| ydk::is_set(ciicircauthtypefails.yfilter)
	|| ydk::is_set(ciicircidfieldlenmismatches.yfilter)
	|| ydk::is_set(ciicircinitfails.yfilter)
	|| ydk::is_set(ciicirclandesischanges.yfilter)
	|| ydk::is_set(ciicircmaxareaaddrmismatches.yfilter)
	|| ydk::is_set(ciicircnumadj.yfilter)
	|| ydk::is_set(ciicircrejadjs.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicircuittype.is_set || is_set(ciicircuittype.yfilter)) leaf_name_data.push_back(ciicircuittype.get_name_leafdata());
    if (ciicircadjchanges.is_set || is_set(ciicircadjchanges.yfilter)) leaf_name_data.push_back(ciicircadjchanges.get_name_leafdata());
    if (ciicircauthfails.is_set || is_set(ciicircauthfails.yfilter)) leaf_name_data.push_back(ciicircauthfails.get_name_leafdata());
    if (ciicircauthtypefails.is_set || is_set(ciicircauthtypefails.yfilter)) leaf_name_data.push_back(ciicircauthtypefails.get_name_leafdata());
    if (ciicircidfieldlenmismatches.is_set || is_set(ciicircidfieldlenmismatches.yfilter)) leaf_name_data.push_back(ciicircidfieldlenmismatches.get_name_leafdata());
    if (ciicircinitfails.is_set || is_set(ciicircinitfails.yfilter)) leaf_name_data.push_back(ciicircinitfails.get_name_leafdata());
    if (ciicirclandesischanges.is_set || is_set(ciicirclandesischanges.yfilter)) leaf_name_data.push_back(ciicirclandesischanges.get_name_leafdata());
    if (ciicircmaxareaaddrmismatches.is_set || is_set(ciicircmaxareaaddrmismatches.yfilter)) leaf_name_data.push_back(ciicircmaxareaaddrmismatches.get_name_leafdata());
    if (ciicircnumadj.is_set || is_set(ciicircnumadj.yfilter)) leaf_name_data.push_back(ciicircnumadj.get_name_leafdata());
    if (ciicircrejadjs.is_set || is_set(ciicircrejadjs.yfilter)) leaf_name_data.push_back(ciicircrejadjs.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircuitType")
    {
        ciicircuittype = value;
        ciicircuittype.value_namespace = name_space;
        ciicircuittype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircAdjChanges")
    {
        ciicircadjchanges = value;
        ciicircadjchanges.value_namespace = name_space;
        ciicircadjchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircAuthFails")
    {
        ciicircauthfails = value;
        ciicircauthfails.value_namespace = name_space;
        ciicircauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircAuthTypeFails")
    {
        ciicircauthtypefails = value;
        ciicircauthtypefails.value_namespace = name_space;
        ciicircauthtypefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircIDFieldLenMismatches")
    {
        ciicircidfieldlenmismatches = value;
        ciicircidfieldlenmismatches.value_namespace = name_space;
        ciicircidfieldlenmismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircInitFails")
    {
        ciicircinitfails = value;
        ciicircinitfails.value_namespace = name_space;
        ciicircinitfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLANDesISChanges")
    {
        ciicirclandesischanges = value;
        ciicirclandesischanges.value_namespace = name_space;
        ciicirclandesischanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircMaxAreaAddrMismatches")
    {
        ciicircmaxareaaddrmismatches = value;
        ciicircmaxareaaddrmismatches.value_namespace = name_space;
        ciicircmaxareaaddrmismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircNumAdj")
    {
        ciicircnumadj = value;
        ciicircnumadj.value_namespace = name_space;
        ciicircnumadj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircRejAdjs")
    {
        ciicircrejadjs = value;
        ciicircrejadjs.value_namespace = name_space;
        ciicircrejadjs.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircuitType")
    {
        ciicircuittype.yfilter = yfilter;
    }
    if(value_path == "ciiCircAdjChanges")
    {
        ciicircadjchanges.yfilter = yfilter;
    }
    if(value_path == "ciiCircAuthFails")
    {
        ciicircauthfails.yfilter = yfilter;
    }
    if(value_path == "ciiCircAuthTypeFails")
    {
        ciicircauthtypefails.yfilter = yfilter;
    }
    if(value_path == "ciiCircIDFieldLenMismatches")
    {
        ciicircidfieldlenmismatches.yfilter = yfilter;
    }
    if(value_path == "ciiCircInitFails")
    {
        ciicircinitfails.yfilter = yfilter;
    }
    if(value_path == "ciiCircLANDesISChanges")
    {
        ciicirclandesischanges.yfilter = yfilter;
    }
    if(value_path == "ciiCircMaxAreaAddrMismatches")
    {
        ciicircmaxareaaddrmismatches.yfilter = yfilter;
    }
    if(value_path == "ciiCircNumAdj")
    {
        ciicircnumadj.yfilter = yfilter;
    }
    if(value_path == "ciiCircRejAdjs")
    {
        ciicircrejadjs.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiCircuitType" || name == "ciiCircAdjChanges" || name == "ciiCircAuthFails" || name == "ciiCircAuthTypeFails" || name == "ciiCircIDFieldLenMismatches" || name == "ciiCircInitFails" || name == "ciiCircLANDesISChanges" || name == "ciiCircMaxAreaAddrMismatches" || name == "ciiCircNumAdj" || name == "ciiCircRejAdjs")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciipacketcountertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciipacketcountertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciipacketcountertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiPacketCounterEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciipacketcountlevel.yfilter)
	|| ydk::is_set(ciipacketcountdirection.yfilter)
	|| ydk::is_set(ciipacketcountcsnps.yfilter)
	|| ydk::is_set(ciipacketcounteshellos.yfilter)
	|| ydk::is_set(ciipacketcountiihellos.yfilter)
	|| ydk::is_set(ciipacketcountishellos.yfilter)
	|| ydk::is_set(ciipacketcountlsps.yfilter)
	|| ydk::is_set(ciipacketcountpsnps.yfilter)
	|| ydk::is_set(ciipacketcountunknowns.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciipacketcountlevel.is_set || is_set(ciipacketcountlevel.yfilter)) leaf_name_data.push_back(ciipacketcountlevel.get_name_leafdata());
    if (ciipacketcountdirection.is_set || is_set(ciipacketcountdirection.yfilter)) leaf_name_data.push_back(ciipacketcountdirection.get_name_leafdata());
    if (ciipacketcountcsnps.is_set || is_set(ciipacketcountcsnps.yfilter)) leaf_name_data.push_back(ciipacketcountcsnps.get_name_leafdata());
    if (ciipacketcounteshellos.is_set || is_set(ciipacketcounteshellos.yfilter)) leaf_name_data.push_back(ciipacketcounteshellos.get_name_leafdata());
    if (ciipacketcountiihellos.is_set || is_set(ciipacketcountiihellos.yfilter)) leaf_name_data.push_back(ciipacketcountiihellos.get_name_leafdata());
    if (ciipacketcountishellos.is_set || is_set(ciipacketcountishellos.yfilter)) leaf_name_data.push_back(ciipacketcountishellos.get_name_leafdata());
    if (ciipacketcountlsps.is_set || is_set(ciipacketcountlsps.yfilter)) leaf_name_data.push_back(ciipacketcountlsps.get_name_leafdata());
    if (ciipacketcountpsnps.is_set || is_set(ciipacketcountpsnps.yfilter)) leaf_name_data.push_back(ciipacketcountpsnps.get_name_leafdata());
    if (ciipacketcountunknowns.is_set || is_set(ciipacketcountunknowns.yfilter)) leaf_name_data.push_back(ciipacketcountunknowns.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountLevel")
    {
        ciipacketcountlevel = value;
        ciipacketcountlevel.value_namespace = name_space;
        ciipacketcountlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountDirection")
    {
        ciipacketcountdirection = value;
        ciipacketcountdirection.value_namespace = name_space;
        ciipacketcountdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountCSNPs")
    {
        ciipacketcountcsnps = value;
        ciipacketcountcsnps.value_namespace = name_space;
        ciipacketcountcsnps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountESHellos")
    {
        ciipacketcounteshellos = value;
        ciipacketcounteshellos.value_namespace = name_space;
        ciipacketcounteshellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountIIHellos")
    {
        ciipacketcountiihellos = value;
        ciipacketcountiihellos.value_namespace = name_space;
        ciipacketcountiihellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountISHellos")
    {
        ciipacketcountishellos = value;
        ciipacketcountishellos.value_namespace = name_space;
        ciipacketcountishellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountLSPs")
    {
        ciipacketcountlsps = value;
        ciipacketcountlsps.value_namespace = name_space;
        ciipacketcountlsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountPSNPs")
    {
        ciipacketcountpsnps = value;
        ciipacketcountpsnps.value_namespace = name_space;
        ciipacketcountpsnps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountUnknowns")
    {
        ciipacketcountunknowns = value;
        ciipacketcountunknowns.value_namespace = name_space;
        ciipacketcountunknowns.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountLevel")
    {
        ciipacketcountlevel.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountDirection")
    {
        ciipacketcountdirection.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountCSNPs")
    {
        ciipacketcountcsnps.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountESHellos")
    {
        ciipacketcounteshellos.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountIIHellos")
    {
        ciipacketcountiihellos.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountISHellos")
    {
        ciipacketcountishellos.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountLSPs")
    {
        ciipacketcountlsps.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountPSNPs")
    {
        ciipacketcountpsnps.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountUnknowns")
    {
        ciipacketcountunknowns.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiPacketCountLevel" || name == "ciiPacketCountDirection" || name == "ciiPacketCountCSNPs" || name == "ciiPacketCountESHellos" || name == "ciiPacketCountIIHellos" || name == "ciiPacketCountISHellos" || name == "ciiPacketCountLSPs" || name == "ciiPacketCountPSNPs" || name == "ciiPacketCountUnknowns")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiisadjtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiisadjtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiisadjtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadj3waystate.yfilter)
	|| ydk::is_set(ciiisadjholdtimer.yfilter)
	|| ydk::is_set(ciiisadjlastuptime.yfilter)
	|| ydk::is_set(ciiisadjnbrextendedcircid.yfilter)
	|| ydk::is_set(ciiisadjneighpriority.yfilter)
	|| ydk::is_set(ciiisadjneighsnpaaddress.yfilter)
	|| ydk::is_set(ciiisadjneighsysid.yfilter)
	|| ydk::is_set(ciiisadjneighsystype.yfilter)
	|| ydk::is_set(ciiisadjstate.yfilter)
	|| ydk::is_set(ciiisadjusage.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadj3waystate.is_set || is_set(ciiisadj3waystate.yfilter)) leaf_name_data.push_back(ciiisadj3waystate.get_name_leafdata());
    if (ciiisadjholdtimer.is_set || is_set(ciiisadjholdtimer.yfilter)) leaf_name_data.push_back(ciiisadjholdtimer.get_name_leafdata());
    if (ciiisadjlastuptime.is_set || is_set(ciiisadjlastuptime.yfilter)) leaf_name_data.push_back(ciiisadjlastuptime.get_name_leafdata());
    if (ciiisadjnbrextendedcircid.is_set || is_set(ciiisadjnbrextendedcircid.yfilter)) leaf_name_data.push_back(ciiisadjnbrextendedcircid.get_name_leafdata());
    if (ciiisadjneighpriority.is_set || is_set(ciiisadjneighpriority.yfilter)) leaf_name_data.push_back(ciiisadjneighpriority.get_name_leafdata());
    if (ciiisadjneighsnpaaddress.is_set || is_set(ciiisadjneighsnpaaddress.yfilter)) leaf_name_data.push_back(ciiisadjneighsnpaaddress.get_name_leafdata());
    if (ciiisadjneighsysid.is_set || is_set(ciiisadjneighsysid.yfilter)) leaf_name_data.push_back(ciiisadjneighsysid.get_name_leafdata());
    if (ciiisadjneighsystype.is_set || is_set(ciiisadjneighsystype.yfilter)) leaf_name_data.push_back(ciiisadjneighsystype.get_name_leafdata());
    if (ciiisadjstate.is_set || is_set(ciiisadjstate.yfilter)) leaf_name_data.push_back(ciiisadjstate.get_name_leafdata());
    if (ciiisadjusage.is_set || is_set(ciiisadjusage.yfilter)) leaf_name_data.push_back(ciiisadjusage.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
        ciiisadjindex.value_namespace = name_space;
        ciiisadjindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdj3WayState")
    {
        ciiisadj3waystate = value;
        ciiisadj3waystate.value_namespace = name_space;
        ciiisadj3waystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjHoldTimer")
    {
        ciiisadjholdtimer = value;
        ciiisadjholdtimer.value_namespace = name_space;
        ciiisadjholdtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjLastUpTime")
    {
        ciiisadjlastuptime = value;
        ciiisadjlastuptime.value_namespace = name_space;
        ciiisadjlastuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNbrExtendedCircID")
    {
        ciiisadjnbrextendedcircid = value;
        ciiisadjnbrextendedcircid.value_namespace = name_space;
        ciiisadjnbrextendedcircid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighPriority")
    {
        ciiisadjneighpriority = value;
        ciiisadjneighpriority.value_namespace = name_space;
        ciiisadjneighpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighSNPAAddress")
    {
        ciiisadjneighsnpaaddress = value;
        ciiisadjneighsnpaaddress.value_namespace = name_space;
        ciiisadjneighsnpaaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighSysID")
    {
        ciiisadjneighsysid = value;
        ciiisadjneighsysid.value_namespace = name_space;
        ciiisadjneighsysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighSysType")
    {
        ciiisadjneighsystype = value;
        ciiisadjneighsystype.value_namespace = name_space;
        ciiisadjneighsystype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjState")
    {
        ciiisadjstate = value;
        ciiisadjstate.value_namespace = name_space;
        ciiisadjstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjUsage")
    {
        ciiisadjusage = value;
        ciiisadjusage.value_namespace = name_space;
        ciiisadjusage.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdj3WayState")
    {
        ciiisadj3waystate.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjHoldTimer")
    {
        ciiisadjholdtimer.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjLastUpTime")
    {
        ciiisadjlastuptime.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNbrExtendedCircID")
    {
        ciiisadjnbrextendedcircid.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighPriority")
    {
        ciiisadjneighpriority.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighSNPAAddress")
    {
        ciiisadjneighsnpaaddress.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighSysID")
    {
        ciiisadjneighsysid.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighSysType")
    {
        ciiisadjneighsystype.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjState")
    {
        ciiisadjstate.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjUsage")
    {
        ciiisadjusage.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdj3WayState" || name == "ciiISAdjHoldTimer" || name == "ciiISAdjLastUpTime" || name == "ciiISAdjNbrExtendedCircID" || name == "ciiISAdjNeighPriority" || name == "ciiISAdjNeighSNPAAddress" || name == "ciiISAdjNeighSysID" || name == "ciiISAdjNeighSysType" || name == "ciiISAdjState" || name == "ciiISAdjUsage")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiisadjareaaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiisadjareaaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiisadjareaaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjAreaAddrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadjareaaddrindex.yfilter)
	|| ydk::is_set(ciiisadjareaaddress.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjareaaddrindex.is_set || is_set(ciiisadjareaaddrindex.yfilter)) leaf_name_data.push_back(ciiisadjareaaddrindex.get_name_leafdata());
    if (ciiisadjareaaddress.is_set || is_set(ciiisadjareaaddress.yfilter)) leaf_name_data.push_back(ciiisadjareaaddress.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
        ciiisadjindex.value_namespace = name_space;
        ciiisadjindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjAreaAddrIndex")
    {
        ciiisadjareaaddrindex = value;
        ciiisadjareaaddrindex.value_namespace = name_space;
        ciiisadjareaaddrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjAreaAddress")
    {
        ciiisadjareaaddress = value;
        ciiisadjareaaddress.value_namespace = name_space;
        ciiisadjareaaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjAreaAddrIndex")
    {
        ciiisadjareaaddrindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjAreaAddress")
    {
        ciiisadjareaaddress.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdjAreaAddrIndex" || name == "ciiISAdjAreaAddress")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiisadjipaddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiisadjipaddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiisadjipaddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjIPAddrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadjipaddrindex.yfilter)
	|| ydk::is_set(ciiisadjipaddraddress.yfilter)
	|| ydk::is_set(ciiisadjipaddrtype.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjipaddrindex.is_set || is_set(ciiisadjipaddrindex.yfilter)) leaf_name_data.push_back(ciiisadjipaddrindex.get_name_leafdata());
    if (ciiisadjipaddraddress.is_set || is_set(ciiisadjipaddraddress.yfilter)) leaf_name_data.push_back(ciiisadjipaddraddress.get_name_leafdata());
    if (ciiisadjipaddrtype.is_set || is_set(ciiisadjipaddrtype.yfilter)) leaf_name_data.push_back(ciiisadjipaddrtype.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
        ciiisadjindex.value_namespace = name_space;
        ciiisadjindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIPAddrIndex")
    {
        ciiisadjipaddrindex = value;
        ciiisadjipaddrindex.value_namespace = name_space;
        ciiisadjipaddrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIPAddrAddress")
    {
        ciiisadjipaddraddress = value;
        ciiisadjipaddraddress.value_namespace = name_space;
        ciiisadjipaddraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIPAddrType")
    {
        ciiisadjipaddrtype = value;
        ciiisadjipaddrtype.value_namespace = name_space;
        ciiisadjipaddrtype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIPAddrIndex")
    {
        ciiisadjipaddrindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIPAddrAddress")
    {
        ciiisadjipaddraddress.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIPAddrType")
    {
        ciiisadjipaddrtype.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdjIPAddrIndex" || name == "ciiISAdjIPAddrAddress" || name == "ciiISAdjIPAddrType")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiisadjprotsupptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiisadjprotsupptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiisadjprotsupptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjProtSuppEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadjprotsuppprotocol.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjprotsuppprotocol.is_set || is_set(ciiisadjprotsuppprotocol.yfilter)) leaf_name_data.push_back(ciiisadjprotsuppprotocol.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex = value;
        ciiisadjindex.value_namespace = name_space;
        ciiisadjindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjProtSuppProtocol")
    {
        ciiisadjprotsuppprotocol = value;
        ciiisadjprotsuppprotocol.value_namespace = name_space;
        ciiisadjprotsuppprotocol.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjProtSuppProtocol")
    {
        ciiisadjprotsuppprotocol.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdjProtSuppProtocol")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiratable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiratable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiratable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRAEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiraindex.yfilter)
	|| ydk::is_set(ciiraaddrprefix.yfilter)
	|| ydk::is_set(ciiraadminstate.yfilter)
	|| ydk::is_set(ciiraexiststate.yfilter)
	|| ydk::is_set(ciiramaptype.yfilter)
	|| ydk::is_set(ciirametric.yfilter)
	|| ydk::is_set(ciirametrictype.yfilter)
	|| ydk::is_set(ciirasnpaaddress.yfilter)
	|| ydk::is_set(ciirasnpamask.yfilter)
	|| ydk::is_set(ciirasnpaprefix.yfilter)
	|| ydk::is_set(ciiratype.yfilter);
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

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiraindex.is_set || is_set(ciiraindex.yfilter)) leaf_name_data.push_back(ciiraindex.get_name_leafdata());
    if (ciiraaddrprefix.is_set || is_set(ciiraaddrprefix.yfilter)) leaf_name_data.push_back(ciiraaddrprefix.get_name_leafdata());
    if (ciiraadminstate.is_set || is_set(ciiraadminstate.yfilter)) leaf_name_data.push_back(ciiraadminstate.get_name_leafdata());
    if (ciiraexiststate.is_set || is_set(ciiraexiststate.yfilter)) leaf_name_data.push_back(ciiraexiststate.get_name_leafdata());
    if (ciiramaptype.is_set || is_set(ciiramaptype.yfilter)) leaf_name_data.push_back(ciiramaptype.get_name_leafdata());
    if (ciirametric.is_set || is_set(ciirametric.yfilter)) leaf_name_data.push_back(ciirametric.get_name_leafdata());
    if (ciirametrictype.is_set || is_set(ciirametrictype.yfilter)) leaf_name_data.push_back(ciirametrictype.get_name_leafdata());
    if (ciirasnpaaddress.is_set || is_set(ciirasnpaaddress.yfilter)) leaf_name_data.push_back(ciirasnpaaddress.get_name_leafdata());
    if (ciirasnpamask.is_set || is_set(ciirasnpamask.yfilter)) leaf_name_data.push_back(ciirasnpamask.get_name_leafdata());
    if (ciirasnpaprefix.is_set || is_set(ciirasnpaprefix.yfilter)) leaf_name_data.push_back(ciirasnpaprefix.get_name_leafdata());
    if (ciiratype.is_set || is_set(ciiratype.yfilter)) leaf_name_data.push_back(ciiratype.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiratable::Ciiraentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAIndex")
    {
        ciiraindex = value;
        ciiraindex.value_namespace = name_space;
        ciiraindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAAddrPrefix")
    {
        ciiraaddrprefix = value;
        ciiraaddrprefix.value_namespace = name_space;
        ciiraaddrprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAAdminState")
    {
        ciiraadminstate = value;
        ciiraadminstate.value_namespace = name_space;
        ciiraadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAExistState")
    {
        ciiraexiststate = value;
        ciiraexiststate.value_namespace = name_space;
        ciiraexiststate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAMapType")
    {
        ciiramaptype = value;
        ciiramaptype.value_namespace = name_space;
        ciiramaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAMetric")
    {
        ciirametric = value;
        ciirametric.value_namespace = name_space;
        ciirametric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAMetricType")
    {
        ciirametrictype = value;
        ciirametrictype.value_namespace = name_space;
        ciirametrictype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRASNPAAddress")
    {
        ciirasnpaaddress = value;
        ciirasnpaaddress.value_namespace = name_space;
        ciirasnpaaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRASNPAMask")
    {
        ciirasnpamask = value;
        ciirasnpamask.value_namespace = name_space;
        ciirasnpamask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRASNPAPrefix")
    {
        ciirasnpaprefix = value;
        ciirasnpaprefix.value_namespace = name_space;
        ciirasnpaprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAType")
    {
        ciiratype = value;
        ciiratype.value_namespace = name_space;
        ciiratype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiratable::Ciiraentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiRAIndex")
    {
        ciiraindex.yfilter = yfilter;
    }
    if(value_path == "ciiRAAddrPrefix")
    {
        ciiraaddrprefix.yfilter = yfilter;
    }
    if(value_path == "ciiRAAdminState")
    {
        ciiraadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiRAExistState")
    {
        ciiraexiststate.yfilter = yfilter;
    }
    if(value_path == "ciiRAMapType")
    {
        ciiramaptype.yfilter = yfilter;
    }
    if(value_path == "ciiRAMetric")
    {
        ciirametric.yfilter = yfilter;
    }
    if(value_path == "ciiRAMetricType")
    {
        ciirametrictype.yfilter = yfilter;
    }
    if(value_path == "ciiRASNPAAddress")
    {
        ciirasnpaaddress.yfilter = yfilter;
    }
    if(value_path == "ciiRASNPAMask")
    {
        ciirasnpamask.yfilter = yfilter;
    }
    if(value_path == "ciiRASNPAPrefix")
    {
        ciirasnpaprefix.yfilter = yfilter;
    }
    if(value_path == "ciiRAType")
    {
        ciiratype.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiratable::Ciiraentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiRAIndex" || name == "ciiRAAddrPrefix" || name == "ciiRAAdminState" || name == "ciiRAExistState" || name == "ciiRAMapType" || name == "ciiRAMetric" || name == "ciiRAMetricType" || name == "ciiRASNPAAddress" || name == "ciiRASNPAMask" || name == "ciiRASNPAPrefix" || name == "ciiRAType")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciiipratable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciiipratable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciiipratable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiIPRAEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciiipradesttype.yfilter)
	|| ydk::is_set(ciiipradest.yfilter)
	|| ydk::is_set(ciiipradestprefixlen.yfilter)
	|| ydk::is_set(ciiipranexthopindex.yfilter)
	|| ydk::is_set(ciiipraadminstate.yfilter)
	|| ydk::is_set(ciiipraexiststate.yfilter)
	|| ydk::is_set(ciiiprafullmetric.yfilter)
	|| ydk::is_set(ciiiprametric.yfilter)
	|| ydk::is_set(ciiiprametrictype.yfilter)
	|| ydk::is_set(ciiipranexthop.yfilter)
	|| ydk::is_set(ciiipranexthoptype.yfilter)
	|| ydk::is_set(ciiiprasnpaaddress.yfilter)
	|| ydk::is_set(ciiiprasourcetype.yfilter)
	|| ydk::is_set(ciiipratype.yfilter);
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

    if (ciiipradesttype.is_set || is_set(ciiipradesttype.yfilter)) leaf_name_data.push_back(ciiipradesttype.get_name_leafdata());
    if (ciiipradest.is_set || is_set(ciiipradest.yfilter)) leaf_name_data.push_back(ciiipradest.get_name_leafdata());
    if (ciiipradestprefixlen.is_set || is_set(ciiipradestprefixlen.yfilter)) leaf_name_data.push_back(ciiipradestprefixlen.get_name_leafdata());
    if (ciiipranexthopindex.is_set || is_set(ciiipranexthopindex.yfilter)) leaf_name_data.push_back(ciiipranexthopindex.get_name_leafdata());
    if (ciiipraadminstate.is_set || is_set(ciiipraadminstate.yfilter)) leaf_name_data.push_back(ciiipraadminstate.get_name_leafdata());
    if (ciiipraexiststate.is_set || is_set(ciiipraexiststate.yfilter)) leaf_name_data.push_back(ciiipraexiststate.get_name_leafdata());
    if (ciiiprafullmetric.is_set || is_set(ciiiprafullmetric.yfilter)) leaf_name_data.push_back(ciiiprafullmetric.get_name_leafdata());
    if (ciiiprametric.is_set || is_set(ciiiprametric.yfilter)) leaf_name_data.push_back(ciiiprametric.get_name_leafdata());
    if (ciiiprametrictype.is_set || is_set(ciiiprametrictype.yfilter)) leaf_name_data.push_back(ciiiprametrictype.get_name_leafdata());
    if (ciiipranexthop.is_set || is_set(ciiipranexthop.yfilter)) leaf_name_data.push_back(ciiipranexthop.get_name_leafdata());
    if (ciiipranexthoptype.is_set || is_set(ciiipranexthoptype.yfilter)) leaf_name_data.push_back(ciiipranexthoptype.get_name_leafdata());
    if (ciiiprasnpaaddress.is_set || is_set(ciiiprasnpaaddress.yfilter)) leaf_name_data.push_back(ciiiprasnpaaddress.get_name_leafdata());
    if (ciiiprasourcetype.is_set || is_set(ciiiprasourcetype.yfilter)) leaf_name_data.push_back(ciiiprasourcetype.get_name_leafdata());
    if (ciiipratype.is_set || is_set(ciiipratype.yfilter)) leaf_name_data.push_back(ciiipratype.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiIPRADestType")
    {
        ciiipradesttype = value;
        ciiipradesttype.value_namespace = name_space;
        ciiipradesttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRADest")
    {
        ciiipradest = value;
        ciiipradest.value_namespace = name_space;
        ciiipradest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRADestPrefixLen")
    {
        ciiipradestprefixlen = value;
        ciiipradestprefixlen.value_namespace = name_space;
        ciiipradestprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRANextHopIndex")
    {
        ciiipranexthopindex = value;
        ciiipranexthopindex.value_namespace = name_space;
        ciiipranexthopindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAAdminState")
    {
        ciiipraadminstate = value;
        ciiipraadminstate.value_namespace = name_space;
        ciiipraadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAExistState")
    {
        ciiipraexiststate = value;
        ciiipraexiststate.value_namespace = name_space;
        ciiipraexiststate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAFullMetric")
    {
        ciiiprafullmetric = value;
        ciiiprafullmetric.value_namespace = name_space;
        ciiiprafullmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAMetric")
    {
        ciiiprametric = value;
        ciiiprametric.value_namespace = name_space;
        ciiiprametric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAMetricType")
    {
        ciiiprametrictype = value;
        ciiiprametrictype.value_namespace = name_space;
        ciiiprametrictype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRANextHop")
    {
        ciiipranexthop = value;
        ciiipranexthop.value_namespace = name_space;
        ciiipranexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRANextHopType")
    {
        ciiipranexthoptype = value;
        ciiipranexthoptype.value_namespace = name_space;
        ciiipranexthoptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRASNPAAddress")
    {
        ciiiprasnpaaddress = value;
        ciiiprasnpaaddress.value_namespace = name_space;
        ciiiprasnpaaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRASourceType")
    {
        ciiiprasourcetype = value;
        ciiiprasourcetype.value_namespace = name_space;
        ciiiprasourcetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAType")
    {
        ciiipratype = value;
        ciiipratype.value_namespace = name_space;
        ciiipratype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiIPRADestType")
    {
        ciiipradesttype.yfilter = yfilter;
    }
    if(value_path == "ciiIPRADest")
    {
        ciiipradest.yfilter = yfilter;
    }
    if(value_path == "ciiIPRADestPrefixLen")
    {
        ciiipradestprefixlen.yfilter = yfilter;
    }
    if(value_path == "ciiIPRANextHopIndex")
    {
        ciiipranexthopindex.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAAdminState")
    {
        ciiipraadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAExistState")
    {
        ciiipraexiststate.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAFullMetric")
    {
        ciiiprafullmetric.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAMetric")
    {
        ciiiprametric.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAMetricType")
    {
        ciiiprametrictype.yfilter = yfilter;
    }
    if(value_path == "ciiIPRANextHop")
    {
        ciiipranexthop.yfilter = yfilter;
    }
    if(value_path == "ciiIPRANextHopType")
    {
        ciiipranexthoptype.yfilter = yfilter;
    }
    if(value_path == "ciiIPRASNPAAddress")
    {
        ciiiprasnpaaddress.yfilter = yfilter;
    }
    if(value_path == "ciiIPRASourceType")
    {
        ciiiprasourcetype.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAType")
    {
        ciiipratype.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiIPRADestType" || name == "ciiIPRADest" || name == "ciiIPRADestPrefixLen" || name == "ciiIPRANextHopIndex" || name == "ciiIPRAAdminState" || name == "ciiIPRAExistState" || name == "ciiIPRAFullMetric" || name == "ciiIPRAMetric" || name == "ciiIPRAMetricType" || name == "ciiIPRANextHop" || name == "ciiIPRANextHopType" || name == "ciiIPRASNPAAddress" || name == "ciiIPRASourceType" || name == "ciiIPRAType")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciilspsummarytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciilspsummarytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciilspsummarytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPSummaryEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciilsplevel.yfilter)
	|| ydk::is_set(ciilspid.yfilter)
	|| ydk::is_set(ciilspattributes.yfilter)
	|| ydk::is_set(ciilspchecksum.yfilter)
	|| ydk::is_set(ciilsplifetimeremain.yfilter)
	|| ydk::is_set(ciilsppdulength.yfilter)
	|| ydk::is_set(ciilspseq.yfilter)
	|| ydk::is_set(ciilspzerolife.yfilter);
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

    if (ciilsplevel.is_set || is_set(ciilsplevel.yfilter)) leaf_name_data.push_back(ciilsplevel.get_name_leafdata());
    if (ciilspid.is_set || is_set(ciilspid.yfilter)) leaf_name_data.push_back(ciilspid.get_name_leafdata());
    if (ciilspattributes.is_set || is_set(ciilspattributes.yfilter)) leaf_name_data.push_back(ciilspattributes.get_name_leafdata());
    if (ciilspchecksum.is_set || is_set(ciilspchecksum.yfilter)) leaf_name_data.push_back(ciilspchecksum.get_name_leafdata());
    if (ciilsplifetimeremain.is_set || is_set(ciilsplifetimeremain.yfilter)) leaf_name_data.push_back(ciilsplifetimeremain.get_name_leafdata());
    if (ciilsppdulength.is_set || is_set(ciilsppdulength.yfilter)) leaf_name_data.push_back(ciilsppdulength.get_name_leafdata());
    if (ciilspseq.is_set || is_set(ciilspseq.yfilter)) leaf_name_data.push_back(ciilspseq.get_name_leafdata());
    if (ciilspzerolife.is_set || is_set(ciilspzerolife.yfilter)) leaf_name_data.push_back(ciilspzerolife.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiLSPLevel")
    {
        ciilsplevel = value;
        ciilsplevel.value_namespace = name_space;
        ciilsplevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPID")
    {
        ciilspid = value;
        ciilspid.value_namespace = name_space;
        ciilspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPAttributes")
    {
        ciilspattributes = value;
        ciilspattributes.value_namespace = name_space;
        ciilspattributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPChecksum")
    {
        ciilspchecksum = value;
        ciilspchecksum.value_namespace = name_space;
        ciilspchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPLifetimeRemain")
    {
        ciilsplifetimeremain = value;
        ciilsplifetimeremain.value_namespace = name_space;
        ciilsplifetimeremain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPPDULength")
    {
        ciilsppdulength = value;
        ciilsppdulength.value_namespace = name_space;
        ciilsppdulength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPSeq")
    {
        ciilspseq = value;
        ciilspseq.value_namespace = name_space;
        ciilspseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPZeroLife")
    {
        ciilspzerolife = value;
        ciilspzerolife.value_namespace = name_space;
        ciilspzerolife.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiLSPLevel")
    {
        ciilsplevel.yfilter = yfilter;
    }
    if(value_path == "ciiLSPID")
    {
        ciilspid.yfilter = yfilter;
    }
    if(value_path == "ciiLSPAttributes")
    {
        ciilspattributes.yfilter = yfilter;
    }
    if(value_path == "ciiLSPChecksum")
    {
        ciilspchecksum.yfilter = yfilter;
    }
    if(value_path == "ciiLSPLifetimeRemain")
    {
        ciilsplifetimeremain.yfilter = yfilter;
    }
    if(value_path == "ciiLSPPDULength")
    {
        ciilsppdulength.yfilter = yfilter;
    }
    if(value_path == "ciiLSPSeq")
    {
        ciilspseq.yfilter = yfilter;
    }
    if(value_path == "ciiLSPZeroLife")
    {
        ciilspzerolife.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPLevel" || name == "ciiLSPID" || name == "ciiLSPAttributes" || name == "ciiLSPChecksum" || name == "ciiLSPLifetimeRemain" || name == "ciiLSPPDULength" || name == "ciiLSPSeq" || name == "ciiLSPZeroLife")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoIetfIsisMib::Ciilsptlvtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfIsisMib::Ciilsptlvtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfIsisMib::Ciilsptlvtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPTLVEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ciilsplevel.yfilter)
	|| ydk::is_set(ciilspid.yfilter)
	|| ydk::is_set(ciilsptlvindex.yfilter)
	|| ydk::is_set(ciilsptlvchecksum.yfilter)
	|| ydk::is_set(ciilsptlvlen.yfilter)
	|| ydk::is_set(ciilsptlvseq.yfilter)
	|| ydk::is_set(ciilsptlvtype.yfilter)
	|| ydk::is_set(ciilsptlvvalue.yfilter);
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

    if (ciilsplevel.is_set || is_set(ciilsplevel.yfilter)) leaf_name_data.push_back(ciilsplevel.get_name_leafdata());
    if (ciilspid.is_set || is_set(ciilspid.yfilter)) leaf_name_data.push_back(ciilspid.get_name_leafdata());
    if (ciilsptlvindex.is_set || is_set(ciilsptlvindex.yfilter)) leaf_name_data.push_back(ciilsptlvindex.get_name_leafdata());
    if (ciilsptlvchecksum.is_set || is_set(ciilsptlvchecksum.yfilter)) leaf_name_data.push_back(ciilsptlvchecksum.get_name_leafdata());
    if (ciilsptlvlen.is_set || is_set(ciilsptlvlen.yfilter)) leaf_name_data.push_back(ciilsptlvlen.get_name_leafdata());
    if (ciilsptlvseq.is_set || is_set(ciilsptlvseq.yfilter)) leaf_name_data.push_back(ciilsptlvseq.get_name_leafdata());
    if (ciilsptlvtype.is_set || is_set(ciilsptlvtype.yfilter)) leaf_name_data.push_back(ciilsptlvtype.get_name_leafdata());
    if (ciilsptlvvalue.is_set || is_set(ciilsptlvvalue.yfilter)) leaf_name_data.push_back(ciilsptlvvalue.get_name_leafdata());


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

void CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiLSPLevel")
    {
        ciilsplevel = value;
        ciilsplevel.value_namespace = name_space;
        ciilsplevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPID")
    {
        ciilspid = value;
        ciilspid.value_namespace = name_space;
        ciilspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVIndex")
    {
        ciilsptlvindex = value;
        ciilsptlvindex.value_namespace = name_space;
        ciilsptlvindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVChecksum")
    {
        ciilsptlvchecksum = value;
        ciilsptlvchecksum.value_namespace = name_space;
        ciilsptlvchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVLen")
    {
        ciilsptlvlen = value;
        ciilsptlvlen.value_namespace = name_space;
        ciilsptlvlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVSeq")
    {
        ciilsptlvseq = value;
        ciilsptlvseq.value_namespace = name_space;
        ciilsptlvseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVType")
    {
        ciilsptlvtype = value;
        ciilsptlvtype.value_namespace = name_space;
        ciilsptlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVValue")
    {
        ciilsptlvvalue = value;
        ciilsptlvvalue.value_namespace = name_space;
        ciilsptlvvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiLSPLevel")
    {
        ciilsplevel.yfilter = yfilter;
    }
    if(value_path == "ciiLSPID")
    {
        ciilspid.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVIndex")
    {
        ciilsptlvindex.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVChecksum")
    {
        ciilsptlvchecksum.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVLen")
    {
        ciilsptlvlen.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVSeq")
    {
        ciilsptlvseq.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVType")
    {
        ciilsptlvtype.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVValue")
    {
        ciilsptlvvalue.yfilter = yfilter;
    }
}

bool CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPLevel" || name == "ciiLSPID" || name == "ciiLSPTLVIndex" || name == "ciiLSPTLVChecksum" || name == "ciiLSPTLVLen" || name == "ciiLSPTLVSeq" || name == "ciiLSPTLVType" || name == "ciiLSPTLVValue")
        return true;
    return false;
}

const Enum::YLeaf Ciimetricstyle::narrow {1, "narrow"};
const Enum::YLeaf Ciimetricstyle::wide {2, "wide"};
const Enum::YLeaf Ciimetricstyle::both {3, "both"};

const Enum::YLeaf Ciiadminstate::on {1, "on"};
const Enum::YLeaf Ciiadminstate::off {2, "off"};

const Enum::YLeaf Ciilevelstate::off {1, "off"};
const Enum::YLeaf Ciilevelstate::on {2, "on"};
const Enum::YLeaf Ciilevelstate::waiting {3, "waiting"};
const Enum::YLeaf Ciilevelstate::overloaded {4, "overloaded"};

const Enum::YLeaf Ciimetrictype::internal {1, "internal"};
const Enum::YLeaf Ciimetrictype::external {2, "external"};

const Enum::YLeaf Ciiislevel::none {0, "none"};
const Enum::YLeaf Ciiislevel::area {1, "area"};
const Enum::YLeaf Ciiislevel::domain {2, "domain"};

const Enum::YLeaf Ciisupportedprotocol::iso8473 {129, "iso8473"};
const Enum::YLeaf Ciisupportedprotocol::ipV6 {142, "ipV6"};
const Enum::YLeaf Ciisupportedprotocol::ip {204, "ip"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::Ciisysversion::unknown {0, "unknown"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::Ciisysversion::one {1, "one"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::Ciisystype::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::Ciisystype::level2IS {2, "level2IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysobject::Ciisystype::level1L2IS {3, "level1L2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::Ciisyslevelindex::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::Ciisyslevelindex::level2IS {2, "level2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirctype::broadcast {1, "broadcast"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirctype::ptToPt {2, "ptToPt"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirctype::staticIn {3, "staticIn"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirctype::staticOut {4, "staticOut"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirctype::dA {5, "dA"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirclevel::level1 {1, "level1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirclevel::level2 {2, "level2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirclevel::level1L2 {3, "level1L2"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicircmeshgroupenabled::inactive {1, "inactive"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicircmeshgroupenabled::blocked {2, "blocked"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicircmeshgroupenabled::set {3, "set"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::Ciicirclevelindex::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::Ciicirclevelindex::level2IS {2, "level2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::Ciisysstatlevel::level1IS {1, "level1IS"};
const Enum::YLeaf CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::Ciisysstatlevel::level2IS {2, "level2IS"};

const Enum::YLeaf CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::Ciicircuittype::lanlevel1 {1, "lanlevel1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::Ciicircuittype::lanlevel2 {2, "lanlevel2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::Ciicircuittype::p2pcircuit {3, "p2pcircuit"};

const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountlevel::level1 {1, "level1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountlevel::level2 {2, "level2"};

const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountdirection::sending {1, "sending"};
const Enum::YLeaf CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountdirection::receiving {2, "receiving"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjstate::down {1, "down"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjstate::initializing {2, "initializing"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjstate::up {3, "up"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjstate::failed {4, "failed"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3Waystate::up {0, "up"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3Waystate::initializing {1, "initializing"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3Waystate::down {2, "down"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3Waystate::failed {3, "failed"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjneighsystype::l1IntermediateSystem {1, "l1IntermediateSystem"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjneighsystype::l2IntermediateSystem {2, "l2IntermediateSystem"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjneighsystype::l1L2IntermediateSystem {3, "l1L2IntermediateSystem"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjneighsystype::unknown {4, "unknown"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjusage::level1 {1, "level1"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjusage::level2 {2, "level2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjusage::level1and2 {3, "level1and2"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiramaptype::none {1, "none"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiramaptype::explicit_ {2, "explicit"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiramaptype::extractIDI {3, "extractIDI"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiramaptype::extractDSP {4, "extractDSP"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiratype::manual {1, "manual"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiratype::automatic {2, "automatic"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiipratype::manual {1, "manual"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiipratype::automatic {2, "automatic"};

const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::static_ {1, "static"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::direct {2, "direct"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::ospfv2 {3, "ospfv2"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::ospfv3 {4, "ospfv3"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::isis {5, "isis"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::rip {6, "rip"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::igrp {7, "igrp"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::eigrp {8, "eigrp"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::bgp {9, "bgp"};
const Enum::YLeaf CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype::other {10, "other"};


}
}

