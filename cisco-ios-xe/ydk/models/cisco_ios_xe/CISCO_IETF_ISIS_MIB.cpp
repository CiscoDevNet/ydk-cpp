
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_ISIS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_ISIS_MIB {

CISCOIETFISISMIB::CISCOIETFISISMIB()
    :
    ciisysobject(std::make_shared<CISCOIETFISISMIB::CiiSysObject>())
    , ciicirc(std::make_shared<CISCOIETFISISMIB::CiiCirc>())
    , ciimanareaaddrtable(std::make_shared<CISCOIETFISISMIB::CiiManAreaAddrTable>())
    , ciiareaaddrtable(std::make_shared<CISCOIETFISISMIB::CiiAreaAddrTable>())
    , ciisysprotsupptable(std::make_shared<CISCOIETFISISMIB::CiiSysProtSuppTable>())
    , ciisummaddrtable(std::make_shared<CISCOIETFISISMIB::CiiSummAddrTable>())
    , ciiredistributeaddrtable(std::make_shared<CISCOIETFISISMIB::CiiRedistributeAddrTable>())
    , ciiroutertable(std::make_shared<CISCOIETFISISMIB::CiiRouterTable>())
    , ciisysleveltable(std::make_shared<CISCOIETFISISMIB::CiiSysLevelTable>())
    , ciicirctable(std::make_shared<CISCOIETFISISMIB::CiiCircTable>())
    , ciicircleveltable(std::make_shared<CISCOIETFISISMIB::CiiCircLevelTable>())
    , ciisystemcountertable(std::make_shared<CISCOIETFISISMIB::CiiSystemCounterTable>())
    , ciicircuitcountertable(std::make_shared<CISCOIETFISISMIB::CiiCircuitCounterTable>())
    , ciipacketcountertable(std::make_shared<CISCOIETFISISMIB::CiiPacketCounterTable>())
    , ciiisadjtable(std::make_shared<CISCOIETFISISMIB::CiiISAdjTable>())
    , ciiisadjareaaddrtable(std::make_shared<CISCOIETFISISMIB::CiiISAdjAreaAddrTable>())
    , ciiisadjipaddrtable(std::make_shared<CISCOIETFISISMIB::CiiISAdjIPAddrTable>())
    , ciiisadjprotsupptable(std::make_shared<CISCOIETFISISMIB::CiiISAdjProtSuppTable>())
    , ciiratable(std::make_shared<CISCOIETFISISMIB::CiiRATable>())
    , ciiipratable(std::make_shared<CISCOIETFISISMIB::CiiIPRATable>())
    , ciilspsummarytable(std::make_shared<CISCOIETFISISMIB::CiiLSPSummaryTable>())
    , ciilsptlvtable(std::make_shared<CISCOIETFISISMIB::CiiLSPTLVTable>())
{
    ciisysobject->parent = this;
    ciicirc->parent = this;
    ciimanareaaddrtable->parent = this;
    ciiareaaddrtable->parent = this;
    ciisysprotsupptable->parent = this;
    ciisummaddrtable->parent = this;
    ciiredistributeaddrtable->parent = this;
    ciiroutertable->parent = this;
    ciisysleveltable->parent = this;
    ciicirctable->parent = this;
    ciicircleveltable->parent = this;
    ciisystemcountertable->parent = this;
    ciicircuitcountertable->parent = this;
    ciipacketcountertable->parent = this;
    ciiisadjtable->parent = this;
    ciiisadjareaaddrtable->parent = this;
    ciiisadjipaddrtable->parent = this;
    ciiisadjprotsupptable->parent = this;
    ciiratable->parent = this;
    ciiipratable->parent = this;
    ciilspsummarytable->parent = this;
    ciilsptlvtable->parent = this;

    yang_name = "CISCO-IETF-ISIS-MIB"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFISISMIB::~CISCOIETFISISMIB()
{
}

bool CISCOIETFISISMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciisysobject !=  nullptr && ciisysobject->has_data())
	|| (ciicirc !=  nullptr && ciicirc->has_data())
	|| (ciimanareaaddrtable !=  nullptr && ciimanareaaddrtable->has_data())
	|| (ciiareaaddrtable !=  nullptr && ciiareaaddrtable->has_data())
	|| (ciisysprotsupptable !=  nullptr && ciisysprotsupptable->has_data())
	|| (ciisummaddrtable !=  nullptr && ciisummaddrtable->has_data())
	|| (ciiredistributeaddrtable !=  nullptr && ciiredistributeaddrtable->has_data())
	|| (ciiroutertable !=  nullptr && ciiroutertable->has_data())
	|| (ciisysleveltable !=  nullptr && ciisysleveltable->has_data())
	|| (ciicirctable !=  nullptr && ciicirctable->has_data())
	|| (ciicircleveltable !=  nullptr && ciicircleveltable->has_data())
	|| (ciisystemcountertable !=  nullptr && ciisystemcountertable->has_data())
	|| (ciicircuitcountertable !=  nullptr && ciicircuitcountertable->has_data())
	|| (ciipacketcountertable !=  nullptr && ciipacketcountertable->has_data())
	|| (ciiisadjtable !=  nullptr && ciiisadjtable->has_data())
	|| (ciiisadjareaaddrtable !=  nullptr && ciiisadjareaaddrtable->has_data())
	|| (ciiisadjipaddrtable !=  nullptr && ciiisadjipaddrtable->has_data())
	|| (ciiisadjprotsupptable !=  nullptr && ciiisadjprotsupptable->has_data())
	|| (ciiratable !=  nullptr && ciiratable->has_data())
	|| (ciiipratable !=  nullptr && ciiipratable->has_data())
	|| (ciilspsummarytable !=  nullptr && ciilspsummarytable->has_data())
	|| (ciilsptlvtable !=  nullptr && ciilsptlvtable->has_data());
}

bool CISCOIETFISISMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciisysobject !=  nullptr && ciisysobject->has_operation())
	|| (ciicirc !=  nullptr && ciicirc->has_operation())
	|| (ciimanareaaddrtable !=  nullptr && ciimanareaaddrtable->has_operation())
	|| (ciiareaaddrtable !=  nullptr && ciiareaaddrtable->has_operation())
	|| (ciisysprotsupptable !=  nullptr && ciisysprotsupptable->has_operation())
	|| (ciisummaddrtable !=  nullptr && ciisummaddrtable->has_operation())
	|| (ciiredistributeaddrtable !=  nullptr && ciiredistributeaddrtable->has_operation())
	|| (ciiroutertable !=  nullptr && ciiroutertable->has_operation())
	|| (ciisysleveltable !=  nullptr && ciisysleveltable->has_operation())
	|| (ciicirctable !=  nullptr && ciicirctable->has_operation())
	|| (ciicircleveltable !=  nullptr && ciicircleveltable->has_operation())
	|| (ciisystemcountertable !=  nullptr && ciisystemcountertable->has_operation())
	|| (ciicircuitcountertable !=  nullptr && ciicircuitcountertable->has_operation())
	|| (ciipacketcountertable !=  nullptr && ciipacketcountertable->has_operation())
	|| (ciiisadjtable !=  nullptr && ciiisadjtable->has_operation())
	|| (ciiisadjareaaddrtable !=  nullptr && ciiisadjareaaddrtable->has_operation())
	|| (ciiisadjipaddrtable !=  nullptr && ciiisadjipaddrtable->has_operation())
	|| (ciiisadjprotsupptable !=  nullptr && ciiisadjprotsupptable->has_operation())
	|| (ciiratable !=  nullptr && ciiratable->has_operation())
	|| (ciiipratable !=  nullptr && ciiipratable->has_operation())
	|| (ciilspsummarytable !=  nullptr && ciilspsummarytable->has_operation())
	|| (ciilsptlvtable !=  nullptr && ciilsptlvtable->has_operation());
}

std::string CISCOIETFISISMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSysObject")
    {
        if(ciisysobject == nullptr)
        {
            ciisysobject = std::make_shared<CISCOIETFISISMIB::CiiSysObject>();
        }
        return ciisysobject;
    }

    if(child_yang_name == "ciiCirc")
    {
        if(ciicirc == nullptr)
        {
            ciicirc = std::make_shared<CISCOIETFISISMIB::CiiCirc>();
        }
        return ciicirc;
    }

    if(child_yang_name == "ciiManAreaAddrTable")
    {
        if(ciimanareaaddrtable == nullptr)
        {
            ciimanareaaddrtable = std::make_shared<CISCOIETFISISMIB::CiiManAreaAddrTable>();
        }
        return ciimanareaaddrtable;
    }

    if(child_yang_name == "ciiAreaAddrTable")
    {
        if(ciiareaaddrtable == nullptr)
        {
            ciiareaaddrtable = std::make_shared<CISCOIETFISISMIB::CiiAreaAddrTable>();
        }
        return ciiareaaddrtable;
    }

    if(child_yang_name == "ciiSysProtSuppTable")
    {
        if(ciisysprotsupptable == nullptr)
        {
            ciisysprotsupptable = std::make_shared<CISCOIETFISISMIB::CiiSysProtSuppTable>();
        }
        return ciisysprotsupptable;
    }

    if(child_yang_name == "ciiSummAddrTable")
    {
        if(ciisummaddrtable == nullptr)
        {
            ciisummaddrtable = std::make_shared<CISCOIETFISISMIB::CiiSummAddrTable>();
        }
        return ciisummaddrtable;
    }

    if(child_yang_name == "ciiRedistributeAddrTable")
    {
        if(ciiredistributeaddrtable == nullptr)
        {
            ciiredistributeaddrtable = std::make_shared<CISCOIETFISISMIB::CiiRedistributeAddrTable>();
        }
        return ciiredistributeaddrtable;
    }

    if(child_yang_name == "ciiRouterTable")
    {
        if(ciiroutertable == nullptr)
        {
            ciiroutertable = std::make_shared<CISCOIETFISISMIB::CiiRouterTable>();
        }
        return ciiroutertable;
    }

    if(child_yang_name == "ciiSysLevelTable")
    {
        if(ciisysleveltable == nullptr)
        {
            ciisysleveltable = std::make_shared<CISCOIETFISISMIB::CiiSysLevelTable>();
        }
        return ciisysleveltable;
    }

    if(child_yang_name == "ciiCircTable")
    {
        if(ciicirctable == nullptr)
        {
            ciicirctable = std::make_shared<CISCOIETFISISMIB::CiiCircTable>();
        }
        return ciicirctable;
    }

    if(child_yang_name == "ciiCircLevelTable")
    {
        if(ciicircleveltable == nullptr)
        {
            ciicircleveltable = std::make_shared<CISCOIETFISISMIB::CiiCircLevelTable>();
        }
        return ciicircleveltable;
    }

    if(child_yang_name == "ciiSystemCounterTable")
    {
        if(ciisystemcountertable == nullptr)
        {
            ciisystemcountertable = std::make_shared<CISCOIETFISISMIB::CiiSystemCounterTable>();
        }
        return ciisystemcountertable;
    }

    if(child_yang_name == "ciiCircuitCounterTable")
    {
        if(ciicircuitcountertable == nullptr)
        {
            ciicircuitcountertable = std::make_shared<CISCOIETFISISMIB::CiiCircuitCounterTable>();
        }
        return ciicircuitcountertable;
    }

    if(child_yang_name == "ciiPacketCounterTable")
    {
        if(ciipacketcountertable == nullptr)
        {
            ciipacketcountertable = std::make_shared<CISCOIETFISISMIB::CiiPacketCounterTable>();
        }
        return ciipacketcountertable;
    }

    if(child_yang_name == "ciiISAdjTable")
    {
        if(ciiisadjtable == nullptr)
        {
            ciiisadjtable = std::make_shared<CISCOIETFISISMIB::CiiISAdjTable>();
        }
        return ciiisadjtable;
    }

    if(child_yang_name == "ciiISAdjAreaAddrTable")
    {
        if(ciiisadjareaaddrtable == nullptr)
        {
            ciiisadjareaaddrtable = std::make_shared<CISCOIETFISISMIB::CiiISAdjAreaAddrTable>();
        }
        return ciiisadjareaaddrtable;
    }

    if(child_yang_name == "ciiISAdjIPAddrTable")
    {
        if(ciiisadjipaddrtable == nullptr)
        {
            ciiisadjipaddrtable = std::make_shared<CISCOIETFISISMIB::CiiISAdjIPAddrTable>();
        }
        return ciiisadjipaddrtable;
    }

    if(child_yang_name == "ciiISAdjProtSuppTable")
    {
        if(ciiisadjprotsupptable == nullptr)
        {
            ciiisadjprotsupptable = std::make_shared<CISCOIETFISISMIB::CiiISAdjProtSuppTable>();
        }
        return ciiisadjprotsupptable;
    }

    if(child_yang_name == "ciiRATable")
    {
        if(ciiratable == nullptr)
        {
            ciiratable = std::make_shared<CISCOIETFISISMIB::CiiRATable>();
        }
        return ciiratable;
    }

    if(child_yang_name == "ciiIPRATable")
    {
        if(ciiipratable == nullptr)
        {
            ciiipratable = std::make_shared<CISCOIETFISISMIB::CiiIPRATable>();
        }
        return ciiipratable;
    }

    if(child_yang_name == "ciiLSPSummaryTable")
    {
        if(ciilspsummarytable == nullptr)
        {
            ciilspsummarytable = std::make_shared<CISCOIETFISISMIB::CiiLSPSummaryTable>();
        }
        return ciilspsummarytable;
    }

    if(child_yang_name == "ciiLSPTLVTable")
    {
        if(ciilsptlvtable == nullptr)
        {
            ciilsptlvtable = std::make_shared<CISCOIETFISISMIB::CiiLSPTLVTable>();
        }
        return ciilsptlvtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ciisysobject != nullptr)
    {
        _children["ciiSysObject"] = ciisysobject;
    }

    if(ciicirc != nullptr)
    {
        _children["ciiCirc"] = ciicirc;
    }

    if(ciimanareaaddrtable != nullptr)
    {
        _children["ciiManAreaAddrTable"] = ciimanareaaddrtable;
    }

    if(ciiareaaddrtable != nullptr)
    {
        _children["ciiAreaAddrTable"] = ciiareaaddrtable;
    }

    if(ciisysprotsupptable != nullptr)
    {
        _children["ciiSysProtSuppTable"] = ciisysprotsupptable;
    }

    if(ciisummaddrtable != nullptr)
    {
        _children["ciiSummAddrTable"] = ciisummaddrtable;
    }

    if(ciiredistributeaddrtable != nullptr)
    {
        _children["ciiRedistributeAddrTable"] = ciiredistributeaddrtable;
    }

    if(ciiroutertable != nullptr)
    {
        _children["ciiRouterTable"] = ciiroutertable;
    }

    if(ciisysleveltable != nullptr)
    {
        _children["ciiSysLevelTable"] = ciisysleveltable;
    }

    if(ciicirctable != nullptr)
    {
        _children["ciiCircTable"] = ciicirctable;
    }

    if(ciicircleveltable != nullptr)
    {
        _children["ciiCircLevelTable"] = ciicircleveltable;
    }

    if(ciisystemcountertable != nullptr)
    {
        _children["ciiSystemCounterTable"] = ciisystemcountertable;
    }

    if(ciicircuitcountertable != nullptr)
    {
        _children["ciiCircuitCounterTable"] = ciicircuitcountertable;
    }

    if(ciipacketcountertable != nullptr)
    {
        _children["ciiPacketCounterTable"] = ciipacketcountertable;
    }

    if(ciiisadjtable != nullptr)
    {
        _children["ciiISAdjTable"] = ciiisadjtable;
    }

    if(ciiisadjareaaddrtable != nullptr)
    {
        _children["ciiISAdjAreaAddrTable"] = ciiisadjareaaddrtable;
    }

    if(ciiisadjipaddrtable != nullptr)
    {
        _children["ciiISAdjIPAddrTable"] = ciiisadjipaddrtable;
    }

    if(ciiisadjprotsupptable != nullptr)
    {
        _children["ciiISAdjProtSuppTable"] = ciiisadjprotsupptable;
    }

    if(ciiratable != nullptr)
    {
        _children["ciiRATable"] = ciiratable;
    }

    if(ciiipratable != nullptr)
    {
        _children["ciiIPRATable"] = ciiipratable;
    }

    if(ciilspsummarytable != nullptr)
    {
        _children["ciiLSPSummaryTable"] = ciilspsummarytable;
    }

    if(ciilsptlvtable != nullptr)
    {
        _children["ciiLSPTLVTable"] = ciilsptlvtable;
    }

    return _children;
}

void CISCOIETFISISMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFISISMIB>();
}

std::string CISCOIETFISISMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFISISMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFISISMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFISISMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFISISMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysObject" || name == "ciiCirc" || name == "ciiManAreaAddrTable" || name == "ciiAreaAddrTable" || name == "ciiSysProtSuppTable" || name == "ciiSummAddrTable" || name == "ciiRedistributeAddrTable" || name == "ciiRouterTable" || name == "ciiSysLevelTable" || name == "ciiCircTable" || name == "ciiCircLevelTable" || name == "ciiSystemCounterTable" || name == "ciiCircuitCounterTable" || name == "ciiPacketCounterTable" || name == "ciiISAdjTable" || name == "ciiISAdjAreaAddrTable" || name == "ciiISAdjIPAddrTable" || name == "ciiISAdjProtSuppTable" || name == "ciiRATable" || name == "ciiIPRATable" || name == "ciiLSPSummaryTable" || name == "ciiLSPTLVTable")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSysObject::CiiSysObject()
    :
    ciisysversion{YType::enumeration, "ciiSysVersion"},
    ciisystype{YType::enumeration, "ciiSysType"},
    ciisysid{YType::str, "ciiSysID"},
    ciisysmaxpathsplits{YType::int32, "ciiSysMaxPathSplits"},
    ciisysmaxlspgenint{YType::int32, "ciiSysMaxLSPGenInt"},
    ciisyspolleshellorate{YType::uint32, "ciiSysPollESHelloRate"},
    ciisyswaittime{YType::uint32, "ciiSysWaitTime"},
    ciisysadminstate{YType::enumeration, "ciiSysAdminState"},
    ciisysl2tol1leaking{YType::boolean, "ciiSysL2toL1Leaking"},
    ciisysmaxage{YType::uint32, "ciiSysMaxAge"},
    ciisysreceivelspbuffersize{YType::uint32, "ciiSysReceiveLSPBufferSize"}
{

    yang_name = "ciiSysObject"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSysObject::~CiiSysObject()
{
}

bool CISCOIETFISISMIB::CiiSysObject::has_data() const
{
    if (is_presence_container) return true;
    return ciisysversion.is_set
	|| ciisystype.is_set
	|| ciisysid.is_set
	|| ciisysmaxpathsplits.is_set
	|| ciisysmaxlspgenint.is_set
	|| ciisyspolleshellorate.is_set
	|| ciisyswaittime.is_set
	|| ciisysadminstate.is_set
	|| ciisysl2tol1leaking.is_set
	|| ciisysmaxage.is_set
	|| ciisysreceivelspbuffersize.is_set;
}

bool CISCOIETFISISMIB::CiiSysObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciisysversion.yfilter)
	|| ydk::is_set(ciisystype.yfilter)
	|| ydk::is_set(ciisysid.yfilter)
	|| ydk::is_set(ciisysmaxpathsplits.yfilter)
	|| ydk::is_set(ciisysmaxlspgenint.yfilter)
	|| ydk::is_set(ciisyspolleshellorate.yfilter)
	|| ydk::is_set(ciisyswaittime.yfilter)
	|| ydk::is_set(ciisysadminstate.yfilter)
	|| ydk::is_set(ciisysl2tol1leaking.yfilter)
	|| ydk::is_set(ciisysmaxage.yfilter)
	|| ydk::is_set(ciisysreceivelspbuffersize.yfilter);
}

std::string CISCOIETFISISMIB::CiiSysObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSysObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysObject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSysObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisysversion.is_set || is_set(ciisysversion.yfilter)) leaf_name_data.push_back(ciisysversion.get_name_leafdata());
    if (ciisystype.is_set || is_set(ciisystype.yfilter)) leaf_name_data.push_back(ciisystype.get_name_leafdata());
    if (ciisysid.is_set || is_set(ciisysid.yfilter)) leaf_name_data.push_back(ciisysid.get_name_leafdata());
    if (ciisysmaxpathsplits.is_set || is_set(ciisysmaxpathsplits.yfilter)) leaf_name_data.push_back(ciisysmaxpathsplits.get_name_leafdata());
    if (ciisysmaxlspgenint.is_set || is_set(ciisysmaxlspgenint.yfilter)) leaf_name_data.push_back(ciisysmaxlspgenint.get_name_leafdata());
    if (ciisyspolleshellorate.is_set || is_set(ciisyspolleshellorate.yfilter)) leaf_name_data.push_back(ciisyspolleshellorate.get_name_leafdata());
    if (ciisyswaittime.is_set || is_set(ciisyswaittime.yfilter)) leaf_name_data.push_back(ciisyswaittime.get_name_leafdata());
    if (ciisysadminstate.is_set || is_set(ciisysadminstate.yfilter)) leaf_name_data.push_back(ciisysadminstate.get_name_leafdata());
    if (ciisysl2tol1leaking.is_set || is_set(ciisysl2tol1leaking.yfilter)) leaf_name_data.push_back(ciisysl2tol1leaking.get_name_leafdata());
    if (ciisysmaxage.is_set || is_set(ciisysmaxage.yfilter)) leaf_name_data.push_back(ciisysmaxage.get_name_leafdata());
    if (ciisysreceivelspbuffersize.is_set || is_set(ciisysreceivelspbuffersize.yfilter)) leaf_name_data.push_back(ciisysreceivelspbuffersize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSysObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSysObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiSysObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSysVersion")
    {
        ciisysversion = value;
        ciisysversion.value_namespace = name_space;
        ciisysversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysType")
    {
        ciisystype = value;
        ciisystype.value_namespace = name_space;
        ciisystype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysID")
    {
        ciisysid = value;
        ciisysid.value_namespace = name_space;
        ciisysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysMaxPathSplits")
    {
        ciisysmaxpathsplits = value;
        ciisysmaxpathsplits.value_namespace = name_space;
        ciisysmaxpathsplits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysMaxLSPGenInt")
    {
        ciisysmaxlspgenint = value;
        ciisysmaxlspgenint.value_namespace = name_space;
        ciisysmaxlspgenint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysPollESHelloRate")
    {
        ciisyspolleshellorate = value;
        ciisyspolleshellorate.value_namespace = name_space;
        ciisyspolleshellorate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysWaitTime")
    {
        ciisyswaittime = value;
        ciisyswaittime.value_namespace = name_space;
        ciisyswaittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysAdminState")
    {
        ciisysadminstate = value;
        ciisysadminstate.value_namespace = name_space;
        ciisysadminstate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciiSysReceiveLSPBufferSize")
    {
        ciisysreceivelspbuffersize = value;
        ciisysreceivelspbuffersize.value_namespace = name_space;
        ciisysreceivelspbuffersize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiSysObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSysVersion")
    {
        ciisysversion.yfilter = yfilter;
    }
    if(value_path == "ciiSysType")
    {
        ciisystype.yfilter = yfilter;
    }
    if(value_path == "ciiSysID")
    {
        ciisysid.yfilter = yfilter;
    }
    if(value_path == "ciiSysMaxPathSplits")
    {
        ciisysmaxpathsplits.yfilter = yfilter;
    }
    if(value_path == "ciiSysMaxLSPGenInt")
    {
        ciisysmaxlspgenint.yfilter = yfilter;
    }
    if(value_path == "ciiSysPollESHelloRate")
    {
        ciisyspolleshellorate.yfilter = yfilter;
    }
    if(value_path == "ciiSysWaitTime")
    {
        ciisyswaittime.yfilter = yfilter;
    }
    if(value_path == "ciiSysAdminState")
    {
        ciisysadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiSysL2toL1Leaking")
    {
        ciisysl2tol1leaking.yfilter = yfilter;
    }
    if(value_path == "ciiSysMaxAge")
    {
        ciisysmaxage.yfilter = yfilter;
    }
    if(value_path == "ciiSysReceiveLSPBufferSize")
    {
        ciisysreceivelspbuffersize.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiSysObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysVersion" || name == "ciiSysType" || name == "ciiSysID" || name == "ciiSysMaxPathSplits" || name == "ciiSysMaxLSPGenInt" || name == "ciiSysPollESHelloRate" || name == "ciiSysWaitTime" || name == "ciiSysAdminState" || name == "ciiSysL2toL1Leaking" || name == "ciiSysMaxAge" || name == "ciiSysReceiveLSPBufferSize")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiCirc::CiiCirc()
    :
    ciinextcircindex{YType::uint32, "ciiNextCircIndex"}
{

    yang_name = "ciiCirc"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiCirc::~CiiCirc()
{
}

bool CISCOIETFISISMIB::CiiCirc::has_data() const
{
    if (is_presence_container) return true;
    return ciinextcircindex.is_set;
}

bool CISCOIETFISISMIB::CiiCirc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciinextcircindex.yfilter);
}

std::string CISCOIETFISISMIB::CiiCirc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiCirc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCirc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiCirc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciinextcircindex.is_set || is_set(ciinextcircindex.yfilter)) leaf_name_data.push_back(ciinextcircindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiCirc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiCirc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiCirc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiNextCircIndex")
    {
        ciinextcircindex = value;
        ciinextcircindex.value_namespace = name_space;
        ciinextcircindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiCirc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiNextCircIndex")
    {
        ciinextcircindex.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiCirc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiNextCircIndex")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrTable()
    :
    ciimanareaaddrentry(this, {"ciimanareaaddr"})
{

    yang_name = "ciiManAreaAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiManAreaAddrTable::~CiiManAreaAddrTable()
{
}

bool CISCOIETFISISMIB::CiiManAreaAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciimanareaaddrentry.len(); index++)
    {
        if(ciimanareaaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiManAreaAddrTable::has_operation() const
{
    for (std::size_t index=0; index<ciimanareaaddrentry.len(); index++)
    {
        if(ciimanareaaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiManAreaAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiManAreaAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiManAreaAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiManAreaAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiManAreaAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiManAreaAddrEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry>();
        ent_->parent = this;
        ciimanareaaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiManAreaAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciimanareaaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiManAreaAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiManAreaAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiManAreaAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiManAreaAddrEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::CiiManAreaAddrEntry()
    :
    ciimanareaaddr{YType::str, "ciiManAreaAddr"},
    ciimanareaaddrexiststate{YType::enumeration, "ciiManAreaAddrExistState"}
{

    yang_name = "ciiManAreaAddrEntry"; yang_parent_name = "ciiManAreaAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::~CiiManAreaAddrEntry()
{
}

bool CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciimanareaaddr.is_set
	|| ciimanareaaddrexiststate.is_set;
}

bool CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciimanareaaddr.yfilter)
	|| ydk::is_set(ciimanareaaddrexiststate.yfilter);
}

std::string CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiManAreaAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiManAreaAddrEntry";
    ADD_KEY_TOKEN(ciimanareaaddr, "ciiManAreaAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciimanareaaddr.is_set || is_set(ciimanareaaddr.yfilter)) leaf_name_data.push_back(ciimanareaaddr.get_name_leafdata());
    if (ciimanareaaddrexiststate.is_set || is_set(ciimanareaaddrexiststate.yfilter)) leaf_name_data.push_back(ciimanareaaddrexiststate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiManAreaAddr" || name == "ciiManAreaAddrExistState")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrTable()
    :
    ciiareaaddrentry(this, {"ciiareaaddr"})
{

    yang_name = "ciiAreaAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiAreaAddrTable::~CiiAreaAddrTable()
{
}

bool CISCOIETFISISMIB::CiiAreaAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiareaaddrentry.len(); index++)
    {
        if(ciiareaaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiAreaAddrTable::has_operation() const
{
    for (std::size_t index=0; index<ciiareaaddrentry.len(); index++)
    {
        if(ciiareaaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiAreaAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiAreaAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiAreaAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiAreaAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiAreaAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiAreaAddrEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry>();
        ent_->parent = this;
        ciiareaaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiAreaAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiareaaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiAreaAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiAreaAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiAreaAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiAreaAddrEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::CiiAreaAddrEntry()
    :
    ciiareaaddr{YType::str, "ciiAreaAddr"}
{

    yang_name = "ciiAreaAddrEntry"; yang_parent_name = "ciiAreaAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::~CiiAreaAddrEntry()
{
}

bool CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciiareaaddr.is_set;
}

bool CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciiareaaddr.yfilter);
}

std::string CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiAreaAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiAreaAddrEntry";
    ADD_KEY_TOKEN(ciiareaaddr, "ciiAreaAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiareaaddr.is_set || is_set(ciiareaaddr.yfilter)) leaf_name_data.push_back(ciiareaaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiAreaAddr")
    {
        ciiareaaddr = value;
        ciiareaaddr.value_namespace = name_space;
        ciiareaaddr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiAreaAddr")
    {
        ciiareaaddr.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiAreaAddr")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppTable()
    :
    ciisysprotsuppentry(this, {"ciisysprotsuppprotocol"})
{

    yang_name = "ciiSysProtSuppTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSysProtSuppTable::~CiiSysProtSuppTable()
{
}

bool CISCOIETFISISMIB::CiiSysProtSuppTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciisysprotsuppentry.len(); index++)
    {
        if(ciisysprotsuppentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiSysProtSuppTable::has_operation() const
{
    for (std::size_t index=0; index<ciisysprotsuppentry.len(); index++)
    {
        if(ciisysprotsuppentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiSysProtSuppTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSysProtSuppTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysProtSuppTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSysProtSuppTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSysProtSuppTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSysProtSuppEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry>();
        ent_->parent = this;
        ciisysprotsuppentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSysProtSuppTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciisysprotsuppentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiSysProtSuppTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiSysProtSuppTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiSysProtSuppTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysProtSuppEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::CiiSysProtSuppEntry()
    :
    ciisysprotsuppprotocol{YType::enumeration, "ciiSysProtSuppProtocol"},
    ciisysprotsuppexiststate{YType::enumeration, "ciiSysProtSuppExistState"}
{

    yang_name = "ciiSysProtSuppEntry"; yang_parent_name = "ciiSysProtSuppTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::~CiiSysProtSuppEntry()
{
}

bool CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciisysprotsuppprotocol.is_set
	|| ciisysprotsuppexiststate.is_set;
}

bool CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciisysprotsuppprotocol.yfilter)
	|| ydk::is_set(ciisysprotsuppexiststate.yfilter);
}

std::string CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSysProtSuppTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysProtSuppEntry";
    ADD_KEY_TOKEN(ciisysprotsuppprotocol, "ciiSysProtSuppProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisysprotsuppprotocol.is_set || is_set(ciisysprotsuppprotocol.yfilter)) leaf_name_data.push_back(ciisysprotsuppprotocol.get_name_leafdata());
    if (ciisysprotsuppexiststate.is_set || is_set(ciisysprotsuppexiststate.yfilter)) leaf_name_data.push_back(ciisysprotsuppexiststate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysProtSuppProtocol" || name == "ciiSysProtSuppExistState")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrTable()
    :
    ciisummaddrentry(this, {"ciisummaddresstype", "ciisummaddress", "ciisummaddrprefixlen"})
{

    yang_name = "ciiSummAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSummAddrTable::~CiiSummAddrTable()
{
}

bool CISCOIETFISISMIB::CiiSummAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciisummaddrentry.len(); index++)
    {
        if(ciisummaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiSummAddrTable::has_operation() const
{
    for (std::size_t index=0; index<ciisummaddrentry.len(); index++)
    {
        if(ciisummaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiSummAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSummAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSummAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSummAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSummAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSummAddrEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry>();
        ent_->parent = this;
        ciisummaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSummAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciisummaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiSummAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiSummAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiSummAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSummAddrEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::CiiSummAddrEntry()
    :
    ciisummaddresstype{YType::enumeration, "ciiSummAddressType"},
    ciisummaddress{YType::str, "ciiSummAddress"},
    ciisummaddrprefixlen{YType::uint32, "ciiSummAddrPrefixLen"},
    ciisummaddrexiststate{YType::enumeration, "ciiSummAddrExistState"},
    ciisummaddrmetric{YType::int32, "ciiSummAddrMetric"},
    ciisummaddrfullmetric{YType::uint32, "ciiSummAddrFullMetric"}
{

    yang_name = "ciiSummAddrEntry"; yang_parent_name = "ciiSummAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::~CiiSummAddrEntry()
{
}

bool CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciisummaddresstype.is_set
	|| ciisummaddress.is_set
	|| ciisummaddrprefixlen.is_set
	|| ciisummaddrexiststate.is_set
	|| ciisummaddrmetric.is_set
	|| ciisummaddrfullmetric.is_set;
}

bool CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciisummaddresstype.yfilter)
	|| ydk::is_set(ciisummaddress.yfilter)
	|| ydk::is_set(ciisummaddrprefixlen.yfilter)
	|| ydk::is_set(ciisummaddrexiststate.yfilter)
	|| ydk::is_set(ciisummaddrmetric.yfilter)
	|| ydk::is_set(ciisummaddrfullmetric.yfilter);
}

std::string CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSummAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSummAddrEntry";
    ADD_KEY_TOKEN(ciisummaddresstype, "ciiSummAddressType");
    ADD_KEY_TOKEN(ciisummaddress, "ciiSummAddress");
    ADD_KEY_TOKEN(ciisummaddrprefixlen, "ciiSummAddrPrefixLen");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisummaddresstype.is_set || is_set(ciisummaddresstype.yfilter)) leaf_name_data.push_back(ciisummaddresstype.get_name_leafdata());
    if (ciisummaddress.is_set || is_set(ciisummaddress.yfilter)) leaf_name_data.push_back(ciisummaddress.get_name_leafdata());
    if (ciisummaddrprefixlen.is_set || is_set(ciisummaddrprefixlen.yfilter)) leaf_name_data.push_back(ciisummaddrprefixlen.get_name_leafdata());
    if (ciisummaddrexiststate.is_set || is_set(ciisummaddrexiststate.yfilter)) leaf_name_data.push_back(ciisummaddrexiststate.get_name_leafdata());
    if (ciisummaddrmetric.is_set || is_set(ciisummaddrmetric.yfilter)) leaf_name_data.push_back(ciisummaddrmetric.get_name_leafdata());
    if (ciisummaddrfullmetric.is_set || is_set(ciisummaddrfullmetric.yfilter)) leaf_name_data.push_back(ciisummaddrfullmetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiSummAddrMetric")
    {
        ciisummaddrmetric = value;
        ciisummaddrmetric.value_namespace = name_space;
        ciisummaddrmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSummAddrFullMetric")
    {
        ciisummaddrfullmetric = value;
        ciisummaddrfullmetric.value_namespace = name_space;
        ciisummaddrfullmetric.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciiSummAddrMetric")
    {
        ciisummaddrmetric.yfilter = yfilter;
    }
    if(value_path == "ciiSummAddrFullMetric")
    {
        ciisummaddrfullmetric.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSummAddressType" || name == "ciiSummAddress" || name == "ciiSummAddrPrefixLen" || name == "ciiSummAddrExistState" || name == "ciiSummAddrMetric" || name == "ciiSummAddrFullMetric")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrTable()
    :
    ciiredistributeaddrentry(this, {"ciiredistributeaddrtype", "ciiredistributeaddraddress", "ciiredistributeaddrprefixlen"})
{

    yang_name = "ciiRedistributeAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiRedistributeAddrTable::~CiiRedistributeAddrTable()
{
}

bool CISCOIETFISISMIB::CiiRedistributeAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiredistributeaddrentry.len(); index++)
    {
        if(ciiredistributeaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiRedistributeAddrTable::has_operation() const
{
    for (std::size_t index=0; index<ciiredistributeaddrentry.len(); index++)
    {
        if(ciiredistributeaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiRedistributeAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiRedistributeAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRedistributeAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiRedistributeAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiRedistributeAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiRedistributeAddrEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry>();
        ent_->parent = this;
        ciiredistributeaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiRedistributeAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiredistributeaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiRedistributeAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiRedistributeAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiRedistributeAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRedistributeAddrEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::CiiRedistributeAddrEntry()
    :
    ciiredistributeaddrtype{YType::enumeration, "ciiRedistributeAddrType"},
    ciiredistributeaddraddress{YType::str, "ciiRedistributeAddrAddress"},
    ciiredistributeaddrprefixlen{YType::uint32, "ciiRedistributeAddrPrefixLen"},
    ciiredistributeaddrexiststate{YType::enumeration, "ciiRedistributeAddrExistState"}
{

    yang_name = "ciiRedistributeAddrEntry"; yang_parent_name = "ciiRedistributeAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::~CiiRedistributeAddrEntry()
{
}

bool CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciiredistributeaddrtype.is_set
	|| ciiredistributeaddraddress.is_set
	|| ciiredistributeaddrprefixlen.is_set
	|| ciiredistributeaddrexiststate.is_set;
}

bool CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciiredistributeaddrtype.yfilter)
	|| ydk::is_set(ciiredistributeaddraddress.yfilter)
	|| ydk::is_set(ciiredistributeaddrprefixlen.yfilter)
	|| ydk::is_set(ciiredistributeaddrexiststate.yfilter);
}

std::string CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiRedistributeAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRedistributeAddrEntry";
    ADD_KEY_TOKEN(ciiredistributeaddrtype, "ciiRedistributeAddrType");
    ADD_KEY_TOKEN(ciiredistributeaddraddress, "ciiRedistributeAddrAddress");
    ADD_KEY_TOKEN(ciiredistributeaddrprefixlen, "ciiRedistributeAddrPrefixLen");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiredistributeaddrtype.is_set || is_set(ciiredistributeaddrtype.yfilter)) leaf_name_data.push_back(ciiredistributeaddrtype.get_name_leafdata());
    if (ciiredistributeaddraddress.is_set || is_set(ciiredistributeaddraddress.yfilter)) leaf_name_data.push_back(ciiredistributeaddraddress.get_name_leafdata());
    if (ciiredistributeaddrprefixlen.is_set || is_set(ciiredistributeaddrprefixlen.yfilter)) leaf_name_data.push_back(ciiredistributeaddrprefixlen.get_name_leafdata());
    if (ciiredistributeaddrexiststate.is_set || is_set(ciiredistributeaddrexiststate.yfilter)) leaf_name_data.push_back(ciiredistributeaddrexiststate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRedistributeAddrType" || name == "ciiRedistributeAddrAddress" || name == "ciiRedistributeAddrPrefixLen" || name == "ciiRedistributeAddrExistState")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiRouterTable::CiiRouterTable()
    :
    ciirouterentry(this, {"ciiroutersysid", "ciirouterlevel"})
{

    yang_name = "ciiRouterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiRouterTable::~CiiRouterTable()
{
}

bool CISCOIETFISISMIB::CiiRouterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciirouterentry.len(); index++)
    {
        if(ciirouterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiRouterTable::has_operation() const
{
    for (std::size_t index=0; index<ciirouterentry.len(); index++)
    {
        if(ciirouterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiRouterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiRouterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRouterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiRouterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiRouterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiRouterEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry>();
        ent_->parent = this;
        ciirouterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiRouterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciirouterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiRouterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiRouterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiRouterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRouterEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::CiiRouterEntry()
    :
    ciiroutersysid{YType::str, "ciiRouterSysID"},
    ciirouterlevel{YType::enumeration, "ciiRouterLevel"},
    ciirouterhostname{YType::str, "ciiRouterHostName"},
    ciirouterid{YType::uint32, "ciiRouterID"}
{

    yang_name = "ciiRouterEntry"; yang_parent_name = "ciiRouterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::~CiiRouterEntry()
{
}

bool CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciiroutersysid.is_set
	|| ciirouterlevel.is_set
	|| ciirouterhostname.is_set
	|| ciirouterid.is_set;
}

bool CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciiroutersysid.yfilter)
	|| ydk::is_set(ciirouterlevel.yfilter)
	|| ydk::is_set(ciirouterhostname.yfilter)
	|| ydk::is_set(ciirouterid.yfilter);
}

std::string CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiRouterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRouterEntry";
    ADD_KEY_TOKEN(ciiroutersysid, "ciiRouterSysID");
    ADD_KEY_TOKEN(ciirouterlevel, "ciiRouterLevel");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiroutersysid.is_set || is_set(ciiroutersysid.yfilter)) leaf_name_data.push_back(ciiroutersysid.get_name_leafdata());
    if (ciirouterlevel.is_set || is_set(ciirouterlevel.yfilter)) leaf_name_data.push_back(ciirouterlevel.get_name_leafdata());
    if (ciirouterhostname.is_set || is_set(ciirouterhostname.yfilter)) leaf_name_data.push_back(ciirouterhostname.get_name_leafdata());
    if (ciirouterid.is_set || is_set(ciirouterid.yfilter)) leaf_name_data.push_back(ciirouterid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRouterSysID" || name == "ciiRouterLevel" || name == "ciiRouterHostName" || name == "ciiRouterID")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelTable()
    :
    ciisyslevelentry(this, {"ciisyslevelindex"})
{

    yang_name = "ciiSysLevelTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSysLevelTable::~CiiSysLevelTable()
{
}

bool CISCOIETFISISMIB::CiiSysLevelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciisyslevelentry.len(); index++)
    {
        if(ciisyslevelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiSysLevelTable::has_operation() const
{
    for (std::size_t index=0; index<ciisyslevelentry.len(); index++)
    {
        if(ciisyslevelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiSysLevelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSysLevelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysLevelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSysLevelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSysLevelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSysLevelEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry>();
        ent_->parent = this;
        ciisyslevelentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSysLevelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciisyslevelentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiSysLevelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiSysLevelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiSysLevelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysLevelEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::CiiSysLevelEntry()
    :
    ciisyslevelindex{YType::enumeration, "ciiSysLevelIndex"},
    ciisysleveloriglspbuffsize{YType::int32, "ciiSysLevelOrigLSPBuffSize"},
    ciisyslevelminlspgenint{YType::uint32, "ciiSysLevelMinLSPGenInt"},
    ciisysleveloverloadstate{YType::enumeration, "ciiSysLevelOverloadState"},
    ciisyslevelsetoverload{YType::boolean, "ciiSysLevelSetOverload"},
    ciisyslevelsetoverloaduntil{YType::uint32, "ciiSysLevelSetOverloadUntil"},
    ciisyslevelmetricstyle{YType::enumeration, "ciiSysLevelMetricStyle"},
    ciisyslevelspfconsiders{YType::enumeration, "ciiSysLevelSPFConsiders"},
    ciisyslevelteenabled{YType::boolean, "ciiSysLevelTEEnabled"}
{

    yang_name = "ciiSysLevelEntry"; yang_parent_name = "ciiSysLevelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::~CiiSysLevelEntry()
{
}

bool CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciisyslevelindex.is_set
	|| ciisysleveloriglspbuffsize.is_set
	|| ciisyslevelminlspgenint.is_set
	|| ciisysleveloverloadstate.is_set
	|| ciisyslevelsetoverload.is_set
	|| ciisyslevelsetoverloaduntil.is_set
	|| ciisyslevelmetricstyle.is_set
	|| ciisyslevelspfconsiders.is_set
	|| ciisyslevelteenabled.is_set;
}

bool CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciisyslevelindex.yfilter)
	|| ydk::is_set(ciisysleveloriglspbuffsize.yfilter)
	|| ydk::is_set(ciisyslevelminlspgenint.yfilter)
	|| ydk::is_set(ciisysleveloverloadstate.yfilter)
	|| ydk::is_set(ciisyslevelsetoverload.yfilter)
	|| ydk::is_set(ciisyslevelsetoverloaduntil.yfilter)
	|| ydk::is_set(ciisyslevelmetricstyle.yfilter)
	|| ydk::is_set(ciisyslevelspfconsiders.yfilter)
	|| ydk::is_set(ciisyslevelteenabled.yfilter);
}

std::string CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSysLevelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSysLevelEntry";
    ADD_KEY_TOKEN(ciisyslevelindex, "ciiSysLevelIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisyslevelindex.is_set || is_set(ciisyslevelindex.yfilter)) leaf_name_data.push_back(ciisyslevelindex.get_name_leafdata());
    if (ciisysleveloriglspbuffsize.is_set || is_set(ciisysleveloriglspbuffsize.yfilter)) leaf_name_data.push_back(ciisysleveloriglspbuffsize.get_name_leafdata());
    if (ciisyslevelminlspgenint.is_set || is_set(ciisyslevelminlspgenint.yfilter)) leaf_name_data.push_back(ciisyslevelminlspgenint.get_name_leafdata());
    if (ciisysleveloverloadstate.is_set || is_set(ciisysleveloverloadstate.yfilter)) leaf_name_data.push_back(ciisysleveloverloadstate.get_name_leafdata());
    if (ciisyslevelsetoverload.is_set || is_set(ciisyslevelsetoverload.yfilter)) leaf_name_data.push_back(ciisyslevelsetoverload.get_name_leafdata());
    if (ciisyslevelsetoverloaduntil.is_set || is_set(ciisyslevelsetoverloaduntil.yfilter)) leaf_name_data.push_back(ciisyslevelsetoverloaduntil.get_name_leafdata());
    if (ciisyslevelmetricstyle.is_set || is_set(ciisyslevelmetricstyle.yfilter)) leaf_name_data.push_back(ciisyslevelmetricstyle.get_name_leafdata());
    if (ciisyslevelspfconsiders.is_set || is_set(ciisyslevelspfconsiders.yfilter)) leaf_name_data.push_back(ciisyslevelspfconsiders.get_name_leafdata());
    if (ciisyslevelteenabled.is_set || is_set(ciisyslevelteenabled.yfilter)) leaf_name_data.push_back(ciisyslevelteenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSysLevelIndex")
    {
        ciisyslevelindex = value;
        ciisyslevelindex.value_namespace = name_space;
        ciisyslevelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelOrigLSPBuffSize")
    {
        ciisysleveloriglspbuffsize = value;
        ciisysleveloriglspbuffsize.value_namespace = name_space;
        ciisysleveloriglspbuffsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysLevelMinLSPGenInt")
    {
        ciisyslevelminlspgenint = value;
        ciisyslevelminlspgenint.value_namespace = name_space;
        ciisyslevelminlspgenint.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciiSysLevelMetricStyle")
    {
        ciisyslevelmetricstyle = value;
        ciisyslevelmetricstyle.value_namespace = name_space;
        ciisyslevelmetricstyle.value_namespace_prefix = name_space_prefix;
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

void CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSysLevelIndex")
    {
        ciisyslevelindex.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelOrigLSPBuffSize")
    {
        ciisysleveloriglspbuffsize.yfilter = yfilter;
    }
    if(value_path == "ciiSysLevelMinLSPGenInt")
    {
        ciisyslevelminlspgenint.yfilter = yfilter;
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
    if(value_path == "ciiSysLevelMetricStyle")
    {
        ciisyslevelmetricstyle.yfilter = yfilter;
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

bool CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysLevelIndex" || name == "ciiSysLevelOrigLSPBuffSize" || name == "ciiSysLevelMinLSPGenInt" || name == "ciiSysLevelOverloadState" || name == "ciiSysLevelSetOverload" || name == "ciiSysLevelSetOverloadUntil" || name == "ciiSysLevelMetricStyle" || name == "ciiSysLevelSPFConsiders" || name == "ciiSysLevelTEEnabled")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiCircTable::CiiCircTable()
    :
    ciicircentry(this, {"ciicircindex"})
{

    yang_name = "ciiCircTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiCircTable::~CiiCircTable()
{
}

bool CISCOIETFISISMIB::CiiCircTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciicircentry.len(); index++)
    {
        if(ciicircentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiCircTable::has_operation() const
{
    for (std::size_t index=0; index<ciicircentry.len(); index++)
    {
        if(ciicircentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiCircTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiCircTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiCircTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiCircTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiCircEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiCircTable::CiiCircEntry>();
        ent_->parent = this;
        ciicircentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiCircTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciicircentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiCircTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiCircTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiCircTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircEntry()
    :
    ciicircindex{YType::int32, "ciiCircIndex"},
    ciicircifindex{YType::int32, "ciiCircIfIndex"},
    ciicircifsubindex{YType::int32, "ciiCircIfSubIndex"},
    ciicircadminstate{YType::enumeration, "ciiCircAdminState"},
    ciicircexiststate{YType::enumeration, "ciiCircExistState"},
    ciicirctype{YType::enumeration, "ciiCircType"},
    ciicircextdomain{YType::boolean, "ciiCircExtDomain"},
    ciicirclevel{YType::enumeration, "ciiCircLevel"},
    ciicircpassivecircuit{YType::boolean, "ciiCircPassiveCircuit"},
    ciicircmeshgroupenabled{YType::enumeration, "ciiCircMeshGroupEnabled"},
    ciicircmeshgroup{YType::uint32, "ciiCircMeshGroup"},
    ciicircsmallhellos{YType::boolean, "ciiCircSmallHellos"},
    ciicirclastuptime{YType::uint32, "ciiCircLastUpTime"},
    ciicirc3wayenabled{YType::boolean, "ciiCirc3WayEnabled"},
    ciicircextendedcircid{YType::uint32, "ciiCircExtendedCircID"}
{

    yang_name = "ciiCircEntry"; yang_parent_name = "ciiCircTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::~CiiCircEntry()
{
}

bool CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciicircifindex.is_set
	|| ciicircifsubindex.is_set
	|| ciicircadminstate.is_set
	|| ciicircexiststate.is_set
	|| ciicirctype.is_set
	|| ciicircextdomain.is_set
	|| ciicirclevel.is_set
	|| ciicircpassivecircuit.is_set
	|| ciicircmeshgroupenabled.is_set
	|| ciicircmeshgroup.is_set
	|| ciicircsmallhellos.is_set
	|| ciicirclastuptime.is_set
	|| ciicirc3wayenabled.is_set
	|| ciicircextendedcircid.is_set;
}

bool CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciicircifindex.yfilter)
	|| ydk::is_set(ciicircifsubindex.yfilter)
	|| ydk::is_set(ciicircadminstate.yfilter)
	|| ydk::is_set(ciicircexiststate.yfilter)
	|| ydk::is_set(ciicirctype.yfilter)
	|| ydk::is_set(ciicircextdomain.yfilter)
	|| ydk::is_set(ciicirclevel.yfilter)
	|| ydk::is_set(ciicircpassivecircuit.yfilter)
	|| ydk::is_set(ciicircmeshgroupenabled.yfilter)
	|| ydk::is_set(ciicircmeshgroup.yfilter)
	|| ydk::is_set(ciicircsmallhellos.yfilter)
	|| ydk::is_set(ciicirclastuptime.yfilter)
	|| ydk::is_set(ciicirc3wayenabled.yfilter)
	|| ydk::is_set(ciicircextendedcircid.yfilter);
}

std::string CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiCircTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicircifindex.is_set || is_set(ciicircifindex.yfilter)) leaf_name_data.push_back(ciicircifindex.get_name_leafdata());
    if (ciicircifsubindex.is_set || is_set(ciicircifsubindex.yfilter)) leaf_name_data.push_back(ciicircifsubindex.get_name_leafdata());
    if (ciicircadminstate.is_set || is_set(ciicircadminstate.yfilter)) leaf_name_data.push_back(ciicircadminstate.get_name_leafdata());
    if (ciicircexiststate.is_set || is_set(ciicircexiststate.yfilter)) leaf_name_data.push_back(ciicircexiststate.get_name_leafdata());
    if (ciicirctype.is_set || is_set(ciicirctype.yfilter)) leaf_name_data.push_back(ciicirctype.get_name_leafdata());
    if (ciicircextdomain.is_set || is_set(ciicircextdomain.yfilter)) leaf_name_data.push_back(ciicircextdomain.get_name_leafdata());
    if (ciicirclevel.is_set || is_set(ciicirclevel.yfilter)) leaf_name_data.push_back(ciicirclevel.get_name_leafdata());
    if (ciicircpassivecircuit.is_set || is_set(ciicircpassivecircuit.yfilter)) leaf_name_data.push_back(ciicircpassivecircuit.get_name_leafdata());
    if (ciicircmeshgroupenabled.is_set || is_set(ciicircmeshgroupenabled.yfilter)) leaf_name_data.push_back(ciicircmeshgroupenabled.get_name_leafdata());
    if (ciicircmeshgroup.is_set || is_set(ciicircmeshgroup.yfilter)) leaf_name_data.push_back(ciicircmeshgroup.get_name_leafdata());
    if (ciicircsmallhellos.is_set || is_set(ciicircsmallhellos.yfilter)) leaf_name_data.push_back(ciicircsmallhellos.get_name_leafdata());
    if (ciicirclastuptime.is_set || is_set(ciicirclastuptime.yfilter)) leaf_name_data.push_back(ciicirclastuptime.get_name_leafdata());
    if (ciicirc3wayenabled.is_set || is_set(ciicirc3wayenabled.yfilter)) leaf_name_data.push_back(ciicirc3wayenabled.get_name_leafdata());
    if (ciicircextendedcircid.is_set || is_set(ciicircextendedcircid.yfilter)) leaf_name_data.push_back(ciicircextendedcircid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex = value;
        ciicircindex.value_namespace = name_space;
        ciicircindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciiCircType")
    {
        ciicirctype = value;
        ciicirctype.value_namespace = name_space;
        ciicirctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircExtDomain")
    {
        ciicircextdomain = value;
        ciicircextdomain.value_namespace = name_space;
        ciicircextdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevel")
    {
        ciicirclevel = value;
        ciicirclevel.value_namespace = name_space;
        ciicirclevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircPassiveCircuit")
    {
        ciicircpassivecircuit = value;
        ciicircpassivecircuit.value_namespace = name_space;
        ciicircpassivecircuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircMeshGroupEnabled")
    {
        ciicircmeshgroupenabled = value;
        ciicircmeshgroupenabled.value_namespace = name_space;
        ciicircmeshgroupenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircMeshGroup")
    {
        ciicircmeshgroup = value;
        ciicircmeshgroup.value_namespace = name_space;
        ciicircmeshgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircSmallHellos")
    {
        ciicircsmallhellos = value;
        ciicircsmallhellos.value_namespace = name_space;
        ciicircsmallhellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLastUpTime")
    {
        ciicirclastuptime = value;
        ciicirclastuptime.value_namespace = name_space;
        ciicirclastuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCirc3WayEnabled")
    {
        ciicirc3wayenabled = value;
        ciicirc3wayenabled.value_namespace = name_space;
        ciicirc3wayenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircExtendedCircID")
    {
        ciicircextendedcircid = value;
        ciicircextendedcircid.value_namespace = name_space;
        ciicircextendedcircid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircIfIndex")
    {
        ciicircifindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircIfSubIndex")
    {
        ciicircifsubindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircAdminState")
    {
        ciicircadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiCircExistState")
    {
        ciicircexiststate.yfilter = yfilter;
    }
    if(value_path == "ciiCircType")
    {
        ciicirctype.yfilter = yfilter;
    }
    if(value_path == "ciiCircExtDomain")
    {
        ciicircextdomain.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevel")
    {
        ciicirclevel.yfilter = yfilter;
    }
    if(value_path == "ciiCircPassiveCircuit")
    {
        ciicircpassivecircuit.yfilter = yfilter;
    }
    if(value_path == "ciiCircMeshGroupEnabled")
    {
        ciicircmeshgroupenabled.yfilter = yfilter;
    }
    if(value_path == "ciiCircMeshGroup")
    {
        ciicircmeshgroup.yfilter = yfilter;
    }
    if(value_path == "ciiCircSmallHellos")
    {
        ciicircsmallhellos.yfilter = yfilter;
    }
    if(value_path == "ciiCircLastUpTime")
    {
        ciicirclastuptime.yfilter = yfilter;
    }
    if(value_path == "ciiCirc3WayEnabled")
    {
        ciicirc3wayenabled.yfilter = yfilter;
    }
    if(value_path == "ciiCircExtendedCircID")
    {
        ciicircextendedcircid.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiCircIfIndex" || name == "ciiCircIfSubIndex" || name == "ciiCircAdminState" || name == "ciiCircExistState" || name == "ciiCircType" || name == "ciiCircExtDomain" || name == "ciiCircLevel" || name == "ciiCircPassiveCircuit" || name == "ciiCircMeshGroupEnabled" || name == "ciiCircMeshGroup" || name == "ciiCircSmallHellos" || name == "ciiCircLastUpTime" || name == "ciiCirc3WayEnabled" || name == "ciiCircExtendedCircID")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelTable()
    :
    ciicirclevelentry(this, {"ciicircindex", "ciicirclevelindex"})
{

    yang_name = "ciiCircLevelTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiCircLevelTable::~CiiCircLevelTable()
{
}

bool CISCOIETFISISMIB::CiiCircLevelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciicirclevelentry.len(); index++)
    {
        if(ciicirclevelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiCircLevelTable::has_operation() const
{
    for (std::size_t index=0; index<ciicirclevelentry.len(); index++)
    {
        if(ciicirclevelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiCircLevelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiCircLevelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircLevelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiCircLevelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiCircLevelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiCircLevelEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry>();
        ent_->parent = this;
        ciicirclevelentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiCircLevelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciicirclevelentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiCircLevelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiCircLevelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiCircLevelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircLevelEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::CiiCircLevelEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciicirclevelindex{YType::enumeration, "ciiCircLevelIndex"},
    ciicirclevelmetric{YType::int32, "ciiCircLevelMetric"},
    ciicirclevelwidemetric{YType::uint32, "ciiCircLevelWideMetric"},
    ciicirclevelispriority{YType::int32, "ciiCircLevelISPriority"},
    ciicirclevelidoctet{YType::int32, "ciiCircLevelIDOctet"},
    ciicirclevelid{YType::str, "ciiCircLevelID"},
    ciicircleveldesis{YType::str, "ciiCircLevelDesIS"},
    ciicirclevelhellomultiplier{YType::int32, "ciiCircLevelHelloMultiplier"},
    ciicirclevelhellotimer{YType::int32, "ciiCircLevelHelloTimer"},
    ciicircleveldrhellotimer{YType::int32, "ciiCircLevelDRHelloTimer"},
    ciicirclevellspthrottle{YType::uint32, "ciiCircLevelLSPThrottle"},
    ciicirclevelminlspretransint{YType::int32, "ciiCircLevelMinLSPRetransInt"},
    ciicirclevelcsnpinterval{YType::int32, "ciiCircLevelCSNPInterval"},
    ciicirclevelpartsnpinterval{YType::int32, "ciiCircLevelPartSNPInterval"}
{

    yang_name = "ciiCircLevelEntry"; yang_parent_name = "ciiCircLevelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::~CiiCircLevelEntry()
{
}

bool CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciicirclevelindex.is_set
	|| ciicirclevelmetric.is_set
	|| ciicirclevelwidemetric.is_set
	|| ciicirclevelispriority.is_set
	|| ciicirclevelidoctet.is_set
	|| ciicirclevelid.is_set
	|| ciicircleveldesis.is_set
	|| ciicirclevelhellomultiplier.is_set
	|| ciicirclevelhellotimer.is_set
	|| ciicircleveldrhellotimer.is_set
	|| ciicirclevellspthrottle.is_set
	|| ciicirclevelminlspretransint.is_set
	|| ciicirclevelcsnpinterval.is_set
	|| ciicirclevelpartsnpinterval.is_set;
}

bool CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciicirclevelindex.yfilter)
	|| ydk::is_set(ciicirclevelmetric.yfilter)
	|| ydk::is_set(ciicirclevelwidemetric.yfilter)
	|| ydk::is_set(ciicirclevelispriority.yfilter)
	|| ydk::is_set(ciicirclevelidoctet.yfilter)
	|| ydk::is_set(ciicirclevelid.yfilter)
	|| ydk::is_set(ciicircleveldesis.yfilter)
	|| ydk::is_set(ciicirclevelhellomultiplier.yfilter)
	|| ydk::is_set(ciicirclevelhellotimer.yfilter)
	|| ydk::is_set(ciicircleveldrhellotimer.yfilter)
	|| ydk::is_set(ciicirclevellspthrottle.yfilter)
	|| ydk::is_set(ciicirclevelminlspretransint.yfilter)
	|| ydk::is_set(ciicirclevelcsnpinterval.yfilter)
	|| ydk::is_set(ciicirclevelpartsnpinterval.yfilter);
}

std::string CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiCircLevelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircLevelEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciicirclevelindex, "ciiCircLevelIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicirclevelindex.is_set || is_set(ciicirclevelindex.yfilter)) leaf_name_data.push_back(ciicirclevelindex.get_name_leafdata());
    if (ciicirclevelmetric.is_set || is_set(ciicirclevelmetric.yfilter)) leaf_name_data.push_back(ciicirclevelmetric.get_name_leafdata());
    if (ciicirclevelwidemetric.is_set || is_set(ciicirclevelwidemetric.yfilter)) leaf_name_data.push_back(ciicirclevelwidemetric.get_name_leafdata());
    if (ciicirclevelispriority.is_set || is_set(ciicirclevelispriority.yfilter)) leaf_name_data.push_back(ciicirclevelispriority.get_name_leafdata());
    if (ciicirclevelidoctet.is_set || is_set(ciicirclevelidoctet.yfilter)) leaf_name_data.push_back(ciicirclevelidoctet.get_name_leafdata());
    if (ciicirclevelid.is_set || is_set(ciicirclevelid.yfilter)) leaf_name_data.push_back(ciicirclevelid.get_name_leafdata());
    if (ciicircleveldesis.is_set || is_set(ciicircleveldesis.yfilter)) leaf_name_data.push_back(ciicircleveldesis.get_name_leafdata());
    if (ciicirclevelhellomultiplier.is_set || is_set(ciicirclevelhellomultiplier.yfilter)) leaf_name_data.push_back(ciicirclevelhellomultiplier.get_name_leafdata());
    if (ciicirclevelhellotimer.is_set || is_set(ciicirclevelhellotimer.yfilter)) leaf_name_data.push_back(ciicirclevelhellotimer.get_name_leafdata());
    if (ciicircleveldrhellotimer.is_set || is_set(ciicircleveldrhellotimer.yfilter)) leaf_name_data.push_back(ciicircleveldrhellotimer.get_name_leafdata());
    if (ciicirclevellspthrottle.is_set || is_set(ciicirclevellspthrottle.yfilter)) leaf_name_data.push_back(ciicirclevellspthrottle.get_name_leafdata());
    if (ciicirclevelminlspretransint.is_set || is_set(ciicirclevelminlspretransint.yfilter)) leaf_name_data.push_back(ciicirclevelminlspretransint.get_name_leafdata());
    if (ciicirclevelcsnpinterval.is_set || is_set(ciicirclevelcsnpinterval.yfilter)) leaf_name_data.push_back(ciicirclevelcsnpinterval.get_name_leafdata());
    if (ciicirclevelpartsnpinterval.is_set || is_set(ciicirclevelpartsnpinterval.yfilter)) leaf_name_data.push_back(ciicirclevelpartsnpinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiCircLevelMetric")
    {
        ciicirclevelmetric = value;
        ciicirclevelmetric.value_namespace = name_space;
        ciicirclevelmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelWideMetric")
    {
        ciicirclevelwidemetric = value;
        ciicirclevelwidemetric.value_namespace = name_space;
        ciicirclevelwidemetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelISPriority")
    {
        ciicirclevelispriority = value;
        ciicirclevelispriority.value_namespace = name_space;
        ciicirclevelispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelIDOctet")
    {
        ciicirclevelidoctet = value;
        ciicirclevelidoctet.value_namespace = name_space;
        ciicirclevelidoctet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelID")
    {
        ciicirclevelid = value;
        ciicirclevelid.value_namespace = name_space;
        ciicirclevelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelDesIS")
    {
        ciicircleveldesis = value;
        ciicircleveldesis.value_namespace = name_space;
        ciicircleveldesis.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciiCircLevelDRHelloTimer")
    {
        ciicircleveldrhellotimer = value;
        ciicircleveldrhellotimer.value_namespace = name_space;
        ciicircleveldrhellotimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelLSPThrottle")
    {
        ciicirclevellspthrottle = value;
        ciicirclevellspthrottle.value_namespace = name_space;
        ciicirclevellspthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelMinLSPRetransInt")
    {
        ciicirclevelminlspretransint = value;
        ciicirclevelminlspretransint.value_namespace = name_space;
        ciicirclevelminlspretransint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelCSNPInterval")
    {
        ciicirclevelcsnpinterval = value;
        ciicirclevelcsnpinterval.value_namespace = name_space;
        ciicirclevelcsnpinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLevelPartSNPInterval")
    {
        ciicirclevelpartsnpinterval = value;
        ciicirclevelpartsnpinterval.value_namespace = name_space;
        ciicirclevelpartsnpinterval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelIndex")
    {
        ciicirclevelindex.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelMetric")
    {
        ciicirclevelmetric.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelWideMetric")
    {
        ciicirclevelwidemetric.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelISPriority")
    {
        ciicirclevelispriority.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelIDOctet")
    {
        ciicirclevelidoctet.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelID")
    {
        ciicirclevelid.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelDesIS")
    {
        ciicircleveldesis.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelHelloMultiplier")
    {
        ciicirclevelhellomultiplier.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelHelloTimer")
    {
        ciicirclevelhellotimer.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelDRHelloTimer")
    {
        ciicircleveldrhellotimer.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelLSPThrottle")
    {
        ciicirclevellspthrottle.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelMinLSPRetransInt")
    {
        ciicirclevelminlspretransint.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelCSNPInterval")
    {
        ciicirclevelcsnpinterval.yfilter = yfilter;
    }
    if(value_path == "ciiCircLevelPartSNPInterval")
    {
        ciicirclevelpartsnpinterval.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiCircLevelIndex" || name == "ciiCircLevelMetric" || name == "ciiCircLevelWideMetric" || name == "ciiCircLevelISPriority" || name == "ciiCircLevelIDOctet" || name == "ciiCircLevelID" || name == "ciiCircLevelDesIS" || name == "ciiCircLevelHelloMultiplier" || name == "ciiCircLevelHelloTimer" || name == "ciiCircLevelDRHelloTimer" || name == "ciiCircLevelLSPThrottle" || name == "ciiCircLevelMinLSPRetransInt" || name == "ciiCircLevelCSNPInterval" || name == "ciiCircLevelPartSNPInterval")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterTable()
    :
    ciisystemcounterentry(this, {"ciisysstatlevel"})
{

    yang_name = "ciiSystemCounterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSystemCounterTable::~CiiSystemCounterTable()
{
}

bool CISCOIETFISISMIB::CiiSystemCounterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciisystemcounterentry.len(); index++)
    {
        if(ciisystemcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiSystemCounterTable::has_operation() const
{
    for (std::size_t index=0; index<ciisystemcounterentry.len(); index++)
    {
        if(ciisystemcounterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiSystemCounterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSystemCounterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSystemCounterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSystemCounterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSystemCounterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiSystemCounterEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry>();
        ent_->parent = this;
        ciisystemcounterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSystemCounterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciisystemcounterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiSystemCounterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiSystemCounterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiSystemCounterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSystemCounterEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::CiiSystemCounterEntry()
    :
    ciisysstatlevel{YType::enumeration, "ciiSysStatLevel"},
    ciisysstatcorrlsps{YType::uint32, "ciiSysStatCorrLSPs"},
    ciisysstatauthtypefails{YType::uint32, "ciiSysStatAuthTypeFails"},
    ciisysstatauthfails{YType::uint32, "ciiSysStatAuthFails"},
    ciisysstatlspdbaseoloads{YType::uint32, "ciiSysStatLSPDbaseOloads"},
    ciisysstatmanaddrdropfromareas{YType::uint32, "ciiSysStatManAddrDropFromAreas"},
    ciisysstatattmpttoexmaxseqnums{YType::uint32, "ciiSysStatAttmptToExMaxSeqNums"},
    ciisysstatseqnumskips{YType::uint32, "ciiSysStatSeqNumSkips"},
    ciisysstatownlsppurges{YType::uint32, "ciiSysStatOwnLSPPurges"},
    ciisysstatidfieldlenmismatches{YType::uint32, "ciiSysStatIDFieldLenMismatches"},
    ciisysstatpartchanges{YType::uint32, "ciiSysStatPartChanges"},
    ciisysstatspfruns{YType::uint32, "ciiSysStatSPFRuns"},
    ciisysstatlsperrors{YType::uint32, "ciiSysStatLSPErrors"}
{

    yang_name = "ciiSystemCounterEntry"; yang_parent_name = "ciiSystemCounterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::~CiiSystemCounterEntry()
{
}

bool CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciisysstatlevel.is_set
	|| ciisysstatcorrlsps.is_set
	|| ciisysstatauthtypefails.is_set
	|| ciisysstatauthfails.is_set
	|| ciisysstatlspdbaseoloads.is_set
	|| ciisysstatmanaddrdropfromareas.is_set
	|| ciisysstatattmpttoexmaxseqnums.is_set
	|| ciisysstatseqnumskips.is_set
	|| ciisysstatownlsppurges.is_set
	|| ciisysstatidfieldlenmismatches.is_set
	|| ciisysstatpartchanges.is_set
	|| ciisysstatspfruns.is_set
	|| ciisysstatlsperrors.is_set;
}

bool CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciisysstatlevel.yfilter)
	|| ydk::is_set(ciisysstatcorrlsps.yfilter)
	|| ydk::is_set(ciisysstatauthtypefails.yfilter)
	|| ydk::is_set(ciisysstatauthfails.yfilter)
	|| ydk::is_set(ciisysstatlspdbaseoloads.yfilter)
	|| ydk::is_set(ciisysstatmanaddrdropfromareas.yfilter)
	|| ydk::is_set(ciisysstatattmpttoexmaxseqnums.yfilter)
	|| ydk::is_set(ciisysstatseqnumskips.yfilter)
	|| ydk::is_set(ciisysstatownlsppurges.yfilter)
	|| ydk::is_set(ciisysstatidfieldlenmismatches.yfilter)
	|| ydk::is_set(ciisysstatpartchanges.yfilter)
	|| ydk::is_set(ciisysstatspfruns.yfilter)
	|| ydk::is_set(ciisysstatlsperrors.yfilter);
}

std::string CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiSystemCounterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiSystemCounterEntry";
    ADD_KEY_TOKEN(ciisysstatlevel, "ciiSysStatLevel");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciisysstatlevel.is_set || is_set(ciisysstatlevel.yfilter)) leaf_name_data.push_back(ciisysstatlevel.get_name_leafdata());
    if (ciisysstatcorrlsps.is_set || is_set(ciisysstatcorrlsps.yfilter)) leaf_name_data.push_back(ciisysstatcorrlsps.get_name_leafdata());
    if (ciisysstatauthtypefails.is_set || is_set(ciisysstatauthtypefails.yfilter)) leaf_name_data.push_back(ciisysstatauthtypefails.get_name_leafdata());
    if (ciisysstatauthfails.is_set || is_set(ciisysstatauthfails.yfilter)) leaf_name_data.push_back(ciisysstatauthfails.get_name_leafdata());
    if (ciisysstatlspdbaseoloads.is_set || is_set(ciisysstatlspdbaseoloads.yfilter)) leaf_name_data.push_back(ciisysstatlspdbaseoloads.get_name_leafdata());
    if (ciisysstatmanaddrdropfromareas.is_set || is_set(ciisysstatmanaddrdropfromareas.yfilter)) leaf_name_data.push_back(ciisysstatmanaddrdropfromareas.get_name_leafdata());
    if (ciisysstatattmpttoexmaxseqnums.is_set || is_set(ciisysstatattmpttoexmaxseqnums.yfilter)) leaf_name_data.push_back(ciisysstatattmpttoexmaxseqnums.get_name_leafdata());
    if (ciisysstatseqnumskips.is_set || is_set(ciisysstatseqnumskips.yfilter)) leaf_name_data.push_back(ciisysstatseqnumskips.get_name_leafdata());
    if (ciisysstatownlsppurges.is_set || is_set(ciisysstatownlsppurges.yfilter)) leaf_name_data.push_back(ciisysstatownlsppurges.get_name_leafdata());
    if (ciisysstatidfieldlenmismatches.is_set || is_set(ciisysstatidfieldlenmismatches.yfilter)) leaf_name_data.push_back(ciisysstatidfieldlenmismatches.get_name_leafdata());
    if (ciisysstatpartchanges.is_set || is_set(ciisysstatpartchanges.yfilter)) leaf_name_data.push_back(ciisysstatpartchanges.get_name_leafdata());
    if (ciisysstatspfruns.is_set || is_set(ciisysstatspfruns.yfilter)) leaf_name_data.push_back(ciisysstatspfruns.get_name_leafdata());
    if (ciisysstatlsperrors.is_set || is_set(ciisysstatlsperrors.yfilter)) leaf_name_data.push_back(ciisysstatlsperrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciiSysStatLevel")
    {
        ciisysstatlevel = value;
        ciisysstatlevel.value_namespace = name_space;
        ciisysstatlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatCorrLSPs")
    {
        ciisysstatcorrlsps = value;
        ciisysstatcorrlsps.value_namespace = name_space;
        ciisysstatcorrlsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatAuthTypeFails")
    {
        ciisysstatauthtypefails = value;
        ciisysstatauthtypefails.value_namespace = name_space;
        ciisysstatauthtypefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatAuthFails")
    {
        ciisysstatauthfails = value;
        ciisysstatauthfails.value_namespace = name_space;
        ciisysstatauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatLSPDbaseOloads")
    {
        ciisysstatlspdbaseoloads = value;
        ciisysstatlspdbaseoloads.value_namespace = name_space;
        ciisysstatlspdbaseoloads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatManAddrDropFromAreas")
    {
        ciisysstatmanaddrdropfromareas = value;
        ciisysstatmanaddrdropfromareas.value_namespace = name_space;
        ciisysstatmanaddrdropfromareas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatAttmptToExMaxSeqNums")
    {
        ciisysstatattmpttoexmaxseqnums = value;
        ciisysstatattmpttoexmaxseqnums.value_namespace = name_space;
        ciisysstatattmpttoexmaxseqnums.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatSeqNumSkips")
    {
        ciisysstatseqnumskips = value;
        ciisysstatseqnumskips.value_namespace = name_space;
        ciisysstatseqnumskips.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatOwnLSPPurges")
    {
        ciisysstatownlsppurges = value;
        ciisysstatownlsppurges.value_namespace = name_space;
        ciisysstatownlsppurges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatIDFieldLenMismatches")
    {
        ciisysstatidfieldlenmismatches = value;
        ciisysstatidfieldlenmismatches.value_namespace = name_space;
        ciisysstatidfieldlenmismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatPartChanges")
    {
        ciisysstatpartchanges = value;
        ciisysstatpartchanges.value_namespace = name_space;
        ciisysstatpartchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatSPFRuns")
    {
        ciisysstatspfruns = value;
        ciisysstatspfruns.value_namespace = name_space;
        ciisysstatspfruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiSysStatLSPErrors")
    {
        ciisysstatlsperrors = value;
        ciisysstatlsperrors.value_namespace = name_space;
        ciisysstatlsperrors.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiSysStatLevel")
    {
        ciisysstatlevel.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatCorrLSPs")
    {
        ciisysstatcorrlsps.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatAuthTypeFails")
    {
        ciisysstatauthtypefails.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatAuthFails")
    {
        ciisysstatauthfails.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatLSPDbaseOloads")
    {
        ciisysstatlspdbaseoloads.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatManAddrDropFromAreas")
    {
        ciisysstatmanaddrdropfromareas.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatAttmptToExMaxSeqNums")
    {
        ciisysstatattmpttoexmaxseqnums.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatSeqNumSkips")
    {
        ciisysstatseqnumskips.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatOwnLSPPurges")
    {
        ciisysstatownlsppurges.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatIDFieldLenMismatches")
    {
        ciisysstatidfieldlenmismatches.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatPartChanges")
    {
        ciisysstatpartchanges.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatSPFRuns")
    {
        ciisysstatspfruns.yfilter = yfilter;
    }
    if(value_path == "ciiSysStatLSPErrors")
    {
        ciisysstatlsperrors.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiSysStatLevel" || name == "ciiSysStatCorrLSPs" || name == "ciiSysStatAuthTypeFails" || name == "ciiSysStatAuthFails" || name == "ciiSysStatLSPDbaseOloads" || name == "ciiSysStatManAddrDropFromAreas" || name == "ciiSysStatAttmptToExMaxSeqNums" || name == "ciiSysStatSeqNumSkips" || name == "ciiSysStatOwnLSPPurges" || name == "ciiSysStatIDFieldLenMismatches" || name == "ciiSysStatPartChanges" || name == "ciiSysStatSPFRuns" || name == "ciiSysStatLSPErrors")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterTable()
    :
    ciicircuitcounterentry(this, {"ciicircindex", "ciicircuittype"})
{

    yang_name = "ciiCircuitCounterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiCircuitCounterTable::~CiiCircuitCounterTable()
{
}

bool CISCOIETFISISMIB::CiiCircuitCounterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciicircuitcounterentry.len(); index++)
    {
        if(ciicircuitcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiCircuitCounterTable::has_operation() const
{
    for (std::size_t index=0; index<ciicircuitcounterentry.len(); index++)
    {
        if(ciicircuitcounterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiCircuitCounterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiCircuitCounterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircuitCounterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiCircuitCounterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiCircuitCounterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiCircuitCounterEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry>();
        ent_->parent = this;
        ciicircuitcounterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiCircuitCounterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciicircuitcounterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiCircuitCounterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiCircuitCounterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiCircuitCounterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircuitCounterEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::CiiCircuitCounterEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciicircuittype{YType::enumeration, "ciiCircuitType"},
    ciicircadjchanges{YType::uint32, "ciiCircAdjChanges"},
    ciicircnumadj{YType::uint32, "ciiCircNumAdj"},
    ciicircinitfails{YType::uint32, "ciiCircInitFails"},
    ciicircrejadjs{YType::uint32, "ciiCircRejAdjs"},
    ciicircidfieldlenmismatches{YType::uint32, "ciiCircIDFieldLenMismatches"},
    ciicircmaxareaaddrmismatches{YType::uint32, "ciiCircMaxAreaAddrMismatches"},
    ciicircauthtypefails{YType::uint32, "ciiCircAuthTypeFails"},
    ciicircauthfails{YType::uint32, "ciiCircAuthFails"},
    ciicirclandesischanges{YType::uint32, "ciiCircLANDesISChanges"}
{

    yang_name = "ciiCircuitCounterEntry"; yang_parent_name = "ciiCircuitCounterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::~CiiCircuitCounterEntry()
{
}

bool CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciicircuittype.is_set
	|| ciicircadjchanges.is_set
	|| ciicircnumadj.is_set
	|| ciicircinitfails.is_set
	|| ciicircrejadjs.is_set
	|| ciicircidfieldlenmismatches.is_set
	|| ciicircmaxareaaddrmismatches.is_set
	|| ciicircauthtypefails.is_set
	|| ciicircauthfails.is_set
	|| ciicirclandesischanges.is_set;
}

bool CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciicircuittype.yfilter)
	|| ydk::is_set(ciicircadjchanges.yfilter)
	|| ydk::is_set(ciicircnumadj.yfilter)
	|| ydk::is_set(ciicircinitfails.yfilter)
	|| ydk::is_set(ciicircrejadjs.yfilter)
	|| ydk::is_set(ciicircidfieldlenmismatches.yfilter)
	|| ydk::is_set(ciicircmaxareaaddrmismatches.yfilter)
	|| ydk::is_set(ciicircauthtypefails.yfilter)
	|| ydk::is_set(ciicircauthfails.yfilter)
	|| ydk::is_set(ciicirclandesischanges.yfilter);
}

std::string CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiCircuitCounterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiCircuitCounterEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciicircuittype, "ciiCircuitType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciicircuittype.is_set || is_set(ciicircuittype.yfilter)) leaf_name_data.push_back(ciicircuittype.get_name_leafdata());
    if (ciicircadjchanges.is_set || is_set(ciicircadjchanges.yfilter)) leaf_name_data.push_back(ciicircadjchanges.get_name_leafdata());
    if (ciicircnumadj.is_set || is_set(ciicircnumadj.yfilter)) leaf_name_data.push_back(ciicircnumadj.get_name_leafdata());
    if (ciicircinitfails.is_set || is_set(ciicircinitfails.yfilter)) leaf_name_data.push_back(ciicircinitfails.get_name_leafdata());
    if (ciicircrejadjs.is_set || is_set(ciicircrejadjs.yfilter)) leaf_name_data.push_back(ciicircrejadjs.get_name_leafdata());
    if (ciicircidfieldlenmismatches.is_set || is_set(ciicircidfieldlenmismatches.yfilter)) leaf_name_data.push_back(ciicircidfieldlenmismatches.get_name_leafdata());
    if (ciicircmaxareaaddrmismatches.is_set || is_set(ciicircmaxareaaddrmismatches.yfilter)) leaf_name_data.push_back(ciicircmaxareaaddrmismatches.get_name_leafdata());
    if (ciicircauthtypefails.is_set || is_set(ciicircauthtypefails.yfilter)) leaf_name_data.push_back(ciicircauthtypefails.get_name_leafdata());
    if (ciicircauthfails.is_set || is_set(ciicircauthfails.yfilter)) leaf_name_data.push_back(ciicircauthfails.get_name_leafdata());
    if (ciicirclandesischanges.is_set || is_set(ciicirclandesischanges.yfilter)) leaf_name_data.push_back(ciicirclandesischanges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiCircNumAdj")
    {
        ciicircnumadj = value;
        ciicircnumadj.value_namespace = name_space;
        ciicircnumadj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircInitFails")
    {
        ciicircinitfails = value;
        ciicircinitfails.value_namespace = name_space;
        ciicircinitfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircRejAdjs")
    {
        ciicircrejadjs = value;
        ciicircrejadjs.value_namespace = name_space;
        ciicircrejadjs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircIDFieldLenMismatches")
    {
        ciicircidfieldlenmismatches = value;
        ciicircidfieldlenmismatches.value_namespace = name_space;
        ciicircidfieldlenmismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircMaxAreaAddrMismatches")
    {
        ciicircmaxareaaddrmismatches = value;
        ciicircmaxareaaddrmismatches.value_namespace = name_space;
        ciicircmaxareaaddrmismatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircAuthTypeFails")
    {
        ciicircauthtypefails = value;
        ciicircauthtypefails.value_namespace = name_space;
        ciicircauthtypefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircAuthFails")
    {
        ciicircauthfails = value;
        ciicircauthfails.value_namespace = name_space;
        ciicircauthfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiCircLANDesISChanges")
    {
        ciicirclandesischanges = value;
        ciicirclandesischanges.value_namespace = name_space;
        ciicirclandesischanges.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciiCircNumAdj")
    {
        ciicircnumadj.yfilter = yfilter;
    }
    if(value_path == "ciiCircInitFails")
    {
        ciicircinitfails.yfilter = yfilter;
    }
    if(value_path == "ciiCircRejAdjs")
    {
        ciicircrejadjs.yfilter = yfilter;
    }
    if(value_path == "ciiCircIDFieldLenMismatches")
    {
        ciicircidfieldlenmismatches.yfilter = yfilter;
    }
    if(value_path == "ciiCircMaxAreaAddrMismatches")
    {
        ciicircmaxareaaddrmismatches.yfilter = yfilter;
    }
    if(value_path == "ciiCircAuthTypeFails")
    {
        ciicircauthtypefails.yfilter = yfilter;
    }
    if(value_path == "ciiCircAuthFails")
    {
        ciicircauthfails.yfilter = yfilter;
    }
    if(value_path == "ciiCircLANDesISChanges")
    {
        ciicirclandesischanges.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiCircuitType" || name == "ciiCircAdjChanges" || name == "ciiCircNumAdj" || name == "ciiCircInitFails" || name == "ciiCircRejAdjs" || name == "ciiCircIDFieldLenMismatches" || name == "ciiCircMaxAreaAddrMismatches" || name == "ciiCircAuthTypeFails" || name == "ciiCircAuthFails" || name == "ciiCircLANDesISChanges")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterTable()
    :
    ciipacketcounterentry(this, {"ciicircindex", "ciipacketcountlevel", "ciipacketcountdirection"})
{

    yang_name = "ciiPacketCounterTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiPacketCounterTable::~CiiPacketCounterTable()
{
}

bool CISCOIETFISISMIB::CiiPacketCounterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciipacketcounterentry.len(); index++)
    {
        if(ciipacketcounterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiPacketCounterTable::has_operation() const
{
    for (std::size_t index=0; index<ciipacketcounterentry.len(); index++)
    {
        if(ciipacketcounterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiPacketCounterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiPacketCounterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiPacketCounterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiPacketCounterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiPacketCounterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiPacketCounterEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry>();
        ent_->parent = this;
        ciipacketcounterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiPacketCounterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciipacketcounterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiPacketCounterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiPacketCounterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiPacketCounterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiPacketCounterEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::CiiPacketCounterEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciipacketcountlevel{YType::enumeration, "ciiPacketCountLevel"},
    ciipacketcountdirection{YType::enumeration, "ciiPacketCountDirection"},
    ciipacketcountiihellos{YType::uint32, "ciiPacketCountIIHellos"},
    ciipacketcountishellos{YType::uint32, "ciiPacketCountISHellos"},
    ciipacketcounteshellos{YType::uint32, "ciiPacketCountESHellos"},
    ciipacketcountlsps{YType::uint32, "ciiPacketCountLSPs"},
    ciipacketcountcsnps{YType::uint32, "ciiPacketCountCSNPs"},
    ciipacketcountpsnps{YType::uint32, "ciiPacketCountPSNPs"},
    ciipacketcountunknowns{YType::uint32, "ciiPacketCountUnknowns"}
{

    yang_name = "ciiPacketCounterEntry"; yang_parent_name = "ciiPacketCounterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::~CiiPacketCounterEntry()
{
}

bool CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciipacketcountlevel.is_set
	|| ciipacketcountdirection.is_set
	|| ciipacketcountiihellos.is_set
	|| ciipacketcountishellos.is_set
	|| ciipacketcounteshellos.is_set
	|| ciipacketcountlsps.is_set
	|| ciipacketcountcsnps.is_set
	|| ciipacketcountpsnps.is_set
	|| ciipacketcountunknowns.is_set;
}

bool CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciipacketcountlevel.yfilter)
	|| ydk::is_set(ciipacketcountdirection.yfilter)
	|| ydk::is_set(ciipacketcountiihellos.yfilter)
	|| ydk::is_set(ciipacketcountishellos.yfilter)
	|| ydk::is_set(ciipacketcounteshellos.yfilter)
	|| ydk::is_set(ciipacketcountlsps.yfilter)
	|| ydk::is_set(ciipacketcountcsnps.yfilter)
	|| ydk::is_set(ciipacketcountpsnps.yfilter)
	|| ydk::is_set(ciipacketcountunknowns.yfilter);
}

std::string CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiPacketCounterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiPacketCounterEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciipacketcountlevel, "ciiPacketCountLevel");
    ADD_KEY_TOKEN(ciipacketcountdirection, "ciiPacketCountDirection");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciipacketcountlevel.is_set || is_set(ciipacketcountlevel.yfilter)) leaf_name_data.push_back(ciipacketcountlevel.get_name_leafdata());
    if (ciipacketcountdirection.is_set || is_set(ciipacketcountdirection.yfilter)) leaf_name_data.push_back(ciipacketcountdirection.get_name_leafdata());
    if (ciipacketcountiihellos.is_set || is_set(ciipacketcountiihellos.yfilter)) leaf_name_data.push_back(ciipacketcountiihellos.get_name_leafdata());
    if (ciipacketcountishellos.is_set || is_set(ciipacketcountishellos.yfilter)) leaf_name_data.push_back(ciipacketcountishellos.get_name_leafdata());
    if (ciipacketcounteshellos.is_set || is_set(ciipacketcounteshellos.yfilter)) leaf_name_data.push_back(ciipacketcounteshellos.get_name_leafdata());
    if (ciipacketcountlsps.is_set || is_set(ciipacketcountlsps.yfilter)) leaf_name_data.push_back(ciipacketcountlsps.get_name_leafdata());
    if (ciipacketcountcsnps.is_set || is_set(ciipacketcountcsnps.yfilter)) leaf_name_data.push_back(ciipacketcountcsnps.get_name_leafdata());
    if (ciipacketcountpsnps.is_set || is_set(ciipacketcountpsnps.yfilter)) leaf_name_data.push_back(ciipacketcountpsnps.get_name_leafdata());
    if (ciipacketcountunknowns.is_set || is_set(ciipacketcountunknowns.yfilter)) leaf_name_data.push_back(ciipacketcountunknowns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiPacketCountESHellos")
    {
        ciipacketcounteshellos = value;
        ciipacketcounteshellos.value_namespace = name_space;
        ciipacketcounteshellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountLSPs")
    {
        ciipacketcountlsps = value;
        ciipacketcountlsps.value_namespace = name_space;
        ciipacketcountlsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiPacketCountCSNPs")
    {
        ciipacketcountcsnps = value;
        ciipacketcountcsnps.value_namespace = name_space;
        ciipacketcountcsnps.value_namespace_prefix = name_space_prefix;
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

void CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciiPacketCountIIHellos")
    {
        ciipacketcountiihellos.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountISHellos")
    {
        ciipacketcountishellos.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountESHellos")
    {
        ciipacketcounteshellos.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountLSPs")
    {
        ciipacketcountlsps.yfilter = yfilter;
    }
    if(value_path == "ciiPacketCountCSNPs")
    {
        ciipacketcountcsnps.yfilter = yfilter;
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

bool CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiPacketCountLevel" || name == "ciiPacketCountDirection" || name == "ciiPacketCountIIHellos" || name == "ciiPacketCountISHellos" || name == "ciiPacketCountESHellos" || name == "ciiPacketCountLSPs" || name == "ciiPacketCountCSNPs" || name == "ciiPacketCountPSNPs" || name == "ciiPacketCountUnknowns")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjTable()
    :
    ciiisadjentry(this, {"ciicircindex", "ciiisadjindex"})
{

    yang_name = "ciiISAdjTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjTable::~CiiISAdjTable()
{
}

bool CISCOIETFISISMIB::CiiISAdjTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiisadjentry.len(); index++)
    {
        if(ciiisadjentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiISAdjTable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjentry.len(); index++)
    {
        if(ciiisadjentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry>();
        ent_->parent = this;
        ciiisadjentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiisadjentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiISAdjTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiISAdjTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiISAdjTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::int32, "ciiISAdjIndex"},
    ciiisadjstate{YType::enumeration, "ciiISAdjState"},
    ciiisadj3waystate{YType::enumeration, "ciiISAdj3WayState"},
    ciiisadjneighsnpaaddress{YType::str, "ciiISAdjNeighSNPAAddress"},
    ciiisadjneighsystype{YType::enumeration, "ciiISAdjNeighSysType"},
    ciiisadjneighsysid{YType::str, "ciiISAdjNeighSysID"},
    ciiisadjnbrextendedcircid{YType::uint32, "ciiISAdjNbrExtendedCircID"},
    ciiisadjusage{YType::enumeration, "ciiISAdjUsage"},
    ciiisadjholdtimer{YType::uint32, "ciiISAdjHoldTimer"},
    ciiisadjneighpriority{YType::int32, "ciiISAdjNeighPriority"},
    ciiisadjlastuptime{YType::uint32, "ciiISAdjLastUpTime"}
{

    yang_name = "ciiISAdjEntry"; yang_parent_name = "ciiISAdjTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::~CiiISAdjEntry()
{
}

bool CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadjstate.is_set
	|| ciiisadj3waystate.is_set
	|| ciiisadjneighsnpaaddress.is_set
	|| ciiisadjneighsystype.is_set
	|| ciiisadjneighsysid.is_set
	|| ciiisadjnbrextendedcircid.is_set
	|| ciiisadjusage.is_set
	|| ciiisadjholdtimer.is_set
	|| ciiisadjneighpriority.is_set
	|| ciiisadjlastuptime.is_set;
}

bool CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadjstate.yfilter)
	|| ydk::is_set(ciiisadj3waystate.yfilter)
	|| ydk::is_set(ciiisadjneighsnpaaddress.yfilter)
	|| ydk::is_set(ciiisadjneighsystype.yfilter)
	|| ydk::is_set(ciiisadjneighsysid.yfilter)
	|| ydk::is_set(ciiisadjnbrextendedcircid.yfilter)
	|| ydk::is_set(ciiisadjusage.yfilter)
	|| ydk::is_set(ciiisadjholdtimer.yfilter)
	|| ydk::is_set(ciiisadjneighpriority.yfilter)
	|| ydk::is_set(ciiisadjlastuptime.yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciiisadjindex, "ciiISAdjIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjstate.is_set || is_set(ciiisadjstate.yfilter)) leaf_name_data.push_back(ciiisadjstate.get_name_leafdata());
    if (ciiisadj3waystate.is_set || is_set(ciiisadj3waystate.yfilter)) leaf_name_data.push_back(ciiisadj3waystate.get_name_leafdata());
    if (ciiisadjneighsnpaaddress.is_set || is_set(ciiisadjneighsnpaaddress.yfilter)) leaf_name_data.push_back(ciiisadjneighsnpaaddress.get_name_leafdata());
    if (ciiisadjneighsystype.is_set || is_set(ciiisadjneighsystype.yfilter)) leaf_name_data.push_back(ciiisadjneighsystype.get_name_leafdata());
    if (ciiisadjneighsysid.is_set || is_set(ciiisadjneighsysid.yfilter)) leaf_name_data.push_back(ciiisadjneighsysid.get_name_leafdata());
    if (ciiisadjnbrextendedcircid.is_set || is_set(ciiisadjnbrextendedcircid.yfilter)) leaf_name_data.push_back(ciiisadjnbrextendedcircid.get_name_leafdata());
    if (ciiisadjusage.is_set || is_set(ciiisadjusage.yfilter)) leaf_name_data.push_back(ciiisadjusage.get_name_leafdata());
    if (ciiisadjholdtimer.is_set || is_set(ciiisadjholdtimer.yfilter)) leaf_name_data.push_back(ciiisadjholdtimer.get_name_leafdata());
    if (ciiisadjneighpriority.is_set || is_set(ciiisadjneighpriority.yfilter)) leaf_name_data.push_back(ciiisadjneighpriority.get_name_leafdata());
    if (ciiisadjlastuptime.is_set || is_set(ciiisadjlastuptime.yfilter)) leaf_name_data.push_back(ciiisadjlastuptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiISAdjState")
    {
        ciiisadjstate = value;
        ciiisadjstate.value_namespace = name_space;
        ciiisadjstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdj3WayState")
    {
        ciiisadj3waystate = value;
        ciiisadj3waystate.value_namespace = name_space;
        ciiisadj3waystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighSNPAAddress")
    {
        ciiisadjneighsnpaaddress = value;
        ciiisadjneighsnpaaddress.value_namespace = name_space;
        ciiisadjneighsnpaaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighSysType")
    {
        ciiisadjneighsystype = value;
        ciiisadjneighsystype.value_namespace = name_space;
        ciiisadjneighsystype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighSysID")
    {
        ciiisadjneighsysid = value;
        ciiisadjneighsysid.value_namespace = name_space;
        ciiisadjneighsysid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNbrExtendedCircID")
    {
        ciiisadjnbrextendedcircid = value;
        ciiisadjnbrextendedcircid.value_namespace = name_space;
        ciiisadjnbrextendedcircid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjUsage")
    {
        ciiisadjusage = value;
        ciiisadjusage.value_namespace = name_space;
        ciiisadjusage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjHoldTimer")
    {
        ciiisadjholdtimer = value;
        ciiisadjholdtimer.value_namespace = name_space;
        ciiisadjholdtimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjNeighPriority")
    {
        ciiisadjneighpriority = value;
        ciiisadjneighpriority.value_namespace = name_space;
        ciiisadjneighpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjLastUpTime")
    {
        ciiisadjlastuptime = value;
        ciiisadjlastuptime.value_namespace = name_space;
        ciiisadjlastuptime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIndex")
    {
        ciiisadjindex.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjState")
    {
        ciiisadjstate.yfilter = yfilter;
    }
    if(value_path == "ciiISAdj3WayState")
    {
        ciiisadj3waystate.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighSNPAAddress")
    {
        ciiisadjneighsnpaaddress.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighSysType")
    {
        ciiisadjneighsystype.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighSysID")
    {
        ciiisadjneighsysid.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNbrExtendedCircID")
    {
        ciiisadjnbrextendedcircid.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjUsage")
    {
        ciiisadjusage.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjHoldTimer")
    {
        ciiisadjholdtimer.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjNeighPriority")
    {
        ciiisadjneighpriority.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjLastUpTime")
    {
        ciiisadjlastuptime.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdjState" || name == "ciiISAdj3WayState" || name == "ciiISAdjNeighSNPAAddress" || name == "ciiISAdjNeighSysType" || name == "ciiISAdjNeighSysID" || name == "ciiISAdjNbrExtendedCircID" || name == "ciiISAdjUsage" || name == "ciiISAdjHoldTimer" || name == "ciiISAdjNeighPriority" || name == "ciiISAdjLastUpTime")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrTable()
    :
    ciiisadjareaaddrentry(this, {"ciicircindex", "ciiisadjindex", "ciiisadjareaaddrindex"})
{

    yang_name = "ciiISAdjAreaAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjAreaAddrTable::~CiiISAdjAreaAddrTable()
{
}

bool CISCOIETFISISMIB::CiiISAdjAreaAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiisadjareaaddrentry.len(); index++)
    {
        if(ciiisadjareaaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiISAdjAreaAddrTable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjareaaddrentry.len(); index++)
    {
        if(ciiisadjareaaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjAreaAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjAreaAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjAreaAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjAreaAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjAreaAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjAreaAddrEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry>();
        ent_->parent = this;
        ciiisadjareaaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjAreaAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiisadjareaaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiISAdjAreaAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiISAdjAreaAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiISAdjAreaAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjAreaAddrEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::CiiISAdjAreaAddrEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::str, "ciiISAdjIndex"},
    ciiisadjareaaddrindex{YType::int32, "ciiISAdjAreaAddrIndex"},
    ciiisadjareaaddress{YType::str, "ciiISAdjAreaAddress"}
{

    yang_name = "ciiISAdjAreaAddrEntry"; yang_parent_name = "ciiISAdjAreaAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::~CiiISAdjAreaAddrEntry()
{
}

bool CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadjareaaddrindex.is_set
	|| ciiisadjareaaddress.is_set;
}

bool CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadjareaaddrindex.yfilter)
	|| ydk::is_set(ciiisadjareaaddress.yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjAreaAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjAreaAddrEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciiisadjindex, "ciiISAdjIndex");
    ADD_KEY_TOKEN(ciiisadjareaaddrindex, "ciiISAdjAreaAddrIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjareaaddrindex.is_set || is_set(ciiisadjareaaddrindex.yfilter)) leaf_name_data.push_back(ciiisadjareaaddrindex.get_name_leafdata());
    if (ciiisadjareaaddress.is_set || is_set(ciiisadjareaaddress.yfilter)) leaf_name_data.push_back(ciiisadjareaaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdjAreaAddrIndex" || name == "ciiISAdjAreaAddress")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrTable()
    :
    ciiisadjipaddrentry(this, {"ciicircindex", "ciiisadjindex", "ciiisadjipaddrindex"})
{

    yang_name = "ciiISAdjIPAddrTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjIPAddrTable::~CiiISAdjIPAddrTable()
{
}

bool CISCOIETFISISMIB::CiiISAdjIPAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiisadjipaddrentry.len(); index++)
    {
        if(ciiisadjipaddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiISAdjIPAddrTable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjipaddrentry.len(); index++)
    {
        if(ciiisadjipaddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjIPAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjIPAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjIPAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjIPAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjIPAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjIPAddrEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry>();
        ent_->parent = this;
        ciiisadjipaddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjIPAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiisadjipaddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiISAdjIPAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiISAdjIPAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiISAdjIPAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjIPAddrEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::CiiISAdjIPAddrEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::str, "ciiISAdjIndex"},
    ciiisadjipaddrindex{YType::int32, "ciiISAdjIPAddrIndex"},
    ciiisadjipaddrtype{YType::enumeration, "ciiISAdjIPAddrType"},
    ciiisadjipaddraddress{YType::str, "ciiISAdjIPAddrAddress"}
{

    yang_name = "ciiISAdjIPAddrEntry"; yang_parent_name = "ciiISAdjIPAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::~CiiISAdjIPAddrEntry()
{
}

bool CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadjipaddrindex.is_set
	|| ciiisadjipaddrtype.is_set
	|| ciiisadjipaddraddress.is_set;
}

bool CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadjipaddrindex.yfilter)
	|| ydk::is_set(ciiisadjipaddrtype.yfilter)
	|| ydk::is_set(ciiisadjipaddraddress.yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjIPAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjIPAddrEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciiisadjindex, "ciiISAdjIndex");
    ADD_KEY_TOKEN(ciiisadjipaddrindex, "ciiISAdjIPAddrIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjipaddrindex.is_set || is_set(ciiisadjipaddrindex.yfilter)) leaf_name_data.push_back(ciiisadjipaddrindex.get_name_leafdata());
    if (ciiisadjipaddrtype.is_set || is_set(ciiisadjipaddrtype.yfilter)) leaf_name_data.push_back(ciiisadjipaddrtype.get_name_leafdata());
    if (ciiisadjipaddraddress.is_set || is_set(ciiisadjipaddraddress.yfilter)) leaf_name_data.push_back(ciiisadjipaddraddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiISAdjIPAddrType")
    {
        ciiisadjipaddrtype = value;
        ciiisadjipaddrtype.value_namespace = name_space;
        ciiisadjipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiISAdjIPAddrAddress")
    {
        ciiisadjipaddraddress = value;
        ciiisadjipaddraddress.value_namespace = name_space;
        ciiisadjipaddraddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciiISAdjIPAddrType")
    {
        ciiisadjipaddrtype.yfilter = yfilter;
    }
    if(value_path == "ciiISAdjIPAddrAddress")
    {
        ciiisadjipaddraddress.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdjIPAddrIndex" || name == "ciiISAdjIPAddrType" || name == "ciiISAdjIPAddrAddress")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppTable()
    :
    ciiisadjprotsuppentry(this, {"ciicircindex", "ciiisadjindex", "ciiisadjprotsuppprotocol"})
{

    yang_name = "ciiISAdjProtSuppTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjProtSuppTable::~CiiISAdjProtSuppTable()
{
}

bool CISCOIETFISISMIB::CiiISAdjProtSuppTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiisadjprotsuppentry.len(); index++)
    {
        if(ciiisadjprotsuppentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiISAdjProtSuppTable::has_operation() const
{
    for (std::size_t index=0; index<ciiisadjprotsuppentry.len(); index++)
    {
        if(ciiisadjprotsuppentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjProtSuppTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjProtSuppTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjProtSuppTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjProtSuppTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjProtSuppTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiISAdjProtSuppEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry>();
        ent_->parent = this;
        ciiisadjprotsuppentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjProtSuppTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiisadjprotsuppentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiISAdjProtSuppTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiISAdjProtSuppTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiISAdjProtSuppTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiISAdjProtSuppEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::CiiISAdjProtSuppEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiisadjindex{YType::str, "ciiISAdjIndex"},
    ciiisadjprotsuppprotocol{YType::enumeration, "ciiISAdjProtSuppProtocol"}
{

    yang_name = "ciiISAdjProtSuppEntry"; yang_parent_name = "ciiISAdjProtSuppTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::~CiiISAdjProtSuppEntry()
{
}

bool CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciiisadjindex.is_set
	|| ciiisadjprotsuppprotocol.is_set;
}

bool CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiisadjindex.yfilter)
	|| ydk::is_set(ciiisadjprotsuppprotocol.yfilter);
}

std::string CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiISAdjProtSuppTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiISAdjProtSuppEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciiisadjindex, "ciiISAdjIndex");
    ADD_KEY_TOKEN(ciiisadjprotsuppprotocol, "ciiISAdjProtSuppProtocol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiisadjindex.is_set || is_set(ciiisadjindex.yfilter)) leaf_name_data.push_back(ciiisadjindex.get_name_leafdata());
    if (ciiisadjprotsuppprotocol.is_set || is_set(ciiisadjprotsuppprotocol.yfilter)) leaf_name_data.push_back(ciiisadjprotsuppprotocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiISAdjIndex" || name == "ciiISAdjProtSuppProtocol")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiRATable::CiiRATable()
    :
    ciiraentry(this, {"ciicircindex", "ciiraindex"})
{

    yang_name = "ciiRATable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiRATable::~CiiRATable()
{
}

bool CISCOIETFISISMIB::CiiRATable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiraentry.len(); index++)
    {
        if(ciiraentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiRATable::has_operation() const
{
    for (std::size_t index=0; index<ciiraentry.len(); index++)
    {
        if(ciiraentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiRATable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiRATable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRATable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiRATable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiRATable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiRAEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiRATable::CiiRAEntry>();
        ent_->parent = this;
        ciiraentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiRATable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiraentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiRATable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiRATable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiRATable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiRAEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAEntry()
    :
    ciicircindex{YType::str, "ciiCircIndex"},
    ciiraindex{YType::int32, "ciiRAIndex"},
    ciiraexiststate{YType::enumeration, "ciiRAExistState"},
    ciiraadminstate{YType::enumeration, "ciiRAAdminState"},
    ciiraaddrprefix{YType::str, "ciiRAAddrPrefix"},
    ciiramaptype{YType::enumeration, "ciiRAMapType"},
    ciirametric{YType::int32, "ciiRAMetric"},
    ciirametrictype{YType::enumeration, "ciiRAMetricType"},
    ciirasnpaaddress{YType::str, "ciiRASNPAAddress"},
    ciirasnpamask{YType::str, "ciiRASNPAMask"},
    ciirasnpaprefix{YType::str, "ciiRASNPAPrefix"},
    ciiratype{YType::enumeration, "ciiRAType"}
{

    yang_name = "ciiRAEntry"; yang_parent_name = "ciiRATable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiRATable::CiiRAEntry::~CiiRAEntry()
{
}

bool CISCOIETFISISMIB::CiiRATable::CiiRAEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciicircindex.is_set
	|| ciiraindex.is_set
	|| ciiraexiststate.is_set
	|| ciiraadminstate.is_set
	|| ciiraaddrprefix.is_set
	|| ciiramaptype.is_set
	|| ciirametric.is_set
	|| ciirametrictype.is_set
	|| ciirasnpaaddress.is_set
	|| ciirasnpamask.is_set
	|| ciirasnpaprefix.is_set
	|| ciiratype.is_set;
}

bool CISCOIETFISISMIB::CiiRATable::CiiRAEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciicircindex.yfilter)
	|| ydk::is_set(ciiraindex.yfilter)
	|| ydk::is_set(ciiraexiststate.yfilter)
	|| ydk::is_set(ciiraadminstate.yfilter)
	|| ydk::is_set(ciiraaddrprefix.yfilter)
	|| ydk::is_set(ciiramaptype.yfilter)
	|| ydk::is_set(ciirametric.yfilter)
	|| ydk::is_set(ciirametrictype.yfilter)
	|| ydk::is_set(ciirasnpaaddress.yfilter)
	|| ydk::is_set(ciirasnpamask.yfilter)
	|| ydk::is_set(ciirasnpaprefix.yfilter)
	|| ydk::is_set(ciiratype.yfilter);
}

std::string CISCOIETFISISMIB::CiiRATable::CiiRAEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiRATable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiRATable::CiiRAEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiRAEntry";
    ADD_KEY_TOKEN(ciicircindex, "ciiCircIndex");
    ADD_KEY_TOKEN(ciiraindex, "ciiRAIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiRATable::CiiRAEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciicircindex.is_set || is_set(ciicircindex.yfilter)) leaf_name_data.push_back(ciicircindex.get_name_leafdata());
    if (ciiraindex.is_set || is_set(ciiraindex.yfilter)) leaf_name_data.push_back(ciiraindex.get_name_leafdata());
    if (ciiraexiststate.is_set || is_set(ciiraexiststate.yfilter)) leaf_name_data.push_back(ciiraexiststate.get_name_leafdata());
    if (ciiraadminstate.is_set || is_set(ciiraadminstate.yfilter)) leaf_name_data.push_back(ciiraadminstate.get_name_leafdata());
    if (ciiraaddrprefix.is_set || is_set(ciiraaddrprefix.yfilter)) leaf_name_data.push_back(ciiraaddrprefix.get_name_leafdata());
    if (ciiramaptype.is_set || is_set(ciiramaptype.yfilter)) leaf_name_data.push_back(ciiramaptype.get_name_leafdata());
    if (ciirametric.is_set || is_set(ciirametric.yfilter)) leaf_name_data.push_back(ciirametric.get_name_leafdata());
    if (ciirametrictype.is_set || is_set(ciirametrictype.yfilter)) leaf_name_data.push_back(ciirametrictype.get_name_leafdata());
    if (ciirasnpaaddress.is_set || is_set(ciirasnpaaddress.yfilter)) leaf_name_data.push_back(ciirasnpaaddress.get_name_leafdata());
    if (ciirasnpamask.is_set || is_set(ciirasnpamask.yfilter)) leaf_name_data.push_back(ciirasnpamask.get_name_leafdata());
    if (ciirasnpaprefix.is_set || is_set(ciirasnpaprefix.yfilter)) leaf_name_data.push_back(ciirasnpaprefix.get_name_leafdata());
    if (ciiratype.is_set || is_set(ciiratype.yfilter)) leaf_name_data.push_back(ciiratype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiRATable::CiiRAEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiRATable::CiiRAEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiRATable::CiiRAEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiRAExistState")
    {
        ciiraexiststate = value;
        ciiraexiststate.value_namespace = name_space;
        ciiraexiststate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAAdminState")
    {
        ciiraadminstate = value;
        ciiraadminstate.value_namespace = name_space;
        ciiraadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiRAAddrPrefix")
    {
        ciiraaddrprefix = value;
        ciiraaddrprefix.value_namespace = name_space;
        ciiraaddrprefix.value_namespace_prefix = name_space_prefix;
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

void CISCOIETFISISMIB::CiiRATable::CiiRAEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiCircIndex")
    {
        ciicircindex.yfilter = yfilter;
    }
    if(value_path == "ciiRAIndex")
    {
        ciiraindex.yfilter = yfilter;
    }
    if(value_path == "ciiRAExistState")
    {
        ciiraexiststate.yfilter = yfilter;
    }
    if(value_path == "ciiRAAdminState")
    {
        ciiraadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiRAAddrPrefix")
    {
        ciiraaddrprefix.yfilter = yfilter;
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

bool CISCOIETFISISMIB::CiiRATable::CiiRAEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiCircIndex" || name == "ciiRAIndex" || name == "ciiRAExistState" || name == "ciiRAAdminState" || name == "ciiRAAddrPrefix" || name == "ciiRAMapType" || name == "ciiRAMetric" || name == "ciiRAMetricType" || name == "ciiRASNPAAddress" || name == "ciiRASNPAMask" || name == "ciiRASNPAPrefix" || name == "ciiRAType")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiIPRATable::CiiIPRATable()
    :
    ciiipraentry(this, {"ciiipradesttype", "ciiipradest", "ciiipradestprefixlen", "ciiipranexthopindex"})
{

    yang_name = "ciiIPRATable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiIPRATable::~CiiIPRATable()
{
}

bool CISCOIETFISISMIB::CiiIPRATable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciiipraentry.len(); index++)
    {
        if(ciiipraentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiIPRATable::has_operation() const
{
    for (std::size_t index=0; index<ciiipraentry.len(); index++)
    {
        if(ciiipraentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiIPRATable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiIPRATable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiIPRATable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiIPRATable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiIPRATable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiIPRAEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry>();
        ent_->parent = this;
        ciiipraentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiIPRATable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciiipraentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiIPRATable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiIPRATable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiIPRATable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiIPRAEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRAEntry()
    :
    ciiipradesttype{YType::enumeration, "ciiIPRADestType"},
    ciiipradest{YType::str, "ciiIPRADest"},
    ciiipradestprefixlen{YType::uint32, "ciiIPRADestPrefixLen"},
    ciiipranexthopindex{YType::int32, "ciiIPRANextHopIndex"},
    ciiipranexthoptype{YType::enumeration, "ciiIPRANextHopType"},
    ciiipranexthop{YType::str, "ciiIPRANextHop"},
    ciiipratype{YType::enumeration, "ciiIPRAType"},
    ciiipraexiststate{YType::enumeration, "ciiIPRAExistState"},
    ciiipraadminstate{YType::enumeration, "ciiIPRAAdminState"},
    ciiiprametric{YType::int32, "ciiIPRAMetric"},
    ciiiprametrictype{YType::enumeration, "ciiIPRAMetricType"},
    ciiiprafullmetric{YType::uint32, "ciiIPRAFullMetric"},
    ciiiprasnpaaddress{YType::str, "ciiIPRASNPAAddress"},
    ciiiprasourcetype{YType::enumeration, "ciiIPRASourceType"}
{

    yang_name = "ciiIPRAEntry"; yang_parent_name = "ciiIPRATable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::~CiiIPRAEntry()
{
}

bool CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciiipradesttype.is_set
	|| ciiipradest.is_set
	|| ciiipradestprefixlen.is_set
	|| ciiipranexthopindex.is_set
	|| ciiipranexthoptype.is_set
	|| ciiipranexthop.is_set
	|| ciiipratype.is_set
	|| ciiipraexiststate.is_set
	|| ciiipraadminstate.is_set
	|| ciiiprametric.is_set
	|| ciiiprametrictype.is_set
	|| ciiiprafullmetric.is_set
	|| ciiiprasnpaaddress.is_set
	|| ciiiprasourcetype.is_set;
}

bool CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciiipradesttype.yfilter)
	|| ydk::is_set(ciiipradest.yfilter)
	|| ydk::is_set(ciiipradestprefixlen.yfilter)
	|| ydk::is_set(ciiipranexthopindex.yfilter)
	|| ydk::is_set(ciiipranexthoptype.yfilter)
	|| ydk::is_set(ciiipranexthop.yfilter)
	|| ydk::is_set(ciiipratype.yfilter)
	|| ydk::is_set(ciiipraexiststate.yfilter)
	|| ydk::is_set(ciiipraadminstate.yfilter)
	|| ydk::is_set(ciiiprametric.yfilter)
	|| ydk::is_set(ciiiprametrictype.yfilter)
	|| ydk::is_set(ciiiprafullmetric.yfilter)
	|| ydk::is_set(ciiiprasnpaaddress.yfilter)
	|| ydk::is_set(ciiiprasourcetype.yfilter);
}

std::string CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiIPRATable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiIPRAEntry";
    ADD_KEY_TOKEN(ciiipradesttype, "ciiIPRADestType");
    ADD_KEY_TOKEN(ciiipradest, "ciiIPRADest");
    ADD_KEY_TOKEN(ciiipradestprefixlen, "ciiIPRADestPrefixLen");
    ADD_KEY_TOKEN(ciiipranexthopindex, "ciiIPRANextHopIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciiipradesttype.is_set || is_set(ciiipradesttype.yfilter)) leaf_name_data.push_back(ciiipradesttype.get_name_leafdata());
    if (ciiipradest.is_set || is_set(ciiipradest.yfilter)) leaf_name_data.push_back(ciiipradest.get_name_leafdata());
    if (ciiipradestprefixlen.is_set || is_set(ciiipradestprefixlen.yfilter)) leaf_name_data.push_back(ciiipradestprefixlen.get_name_leafdata());
    if (ciiipranexthopindex.is_set || is_set(ciiipranexthopindex.yfilter)) leaf_name_data.push_back(ciiipranexthopindex.get_name_leafdata());
    if (ciiipranexthoptype.is_set || is_set(ciiipranexthoptype.yfilter)) leaf_name_data.push_back(ciiipranexthoptype.get_name_leafdata());
    if (ciiipranexthop.is_set || is_set(ciiipranexthop.yfilter)) leaf_name_data.push_back(ciiipranexthop.get_name_leafdata());
    if (ciiipratype.is_set || is_set(ciiipratype.yfilter)) leaf_name_data.push_back(ciiipratype.get_name_leafdata());
    if (ciiipraexiststate.is_set || is_set(ciiipraexiststate.yfilter)) leaf_name_data.push_back(ciiipraexiststate.get_name_leafdata());
    if (ciiipraadminstate.is_set || is_set(ciiipraadminstate.yfilter)) leaf_name_data.push_back(ciiipraadminstate.get_name_leafdata());
    if (ciiiprametric.is_set || is_set(ciiiprametric.yfilter)) leaf_name_data.push_back(ciiiprametric.get_name_leafdata());
    if (ciiiprametrictype.is_set || is_set(ciiiprametrictype.yfilter)) leaf_name_data.push_back(ciiiprametrictype.get_name_leafdata());
    if (ciiiprafullmetric.is_set || is_set(ciiiprafullmetric.yfilter)) leaf_name_data.push_back(ciiiprafullmetric.get_name_leafdata());
    if (ciiiprasnpaaddress.is_set || is_set(ciiiprasnpaaddress.yfilter)) leaf_name_data.push_back(ciiiprasnpaaddress.get_name_leafdata());
    if (ciiiprasourcetype.is_set || is_set(ciiiprasourcetype.yfilter)) leaf_name_data.push_back(ciiiprasourcetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiIPRANextHopType")
    {
        ciiipranexthoptype = value;
        ciiipranexthoptype.value_namespace = name_space;
        ciiipranexthoptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRANextHop")
    {
        ciiipranexthop = value;
        ciiipranexthop.value_namespace = name_space;
        ciiipranexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAType")
    {
        ciiipratype = value;
        ciiipratype.value_namespace = name_space;
        ciiipratype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAExistState")
    {
        ciiipraexiststate = value;
        ciiipraexiststate.value_namespace = name_space;
        ciiipraexiststate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiIPRAAdminState")
    {
        ciiipraadminstate = value;
        ciiipraadminstate.value_namespace = name_space;
        ciiipraadminstate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciiIPRAFullMetric")
    {
        ciiiprafullmetric = value;
        ciiiprafullmetric.value_namespace = name_space;
        ciiiprafullmetric.value_namespace_prefix = name_space_prefix;
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
}

void CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciiIPRANextHopType")
    {
        ciiipranexthoptype.yfilter = yfilter;
    }
    if(value_path == "ciiIPRANextHop")
    {
        ciiipranexthop.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAType")
    {
        ciiipratype.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAExistState")
    {
        ciiipraexiststate.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAAdminState")
    {
        ciiipraadminstate.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAMetric")
    {
        ciiiprametric.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAMetricType")
    {
        ciiiprametrictype.yfilter = yfilter;
    }
    if(value_path == "ciiIPRAFullMetric")
    {
        ciiiprafullmetric.yfilter = yfilter;
    }
    if(value_path == "ciiIPRASNPAAddress")
    {
        ciiiprasnpaaddress.yfilter = yfilter;
    }
    if(value_path == "ciiIPRASourceType")
    {
        ciiiprasourcetype.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiIPRADestType" || name == "ciiIPRADest" || name == "ciiIPRADestPrefixLen" || name == "ciiIPRANextHopIndex" || name == "ciiIPRANextHopType" || name == "ciiIPRANextHop" || name == "ciiIPRAType" || name == "ciiIPRAExistState" || name == "ciiIPRAAdminState" || name == "ciiIPRAMetric" || name == "ciiIPRAMetricType" || name == "ciiIPRAFullMetric" || name == "ciiIPRASNPAAddress" || name == "ciiIPRASourceType")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryTable()
    :
    ciilspsummaryentry(this, {"ciilsplevel", "ciilspid"})
{

    yang_name = "ciiLSPSummaryTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiLSPSummaryTable::~CiiLSPSummaryTable()
{
}

bool CISCOIETFISISMIB::CiiLSPSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciilspsummaryentry.len(); index++)
    {
        if(ciilspsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiLSPSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<ciilspsummaryentry.len(); index++)
    {
        if(ciilspsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiLSPSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiLSPSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiLSPSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiLSPSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiLSPSummaryEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry>();
        ent_->parent = this;
        ciilspsummaryentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiLSPSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciilspsummaryentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiLSPSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiLSPSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiLSPSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPSummaryEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::CiiLSPSummaryEntry()
    :
    ciilsplevel{YType::enumeration, "ciiLSPLevel"},
    ciilspid{YType::str, "ciiLSPID"},
    ciilspseq{YType::uint32, "ciiLSPSeq"},
    ciilspzerolife{YType::boolean, "ciiLSPZeroLife"},
    ciilspchecksum{YType::uint32, "ciiLSPChecksum"},
    ciilsplifetimeremain{YType::uint32, "ciiLSPLifetimeRemain"},
    ciilsppdulength{YType::uint32, "ciiLSPPDULength"},
    ciilspattributes{YType::uint32, "ciiLSPAttributes"}
{

    yang_name = "ciiLSPSummaryEntry"; yang_parent_name = "ciiLSPSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::~CiiLSPSummaryEntry()
{
}

bool CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciilsplevel.is_set
	|| ciilspid.is_set
	|| ciilspseq.is_set
	|| ciilspzerolife.is_set
	|| ciilspchecksum.is_set
	|| ciilsplifetimeremain.is_set
	|| ciilsppdulength.is_set
	|| ciilspattributes.is_set;
}

bool CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciilsplevel.yfilter)
	|| ydk::is_set(ciilspid.yfilter)
	|| ydk::is_set(ciilspseq.yfilter)
	|| ydk::is_set(ciilspzerolife.yfilter)
	|| ydk::is_set(ciilspchecksum.yfilter)
	|| ydk::is_set(ciilsplifetimeremain.yfilter)
	|| ydk::is_set(ciilsppdulength.yfilter)
	|| ydk::is_set(ciilspattributes.yfilter);
}

std::string CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiLSPSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPSummaryEntry";
    ADD_KEY_TOKEN(ciilsplevel, "ciiLSPLevel");
    ADD_KEY_TOKEN(ciilspid, "ciiLSPID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciilsplevel.is_set || is_set(ciilsplevel.yfilter)) leaf_name_data.push_back(ciilsplevel.get_name_leafdata());
    if (ciilspid.is_set || is_set(ciilspid.yfilter)) leaf_name_data.push_back(ciilspid.get_name_leafdata());
    if (ciilspseq.is_set || is_set(ciilspseq.yfilter)) leaf_name_data.push_back(ciilspseq.get_name_leafdata());
    if (ciilspzerolife.is_set || is_set(ciilspzerolife.yfilter)) leaf_name_data.push_back(ciilspzerolife.get_name_leafdata());
    if (ciilspchecksum.is_set || is_set(ciilspchecksum.yfilter)) leaf_name_data.push_back(ciilspchecksum.get_name_leafdata());
    if (ciilsplifetimeremain.is_set || is_set(ciilsplifetimeremain.yfilter)) leaf_name_data.push_back(ciilsplifetimeremain.get_name_leafdata());
    if (ciilsppdulength.is_set || is_set(ciilsppdulength.yfilter)) leaf_name_data.push_back(ciilsppdulength.get_name_leafdata());
    if (ciilspattributes.is_set || is_set(ciilspattributes.yfilter)) leaf_name_data.push_back(ciilspattributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiLSPAttributes")
    {
        ciilspattributes = value;
        ciilspattributes.value_namespace = name_space;
        ciilspattributes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciiLSPLevel")
    {
        ciilsplevel.yfilter = yfilter;
    }
    if(value_path == "ciiLSPID")
    {
        ciilspid.yfilter = yfilter;
    }
    if(value_path == "ciiLSPSeq")
    {
        ciilspseq.yfilter = yfilter;
    }
    if(value_path == "ciiLSPZeroLife")
    {
        ciilspzerolife.yfilter = yfilter;
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
    if(value_path == "ciiLSPAttributes")
    {
        ciilspattributes.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPLevel" || name == "ciiLSPID" || name == "ciiLSPSeq" || name == "ciiLSPZeroLife" || name == "ciiLSPChecksum" || name == "ciiLSPLifetimeRemain" || name == "ciiLSPPDULength" || name == "ciiLSPAttributes")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVTable()
    :
    ciilsptlventry(this, {"ciilsplevel", "ciilspid", "ciilsptlvindex"})
{

    yang_name = "ciiLSPTLVTable"; yang_parent_name = "CISCO-IETF-ISIS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiLSPTLVTable::~CiiLSPTLVTable()
{
}

bool CISCOIETFISISMIB::CiiLSPTLVTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciilsptlventry.len(); index++)
    {
        if(ciilsptlventry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFISISMIB::CiiLSPTLVTable::has_operation() const
{
    for (std::size_t index=0; index<ciilsptlventry.len(); index++)
    {
        if(ciilsptlventry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFISISMIB::CiiLSPTLVTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiLSPTLVTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPTLVTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiLSPTLVTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiLSPTLVTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciiLSPTLVEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry>();
        ent_->parent = this;
        ciilsptlventry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiLSPTLVTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciilsptlventry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFISISMIB::CiiLSPTLVTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFISISMIB::CiiLSPTLVTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFISISMIB::CiiLSPTLVTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPTLVEntry")
        return true;
    return false;
}

CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::CiiLSPTLVEntry()
    :
    ciilsplevel{YType::enumeration, "ciiLSPLevel"},
    ciilspid{YType::str, "ciiLSPID"},
    ciilsptlvindex{YType::uint32, "ciiLSPTLVIndex"},
    ciilsptlvseq{YType::uint32, "ciiLSPTLVSeq"},
    ciilsptlvchecksum{YType::uint32, "ciiLSPTLVChecksum"},
    ciilsptlvtype{YType::uint32, "ciiLSPTLVType"},
    ciilsptlvlen{YType::uint32, "ciiLSPTLVLen"},
    ciilsptlvvalue{YType::str, "ciiLSPTLVValue"}
{

    yang_name = "ciiLSPTLVEntry"; yang_parent_name = "ciiLSPTLVTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::~CiiLSPTLVEntry()
{
}

bool CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciilsplevel.is_set
	|| ciilspid.is_set
	|| ciilsptlvindex.is_set
	|| ciilsptlvseq.is_set
	|| ciilsptlvchecksum.is_set
	|| ciilsptlvtype.is_set
	|| ciilsptlvlen.is_set
	|| ciilsptlvvalue.is_set;
}

bool CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciilsplevel.yfilter)
	|| ydk::is_set(ciilspid.yfilter)
	|| ydk::is_set(ciilsptlvindex.yfilter)
	|| ydk::is_set(ciilsptlvseq.yfilter)
	|| ydk::is_set(ciilsptlvchecksum.yfilter)
	|| ydk::is_set(ciilsptlvtype.yfilter)
	|| ydk::is_set(ciilsptlvlen.yfilter)
	|| ydk::is_set(ciilsptlvvalue.yfilter);
}

std::string CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ISIS-MIB:CISCO-IETF-ISIS-MIB/ciiLSPTLVTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciiLSPTLVEntry";
    ADD_KEY_TOKEN(ciilsplevel, "ciiLSPLevel");
    ADD_KEY_TOKEN(ciilspid, "ciiLSPID");
    ADD_KEY_TOKEN(ciilsptlvindex, "ciiLSPTLVIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciilsplevel.is_set || is_set(ciilsplevel.yfilter)) leaf_name_data.push_back(ciilsplevel.get_name_leafdata());
    if (ciilspid.is_set || is_set(ciilspid.yfilter)) leaf_name_data.push_back(ciilspid.get_name_leafdata());
    if (ciilsptlvindex.is_set || is_set(ciilsptlvindex.yfilter)) leaf_name_data.push_back(ciilsptlvindex.get_name_leafdata());
    if (ciilsptlvseq.is_set || is_set(ciilsptlvseq.yfilter)) leaf_name_data.push_back(ciilsptlvseq.get_name_leafdata());
    if (ciilsptlvchecksum.is_set || is_set(ciilsptlvchecksum.yfilter)) leaf_name_data.push_back(ciilsptlvchecksum.get_name_leafdata());
    if (ciilsptlvtype.is_set || is_set(ciilsptlvtype.yfilter)) leaf_name_data.push_back(ciilsptlvtype.get_name_leafdata());
    if (ciilsptlvlen.is_set || is_set(ciilsptlvlen.yfilter)) leaf_name_data.push_back(ciilsptlvlen.get_name_leafdata());
    if (ciilsptlvvalue.is_set || is_set(ciilsptlvvalue.yfilter)) leaf_name_data.push_back(ciilsptlvvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciiLSPTLVSeq")
    {
        ciilsptlvseq = value;
        ciilsptlvseq.value_namespace = name_space;
        ciilsptlvseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVChecksum")
    {
        ciilsptlvchecksum = value;
        ciilsptlvchecksum.value_namespace = name_space;
        ciilsptlvchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVType")
    {
        ciilsptlvtype = value;
        ciilsptlvtype.value_namespace = name_space;
        ciilsptlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVLen")
    {
        ciilsptlvlen = value;
        ciilsptlvlen.value_namespace = name_space;
        ciilsptlvlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciiLSPTLVValue")
    {
        ciilsptlvvalue = value;
        ciilsptlvvalue.value_namespace = name_space;
        ciilsptlvvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciiLSPTLVSeq")
    {
        ciilsptlvseq.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVChecksum")
    {
        ciilsptlvchecksum.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVType")
    {
        ciilsptlvtype.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVLen")
    {
        ciilsptlvlen.yfilter = yfilter;
    }
    if(value_path == "ciiLSPTLVValue")
    {
        ciilsptlvvalue.yfilter = yfilter;
    }
}

bool CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciiLSPLevel" || name == "ciiLSPID" || name == "ciiLSPTLVIndex" || name == "ciiLSPTLVSeq" || name == "ciiLSPTLVChecksum" || name == "ciiLSPTLVType" || name == "ciiLSPTLVLen" || name == "ciiLSPTLVValue")
        return true;
    return false;
}

const Enum::YLeaf CiiAdminState::on {1, "on"};
const Enum::YLeaf CiiAdminState::off {2, "off"};

const Enum::YLeaf CiiLevelState::off {1, "off"};
const Enum::YLeaf CiiLevelState::on {2, "on"};
const Enum::YLeaf CiiLevelState::waiting {3, "waiting"};
const Enum::YLeaf CiiLevelState::overloaded {4, "overloaded"};

const Enum::YLeaf CiiSupportedProtocol::iso8473 {129, "iso8473"};
const Enum::YLeaf CiiSupportedProtocol::ipV6 {142, "ipV6"};
const Enum::YLeaf CiiSupportedProtocol::ip {204, "ip"};

const Enum::YLeaf CiiMetricType::internal {1, "internal"};
const Enum::YLeaf CiiMetricType::external {2, "external"};

const Enum::YLeaf CiiMetricStyle::narrow {1, "narrow"};
const Enum::YLeaf CiiMetricStyle::wide {2, "wide"};
const Enum::YLeaf CiiMetricStyle::both {3, "both"};

const Enum::YLeaf CiiISLevel::none {0, "none"};
const Enum::YLeaf CiiISLevel::area {1, "area"};
const Enum::YLeaf CiiISLevel::domain {2, "domain"};

const Enum::YLeaf CISCOIETFISISMIB::CiiSysObject::CiiSysVersion::unknown {0, "unknown"};
const Enum::YLeaf CISCOIETFISISMIB::CiiSysObject::CiiSysVersion::one {1, "one"};

const Enum::YLeaf CISCOIETFISISMIB::CiiSysObject::CiiSysType::level1IS {1, "level1IS"};
const Enum::YLeaf CISCOIETFISISMIB::CiiSysObject::CiiSysType::level2IS {2, "level2IS"};
const Enum::YLeaf CISCOIETFISISMIB::CiiSysObject::CiiSysType::level1L2IS {3, "level1L2IS"};

const Enum::YLeaf CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::CiiSysLevelIndex::level1IS {1, "level1IS"};
const Enum::YLeaf CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::CiiSysLevelIndex::level2IS {2, "level2IS"};

const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircType::broadcast {1, "broadcast"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircType::ptToPt {2, "ptToPt"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircType::staticIn {3, "staticIn"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircType::staticOut {4, "staticOut"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircType::dA {5, "dA"};

const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircLevel::level1 {1, "level1"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircLevel::level2 {2, "level2"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircLevel::level1L2 {3, "level1L2"};

const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircMeshGroupEnabled::inactive {1, "inactive"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircMeshGroupEnabled::blocked {2, "blocked"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircMeshGroupEnabled::set {3, "set"};

const Enum::YLeaf CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::CiiCircLevelIndex::level1IS {1, "level1IS"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::CiiCircLevelIndex::level2IS {2, "level2IS"};

const Enum::YLeaf CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::CiiSysStatLevel::level1IS {1, "level1IS"};
const Enum::YLeaf CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::CiiSysStatLevel::level2IS {2, "level2IS"};

const Enum::YLeaf CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::CiiCircuitType::lanlevel1 {1, "lanlevel1"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::CiiCircuitType::lanlevel2 {2, "lanlevel2"};
const Enum::YLeaf CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::CiiCircuitType::p2pcircuit {3, "p2pcircuit"};

const Enum::YLeaf CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::CiiPacketCountLevel::level1 {1, "level1"};
const Enum::YLeaf CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::CiiPacketCountLevel::level2 {2, "level2"};

const Enum::YLeaf CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::CiiPacketCountDirection::sending {1, "sending"};
const Enum::YLeaf CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::CiiPacketCountDirection::receiving {2, "receiving"};

const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjState::down {1, "down"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjState::initializing {2, "initializing"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjState::up {3, "up"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjState::failed {4, "failed"};

const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdj3WayState::up {0, "up"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdj3WayState::initializing {1, "initializing"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdj3WayState::down {2, "down"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdj3WayState::failed {3, "failed"};

const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjNeighSysType::l1IntermediateSystem {1, "l1IntermediateSystem"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjNeighSysType::l2IntermediateSystem {2, "l2IntermediateSystem"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjNeighSysType::l1L2IntermediateSystem {3, "l1L2IntermediateSystem"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjNeighSysType::unknown {4, "unknown"};

const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjUsage::level1 {1, "level1"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjUsage::level2 {2, "level2"};
const Enum::YLeaf CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjUsage::level1and2 {3, "level1and2"};

const Enum::YLeaf CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAMapType::none {1, "none"};
const Enum::YLeaf CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAMapType::explicit_ {2, "explicit"};
const Enum::YLeaf CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAMapType::extractIDI {3, "extractIDI"};
const Enum::YLeaf CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAMapType::extractDSP {4, "extractDSP"};

const Enum::YLeaf CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAType::manual {1, "manual"};
const Enum::YLeaf CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAType::automatic {2, "automatic"};

const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRAType::manual {1, "manual"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRAType::automatic {2, "automatic"};

const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::static_ {1, "static"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::direct {2, "direct"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::ospfv2 {3, "ospfv2"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::ospfv3 {4, "ospfv3"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::isis {5, "isis"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::rip {6, "rip"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::igrp {7, "igrp"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::eigrp {8, "eigrp"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::bgp {9, "bgp"};
const Enum::YLeaf CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType::other {10, "other"};


}
}

