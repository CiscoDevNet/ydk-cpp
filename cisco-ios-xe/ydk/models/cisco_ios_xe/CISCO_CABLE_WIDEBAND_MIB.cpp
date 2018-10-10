
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CABLE_WIDEBAND_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CABLE_WIDEBAND_MIB {

CISCOCABLEWIDEBANDMIB::CISCOCABLEWIDEBANDMIB()
    :
    ciscocablewidebandmibobjects(std::make_shared<CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects>())
    , ccwbrfchanneltable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable>())
    , ccwbwbtorfmappingtable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable>())
    , ccwbwbtonbmappingtable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable>())
    , ccwbwbbondgrptable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable>())
    , ccwbwbcmstatustable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable>())
    , ccwbwbcmstatusexttable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable>())
    , ccwbfibernodedescrtable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable>())
    , ccwbfibernodetable(std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable>())
{
    ciscocablewidebandmibobjects->parent = this;
    ccwbrfchanneltable->parent = this;
    ccwbwbtorfmappingtable->parent = this;
    ccwbwbtonbmappingtable->parent = this;
    ccwbwbbondgrptable->parent = this;
    ccwbwbcmstatustable->parent = this;
    ccwbwbcmstatusexttable->parent = this;
    ccwbfibernodedescrtable->parent = this;
    ccwbfibernodetable->parent = this;

    yang_name = "CISCO-CABLE-WIDEBAND-MIB"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::~CISCOCABLEWIDEBANDMIB()
{
}

bool CISCOCABLEWIDEBANDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscocablewidebandmibobjects !=  nullptr && ciscocablewidebandmibobjects->has_data())
	|| (ccwbrfchanneltable !=  nullptr && ccwbrfchanneltable->has_data())
	|| (ccwbwbtorfmappingtable !=  nullptr && ccwbwbtorfmappingtable->has_data())
	|| (ccwbwbtonbmappingtable !=  nullptr && ccwbwbtonbmappingtable->has_data())
	|| (ccwbwbbondgrptable !=  nullptr && ccwbwbbondgrptable->has_data())
	|| (ccwbwbcmstatustable !=  nullptr && ccwbwbcmstatustable->has_data())
	|| (ccwbwbcmstatusexttable !=  nullptr && ccwbwbcmstatusexttable->has_data())
	|| (ccwbfibernodedescrtable !=  nullptr && ccwbfibernodedescrtable->has_data())
	|| (ccwbfibernodetable !=  nullptr && ccwbfibernodetable->has_data());
}

bool CISCOCABLEWIDEBANDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscocablewidebandmibobjects !=  nullptr && ciscocablewidebandmibobjects->has_operation())
	|| (ccwbrfchanneltable !=  nullptr && ccwbrfchanneltable->has_operation())
	|| (ccwbwbtorfmappingtable !=  nullptr && ccwbwbtorfmappingtable->has_operation())
	|| (ccwbwbtonbmappingtable !=  nullptr && ccwbwbtonbmappingtable->has_operation())
	|| (ccwbwbbondgrptable !=  nullptr && ccwbwbbondgrptable->has_operation())
	|| (ccwbwbcmstatustable !=  nullptr && ccwbwbcmstatustable->has_operation())
	|| (ccwbwbcmstatusexttable !=  nullptr && ccwbwbcmstatusexttable->has_operation())
	|| (ccwbfibernodedescrtable !=  nullptr && ccwbfibernodedescrtable->has_operation())
	|| (ccwbfibernodetable !=  nullptr && ccwbfibernodetable->has_operation());
}

std::string CISCOCABLEWIDEBANDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoCableWidebandMIBObjects")
    {
        if(ciscocablewidebandmibobjects == nullptr)
        {
            ciscocablewidebandmibobjects = std::make_shared<CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects>();
        }
        return ciscocablewidebandmibobjects;
    }

    if(child_yang_name == "ccwbRFChannelTable")
    {
        if(ccwbrfchanneltable == nullptr)
        {
            ccwbrfchanneltable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable>();
        }
        return ccwbrfchanneltable;
    }

    if(child_yang_name == "ccwbWBtoRFMappingTable")
    {
        if(ccwbwbtorfmappingtable == nullptr)
        {
            ccwbwbtorfmappingtable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable>();
        }
        return ccwbwbtorfmappingtable;
    }

    if(child_yang_name == "ccwbWBtoNBMappingTable")
    {
        if(ccwbwbtonbmappingtable == nullptr)
        {
            ccwbwbtonbmappingtable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable>();
        }
        return ccwbwbtonbmappingtable;
    }

    if(child_yang_name == "ccwbWBBondGrpTable")
    {
        if(ccwbwbbondgrptable == nullptr)
        {
            ccwbwbbondgrptable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable>();
        }
        return ccwbwbbondgrptable;
    }

    if(child_yang_name == "ccwbWBCmStatusTable")
    {
        if(ccwbwbcmstatustable == nullptr)
        {
            ccwbwbcmstatustable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable>();
        }
        return ccwbwbcmstatustable;
    }

    if(child_yang_name == "ccwbWBCmStatusExtTable")
    {
        if(ccwbwbcmstatusexttable == nullptr)
        {
            ccwbwbcmstatusexttable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable>();
        }
        return ccwbwbcmstatusexttable;
    }

    if(child_yang_name == "ccwbFiberNodeDescrTable")
    {
        if(ccwbfibernodedescrtable == nullptr)
        {
            ccwbfibernodedescrtable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable>();
        }
        return ccwbfibernodedescrtable;
    }

    if(child_yang_name == "ccwbFiberNodeTable")
    {
        if(ccwbfibernodetable == nullptr)
        {
            ccwbfibernodetable = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable>();
        }
        return ccwbfibernodetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscocablewidebandmibobjects != nullptr)
    {
        children["ciscoCableWidebandMIBObjects"] = ciscocablewidebandmibobjects;
    }

    if(ccwbrfchanneltable != nullptr)
    {
        children["ccwbRFChannelTable"] = ccwbrfchanneltable;
    }

    if(ccwbwbtorfmappingtable != nullptr)
    {
        children["ccwbWBtoRFMappingTable"] = ccwbwbtorfmappingtable;
    }

    if(ccwbwbtonbmappingtable != nullptr)
    {
        children["ccwbWBtoNBMappingTable"] = ccwbwbtonbmappingtable;
    }

    if(ccwbwbbondgrptable != nullptr)
    {
        children["ccwbWBBondGrpTable"] = ccwbwbbondgrptable;
    }

    if(ccwbwbcmstatustable != nullptr)
    {
        children["ccwbWBCmStatusTable"] = ccwbwbcmstatustable;
    }

    if(ccwbwbcmstatusexttable != nullptr)
    {
        children["ccwbWBCmStatusExtTable"] = ccwbwbcmstatusexttable;
    }

    if(ccwbfibernodedescrtable != nullptr)
    {
        children["ccwbFiberNodeDescrTable"] = ccwbfibernodedescrtable;
    }

    if(ccwbfibernodetable != nullptr)
    {
        children["ccwbFiberNodeTable"] = ccwbfibernodetable;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::clone_ptr() const
{
    return std::make_shared<CISCOCABLEWIDEBANDMIB>();
}

std::string CISCOCABLEWIDEBANDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCABLEWIDEBANDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCABLEWIDEBANDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCABLEWIDEBANDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCABLEWIDEBANDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoCableWidebandMIBObjects" || name == "ccwbRFChannelTable" || name == "ccwbWBtoRFMappingTable" || name == "ccwbWBtoNBMappingTable" || name == "ccwbWBBondGrpTable" || name == "ccwbWBCmStatusTable" || name == "ccwbWBCmStatusExtTable" || name == "ccwbFiberNodeDescrTable" || name == "ccwbFiberNodeTable")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::CiscoCableWidebandMIBObjects()
    :
    ccwbrfchanutilinterval{YType::uint32, "ccwbRFChanUtilInterval"},
    ccwbsfplinktrapenable{YType::int32, "ccwbSFPLinkTrapEnable"}
{

    yang_name = "ciscoCableWidebandMIBObjects"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::~CiscoCableWidebandMIBObjects()
{
}

bool CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::has_data() const
{
    if (is_presence_container) return true;
    return ccwbrfchanutilinterval.is_set
	|| ccwbsfplinktrapenable.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccwbrfchanutilinterval.yfilter)
	|| ydk::is_set(ccwbsfplinktrapenable.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoCableWidebandMIBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccwbrfchanutilinterval.is_set || is_set(ccwbrfchanutilinterval.yfilter)) leaf_name_data.push_back(ccwbrfchanutilinterval.get_name_leafdata());
    if (ccwbsfplinktrapenable.is_set || is_set(ccwbsfplinktrapenable.yfilter)) leaf_name_data.push_back(ccwbsfplinktrapenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccwbRFChanUtilInterval")
    {
        ccwbrfchanutilinterval = value;
        ccwbrfchanutilinterval.value_namespace = name_space;
        ccwbrfchanutilinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbSFPLinkTrapEnable")
    {
        ccwbsfplinktrapenable = value;
        ccwbsfplinktrapenable.value_namespace = name_space;
        ccwbsfplinktrapenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccwbRFChanUtilInterval")
    {
        ccwbrfchanutilinterval.yfilter = yfilter;
    }
    if(value_path == "ccwbSFPLinkTrapEnable")
    {
        ccwbsfplinktrapenable.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CiscoCableWidebandMIBObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbRFChanUtilInterval" || name == "ccwbSFPLinkTrapEnable")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelTable()
    :
    ccwbrfchannelentry(this, {"entphysicalindex", "ccwbrfchannelnum"})
{

    yang_name = "ccwbRFChannelTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::~CcwbRFChannelTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbrfchannelentry.len(); index++)
    {
        if(ccwbrfchannelentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbrfchannelentry.len(); index++)
    {
        if(ccwbrfchannelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbRFChannelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbRFChannelEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry>();
        c->parent = this;
        ccwbrfchannelentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbrfchannelentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbRFChannelEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ccwbrfchannelnum{YType::uint32, "ccwbRFChannelNum"},
    ccwbrfchannelfrequency{YType::uint32, "ccwbRFChannelFrequency"},
    ccwbrfchannelwidth{YType::uint32, "ccwbRFChannelWidth"},
    ccwbrfchannelmodulation{YType::enumeration, "ccwbRFChannelModulation"},
    ccwbrfchannelannex{YType::enumeration, "ccwbRFChannelAnnex"},
    ccwbrfchannelmpegpkts{YType::uint64, "ccwbRFChannelMpegPkts"},
    ccwbrfchannelstoragetype{YType::enumeration, "ccwbRFChannelStorageType"},
    ccwbrfchannelrowstatus{YType::enumeration, "ccwbRFChannelRowStatus"},
    ccwbrfchannelutilization{YType::uint32, "ccwbRFChannelUtilization"},
    ccwbrfchannelfrequencyrev1{YType::uint32, "ccwbRFChannelFrequencyRev1"},
    ccwbrfchanqamipaddresstype{YType::enumeration, "ccwbRFChanQamIPAddressType"},
    ccwbrfchanqamipaddress{YType::str, "ccwbRFChanQamIPAddress"},
    ccwbrfchanqammacaddress{YType::str, "ccwbRFChanQamMacAddress"},
    ccwbrfchanqamudpport{YType::uint16, "ccwbRFChanQamUdpPort"},
    ccwbrfchanqamtos{YType::uint32, "ccwbRFChanQamTos"},
    ccwbrfchanqamvlanid{YType::uint32, "ccwbRFChanQamVlanId"},
    ccwbrfchanqamprioritybits{YType::uint32, "ccwbRFChanQamPriorityBits"},
    ccwbrfchanqamdepiremoteid{YType::uint32, "ccwbRFChanQamDepiRemoteId"},
    ccwbrfchanqamdepitunnel{YType::str, "ccwbRFChanQamDepiTunnel"},
    ccwbrfchanqamtsid{YType::uint32, "ccwbRFChanQamTsid"}
{

    yang_name = "ccwbRFChannelEntry"; yang_parent_name = "ccwbRFChannelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::~CcwbRFChannelEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ccwbrfchannelnum.is_set
	|| ccwbrfchannelfrequency.is_set
	|| ccwbrfchannelwidth.is_set
	|| ccwbrfchannelmodulation.is_set
	|| ccwbrfchannelannex.is_set
	|| ccwbrfchannelmpegpkts.is_set
	|| ccwbrfchannelstoragetype.is_set
	|| ccwbrfchannelrowstatus.is_set
	|| ccwbrfchannelutilization.is_set
	|| ccwbrfchannelfrequencyrev1.is_set
	|| ccwbrfchanqamipaddresstype.is_set
	|| ccwbrfchanqamipaddress.is_set
	|| ccwbrfchanqammacaddress.is_set
	|| ccwbrfchanqamudpport.is_set
	|| ccwbrfchanqamtos.is_set
	|| ccwbrfchanqamvlanid.is_set
	|| ccwbrfchanqamprioritybits.is_set
	|| ccwbrfchanqamdepiremoteid.is_set
	|| ccwbrfchanqamdepitunnel.is_set
	|| ccwbrfchanqamtsid.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ccwbrfchannelnum.yfilter)
	|| ydk::is_set(ccwbrfchannelfrequency.yfilter)
	|| ydk::is_set(ccwbrfchannelwidth.yfilter)
	|| ydk::is_set(ccwbrfchannelmodulation.yfilter)
	|| ydk::is_set(ccwbrfchannelannex.yfilter)
	|| ydk::is_set(ccwbrfchannelmpegpkts.yfilter)
	|| ydk::is_set(ccwbrfchannelstoragetype.yfilter)
	|| ydk::is_set(ccwbrfchannelrowstatus.yfilter)
	|| ydk::is_set(ccwbrfchannelutilization.yfilter)
	|| ydk::is_set(ccwbrfchannelfrequencyrev1.yfilter)
	|| ydk::is_set(ccwbrfchanqamipaddresstype.yfilter)
	|| ydk::is_set(ccwbrfchanqamipaddress.yfilter)
	|| ydk::is_set(ccwbrfchanqammacaddress.yfilter)
	|| ydk::is_set(ccwbrfchanqamudpport.yfilter)
	|| ydk::is_set(ccwbrfchanqamtos.yfilter)
	|| ydk::is_set(ccwbrfchanqamvlanid.yfilter)
	|| ydk::is_set(ccwbrfchanqamprioritybits.yfilter)
	|| ydk::is_set(ccwbrfchanqamdepiremoteid.yfilter)
	|| ydk::is_set(ccwbrfchanqamdepitunnel.yfilter)
	|| ydk::is_set(ccwbrfchanqamtsid.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbRFChannelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbRFChannelEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ccwbrfchannelnum, "ccwbRFChannelNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ccwbrfchannelnum.is_set || is_set(ccwbrfchannelnum.yfilter)) leaf_name_data.push_back(ccwbrfchannelnum.get_name_leafdata());
    if (ccwbrfchannelfrequency.is_set || is_set(ccwbrfchannelfrequency.yfilter)) leaf_name_data.push_back(ccwbrfchannelfrequency.get_name_leafdata());
    if (ccwbrfchannelwidth.is_set || is_set(ccwbrfchannelwidth.yfilter)) leaf_name_data.push_back(ccwbrfchannelwidth.get_name_leafdata());
    if (ccwbrfchannelmodulation.is_set || is_set(ccwbrfchannelmodulation.yfilter)) leaf_name_data.push_back(ccwbrfchannelmodulation.get_name_leafdata());
    if (ccwbrfchannelannex.is_set || is_set(ccwbrfchannelannex.yfilter)) leaf_name_data.push_back(ccwbrfchannelannex.get_name_leafdata());
    if (ccwbrfchannelmpegpkts.is_set || is_set(ccwbrfchannelmpegpkts.yfilter)) leaf_name_data.push_back(ccwbrfchannelmpegpkts.get_name_leafdata());
    if (ccwbrfchannelstoragetype.is_set || is_set(ccwbrfchannelstoragetype.yfilter)) leaf_name_data.push_back(ccwbrfchannelstoragetype.get_name_leafdata());
    if (ccwbrfchannelrowstatus.is_set || is_set(ccwbrfchannelrowstatus.yfilter)) leaf_name_data.push_back(ccwbrfchannelrowstatus.get_name_leafdata());
    if (ccwbrfchannelutilization.is_set || is_set(ccwbrfchannelutilization.yfilter)) leaf_name_data.push_back(ccwbrfchannelutilization.get_name_leafdata());
    if (ccwbrfchannelfrequencyrev1.is_set || is_set(ccwbrfchannelfrequencyrev1.yfilter)) leaf_name_data.push_back(ccwbrfchannelfrequencyrev1.get_name_leafdata());
    if (ccwbrfchanqamipaddresstype.is_set || is_set(ccwbrfchanqamipaddresstype.yfilter)) leaf_name_data.push_back(ccwbrfchanqamipaddresstype.get_name_leafdata());
    if (ccwbrfchanqamipaddress.is_set || is_set(ccwbrfchanqamipaddress.yfilter)) leaf_name_data.push_back(ccwbrfchanqamipaddress.get_name_leafdata());
    if (ccwbrfchanqammacaddress.is_set || is_set(ccwbrfchanqammacaddress.yfilter)) leaf_name_data.push_back(ccwbrfchanqammacaddress.get_name_leafdata());
    if (ccwbrfchanqamudpport.is_set || is_set(ccwbrfchanqamudpport.yfilter)) leaf_name_data.push_back(ccwbrfchanqamudpport.get_name_leafdata());
    if (ccwbrfchanqamtos.is_set || is_set(ccwbrfchanqamtos.yfilter)) leaf_name_data.push_back(ccwbrfchanqamtos.get_name_leafdata());
    if (ccwbrfchanqamvlanid.is_set || is_set(ccwbrfchanqamvlanid.yfilter)) leaf_name_data.push_back(ccwbrfchanqamvlanid.get_name_leafdata());
    if (ccwbrfchanqamprioritybits.is_set || is_set(ccwbrfchanqamprioritybits.yfilter)) leaf_name_data.push_back(ccwbrfchanqamprioritybits.get_name_leafdata());
    if (ccwbrfchanqamdepiremoteid.is_set || is_set(ccwbrfchanqamdepiremoteid.yfilter)) leaf_name_data.push_back(ccwbrfchanqamdepiremoteid.get_name_leafdata());
    if (ccwbrfchanqamdepitunnel.is_set || is_set(ccwbrfchanqamdepitunnel.yfilter)) leaf_name_data.push_back(ccwbrfchanqamdepitunnel.get_name_leafdata());
    if (ccwbrfchanqamtsid.is_set || is_set(ccwbrfchanqamtsid.yfilter)) leaf_name_data.push_back(ccwbrfchanqamtsid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelNum")
    {
        ccwbrfchannelnum = value;
        ccwbrfchannelnum.value_namespace = name_space;
        ccwbrfchannelnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelFrequency")
    {
        ccwbrfchannelfrequency = value;
        ccwbrfchannelfrequency.value_namespace = name_space;
        ccwbrfchannelfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelWidth")
    {
        ccwbrfchannelwidth = value;
        ccwbrfchannelwidth.value_namespace = name_space;
        ccwbrfchannelwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelModulation")
    {
        ccwbrfchannelmodulation = value;
        ccwbrfchannelmodulation.value_namespace = name_space;
        ccwbrfchannelmodulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelAnnex")
    {
        ccwbrfchannelannex = value;
        ccwbrfchannelannex.value_namespace = name_space;
        ccwbrfchannelannex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelMpegPkts")
    {
        ccwbrfchannelmpegpkts = value;
        ccwbrfchannelmpegpkts.value_namespace = name_space;
        ccwbrfchannelmpegpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelStorageType")
    {
        ccwbrfchannelstoragetype = value;
        ccwbrfchannelstoragetype.value_namespace = name_space;
        ccwbrfchannelstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelRowStatus")
    {
        ccwbrfchannelrowstatus = value;
        ccwbrfchannelrowstatus.value_namespace = name_space;
        ccwbrfchannelrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelUtilization")
    {
        ccwbrfchannelutilization = value;
        ccwbrfchannelutilization.value_namespace = name_space;
        ccwbrfchannelutilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelFrequencyRev1")
    {
        ccwbrfchannelfrequencyrev1 = value;
        ccwbrfchannelfrequencyrev1.value_namespace = name_space;
        ccwbrfchannelfrequencyrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamIPAddressType")
    {
        ccwbrfchanqamipaddresstype = value;
        ccwbrfchanqamipaddresstype.value_namespace = name_space;
        ccwbrfchanqamipaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamIPAddress")
    {
        ccwbrfchanqamipaddress = value;
        ccwbrfchanqamipaddress.value_namespace = name_space;
        ccwbrfchanqamipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamMacAddress")
    {
        ccwbrfchanqammacaddress = value;
        ccwbrfchanqammacaddress.value_namespace = name_space;
        ccwbrfchanqammacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamUdpPort")
    {
        ccwbrfchanqamudpport = value;
        ccwbrfchanqamudpport.value_namespace = name_space;
        ccwbrfchanqamudpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamTos")
    {
        ccwbrfchanqamtos = value;
        ccwbrfchanqamtos.value_namespace = name_space;
        ccwbrfchanqamtos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamVlanId")
    {
        ccwbrfchanqamvlanid = value;
        ccwbrfchanqamvlanid.value_namespace = name_space;
        ccwbrfchanqamvlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamPriorityBits")
    {
        ccwbrfchanqamprioritybits = value;
        ccwbrfchanqamprioritybits.value_namespace = name_space;
        ccwbrfchanqamprioritybits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamDepiRemoteId")
    {
        ccwbrfchanqamdepiremoteid = value;
        ccwbrfchanqamdepiremoteid.value_namespace = name_space;
        ccwbrfchanqamdepiremoteid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamDepiTunnel")
    {
        ccwbrfchanqamdepitunnel = value;
        ccwbrfchanqamdepitunnel.value_namespace = name_space;
        ccwbrfchanqamdepitunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChanQamTsid")
    {
        ccwbrfchanqamtsid = value;
        ccwbrfchanqamtsid.value_namespace = name_space;
        ccwbrfchanqamtsid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelNum")
    {
        ccwbrfchannelnum.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelFrequency")
    {
        ccwbrfchannelfrequency.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelWidth")
    {
        ccwbrfchannelwidth.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelModulation")
    {
        ccwbrfchannelmodulation.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelAnnex")
    {
        ccwbrfchannelannex.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelMpegPkts")
    {
        ccwbrfchannelmpegpkts.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelStorageType")
    {
        ccwbrfchannelstoragetype.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelRowStatus")
    {
        ccwbrfchannelrowstatus.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelUtilization")
    {
        ccwbrfchannelutilization.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelFrequencyRev1")
    {
        ccwbrfchannelfrequencyrev1.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamIPAddressType")
    {
        ccwbrfchanqamipaddresstype.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamIPAddress")
    {
        ccwbrfchanqamipaddress.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamMacAddress")
    {
        ccwbrfchanqammacaddress.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamUdpPort")
    {
        ccwbrfchanqamudpport.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamTos")
    {
        ccwbrfchanqamtos.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamVlanId")
    {
        ccwbrfchanqamvlanid.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamPriorityBits")
    {
        ccwbrfchanqamprioritybits.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamDepiRemoteId")
    {
        ccwbrfchanqamdepiremoteid.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamDepiTunnel")
    {
        ccwbrfchanqamdepitunnel.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChanQamTsid")
    {
        ccwbrfchanqamtsid.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ccwbRFChannelNum" || name == "ccwbRFChannelFrequency" || name == "ccwbRFChannelWidth" || name == "ccwbRFChannelModulation" || name == "ccwbRFChannelAnnex" || name == "ccwbRFChannelMpegPkts" || name == "ccwbRFChannelStorageType" || name == "ccwbRFChannelRowStatus" || name == "ccwbRFChannelUtilization" || name == "ccwbRFChannelFrequencyRev1" || name == "ccwbRFChanQamIPAddressType" || name == "ccwbRFChanQamIPAddress" || name == "ccwbRFChanQamMacAddress" || name == "ccwbRFChanQamUdpPort" || name == "ccwbRFChanQamTos" || name == "ccwbRFChanQamVlanId" || name == "ccwbRFChanQamPriorityBits" || name == "ccwbRFChanQamDepiRemoteId" || name == "ccwbRFChanQamDepiTunnel" || name == "ccwbRFChanQamTsid")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingTable()
    :
    ccwbwbtorfmappingentry(this, {"ifindex", "entphysicalindex", "ccwbrfchannelnum"})
{

    yang_name = "ccwbWBtoRFMappingTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::~CcwbWBtoRFMappingTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbwbtorfmappingentry.len(); index++)
    {
        if(ccwbwbtorfmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbwbtorfmappingentry.len(); index++)
    {
        if(ccwbwbtorfmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBtoRFMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbWBtoRFMappingEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry>();
        c->parent = this;
        ccwbwbtorfmappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbwbtorfmappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbWBtoRFMappingEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::CcwbWBtoRFMappingEntry()
    :
    ifindex{YType::str, "ifIndex"},
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ccwbrfchannelnum{YType::str, "ccwbRFChannelNum"},
    ccwbwbtorfbandwidth{YType::uint32, "ccwbWBtoRFBandwidth"},
    ccwbwbtorfstoragetype{YType::enumeration, "ccwbWBtoRFStorageType"},
    ccwbwbtorfrowstatus{YType::enumeration, "ccwbWBtoRFRowStatus"}
{

    yang_name = "ccwbWBtoRFMappingEntry"; yang_parent_name = "ccwbWBtoRFMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::~CcwbWBtoRFMappingEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| entphysicalindex.is_set
	|| ccwbrfchannelnum.is_set
	|| ccwbwbtorfbandwidth.is_set
	|| ccwbwbtorfstoragetype.is_set
	|| ccwbwbtorfrowstatus.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ccwbrfchannelnum.yfilter)
	|| ydk::is_set(ccwbwbtorfbandwidth.yfilter)
	|| ydk::is_set(ccwbwbtorfstoragetype.yfilter)
	|| ydk::is_set(ccwbwbtorfrowstatus.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbWBtoRFMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBtoRFMappingEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ccwbrfchannelnum, "ccwbRFChannelNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ccwbrfchannelnum.is_set || is_set(ccwbrfchannelnum.yfilter)) leaf_name_data.push_back(ccwbrfchannelnum.get_name_leafdata());
    if (ccwbwbtorfbandwidth.is_set || is_set(ccwbwbtorfbandwidth.yfilter)) leaf_name_data.push_back(ccwbwbtorfbandwidth.get_name_leafdata());
    if (ccwbwbtorfstoragetype.is_set || is_set(ccwbwbtorfstoragetype.yfilter)) leaf_name_data.push_back(ccwbwbtorfstoragetype.get_name_leafdata());
    if (ccwbwbtorfrowstatus.is_set || is_set(ccwbwbtorfrowstatus.yfilter)) leaf_name_data.push_back(ccwbwbtorfrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbRFChannelNum")
    {
        ccwbrfchannelnum = value;
        ccwbrfchannelnum.value_namespace = name_space;
        ccwbrfchannelnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBtoRFBandwidth")
    {
        ccwbwbtorfbandwidth = value;
        ccwbwbtorfbandwidth.value_namespace = name_space;
        ccwbwbtorfbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBtoRFStorageType")
    {
        ccwbwbtorfstoragetype = value;
        ccwbwbtorfstoragetype.value_namespace = name_space;
        ccwbwbtorfstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBtoRFRowStatus")
    {
        ccwbwbtorfrowstatus = value;
        ccwbwbtorfrowstatus.value_namespace = name_space;
        ccwbwbtorfrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ccwbRFChannelNum")
    {
        ccwbrfchannelnum.yfilter = yfilter;
    }
    if(value_path == "ccwbWBtoRFBandwidth")
    {
        ccwbwbtorfbandwidth.yfilter = yfilter;
    }
    if(value_path == "ccwbWBtoRFStorageType")
    {
        ccwbwbtorfstoragetype.yfilter = yfilter;
    }
    if(value_path == "ccwbWBtoRFRowStatus")
    {
        ccwbwbtorfrowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoRFMappingTable::CcwbWBtoRFMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "entPhysicalIndex" || name == "ccwbRFChannelNum" || name == "ccwbWBtoRFBandwidth" || name == "ccwbWBtoRFStorageType" || name == "ccwbWBtoRFRowStatus")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingTable()
    :
    ccwbwbtonbmappingentry(this, {"ifindex", "ccwbwbtonbifindexfornb"})
{

    yang_name = "ccwbWBtoNBMappingTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::~CcwbWBtoNBMappingTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbwbtonbmappingentry.len(); index++)
    {
        if(ccwbwbtonbmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbwbtonbmappingentry.len(); index++)
    {
        if(ccwbwbtonbmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBtoNBMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbWBtoNBMappingEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry>();
        c->parent = this;
        ccwbwbtonbmappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbwbtonbmappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbWBtoNBMappingEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::CcwbWBtoNBMappingEntry()
    :
    ifindex{YType::str, "ifIndex"},
    ccwbwbtonbifindexfornb{YType::int32, "ccwbWBtoNBifIndexForNB"},
    ccwbwbtonbstoragetype{YType::enumeration, "ccwbWBtoNBStorageType"},
    ccwbwbtonbrowstatus{YType::enumeration, "ccwbWBtoNBRowStatus"}
{

    yang_name = "ccwbWBtoNBMappingEntry"; yang_parent_name = "ccwbWBtoNBMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::~CcwbWBtoNBMappingEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| ccwbwbtonbifindexfornb.is_set
	|| ccwbwbtonbstoragetype.is_set
	|| ccwbwbtonbrowstatus.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ccwbwbtonbifindexfornb.yfilter)
	|| ydk::is_set(ccwbwbtonbstoragetype.yfilter)
	|| ydk::is_set(ccwbwbtonbrowstatus.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbWBtoNBMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBtoNBMappingEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(ccwbwbtonbifindexfornb, "ccwbWBtoNBifIndexForNB");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ccwbwbtonbifindexfornb.is_set || is_set(ccwbwbtonbifindexfornb.yfilter)) leaf_name_data.push_back(ccwbwbtonbifindexfornb.get_name_leafdata());
    if (ccwbwbtonbstoragetype.is_set || is_set(ccwbwbtonbstoragetype.yfilter)) leaf_name_data.push_back(ccwbwbtonbstoragetype.get_name_leafdata());
    if (ccwbwbtonbrowstatus.is_set || is_set(ccwbwbtonbrowstatus.yfilter)) leaf_name_data.push_back(ccwbwbtonbrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBtoNBifIndexForNB")
    {
        ccwbwbtonbifindexfornb = value;
        ccwbwbtonbifindexfornb.value_namespace = name_space;
        ccwbwbtonbifindexfornb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBtoNBStorageType")
    {
        ccwbwbtonbstoragetype = value;
        ccwbwbtonbstoragetype.value_namespace = name_space;
        ccwbwbtonbstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBtoNBRowStatus")
    {
        ccwbwbtonbrowstatus = value;
        ccwbwbtonbrowstatus.value_namespace = name_space;
        ccwbwbtonbrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ccwbWBtoNBifIndexForNB")
    {
        ccwbwbtonbifindexfornb.yfilter = yfilter;
    }
    if(value_path == "ccwbWBtoNBStorageType")
    {
        ccwbwbtonbstoragetype.yfilter = yfilter;
    }
    if(value_path == "ccwbWBtoNBRowStatus")
    {
        ccwbwbtonbrowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBtoNBMappingTable::CcwbWBtoNBMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ccwbWBtoNBifIndexForNB" || name == "ccwbWBtoNBStorageType" || name == "ccwbWBtoNBRowStatus")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpTable()
    :
    ccwbwbbondgrpentry(this, {"ifindex"})
{

    yang_name = "ccwbWBBondGrpTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::~CcwbWBBondGrpTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbwbbondgrpentry.len(); index++)
    {
        if(ccwbwbbondgrpentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbwbbondgrpentry.len(); index++)
    {
        if(ccwbwbbondgrpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBBondGrpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbWBBondGrpEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry>();
        c->parent = this;
        ccwbwbbondgrpentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbwbbondgrpentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbWBBondGrpEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::CcwbWBBondGrpEntry()
    :
    ifindex{YType::str, "ifIndex"},
    ccwbwbbondgrpsecondary{YType::boolean, "ccwbWBBondGrpSecondary"}
{

    yang_name = "ccwbWBBondGrpEntry"; yang_parent_name = "ccwbWBBondGrpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::~CcwbWBBondGrpEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| ccwbwbbondgrpsecondary.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ccwbwbbondgrpsecondary.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbWBBondGrpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBBondGrpEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ccwbwbbondgrpsecondary.is_set || is_set(ccwbwbbondgrpsecondary.yfilter)) leaf_name_data.push_back(ccwbwbbondgrpsecondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBBondGrpSecondary")
    {
        ccwbwbbondgrpsecondary = value;
        ccwbwbbondgrpsecondary.value_namespace = name_space;
        ccwbwbbondgrpsecondary.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ccwbWBBondGrpSecondary")
    {
        ccwbwbbondgrpsecondary.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBBondGrpTable::CcwbWBBondGrpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ccwbWBBondGrpSecondary")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusTable()
    :
    ccwbwbcmstatusentry(this, {"docsifcmtscmstatusindex"})
{

    yang_name = "ccwbWBCmStatusTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::~CcwbWBCmStatusTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbwbcmstatusentry.len(); index++)
    {
        if(ccwbwbcmstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbwbcmstatusentry.len(); index++)
    {
        if(ccwbwbcmstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBCmStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbWBCmStatusEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry>();
        c->parent = this;
        ccwbwbcmstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbwbcmstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbWBCmStatusEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusEntry()
    :
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    ccwbwbcmstatusvalue{YType::enumeration, "ccwbWBCmStatusValue"}
{

    yang_name = "ccwbWBCmStatusEntry"; yang_parent_name = "ccwbWBCmStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::~CcwbWBCmStatusEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| ccwbwbcmstatusvalue.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(ccwbwbcmstatusvalue.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbWBCmStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBCmStatusEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (ccwbwbcmstatusvalue.is_set || is_set(ccwbwbcmstatusvalue.yfilter)) leaf_name_data.push_back(ccwbwbcmstatusvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBCmStatusValue")
    {
        ccwbwbcmstatusvalue = value;
        ccwbwbcmstatusvalue.value_namespace = name_space;
        ccwbwbcmstatusvalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "ccwbWBCmStatusValue")
    {
        ccwbwbcmstatusvalue.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "ccwbWBCmStatusValue")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtTable()
    :
    ccwbwbcmstatusextentry(this, {"docsifcmtscmstatusindex", "ccwbwbcmstatusextindex"})
{

    yang_name = "ccwbWBCmStatusExtTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::~CcwbWBCmStatusExtTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbwbcmstatusextentry.len(); index++)
    {
        if(ccwbwbcmstatusextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbwbcmstatusextentry.len(); index++)
    {
        if(ccwbwbcmstatusextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBCmStatusExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbWBCmStatusExtEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry>();
        c->parent = this;
        ccwbwbcmstatusextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbwbcmstatusextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbWBCmStatusExtEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::CcwbWBCmStatusExtEntry()
    :
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    ccwbwbcmstatusextindex{YType::int32, "ccwbWBCmStatusExtIndex"},
    ccwbwbcmwbifindex{YType::int32, "ccwbWBCmWBIfindex"}
{

    yang_name = "ccwbWBCmStatusExtEntry"; yang_parent_name = "ccwbWBCmStatusExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::~CcwbWBCmStatusExtEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| ccwbwbcmstatusextindex.is_set
	|| ccwbwbcmwbifindex.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(ccwbwbcmstatusextindex.yfilter)
	|| ydk::is_set(ccwbwbcmwbifindex.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbWBCmStatusExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbWBCmStatusExtEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    ADD_KEY_TOKEN(ccwbwbcmstatusextindex, "ccwbWBCmStatusExtIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (ccwbwbcmstatusextindex.is_set || is_set(ccwbwbcmstatusextindex.yfilter)) leaf_name_data.push_back(ccwbwbcmstatusextindex.get_name_leafdata());
    if (ccwbwbcmwbifindex.is_set || is_set(ccwbwbcmwbifindex.yfilter)) leaf_name_data.push_back(ccwbwbcmwbifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBCmStatusExtIndex")
    {
        ccwbwbcmstatusextindex = value;
        ccwbwbcmstatusextindex.value_namespace = name_space;
        ccwbwbcmstatusextindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbWBCmWBIfindex")
    {
        ccwbwbcmwbifindex = value;
        ccwbwbcmwbifindex.value_namespace = name_space;
        ccwbwbcmwbifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "ccwbWBCmStatusExtIndex")
    {
        ccwbwbcmstatusextindex.yfilter = yfilter;
    }
    if(value_path == "ccwbWBCmWBIfindex")
    {
        ccwbwbcmwbifindex.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusExtTable::CcwbWBCmStatusExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "ccwbWBCmStatusExtIndex" || name == "ccwbWBCmWBIfindex")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrTable()
    :
    ccwbfibernodedescrentry(this, {"ccwbfibernodeid"})
{

    yang_name = "ccwbFiberNodeDescrTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::~CcwbFiberNodeDescrTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbfibernodedescrentry.len(); index++)
    {
        if(ccwbfibernodedescrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbfibernodedescrentry.len(); index++)
    {
        if(ccwbfibernodedescrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbFiberNodeDescrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbFiberNodeDescrEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry>();
        c->parent = this;
        ccwbfibernodedescrentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbfibernodedescrentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbFiberNodeDescrEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::CcwbFiberNodeDescrEntry()
    :
    ccwbfibernodeid{YType::str, "ccwbFiberNodeID"},
    ccwbfibernodedescription{YType::str, "ccwbFiberNodeDescription"},
    ccwbfibernodedescrstoragetype{YType::enumeration, "ccwbFiberNodeDescrStorageType"},
    ccwbfibernodedescrrowstatus{YType::enumeration, "ccwbFiberNodeDescrRowStatus"}
{

    yang_name = "ccwbFiberNodeDescrEntry"; yang_parent_name = "ccwbFiberNodeDescrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::~CcwbFiberNodeDescrEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccwbfibernodeid.is_set
	|| ccwbfibernodedescription.is_set
	|| ccwbfibernodedescrstoragetype.is_set
	|| ccwbfibernodedescrrowstatus.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccwbfibernodeid.yfilter)
	|| ydk::is_set(ccwbfibernodedescription.yfilter)
	|| ydk::is_set(ccwbfibernodedescrstoragetype.yfilter)
	|| ydk::is_set(ccwbfibernodedescrrowstatus.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbFiberNodeDescrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbFiberNodeDescrEntry";
    ADD_KEY_TOKEN(ccwbfibernodeid, "ccwbFiberNodeID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccwbfibernodeid.is_set || is_set(ccwbfibernodeid.yfilter)) leaf_name_data.push_back(ccwbfibernodeid.get_name_leafdata());
    if (ccwbfibernodedescription.is_set || is_set(ccwbfibernodedescription.yfilter)) leaf_name_data.push_back(ccwbfibernodedescription.get_name_leafdata());
    if (ccwbfibernodedescrstoragetype.is_set || is_set(ccwbfibernodedescrstoragetype.yfilter)) leaf_name_data.push_back(ccwbfibernodedescrstoragetype.get_name_leafdata());
    if (ccwbfibernodedescrrowstatus.is_set || is_set(ccwbfibernodedescrrowstatus.yfilter)) leaf_name_data.push_back(ccwbfibernodedescrrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccwbFiberNodeID")
    {
        ccwbfibernodeid = value;
        ccwbfibernodeid.value_namespace = name_space;
        ccwbfibernodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeDescription")
    {
        ccwbfibernodedescription = value;
        ccwbfibernodedescription.value_namespace = name_space;
        ccwbfibernodedescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeDescrStorageType")
    {
        ccwbfibernodedescrstoragetype = value;
        ccwbfibernodedescrstoragetype.value_namespace = name_space;
        ccwbfibernodedescrstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeDescrRowStatus")
    {
        ccwbfibernodedescrrowstatus = value;
        ccwbfibernodedescrrowstatus.value_namespace = name_space;
        ccwbfibernodedescrrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccwbFiberNodeID")
    {
        ccwbfibernodeid.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeDescription")
    {
        ccwbfibernodedescription.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeDescrStorageType")
    {
        ccwbfibernodedescrstoragetype.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeDescrRowStatus")
    {
        ccwbfibernodedescrrowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeDescrTable::CcwbFiberNodeDescrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbFiberNodeID" || name == "ccwbFiberNodeDescription" || name == "ccwbFiberNodeDescrStorageType" || name == "ccwbFiberNodeDescrRowStatus")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeTable()
    :
    ccwbfibernodeentry(this, {"ccwbfibernodeid", "ccwbfibernodeglobrfid"})
{

    yang_name = "ccwbFiberNodeTable"; yang_parent_name = "CISCO-CABLE-WIDEBAND-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::~CcwbFiberNodeTable()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccwbfibernodeentry.len(); index++)
    {
        if(ccwbfibernodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::has_operation() const
{
    for (std::size_t index=0; index<ccwbfibernodeentry.len(); index++)
    {
        if(ccwbfibernodeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbFiberNodeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccwbFiberNodeEntry")
    {
        auto c = std::make_shared<CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry>();
        c->parent = this;
        ccwbfibernodeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccwbfibernodeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbFiberNodeEntry")
        return true;
    return false;
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::CcwbFiberNodeEntry()
    :
    ccwbfibernodeid{YType::uint32, "ccwbFiberNodeID"},
    ccwbfibernodeglobrfid{YType::uint32, "ccwbFiberNodeGlobRFID"},
    ccwbfibernodenbifindx{YType::int32, "ccwbFiberNodeNBIfIndx"},
    ccwbfibernodewbcontlrphyindx{YType::int32, "ccwbFiberNodeWBContlrPhyIndx"},
    ccwbfibernodewbrfport{YType::int32, "ccwbFiberNodeWBRFPort"},
    ccwbfibernodestoragetype{YType::enumeration, "ccwbFiberNodeStorageType"},
    ccwbfibernoderowstatus{YType::enumeration, "ccwbFiberNodeRowStatus"}
{

    yang_name = "ccwbFiberNodeEntry"; yang_parent_name = "ccwbFiberNodeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::~CcwbFiberNodeEntry()
{
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccwbfibernodeid.is_set
	|| ccwbfibernodeglobrfid.is_set
	|| ccwbfibernodenbifindx.is_set
	|| ccwbfibernodewbcontlrphyindx.is_set
	|| ccwbfibernodewbrfport.is_set
	|| ccwbfibernodestoragetype.is_set
	|| ccwbfibernoderowstatus.is_set;
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccwbfibernodeid.yfilter)
	|| ydk::is_set(ccwbfibernodeglobrfid.yfilter)
	|| ydk::is_set(ccwbfibernodenbifindx.yfilter)
	|| ydk::is_set(ccwbfibernodewbcontlrphyindx.yfilter)
	|| ydk::is_set(ccwbfibernodewbrfport.yfilter)
	|| ydk::is_set(ccwbfibernodestoragetype.yfilter)
	|| ydk::is_set(ccwbfibernoderowstatus.yfilter);
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-WIDEBAND-MIB:CISCO-CABLE-WIDEBAND-MIB/ccwbFiberNodeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccwbFiberNodeEntry";
    ADD_KEY_TOKEN(ccwbfibernodeid, "ccwbFiberNodeID");
    ADD_KEY_TOKEN(ccwbfibernodeglobrfid, "ccwbFiberNodeGlobRFID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccwbfibernodeid.is_set || is_set(ccwbfibernodeid.yfilter)) leaf_name_data.push_back(ccwbfibernodeid.get_name_leafdata());
    if (ccwbfibernodeglobrfid.is_set || is_set(ccwbfibernodeglobrfid.yfilter)) leaf_name_data.push_back(ccwbfibernodeglobrfid.get_name_leafdata());
    if (ccwbfibernodenbifindx.is_set || is_set(ccwbfibernodenbifindx.yfilter)) leaf_name_data.push_back(ccwbfibernodenbifindx.get_name_leafdata());
    if (ccwbfibernodewbcontlrphyindx.is_set || is_set(ccwbfibernodewbcontlrphyindx.yfilter)) leaf_name_data.push_back(ccwbfibernodewbcontlrphyindx.get_name_leafdata());
    if (ccwbfibernodewbrfport.is_set || is_set(ccwbfibernodewbrfport.yfilter)) leaf_name_data.push_back(ccwbfibernodewbrfport.get_name_leafdata());
    if (ccwbfibernodestoragetype.is_set || is_set(ccwbfibernodestoragetype.yfilter)) leaf_name_data.push_back(ccwbfibernodestoragetype.get_name_leafdata());
    if (ccwbfibernoderowstatus.is_set || is_set(ccwbfibernoderowstatus.yfilter)) leaf_name_data.push_back(ccwbfibernoderowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccwbFiberNodeID")
    {
        ccwbfibernodeid = value;
        ccwbfibernodeid.value_namespace = name_space;
        ccwbfibernodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeGlobRFID")
    {
        ccwbfibernodeglobrfid = value;
        ccwbfibernodeglobrfid.value_namespace = name_space;
        ccwbfibernodeglobrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeNBIfIndx")
    {
        ccwbfibernodenbifindx = value;
        ccwbfibernodenbifindx.value_namespace = name_space;
        ccwbfibernodenbifindx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeWBContlrPhyIndx")
    {
        ccwbfibernodewbcontlrphyindx = value;
        ccwbfibernodewbcontlrphyindx.value_namespace = name_space;
        ccwbfibernodewbcontlrphyindx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeWBRFPort")
    {
        ccwbfibernodewbrfport = value;
        ccwbfibernodewbrfport.value_namespace = name_space;
        ccwbfibernodewbrfport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeStorageType")
    {
        ccwbfibernodestoragetype = value;
        ccwbfibernodestoragetype.value_namespace = name_space;
        ccwbfibernodestoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccwbFiberNodeRowStatus")
    {
        ccwbfibernoderowstatus = value;
        ccwbfibernoderowstatus.value_namespace = name_space;
        ccwbfibernoderowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccwbFiberNodeID")
    {
        ccwbfibernodeid.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeGlobRFID")
    {
        ccwbfibernodeglobrfid.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeNBIfIndx")
    {
        ccwbfibernodenbifindx.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeWBContlrPhyIndx")
    {
        ccwbfibernodewbcontlrphyindx.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeWBRFPort")
    {
        ccwbfibernodewbrfport.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeStorageType")
    {
        ccwbfibernodestoragetype.yfilter = yfilter;
    }
    if(value_path == "ccwbFiberNodeRowStatus")
    {
        ccwbfibernoderowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLEWIDEBANDMIB::CcwbFiberNodeTable::CcwbFiberNodeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccwbFiberNodeID" || name == "ccwbFiberNodeGlobRFID" || name == "ccwbFiberNodeNBIfIndx" || name == "ccwbFiberNodeWBContlrPhyIndx" || name == "ccwbFiberNodeWBRFPort" || name == "ccwbFiberNodeStorageType" || name == "ccwbFiberNodeRowStatus")
        return true;
    return false;
}

const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelModulation::qam64 {1, "qam64"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelModulation::qam256 {2, "qam256"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelModulation::qam1024 {3, "qam1024"};

const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelAnnex::annexA {1, "annexA"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelAnnex::annexB {2, "annexB"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbRFChannelTable::CcwbRFChannelEntry::CcwbRFChannelAnnex::annexC {3, "annexC"};

const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::offline {1, "offline"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::others {2, "others"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::initRangingRcvd {3, "initRangingRcvd"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::initDhcpReqRcvd {4, "initDhcpReqRcvd"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::onlineNetAccessDisabled {5, "onlineNetAccessDisabled"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::onlineKekAssigned {6, "onlineKekAssigned"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::onlineTekAssigned {7, "onlineTekAssigned"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::rejectBadMic {8, "rejectBadMic"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::rejectBadCos {9, "rejectBadCos"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::kekRejected {10, "kekRejected"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::tekRejected {11, "tekRejected"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::online {12, "online"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::initTftpPacketRcvd {13, "initTftpPacketRcvd"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::initTodRequestRcvd {14, "initTodRequestRcvd"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::reset {15, "reset"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::rangingInProgress {16, "rangingInProgress"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::dhcpGotIpAddr {17, "dhcpGotIpAddr"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::rejStaleConfig {18, "rejStaleConfig"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::rejIpSpoof {19, "rejIpSpoof"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::rejClassFail {20, "rejClassFail"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::rejRegNack {21, "rejRegNack"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::bpiKekExpired {22, "bpiKekExpired"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::bpiTekExpired {23, "bpiTekExpired"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::shutdown {24, "shutdown"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::channelChgInitRangingRcvd {25, "channelChgInitRangingRcvd"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::channelChgRangingInProgress {26, "channelChgRangingInProgress"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbOnline {27, "wbOnline"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbOnlinePrivacy {28, "wbOnlinePrivacy"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbOnlineKekAssigned {29, "wbOnlineKekAssigned"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbOnlineTekAssigned {30, "wbOnlineTekAssigned"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbOnlineNetAccessDis {31, "wbOnlineNetAccessDis"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbKekReject {32, "wbKekReject"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbTekReject {33, "wbTekReject"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbNetAccessDisReject {34, "wbNetAccessDisReject"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbPrivacyEnabReject {35, "wbPrivacyEnabReject"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbKekExpire {36, "wbKekExpire"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbTekExpire {37, "wbTekExpire"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbNetAccessDisExpire {38, "wbNetAccessDisExpire"};
const Enum::YLeaf CISCOCABLEWIDEBANDMIB::CcwbWBCmStatusTable::CcwbWBCmStatusEntry::CcwbWBCmStatusValue::wbPrivacyEnabExpire {39, "wbPrivacyEnabExpire"};


}
}

